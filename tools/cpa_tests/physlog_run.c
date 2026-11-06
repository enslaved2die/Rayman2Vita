/* physlog_run: oracle driver for the Rayman physics study (N4). Derived from camlog_run.c (same boot path: new game from the Menu, redirect to --level).
 * Once per guest frame (frame hook = RAM state at the end of that guest frame) it logs Rayman's (player table entry 0) structures plus the pad applied:
 *   OUT/physlog.bin : records { u32 magic 0xCA110602, u32 guest_frame, u32 rel, u32 pad(joyx|joyy<<8|buttons<<16),
 *                       u32 ids[8] = { SO, SOmatrix, actor, dynam, mech(dynam+0x14), stdGame, collSet, dynam+4 },
 *                       blocks: SO 0x80, SO matrix 0x80, actor 0x40, dynam 0x600, mech 0x100, stdGame 0x200, collSet 0x68(0x70), dynam+4 block 0x100 }
 *   OUT/ram_<rel>.bin with --dump a,b,c : full 16 MiB guest RAM.
 * Scripts (--script N) are defined in script_stick(). Nothing under tools/sh4recomp is modified (links the private build/phys_boot.o, see phys.mk).
 *   physlog_run --image 1ST_READ.BIN --dcdata DIR --out OUTDIR --level Learn_10 --n 900 [--script 1] [--dump 10,200] [--start 0] */
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
static char level[30] = "Learn_10", outdir[512] = "physlog_out";
static unsigned long nframes = 900, startrel = 0; static int script = 1;
static unsigned long dumps[32]; static int ndump;
static unsigned long skip_from, skip_to, skip_every = 40; static uint32_t skip_btn = PAD_A;
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max, hle_trace_n; extern void hle_set_trace(int);
extern void cam_watch_arm(uint32_t a);
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
    } else if (script == 5) {       /* physics study: 8 compass runs of 90 frames with an A press (jump) at phase 30 (6 frames) and 60 (2 frames), 30 idle frames between */
        unsigned long ph = r % 120, k = (r / 120) % 8;
        if (ph < 90) { double a = k * M_PI / 4.0; an->joyx = (uint8_t)(128 + 120 * sin(a)); an->joyy = (uint8_t)(128 - 120 * cos(a)); }
        if ((ph >= 30 && ph < 36) || (ph >= 60 && ph < 62)) script_btn = PAD_A;
    } else if (script == 6) {       /* walk/run mix, no buttons: 60 forward half, 60 forward full, 60 idle, 60 back full */
        switch ((r / 60) % 4) { case 0: an->joyy = 64; break; case 1: an->joyy = 0; break; case 2: break; default: an->joyy = 255; }
    } else if (script == 3) {       /* straight runs in 8 compass directions, 100 frames each + 20 idle */
        unsigned long ph = r % 120, k = (r / 120) % 8; if (ph >= 100) return;
        double a = k * M_PI / 4.0; an->joyx = (uint8_t)(128 + 120 * sin(a)); an->joyy = (uint8_t)(128 - 120 * cos(a));
    }
}
static const uint32_t FR_MAGIC = 0xCA110602u;
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
    if (nx[0] && strcasecmp(nx, level)) { fprintf(stderr, "[physlog] frame %lu: redirect next %s -> %s\n", fr, nx, level); memcpy(nx, level, strlen(level) + 1); }
    const char *cur = (const char *)sh4_ram + (LEVEL_VA & 0xFFFFFF);
    if (!lvl_seen_ok && !strncasecmp(cur, level, 29) && npress && fr > 900) { lvl_seen_ok = 1; lvl_seen = fr; fprintf(stderr, "[physlog] frame %lu: level '%s' current\n", fr, cur); }
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    unsigned long rel = lvl_seen_ok ? fr - lvl_seen : 0;
    if (lvl_seen_ok) { script_stick(rel, &an); m |= script_btn; }
    if (lvl_seen_ok && skip_to && rel >= skip_from && rel < skip_to && (rel - skip_from) % skip_every < 4) m |= skip_btn;   /* cutscene-skip pulses */
    /* logged input = the value set at the END of this hook, i.e. applied during the NEXT guest frame; record the one set at the previous hook too (prev) */
    static uint32_t lastm = ~0u; static uint16_t lastx = 0xFFFF; uint16_t sig = (uint16_t)(an.joyx << 8 | an.joyy);
    static uint32_t prev_in; uint32_t applied_this_frame = prev_in;
    if (m != lastm || sig != lastx) { lastm = m; lastx = sig; pad_set_state(m, &an); }
    prev_in = (uint32_t)(an.joyx | an.joyy << 8 | m << 16);
    if (lvl_seen_ok && !warm_done && nwarm && rel >= warm_rel) { warm_done = 1; for (int i = 0; i < nwarm; i++) cam_watch_arm(warm_va[i]); fprintf(stderr, "[physlog] watch armed at rel %lu\n", rel); }
    if (!lvl_seen_ok) return;
    if (rel >= startrel) {
        uint32_t pso = rd32(PLTAB_VA), pmat = rd32(pso + 0x24), pact = rd32(pso + 4);
        uint32_t dyn = rd32(pact + 8), mech = rd32(dyn + 0x14), sg = rd32(pact + 4), cs = rd32(pact + 0x14), d4 = rd32(dyn + 4);
        /* header word 3 = pad applied DURING this guest frame (set at the previous hook) */
        uint32_t hdr[4] = { FR_MAGIC, (uint32_t)fr, (uint32_t)rel, applied_this_frame };
        fwrite(hdr, 4, 4, clog); uint32_t ids[8] = { pso, pmat, pact, dyn, mech, sg, cs, d4 }; fwrite(ids, 4, 8, clog);
        wr_block(pso, 0x80); wr_block(pmat, 0x80); wr_block(pact, 0x40); wr_block(dyn, 0x600); wr_block(mech, 0x100); wr_block(sg, 0x200); wr_block(cs, 0x70); wr_block(d4, 0x100);
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
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    add_press(PAD_START, 300); add_press(PAD_START, 400); add_press(PAD_START, 500);
    add_press(PAD_A, 600); add_press(PAD_A, 700); add_press(PAD_A, 800);
    { char cmd[600]; snprintf(cmd, sizeof cmd, "mkdir -p '%s'", outdir); if (system(cmd)) return 1; }
    { char p[640]; snprintf(p, sizeof p, "%s/physlog.bin", outdir); clog = fopen(p, "wb"); if (!clog) return 1; }
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
    fprintf(stderr, "physlog_run result: rc=%d (%s)\n", rc, hle_stop_reason());
    return (rc == 3 || !strcmp(hle_stop_reason(), "captured")) ? 0 : rc;
}
