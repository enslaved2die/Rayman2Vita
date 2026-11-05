/* snd.c - Dreamcast AICA sound system: ARM7 interpreter + AICA register file/sample generator. See snd.h and re_analysis/dc/notes_sound.md.
 *
 * The recompiled sd library talks to wave RAM / AICA registers through MMIO, exactly as on hardware. Guest hooks: only the stream catch-up tick (see "guest stream catch-up ticks") and two log-only taps.
 * ARM-side behaviour that is NOT modelled: DSP (reverb/effects), LFO, filter, key-rate-scaling, MIDI in/out, SCSP "stereo ADPCM", RTC,
 * AICA->SH4 interrupts (MCIPD), exact bus-wait timing of the ARM7 (it runs at a fixed ARM_CYCLES_PER_INSN cycles/instruction).
 */
#include "swflag.h"
#include "r2prof.h"
#include "hle.h"
/* sd library entry points called by the game's ACP sound engine (documentation + makes them `run_game --spy 8c0xxxxx`-able, because
 * hle/mkstubs.py scans this file for literals): sdLibInit 0x8C0F0A48, sdDrvInit 0x8C0F0948, 0x8C0EFB60 0x8C0EFBBC 0x8C0EFC44 0x8C0EFCB0 0x8C0EFF7C
 * 0x8C0F0044 0x8C0F0428 0x8C0F0478 0x8C0F04FC 0x8C0F05F4 0x8C0F066C 0x8C0F06BC 0x8C0F0750 0x8C0F07D0 0x8C0F0878 0x8C0F08E4, game sound init
 * 0x8C098776. None of them is hooked: they run as recompiled guest code against the emulated AICA below. */
#include "snd.h"
#ifndef SND_TEST
#include "perf.h"      /* guest-thread cost counters (g_perf): stream tick, AICA lock waits */
#endif
/* R2_AUDIO_MODE (perf experiments, Makefile.vita VARIANT=v1_*): 0 = normal. 1 = frozen engine: snd_mix() returns silence and never advances the ARM7/AICA (the sd driver
 * never answers; the guest keeps running if its polls are non-blocking, see notes_perf_variants.md). 2 = ARM7 + timers are stepped (status words stay sane) but the 64-voice
 * generator, limiter and resampler are skipped (silence). */
#ifndef R2_AUDIO_MODE
#define R2_AUDIO_MODE 0
#endif
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

#if defined(__vita__)
/* vita-elf-create needs 3060 bytes of free space after the text segment before the 64 KiB-aligned data segment; a text segment ending a few hundred
 * bytes short of the boundary aborts the link ("Cannot allocate 3060 bytes for SCE data at end of segment 0; segment 1 overlaps"). Hit by an unlucky
 * code size in build_vita_v3; this 4 KiB of rodata moves the end of the segment. Remove only if the layout is otherwise guaranteed. */
#ifndef R2_LAYOUT_PAD
#define R2_LAYOUT_PAD 4600      /* Makefile.vita raises it for variants whose text size ends too close to a 64 KiB boundary */
#endif
__attribute__((used)) static const char g_vita_layout_pad[R2_LAYOUT_PAD] = "layout pad";
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
typedef SceUID snd_lock_t;
static snd_lock_t g_lk = -1;
static void lk_init(void) { if (g_lk < 0) g_lk = sceKernelCreateMutex("snd", 0, 0, NULL); }
static inline void lk_lock(void) { sceKernelLockMutex(g_lk, 1, NULL); }
static inline void lk_unlock(void) { sceKernelUnlockMutex(g_lk, 1); }
#else
#include <pthread.h>
static pthread_mutex_t g_lk = PTHREAD_MUTEX_INITIALIZER;
static void lk_init(void) {}
static inline void lk_lock(void) { pthread_mutex_lock(&g_lk); }
static inline void lk_unlock(void) { pthread_mutex_unlock(&g_lk); }
#endif

/* guest-thread acquisition of the AICA lock, timed (the audio thread holds it for up to MIX_CHUNK samples while it generates them): counted in g_perf.t_snd_lock / snd_lock_n */
static inline void glk_lock(void) {
#ifndef SND_TEST
    uint64_t t = r2_now_us(); int p_ = R2P_SET(2); lk_lock(); R2P_RESTORE(p_); g_perf.t_snd_lock += r2_now_us() - t; g_perf.snd_lock_n++;
#else
    lk_lock();
#endif
}
#define TRACE (g_trace)
static int g_trace;
static int g_evlog;                                     /* R2_SND_EV=1: per-voice key-on/off/end/loop event log */
static uint64_t st_samples_fwd(void);
#define EV(...) do { if (g_evlog) { fprintf(stderr, "[ev] t=%.4f f=%lu ", (double)st_samples_fwd() / 44100.0, hle_frame_count); fprintf(stderr, __VA_ARGS__); fputc('\n', stderr); } } while (0)

/* ---- snd_trace.log: off by default, file ux0:data/rayman2/SND_TRACE enables (Vita) / R2_SND_TRACELOG=<file> (host) buffered key-on diagnostics for swallowed-SFX hunting. No behaviour change: only reads emulator state.
 * Text lines "f=<guest frame> t=<aica s> EVENT ...", buffered in RAM, written (no fflush per event) when 32 KiB are pending, every 30 guest frames, and at exit. Capped at 4 MiB (then stops). */
#define TL_CAP_BYTES (4u << 20)
#define TL_BUF 65536
#if defined(__vita__)
#define TL_DEFAULT_PATH "ux0:data/rayman2/snd_trace.log"
#else
#define TL_DEFAULT_PATH NULL
#endif
static int g_tl_on; static FILE *g_tl_f; static const char *g_tl_path = TL_DEFAULT_PATH;
static char g_tl_buf[TL_BUF]; static unsigned g_tl_n; static uint64_t g_tl_total; static volatile int g_tl_spin;
static unsigned long g_tl_lastframe, g_tl_flushframe;
static void tl_flush_nolock(void) {
    if (!g_tl_n) return;
    if (!g_tl_f && g_tl_path) { g_tl_f = fopen(g_tl_path, "w"); if (!g_tl_f) { g_tl_on = 0; g_tl_n = 0; return; } }
    if (g_tl_f) { fwrite(g_tl_buf, 1, g_tl_n, g_tl_f); fflush(g_tl_f); }
    g_tl_n = 0;
}
static void tl_printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void tl_printf(const char *fmt, ...) {
    if (!g_tl_on) return;
    while (__sync_lock_test_and_set(&g_tl_spin, 1)) ;
    if (g_tl_total + g_tl_n < TL_CAP_BYTES) {
        if (g_tl_n + 700 > TL_BUF) { g_tl_total += g_tl_n; tl_flush_nolock(); }
        if (g_tl_on) {
            int k = snprintf(g_tl_buf + g_tl_n, 160, "f=%lu t=%.4f ", hle_frame_count, (double)st_samples_fwd() / 44100.0);
            va_list ap; va_start(ap, fmt);
            int m = vsnprintf(g_tl_buf + g_tl_n + k, 520, fmt, ap); va_end(ap);
            if (m > 519) m = 519;
            if (m < 0) m = 0;
            g_tl_n += (unsigned)(k + m); g_tl_buf[g_tl_n++] = '\n';
        }
    } else if (g_tl_on) {
        g_tl_total += g_tl_n; tl_flush_nolock();
        if (g_tl_f) { fputs("-- log cap reached, stopped --\n", g_tl_f); fclose(g_tl_f); g_tl_f = 0; }
        g_tl_on = 0;
    }
    __sync_lock_release(&g_tl_spin);
}
#define EVT(...) do { EV(__VA_ARGS__); if (g_tl_on) tl_printf(__VA_ARGS__); } while (0)
void snd_trace_close(void) {
    if (!g_tl_path && !g_tl_f) return;
    while (__sync_lock_test_and_set(&g_tl_spin, 1)) ;
    tl_flush_nolock(); if (g_tl_f) { fclose(g_tl_f); g_tl_f = 0; }
    g_tl_on = 0;
    __sync_lock_release(&g_tl_spin);
}
static int g_vdump_s;                                   /* R2_SND_VDUMP=<s>: dump every active voice every <s> seconds of AICA time (stuck/orphan voice diagnosis) */
static int g_ringlog;                                   /* R2_SND_RING=1: log music stream ring refills vs. voice wraps */
static uint64_t g_rw_bytes[2], g_rw_n[2], g_rw_wraps[2]; static uint32_t g_rw_lo[2], g_rw_hi[2];
static uint64_t st_samples_fwd(void);

/* ============================================================================================================================ state */
#define ARAM_SIZE 0x200000u
#define AREG_WORDS 0x2000u            /* 0x0000..0x7FFF bytes */
#define ARM_CYCLES_PER_SAMPLE 512     /* 22.5792 MHz / 44100 */
#define ARM_CYCLES_PER_INSN 2

static uint8_t  aram[ARAM_SIZE];
static uint32_t aregs[AREG_WORDS];

/* ---------------------------------------------------------------------------------------------------------------- AICA channels */
typedef struct {
    int      active;
    int      eg;                 /* 0 attack, 1 decay1, 2 decay2, 3 release */
    float    att;                /* 0 (loud) .. 1023 (silent), 10-bit attenuation */
    uint32_t pos, frac;          /* sample index, 16-bit fraction */
    int32_t  s0, s1;             /* samples at pos and pos+1 (interpolation) */
    int32_t  ad_pred, ad_step;   /* ADPCM decoder state (state valid for decoding index ad_pos) */
    uint32_t ad_pos;
    int32_t  lsa_pred, lsa_step; int lsa_saved;
    int      lp_flag;
    uint64_t t0;                 /* st_samples at key-on (voice dump) */
    uint32_t sa;                 /* sample address / format word (reg0 bits 7-8 + SA) captured at key-on: tells a real voice steal from a redundant KYONB rewrite */
} Chan;
static Chan chn[64];
static uint64_t g_amask;           /* bit ch set <=> chn[ch].active (kept in step at the three places that change it): render_sample walks only the set bits */
static uint8_t g_keyed[64];       /* latched KYONB per channel (see keyonex) */
static uint8_t g_key_req[64];     /* KYONB=1 written to channel's reg0 since last keyonex */
static uint8_t g_dirty[64];       /* channel registers written since the last key-on (diagnostic) */

/* ---------------------------------------------------------------------------------------------------------------- ARM7 */
typedef struct {
    uint32_t r[16], cpsr, spsr[6], b13[6], b14[6], fiq8[5], usr8[5];
} Arm;
static Arm A;
static int      arm_run_flag;
static int64_t  arm_budget;
static int      idle_ok;
static uint64_t st_arm_bulk;   /* ARM instructions accounted by delay_skip() in bulk (not dispatched one by one) */
static uint64_t st_arm_instr, st_idle, st_samples, st_keyon, st_ringcmds; static uint32_t st_undef, st_peak;

/* interrupts / timers */
static uint32_t scipd, fiq_pend, intreq_level;
static uint32_t tim_cnt[3], tim_pre[3], tim_acc[3];

static float g_master = 1.0f;
static int   g_out_rate = 44100;
static int   g_inited;

/* ============================================================================================================================ tables */
static float g_att_gain[1024];     /* attenuation (0.09375 dB steps) -> linear */
static float g_tl_gain[256];       /* TL: 0.375 dB steps */
static float g_dl_gain[16];        /* DISDL */
static float g_pan_gain[16];       /* DIPAN low 4 bits: 3 dB steps, 15 = mute */
static float g_att_step[32], g_dec_step[32];   /* per-sample attenuation delta by rate */
static int   g_tables_done;

static void build_tables(void) {
    if (g_tables_done) return;
    for (int i = 0; i < 1024; i++) g_att_gain[i] = powf(10.0f, -(float)i * 0.09375f / 20.0f);
    g_att_gain[1023] = 0.0f;
    for (int i = 0; i < 256; i++) g_tl_gain[i] = powf(10.0f, -(float)i * 0.375f / 20.0f);
    for (int i = 0; i < 16; i++) g_dl_gain[i] = i == 0 ? 0.0f : powf(10.0f, -(float)(15 - i) * 3.0f / 20.0f);
    for (int i = 0; i < 16; i++) g_pan_gain[i] = i == 15 ? 0.0f : powf(10.0f, -(float)i * 3.0f / 20.0f);
    /* EG time for the full 0..96 dB range as a function of rate (AICA documentation, 2 table steps per rate, 4 steps per halving) */
    for (int r = 0; r < 32; r++) {
        if (r == 0) { g_att_step[r] = 0.0f; g_dec_step[r] = 0.0f; continue; }
        double idx = (double)(r * 2);
        double ta = 8100.0 * pow(2.0, -(idx - 2.0) / 4.0), td = 118200.0 * pow(2.0, -(idx - 2.0) / 4.0);   /* ms */
        g_att_step[r] = (r == 31) ? 1024.0f : (float)(1023.0 / (ta * 44.1));
        g_dec_step[r] = (float)(1023.0 / (td * 44.1));
    }
    g_tables_done = 1;
}

/* ============================================================================================================================ memory */
#define SND_INL static inline __attribute__((always_inline))
/* constant-size fast paths: the old memcpy(&v, &aram[a], sz) with a run-time `sz` was an out-of-line libc call on every ARM fetch / load / store (the Vita's newlib memcpy) */
SND_INL uint32_t ram_rd(uint32_t a, int sz) {
    a &= ARAM_SIZE - 1; if (a + (uint32_t)sz > ARAM_SIZE) return 0;
    if (sz == 4) { uint32_t v; memcpy(&v, &aram[a], 4); return v; }
    if (sz == 1) return aram[a];
    { uint16_t v; memcpy(&v, &aram[a], 2); return v; }
}
SND_INL void ram_wr(uint32_t a, int sz, uint32_t v) {
    a &= ARAM_SIZE - 1; if (a + (uint32_t)sz > ARAM_SIZE) return;
    if (sz == 4) memcpy(&aram[a], &v, 4); else if (sz == 1) aram[a] = (uint8_t)v; else { uint16_t x = (uint16_t)v; memcpy(&aram[a], &x, 2); }
}

static void update_fiq_level(void);
static void keyonex(void);
static uint32_t reg_read(uint32_t off, int sz, int from_arm);
static void reg_write(uint32_t off, int sz, uint32_t v, int from_arm);

static inline void scipd_set(uint32_t bits) {
    scipd |= bits;
    uint32_t en = aregs[0x289C / 4] & bits & 0x7FF;
    if (en) { fiq_pend |= en; update_fiq_level(); }
}
static void update_fiq_level(void) {
    uint32_t p = fiq_pend;
    if (!p) return;
    int b = 31 - __builtin_clz(p);                       /* highest pending source decides the level (most recent/most urgent) */
    uint32_t l0 = aregs[0x28A8 / 4], l1 = aregs[0x28AC / 4], l2 = aregs[0x28B0 / 4];
    intreq_level = ((l0 >> b) & 1) | (((l1 >> b) & 1) << 1) | (((l2 >> b) & 1) << 2);
}

/* --- channel monitor (0x280C MSLC select, 0x2810 read: LP | SGC | EG13, 0x2814 read: CA) --- */
static uint32_t mon_read(uint32_t off) {
    unsigned ch = (aregs[0x280C / 4] >> 8) & 0x3F;
    const Chan *c = &chn[ch];
    if (off == 0x2810) {
        uint32_t eg13 = c->active ? (uint32_t)(c->att * 8.0f) : 0x1FFF;
        if (eg13 > 0x1FFF) eg13 = 0x1FFF;
        uint32_t sgc = c->active ? (uint32_t)c->eg : 3;
        return (c->lp_flag ? 0x8000u : 0) | (sgc << 13) | eg13;
    }
    return (c->pos << 0) & 0xFFFF;                       /* CA: current sample address (low bits) */
}

static uint64_t g_armrd_hist[0x8000 / 4];      /* R2_SND_EV diagnostics: ARM reads per AICA register word */
static uint32_t reg_read(uint32_t off, int sz, int from_arm) {
    off &= 0x7FFF;
    if (from_arm && (g_evlog || g_tl_on)) g_armrd_hist[off >> 2]++;
    uint32_t w = aregs[off >> 2];
    switch (off & ~3u) {
    case 0x2810: case 0x2814: w = mon_read(off & ~3u);
        if (from_arm && g_tl_on && (off & ~3u) == 0x2810) { static uint32_t lastv[64]; unsigned mch = (aregs[0x280C / 4] >> 8) & 0x3F; if (lastv[mch] != w + 1) { lastv[mch] = w + 1; tl_printf("MONRD ch%u %04x (lp=%u sgc=%u eg=%u) active=%d keyed=%d armpc=%05x", mch, w, (w >> 15) & 1, (w >> 13) & 3, w & 0x1FFF, chn[mch].active, g_keyed[mch], A.r[15]); } }
        break;
    case 0x2D00: w = from_arm ? intreq_level : w; break;
    case 0x2890: w = (tim_pre[0] << 8) | tim_cnt[0]; break;
    case 0x2894: w = (tim_pre[1] << 8) | tim_cnt[1]; break;
    case 0x2898: w = (tim_pre[2] << 8) | tim_cnt[2]; break;
    case 0x28A0: w = scipd; break;
    case 0x2808: w = 0x100; break;                       /* MIDI in: empty */
    default: break;
    }
    if ((off & ~3u) < 0x2000 && (off & 0x7F) == 0) w &= ~0x8000u;    /* KYONEX reads 0 */
    int sh = (off & 3) * 8;
    w >>= sh;
    return sz == 1 ? (w & 0xFF) : sz == 2 ? (w & 0xFFFF) : w;
}

static void arm_reset(void);
/* snd_trace.log: every channel reg0 write (KYONB/KYONEX/SA-high/format/loop), with the channel's current latch + EG state; flags a rewrite of a still-latched channel */
static void tl_reg0(int ch, uint32_t old, uint32_t nw, int from_arm) {
    const Chan *c = &chn[ch];
    uint32_t sa_new = (((nw & 0x7F) << 16) | (aregs[(ch * 0x80 + 4) >> 2] & 0xFFFF)) & (ARAM_SIZE - 1);
    int kb_old = (old >> 14) & 1, kb_new = (nw >> 14) & 1;
    if (!kb_old && !kb_new && !g_keyed[ch] && !c->active) return;      /* idle channel, KYONEX strobe only: skip the noise */
    tl_printf("R0WR ch%d src=%s KYONB %d->%d KYONEX=%d sa=%06x fmt=%d loop=%d | latched=%d active=%d eg=%d att=%.0f", ch, from_arm ? "arm" : "sh4", kb_old, kb_new, (nw >> 15) & 1,
              sa_new, (nw >> 7) & 3, (nw >> 9) & 1, g_keyed[ch], c->active, c->eg, c->att);
    if (g_keyed[ch] && kb_new && (nw & 0x1FFF80u) != (old & 0x1FFF80u))
        tl_printf("LATCHED_REWRITE ch%d reg0 %08x->%08x new_sa=%06x (cur voice sa=%06x fmt=%u playing=%d)", ch, old, nw, sa_new, c->sa & 0x0FFFFFFFu, c->sa >> 28, c->active && c->eg != 3);
}
static void reg_write(uint32_t off, int sz, uint32_t v, int from_arm) {
    off &= 0x7FFF;
    uint32_t wo = off & ~3u, cur = aregs[wo >> 2], nw;
    if (sz == 4) nw = v;
    else { int sh = (off & 3) * 8; uint32_t m = (sz == 1 ? 0xFFu : 0xFFFFu) << sh; nw = (cur & ~m) | ((v << sh) & m); }
    if (TRACE && !(wo < 0x2000 && (wo & 0x7C) > 0x30) && wo != 0x2D04 && wo != 0x28A4 && wo != 0x2890) {
        static unsigned n; if (n++ < 4000) fprintf(stderr, "[aica] %s wr %05x <- %08x (sz %d)\n", from_arm ? "arm" : "sh4", wo, nw, sz);
    }
    switch (wo) {
    case 0x2890: case 0x2894: case 0x2898: { int t = (wo - 0x2890) >> 2; tim_cnt[t] = nw & 0xFF; tim_pre[t] = (nw >> 8) & 7; tim_acc[t] = 0; aregs[wo >> 2] = nw; return; }
    case 0x289C: aregs[wo >> 2] = nw; { uint32_t en = scipd & nw & 0x7FF; if (en) { fiq_pend |= en; update_fiq_level(); } } return;
    case 0x28A0: aregs[wo >> 2] = nw; if (nw & 0x20) scipd_set(0x20); return;          /* only bit 5 (CPU interrupt) is writable */
    case 0x28A4: scipd &= ~nw; return;                                                  /* SCIRE: clear pending */
    case 0x28BC: aregs[0x28B8 / 4] &= ~nw; return;                                      /* MCIRE */
    case 0x2D04: if (nw & 1) { /* INTCLEAR: ack the interrupt being serviced */
            if (fiq_pend) { int b = 31 - __builtin_clz(fiq_pend); fiq_pend &= ~(1u << b); update_fiq_level(); }
        } return;
    case 0x2D00: aregs[wo >> 2] = nw; if (!from_arm && (nw & 1)) scipd_set(0x20); return;   /* SH4 -> ARM interrupt (CPU int, SCIPD bit 5) */
    case 0x2C00: {
        uint32_t old = cur & 1; aregs[wo >> 2] = nw;
        if (old != (nw & 1)) { if (TRACE) fprintf(stderr, "[aica] ARMRST %u -> %u (sh4 pc-less write)\n", old, nw & 1); if (nw & 1) arm_run_flag = 0; else arm_reset(); }
        return; }
    case 0x2810: case 0x2814: return;
    default: break;
    }
    aregs[wo >> 2] = nw;
    if (g_tl_on && wo < 0x2000 && (wo & 0x7F) == 0) tl_reg0(wo >> 7, cur, nw, from_arm);
    if (wo < 0x2000 && (wo & 0x7C) != 0) g_dirty[wo >> 7] = 1;
    if (wo < 0x2000 && (wo & 0x7F) == 0) {
        if ((cur ^ nw) & ~0x8000u) g_dirty[wo >> 7] = 1;
        if (nw & 0x4000) g_key_req[wo >> 7] = 1;
        else g_key_req[wo >> 7] = 0;
    }
    if (wo < 0x2000 && (wo & 0x7F) == 0 && (nw & 0x8000)) keyonex();
}

/* ============================================================================================================================ AICA channels */
static int16_t chan_sample(const Chan *c, uint32_t idx, uint32_t base, int pcms) {
    (void)c;
    switch (pcms) {
    case 0: return (int16_t)ram_rd(base + idx * 2, 2);
    case 1: return (int16_t)((int8_t)ram_rd(base + idx, 1) << 8);
    default: return 0;
    }
}
/* Yamaha ADPCM (as used by AICA): low nibble first */
static const int8_t  yam_diff[16] = {1, 3, 5, 7, 9, 11, 13, 15, -1, -3, -5, -7, -9, -11, -13, -15};
static const int32_t yam_scale[8] = {230, 230, 230, 230, 307, 409, 512, 614};
static inline int32_t adpcm_next(Chan *c, uint32_t base, uint32_t lsa) {
    if (c->ad_pos == lsa && !c->lsa_saved) { c->lsa_pred = c->ad_pred; c->lsa_step = c->ad_step; c->lsa_saved = 1; }
    uint32_t byte = ram_rd(base + (c->ad_pos >> 1), 1);
    uint32_t nib = (c->ad_pos & 1) ? (byte >> 4) : (byte & 15);
    c->ad_pos++;
    int32_t p = c->ad_pred + (yam_diff[nib] * c->ad_step) / 8;
    if (p > 32767) p = 32767; else if (p < -32768) p = -32768;
    c->ad_pred = p;
    int32_t st = (c->ad_step * yam_scale[nib & 7]) >> 8;
    c->ad_step = st < 127 ? 127 : st > 24576 ? 24576 : st;
    return p;
}

static inline uint32_t chn_reg(int ch, int r) { return aregs[(ch * 0x80 + r) >> 2]; }

static void chan_start(int ch) {
    Chan *c = &chn[ch];
    memset(c, 0, sizeof *c);
    c->active = 1; g_amask |= 1ull << ch; c->eg = 0; c->att = 1023.0f; c->t0 = st_samples;
    uint32_t r10 = chn_reg(ch, 0x10);
    if ((r10 & 31) == 31) { c->att = 0.0f; c->eg = 1; }
    c->ad_pred = 0; c->ad_step = 127;
    uint32_t r0 = chn_reg(ch, 0), base = (((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)) & (ARAM_SIZE - 1), lsa = chn_reg(ch, 8) & 0xFFFF;
    int pcms = (r0 >> 7) & 3;
    c->sa = base | ((uint32_t)pcms << 28);
    if (pcms >= 2) { c->ad_pos = 0; c->s0 = adpcm_next(c, base, lsa); c->s1 = adpcm_next(c, base, lsa); }
    else { c->s0 = chan_sample(c, 0, base, pcms); c->s1 = chan_sample(c, 1, base, pcms); }
    st_keyon++;
    EVT("KEYON ch%d pcms=%d sa=%06x lsa=%u lea=%u loop=%d rr=%u d2r=%u tl=%u dl=%u fns=%u oct=%d pan=%u", ch, pcms, base, lsa, chn_reg(ch, 0xC) & 0xFFFF, (r0 >> 9) & 1, chn_reg(ch, 0x14) & 31, (r10 >> 11) & 31, (chn_reg(ch, 0x28) >> 8) & 255, (chn_reg(ch, 0x24) >> 8) & 15, chn_reg(ch, 0x18) & 0x3FF, ((int)((chn_reg(ch, 0x18) >> 11) & 15) ^ 8) - 8, chn_reg(ch, 0x24) & 31);
    if (TRACE && pcms >= 2) {      /* decode-quality probe: statistics of the first samples (a correct ADPCM decode is ~zero-mean, not saturated) */
        Chan t; memset(&t, 0, sizeof t); t.ad_step = 127; uint32_t n = chn_reg(ch, 0xC) & 0xFFFF; if (n > 8192) n = 8192;
        double sum = 0, sq = 0; int sat = 0;
        for (uint32_t k = 0; k < n; k++) { int32_t v = adpcm_next(&t, base, 0xFFFFFFFFu); sum += v; sq += (double)v * v; if (v >= 32767 || v <= -32768) sat++; }
        if (n) { static unsigned pn; if (pn++ < 400) fprintf(stderr, "[aica] PROBE sa=%06x n=%u mean=%.0f rms=%.0f sat=%d\n", base, n, sum / n, sqrt(sq / n), sat); }
    }
    if (TRACE) {
        static unsigned n; if (n++ < 300) fprintf(stderr, "[aica] KEYON ch%d pcms=%d sa=%06x lsa=%u lea=%u loop=%d AR=%u D1R=%u D2R=%u RR=%u DL=%u fns=%u oct=%d tl=%u disdl=%u dipan=%u\n", ch, pcms, base, lsa, chn_reg(ch, 0xC) & 0xFFFF,
                (r0 >> 9) & 1, r10 & 31, (r10 >> 6) & 31, (r10 >> 11) & 31, chn_reg(ch, 0x14) & 31, (chn_reg(ch, 0x14) >> 5) & 31, chn_reg(ch, 0x18) & 0x3FF,
                ((int)((chn_reg(ch, 0x18) >> 11) & 15) ^ 8) - 8, (chn_reg(ch, 0x28) >> 8) & 255, (chn_reg(ch, 0x24) >> 8) & 15, chn_reg(ch, 0x24) & 31);
    }
}
/* KYONEX: latch each channel's KYONB. Key-on happens on a KYONB 0 -> 1 transition of the latched state, key-off on 1 -> 0 (Sega driver: a voice is keyed off explicitly
 * before its channel is reused). A channel that is still latched ON but finished (sample end / EG at max) is NOT restarted by a later KYONEX for another voice: the previous
 * code restarted every inactive channel with KYONB=1 on every KYONEX ("a finished SFX plays again whenever another sound starts"). Ignored restarts are counted/logged. */
static uint64_t st_keyon_ignored; static int g_keyon_old; static uint8_t g_ign_logged[64];       /* IGNORED is logged once per latch (it repeated for every unrelated KYONEX: 1154 lines vs 188 KEYON in one session) */                 /* R2_SND_KEYON_OLD=1: old rule (restart every finished latched channel), A/B only */
static void keyonex(void) {
    for (int ch = 0; ch < 64; ch++) {
        uint32_t r0 = chn_reg(ch, 0);
        int on = (r0 >> 14) & 1;
        Chan *c = &chn[ch];
        if (on) {
            uint32_t base = (((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)) & (ARAM_SIZE - 1);
            int is_ring = (base == 0x18000 || base == 0x1E000);
            /* g_key_req is set by ANY reg0 write with KYONB=1 (the driver rewrites reg0 of voices that are already playing, KYONB kept at 1, whenever it keys on another voice). Restarting
             * every such active voice cut/restarted all playing SFX on each new key-on (fist spam + lum pickup). Hardware ignores KYONB=1 on a voice that is already keyed on, so an
             * ACTIVE (non-releasing) voice is restarted only when the write really loads a different sound (new SA/format) = a voice steal without key-off. */
            int playing = c->active && c->eg != 3;
            int is_retrigger = g_key_req[ch] && (!playing || (!is_ring && c->sa != (base | ((uint32_t)((r0 >> 7) & 3) << 28))));
            if (!g_keyed[ch] || (is_retrigger && !(is_ring && playing)) || (g_keyon_old && (!c->active || c->eg == 3))) {
                if (g_tl_on && playing) tl_printf("STEAL ch%d: playing sa=%06x fmt=%u eg=%d pos=%u replaced by sa=%06x (no key-off)", ch, c->sa & 0x0FFFFFFFu, c->sa >> 28, c->eg, c->pos, base);
                g_keyed[ch] = 1; g_ign_logged[ch] = 0; g_dirty[ch] = 0; chan_start(ch);
            }
            else if (!c->active || c->eg == 3) {
                st_keyon_ignored++;
                if (!g_ign_logged[ch]) { g_ign_logged[ch] = 1; EVT("KEYON_IGNORED ch%d (latched on, active=%d eg=%d) sa=%06x%s [first ignore of this latch; counted in ignored_total]", ch, c->active, c->eg, base, is_ring ? " RING-VOICE" : ""); }
            }
        } else {
            g_keyed[ch] = 0; g_ign_logged[ch] = 0;
            if (c->active && c->eg != 3) { c->eg = 3; EVT("KEYOFF ch%d pos=%u att=%.0f rr=%u", ch, c->pos, c->att, chn_reg(ch, 0x14) & 31); }
        }
        g_key_req[ch] = 0;
    }
    for (int ch = 0; ch < 64; ch++) aregs[(ch * 0x80) >> 2] &= ~0x8000u;
}

/* render one output sample of all channels -> l, r (float, 16-bit scale) */
static inline void render_sample(float *outl, float *outr) {
    float l = 0, r = 0;
    for (uint64_t m = g_amask; m; m &= m - 1) {
        const int ch = __builtin_ctzll(m);
        Chan *c = &chn[ch];
        if (!c->active) continue;
        const uint32_t *rg = &aregs[(ch * 0x80) >> 2];
        uint32_t r0 = rg[0], r10 = rg[0x10 >> 2], r14 = rg[0x14 >> 2], r18 = rg[0x18 >> 2];
        /* envelope */
        switch (c->eg) {
        case 0: { unsigned ar = r10 & 31; c->att -= g_att_step[ar]; if (c->att <= 0.0f) { c->att = 0.0f; c->eg = 1; } break; }
        case 1: { unsigned d1 = (r10 >> 6) & 31; float dl = (float)(((r14 >> 5) & 31) << 5);
                  c->att += g_dec_step[d1]; if (c->att >= dl) { c->att = dl; c->eg = 2; } break; }
        case 2: { unsigned d2 = (r10 >> 11) & 31; c->att += g_dec_step[d2]; if (c->att > 1023.0f) c->att = 1023.0f; break; }
        default: { unsigned rr = r14 & 31; c->att += g_dec_step[rr]; if (c->att >= 1023.0f) { c->att = 1023.0f; c->active = 0; g_amask &= ~(1ull << ch); EVT("REL_END ch%d", ch); } break; }
        }
        if (!c->active) continue;
        /* sample */
        int pcms = (r0 >> 7) & 3;
        uint32_t base = (((r0 & 0x7F) << 16) | (rg[1] & 0xFFFF)) & (ARAM_SIZE - 1);
        uint32_t lsa = rg[2] & 0xFFFF, lea = rg[3] & 0xFFFF; int loop = (r0 >> 9) & 1;
        if (!(r0 & 0x400)) {            /* SSCTL=0: normal sample source */
            float f = (float)c->frac * (1.0f / 65536.0f);
            float smp = (float)c->s0 + ((float)c->s1 - (float)c->s0) * f;
            int dsel = (int)((rg[0x24 >> 2] >> 8) & 15), pan = (int)(rg[0x24 >> 2] & 31), tl = (int)((rg[0x28 >> 2] >> 8) & 255);
            float g = g_att_gain[(int)c->att > 1023 ? 1023 : (int)c->att] * g_tl_gain[tl] * g_dl_gain[dsel];
            float gl = g, gr = g;
            if (pan & 0x10) gr *= g_pan_gain[pan & 15]; else gl *= g_pan_gain[pan & 15];   /* KOS AICA_PAN(): left = 0x1F, right = 0x0F */
            l += smp * gl; r += smp * gr;
        }
        /* advance position */
        int oct = (int)((r18 >> 11) & 15); if (oct > 7) oct -= 16;
        uint32_t inc = (1024 + (r18 & 0x3FF)) * 64u;      /* 16.16 fixed point, 1024 = 1.0 */
        inc = oct >= 0 ? inc << oct : inc >> (-oct);
        uint32_t fr = c->frac + inc;
        uint32_t adv = fr >> 16; c->frac = fr & 0xFFFF;
        while (adv--) {
            c->pos++;
            if (lea && c->pos >= lea) {
                if (loop) {
                    c->lp_flag = 1; EV("LOOPWRAP ch%d sa=%06x lsa=%u lea=%u eg=%d att=%.0f", ch, base, lsa, lea, c->eg, c->att);
                    if (g_ringlog && (base == 0x18000 || base == 0x1E000)) {
                        int ri = base == 0x1E000; g_rw_wraps[ri]++;
                        fprintf(stderr, "[ring%d] t=%.3fs wrap#%llu lea=%u sh4_stores=%llu bytes=%llu range=%05x..%05x\n", ri, (double)st_samples_fwd() / 44100.0, (unsigned long long)g_rw_wraps[ri], lea, (unsigned long long)g_rw_n[ri], (unsigned long long)g_rw_bytes[ri], g_rw_lo[ri], g_rw_hi[ri]);
                        g_rw_n[ri] = g_rw_bytes[ri] = 0; g_rw_lo[ri] = 0xFFFFFF; g_rw_hi[ri] = 0;
                    }
                    c->pos = lsa;
                    if (pcms >= 2) { c->ad_pos = lsa; if (pcms != 3) { c->ad_pred = c->lsa_saved ? c->lsa_pred : 0; c->ad_step = c->lsa_saved ? c->lsa_step : 127; } /* pcms 3 = ADPCM long-stream: decoder state continues across the loop (ring-buffer streams) */ c->s0 = adpcm_next(c, base, lsa); c->s1 = adpcm_next(c, base, lsa); continue; }
                } else { c->lp_flag = 1; /* AICA sets the loop-end flag (0x2810 bit15) when a non-looping sample reaches LEA too: the MANATEE ARM driver only ends a voice (keys it off, clears its playing flag = the SH4-visible status byte) when it sees this bit (ARM 0x7298 tst #0x8000) */ c->active = 0; g_amask &= ~(1ull << ch); EVT("SAMPLE_END ch%d sa=%06x lea=%u eg=%d", ch, base, lea, c->eg); break; }
            }
            c->s0 = c->s1;
            uint32_t nx = c->pos + 1;
            if (lea && nx >= lea) nx = loop ? lsa : c->pos;
            if (pcms >= 2) { if (nx == c->pos + 1) c->s1 = adpcm_next(c, base, lsa); else c->s1 = c->s0; }
            else c->s1 = chan_sample(c, nx, base, pcms);
        }
    }
    *outl = l; *outr = r;
}

/* ============================================================================================================================ ARM7 */
#define FN 0x80000000u
#define FZ 0x40000000u
#define FC 0x20000000u
#define FV 0x10000000u

static int mode_idx(uint32_t m) { switch (m & 0x1F) { case 0x11: return 1; case 0x12: return 2; case 0x13: return 3; case 0x17: return 4; case 0x1B: return 5; default: return 0; } }
static void set_mode(uint32_t nm) {
    int o = mode_idx(A.cpsr), n = mode_idx(nm);
    if (o == n) return;
    A.b13[o] = A.r[13]; A.b14[o] = A.r[14];
    if (o == 1) { for (int i = 0; i < 5; i++) { A.fiq8[i] = A.r[8 + i]; A.r[8 + i] = A.usr8[i]; } }
    else if (n == 1) { for (int i = 0; i < 5; i++) { A.usr8[i] = A.r[8 + i]; A.r[8 + i] = A.fiq8[i]; } }
    A.r[13] = A.b13[n]; A.r[14] = A.b14[n];
}
static void cpsr_write(uint32_t v, uint32_t mask) {
    if ((A.cpsr & 0x1F) == 0x10) mask &= 0xF0000000u;        /* user mode: flags only */
    uint32_t nw = (A.cpsr & ~mask) | (v & mask);
    if (mask & 0xFF) set_mode(nw & 0x1F);
    A.cpsr = nw;
}
static void exception(uint32_t newmode, uint32_t vec, uint32_t lr, uint32_t fiq_mask) {
    uint32_t old = A.cpsr;
    set_mode(newmode);
    A.spsr[mode_idx(newmode)] = old;
    A.cpsr = (old & 0xFFFFFFE0u & ~0x20u) | newmode | 0x80 | fiq_mask;
    A.r[14] = lr; A.r[15] = vec;
}

SND_INL uint32_t mrd(uint32_t a, int sz) {
    if (a < 0x800000u) return ram_rd(a, sz);
    if (a >= 0x800000u && a < 0x808000u) return reg_read(a - 0x800000u, sz, 1);
    return 0;
}
static uint32_t g_stat_base;      /* diagnostics: ARAM base of the per-handle status blocks (guest [sd+0x1B8]+0x200, 0x20 per handle), set by the slot snapshot */
static void tl_printf(const char *fmt, ...);
SND_INL void mwr(uint32_t a, int sz, uint32_t v) {
    if (a < 0x800000u) { if (g_stat_base && g_tl_on && a >= g_stat_base && a < g_stat_base + 0x100 && !(a & 0x1F) && sz == 1) if ((v & 0xFF) != ram_rd(a, 1)) tl_printf("ARMSTAT h%u <- %02x (was %02x) armpc=%05x lr=%05x", (a - g_stat_base) >> 5, v & 0xFF, ram_rd(a, 1), A.r[15], A.r[14]); ram_wr(a, sz, v); return; }
    if (a >= 0x800000u && a < 0x808000u) reg_write(a - 0x800000u, sz, v, 1);
}
static inline uint32_t ror32(uint32_t x, unsigned n) { n &= 31; return n ? (x >> n) | (x << (32 - n)) : x; }

/* operand 2; returns value, carry in *co */
static uint32_t shifter_slow(uint32_t i, uint32_t pc, int *co);
SND_INL uint32_t shifter(uint32_t i, uint32_t pc, int *co) {
    if (i & 0x02000000u) {                                  /* rotated immediate */
        uint32_t imm = i & 0xFF; unsigned rot = ((i >> 8) & 15) * 2;
        if (!rot) { *co = (A.cpsr & FC) != 0; return imm; }
        uint32_t v = (imm >> rot) | (imm << (32 - rot)); *co = (v >> 31) & 1; return v;
    }
    if ((i & 0xFF0) == 0 && (i & 15) != 15) { *co = (A.cpsr & FC) != 0; return A.r[i & 15]; }   /* plain register, LSL #0 */
    return shifter_slow(i, pc, co);
}
static uint32_t shifter_slow(uint32_t i, uint32_t pc, int *co) {
    int c = (A.cpsr & FC) != 0;
    if (i & 0x02000000u) {
        uint32_t imm = i & 0xFF; unsigned rot = ((i >> 8) & 15) * 2;
        uint32_t v = ror32(imm, rot);
        if (rot) c = (v >> 31) & 1;
        *co = c; return v;
    }
    int rm = i & 15; uint32_t v = (rm == 15) ? pc + 8 : A.r[rm];
    unsigned amt; int type = (i >> 5) & 3;
    if (i & 0x10) {
        if (rm == 15) v = pc + 12;
        int rs = (i >> 8) & 15; amt = ((rs == 15) ? pc + 12 : A.r[rs]) & 0xFF;
        if (amt == 0) { *co = c; return v; }
        switch (type) {
        case 0: if (amt < 32) { c = (v >> (32 - amt)) & 1; v <<= amt; } else if (amt == 32) { c = v & 1; v = 0; } else { c = 0; v = 0; } break;
        case 1: if (amt < 32) { c = (v >> (amt - 1)) & 1; v >>= amt; } else if (amt == 32) { c = v >> 31; v = 0; } else { c = 0; v = 0; } break;
        case 2: if (amt < 32) { c = ((int32_t)v >> (amt - 1)) & 1; v = (uint32_t)((int32_t)v >> amt); } else { c = v >> 31; v = (uint32_t)((int32_t)v >> 31); } break;
        default: amt &= 31; if (amt == 0) { c = v >> 31; } else { v = ror32(v, amt); c = v >> 31; } break;
        }
    } else {
        amt = (i >> 7) & 31;
        switch (type) {
        case 0: if (amt) { c = (v >> (32 - amt)) & 1; v <<= amt; } break;
        case 1: if (amt == 0) { c = v >> 31; v = 0; } else { c = (v >> (amt - 1)) & 1; v >>= amt; } break;
        case 2: if (amt == 0) { c = v >> 31; v = (uint32_t)((int32_t)v >> 31); } else { c = ((int32_t)v >> (amt - 1)) & 1; v = (uint32_t)((int32_t)v >> amt); } break;
        default: if (amt == 0) { uint32_t nc = v & 1; v = (v >> 1) | ((A.cpsr & FC) ? 0x80000000u : 0); c = nc; } else { v = ror32(v, amt); c = v >> 31; } break;
        }
    }
    *co = c; return v;
}

SND_INL int cond_ok(uint32_t cc) {
    if (cc == 14) return 1;
    uint32_t f = A.cpsr;
    int n = !!(f & FN), z = !!(f & FZ), c = !!(f & FC), v = !!(f & FV);
    switch (cc) {
    case 0: return z; case 1: return !z; case 2: return c; case 3: return !c; case 4: return n; case 5: return !n; case 6: return v; case 7: return !v;
    case 8: return c && !z; case 9: return !c || z; case 10: return n == v; case 11: return n != v; case 12: return !z && n == v; case 13: return z || n != v;
    case 14: return 1; default: return 0;
    }
}
static inline void setnz(uint32_t r) { A.cpsr = (A.cpsr & ~(FN | FZ)) | (r & FN) | (r == 0 ? FZ : 0); }

static void branch_restore(void) {          /* "S" form write to PC: CPSR <- SPSR */
    int mi = mode_idx(A.cpsr);
    if (mi == 0) return;
    uint32_t sp = A.spsr[mi];
    set_mode(sp & 0x1F);
    A.cpsr = sp;
}


/* ---- decoded-instruction cache for the hot ARM7 instruction classes ----
 * One entry per instruction word of ARAM[0, DT_MAX): the decoded fields of the most common classes (data processing with a rotated immediate or a plain register operand,
 * LDR/STR with immediate offset and no write-back, B/BL). An entry is valid iff entry.raw equals the word currently in ARAM (no invalidation needed: self-modifying code,
 * SH-4 uploads and streams just fail the comparison and re-decode). Anything else (kind 0) runs the generic interpreter below, unchanged. Semantics, flags and cycle counts are
 * those of the generic code (checked bit-exactly against the frozen engine by tests_snd/cmp.sh over a recorded 155 s trace). */
#define DT_MAX 0x10000u
/* data-processing kinds carry the opcode in the low nibble (kind = base + opc): one indirect jump per instruction, the ALU operation is a compile-time constant in its case */
enum { K_GEN = 0, K_DPI = 0x10, K_DPI_S = 0x20, K_DPR = 0x30, K_DPR_S = 0x40, K_DPSH = 0x50, K_DPSH_S = 0x60, K_LDW = 0x70, K_LDB, K_STW, K_STB, K_LDW_PI, K_LDB_PI, K_STW_PI, K_STB_PI, K_B, K_BL };
typedef struct { uint32_t raw, imm; uint8_t kind, opc, rd, rn, rm, aux; } DEnt;
static DEnt g_dt[DT_MAX / 4];
static void dt_decode(DEnt *e, uint32_t i, uint32_t pc) {
    e->raw = i; e->kind = K_GEN;
    uint32_t op1 = (i >> 25) & 7; int rn = (i >> 16) & 15, rd = (i >> 12) & 15;
    if (op1 == 0 && (i & 0x90) == 0x90) return;
    if (op1 <= 1) {
        uint32_t opc = (i >> 21) & 15; int S = (i >> 20) & 1;
        if (!S && opc >= 8 && opc <= 11) return;
        if (rn == 15 || rd == 15) return;
        e->opc = (uint8_t)opc; e->rn = (uint8_t)rn; e->rd = (uint8_t)rd;
        if (i & 0x02000000u) {
            uint32_t imm = i & 0xFF; unsigned rot = ((i >> 8) & 15) * 2;
            uint32_t v = rot ? (imm >> rot) | (imm << (32 - rot)) : imm;
            e->imm = v; e->aux = rot ? (uint8_t)((v >> 31) & 1) : 2;      /* aux: carry-out of the operand, 2 = unchanged (current C) */
            e->kind = (S ? K_DPI_S : K_DPI) + opc;
        } else if ((i & 0xFF0) == 0 && (i & 15) == 15) { e->imm = pc + 8; e->aux = 2; e->kind = (S ? K_DPI_S : K_DPI) + opc; }                      /* mov lr, pc & co */
        else if ((i & 0xFF0) == 0) { e->rm = (uint8_t)(i & 15); e->aux = 2; e->kind = (S ? K_DPR_S : K_DPR) + opc; }
        else if (!(i & 0x10) && (i & 15) != 15) { e->rm = (uint8_t)(i & 15); e->kind = (S ? K_DPSH_S : K_DPSH) + opc; }                                  /* register shifted by an immediate */
        return;
    }
    if (op1 == 2) {
        int P = (i >> 24) & 1, W = (i >> 21) & 1, U = (i >> 23) & 1, B = (i >> 22) & 1, L = (i >> 20) & 1;
        if (W || rd == 15) return;
        uint32_t off = i & 0xFFF;
        if (!P) {                                                 /* post-indexed: address = base, base += off */
            if (rn == 15) return;
            e->rd = (uint8_t)rd; e->rn = (uint8_t)rn; e->imm = U ? off : (uint32_t)0 - off;
            e->kind = L ? (B ? K_LDB_PI : K_LDW_PI) : (B ? K_STB_PI : K_STW_PI);
            return;
        }
        e->rd = (uint8_t)rd;
        if (rn == 15) { e->rn = 16; e->imm = U ? pc + 8 + off : pc + 8 - off; } else { e->rn = (uint8_t)rn; e->imm = U ? off : (uint32_t)0 - off; }
        e->kind = L ? (B ? K_LDB : K_LDW) : (B ? K_STB : K_STW);
        return;
    }
    if (op1 == 5) { int32_t off = (int32_t)(i << 8) >> 6; e->imm = pc + 8 + (uint32_t)off; e->kind = (i & 0x01000000u) ? K_BL : K_B; }
}
/* data processing core for rd != 15 (same formulas as the generic path) */
SND_INL void dp_core(uint32_t opc, int S, int rd, uint32_t a, uint32_t b, int co) {
    uint32_t res = 0, C = 0, V = 0; int logic = 0, wr = 1; uint64_t t; int cf = !!(A.cpsr & FC);
    switch (opc) {
    case 0: res = a & b; logic = 1; break;
    case 1: res = a ^ b; logic = 1; break;
    case 2: t = (uint64_t)a - b; res = (uint32_t)t; C = a >= b; V = ((a ^ b) & (a ^ res)) >> 31; break;
    case 3: t = (uint64_t)b - a; res = (uint32_t)t; C = b >= a; V = ((b ^ a) & (b ^ res)) >> 31; break;
    case 4: t = (uint64_t)a + b; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; break;
    case 5: t = (uint64_t)a + b + cf; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; break;
    case 6: t = (uint64_t)a - b - (!cf); res = (uint32_t)t; C = (uint64_t)a >= (uint64_t)b + (!cf); V = ((a ^ b) & (a ^ res)) >> 31; break;
    case 7: t = (uint64_t)b - a - (!cf); res = (uint32_t)t; C = (uint64_t)b >= (uint64_t)a + (!cf); V = ((b ^ a) & (b ^ res)) >> 31; break;
    case 8: res = a & b; logic = 1; wr = 0; break;
    case 9: res = a ^ b; logic = 1; wr = 0; break;
    case 10: t = (uint64_t)a - b; res = (uint32_t)t; C = a >= b; V = ((a ^ b) & (a ^ res)) >> 31; wr = 0; break;
    case 11: t = (uint64_t)a + b; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; wr = 0; break;
    case 12: res = a | b; logic = 1; break;
    case 13: res = b; logic = 1; break;
    case 14: res = a & ~b; logic = 1; break;
    default: res = ~b; logic = 1; break;
    }
    if (wr) A.r[rd] = res;
    if (S) {
        setnz(res);
        if (logic) A.cpsr = (A.cpsr & ~FC) | (co ? FC : 0);
        else A.cpsr = (A.cpsr & ~(FC | FV)) | (C ? FC : 0) | (V ? FV : 0);
    }
}

__attribute__((noinline)) static int arm_step_gen(void) {      /* generic interpreter: returns cycles used */
    uint32_t pc = A.r[15] & ~3u, i = mrd(pc, 4);
    A.r[15] = pc + 4;
    st_arm_instr++;
    uint32_t cc = i >> 28;
    if (!cond_ok(cc)) return ARM_CYCLES_PER_INSN;
    int cyc = ARM_CYCLES_PER_INSN;

    uint32_t op1 = (i >> 25) & 7;
    if (op1 == 0 && (i & 0x90) == 0x90) {          /* multiplies / swap / halfword */
        if ((i & 0x60) == 0) {
            if ((i & 0x0FC000F0u) == 0x00000090u) {            /* MUL/MLA */
                int rd = (i >> 16) & 15, rn = (i >> 12) & 15, rs = (i >> 8) & 15, rm = i & 15;
                uint32_t r = A.r[rm] * A.r[rs]; if (i & 0x200000u) r += A.r[rn];
                A.r[rd] = r; if (i & 0x100000u) setnz(r);
                return cyc + 2;
            }
            if ((i & 0x0F8000F0u) == 0x00800090u) {            /* long multiply */
                int rdhi = (i >> 16) & 15, rdlo = (i >> 12) & 15, rs = (i >> 8) & 15, rm = i & 15;
                uint64_t r;
                if (i & 0x400000u) r = (uint64_t)((int64_t)(int32_t)A.r[rm] * (int64_t)(int32_t)A.r[rs]);
                else r = (uint64_t)A.r[rm] * (uint64_t)A.r[rs];
                if (i & 0x200000u) r += ((uint64_t)A.r[rdhi] << 32) | A.r[rdlo];
                A.r[rdlo] = (uint32_t)r; A.r[rdhi] = (uint32_t)(r >> 32);
                if (i & 0x100000u) A.cpsr = (A.cpsr & ~(FN | FZ)) | ((r >> 63) ? FN : 0) | (r == 0 ? FZ : 0);
                return cyc + 3;
            }
            if ((i & 0x0FB00FF0u) == 0x01000090u) {            /* SWP */
                int rn = (i >> 16) & 15, rd = (i >> 12) & 15, rm = i & 15; uint32_t a = A.r[rn];
                if (i & 0x400000u) { uint32_t t = mrd(a, 1); mwr(a, 1, A.r[rm]); A.r[rd] = t; }
                else { uint32_t t = ror32(mrd(a & ~3u, 4), (a & 3) * 8); mwr(a & ~3u, 4, A.r[rm]); A.r[rd] = t; }
                return cyc + 2;
            }
            goto undef;
        }
        /* halfword / signed byte transfer */
        int rn = (i >> 16) & 15, rd = (i >> 12) & 15, L = (i >> 20) & 1, P = (i >> 24) & 1, U = (i >> 23) & 1, W = (i >> 21) & 1;
        uint32_t off = (i & 0x400000u) ? (((i >> 4) & 0xF0) | (i & 15)) : A.r[i & 15];
        uint32_t base = (rn == 15) ? pc + 8 : A.r[rn], addr = P ? (U ? base + off : base - off) : base;
        uint32_t nb = U ? base + off : base - off;
        if (!P || W) A.r[rn] = nb;
        if (L) {
            uint32_t v;
            switch ((i >> 5) & 3) {
            case 1: v = mrd(addr & ~1u, 2); if (addr & 1) v = ror32(v, 8); break;
            case 2: v = (uint32_t)(int32_t)(int8_t)mrd(addr, 1); break;
            default: v = (uint32_t)(int32_t)(int16_t)mrd(addr & ~1u, 2); break;
            }
            if (rd == 15) A.r[15] = v & ~3u; else A.r[rd] = v;
        } else mwr(addr & ~1u, 2, (rd == 15) ? pc + 12 : A.r[rd]);
        return cyc + 1;
    }
    if (op1 <= 1) {                                  /* data processing / PSR transfer */
        uint32_t opc = (i >> 21) & 15; int S = (i >> 20) & 1;
        if (!S && opc >= 8 && opc <= 11) {          /* MRS / MSR */
            if ((i & 0x0FBF0FFFu) == 0x010F0000u) { int rd = (i >> 12) & 15; uint32_t v = (i & 0x400000u) ? A.spsr[mode_idx(A.cpsr)] : A.cpsr; A.r[rd] = v; return cyc; }
            if ((i & 0x0DB0F000u) == 0x0120F000u) {
                uint32_t mask = 0; if (i & 0x10000u) mask |= 0xFF; if (i & 0x20000u) mask |= 0xFF00; if (i & 0x40000u) mask |= 0xFF0000; if (i & 0x80000u) mask |= 0xFF000000u;
                uint32_t v; int dummy; if (i & 0x02000000u) v = shifter(i, pc, &dummy); else v = A.r[i & 15];
                if (i & 0x400000u) { int mi = mode_idx(A.cpsr); if (mi) A.spsr[mi] = (A.spsr[mi] & ~mask) | (v & mask); }
                else cpsr_write(v, mask);
                return cyc;
            }
            goto undef;
        }
        int rn = (i >> 16) & 15, rd = (i >> 12) & 15, co;
        uint32_t a = (rn == 15) ? ((i & 0x02000000u) == 0 && (i & 0x10) ? pc + 12 : pc + 8) : A.r[rn];
        uint32_t b = shifter(i, pc, &co), res = 0; int logic = 0, wr = 1;
        uint64_t t; int cf = !!(A.cpsr & FC);
        uint32_t C = 0, V = 0;
        switch (opc) {
        case 0: res = a & b; logic = 1; break;
        case 1: res = a ^ b; logic = 1; break;
        case 2: t = (uint64_t)a - b; res = (uint32_t)t; C = a >= b; V = ((a ^ b) & (a ^ res)) >> 31; break;
        case 3: t = (uint64_t)b - a; res = (uint32_t)t; C = b >= a; V = ((b ^ a) & (b ^ res)) >> 31; break;
        case 4: t = (uint64_t)a + b; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; break;
        case 5: t = (uint64_t)a + b + cf; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; break;
        case 6: t = (uint64_t)a - b - (!cf); res = (uint32_t)t; C = (uint64_t)a >= (uint64_t)b + (!cf); V = ((a ^ b) & (a ^ res)) >> 31; break;
        case 7: t = (uint64_t)b - a - (!cf); res = (uint32_t)t; C = (uint64_t)b >= (uint64_t)a + (!cf); V = ((b ^ a) & (b ^ res)) >> 31; break;
        case 8: res = a & b; logic = 1; wr = 0; break;
        case 9: res = a ^ b; logic = 1; wr = 0; break;
        case 10: t = (uint64_t)a - b; res = (uint32_t)t; C = a >= b; V = ((a ^ b) & (a ^ res)) >> 31; wr = 0; break;
        case 11: t = (uint64_t)a + b; res = (uint32_t)t; C = (uint32_t)(t >> 32); V = (~(a ^ b) & (a ^ res)) >> 31; wr = 0; break;
        case 12: res = a | b; logic = 1; break;
        case 13: res = b; logic = 1; break;
        case 14: res = a & ~b; logic = 1; break;
        default: res = ~b; logic = 1; break;
        }
        if (wr) { if (rd == 15) A.r[15] = res & ~3u; else A.r[rd] = res; }
        if (S) {
            if (rd == 15 && wr) branch_restore();
            else {
                setnz(res);
                if (logic) A.cpsr = (A.cpsr & ~FC) | (co ? FC : 0);
                else A.cpsr = (A.cpsr & ~(FC | FV)) | (C ? FC : 0) | (V ? FV : 0);
            }
        }
        return cyc;
    }
    if (op1 == 2 || op1 == 3) {                      /* single data transfer */
        if (op1 == 3 && (i & 0x10)) goto undef;
        int rn = (i >> 16) & 15, rd = (i >> 12) & 15, L = (i >> 20) & 1, P = (i >> 24) & 1, U = (i >> 23) & 1, B = (i >> 22) & 1, W = (i >> 21) & 1;
        uint32_t off;
        if (op1 == 2) off = i & 0xFFF;
        else { int co; uint32_t j = i & ~0x10u; off = shifter(j & ~0x02000000u, pc, &co); }
        uint32_t base = (rn == 15) ? pc + 8 : A.r[rn];
        uint32_t nb = U ? base + off : base - off, addr = P ? nb : base;
        if (!P || W) A.r[rn] = nb;
        if (L) {
            uint32_t v = B ? mrd(addr, 1) : ror32(mrd(addr & ~3u, 4), (addr & 3) * 8);
            if (rd == 15) A.r[15] = v & ~3u; else A.r[rd] = v;
            cyc += 1;
        } else {
            uint32_t v = (rd == 15) ? pc + 12 : A.r[rd];
            if (B) mwr(addr, 1, v & 0xFF); else mwr(addr & ~3u, 4, v);
        }
        return cyc;
    }
    if (op1 == 4) {                                  /* block data transfer */
        int rn = (i >> 16) & 15, L = (i >> 20) & 1, P = (i >> 24) & 1, U = (i >> 23) & 1, S = (i >> 22) & 1, W = (i >> 21) & 1;
        uint32_t list = i & 0xFFFF; int n = __builtin_popcount(list);
        uint32_t base = A.r[rn], start, nb;
        if (n == 0) return cyc;
        if (U) { start = P ? base + 4 : base; nb = base + 4 * n; } else { start = P ? base - 4 * n : base - 4 * n + 4; nb = base - 4 * n; }
        uint32_t m0 = A.cpsr; int usrbank = S && !(L && (list & 0x8000));
        if (usrbank) { set_mode(0x10); A.cpsr = (A.cpsr & ~0x1Fu) | 0x10; }
        if (W && !usrbank) A.r[rn] = nb;
        uint32_t a = start & ~3u;
        for (int k = 0; k < 16; k++) if (list & (1u << k)) {
            if (L) { uint32_t v = mrd(a, 4); if (k == 15) { A.r[15] = v & ~3u; } else A.r[k] = v; }
            else mwr(a, 4, (k == 15) ? pc + 12 : A.r[k]);
            a += 4;
        }
        if (usrbank) { set_mode(m0 & 0x1F); A.cpsr = m0; if (W) A.r[rn] = nb; }
        else if (L && (list & 0x8000) && S) branch_restore();
        return cyc + n;
    }
    if (op1 == 5) {                                  /* B / BL */
        int32_t off = (int32_t)(i << 8) >> 6;
        if (i & 0x01000000u) A.r[14] = pc + 4;
        A.r[15] = pc + 8 + off;
        return cyc + 1;
    }
    if (op1 == 7 && (i & 0x01000000u)) { exception(0x13, 0x08, pc + 4, 0); return cyc; }      /* SWI */
undef:
    st_undef++;
    if (TRACE && st_undef < 20) fprintf(stderr, "[arm] UNDEFINED instr %08x at %06x\n", i, pc);
    exception(0x1B, 0x04, pc + 4, 0);
    return cyc;
}

static void arm_reset(void) {
    memset(g_keyed, 0, sizeof g_keyed);
    memset(g_key_req, 0, sizeof g_key_req);
    memset(&A, 0, sizeof A);
    A.cpsr = 0xD3;                                  /* SVC, I,F masked */
    A.r[15] = 0;
    arm_run_flag = 1; arm_budget = 0;
    scipd = 0; fiq_pend = 0; intreq_level = 0;
    memset(tim_cnt, 0, sizeof tim_cnt); memset(tim_pre, 0, sizeof tim_pre); memset(tim_acc, 0, sizeof tim_acc);
    /* idle-loop fast path is only valid for the Sega MANATEE driver main loop (checked by code words) */
    idle_ok = (ram_rd(0x194, 4) == 0xeb000200u && ram_rd(0x198, 4) == 0xe5df908eu && ram_rd(0x1b8, 4) == 0xe5df906cu);
    if (TRACE) fprintf(stderr, "[aica] ARM released from reset; driver code at 0: %08x %08x ... idle_ok=%d SCIEB-image@38=%08x\n", ram_rd(0, 4), ram_rd(0x100, 4), idle_ok, ram_rd(0x38, 4));
}

/* Delay loop of the MANATEE driver (mov r3,#n ... ldr r2,[ip,#48]; subs r3,r3,#1; bne back): the body has no side effect (a register read), costs 3+2+3 cycles per round and
 * leaves N=0 Z=0 C=1 V=0, r2 = the register value. Rounds are executed in bulk, exactly as many as the stepwise loop would run before the budget check stops it
 * (an instruction starts iff budget > 0); the last round(s) are left to the normal stepper. Verified bit-exact by tests_snd/cmp.sh. */
static int delay_skip(int64_t *budget) {
    if (ram_rd(0x7284, 4) != 0xe59c2030u || ram_rd(0x7288, 4) != 0xe2533001u || ram_rd(0x728c, 4) != 0x1afffffcu) return 0;
    uint32_t r3 = A.r[3];
    if (r3 < 3 || r3 > 100000 || *budget < 14) return 0;
    int64_t k = (*budget - 6) / 8 + 1;                    /* rounds that can START and complete while the budget stays positive before every instruction */
    int64_t m = r3 - 2; if (m > k - 1) m = k - 1;         /* leave >= 2 to the stepper: its subs/bne then see r3 > 1 */
    if (m < 1) return 0;
    uint32_t addr = A.r[12] + 48;
    A.r[2] = ror32(mrd(addr & ~3u, 4), (addr & 3) * 8);
    A.r[3] = r3 - (uint32_t)m;
    A.cpsr = (A.cpsr & ~(FN | FZ | FC | FV)) | FC;
    A.r[15] = 0x7284;
    st_arm_instr += 3 * (uint64_t)m; st_arm_bulk += 3 * (uint64_t)m;
    *budget -= 8 * m;
    return 1;
}
#define DP_ONE(BASE, S, OPC, GETB) case (BASE) + (OPC): { GETB; dp_core((OPC), (S), e->rd, A.r[e->rn], b, co); budget -= 2; continue; }
#define DP_CASES(BASE, S, GETB) \
    DP_ONE(BASE, S, 0, GETB) DP_ONE(BASE, S, 1, GETB) DP_ONE(BASE, S, 2, GETB) DP_ONE(BASE, S, 3, GETB) DP_ONE(BASE, S, 4, GETB) DP_ONE(BASE, S, 5, GETB) DP_ONE(BASE, S, 6, GETB) DP_ONE(BASE, S, 7, GETB) \
    DP_ONE(BASE, S, 8, GETB) DP_ONE(BASE, S, 9, GETB) DP_ONE(BASE, S, 10, GETB) DP_ONE(BASE, S, 11, GETB) DP_ONE(BASE, S, 12, GETB) DP_ONE(BASE, S, 13, GETB) DP_ONE(BASE, S, 14, GETB) DP_ONE(BASE, S, 15, GETB)
/* The interpreter loop. `pc` lives in a local while only decoded-cache instructions run (A.r[15] is synchronised before anything that can look at / change it: exceptions, the
 * generic stepper, the delay-loop skip, stores, which may reach the register file). Per instruction the semantics, flags and cycle counts are those of arm_step_gen(). */
static inline void arm_cycles(int64_t cycles) {
    int64_t budget = arm_budget + cycles;
    uint32_t pc = A.r[15];
    uint64_t ninstr = 0;
    while (budget > 0) {
        if (fiq_pend && !(A.cpsr & 0x40)) { A.r[15] = pc; exception(0x11, 0x1C, (pc & ~3u) + 4, 0x40); pc = A.r[15]; }
        if (pc == 0x194) {
            if (idle_ok && ram_rd(0x22c, 1) == 0 && ram_rd(0x22e, 1) == 0 && !(fiq_pend && !(A.cpsr & 0x40))
                && ram_rd(0x13000, 4) == ram_rd(ram_rd(0x1808, 4), 4)) { st_idle++; budget = 0; break; }
        } else if (pc == 0x7284) {
            A.r[15] = pc; st_arm_instr += ninstr; ninstr = 0;
            if (delay_skip(&budget)) { pc = A.r[15]; continue; }
        }
        const uint32_t pcm = pc & ~3u;
        if (pcm < DT_MAX) {
            uint32_t i; memcpy(&i, &aram[pcm], 4);
            DEnt *e = &g_dt[pcm >> 2];
            if (e->raw != i) dt_decode(e, i, pcm);
            if (e->kind != K_GEN) {
                ninstr++; pc = pcm + 4;
                if (!cond_ok(i >> 28)) { budget -= ARM_CYCLES_PER_INSN; continue; }
                switch (e->kind) {
                DP_CASES(K_DPI, 0, uint32_t b = e->imm; int co = 0; (void)co)
                DP_CASES(K_DPI_S, 1, uint32_t b = e->imm; int co = e->aux == 2 ? (A.cpsr & FC) != 0 : e->aux)
                DP_CASES(K_DPR, 0, uint32_t b = A.r[e->rm]; int co = 0; (void)co)
                DP_CASES(K_DPR_S, 1, uint32_t b = A.r[e->rm]; int co = (A.cpsr & FC) != 0)
                DP_CASES(K_DPSH, 0, int co; uint32_t b = shifter(i, pcm, &co))
                DP_CASES(K_DPSH_S, 1, int co; uint32_t b = shifter(i, pcm, &co))
                case K_LDW: { uint32_t addr = (e->rn == 16 ? 0 : A.r[e->rn]) + e->imm; A.r[e->rd] = ror32(mrd(addr & ~3u, 4), (addr & 3) * 8); budget -= 3; continue; }
                case K_LDB: { uint32_t addr = (e->rn == 16 ? 0 : A.r[e->rn]) + e->imm; A.r[e->rd] = mrd(addr, 1); budget -= 3; continue; }
                case K_LDW_PI: { uint32_t addr = A.r[e->rn]; A.r[e->rn] = addr + e->imm; A.r[e->rd] = ror32(mrd(addr & ~3u, 4), (addr & 3) * 8); budget -= 3; continue; }
                case K_LDB_PI: { uint32_t addr = A.r[e->rn]; A.r[e->rn] = addr + e->imm; A.r[e->rd] = mrd(addr, 1); budget -= 3; continue; }
                case K_STW: { uint32_t addr = (e->rn == 16 ? 0 : A.r[e->rn]) + e->imm; A.r[15] = pc; mwr(addr & ~3u, 4, A.r[e->rd]); pc = A.r[15]; budget -= 2; continue; }
                case K_STB: { uint32_t addr = (e->rn == 16 ? 0 : A.r[e->rn]) + e->imm; A.r[15] = pc; mwr(addr, 1, A.r[e->rd] & 0xFF); pc = A.r[15]; budget -= 2; continue; }
                case K_STW_PI: { uint32_t addr = A.r[e->rn]; A.r[e->rn] = addr + e->imm; A.r[15] = pc; mwr(addr & ~3u, 4, A.r[e->rd]); pc = A.r[15]; budget -= 2; continue; }
                case K_STB_PI: { uint32_t addr = A.r[e->rn]; A.r[e->rn] = addr + e->imm; A.r[15] = pc; mwr(addr, 1, A.r[e->rd] & 0xFF); pc = A.r[15]; budget -= 2; continue; }
                case K_BL: A.r[14] = pcm + 4; pc = e->imm; budget -= 3; continue;
                default: pc = e->imm; budget -= 3; continue;       /* K_B */
                }
            }
        }
        A.r[15] = pc; st_arm_instr += ninstr; ninstr = 0;
        budget -= arm_step_gen();
        pc = A.r[15];
    }
    A.r[15] = pc; st_arm_instr += ninstr;
    arm_budget = budget;
}

/* ============================================================================================================================ timers / main step */
static inline void timers_tick(void) {
    for (int t = 0; t < 3; t++) {
        if (++tim_acc[t] >= (1u << tim_pre[t])) {
            tim_acc[t] = 0;
            if (++tim_cnt[t] > 0xFF) { tim_cnt[t] = 0; scipd_set(1u << (6 + t)); }
        }
    }
}

static FILE *g_wav; static uint32_t g_wav_bytes;
static void wav_header(FILE *f, uint32_t bytes) {
    uint8_t h[44]; memcpy(h, "RIFF", 4); uint32_t v = 36 + bytes; memcpy(h + 4, &v, 4); memcpy(h + 8, "WAVEfmt ", 8);
    v = 16; memcpy(h + 16, &v, 4); uint16_t s = 1; memcpy(h + 20, &s, 2); s = 2; memcpy(h + 22, &s, 2);
    v = 44100; memcpy(h + 24, &v, 4); v = 44100 * 4; memcpy(h + 28, &v, 4); s = 4; memcpy(h + 32, &s, 2); s = 16; memcpy(h + 34, &s, 2);
    memcpy(h + 36, "data", 4); memcpy(h + 40, &bytes, 4);
    fwrite(h, 1, 44, f);
}
int snd_wav_open(const char *path) {
    lk_lock();
    if (g_wav) { fclose(g_wav); g_wav = 0; }
    g_wav = fopen(path, "wb"); g_wav_bytes = 0;
    if (g_wav) wav_header(g_wav, 0);
    lk_unlock();
    return g_wav ? 0 : -1;
}
void snd_wav_close(void) {
    lk_lock();
    if (g_wav) { fflush(g_wav); fseek(g_wav, 0, SEEK_SET); wav_header(g_wav, g_wav_bytes); fclose(g_wav); g_wav = 0; }
    lk_unlock();
}

/* Headroom: 64 voices are summed unscaled (as the AICA mixer does) so loud scenes exceed 16 bits. Instead of the hard clip (harsh distortion,
 * measured 243..374 clipped samples per 46 s menu/demo run) values above a knee at 0.70 FS are folded smoothly into the remaining headroom (tanh).
 * Below the knee the signal is bit-identical to the plain sum. ASSUMED: the real DAC saturates; this only changes the shape of the overload. */
static inline int32_t soft_limit(int32_t x) {
    const float knee = 22937.0f, room = 32767.0f - 22937.0f;
    float a = (float)(x < 0 ? -x : x);
    if (a <= knee) return x;
    float y = knee + room * tanhf((a - knee) / room);
    int32_t o = (int32_t)y; if (o > 32767) o = 32767;
    return x < 0 ? -o : o;
}
static uint64_t st_samples_fwd(void) { return st_samples; }
static uint64_t mix_now_us(void);
static uint64_t st_tp_arm, st_tp_vox, st_tp_n; static double g_clock_cal_us;     /* probe sums (us) over st_tp_n probed samples */
/* advance the emulated machine by n AICA sample periods; out (may be NULL) gets stereo int16 at 44.1 kHz. Caller holds the lock. */
static uint64_t g_slow_ns; static uint64_t mix_now_us(void);
static void tl_frame(void) {
    if (hle_frame_count == g_tl_lastframe) return;
    g_tl_lastframe = hle_frame_count;
    char a[400], r[400], l[400]; int na = 0, nr = 0, nl = 0, pa = 0, pr = 0, pl = 0;
    for (int ch = 0; ch < 64; ch++) {
        if (g_keyed[ch]) { nl++; if (pl < 380) pl += snprintf(l + pl, 20, "%d,", ch); }
        if (!chn[ch].active) continue;
        if (chn[ch].eg == 3) { nr++; if (pr < 380) pr += snprintf(r + pr, 20, "%d,", ch); }
        else { na++; if (pa < 380) pa += snprintf(a + pa, 20, "%d,", ch); }
    }
    a[pa] = r[pr] = l[pl] = 0;
    tl_printf("FRAME active=%d [%s] release=%d [%s] latched=%d [%s] keyon_total=%llu ignored_total=%llu", na, a, nr, r, nl, l, (unsigned long long)st_keyon, (unsigned long long)st_keyon_ignored);
    if (hle_frame_count - g_tl_flushframe >= 30) {
        g_tl_flushframe = hle_frame_count;
        while (__sync_lock_test_and_set(&g_tl_spin, 1)) ;
        g_tl_total += g_tl_n; tl_flush_nolock();
        __sync_lock_release(&g_tl_spin);
    }
}
static void advance_locked(int n, int16_t *out) {
    if (g_tl_on) tl_frame();
    float mv = (aregs[0x2800 / 4] & 15) == 0 ? 0.0f : powf(2.0f, ((float)(aregs[0x2800 / 4] & 15) - 15.0f) * 0.5f);   /* MVOL: 15 = 0 dB, 3 dB/step (approximation) */
    for (int k = 0; k < n; k++) {
        /* cost probe: every 64th sample is timed in its two halves (timers+ARM7 | voices) with the clock read at the boundaries; snd_get_stats extrapolates to a 1024-frame block */
        const int probe = (k & 63) == 0; uint64_t tp0 = 0, tp1 = 0;
        if (probe) tp0 = mix_now_us();
        timers_tick();
        if (arm_run_flag) arm_cycles(ARM_CYCLES_PER_SAMPLE);
        if (probe) tp1 = mix_now_us();
#if !defined(__vita__) && !defined(SND_TEST)
        if (g_slow_ns) { uint64_t e = mix_now_us() * 1000 + g_slow_ns; while (mix_now_us() * 1000 < e) ; }      /* host emulation of the Vita's slow audio thread (R2_SND_SLOW_NS=9000 ~ 10 ms per 1024-frame block) */
#endif
#if R2_AUDIO_MODE == 2
        float l = 0.0f, r = 0.0f;
#else
        float l, r; render_sample(&l, &r);
#endif
        if (probe) { uint64_t tp2 = mix_now_us(); st_tp_arm += tp1 - tp0; st_tp_vox += tp2 - tp1; st_tp_n++; }
        int32_t il = (int32_t)(l * g_master), ir = (int32_t)(r * g_master);
        if (aregs[0x2800 / 4] & 0x8000) { il = ir = (il + ir) / 2; }
        il = (int32_t)(il * mv); ir = (int32_t)(ir * mv);
        il = soft_limit(il); ir = soft_limit(ir);
        uint32_t pk = (uint32_t)(il < 0 ? -il : il); if (pk > st_peak) st_peak = pk;
        pk = (uint32_t)(ir < 0 ? -ir : ir); if (pk > st_peak) st_peak = pk;
        if (out) { out[2 * k] = (int16_t)il; out[2 * k + 1] = (int16_t)ir; }
        if (g_wav) { int16_t p[2] = {(int16_t)il, (int16_t)ir}; fwrite(p, 2, 2, g_wav); g_wav_bytes += 4; }
        st_samples++;
        if (g_vdump_s && (st_samples % ((uint64_t)g_vdump_s * 44100)) == 0) {
            fprintf(stderr, "[vdump] t=%.1fs keyon=%llu ignored_keyon=%llu\n", (double)st_samples / 44100.0, (unsigned long long)st_keyon, (unsigned long long)st_keyon_ignored);
            for (int ch = 0; ch < 64; ch++) { const Chan *c = &chn[ch]; if (!c->active) continue; uint32_t r0 = chn_reg(ch, 0), r18 = chn_reg(ch, 0x18), r24 = chn_reg(ch, 0x24);
                fprintf(stderr, "[vdump]  ch%02d age=%.2fs latched=%d eg=%d att=%.0f pcms=%u loop=%u sa=%06x pos=%u/%u tl=%u dl=%u pan=%u fns=%u oct=%d rr=%u%s\n", ch, (double)(st_samples - c->t0) / 44100.0, g_keyed[ch], c->eg, c->att, (r0 >> 7) & 3, (r0 >> 9) & 1,
                    (((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)), c->pos, chn_reg(ch, 0xC) & 0xFFFF, (chn_reg(ch, 0x28) >> 8) & 255, (r24 >> 8) & 15, r24 & 31, r18 & 0x3FF, ((int)((r18 >> 11) & 15) ^ 8) - 8, chn_reg(ch, 0x14) & 31,
                    (!g_keyed[ch] && c->eg == 3 && (double)(st_samples - c->t0) / 44100.0 > 8.0) ? " **KEYED OFF BUT NOT FINISHED**" : ((r0 >> 9) & 1) && c->eg != 3 && (double)(st_samples - c->t0) / 44100.0 > 8.0 && !((r0 & 0x7F) == 1 && ((chn_reg(ch, 4) & 0xFFFF) == 0x8000 || (chn_reg(ch, 4) & 0xFFFF) == 0xE000)) ? " **LONG-LOOPING**" : ""); }
        }
        if (g_evlog && (st_samples % 2205) == 0) {
            fprintf(stderr, "[vol] t=%.2f mvol=%x mono=%d dsp[", (double)st_samples / 44100.0, aregs[0x2800 / 4] & 15, (aregs[0x2800 / 4] >> 15) & 1);
            for (int e = 0; e < 18; e++) { uint32_t w = aregs[(0x2000 + e * 4) / 4]; if (w & 0xF000) fprintf(stderr, "%d:%x/%x ", e, (w >> 12) & 15, (w >> 8) & 31); }
            fprintf(stderr, "]");
            for (int ch = 0; ch < 64; ch++) if (chn[ch].active) { uint32_t r20 = chn_reg(ch, 0x20), r24 = chn_reg(ch, 0x24), r28 = chn_reg(ch, 0x28), r0 = chn_reg(ch, 0);
                fprintf(stderr, " c%d(%x sa%x tl%u dl%u pn%x att%.0f eg%d imx%x isel%x)", ch, (r0 >> 7) & 3, (((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)) >> 8, (r28 >> 8) & 255, (r24 >> 8) & 15, r24 & 31, chn[ch].att, chn[ch].eg, r20 & 15, (r20 >> 4) & 15); }
            fputc(10, stderr);
        }
        if (TRACE && (st_samples % 88200) == 0) {
            fprintf(stderr, "[chan] t=%llus:", (unsigned long long)(st_samples / 44100));
            for (int ch = 0; ch < 64; ch++) if (chn[ch].active) { const Chan *c = &chn[ch]; uint32_t r0 = chn_reg(ch, 0);
                fprintf(stderr, " [ch%d sa=%x pcms=%u pos=%u/%u lp=%u eg=%d att=%.0f s0=%d fns=%u oct=%u tl=%u]", ch, (((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)), (r0 >> 7) & 3, c->pos, chn_reg(ch, 0xC) & 0xFFFF, (r0 >> 9) & 1, c->eg, c->att, c->s0, chn_reg(ch, 0x18) & 0x3FF, (chn_reg(ch, 0x18) >> 11) & 15, (chn_reg(ch, 0x28) >> 8) & 255); }
            fputc('\n', stderr);
        }
    }
}

#if !defined(__vita__)
/* R2_SND_CALLER=1: histogram of (last entered guest function, access kind, ARAM/reg region) for every guest access to the AICA (host debugging) */
extern uint32_t hle_ring[256][2]; extern uint32_t hle_ring_pos;
static int g_callerlog; static struct { uint32_t fn, pr, kind, reg; uint64_t n; } g_cl[512]; static int g_cln;
static void caller_note(uint32_t kind, uint32_t off) {
    uint32_t fn = hle_ring[(hle_ring_pos - 1) & 255][0], pr = hle_ring[(hle_ring_pos - 1) & 255][1], reg = kind >= 2 ? off & 0xF000 : off >= 0x30000 ? 0x30000 : (off >> 12) << 12;
    for (int i = 0; i < g_cln; i++) if (g_cl[i].fn == fn && g_cl[i].kind == kind && g_cl[i].reg == reg) { g_cl[i].n++; return; }
    if (g_cln < 512) { g_cl[g_cln].fn = fn; g_cl[g_cln].pr = pr; g_cl[g_cln].kind = kind; g_cl[g_cln].reg = reg; g_cl[g_cln].n = 1; g_cln++; }
}
#define CALLER_NOTE(k, o) do { if (g_callerlog) caller_note((k), (o)); } while (0)
#else
#define CALLER_NOTE(k, o) do {} while (0)
#endif

/* TWO MODES.
 * PULL MODE (an audio thread calls snd_mix: the Vita, or the host harness R2_SND_PULL): the emulated AICA/ARM7 is a REAL-TIME machine. snd_mix() advances it
 * by exactly the number of 44.1 kHz samples the output block needs, so tempo/pitch of everything the machine plays (sequenced music, one-shot SFX, stream
 * rings) is independent of how fast the guest runs. The guest thread never advances it and never takes a lock for the (hot) ARAM word accesses: sd talks to
 * the ARM driver ONLY through ARAM (command ring at 0xB000, pointers at 0x13000/0x13004, status blocks, stream rings; PROVEN with R2_SND_CALLER=1: in 25 s the
 * guest made 3 AICA register reads and 3 writes in total and ~1.1 M ARAM word stores), so plain 32-bit stores/loads + one memory barrier on the ring write
 * pointer are enough; only the rare register writes (key-on etc.) and G2 DMA take the lock.
 * (The older design slaved the sample clock to the guest clock: with the guest in slow motion that played the whole game in slow motion, see notes_sound.md 7/8.)
 * LEGACY MODE (no consumer: plain host run): the machine is advanced from guest accesses to the guest-visible clock (hle_time_us) so the guest sees a live ARM;
 * output goes to the WAV only. */
static uint64_t g_last_adv_us;
static volatile int g_pull_mode;
static void wall_sync_locked(void) {
    uint64_t now = hle_time_us();                 /* guest thread only: hle_time_us is not thread safe */
    if (!g_last_adv_us) { g_last_adv_us = now; return; }
    if (now <= g_last_adv_us) return;
    uint64_t dt = now - g_last_adv_us;
    uint64_t n = dt * 44100ull / 1000000ull;
    if (n < 32) return;
    if (n > 44100) n = 44100;                      /* up to 1 s of catch-up per call (was 200 ms: a long guest frame lost AICA time) */
    g_last_adv_us = now;
    if (!arm_run_flag && !st_keyon) return;       /* nothing to run before the driver exists */
    while (n) { int c = n > 512 ? 512 : (int)n; n -= (uint64_t)c; advance_locked(c, NULL); }
}

#ifndef SND_TEST
/* ============================================================================================================================ guest stream catch-up ticks
 * The game's single stream engine (music AND voice-over; ctx 0x8C2D4968, see re_analysis/dc/notes_stream_hle.md) refills the two AICA rings with at most ONE 4096-byte chunk
 * (1024 stereo frames, 46 ms of 22.05 kHz audio) per sound tick (dispatcher 0x8C0625B8 -> steady-state tick 0x8C062452 -> chunk feed 0x8C062F60), ~2 ticks per guest frame.
 * Real time needs >= 21.5 chunks/s, so a guest below ~10 fps can not keep the rings fed however the AICA is clocked (stale 0.37 s laps replay: "music repeating/timing off").
 * Fix (host-measured, notes_stream_hle.md section 7.1): call the original dispatcher up to 8 times per tick while the previous call actually fed a chunk and the stream is in
 * steady state (ctx[0] == 3). The guest's own room test (0x8C0E2D50) bounds each call, so unplayed ring data is never overwritten; io.c reads complete synchronously. The fade is
 * stepped once per steady-state call (ctx[0x16] active flag), so extra calls run with the fade disabled. R2_STREAM_CATCHUP=0 disables (A/B). */
static int g_sf_chunks, g_sf_on = 1; static unsigned long g_sf_ticks, g_sf_extra;
static void sf_feed(SH4Ctx *c) { g_sf_chunks++; hle_orig(c, 0x8C062F60); }
/* Music watchdog (always on, guest thread, ~once per 16 ticks): the guest's stream engine says a stream plays (state 3, not paused, no fade) but the AICA model does not have BOTH ring
 * voices (sample address 0x18000 / 0x1E000, channels are allocated dynamically by the ARM driver) active. >= 0.5 s of that is a "hole" (music silent while the game thinks it plays):
 * counted, the first details kept in g_hole_note (printed by the Vita front end through SndStats.stream_note). Also counts guest stream open/stop/pause/resume calls. */
static uint32_t g_st_open, g_st_stop, g_st_pause, g_st_resume, g_st_holes, g_st_hole_ms_max, g_st_note_seq; static char g_hole_note[480];
static void stream_watchdog(uint32_t ctx) {
    static unsigned tick; static uint64_t bad0; static int inhole;
    if ((++tick & 15) && !inhole) return;
    uint32_t st = LD32(ctx), paused = LD32(ctx + 8), fade = LD32(ctx + 0x58); int okL = 0, okR = 0; int cl = -1, cr = -1;
    for (int ch = 0; ch < 64; ch++) {
        uint32_t r0 = chn_reg(ch, 0), base = ((r0 & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF);
        if ((base == 0x18000 || base == 0x1E000) && ((r0 >> 7) & 3) != 2 && chn[ch].active) { if (base == 0x18000) { okL = 1; cl = ch; } else { okR = 1; cr = ch; } }
    }
    int bad = st == 3 && !paused && !fade && !(okL && okR);
    uint64_t now = st_samples;
    if (!bad) { inhole = 0; bad0 = 0; return; }
    if (!bad0) { bad0 = now; return; }
    if (!inhole && now - bad0 >= 22050) {
        inhole = 1; g_st_holes++;
        snprintf(g_hole_note, sizeof g_hole_note, "stream hole #%u: guest state 3 left %u but ring voices L=%s R=%s (latched L=%d R=%d); opens %u stops %u pauses %u resumes %u, t=%.1fs", g_st_holes, LD32(ctx + 0xC), okL ? "on" : "OFF", okR ? "on" : "OFF", cl >= 0, cr >= 0, g_st_open, g_st_stop, g_st_pause, g_st_resume, (double)now / 44100.0);
        g_st_note_seq++; EV("STREAM_HOLE %s", g_hole_note);
    }
    if (inhole) { uint32_t ms = (uint32_t)((now - bad0) / 44); if (ms > g_st_hole_ms_max) g_st_hole_ms_max = ms; }
}
static void slots_snapshot(void);
static void sf_disp_body(SH4Ctx *c);
static void sf_disp(SH4Ctx *c) { uint64_t t0 = r2_now_us(); int p_ = R2P_SET(3); sf_disp_body(c); R2P_RESTORE(p_); g_perf.t_snd_tick += r2_now_us() - t0; g_perf.snd_tick_n++; }
static void sf_disp_body(SH4Ctx *c) {
    const uint32_t ctx = 0x8C2D4968u; uint32_t pr = c->pr; int maxn = (g_sf_on && LD32(ctx) == 3) ? 8 : 1; uint32_t fade = 0;
    for (int i = 0; i < maxn; i++) {
        int n0 = g_sf_chunks; c->pr = pr;
        if (i) { fade = LD32(ctx + 0x58); ST32(ctx + 0x58, 0); }
        hle_orig(c, 0x8C0625B8);
        if (i) { ST32(ctx + 0x58, fade); g_sf_extra++; }
        if (g_sf_chunks == n0 || LD32(ctx) != 3) break;
    }
    g_sf_ticks++; c->pr = pr;
    stream_watchdog(ctx);
    if (g_evlog || g_tl_on) slots_snapshot();
    if (g_evlog && getenv("R2_SND_CMDDUMP")) {      /* every tick where the command block changed: entries whose op is not a 0x15/0x16 status poll, plus the 0x13400 sequence words */
        static char last[1400]; char b[1400]; int n = 0;
        for (uint32_t o = 0x13200; o < 0x13320; o += 16) { uint32_t w0 = ram_rd(o, 4), w1 = ram_rd(o + 4, 4); unsigned op = w0 & 0xFF; if (op && op != 0x15 && op != 0x16) n += snprintf(b + n, sizeof b - n, " [%x:%08x %08x]", o & 0xFFF, w0, w1); }
        n += snprintf(b + n, sizeof b - n, " | 13400:"); for (uint32_t o = 0x13400; o < 0x13420; o += 4) n += snprintf(b + n, sizeof b - n, " %x", ram_rd(o, 4));
        if (strcmp(b, last)) { strcpy(last, b); EV("CMDBLK%s", b); }
    }
    if (g_evlog) {      /* music timeline: log every stream state change and, four times a second of AICA time, the stream context and ring voices */
        static uint32_t last0 = 99; static uint64_t lt; uint32_t s0 = LD32(ctx);
        if (s0 != last0 || st_samples - lt >= 11025) {
            lt = st_samples; last0 = s0;
char rb[160]; int rn = 0; rb[0] = 0;       /* ring voices are allocated dynamically by the ARM driver: find them by sample address */
            for (int ch = 0; ch < 64; ch++) { uint32_t base = (((chn_reg(ch, 0) & 0x7F) << 16) | (chn_reg(ch, 4) & 0xFFFF)); if ((base == 0x18000 || base == 0x1E000) && ((chn_reg(ch, 0) >> 7) & 3) != 2 && (chn[ch].active || g_keyed[ch]))
                rn += snprintf(rb + rn, sizeof rb - rn, " ch%d(%s a%d k%d eg%d att%.0f pos%u)", ch, base == 0x18000 ? "L" : "R", chn[ch].active, g_keyed[ch], chn[ch].eg, chn[ch].att, chn[ch].pos); }
            EV("STREAMCTX state=%u paused=%u left=%u fade=%u rings:%s", s0, LD32(ctx + 8), LD32(ctx + 0xC), LD32(ctx + 0x58), rb);
        }
    }
}
static void sf_open(SH4Ctx *c) { g_st_open++; if (g_evlog) EV("GUEST stream-open sd=%08x state=%u", c->r[6], LD32(0x8C2D4968)); hle_orig(c, 0x8C06262C); }
static void sf_stop(SH4Ctx *c) { g_st_stop++; if (g_evlog) EV("GUEST stream-stop state=%u", LD32(0x8C2D4968)); hle_orig(c, 0x8C0628A8); }
static void sf_pause(SH4Ctx *c) { g_st_pause++; if (g_evlog) EV("GUEST stream-pause state=%u", LD32(0x8C2D4968)); hle_orig(c, 0x8C062960); }
static void sf_resume(SH4Ctx *c) { g_st_resume++; if (g_evlog) EV("GUEST stream-resume state=%u", LD32(0x8C2D4968)); hle_orig(c, 0x8C0629B0); }
/* guest sd command taps (R2_SND_EV=1 log, counters): sd cmd 0x11 key-on request 0x8C0F06BC (r4 = sd handle, byte at +1 = driver handle id) and cmd 0x12 stop 0x8C0F08E4.
 * Used to compare what the GAME asks for with what the AICA model plays (KEYON events): they must match 1:1. */
static unsigned long st_gstart, st_gstop;
static void sf_cmd_start(SH4Ctx *c) {
    st_gstart++; unsigned long n = st_gstart; unsigned h = LD8(c->r[4] + 1), r5 = c->r[5] & 0xFF, r6 = c->r[6] & 0xFF; int r7 = (int)c->r[7]; uint32_t pr = c->pr; uint64_t s0 = st_samples;
    hle_orig(c, 0x8C0F06BC);
    /* r0 = sd error code (0 = accepted). The game's wrapper (f_8c098b?? @8c098c46) treats nonzero as "start failed": status 4 + immediate stop-cmd + fail counter 0x8C0C9478 */
    if (g_evlog || g_tl_on) { uint32_t q = LD32(0x8C0F4334u) + 0x158u;      /* sd command queue: +12 base, +16 capacity, +20 pending count, +24 write idx (entries of 0x1C bytes) */
        EVT("GUEST start-cmd #%lu handle=%u args r5=%u r6=%u r7=%d pr=%08x ret=%08x (waited %llu AICA samples) sdq[base=%08x cap=%u cnt=%u wr=%u]", n, h, r5, r6, r7, pr, c->r[0], (unsigned long long)(st_samples - s0), LD32(q + 12), LD32(q + 16), LD32(q + 20), LD32(q + 24)); }
}
static void sf_cmd_stop(SH4Ctx *c) { st_gstop++; if (g_evlog || g_tl_on) EVT("GUEST stop-cmd #%lu handle=%u pr=%08x", st_gstop, (unsigned)(LD8(c->r[4] + 1)), c->pr); hle_orig(c, 0x8C0F08E4); }
/* Game-side SFX play request FUN_8c098f20(req=r4, prio_bias=r5, cb=r6, cbarg=r7, def=[sp]) -> handle or -1 (dropped). Drop reasons (re_analysis/dc/notes_sfx_voices.md): score = req[4]*def[0xC] < *0x8C0C947C
 * and !def[0xB]; no free handle-table entry (0x8C2E6CD8 x60); no victim among the 8 real slots (0x8C2E2CD8 x 0x100, +4 state, +0xE4 class, +0xF4 age). Logged with a snapshot of the 8 slots. */
static void sf_play_req(SH4Ctx *c) {
    uint32_t req = c->r[4], def = LD32(c->r[15]), pr = c->pr; unsigned score = LD8(req + 4) * LD8(def + 12); int bias = (int)c->r[5];
    hle_orig(c, 0x8C098F20);
    if (g_evlog || g_tl_on) {
        char b[200]; int n = 0;
        for (int i = 0; i < 8; i++) { uint32_t sl = 0x8C2E2CD8u + i * 0x100u; n += snprintf(b + n, sizeof b - n, " %u:%u/a%d/c%u", i, LD32(sl + 4), (int)LD32(sl + 0xF4), LD32(sl + 0xE4)); }
        EVT("PLAYREQ ret=%d vol=%u prio=%u score=%u minscore=%u queueable=%u class=%d snd=%08x pr=%08x slots[state/age/class]:%s", (int)c->r[0], LD8(req + 4), LD8(def + 12), score, LD32(0x8C0C947Cu), LD32(def + 44), (int)bias, def, pr, b);
    }
}
/* per-frame snapshot of the 8 real SFX slots when anything changed: state, sd driver handle id, sound def ptr, game priority class */
static void slots_snapshot(void) {
    static unsigned long lastf = ~0ul; static char last[384]; char b[384]; int n = 0;
    if (hle_frame_count == lastf) return; lastf = hle_frame_count;
    if ((g_evlog || g_tl_on) && hle_frame_count == 600) for (int i = 0; i < 0x8000 / 4; i++) if (g_armrd_hist[i] && (i * 4 >= 0x2000 || (i & 0x1F) < 0x14)) EVT("ARMRD %05x n=%llu", i * 4, (unsigned long long)g_armrd_hist[i]);
    for (int i = 0; i < 8; i++) { uint32_t sl = 0x8C2E2CD8u + i * 0x100u, sd = LD32(sl); int h = sd ? (int)LD8(sd + 1) : -1; uint32_t sb = LD32(0x8C0F4334u), ab = sb ? LD32(sb + 0x1B8u) : 0;      /* driver status byte (bit0 = playing) = ARAM[[sd+0x1B8] + 0x200 + h*0x20] */
        n += snprintf(b + n, sizeof b - n, " %u:s%u/h%d/st%02x/d%05x", i, LD32(sl + 4), h, (h >= 0 && ab < 0x200000u) ? (g_stat_base = ab + 0x200, ram_rd(ab + 0x200 + h * 0x20, 1)) : 0xEE, LD32(sl + 0xE0) & 0xFFFFF); }
    if (strcmp(b, last)) { strcpy(last, b); EVT("SLOTS%s", b); }
}
/* sd queue service taps: 0x8C0D6FDC = per-tick service (calls 0x8C0D6CDC drain loop, then 0x8C0E2A7C), 0x8C0D6CDC moves <= 32 queued commands to the AICA command block */
static uint32_t sdq_cnt(void) { uint32_t b = LD32(0x8C0F4334u); return b ? LD32(b + 0x16Cu) : 0; }
static void sf_sdq_svc(SH4Ctx *c) { uint32_t c0 = sdq_cnt(), pr = c->pr; hle_orig(c, 0x8C0D6FDC); if (g_evlog || g_tl_on) { uint32_t b = LD32(0x8C0F4334u); uint32_t ha = b ? LD32(b + 0x1BCu) : 0; EVT("SDQ svc pr=%08x cnt %u->%u pend=%u busy=%u ack@%06x=%02x", pr, c0, sdq_cnt(), b ? LD32(b + 0x15Cu) : 0, b ? LD32(b + 0x160u) : 0, ha, ha < 0x200000u ? ram_rd(ha, 1) : 0xFFu); } }
#endif

/* ============================================================================================================================ public API */
int snd_init(int out_rate) {
#if defined(__vita__)
    { volatile const char *pad = g_vita_layout_pad; (void)pad[0]; }     /* keep the layout pad alive through --gc-sections */
#endif
    lk_init(); build_tables();
    { uint64_t c0 = mix_now_us(), c1 = c0; for (int j = 0; j < 200; j++) c1 = mix_now_us(); g_clock_cal_us = (double)(c1 - c0) / 200.0; }   /* cost of one clock read (subtracted from the probes) */
    if (out_rate != 44100 && out_rate != 48000) out_rate = 44100;
    g_out_rate = out_rate; g_inited = 1;
    return 0;
}
void snd_shutdown(void) { snd_wav_close(); }
void snd_set_master_volume(float v) { g_master = v; }

static inline float cubic(const float *h, float t) {           /* Catmull-Rom between h[1] and h[2] */
    return h[1] + 0.5f * t * (h[2] - h[0] + t * (2.0f * h[0] - 5.0f * h[1] + 4.0f * h[2] - h[3] + t * (3.0f * (h[1] - h[2]) + h[3] - h[0])));
}
#define MIX_CHUNK 256                                           /* AICA samples generated per lock hold (~5.8 ms) */
static uint64_t mix_now_us(void) {
#if defined(__vita__)
    return sceKernelGetProcessTimeWide();
#else
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return (uint64_t)ts.tv_sec * 1000000ull + ts.tv_nsec / 1000;
#endif
}
static uint64_t st_mix_calls, st_mix_us_tot, st_mix_us_max;
static int16_t g_stage[MIX_CHUNK * 2]; static int g_stage_i, g_stage_n;      /* AICA samples generated but not yet consumed by the resampler */
static double g_rs_pos; static float g_rs_h[2][4]; static int g_rs_have;   /* h[c][0..3] = samples at -1,0,+1,+2 around the read position */
static void stage_refill(void) {
    lk_lock();
    __sync_synchronize();                                       /* see the guest's ARAM stores (ring entries before the write pointer) */
    advance_locked(MIX_CHUNK, g_stage);
    lk_unlock();
    g_stage_i = 0; g_stage_n = MIX_CHUNK;
}
static inline void stage_next(float *l, float *r) {
    if (g_stage_i >= g_stage_n) stage_refill();
    *l = g_stage[2 * g_stage_i]; *r = g_stage[2 * g_stage_i + 1]; g_stage_i++;
}
/* Audio thread: returns the next `frames` frames at the rate given to snd_init(), advancing the machine in real (audio) time. */
void snd_mix(int16_t *out, int frames) {
    if (!g_inited) snd_init(44100);
    g_pull_mode = 1;
#if R2_AUDIO_MODE == 1
    memset(out, 0, (size_t)frames * 4); st_mix_calls++; return;       /* frozen engine (perf experiment): no ARM7, no AICA, silence */
#endif
    uint64_t t0 = mix_now_us();
    if (g_out_rate == 44100) {
        int done = 0;
        while (done < frames) {
            if (g_stage_i >= g_stage_n) stage_refill();
            int n = g_stage_n - g_stage_i; if (n > frames - done) n = frames - done;
            memcpy(out + 2 * done, g_stage + 2 * g_stage_i, (size_t)n * 4); g_stage_i += n; done += n;
        }
    } else {
        const double ratio = 44100.0 / (double)g_out_rate;
        if (!g_rs_have) {                                       /* prime the 4-tap history; read position starts between h[1] and h[2] */
            for (int j = 0; j < 4; j++) { float l, r; stage_next(&l, &r); g_rs_h[0][j] = l; g_rs_h[1][j] = r; }
            g_rs_pos = 0; g_rs_have = 1;
        }
        /* same arithmetic, in the same order, as the former per-frame code (so the output is bit-identical): state in locals, input read straight from the stage buffer */
        double pos = g_rs_pos; float h0[4] = { g_rs_h[0][0], g_rs_h[0][1], g_rs_h[0][2], g_rs_h[0][3] }, h1[4] = { g_rs_h[1][0], g_rs_h[1][1], g_rs_h[1][2], g_rs_h[1][3] };
        for (int k = 0; k < frames; k++) {
            while (pos >= 1.0) {
                if (g_stage_i >= g_stage_n) stage_refill();
                const int16_t *sp = &g_stage[2 * g_stage_i++];
                h0[0] = h0[1]; h0[1] = h0[2]; h0[2] = h0[3]; h0[3] = (float)sp[0];
                h1[0] = h1[1]; h1[1] = h1[2]; h1[2] = h1[3]; h1[3] = (float)sp[1];
                pos -= 1.0;
            }
            const float t = (float)pos;
            float v = cubic(h0, t); out[2 * k] = (int16_t)(v > 32767.f ? 32767 : v < -32768.f ? -32768 : v);
            v = cubic(h1, t); out[2 * k + 1] = (int16_t)(v > 32767.f ? 32767 : v < -32768.f ? -32768 : v);
            pos += ratio;
        }
        g_rs_pos = pos; for (int j = 0; j < 4; j++) { g_rs_h[0][j] = h0[j]; g_rs_h[1][j] = h1[j]; }
    }
    uint64_t dt = mix_now_us() - t0; st_mix_calls++; st_mix_us_tot += dt; if (dt > st_mix_us_max) st_mix_us_max = dt;
}
void snd_get_stats(SndStats *s) {
    lk_lock();
    memset(s, 0, sizeof *s);
    s->arm_running = arm_run_flag; s->samples = st_samples; s->arm_instr = st_arm_instr; s->arm_bulk = st_arm_bulk; s->arm_idle_skips = st_idle; s->keyon = st_keyon; s->ringcmds = st_ringcmds;
    for (int i = 0; i < 64; i++) s->active_channels += chn[i].active;
    s->peak = st_peak; st_peak = 0; s->undef_instr = st_undef;
    {   /* per-block (1024 output frames = 941.2 AICA samples) split, extrapolated from the probed samples; the clock-read cost (calibrated in snd_init) is subtracted per half */
        double n = st_tp_n ? (double)st_tp_n : 1.0, cal = g_clock_cal_us, per = 1024.0 * 44100.0 / (g_out_rate ? g_out_rate : 44100);
        double a = (double)st_tp_arm / n - cal, v = (double)st_tp_vox / n - cal; if (a < 0) a = 0; if (v < 0) v = 0;
        s->arm_us_blk = st_tp_n ? (uint32_t)(a * per) : 0; s->vox_us_blk = st_tp_n ? (uint32_t)(v * per) : 0; s->tp_n = (uint32_t)st_tp_n; st_tp_arm = st_tp_vox = st_tp_n = 0; }
#ifndef SND_TEST
    s->stream_open = g_st_open; s->stream_stop = g_st_stop; s->stream_pause = g_st_pause; s->stream_resume = g_st_resume; s->stream_holes = g_st_holes; s->stream_hole_ms_max = g_st_hole_ms_max;
    s->stream_note_seq = g_st_note_seq; memcpy(s->stream_note, g_hole_note, sizeof s->stream_note);
#endif
    s->keyon_ignored = (uint32_t)st_keyon_ignored;
    s->mix_calls = st_mix_calls; s->mix_us_avg = st_mix_calls ? (uint32_t)(st_mix_us_tot / st_mix_calls) : 0; s->mix_us_max = (uint32_t)st_mix_us_max;
    st_mix_calls = st_mix_us_tot = st_mix_us_max = 0;
    lk_unlock();
}
uint8_t *snd_test_aram(void) { return aram; }
uint32_t *snd_test_regs(void) { return aregs; }
void snd_test_advance(int frames, int16_t *out) { build_tables(); while (frames > 0) { int c = frames > 512 ? 512 : frames; advance_locked(c, out); if (out) out += 2 * c; frames -= c; } }
void snd_test_regwrite(uint32_t off, uint32_t v) { reg_write(off, 4, v, 0); }
void snd_test_arm_reset(int run) { if (run) arm_reset(); else arm_run_flag = 0; }

/* ============================================================================================================================ SH-4 guest MMIO */

/* ARAM word accesses are lock-free (see PULL MODE above). Legacy mode takes the lock and syncs to the guest clock. */
static uint32_t sh4_aram_rd(uint32_t a, int sz) {
    CALLER_NOTE(0, a & 0x1FFFFF);
    if (!g_pull_mode) { lk_lock(); wall_sync_locked(); lk_unlock(); }
    return ram_rd(a & 0x1FFFFF, sz);
}
/* R2_SND_REC=<file> (host): record every guest ARAM / register write and G2 DMA with the AICA sample counter, for tests_snd/replay.c (old vs new engine, bit-exact comparison).
 * Entry = { u64 t; u32 kind (0 aram wr, 1 reg wr, 2 dma to aram) | size << 8; u32 addr; u32 value (dma: length, followed by the bytes) }. */
#if !defined(__vita__) && !defined(SND_TEST)
static FILE *g_rec;
static void rec_put(uint32_t kind, uint32_t sz, uint32_t a, uint32_t v, const void *blob) {
    if (!g_rec) return;
    uint64_t t = st_samples; uint32_t k = kind | (sz << 8);
    fwrite(&t, 8, 1, g_rec); fwrite(&k, 4, 1, g_rec); fwrite(&a, 4, 1, g_rec); fwrite(&v, 4, 1, g_rec);
    if (blob) fwrite(blob, 1, v, g_rec);
}
#define REC(k, sz, a, v, blob) rec_put((k), (sz), (a), (v), (blob))
#else
#define REC(k, sz, a, v, blob) do {} while (0)
#endif
static uint64_t g_sh4wr[32], g_sh4wr_n; static int g_blk_held, g_blk_lock = 1; static uint32_t g_blk_op[17]; static volatile uint64_t g_blk_s0; static uint64_t g_blk_n, g_blk_torn;
static void sh4_aram_wr(uint32_t a, int sz, uint32_t v) {
    REC(0, sz, a & 0x1FFFFF, v, 0);
    CALLER_NOTE(1, a & 0x1FFFFF);
    if (!g_pull_mode) { lk_lock(); wall_sync_locked(); lk_unlock(); }
    g_sh4wr[(a >> 16) & 31] += sz; g_sh4wr_n++;
    if (g_ringlog) { uint32_t o = a & 0x1FFFFF; int ri = (o >= 0x18000 && o < 0x1C000) ? 0 : (o >= 0x1E000 && o < 0x22000) ? 1 : -1;
        if (ri == 0) { static unsigned long lf; static uint32_t fs, fe, fn_; static uint64_t lt; if (hle_frame_count != lf) { if (fn_) fprintf(stderr, "[frm0] f=%lu t=%.3f stores=%u first=%05x last=%05x voice_pos_bytes=%u\n", lf, (double)lt / 44100.0, fn_, fs, fe, chn[53].pos * 2); lf = hle_frame_count; fn_ = 0; } if (!fn_) fs = o; fe = o; fn_++; lt = st_samples; }
        if (ri >= 0) { g_rw_n[ri]++; g_rw_bytes[ri] += sz; if (!g_rw_hi[ri] || o < g_rw_lo[ri]) g_rw_lo[ri] = o; if (o + sz > g_rw_hi[ri]) g_rw_hi[ri] = o + sz; } }
    if (g_evlog) { uint32_t o = a & 0x1FFFFF;      /* tear detector: did the AICA run between the first and the last word of a 0x13200 command block write? */
        if (o == 0x13200) { g_blk_s0 = st_samples; g_blk_n++; } else if (o == 0x1330C) { if (st_samples != g_blk_s0) { g_blk_torn++; char b[400]; int n = 0; for (int e = 0; e < 17; e++) { uint32_t cur = ram_rd(0x13200 + e * 16, 4); if (cur != g_blk_op[e]) n += snprintf(b + n, sizeof b - n, " e%d:wrote %08x now %08x arg %08x;", e, g_blk_op[e], cur, ram_rd(0x13204 + e * 16, 4)); }
            EV("CMDBLK_TORN: AICA ran %llu samples inside block write #%llu; entries consumed before the block was complete:%s", (unsigned long long)(st_samples - g_blk_s0), (unsigned long long)g_blk_n, n ? b : " none"); } } if (o >= 0x13200 && o < 0x13310 && !(o & 15) && sz == 4) g_blk_op[(o - 0x13200) >> 4] = v; }
    uint32_t o = a & 0x1FFFFF;
    if (o == 0x13000 && sz == 4) { st_ringcmds += ((v - ram_rd(0x13000, 4)) & 0xFFF) >> 2; __sync_synchronize(); }   /* ring entries before the write pointer */
    if (g_pull_mode && g_blk_lock) {
        /* The sd transport writes the 0x110-byte command block 0x13200..0x1330F word by word (ascending, op word of each 16-byte entry first). The ARM driver polls those op words on the
         * audio thread: without exclusion it consumed entries whose argument word was not stored yet (host: 1 torn block per 1000 at normal speed, 1 per 100 with a Vita-speed audio
         * thread; on the Vita's weakly ordered cores stores can additionally become visible out of order). The guest holds the AICA lock across the block (first word 0x13200 ... last
         * word 0x1330C): the audio thread simply waits < 50 us, and the unlock publishes all stores (barrier). Safety: any store outside the block releases a lock left held. */
        if (g_blk_held && (o < 0x13200 || o > 0x1330F)) { g_blk_held = 0; lk_unlock(); }
        if (o == 0x13200 && !g_blk_held) { glk_lock(); g_blk_held = 1; g_blk_s0 = st_samples; }
        ram_wr(o, sz, v);
        if (g_blk_held && o >= 0x1330C) { g_blk_held = 0; lk_unlock(); }
        return;
    }
    ram_wr(o, sz, v);
    if (o >= 0x13400 && o < 0x13440) __sync_synchronize();     /* sequence / write-index words: publish the ring data and block stores written before them */
}
static uint32_t sh4_reg_rd(uint32_t a, int sz) {
    CALLER_NOTE(2, a & 0x7FFF);
    if (!g_pull_mode) { lk_lock(); wall_sync_locked(); lk_unlock(); }
    return reg_read(a & 0x7FFF, sz, 0);
}
static void sh4_reg_wr(uint32_t a, int sz, uint32_t v) {
    if (g_blk_held) { g_blk_held = 0; lk_unlock(); }       /* a command-block write was interrupted: never self-deadlock on the AICA lock */
    REC(1, sz, a & 0x7FFF, v, 0);
    CALLER_NOTE(3, a & 0x7FFF);
    glk_lock(); if (!g_pull_mode) wall_sync_locked();
    reg_write(a & 0x7FFF, sz, v, 0);
    lk_unlock();
}
/* G2 AICA DMA (SB_ADST): sd normally uses CPU stores; implemented for completeness (UNTESTED - not seen in the first frames). */
static void g2_watch(uint32_t a, int sz, uint32_t v) {
    if (g_blk_held) { g_blk_held = 0; lk_unlock(); }
    (void)sz;
    if ((a & 0xFFFF) != 0x7818 || !(v & 1)) return;
    uint32_t aica = hle_reg_get(0xA05F7800u), sys = hle_reg_get(0xA05F7804u), len = hle_reg_get(0xA05F7808u) & 0x7FFFFFFFu, dir = hle_reg_get(0xA05F780Cu) & 1;
    uint32_t sp = sys & 0x1FFFFFFFu;
    if (sp >= 0x0C000000u && sp + len <= 0x0D000000u && (aica & 0x1FFFFFu) + len <= ARAM_SIZE) {
        if (dir == 0) REC(2, 0, aica & 0x1FFFFF, len, &sh4_ram[sp & 0xFFFFFF]);
        lk_lock();
        if (dir == 0) memcpy(&aram[aica & 0x1FFFFF], &sh4_ram[sp & 0xFFFFFF], len); else memcpy(&sh4_ram[sp & 0xFFFFFF], &aram[aica & 0x1FFFFF], len);
        lk_unlock();
        if (TRACE) fprintf(stderr, "[aica] G2 DMA %s aica=%06x sys=%08x len=%u\n", dir ? "AICA->RAM" : "RAM->AICA", aica, sys, len);
    } else fprintf(stderr, "[aica] G2 DMA ignored aica=%08x sys=%08x len=%u\n", aica, sys, len);
    hle_reg_set(0xA05F7818u, 0);
    hle_asic_raise_later(1u << 15);
}

/* test/replay entry points (tests_snd/replay.c): the same code paths a guest write takes */
void snd_test_sh4_aram_wr(uint32_t a, int sz, uint32_t v) { sh4_aram_wr(a, sz, v); }
void snd_test_sh4_reg_wr(uint32_t a, int sz, uint32_t v) { sh4_reg_wr(a, sz, v); }
void snd_test_dma_to_aram(uint32_t a, const void *p, uint32_t len) { if ((a & 0x1FFFFF) + len <= ARAM_SIZE) memcpy(&aram[a & 0x1FFFFF], p, len); }
uint64_t snd_test_samples(void) { return st_samples; }
uint32_t snd_test_mon(int ch) { aregs[0x280C / 4] = (uint32_t)ch << 8; return reg_read(0x2810, 4, 1); }   /* what the ARM driver reads: LP | SGC | EG */
void snd_test_set_pull(int on) { g_pull_mode = on; g_blk_lock = 0; /* single-threaded replay: no guest/audio thread exclusion needed (it would deadlock) */ }
static void snd_atexit(void) {
    snd_trace_close();
#if !defined(__vita__) && !defined(SND_TEST)
    if (g_rec) { fclose(g_rec); g_rec = 0; }
#endif
#if !defined(__vita__)
    if (g_callerlog) for (int i = 0; i < g_cln; i++) fprintf(stderr, "[caller] fn=%08x pr=%08x %s %05x n=%llu\n", g_cl[i].fn, g_cl[i].pr, (const char *[]){"aram_rd", "aram_wr", "reg_rd", "reg_wr"}[g_cl[i].kind], g_cl[i].reg, (unsigned long long)g_cl[i].n);
#endif
#ifndef SND_TEST
    if (g_evlog) fprintf(stderr, "[ev] CATCHUP ticks=%lu extra_calls=%lu; guest start-cmds=%lu stop-cmds=%lu\n", g_sf_ticks, g_sf_extra, st_gstart, st_gstop);
#endif
    if (g_evlog) { SndStats ms; snd_get_stats(&ms); fprintf(stderr, "[ev] MIXCOST calls=%llu avg=%u us max=%u us per block of 1024 frames (budget 21333 us at 48 kHz); arm_instr=%llu keyon=%llu keyon_ignored=%llu cmdblk_writes=%llu cmdblk_torn=%llu\n", (unsigned long long)ms.mix_calls, ms.mix_us_avg, ms.mix_us_max, (unsigned long long)ms.arm_instr, (unsigned long long)ms.keyon, (unsigned long long)st_keyon_ignored, (unsigned long long)g_blk_n, (unsigned long long)g_blk_torn); }
    if (g_evlog) for (int i = 0; i < 0x8000 / 4; i++) if (g_armrd_hist[i] && (i * 4 >= 0x2000 || (i & 0x1F) < 0x14)) fprintf(stderr, "[ev] ARMRD %05x n=%llu\n", i * 4, (unsigned long long)g_armrd_hist[i]);
    if (g_evlog) for (int ch = 0; ch < 64; ch++) if (chn[ch].active) { fprintf(stderr, "[ev] ACTIVE_AT_EXIT ch%d eg=%d att=%.0f pos=%u", ch, chn[ch].eg, chn[ch].att, chn[ch].pos); for (int r = 0; r < 0x50; r += 4) fprintf(stderr, " %02x:%08x", r, aregs[(ch * 0x80 + r) >> 2]); fputc(10, stderr); } snd_wav_close(); { const char *d = getenv("R2_SND_DUMP"); if (d && *d) { FILE *f = fopen(d, "wb"); if (f) { fwrite(aram, 1, ARAM_SIZE, f); fclose(f); } } } if (TRACE) { for (int i = 0; i < 32; i++) if (g_sh4wr[i]) fprintf(stderr, "[snd] sh4 wrote %llu bytes to aram %06x..\n", (unsigned long long)g_sh4wr[i], i << 16); SndStats s; snd_get_stats(&s); fprintf(stderr, "[snd] ringcmds=%llu samples=%llu arm_instr=%llu idle_skips=%llu keyon=%llu undef=%u active=%d\n", (unsigned long long)s.ringcmds, (unsigned long long)s.samples, (unsigned long long)s.arm_instr, (unsigned long long)s.arm_idle_skips, (unsigned long long)s.keyon, s.undef_instr, s.active_channels); } }

#if !defined(__vita__)
/* R2_SND_PULL=<wav>: host test of the Vita consumption path. A real-time thread pulls snd_mix(1024) at 44.1 kHz (as the sceAudioOut thread would) and writes
 * what the player would hear to <wav>; the producer WAV (R2_SND_WAV) is the gapless stream. */
static FILE *g_pull_wav;
static void *pull_thread(void *arg) {
    (void)arg; static int16_t buf[1024 * 2]; unsigned long long blocks = 0; uint64_t wr = 0;
    struct timespec t0; clock_gettime(CLOCK_MONOTONIC, &t0);
    for (;;) {
        snd_mix(buf, 1024); fwrite(buf, 4, 1024, g_pull_wav); wr += 1024; blocks++;
        if ((blocks & 63) == 0) { fflush(g_pull_wav); rewind(g_pull_wav); uint32_t sz = (uint32_t)(wr * 4); uint8_t h[44] = {'R','I','F','F',0,0,0,0,'W','A','V','E','f','m','t',' ',16,0,0,0,1,0,2,0,0x44,0xAC,0,0,0x10,0xB1,2,0,4,0,16,0,'d','a','t','a'};
            uint32_t rs = sz + 36; memcpy(h + 4, &rs, 4); memcpy(h + 40, &sz, 4); fwrite(h, 1, 44, g_pull_wav); fseek(g_pull_wav, 0, SEEK_END); }
        { struct timespec n2; clock_gettime(CLOCK_MONOTONIC, &n2); int64_t el = (int64_t)(n2.tv_sec - t0.tv_sec) * 1000000000ll + (n2.tv_nsec - t0.tv_nsec); int64_t due = (int64_t)(blocks * 1024ull * 1000000000ull / 44100ull); if (due > el) { struct timespec ts = {(time_t)((due - el) / 1000000000ll), (long)((due - el) % 1000000000ll)}; nanosleep(&ts, 0); } }
    }
    return 0;
}
static void start_pull_test(void) {
    const char *pw = getenv("R2_SND_PULL"); if (!pw || !*pw || !strcmp(pw, "0")) return;
    g_pull_wav = fopen(pw, "wb"); if (!g_pull_wav) return;
    uint8_t h[44] = {0}; fwrite(h, 1, 44, g_pull_wav);
    pthread_t th; pthread_create(&th, 0, pull_thread, 0); pthread_detach(th);
}
#endif
__attribute__((constructor)) static void snd_ctor(void) {
    lk_init(); build_tables(); aregs[0x2C00 / 4] = 1;
    { const char *rl = getenv("R2_SND_RING"); g_ringlog = rl && *rl && *rl != '0'; g_rw_lo[0] = g_rw_lo[1] = 0xFFFFFF; }
#if !defined(__vita__)
    { const char *cl = getenv("R2_SND_CALLER"); g_callerlog = cl && *cl && *cl != '0'; }
#endif
    { const char *ko = getenv("R2_SND_KEYON_OLD"); g_keyon_old = ko && *ko == '1'; }
    { const char *bl = getenv("R2_SND_BLKLOCK"); g_blk_lock = !(bl && *bl == '0'); }      /* =0: no command-block exclusion (A/B) */
    { const char *sl = getenv("R2_SND_SLOW_NS"); g_slow_ns = sl ? (uint64_t)atoll(sl) : 0; }
    { const char *vd = getenv("R2_SND_VDUMP"); g_vdump_s = vd ? atoi(vd) : 0; }
#if defined(__vita__)
    g_tl_on = hle_switch("SND_TRACE");                              /* Vita: OFF by default; an empty file ux0:data/rayman2/SND_TRACE turns it on -> ux0:data/rayman2/snd_trace.log */
#else
    { const char *tp = getenv("R2_SND_TRACELOG"); if (tp && *tp && strcmp(tp, "0")) { g_tl_path = tp; g_tl_on = 1; } }
#endif
    { const char *e = getenv("R2_SND_EV"); g_evlog = e && *e && *e != '0'; }
    const char *tr = getenv("R2_SND_TRACE"); g_trace = tr && *tr && *tr != '0';
    static const uint32_t pfx[3] = {0x00000000u, 0x80000000u, 0xA0000000u};
    for (int k = 0; k < 3; k++) {
        hle_mmio_map(pfx[k] | 0x00800000u, pfx[k] | 0x009FFFFFu, sh4_aram_rd, sh4_aram_wr);
        hle_mmio_map(pfx[k] | 0x00700000u, pfx[k] | 0x00707FFFu, sh4_reg_rd, sh4_reg_wr);
    }
    hle_mmio_watch(0xA05F7800u, 0xA05F78FFu, g2_watch); hle_mmio_watch(0x005F7800u, 0x005F78FFu, g2_watch);
#if !defined(__vita__)
    const char *w = getenv("R2_SND_WAV");
    if (!w) w = "build_hle/audio.wav";
    if (strcmp(w, "0")) snd_wav_open(w);
    start_pull_test();
#endif
#ifndef SND_TEST
    { const char *e = getenv("R2_STREAM_CATCHUP"); g_sf_on = !(e && *e == '0'); hle_hook(0x8C0625B8, sf_disp); hle_hook(0x8C062F60, sf_feed); hle_hook(0x8C0F06BC, sf_cmd_start); hle_hook(0x8C0F08E4, sf_cmd_stop); hle_hook(0x8C0D6FDC, sf_sdq_svc); hle_hook(0x8C098F20, sf_play_req); hle_hook(0x8C06262C, sf_open); hle_hook(0x8C0628A8, sf_stop); hle_hook(0x8C062960, sf_pause); hle_hook(0x8C0629B0, sf_resume); }
#endif
#if !defined(__vita__) && !defined(SND_TEST)
    { const char *rf = getenv("R2_SND_REC"); if (rf && *rf) { g_rec = fopen(rf, "wb"); if (g_rec) fwrite("SREC0001", 1, 8, g_rec); } }
#endif
    atexit(snd_atexit);
}
