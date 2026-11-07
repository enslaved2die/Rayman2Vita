/* boot.c - host-side model of everything underneath the game's 1ST_READ.BIN: memory init, BIOS vectors, SH-4 on-chip
 * registers, ASIC/PVR/AICA/maple register file, timers, hook infrastructure, tracing. See hle.h. */
#define _DARWIN_C_SOURCE
#include "hle_priv.h"
#include "perf.h"
#include "swflag.h"
#include "r2prof.h"
#include "ta.h"
#include <setjmp.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#if defined(__vita__)
#include <psp2/kernel/clib.h>
#include <psp2/kernel/processmgr.h>
#endif

/* ---------------------------------------------------------------- globals / tracing */
uint32_t hle_ring[256][2]; uint32_t hle_ring_pos; int hle_trace_on;
int hle_verbose = 1;
extern int hle_stop_on_unhandled;
unsigned long hle_frame_count;
FILE *hle_trace_fp; unsigned long hle_trace_max = 0, hle_trace_n = 0;
static SH4Ctx *G;                       /* the single guest context */
static jmp_buf run_jmp; static int run_jmp_valid; static char stop_reason[256]; static int stop_code;
static const char *g_dcdata = ".";

/* guest-visible clock = host monotonic + skew. --fast (hle_no_pace) skips the 60 Hz sleep by adding the skipped time to skew, so the guest sees
 * exactly the same 16.7 ms/vblank timeline as a paced run (the game's menu/fade/input logic is driven by TMU/SPG time; without this a
 * --fast run advances guest time only ~3 ms per frame and the Main Menu never accepts NEW GAME). */
static volatile uint64_t clock_skew_ns;
/* Guest-clock ceiling (slow-guest handling): the guest-visible clock may not run more than `slack` ahead of the vblank timeline (next due vblank).
 * A guest that keeps up never notices (it waits for the vblank anyway). A guest that is slower than 60 Hz (Vita / Vita3K) then sees at most
 * ~slack extra per vblank, i.e. it runs in slow motion instead of seeing one huge time step per frame. This keeps the AICA sample clock (snd.c, slaved
 * to this clock) consistent with the rate at which the guest can refill the music stream rings (8192 samples = 0.37 s); with a wall-clock sample clock
 * the rings were lapped between refills and the first fraction of a second repeated. Default slack: 17 ms on Vita, off on the host;
 * env R2_CLOCK_CAP_MS=<ms> overrides (0 = off). Only the guest thread may call now_ns()/hle_time_us(). */
static uint64_t next_vb_ns; static unsigned long vb_delivered;
static uint64_t clock_slack_ns, clock_lag_ns, clock_last; static int clock_cap_init;
/* raw host monotonic nanoseconds. Vita: newlib's clock_gettime(CLOCK_MONOTONIC) is sceKernelGetProcessTimeWide() plus a 64-bit division per call (and now_ns() runs on every TMU/SPG
 * read and on every AICA wave-RAM access); read the process-time counter (us) directly. */
static inline uint64_t raw_ns(void) {
#if defined(__vita__)
    return (uint64_t)sceKernelGetProcessTimeWide() * 1000ull;
#else
    /* R2_DET_CLOCK=1 (host A/B testing): the host clock is replaced by a counter that advances 997 ns per read, so the guest's timing-dependent logic (delta times, animation) is a pure
     * function of the instruction stream: two runs of the same binary produce identical guest RAM, which lets optimisations be verified by comparing RAM dumps / frame hashes. */
    static int det = -1; static uint64_t det_ns; extern uint64_t hle_det_reads;
    if (det < 0) { const char *e = getenv("R2_DET_CLOCK"); det = e && *e && *e != '0'; }
    if (det) { det_ns += 997; hle_det_reads++; return det_ns; }
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return (uint64_t)ts.tv_sec * 1000000000ull + ts.tv_nsec;
#endif
}
static uint64_t now_ns(void) {
    uint64_t r = raw_ns() + clock_skew_ns;
    if (!clock_cap_init) {
        clock_cap_init = 1; const char *e = getenv("R2_CLOCK_CAP_MS");
#if defined(__vita__)
        clock_slack_ns = e ? (uint64_t)atol(e) * 1000000ull : 17000000ull;
#else
        clock_slack_ns = e ? (uint64_t)atol(e) * 1000000ull : 0;
#endif
    }
    r -= clock_lag_ns;
    if (clock_slack_ns && vb_delivered) { uint64_t ceil = next_vb_ns + clock_slack_ns; if (r > ceil && ceil >= clock_last) { clock_lag_ns += r - ceil; r = ceil; } }
    if (r < clock_last) r = clock_last;
    clock_last = r; return r;
}
static uint64_t t0_ns;
uint64_t hle_time_us(void) { return (now_ns() - t0_ns) / 1000; }

void hle_log(const char *fmt, ...) {
    va_list ap; va_start(ap, fmt);
#if defined(__vita__)
    char buf[512]; vsnprintf(buf, sizeof buf, fmt, ap);
    sceClibPrintf("%s\n", buf);
#else
    vfprintf(stderr, fmt, ap); fputc('\n', stderr);
#endif
    va_end(ap);
}
const char *hle_cstr(uint32_t a) {
    if (!hle_is_ram(a)) return "<bad>";
    return (const char *)hle_ptr(a);
}
static int looks_str(uint32_t a) {
    if (!hle_is_ram(a) || a < 0x8C000000u) return 0;
    const unsigned char *p = hle_ptr(a); int n = 0;
    if (a >= 0x8D000000u - 1) return 0;
    while (n < 120 && p[n] >= 32 && p[n] < 127) n++;
    return n >= 3 && p[n] == 0;
}
static int trace_wanted, async_countdown = -1, in_async;
static int asic_flush_one(void); static void update_trace_flag(void);
/* R2_WATCH=hexaddr[,hexaddr...]: report (with the guest function-entry ring) the first function entry after which a watched 32-bit word changed */
static uint32_t watch_a[4], watch_v[4]; static int watch_n; static unsigned watch_reports;
static void watch_check(SH4Ctx *c) {
    for (int i = 0; i < watch_n; i++) {
        uint32_t v = LD32(watch_a[i]);
        if (v != watch_v[i]) {
            if (watch_reports++ < 40) {
                fprintf(stderr, "[watch] %08x: %08x -> %08x  (changed during/after f_%08x, then entry of next fn; sp=%08x pr=%08x). last entries:", watch_a[i], watch_v[i], v, hle_ring[(hle_ring_pos - 2) & 255][0], c->r[15], c->pr);
                for (int k = 8; k >= 1; k--) fprintf(stderr, " %08x/%08x", hle_ring[(hle_ring_pos - k) & 255][0], hle_ring[(hle_ring_pos - k) & 255][1]);
                fputc('\n', stderr);
            }
            watch_v[i] = v;
        }
    }
}
void hle_trace_enter(void *cc, uint32_t addr) {
    SH4Ctx *c = cc;
    if (watch_n) watch_check(c);
    if (async_countdown > 0) async_countdown--;
    if (async_countdown == 0 && !in_async && ((c->sr_other >> 4) & 15) != 15) {      /* deferred ASIC event: "interrupt" at a function boundary */
        in_async = 1; asic_flush_one(); in_async = 0; update_trace_flag();
    }
    if (!trace_wanted || !hle_trace_fp) return;
    if (hle_trace_max && hle_trace_n >= hle_trace_max) { trace_wanted = 0; update_trace_flag(); return; }
    hle_trace_n++;
    fprintf(hle_trace_fp, "f_%08x pr=%08x r4=%08x r5=%08x r6=%08x sp=%08x\n", addr, c->pr, c->r[4], c->r[5], c->r[6], c->r[15]);
}
void hle_set_trace(int on) { trace_wanted = on; update_trace_flag(); }
void hle_note_hook(SH4Ctx *c, uint32_t addr) {
    hle_log("[hook] f_%08x pr=%08x r4=%08x r5=%08x r6=%08x r7=%08x", addr, c->pr, c->r[4], c->r[5], c->r[6], c->r[7]);
}
/* spy: print args (and any argument that looks like a guest string) on entry - used for real guest-side evidence */
void hle_spy_call(SH4Ctx *c, uint32_t addr);
int hle_spy_n; static uint32_t spy_addr[64];
void hle_spy_add(uint32_t a) { if (hle_spy_n < 64) spy_addr[hle_spy_n++] = a; }
void hle_spy_check(SH4Ctx *c, uint32_t addr) { for (int i = 0; i < hle_spy_n; i++) if (spy_addr[i] == addr) { hle_spy_call(c, addr); return; } }
void hle_spy_call(SH4Ctx *c, uint32_t addr);
void hle_spy_call(SH4Ctx *c, uint32_t addr) {
    fprintf(stderr, "[spy] f_%08x pr=%08x", addr, c->pr);
    for (int i = 4; i <= 7; i++) {
        uint32_t v = c->r[i]; fprintf(stderr, " r%d=%08x", i, v);
        if (looks_str(v)) fprintf(stderr, "\"%.100s\"", hle_cstr(v));
    }
    fputc('\n', stderr);
}

static void update_trace_flag(void) { hle_trace_on = trace_wanted || async_countdown >= 0 || watch_n; }
void hle_async_arm(int countdown) { if (async_countdown < 0) async_countdown = countdown; update_trace_flag(); }
/* ---------------------------------------------------------------- hooks */
static const HleHookEnt *find_ent(uint32_t a) {
    for (unsigned i = 0; i < hle_hooktab_n; i++) if (hle_hooktab[i].addr == a) return &hle_hooktab[i];
    return 0;
}
void hle_hook(uint32_t addr, hle_fn fn) {
    const HleHookEnt *e = find_ent(addr);
    if (e) { *e->slot = fn; return; }
    hle_log("hle_hook: 0x%08x not in generated hookable set (literal missing in hle/*.c or not a function?) - indirect calls only", addr);
    sh4_register_hook(addr, fn);
}
void hle_orig(SH4Ctx *c, uint32_t addr) { const HleHookEnt *e = find_ent(addr); if (e) e->orig(c); else sh4_call(c, addr); }
void hle_call(SH4Ctx *c, uint32_t addr) { uint32_t pr = c->pr; sh4_call(c, addr); c->pr = pr; }

/* pseudo "BIOS" entry points: not lifted code, dispatched via sh4_call's runtime hook table */
#define BIOS_SYSINFO 0x8C000800u
#define BIOS_FLASH   0x8C000810u
#define BIOS_GDROM   0x8C000820u
#define BIOS_EXIT    0x8C000830u
#define BIOS_RESET   0x8C008300u

/* ---------------------------------------------------------------- stop / fault */
unsigned long hle_frames_limit, hle_trace_from_frame; void (*hle_frame_hook)(unsigned long frame);   /* run_game --frames N / --trace-from-frame N */
static void hle_finish(const char *why) {                  /* clean stop (frame limit reached): hle_run_main returns 3 */
    snprintf(stop_reason, sizeof stop_reason, "%s", why);
    stop_code = 3;
    if (run_jmp_valid) longjmp(run_jmp, 1);
}
void hle_stop(const char *why) {
    snprintf(stop_reason, sizeof stop_reason, "%s", why);
    stop_code = 2;
    hle_log("[hle] STOP: %s", why);
    if (run_jmp_valid) longjmp(run_jmp, 1);
    fprintf(stderr, "hle_stop outside run: %s\n", why); exit(9);
}
static void on_fault(const char *what, uint32_t a, uint32_t b) {
    char buf[200]; snprintf(buf, sizeof buf, "guest fault: %s a=%08x b=%08x", what, a, b);
    hle_stop(buf);
}

/* ---------------------------------------------------------------- register file + mmio dispatch */
typedef struct { uint32_t key, val, rd, wr, lastrd, lastwr, pr1; uint8_t used, sz; } RegEnt;
#define NREG 8192
static RegEnt regs[NREG];
static RegEnt *reg_slot(uint32_t key) {
    uint32_t h = (key * 2654435761u) >> 19;
    for (int i = 0; i < NREG; i++) { RegEnt *r = &regs[(h + i) & (NREG - 1)]; if (!r->used) { r->used = 1; r->key = key; return r; } if (r->key == key) return r; }
    return &regs[0];
}
static uint32_t norm(uint32_t a) { return (a >= 0xE0000000u) ? a : (a & 0x1FFFFFFFu); }
/* Flat mirror of the hot registers: the PVR core registers + fog table + palette RAM (0x005F8000..0x005F9FFF, 2048 words) and QACR0/1 (0xFF000038/3C) are read every frame
 * (palette/fog snapshots, SQ flush) and used to cost one hash-table lookup each (1,168 per frame).  The RegEnt in regs[] stays the authoritative backing store for the
 * generic read path and the access counters; every path that changes a RegEnt value of these addresses (def_write, hle_reg_set) also updates the mirror, so hle_reg_get() is
 * a plain array load.  pal_epoch / fog_epoch change only when a palette-relevant resp. fog-relevant register word really changes value. */
#define PVR_BASE 0x005F8000u
#define PVR_WORDS 2048u
static uint32_t pvr_regs[PVR_WORDS], qacr_v[2], pal_epoch = 1, fog_epoch = 1;
static inline void flat_store(uint32_t k, uint32_t v) {            /* k = normalised word address; mirror a RegEnt value */
    uint32_t i = (k - PVR_BASE) >> 2;
    if (k - PVR_BASE < PVR_WORDS * 4u) {
        if (pvr_regs[i] != v) {
            pvr_regs[i] = v;
            if (k >= 0x005F9000u || k == 0x005F8108u || k == 0x005F80E4u) pal_epoch++;     /* palette RAM, PAL_RAM_CTRL, TEXT_CONTROL */
            else if ((k >= 0x005F8200u && k < 0x005F8400u) || (k >= 0x005F80B0u && k <= 0x005F80C0u)) fog_epoch++;   /* fog table, FOG_COL_RAM/VERT/DENSITY/CLAMP */
        }
    } else if (k == 0xFF000038u) qacr_v[0] = v;
    else if (k == 0xFF00003Cu) qacr_v[1] = v;
}
const uint32_t *hle_pvr_regs(void) { return pvr_regs; }
uint32_t hle_pvr_pal_epoch(void) { return pal_epoch; }
uint32_t hle_pvr_fog_epoch(void) { return fog_epoch; }
uint32_t hle_reg_get(uint32_t addr) {
    uint32_t k = norm(addr) & ~3u;
    if (k - PVR_BASE < PVR_WORDS * 4u) return pvr_regs[(k - PVR_BASE) >> 2];
    if (k == 0xFF000038u) return qacr_v[0];
    if (k == 0xFF00003Cu) return qacr_v[1];
    return reg_slot(k)->val;
}
void hle_reg_set(uint32_t addr, uint32_t v) { uint32_t k = norm(addr) & ~3u; reg_slot(k)->val = v; flat_store(k, v); }

typedef struct { uint32_t lo, hi; hle_mmio_rd rd; hle_mmio_wr wr; hle_mmio_wr watch; } MapEnt;
static MapEnt maps[64]; static int nmaps;
void hle_mmio_map(uint32_t lo, uint32_t hi, hle_mmio_rd rd, hle_mmio_wr wr) { maps[nmaps++] = (MapEnt){lo, hi, rd, wr, 0}; }
void hle_mmio_watch(uint32_t lo, uint32_t hi, hle_mmio_wr cb) { maps[nmaps++] = (MapEnt){lo, hi, 0, 0, cb}; }
static hle_pref_fn pref_fn;
void hle_set_pref_handler(hle_pref_fn fn) { pref_fn = fn; }
hle_pref_fn hle_get_pref_handler(void) { return pref_fn; }
static void (*cb_begin)(SH4Ctx *), (*cb_end)(SH4Ctx *);
static void (*cb_vblank)(SH4Ctx *);
void hle_set_frame_callbacks(void (*b)(SH4Ctx *), void (*e)(SH4Ctx *)) { cb_begin = b; cb_end = e; }
void hle_set_vblank_cb(void (*cb)(SH4Ctx *)) { cb_vblank = cb; }

/* unhandled accesses: first occurrence of every (addr, dir) logged with caller PR; counts kept for the summary */
typedef struct { uint32_t addr; uint8_t wr; uint32_t n; uint32_t pr, last, val; } UEnt;
static UEnt uh[4096]; static int nuh; unsigned long hle_unhandled_total;
static uint32_t last_fn(void) { return hle_ring[(hle_ring_pos - 1) & 255][0]; }
int hle_stop_on_unhandled;
void hle_unhandled(const char *what, uint32_t addr, int size, uint32_t val) {
    int wr = what[0] == 'w';
    if (hle_stop_on_unhandled && !(addr >= 0xE0000000u) && hle_unhandled_total >= (unsigned long)hle_stop_on_unhandled - 1) { char b[120]; snprintf(b, sizeof b, "stop-on-unhandled: %s%d @%08x val=%08x", what, size * 8, addr, val); hle_stop(b); }
    hle_unhandled_total++;
    for (int i = 0; i < nuh; i++) if (uh[i].addr == addr && uh[i].wr == wr) { uh[i].n++; return; }
    if (nuh < 4096) { uh[nuh] = (UEnt){addr, wr, 1, G ? G->pr : 0, last_fn(), val}; nuh++; }
    hle_log("[UNHANDLED] %s%d @%08x val=%08x  caller PR=%08x in f_%08x", what, size * 8, addr, val, G ? G->pr : 0, last_fn());
}

/* stuck-poll detector: same slow-path read address+value repeated N times with no other slow-path activity */
static uint32_t poll_addr, poll_val; static unsigned long poll_n;
#define POLL_LIMIT 3000000ul
static void poll_check(uint32_t a, uint32_t v, int isread) {
    if (isread && a == poll_addr && v == poll_val) {
        if (++poll_n > POLL_LIMIT) {
            char b[160]; snprintf(b, sizeof b, "STUCK: guest polls %08x (=%08x) %lu times, PR=%08x last fn f_%08x", a, v, poll_n, G->pr, last_fn());
            poll_n = 0; hle_stop(b);
        }
    } else { poll_addr = isread ? a : 0; poll_val = v; poll_n = 0; }
}

static uint8_t vram[8 << 20], waveram[2 << 20];
/* PVR VRAM: host image is the 32-bit-area view (phys 0x04000000+off). The 64-bit area (0x05000000+A) interleaves the two 4 MiB banks every 32 bits:
 * 32-bit offset = (A&3) | ((A&0x7FFFF8)>>1) | (((A>>2)&1)<<22). Kamui's texture upload (CPU stores to 0xA5xxxxxx) lands here. */
static uint32_t vram_off(uint32_t k) { uint32_t o = k & 0x7FFFFF; if ((k >> 24) == 5) o = (o & 3) | ((o & 0x7FFFF8) >> 1) | (((o >> 2) & 1) << 22); return o; }
uint8_t *hle_vram_ptr(void) { return vram; }
/* VRAM dirty-page epochs (texture-cache validity).  One stamp per 4 KiB page of the 8 MiB image.  Every write that changes bytes of vram[] stamps the pages it touches with the
 * current epoch (vram_stamp); writes into the frame-buffer shadow (fbshadow, see below) do not touch vram[] and therefore never stamp.  hle_vram_max_epoch() returns the newest
 * stamp over a byte range and then opens a new epoch, so any later write gets a strictly larger stamp: a cached texture whose recorded value still equals the current max over its
 * pages has not been written since (O(1), no hashing). Only the guest thread writes VRAM and queries (the renderer runs synchronously at STARTRENDER). */
#define VRAM_PAGES 2048u
static uint32_t vram_pg_epoch[VRAM_PAGES], vram_cur_epoch = 1;
static inline void vram_stamp(uint32_t off, uint32_t len) {
    if (!len || off >= (8u << 20)) return;
    uint32_t p0 = off >> 12, p1 = (off + len - 1) >> 12; if (p1 >= VRAM_PAGES) p1 = VRAM_PAGES - 1;
    for (uint32_t p = p0; p <= p1; p++) vram_pg_epoch[p] = vram_cur_epoch;
}
uint32_t hle_vram_max_epoch(uint32_t off, uint32_t len) {
    uint32_t m = 0;
    if (len && off < (8u << 20)) {
        uint32_t p0 = off >> 12, p1 = (off + len - 1) >> 12; if (p1 >= VRAM_PAGES) p1 = VRAM_PAGES - 1;
        for (uint32_t p = p0; p <= p1; p++) if (vram_pg_epoch[p] > m) m = vram_pg_epoch[p];
    }
    vram_cur_epoch++;
    return m;
}
/* Frame-buffer regions.  The PVR renders into / scans out of FB_W_SOFn / FB_R_SOFn (64-bit-area byte offsets), and we never render into VRAM (the TA stream is drawn by the host
 * renderer), so these regions are not part of the VRAM image the texture decoder sees.  Games still touch them with the CPU: Rayman 2 copies the displayed buffer (R_SOF1 = 0x0aa000) into the
 * render buffer (W_SOF1 = 0x4aa000) through 0xA5xxxxxx at every level start.  In the 32-bit view `vram` (= texture view) that 0x96000-byte stream lands on L = 0x255000..0x2a0000 and
 * 0x655000..0x6a0000, i.e. on Rayman's character textures (surfaces 0x2852c0..0x292ac0: torso, hair, ...), which then rendered black (see re_analysis/dc/notes_textures.md).
 * CPU accesses to the 64-bit area inside any FB region seen in the SOF registers are therefore kept in a separate shadow buffer. */
static uint8_t fbshadow[8 << 20];
uint8_t *hle_fbshadow_ptr(void) { return fbshadow; }
static struct { uint32_t lo, hi; } fb_rng[8]; static int fb_nrng; 
static void fb_note1(uint32_t sof, uint32_t len) {
    uint32_t lo = sof & 0x7FFFFF, hi = lo + len; if (hi > 0x800000u) hi = 0x800000u;
    for (int i = 0; i < fb_nrng; i++) if (fb_rng[i].lo == lo) { if (hi > fb_rng[i].hi) fb_rng[i].hi = hi; return; }
    if (fb_nrng < 8) { fb_rng[fb_nrng].lo = lo; fb_rng[fb_nrng].hi = hi; fb_nrng++; }
}
/* Kamui keeps the double buffer as two 0x96000-byte buffers 4 MiB apart (R=0x0aa000, W=0x4aa000 in this game) and clears/copies BOTH from the very first frame, before the SOF
 * registers have been programmed with the second one, so each SOF also reserves its +-4 MiB twin. */
static void fb_note(uint32_t sof, uint32_t len) { fb_note1(sof, len); fb_note1(sof ^ 0x400000u, len); }
static void fb_refresh(void) {
    static int off = -1; if (off < 0) { const char *e = getenv("R2_FBSHADOW"); off = e && *e == '0'; } if (off) return;       /* A/B switch for tests */
    uint32_t rc = hle_reg_get(0xA05F8044u), wc = hle_reg_get(0xA05F8048u);                  /* FB_R_CTRL, FB_W_CTRL */
    uint32_t rlen = 0x96000u * (((rc >> 2) & 3) == 3 ? 2 : 1), wlen = 0x96000u * (((wc & 7) >= 5) ? 2 : 1);   /* 640x480 x 16/32 bpp (R_CTRL bit3:2 = 3 -> 32bpp) */
    uint32_t r1 = hle_reg_get(0xA05F8050u), r2 = hle_reg_get(0xA05F8054u), w1 = hle_reg_get(0xA05F8060u), w2 = hle_reg_get(0xA05F8064u);
    if (r1 || r2) { fb_note(r1, rlen); if (r2) fb_note(r2, rlen); }
    if (w1) fb_note(w1, wlen);
    if (w2) fb_note(w2, wlen);
}
/* returns the shadow byte pointer if the 64-bit-area address k (0x05xxxxxx) lies in a frame-buffer region, else NULL */
static int fb_all = -1;
static uint8_t *fb_shadow(uint32_t k) {
    if ((k >> 24) != 5) return 0;
    if (fb_all < 0) { const char *e = getenv("R2_FBSHADOW"); fb_all = e && *e == '2'; }
    if (fb_all) return &fbshadow[k & 0x7FFFFF];
    uint32_t o = k & 0x7FFFFF;
    for (int i = 0; i < fb_nrng; i++) if (o >= fb_rng[i].lo && o < fb_rng[i].hi) return &fbshadow[o];
    return 0;
}
static void (*listinit_cb)(SH4Ctx *); void hle_set_listinit_cb(void (*fn)(SH4Ctx *)) { listinit_cb = fn; }
static void (*startrender_cb)(SH4Ctx *); void hle_set_startrender_cb(void (*fn)(SH4Ctx *)) { startrender_cb = fn; }
static uint64_t tmu_base_ns; static uint32_t tmu_base_cnt;
static const uint32_t TMU_DIV[8] = {4, 16, 64, 256, 1024, 1, 1, 1};
static uint32_t tmu_tcnt0(void) {
    uint32_t tcor = reg_slot(0xFFD80008u)->val, tcr = reg_slot(0xFFD80010u)->val & 0xFFFF;
    uint32_t cnt0 = tmu_base_cnt;
    if (!((reg_slot(0xFFD80004u)->val >> 0) & 1)) return cnt0;       /* TSTR.STR0 off: frozen */
    uint64_t el = now_ns() - tmu_base_ns;
    uint64_t ticks = el * 50ull / (1000ull * TMU_DIV[tcr & 7]) / 1;  /* Pphi 50 MHz: ticks = ns*50e6/div/1e9 */
    uint64_t period = (uint64_t)tcor + 1;
    uint64_t rem = (uint64_t)cnt0 >= ticks % period ? cnt0 - ticks % period : cnt0 + period - ticks % period;
    return (uint32_t)rem;
}

/* video timing model: 60 Hz, 525 lines (VGA/NTSC-ish), vblank = lines >= 480 */
#define FRAME_NS 16666667ull
static uint32_t spg_status(void) {
    uint64_t ph = (now_ns() - t0_ns) % FRAME_NS; uint32_t line = (uint32_t)(ph * 525 / FRAME_NS);
    uint32_t st = line & 0x3FF;
    if (line >= 480) st |= 1u << 11;                 /* blank */
    if (line >= 515) st |= 1u << 13;                 /* vsync */
    if ((ph * 525 * 4 / FRAME_NS) & 1) st |= 1u << 12; /* hsync-ish toggle */
    return st;
}
static uint64_t vb_acked;                              /* frame index of last acknowledged vblank-in */
static uint64_t frame_idx(void) { return (now_ns() - t0_ns) / FRAME_NS; }

static int is_modelled_reg(uint32_t k) {
    return (k >= 0xFF000000u) || (k >= 0xF4000000u && k < 0xF8000000u) ||           /* SH-4 on-chip + cache arrays */
           (k >= 0x005F6800u && k < 0x005FA000u) ||                                  /* SB, maple, G2, PVR core regs */
           (k >= 0x00700000u && k < 0x00720000u) || (k >= 0x00800000u && k < 0x00A00000u);  /* AICA regs/RTC/wave */
}
static void count_reg(RegEnt *r, int wr, uint32_t v, int size) {
    if (wr) { r->wr++; r->lastwr = v; } else { r->rd++; r->lastrd = v; }
    if (!r->pr1) { r->pr1 = G ? G->pr : 1; r->sz = size; }
}

static uint32_t def_read(uint32_t a, int size) {
    uint32_t k = norm(a), v;
    if (k >= 0x0C000000u && k < 0x0D000000u) { uint32_t x = 0; memcpy(&x, &sh4_ram[k & 0xFFFFFF], size); return x; }
    if (k >= 0x04000000u && k < 0x06000000u) { uint32_t x = 0; uint8_t *fs = fb_shadow(k); memcpy(&x, fs ? fs : &vram[vram_off(k)], size); return x; }
    if (k >= 0x00800000u && k < 0x00A00000u) { uint32_t x = 0; memcpy(&x, &waveram[k & 0x1FFFFF], size); return x; }
    if (!is_modelled_reg(k)) { hle_unhandled("rd", a, size, 0); poll_check(a, 0, 1); return 0; }
    RegEnt *r = reg_slot(k & ~3u);
    switch (k & ~3u) {
    case 0xFFD8000Cu:
#ifdef R2_IO_HIST
        { static struct { uint32_t pr; unsigned long n; } t[64]; static int nt;
          int i; for (i = 0; i < nt && t[i].pr != G->pr; i++); if (i == nt && nt < 64) { t[nt].pr = G->pr; t[nt++].n = 0; } if (i < 64) t[i].n++;
          static unsigned long cnt; if ((++cnt & 0xFFFFF) == 0) for (int j = 0; j < nt; j++) fprintf(stderr, "[tcnt] pr=%08x n=%lu\n", t[j].pr, t[j].n); }
#endif
        v = tmu_tcnt0(); break;                                       /* TCNT0 */
    case 0xFF800030u: v = 0x300 | (r->val & ~0x300u); break;                        /* PDTRA: cable type 3 = composite/NTSC */
    case 0x005F810Cu: v = spg_status(); break;                                      /* SPG_STATUS */
    case 0x005F6904u: v = 0; break;                                                 /* ISTEXT: no external (GD-ROM/AICA/modem) interrupts raised
    */
    case 0x005F6900u: v = r->val; break;                                            /* ISTNRM: pending bits raised by hle_asic_raise() */
    case 0x005F8000u: v = 0x17FD11DB; break;                                        /* PVR ID */
    case 0x005F8004u: v = 0x00000011; break;                                        /* PVR revision */
    case 0x005F689Cu: v = 0x0B; break;                                              /* SB_SBREV */
    case 0x00710000u: v = (uint32_t)((time(0) + 631152000ull) >> 16); break;        /* RTC high */
    case 0x00710004u: v = (uint32_t)((time(0) + 631152000ull) & 0xFFFF); break;     /* RTC low */
    default: v = r->val; break;
    }
    count_reg(r, 0, v, size);
    int sh = (k & 3) * 8; v >>= sh; if (size == 1) v &= 0xFF; else if (size == 2) v &= 0xFFFF;
    poll_check(a, v, 1);
    return v;
}
/* ---- asynchronous events delivered synchronously (single thread, no preemption) ---- */
/* Kamui callback table (0x8C2EF284, 8 bytes/entry {fn,arg}) is filled by 0x8C0DD580 (kmSetXxxCallback thunks 0DFD00/0DFD40/0DFDC0). Type 0 is the
 * one the game registers as 0x8C0385C0 which clears the "render in progress" bit the frame function spins on, i.e. render-done (EOR). */
static void kamui_callback(SH4Ctx *c, int type) {
    uint32_t fn = LD32(0x8C2EF284u + type * 8), arg = LD32(0x8C2EF284u + type * 8 + 4);
    if (!fn) return;
    SH4Ctx save = *c;
    c->r[4] = arg; c->r[15] -= 0x40;
    sh4_call(c, fn);
    *c = save;
    if (hle_verbose >= 2) hle_log("[irq] kamui callback type %d fn=%08x arg=%08x", type, fn, arg);
}
static unsigned long startrender_n; unsigned long startrender_n_get(void) { return startrender_n; }
/* Fallback TA model used only while no TA module claims the data (no sink registered): an all-zero 32-byte packet is a TA end-of-list
 * (para type 0); successive end-of-lists raise the list-end interrupts in order opaque(7), opaque-mod(8), translucent(9), trans-mod(10), punch(21). */
static int eol_seq;
static void ta_fallback_scan(const uint8_t *p, uint32_t len) {
    static const int bits[5] = {7, 8, 9, 10, 21};
    for (uint32_t o = 0; o + 32 <= len; o += 32) {
        uint32_t w0; memcpy(&w0, p + o, 4);
        if (hle_verbose >= 2) hle_log("[ta-fallback] blk %u w0=%08x seq=%d", o / 32, w0, eol_seq);
        if ((w0 & 0xF8FFFFFFu) == 0x808c0002u) { eol_seq = (w0 >> 24) & 7; continue; }    /* Kamui list-select header 0x80|list:8c0002 -> following EOL ends that list */
        if ((w0 >> 29) == 0) {                                            /* para type 0 = end of list */ hle_asic_raise_later(1u << bits[eol_seq % 5]); eol_seq++; }
    }
}
/* ---- store queues (0xE0000000..0xE3FFFFFF) ---- */
extern uint8_t sh4_sq_buf[];
#define sq_buf sh4_sq_buf    /* the SQ window itself is answered in runtime.c (sh4_io_read/write); this is the same buffer */
static uint32_t vram_min[2] = {~0u, ~0u}, vram_max[2]; unsigned long vram_area_n[4], vram_cpu_n[4], dma_vram_n[4];
static void (*sq_sink)(uint32_t phys, const uint8_t *data32);
void hle_set_sq_sink(void (*fn)(uint32_t phys, const uint8_t *data32)) { sq_sink = fn; }
static unsigned long sq_ram_n, sq_other_n;
static void sq_flush_body(SH4Ctx *c, uint32_t addr) {          /* `pref @Rn` with Rn in the SQ window */
    (void)c;
    if (addr < 0xE0000000u || addr > 0xE3FFFFFFu) return;          /* pref to a normal address = cache prefetch: no side effect (was corrupting RAM with SQ contents) */
    int q = (addr >> 5) & 1;
    uint32_t qacr = qacr_v[q];
    uint32_t phys = (((qacr >> 2) & 7u) << 26) | (addr & 0x03FFFFE0u);
    const uint8_t *d = sq_buf + q * 32;
    if (SH4_LIKELY(phys >= 0x10000000u && phys < 0x10800000u)) {
        if (sq_sink) { sq_sink(phys, d); sq_other_n++; return; }
        ta_fallback_scan(d, 32); sq_other_n++; return;
    }
    if (phys >= 0x0C000000u && phys < 0x0D000000u) { memcpy(&sh4_ram[phys & 0xFFFFFF], d, 32); sq_ram_n++; return; }   /* SQ -> system RAM */
    if (phys >= 0x04000000u && phys < 0x08000000u) { vram_area_n[(phys >> 24) & 3]++; memcpy(&vram[phys & 0x7FFFFF], d, 32); vram_stamp(phys & 0x7FFFFF, 32); sq_other_n++; return; }        /* SQ -> VRAM */
    hle_unhandled("sq-flush", phys, 32, 0);
}
#if R2_SQF_PROBE && R2_PERF
#if defined(__vita__)
#define SQF_NOW() r2_now_us()                     /* Vita: 1 us resolution (unbiased on average over many probes) */
#else
static inline uint64_t SQF_NOW(void) { struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec; }   /* host: ns, the perf line divides by SQF_UNIT */
#endif
static void sq_flush_default(SH4Ctx *c, uint32_t addr) {      /* measurement build: time every 32nd flush (whole path incl. the TA sink) */
    if ((g_perf.sqf_n++ & 31) != 0) { sq_flush_body(c, addr); return; }
    uint64_t t = SQF_NOW(); sq_flush_body(c, addr); g_perf.t_sqf_probe += SQF_NOW() - t; g_perf.sqf_probes++;
}
#else
#define sq_flush_default sq_flush_body
#endif
void sh4_pref(SH4Ctx *c, uint32_t addr) {
    if (SH4_LIKELY(pref_fn == sq_flush_default)) {
        sq_flush_default(c, addr);
        return;
    }
    if (pref_fn) pref_fn(c, addr);
}
static uint32_t sq_rd(uint32_t a, int size) { uint32_t v = 0; memcpy(&v, sq_buf + (a & 0x3F), size); return v; }
static void sq_wr(uint32_t a, int size, uint32_t v) { memcpy(sq_buf + (a & 0x3F), &v, size); }

/* ---- DMA: SB ch2 (SB_C2DST 0x5F6808) and PVR-IF (SB_PDST 0x5F7C18). The host copies instantly and queues the completion interrupt. ---- */
static void (*dma_ta_sink)(uint32_t dst, const uint8_t *src, uint32_t len);
void hle_set_ta_dma_sink(void (*fn)(uint32_t dst, const uint8_t *src, uint32_t len)) { dma_ta_sink = fn; }
static unsigned long dma_c2_n, dma_pd_n;
static void dma_ch2(void) {
    uint32_t dst = hle_reg_get(0xA05F6800u), len = hle_reg_get(0xA05F6804u), src = hle_reg_get(0xFFA00020u);
    uint32_t sp = src & 0x1FFFFFFFu;
    dma_c2_n++;
    if (hle_verbose >= 2) hle_log("[dma] ch2 src=%08x dst=%08x len=%u pr=%08x", src, dst, len, G ? G->pr : 0);
    if (sp >= 0x0C000000u && sp + len <= 0x0D000000u) {
        if (dst >= 0x10000000u && dst < 0x10800000u) { if (dma_ta_sink) dma_ta_sink(dst, &sh4_ram[sp & 0xFFFFFF], len); else ta_fallback_scan(&sh4_ram[sp & 0xFFFFFF], len); }
        else if (dst >= 0x04000000u && dst < 0x05000000u) { memcpy(&vram[dst & 0x7FFFFF], &sh4_ram[sp & 0xFFFFFF], len); vram_stamp(dst & 0x7FFFFF, len); }
        else if (dst >= 0x0C000000u && dst < 0x0D000000u) memmove(&sh4_ram[dst & 0xFFFFFF], &sh4_ram[sp & 0xFFFFFF], len);
        else hle_unhandled("dma-ch2-dst", dst, len, 0);
    } else hle_unhandled("dma-ch2-src", src, len, 0);
    hle_reg_set(0xA05F6808u, 0);
    hle_asic_raise_later(1u << 19);                                                  /* ch2 DMA end */
}
static void dma_pvr(void) {
    uint32_t pv = hle_reg_get(0xA05F7C00u), sy = hle_reg_get(0xA05F7C04u), len = hle_reg_get(0xA05F7C08u), dir = hle_reg_get(0xA05F7C0Cu);
    dma_pd_n++;
    if (hle_verbose >= 2) hle_log("[dma] pvr pv=%08x sys=%08x len=%u dir=%u", pv, sy, len, dir);
    uint32_t sp = sy & 0x1FFFFFFFu;
    if (sp >= 0x0C000000u && sp + len <= 0x0D000000u && (pv & 0x1FFFFFFFu) < 0x00800000u) {
        uint8_t *v = &vram[(pv & 0x1FFFFFFFu) & 0x7FFFFF];
        if (dir == 0) { memcpy(v, &sh4_ram[sp & 0xFFFFFF], len); vram_stamp((pv & 0x1FFFFFFFu) & 0x7FFFFF, len); } else memcpy(&sh4_ram[sp & 0xFFFFFF], v, len);
    } else hle_unhandled("dma-pvr", pv, len, sy);
    hle_reg_set(0xA05F7C18u, 0);
    hle_asic_raise_later(1u << 20);
}

static void def_write(uint32_t a, int size, uint32_t v) {
    uint32_t k = norm(a);
    poll_check(a, v, 0);
    if (k >= 0x0C000000u && k < 0x0D000000u) { memcpy(&sh4_ram[k & 0xFFFFFF], &v, size); return; }
    if (k >= 0x04000000u && k < 0x06000000u) { vram_cpu_n[(k >> 24) & 3]++; { unsigned a = (k >> 24) & 1; uint32_t o = k & 0x7FFFFF; if (o < vram_min[a]) vram_min[a] = o; if (o > vram_max[a]) vram_max[a] = o; } { uint8_t *fs = fb_shadow(k); if (fs) memcpy(fs, &v, size); else { uint32_t vo = vram_off(k); if (memcmp(&vram[vo], &v, size)) { memcpy(&vram[vo], &v, size); vram_stamp(vo, (uint32_t)size); } } } return; }
    if (k >= 0x00800000u && k < 0x00A00000u) { memcpy(&waveram[k & 0x1FFFFF], &v, size); return; }
    if (!is_modelled_reg(k)) { hle_unhandled("wr", a, size, v); return; }
    RegEnt *r = reg_slot(k & ~3u);
    if ((k & ~3u) == 0x005F6900u || (k & ~3u) == 0x005F6908u) { uint32_t old = r->val; count_reg(r, 1, v, size); r->val = old & ~v; return; }   /* ISTNRM/ISTERR write-1-clear */
    count_reg(r, 1, v, size);
    if (size < 4) { int sh = (k & 3) * 8; uint32_t m = (size == 1 ? 0xFFu : 0xFFFFu) << sh; r->val = (r->val & ~m) | ((v << sh) & m); }
    else r->val = v;
    flat_store(k & ~3u, r->val);
    switch (k & ~3u) {
    case 0xFFD8000Cu: tmu_base_cnt = v; tmu_base_ns = now_ns(); break;              /* TCNT0 write */
    case 0x005F8014u:                                                              /* STARTRENDER: render finishes instantly on the host */
        startrender_n++; if (startrender_cb) startrender_cb(G); hle_asic_raise_later((1u << 0) | (1u << 1)); hle_asic_raise_later(1u << 2); break;
    case 0x005F8144u: if ((v & 0x80000000u) && listinit_cb) listinit_cb(G); break;      /* TA_LIST_INIT: new TA stream (scene) starts */
    case 0x005F8044u: case 0x005F8048u: case 0x005F8050u: case 0x005F8054u: case 0x005F8060u: case 0x005F8064u: fb_refresh(); break;   /* FB_R/W_CTRL, FB_R/W_SOFn: remember frame-buffer regions */
    case 0x005F6808u: if (v & 1) dma_ch2(); break;                                 /* SB_C2DST: ch2 DMA start */
    case 0x005F7C18u: if (v & 1) dma_pvr(); break;                                 /* SB_PDST: PVR-IF DMA start */
    default: break;
    }
}
uint32_t sh4_io_read_dispatch(uint32_t a, int size) {
    for (int i = nmaps - 1; i >= 0; i--) if (a >= maps[i].lo && a <= maps[i].hi && maps[i].rd) return maps[i].rd(a, size);
    return def_read(a, size);
}
void sh4_io_write_dispatch(uint32_t a, int size, uint32_t v) {
    for (int i = nmaps - 1; i >= 0; i--) if (a >= maps[i].lo && a <= maps[i].hi && maps[i].wr) { maps[i].wr(a, size, v); return; }
    def_write(a, size, v);
    for (int i = nmaps - 1; i >= 0; i--) if (a >= maps[i].lo && a <= maps[i].hi && maps[i].watch) maps[i].watch(a, size, v);
}
extern uint32_t (*sh4_io_read_hook)(uint32_t, int); extern void (*sh4_io_write_hook)(uint32_t, int, uint32_t);

/* ---------------------------------------------------------------- weak module defaults */
__attribute__((weak)) void hle_io_init(const char *root) { (void)root; hle_log("[boot] hle/io.c not linked: file IO hooks absent"); }
__attribute__((weak)) void hle_vmu_init(void) { hle_log("[boot] hle/vmu.c not linked: no virtual VMU (the game shows its 'insert VMS' prompt)"); }
__attribute__((weak)) void hle_ta_init(void) { hle_log("[boot] hle/ta.c not linked: TA/SQ parser absent"); }
__attribute__((weak)) void hle_camera_init(void) { }

/* ---------------------------------------------------------------- BIOS pseudo entry points */
static void bios_sysinfo(SH4Ctx *c) {
    switch (c->r[7]) {
    case 0: R(0) = 0; break;                                   /* sysinfo init */
    case 2: R(0) = 0; break;                                   /* icon */
    case 3: {                                                  /* ID: 8 bytes at a scratch location */
        static const uint8_t id[8] = {0x01,0x23,0x45,0x67,0x89,0xAB,0xCD,0xEF};
        memcpy(&sh4_ram[0x8000 + 0x100], id, 8); R(0) = 0x8C008100u; break; }
    default: R(0) = 0; break;
    }
    if (hle_verbose) hle_log("[bios] sysinfo(r7=%u) -> %08x pr=%08x", c->r[7], R(0), c->pr);
}
/* Flash ROM (BIOS vector 0xB8): 128 KiB in-memory image, erased state 0xFF, partitions per the DC layout. Writes AND into the image (flash
 * can only clear bits), delete erases a partition. The game formats/validates partition 2 ("KATANA_FLASH____" header) itself; with a working
 * flash it takes the normal path and frees its 16 KiB buffer (with failing flash that buffer leaked and shifted every later allocation by
 * 0x4020 - see the allocator-determinism check in the report). */
static uint8_t flash_img[0x20000]; static int flash_init_done;
static const uint32_t flash_part[5][2] = {{0, 0x2000}, {0x2000, 0x2000}, {0x4000, 0x4000}, {0x8000, 0x8000}, {0x10000, 0x10000}};
static void bios_flash(SH4Ctx *c) {
    uint32_t fn = c->r[7], a4 = c->r[4], a5 = c->r[5], a6 = c->r[6];
    if (!flash_init_done) { memset(flash_img, 0xFF, sizeof flash_img); flash_init_done = 1; }
    switch (fn) {
    case 0: if (a4 < 5 && a5) { ST32(a5, flash_part[a4][0]); ST32(a5 + 4, flash_part[a4][1]); R(0) = 0; } else R(0) = 0xFFFFFFFFu; break;      /* info */
    case 1: if (a4 + a6 <= sizeof flash_img && hle_is_ram(a5)) { memcpy(hle_ptr(a5), flash_img + a4, a6); R(0) = 0; } else R(0) = 0xFFFFFFFFu; break;  /* read */
    case 2: if (a4 + a6 <= sizeof flash_img && hle_is_ram(a5)) { for (uint32_t i = 0; i < a6; i++) flash_img[a4 + i] &= *hle_ptr(a5 + i); R(0) = a6; } else R(0) = 0xFFFFFFFFu; break;  /* write -> bytes */
    case 3: if (a4 < sizeof flash_img) { for (int i = 0; i < 5; i++) if (flash_part[i][0] <= a4 && a4 < flash_part[i][0] + flash_part[i][1]) { memset(flash_img + flash_part[i][0], 0xFF, flash_part[i][1]); break; } R(0) = 0; } else R(0) = 0xFFFFFFFFu; break;  /* delete */
    default: R(0) = 0xFFFFFFFFu; break;
    }
    if (hle_verbose >= 2 || (hle_verbose && fn != 1)) hle_log("[bios] flash(fn=%u r4=%08x r5=%08x r6=%08x) -> %08x pr=%08x", fn, a4, a5, a6, R(0), c->pr);
}
static uint32_t gd_req_seq = 1;
static void bios_gdrom(SH4Ctx *c) {
    uint32_t grp = c->r[6], fn = c->r[7];
    R(0) = 0;
    if (grp == 0) switch (fn) {
        case 0: R(0) = gd_req_seq++; break;                    /* send command -> request id */
        case 1: if (c->r[5]) { ST32(c->r[5], 0); ST32(c->r[5] + 4, 0); ST32(c->r[5] + 8, 0); ST32(c->r[5] + 12, 0); } R(0) = 2; break; /* check: finished */
        case 4: if (c->r[4]) { ST32(c->r[4], 1); ST32(c->r[4] + 4, 0x80); } R(0) = 0; break;  /* drive status: 1=standby(?), disc type 0x80=GDROM */
        default: R(0) = 0; break;
    }
    hle_log("[bios] gdrom(grp=%d fn=%u r4=%08x r5=%08x) -> %08x pr=%08x", (int)grp, fn, c->r[4], c->r[5], R(0), c->pr);
}
static void bios_exit(SH4Ctx *c) {
    char b[100]; snprintf(b, sizeof b, "guest called BIOS exit/menu (r4=%u) pr=%08x", c->r[4], c->pr);
    stop_code = 1; hle_stop(b); stop_code = 1;
}

/* ---------------------------------------------------------------- SDK-level hooks */
static void h_pvr_write(SH4Ctx *c) {         /* FUN_8C0DB7E0(off,val): *(0xA05F8000+off)=val */
    if (hle_verbose >= 2) hle_log("[pvr] W %03x = %08x pr=%08x", c->r[4], c->r[5], c->pr);
    sh4_io_write(0xA05F8000u + c->r[4], 4, c->r[5]);
}
static void h_pvr_read(SH4Ctx *c) { R(0) = sh4_io_read(0xA05F8000u + c->r[4], 4); }

/* syCache family: cache maintenance via P2-alias jumps into mid-function code (not liftable) - host memory is coherent, so no-op. */
/* libc memmove / memset of the game (0x8C0685B4 / 0x8C0686B8; calls: ~220 + ~20 per frame, byte/halfword/word loops through LD/ST helpers). Plain-RAM ranges are done with the host libc (same result: the
 * guest memmove copies forward in 1/2/4-byte units whose size divides |dst-src|, i.e. it IS memmove); anything else (VRAM, AICA, SQ, MMIO, wrap) runs the original. Returns dst in r0 like the original. */
/* hooks replace guest functions whose entry (HLE_ENTER -> hle_trace_enter) also advances the deferred-ASIC-event countdown; do the same so interrupt delivery points do not move */
#define HOOK_ENTER(c, a) do { if (hle_trace_on) hle_trace_enter((c), (a)); } while (0)
static int ram_span(uint32_t a, uint32_t n) { return hle_is_ram(a) && n <= 0x01000000u && ((a & 0x00FFFFFFu) + n) <= 0x01000000u; }
static void h_memmove_fast(SH4Ctx *c) {
    uint32_t d = c->r[4], s = c->r[5], n = c->r[6];
    { static int off = -1; if (off < 0) off = getenv("R2_NO_LIBC") != NULL; if (off) { hle_orig(c, 0x8C0685B4); return; } }
    HOOK_ENTER(c, 0x8C0685B4);
    { uint32_t sp = c->r[15]; ST32(sp - 4, c->r[13]); ST32(sp - 8, c->r[12]); ST32(sp - 12, c->r[11]); }   /* the original pushes r13, r12, r11 (dead stack words): keep guest RAM byte-identical */
    if (getenv("R2_LOGMM") && ((d & 0xFFFFFF) < 0xBE00 && (d & 0xFFFFFF) + n > 0xBA00 || (s & 0xFFFFFF) < 0xBE00 && (s & 0xFFFFFF) + n > 0xBA00)) fprintf(stderr, "[mm] d=%08x s=%08x n=%u sp=%08x pr=%08x\n", d, s, n, c->r[15], c->pr);
    if (0) fprintf(stderr, "[mm] d=%08x s=%08x n=%u\n", d, s, n);
    if (d == s) { c->t = 1; c->r[0] = d; return; }
    if (!n) { c->r[2] = 0; c->t = 0; c->r[0] = d; return; }
    if (!ram_span(d, n) || !ram_span(s, n)) { hle_orig(c, 0x8C0685B4); return; }
    memmove(hle_ptr(d), hle_ptr(s), n);
    /* leave the registers exactly as the original loops do (r1-r7 and T are scratch by the SH ABI, but this is cheap and keeps guest state byte-identical, which is how the hook is verified) */
    uint32_t g = d | s | n; const uint8_t *last;
    c->r[2] = d < s ? 0 : 1; c->t = 1;
    if (d < s) {                                              /* forward copy, element size from the common alignment */
        if (g & 1) { c->r[7] = d + n; c->r[6] = 0; last = hle_ptr(s + n - 1); c->r[3] = (uint32_t)(int32_t)(int8_t)*last; }
        else if (g & 3) { c->r[1] = 3; c->r[5] = s + n; c->r[7] = d + n; c->r[6] = 0; int16_t v; memcpy(&v, hle_ptr(s + n - 2), 2); c->r[3] = (uint32_t)(int32_t)v; }
        else { c->r[1] = 3; c->r[5] = s + n; c->r[7] = d + n; c->r[6] = 0; uint32_t v; memcpy(&v, hle_ptr(s + n - 4), 4); c->r[3] = v; }
    } else {                                                  /* backward copy */
        if (g & 1) { c->r[7] = s; c->r[5] = d; c->r[6] = 0; c->r[3] = (uint32_t)(int32_t)(int8_t)*hle_ptr(s); }
        else if (g & 3) { c->r[1] = 3; c->r[5] = s; c->r[7] = d; c->r[6] = 0; int16_t v; memcpy(&v, hle_ptr(s), 2); c->r[3] = (uint32_t)(int32_t)v; }
        else { c->r[1] = 3; c->r[7] = s; c->r[5] = d; c->r[6] = 0; uint32_t v; memcpy(&v, hle_ptr(s), 4); c->r[3] = v; }
    }
    c->r[0] = d;
}
#ifdef R2_CHK_LIBC     /* debug: run the original body (on a copy of the context) and the fast path from the same RAM state and compare registers + memory */
static void h_memmove(SH4Ctx *c) {
    uint32_t d = c->r[4], s = c->r[5], n = c->r[6];
    if (!n || d == s || !ram_span(d, n) || !ram_span(s, n) || n > 0x40000) { h_memmove_fast(c); return; }
    uint32_t lo = (d < s ? d : s) & 0xFFFFFF, span = (d < s ? s - d : d - s) + n; if (lo < 16) { h_memmove_fast(c); return; }
    uint8_t *save = malloc(span + 16), *res = malloc(span + 16); memcpy(save, sh4_ram + lo - 16, span + 16);
    uint8_t stk0[0x400], stk1[0x400]; uint32_t spo = c->r[15] & 0xFFFFFF; memcpy(stk0, sh4_ram + spo - 0x400, 0x400);
    SH4Ctx c2 = *c; hle_orig(&c2, 0x8C0685B4); memcpy(res, sh4_ram + lo - 16, span + 16); memcpy(stk1, sh4_ram + spo - 0x400, 0x400);
    memcpy(sh4_ram + lo - 16, save, span + 16); memcpy(sh4_ram + spo - 0x400, stk0, 0x400); h_memmove_fast(c);
    if (memcmp(stk1, sh4_ram + spo - 0x400, 0x400)) { fprintf(stderr, "[chk] STACK MISMATCH sp=%08x d=%08x s=%08x n=%u:", c->r[15], d, s, n); for (int k = 0; k < 0x400; k++) if (stk1[k] != sh4_ram[spo - 0x400 + k]) fprintf(stderr, " -%x(orig %02x fast %02x pre %02x)", 0x400 - k, stk1[k], sh4_ram[spo - 0x400 + k], stk0[k]); fprintf(stderr, "\n"); }
    if (memcmp(res, sh4_ram + lo - 16, span + 16)) fprintf(stderr, "[chk] memory MISMATCH d=%08x s=%08x n=%u sp=%08x\n", d, s, n, c->r[15]);
    for (int i = 0; i < 16; i++) if (c->r[i] != c2.r[i]) fprintf(stderr, "[chk] r%d fast=%08x orig=%08x (d=%08x s=%08x n=%u)\n", i, c->r[i], c2.r[i], d, s, n);
    if (c->t != c2.t) fprintf(stderr, "[chk] T fast=%u orig=%u (d=%08x s=%08x n=%u)\n", c->t, c2.t, d, s, n);
    free(save); free(res);
}
#else
#define h_memmove h_memmove_fast
#endif
static void h_memset(SH4Ctx *c) {
    uint32_t d = c->r[4], n = c->r[6];
    HOOK_ENTER(c, 0x8C0686B8);
    if (n && !ram_span(d, n)) { hle_orig(c, 0x8C0686B8); return; }
    if (n) memset(hle_ptr(d), (int)(c->r[5] & 0xFF), n);
    c->r[7] = n; c->r[3] = 0; c->t = 1; c->r[0] = d;           /* final scratch state of the original byte loop */
}
static void h_udiv32(SH4Ctx *c) {
    uint32_t d = c->r[0];
    if (__builtin_expect(!d, 0)) {
        c->t = 1;
        ST32(0x8C129AE4u, 0x44Eu);
        c->r[1] = 0x44Eu;
        c->r[0] = 0;
        return;
    }
    uint32_t q = c->r[1] / d;
    c->r[0] = q;
    c->r[1] = q;
    c->t = 0;
    c->m = 0;
    c->q = 0;
}
static void h_umod32(SH4Ctx *c) {
    uint32_t d = c->r[0];
    if (__builtin_expect(!d, 0)) {
        c->t = 1;
        ST32(0x8C129AE4u, 0x44Eu);
        c->r[1] = 0x8C129AE4u;
        c->r[0] = 0;
        return;
    }
    c->r[0] = c->r[1] % d;
    c->t = 1;
    c->m = 0;
    c->q = 0;
}
static void h_sdiv32(SH4Ctx *c) {
    int32_t d = (int32_t)c->r[0];
    if (__builtin_expect(!d, 0)) {
        c->t = 1;
        ST32(0x8C129AE4u, 0x44Eu);
        c->r[1] = 0x8C129AE4u;
        c->r[0] = 0;
        return;
    }
    int32_t n = (int32_t)c->r[1];
    int32_t q = (__builtin_expect(n == (int32_t)0x80000000 && d == -1, 0)) ? (int32_t)0x80000000 : (n / d);
    c->r[0] = (uint32_t)q;
    c->r[1] = (uint32_t)q;
    c->t = 0;
    c->m = 0;
    c->q = 0;
}
static void h_nop(SH4Ctx *c) { R(0) = 0; }
/* gdFs/GD-ROM driver bring-up (0x8C0CF158 gdFsInit, 0x8C0CD916 init-wait server). Replaced: the real driver state machine needs a faithful
 * GD-ROM BIOS (cmd 0x18/0x28/0x11 TOC/session reads); game file access is redirected at the FileMng/gdFs entry points by hle/io.c instead. */
static void h_ret0(SH4Ctx *c) { R(0) = 0; }
static void h_8c0e35ec(SH4Ctx *c) {
    uint32_t r4 = c->r[4];
    c->r[4] = LD32(r4 + 4);
    sh4_call(c, 0x8C0EF9A0u);
}
/* pdExecPeripheralServer: Maple DMA server loop. Replaced by a host poll; the peripheral table (stride 0x34 at DAT_8C0CF668) is filled
 * with "no device" for now (see TODO: map host pad -> +0x04 button mask, +0x0C.. axes). */
/* Kamui frame control. Originals are kept (they initialise the per-list SQ write-pointer tables the game's SQ code reads via 0x8C0FA82C);
 * we only add what the missing ASIC interrupt would have done: kmRender (0x8C0E0080) submits the scene -> render completes instantly ->
 * Kamui "type 0" (EOR) callback fires (game clears its render-busy bit @0x8C0C5400) and the TA module gets a frame-end notification. */
static void asic_flush_all(void);
static void h_kamui_begin(SH4Ctx *c) { if (hle_verbose >= 2) hle_log("[kamui] begin (kmBeginScene) pr=%08x", c->pr); asic_flush_all(); uint32_t pr = c->pr; hle_orig(c, 0x8C0D3AE0); c->pr = pr; if (cb_begin) cb_begin(c); }
static void h_kamui_render(SH4Ctx *c) {
    asic_flush_all();
    uint32_t pr = c->pr; hle_orig(c, 0x8C0E0080); uint32_t r0 = R(0); c->pr = pr;
    if (cb_end) cb_end(c);
    hle_frame_count++;
    if (hle_verbose) hle_log("[kamui] frame %lu submitted (render done), pr=%08x", hle_frame_count, pr);
    R(0) = r0;
    if (hle_frame_hook) hle_frame_hook(hle_frame_count);
    if (hle_trace_from_frame && hle_frame_count == hle_trace_from_frame) hle_set_trace(1);
    if (hle_frames_limit && hle_frame_count >= hle_frames_limit) { asic_flush_all(); hle_finish("frame limit reached"); }
}
/* Interrupt delivery model. The SDK (syInt, 0x8C0D0160) keeps handler lists indexed by event code>>4; 0x8C0D030E(code) walks and calls them.
 * VBlank-in is event 0xA60 (ASIC bit 3). There is no preemption in the host build, so interrupts are delivered at known wait points:
 * the Kamui idle callback (0x8C0D2BA0 type 7, called from every spin-wait in the Kamui layer). Pacing: at most one vblank per 1/60 s of host time;
 * a waiting guest sleeps until the next vblank is due. */
static void irq_deliver(SH4Ctx *c, uint32_t code) {
    SH4Ctx save = *c;
    c->r[4] = code; c->r[15] -= 0x80;
    sh4_call(c, 0x8C0D030Eu);
    *c = save;
}
/* Raise ASIC normal-interrupt bits (SB_ISTNRM) and run the Kamui ASIC ISR (0x8C0DCF40: maps bit->event id via 0x8C0F4374, calls the Kamui
 * callback table 0x8C2EF304). Bits: 2=EOR_TSP(render done) 3=VBlank-in 7..10=list ends (opaque,opaque-mod,trans,trans-mod) 21=punch-through end. */
void hle_asic_raise(uint32_t mask) {
    RegEnt *r = reg_slot(0x005F6900u); r->val |= mask;
    if (hle_verbose >= 2) hle_log("[asic] raise %08x -> ISTNRM=%08x mask24=%08x mask28=%08x ISTERR=%08x", mask, r->val, LD32(0x8C2EF304u + 24), LD32(0x8C2EF304u + 28), reg_slot(0x005F6908u)->val);
    for (int i = 0; i < 8 && (r->val & LD32(0x8C2EF304u + 24)); i++) {
        SH4Ctx save = *G; G->r[15] -= 0x80; sh4_call(G, 0x8C0DCF40u); *G = save;
    }
}
/* queued (deferred) ASIC events: on hardware they arrive some microseconds after the triggering write, i.e. after the code that issued it has
 * finished its bookkeeping. They are released from the Kamui idle callback (spin-waits) or, failing that, at the next frame boundary. */
static uint32_t asic_q[32]; static int asic_qn;
extern void hle_async_arm(int countdown);
void hle_asic_raise_later(uint32_t mask) { if (hle_verbose >= 2) hle_log("[asic] queue %08x (qn=%d)", mask, asic_qn); if (asic_qn < 32) asic_q[asic_qn++] = mask; hle_async_arm(6); }
static int asic_flush_one(void) {
    if (!asic_qn) { async_countdown = -1; return 0; }
    async_countdown = asic_qn > 1 ? 3 : -1;       /* next queued event a little later */
    uint32_t m = asic_q[0]; memmove(asic_q, asic_q + 1, (--asic_qn) * sizeof asic_q[0]); hle_asic_raise(m); return 1;
}
static void asic_flush_all(void) { while (asic_flush_one()) {} }
int hle_no_pace;                                   /* run_game --fast: do not sleep to hold 60 Hz (guest-visible time via TMU/SPG stays wall-clock) */
/* Vblank pacing.  The guest takes one vblank per idle poll and (30 fps lock) waits for two per frame.  Old rule: next vblank due = delivery time + 16.7 ms, so a frame whose game code needs
 * 34 ms (just over two vblanks) got its first vblank at +34 ms and then slept another full 16.7 ms for the second: 51 ms per frame (3 vblanks, 20 fps) although the work fits in 35 ms.  Real hardware has
 * a fixed vblank timeline: vblanks that passed while the guest was busy are already pending.  Catch-up: keep a fixed timeline `due_ns` and deliver late vblanks immediately as long as the guest is
 * less than two frames behind (beyond that - a load, a stall - the timeline is re-based like before).  next_vb_ns (the reference of the guest-clock ceiling) keeps its old meaning, so the guest clock and
 * the AICA sample clock do not change; only paced runs are affected (--fast keeps the old rule, so the host digests stay comparable).  Disable: env R2_VBLANK_CATCHUP=0 (host) / file ux0:data/rayman2/NO_CATCHUP (Vita). */
static uint64_t due_ns; static int vb_catchup = -1;
static void deliver_vblank(SH4Ctx *c) {          /* paced 60 Hz VBlank-in, as the hardware would raise while the guest waits */
    if (cb_vblank) cb_vblank(c);
    if (vb_catchup < 0) {
#if defined(__vita__)
        FILE *nf = fopen("ux0:data/rayman2/NO_CATCHUP", "rb"); vb_catchup = nf ? 0 : 1; if (nf) fclose(nf);
#else
        const char *e = getenv("R2_VBLANK_CATCHUP"); vb_catchup = !(e && *e == '0');
#endif
    }
    uint64_t t = now_ns(); uint32_t pr = c->pr;
    int cu = vb_catchup && !hle_no_pace && due_ns;
    uint64_t due = cu ? due_ns : next_vb_ns;
    if (t < due) {
        if (!hle_no_pace) { struct timespec ts = {0, (long)(due - t)}; uint64_t ts0 = r2_now_us(); int p_ = R2P_SET(1); nanosleep(&ts, 0); R2P_RESTORE(p_); g_perf.t_vsleep += r2_now_us() - ts0; g_perf.vsleep_n++; t = now_ns(); }
        else { clock_skew_ns += next_vb_ns - t; t = now_ns(); }
    }
    if (vb_catchup && !hle_no_pace) due_ns = (cu && t >= due && t - due < 2 * FRAME_NS) ? due + FRAME_NS : t + FRAME_NS;
    next_vb_ns = t + FRAME_NS; vb_delivered++;
    if (vb_delivered < 4) hle_log("[irq] vblank #%lu: list[0xA6]=%08x list[0xA8]=%08x flag884=%08x", vb_delivered, LD32(0x8C2EC5ACu + 0xA6 * 4), LD32(0x8C2EC5ACu + 0xA8 * 4), LD32(0x8C2ED884u));
    uint32_t f0 = LD32(0x8C2ED884u);
    hle_asic_raise(1u << 3);                 /* VBlank-in -> Kamui id 29 (0x8C0D45A6) */
    if (vb_delivered < 12) hle_log("[irq] vblank #%lu flag884 %08x -> %08x (888=%08x 890=%08x 89c=%08x)", vb_delivered, f0, LD32(0x8C2ED884u), LD32(0x8C2ED888u), LD32(0x8C2ED890u), LD32(0x8C2ED89Cu));
    c->pr = pr;
}
static void h_kamui_setvsync(SH4Ctx *c) {
    if (r2_get_fps_limit() == 30 && c->r[4] == 1) {
        c->r[4] = 2; /* Force 30 FPS vsync pacing when configured */
    }
    uint32_t pr = c->pr;
    hle_orig(c, 0x8C0D6C20u);
    c->pr = pr;
}

static void h_kamui_idle(SH4Ctx *c) {            /* 0x8C0D2BA0(type): invoke Kamui callback table[type]; type 7 = idle-wait callback */
    uint32_t type = c->r[4], pr = c->pr;
    if (type == 7 && asic_flush_one()) { /* deferred event delivered instead of vblank on this idle tick */ }
    else if (type == 7) deliver_vblank(c);
    hle_orig(c, 0x8C0D2BA0); c->pr = pr;
}
/* Game-side busy-wait on the render-in-progress bit (0x8C0385D8, and the identical loop at the head of 0x8C0386E0): pure memory spins with no calls, so
 * a function-boundary "interrupt" can never arrive; on hardware the EOR interrupt (and VBlank, which Kamui needs to flip/advance its render-context queue)
 * preempts the spin. We deliver every queued event, then paced VBlanks, until bit 0 of 0x8C0C5400 clears. */
static void render_wait_pump(SH4Ctx *c) {
    int guard = 0;
    while (guard++ < 400) {
        while (asic_qn) asic_flush_one();
        if (!(LD32(0x8C0C5400u) & 1)) return;
        deliver_vblank(c);
    }
    hle_log("[boot] render-wait: bit0 of 0x8C0C5400 still set after 400 vblanks (flag=%08x)", LD32(0x8C0C5400u));
}
static void h_render_wait(SH4Ctx *c) { uint32_t pr = c->pr; render_wait_pump(c); hle_orig(c, 0x8C0385D8); c->pr = pr; }
static void h_render_wait2(SH4Ctx *c) { uint32_t pr = c->pr; render_wait_pump(c); hle_orig(c, 0x8C0386E0); c->pr = pr; }
static void h_sprintf_spy(SH4Ctx *c) {
    uint32_t dst = c->r[4], fmt = c->r[5], pr = c->pr;
    char f[160]; snprintf(f, sizeof f, "%.150s", hle_cstr(fmt));
    hle_orig(c, 0x8C06874C);
    c->pr = pr;
    if (hle_verbose) hle_log("[sprintf] pr=%08x fmt=\"%s\" -> \"%.150s\"", pr, f, hle_cstr(dst));
}

/* ---------------------------------------------------------------- init / run */
void hle_boot_init(SH4Ctx *c, const uint8_t *image, uint32_t len, const char *dcdata_root) {
    G = c; t0_ns = tmu_base_ns = now_ns(); g_dcdata = dcdata_root;
    { const char *w = getenv("R2_WATCH"); while (w && *w && watch_n < 4) { watch_a[watch_n++] = (uint32_t)strtoul(w, (char **)&w, 16); if (*w == ',') w++; } update_trace_flag(); }
    sh4_fault_handler = on_fault;
    sh4_io_read_hook = sh4_io_read_dispatch; sh4_io_write_hook = sh4_io_write_dispatch;
    memset(sh4_ram, 0, sizeof sh4_ram);
    sh4_load_image(image, len, SH4_IMAGE_BASE);
    /* crt0 BSS clear: RAM is already zero, nothing more to do (0x8C0F46E0..0x8C2FF200). SEGA fill (0x8C00C000..0x8C00F400) skipped. */
    sh4_ctx_reset(c);
    c->sr_other = 0x400000F0u;           /* MD=1 RB=0 BL=0 IMASK=15 (IP.BIN hands over with interrupts masked) */
    c->fpscr = 0x00040001u;              /* DN=1, RM=nearest... (DC default) */
    sh4_setfpscr(c, 0x00040001u);
    c->r[15] = 0x8C00F400u;
    c->vbr = 0x8C00F400u;                /* Katana/IP.BIN VBR; syMmu copies exception handlers to VBR+0x100/0x400/0x600 */
    /* BIOS vectors */
    ST32(0x8C0000B0u, BIOS_SYSINFO); ST32(0x8C0000B8u, BIOS_FLASH); ST32(0x8C0000BCu, BIOS_GDROM); ST32(0x8C0000E0u, BIOS_EXIT);
    sh4_register_hook(BIOS_SYSINFO, bios_sysinfo); sh4_register_hook(BIOS_FLASH, bios_flash);
    sh4_register_hook(BIOS_GDROM, bios_gdrom); sh4_register_hook(BIOS_EXIT, bios_exit); sh4_register_hook(BIOS_RESET, bios_exit);
    /* SDK hooks */
    hle_hook(0x8C0DB7E0, h_pvr_write); hle_hook(0x8C0DB7EA, h_pvr_read);
    if (hle_verbose > 0) hle_hook(0x8C06874C, h_sprintf_spy);      /* only a logging spy: no hook (and no extra stub call per sprintf) when quiet */
#ifndef R2_NO_LIBC_HOOKS
#ifndef R2_NO_MEMMOVE_HOOK
    hle_hook(0x8C0685B4, h_memmove);
#endif
#ifndef R2_NO_MEMSET_HOOK
    hle_hook(0x8C0686B8, h_memset);
#endif
#endif
#ifndef R2_NO_DIV_HOOKS
    hle_hook(0x8C0679F4, h_udiv32);
    hle_hook(0x8C09C280, h_umod32);
    hle_hook(0x8C067940, h_sdiv32);
#endif
    { extern void hle_mathhooks_init(void); extern int hle_io_fdcache_enabled(void);
      int nomath = hle_switch("NO_MATH_HOOKS");
      if (!nomath) hle_mathhooks_init();
      { extern void hle_nativecut_init(void); hle_nativecut_init(); }      /* pure-native cut hooks (hle/nativecut.c): pass-through unless hle_native_cut is set */
      { extern void hle_geomhooks_init(void); if (!hle_switch("NO_GEOM_HOOKS")) hle_geomhooks_init(); }      /* native vertex / triangle submit hooks (hle/geomhooks.c, generated by hle/mkgeom.py); host: env R2_NO_GEOM_HOOKS */
      { extern void (*r2_perf_sink)(const char *line); char sw[400];       /* hle_log goes to sceClibPrintf only on the Vita: send the line through the rayman2.log sink too */
#if defined(__vita__)
        const int pf_on = hle_switch("PF");
#else
        const char *pe = getenv("R2_PF"); const int pf_on = !(pe && *pe && atoi(pe) == 0);
#endif
        snprintf(sw, sizeof sw, "[vita] switches: math_hooks=%s geom_hooks=%s fd_cache=%s pf=%s ui_trace=%s snd_trace=%s (disable with empty files in ux0:data/rayman2/: NO_MATH_HOOKS NO_GEOM_HOOKS NO_FD_CACHE NO_RENDER_THREAD NO_FOG NO_FOG_DEFER; enable with: PF (+PF_GPU) UI_TRACE SND_TRACE)",
                 nomath ? "OFF" : "ON", hle_switch("NO_GEOM_HOOKS") ? "OFF" : "ON", hle_io_fdcache_enabled() ? "ON" : "OFF", pf_on ? "ON" : "OFF", hle_switch("UI_TRACE") ? "ON" : "OFF", hle_switch("SND_TRACE") ? "ON" : "OFF");
        hle_log("%s", sw); if (r2_perf_sink) r2_perf_sink(sw); } }      /* register-localised hooks of hot math functions (hle/mathhooks.c, generated by hle/mkmath.py) */
    hle_hook(0x8C0CF830, h_nop); hle_hook(0x8C0CF89C, h_nop); hle_hook(0x8C0CFAFA, h_nop); hle_hook(0x8C0CFD4E, h_nop);
    hle_hook(0x8C0CFFE0, h_nop); hle_hook(0x8C0D1096, h_nop);
    hle_mmio_map(0xE0000000u, 0xE3FFFFFFu, sq_rd, sq_wr); hle_set_pref_handler(sq_flush_default);
    hle_hook(0x8C0D2BA0, h_kamui_idle); hle_hook(0x8C0385D8, h_render_wait); hle_hook(0x8C0386E0, h_render_wait2);
    hle_hook(0x8C0D3AE0, h_kamui_begin); hle_hook(0x8C0E0080, h_kamui_render); hle_hook(0x8C0D6C20, h_kamui_setvsync);
    hle_hook(0x8C0CD916, h_ret0);
    sh4_register_hook(0x8C0E35ECu, h_8c0e35ec);
    hle_io_init(dcdata_root);
    { extern void hle_pad_init(void); hle_pad_init(); }
    hle_vmu_init();                      /* after pad: pad_set_vmu() + BUP hooks (hle/vmu.c) */
    hle_ta_init();
    hle_camera_init();
    { extern void hle_dbg_init(void); hle_dbg_init(); }
}

int hle_run_main(SH4Ctx *c) {
    stop_code = 0; stop_reason[0] = 0;
    if (setjmp(run_jmp) == 0) {
        run_jmp_valid = 1;
        sh4_call(c, 0x8C010D92u);
        run_jmp_valid = 0;
        snprintf(stop_reason, sizeof stop_reason, "main returned");
        return 0;
    }
    run_jmp_valid = 0;
    return stop_code ? stop_code : 2;
}
const char *hle_stop_reason(void) { return stop_reason; }

/* end-of-run diagnostics */
void hle_dump_state(FILE *o) {
    SH4Ctx *c = G;
    fprintf(o, "---- stop state ----\nreason: %s\n", stop_reason);
    fprintf(o, "PR=%08x SP=%08x GBR=%08x SR=%08x FPSCR=%08x\n", c->pr, c->r[15], c->gbr, sh4_getsr(c), c->fpscr);
    for (int i = 0; i < 16; i++) fprintf(o, "R%-2d=%08x%s", i, c->r[i], (i & 3) == 3 ? "\n" : "  ");
    fprintf(o, "last 40 guest function entries (oldest first; addr / caller PR):\n");
    for (int i = 39; i >= 0; i--) { uint32_t p = hle_ring_pos - 1 - i; if (hle_ring_pos > (uint32_t)i) fprintf(o, "  f_%08x  pr=%08x\n", hle_ring[p & 255][0], hle_ring[p & 255][1]); }
    fprintf(o, "VRAM writes by area (idx = phys>>24: 4=32-bit,5=64-bit): SQ %lu/%lu/%lu/%lu  CPU %lu/%lu/%lu/%lu\n", vram_area_n[0], vram_area_n[1], vram_area_n[2], vram_area_n[3], vram_cpu_n[0], vram_cpu_n[1], vram_cpu_n[2], vram_cpu_n[3]);
    fprintf(o, "VRAM CPU write range: 32bit-area %06x..%06x, 64bit-area %06x..%06x\n", vram_min[0], vram_max[0], vram_min[1], vram_max[1]);
    fprintf(o, "STARTRENDER writes seen: %lu\n", startrender_n_get());
    fprintf(o, "frames flipped: %lu   unhandled slow-path accesses: %lu (distinct %d)\n", hle_frame_count, hle_unhandled_total, nuh);
}
void hle_dump_hw(FILE *o) {
    fprintf(o, "---- hardware register touch summary (modelled generic reg file) ----\n");
    for (int i = 0; i < NREG; i++) if (regs[i].used && (regs[i].rd || regs[i].wr))
        fprintf(o, "  %08x  rd=%-8u wr=%-8u lastrd=%08x lastwr=%08x firstPR=%08x\n", regs[i].key, regs[i].rd, regs[i].wr, regs[i].lastrd, regs[i].lastwr, regs[i].pr1);
    fprintf(o, "---- UNHANDLED (unmodelled address space) ----\n");
    for (int i = 0; i < nuh; i++) fprintf(o, "  %s %08x x%u firstPR=%08x in f_%08x val=%08x\n", uh[i].wr ? "wr" : "rd", uh[i].addr, uh[i].n, uh[i].pr, uh[i].last, uh[i].val);
}
