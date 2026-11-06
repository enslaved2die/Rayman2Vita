/* camlog_run: oracle driver for the follow-camera study (N3). Same boot path as ta_capture.c (new game from the Menu, redirect to --level), but instead of TA scenes it
 * logs, once per guest frame (frame hook = RAM state at the end of that guest frame), a fixed set of guest structures plus the pad input applied:
 *   OUT/camlog.bin : repeated records, see frame_hook(): header { magic, guest_frame, rel, joyx|joyy<<8|buttons<<16 }, ids { camSO, plSO, camMat, plMat, camActor, plActor },
 *                    then raw blocks: camSO (0x80), camSO global matrix (0x80), plSO (0x80), plSO global matrix (0x80), stack camera block 0x8C00F300 (0x100),
 *                    camera actor (0x800), player actor (0x400).
 *   OUT/ram_<rel>.bin for --dump a,b,c (rel frames): full 16 MiB guest RAM.
 * Script: --script N selects the stick script (script_stick). Nothing under tools/sh4recomp is modified.
 *   camlog_run --image 1ST_READ.BIN --dcdata DIR --out OUTDIR --level Learn_10 --n 900 [--script 1] [--dump 10,200] [--start 0] */
#include "hle.h"
#include "pad.h"
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <strings.h>
#include <math.h>

extern const char *hle_stop_reason(void);
extern unsigned long hle_frames_limit;
extern void (*hle_frame_hook)(unsigned long); extern int hle_no_pace;
static SH4Ctx ctx;
#define NEXT_LEVEL_VA 0x8C123B27u
#define LEVEL_VA      0x8C123B09u
#define CAMTAB_VA     0x8C123CF8u    /* player-table entry 1 = camera SO (notes_visibility.md) */
#define PLTAB_VA      0x8C123CF0u    /* entry 0 = Rayman (INFERRED here, checked offline) */
#define STACKCAM_VA   0x8C00F300u

static struct { uint32_t mask; unsigned long from, to; } presses[64]; static int npress;
static char level[30] = "Learn_10", outdir[512] = "camlog_out";
static unsigned long nframes = 900, startrel = 0; static int script = 1;
static unsigned long dumps[32]; static int ndump;
static unsigned long skip_from, skip_to, skip_every = 40; static uint32_t skip_btn = PAD_A;
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max, hle_trace_n; extern void hle_set_trace(int);
extern void cam_watch_arm(uint32_t a);
extern int cam_snap_on; extern uint32_t cam_snap_a0, cam_snap_a1; extern void (*cam_snap_cb)(void *, uint32_t); extern void cam_snap_set(int on);
static unsigned long snaps[4096]; static int nsnap; static unsigned long snap_cur; static int snap_prez;
/* --snap r1,r2,..: for guest frame rel r capture the full guest RAM + SH4Ctx at ENTRY of the camera director f_8c0741e0 (snap_<r>_pre.bin/.regs) and at entry of the camera behaviour f_8c08e51c (snap_<r>_post.bin).
 * Armed at the end of rel r-1, disarmed at the end of rel r. */
static void snap_cb(void *cc, uint32_t addr) {
    char p[640]; const char *tag = addr == cam_snap_a0 ? "pre" : "post"; FILE *d;
    if (snap_prez && addr != cam_snap_a0) return;
    snprintf(p, sizeof p, "%s/snap_%lu_%s.bin", outdir, snap_cur, tag); d = fopen(p, "wb"); if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); }
    snprintf(p, sizeof p, "%s/snap_%lu_%s.regs", outdir, snap_cur, tag); d = fopen(p, "wb"); if (d) { fwrite(cc, 1, sizeof(SH4Ctx), d); fclose(d); }
    if (addr != cam_snap_a0 || snap_prez) cam_snap_set(0);
}
static uint32_t warm_va[4]; static int nwarm, warm_done; static unsigned long warm_rel;
static unsigned long trace_rel = ~0ul; static FILE *trace_f;
static unsigned long lvl_seen; static int lvl_seen_ok; static FILE *clog;
static void add_press(uint32_t mask, unsigned long f) { presses[npress].mask = mask; presses[npress].from = f; presses[npress].to = f + 4; npress++; }

/* Pad scripts. Stick values are DC bytes (128 = centre; joyy 0 = up). Scripts start after rel 150. */
static uint32_t script_btn;
static void script_stick(unsigned long rel, PadAnalog *an) {
    script_btn = 0;
    an->joyx = 128; an->joyy = 128;
    if (rel < 150) return;
    unsigned long r = rel - 150;
    if (script == 1) {              /* 4x120 phases: forward, forward-right, forward-left, back (same as ta_capture --walk) */
        switch ((r / 120) % 4) { case 0: an->joyx = 128; an->joyy = 0; break; case 1: an->joyx = 255; an->joyy = 40; break; case 2: an->joyx = 0; an->joyy = 40; break; default: an->joyx = 128; an->joyy = 255; break; }
    } else if (script == 4) {       /* script 1 stick + A pulse (3 frames) every 97 frames: advances dialogue boxes / jumps */
        switch ((r / 120) % 4) { case 0: an->joyx = 128; an->joyy = 0; break; case 1: an->joyx = 255; an->joyy = 40; break; case 2: an->joyx = 0; an->joyy = 40; break; default: an->joyx = 128; an->joyy = 255; break; }
        if (r % 97 < 3) script_btn = PAD_A;
    } else if (script == 2) {       /* slow turn circle with idle stretches and half deflection */
        unsigned long ph = r % 480;
        if (ph < 60) { }
        else if (ph < 300) { double a = (ph - 60) * 2.0 * M_PI / 240.0; an->joyx = (uint8_t)(128 + 120 * sin(a)); an->joyy = (uint8_t)(128 - 120 * cos(a)); }
        else if (ph < 360) { an->joyx = 128; an->joyy = 0; }
        else if (ph < 420) { an->joyx = 128; an->joyy = 96; }
    } else if (script == 3) {       /* straight runs in 8 compass directions, 100 frames each + 20 idle */
        unsigned long ph = r % 120, k = (r / 120) % 8; if (ph >= 100) return;
        double a = k * M_PI / 4.0; an->joyx = (uint8_t)(128 + 120 * sin(a)); an->joyy = (uint8_t)(128 - 120 * cos(a));
    }
}
static const uint32_t FR_MAGIC = 0xCA110601u;
static int off(uint32_t va) { return (int)(va & 0xFFFFFF); }
static uint32_t rd32(uint32_t va) { if ((va >> 24) != 0x8C) return 0; uint32_t v; memcpy(&v, sh4_ram + off(va), 4); return v; }
static void wr_block(uint32_t va, int n) {
    uint8_t buf[0x1000]; memset(buf, 0, sizeof buf);
    if ((va >> 24) == 0x8C && off(va) + n <= 0x1000000) memcpy(buf, sh4_ram + off(va), n);
    fwrite(buf, 1, n, clog);
}
static void frame_hook(unsigned long fr) {
    if (trace_f) { hle_set_trace(0); hle_trace_fp = NULL; fclose(trace_f); trace_f = NULL; }      /* end of the traced guest frame */
    if (lvl_seen_ok && fr - lvl_seen + 1 == trace_rel) {                                         /* trace the NEXT guest frame (rel = trace_rel) */
        char p[640]; snprintf(p, sizeof p, "%s/trace_%lu.txt", outdir, trace_rel); trace_f = fopen(p, "w");
        if (trace_f) { hle_trace_fp = trace_f; hle_trace_max = 0; hle_trace_n = 0; hle_set_trace(1); }
    }
    uint32_t m = 0; for (int i = 0; i < npress; i++) if (fr >= presses[i].from && fr < presses[i].to) m |= presses[i].mask;
    char *nx = (char *)sh4_ram + (NEXT_LEVEL_VA & 0xFFFFFF);
    if (nx[0] && strcasecmp(nx, level)) { fprintf(stderr, "[camlog] frame %lu: redirect next %s -> %s\n", fr, nx, level); memcpy(nx, level, strlen(level) + 1); }
    const char *cur = (const char *)sh4_ram + (LEVEL_VA & 0xFFFFFF);
    if (!lvl_seen_ok && !strncasecmp(cur, level, 29) && npress && fr > 900) { lvl_seen_ok = 1; lvl_seen = fr; fprintf(stderr, "[camlog] frame %lu: level '%s' current\n", fr, cur); }
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    unsigned long rel = lvl_seen_ok ? fr - lvl_seen : 0;
    if (lvl_seen_ok) { script_stick(rel, &an); m |= script_btn; }
    if (lvl_seen_ok && skip_to && rel >= skip_from && rel < skip_to && (rel - skip_from) % skip_every < 4) m |= skip_btn;   /* cutscene-skip pulses */
    /* logged input = the value set at the END of this hook, i.e. applied during the NEXT guest frame; record the one set at the previous hook too (prev) */
    static uint32_t lastm = ~0u; static uint16_t lastx = 0xFFFF; uint16_t sig = (uint16_t)(an.joyx << 8 | an.joyy);
    static uint32_t prev_in; uint32_t applied_this_frame = prev_in;
    if (m != lastm || sig != lastx) { lastm = m; lastx = sig; pad_set_state(m, &an); }
    prev_in = (uint32_t)(an.joyx | an.joyy << 8 | m << 16);
    if (lvl_seen_ok && !warm_done && nwarm && rel >= warm_rel) { warm_done = 1; for (int i = 0; i < nwarm; i++) cam_watch_arm(warm_va[i]); fprintf(stderr, "[camlog] watch armed at rel %lu\n", rel); }
    if (!lvl_seen_ok) return;
    if (nsnap) { cam_snap_set(0); for (int i = 0; i < nsnap; i++) if (snaps[i] == rel + 1) { snap_cur = rel + 1; cam_snap_a0 = 0x8c0741e0u; cam_snap_a1 = 0x8c08e51cu; cam_snap_cb = snap_cb; cam_snap_set(1); } }
    if (rel >= startrel) {
        uint32_t cso = rd32(CAMTAB_VA), pso = rd32(PLTAB_VA);
        uint32_t cmat = rd32(cso + 0x24), pmat = rd32(pso + 0x24), cact = rd32(cso + 4), pact = rd32(pso + 4);
        /* header word 3 = pad applied DURING this guest frame (set at the previous hook) */
        uint32_t hdr[4] = { FR_MAGIC, (uint32_t)fr, (uint32_t)rel, applied_this_frame };
        fwrite(hdr, 4, 4, clog); uint32_t ids[6] = { cso, pso, cmat, pmat, cact, pact }; fwrite(ids, 4, 6, clog);
        wr_block(cso, 0x80); wr_block(cmat, 0x80); wr_block(pso, 0x80); wr_block(pmat, 0x80); wr_block(STACKCAM_VA, 0x100); wr_block(cact, 0x800); wr_block(pact, 0x400);
    }
    for (int i = 0; i < ndump; i++) if (dumps[i] == rel) { char p[640]; snprintf(p, sizeof p, "%s/ram_%lu.bin", outdir, rel); FILE *d = fopen(p, "wb"); if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); } }
    if (rel >= startrel + nframes) hle_stop("captured");
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }

int main(int argc, char **argv) {
    const char *image = "1ST_READ.BIN", *dcdata = "."; int timeout = 900;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--out") && i + 1 < argc) snprintf(outdir, sizeof outdir, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--level") && i + 1 < argc) snprintf(level, sizeof level, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--n") && i + 1 < argc) nframes = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--start") && i + 1 < argc) startrel = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--skip") && i + 1 < argc) { char *q = argv[++i]; skip_from = strtoul(q, &q, 10); if (*q == ',') q++; skip_to = strtoul(q, &q, 10); if (*q == ',') q++; if (*q) skip_every = strtoul(q, &q, 10); }
        else if (!strcmp(argv[i], "--skipbtn") && i + 1 < argc) { ++i; skip_btn = !strcmp(argv[i], "start") ? PAD_START : !strcmp(argv[i], "b") ? PAD_B : PAD_A; }
        else if (!strcmp(argv[i], "--trace") && i + 1 < argc) trace_rel = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--watch") && i + 2 < argc) { warm_rel = strtoul(argv[++i], 0, 10); char *q = argv[++i]; while (*q && nwarm < 4) { warm_va[nwarm++] = (uint32_t)strtoul(q, &q, 16); if (*q == ',') q++; } }
        else if (!strcmp(argv[i], "--script") && i + 1 < argc) script = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--dump") && i + 1 < argc) { char *s = argv[++i]; while (*s && ndump < 32) { dumps[ndump++] = strtoul(s, &s, 10); if (*s == ',') s++; } }
        else if (!strcmp(argv[i], "--snaprange") && i + 2 < argc) { unsigned long a = strtoul(argv[++i], 0, 10), b = strtoul(argv[++i], 0, 10); for (; a < b && nsnap < 4096; a++) snaps[nsnap++] = a; snap_prez = 1; }
        else if (!strcmp(argv[i], "--snap") && i + 1 < argc) { char *q = argv[++i]; while (*q && nsnap < 4096) { snaps[nsnap++] = strtoul(q, &q, 10); if (*q == ',') q++; } }
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    add_press(PAD_START, 300); add_press(PAD_START, 400); add_press(PAD_START, 500);
    add_press(PAD_A, 600); add_press(PAD_A, 700); add_press(PAD_A, 800);
    { char cmd[600]; snprintf(cmd, sizeof cmd, "mkdir -p '%s'", outdir); if (system(cmd)) return 1; }
    { char p[640]; snprintf(p, sizeof p, "%s/camlog.bin", outdir); clog = fopen(p, "wb"); if (!clog) return 1; }
    setenv("R2_WIDE", "0", 1);
    hle_frames_limit = 2500 + startrel + nframes + 300;
    hle_no_pace = 1; hle_verbose = 0;
    FILE *f = fopen(image, "rb"); if (!f) { perror(image); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n); if (fread(buf, 1, n, f) != (size_t)n) return 2; fclose(f);
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(timeout);
    int rc = hle_run_main(&ctx);
    alarm(0); fclose(clog);
    fprintf(stderr, "camlog_run result: rc=%d (%s)\n", rc, hle_stop_reason());
    return (rc == 3 || !strcmp(hle_stop_reason(), "captured")) ? 0 : rc;
}
