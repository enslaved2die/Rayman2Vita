/* ta_capture: host driver that runs the recompiled game (oracle) through the REAL new-game path into a chosen level and captures
 * the TA vertex stream (as parsed by hle/ta.c, screen space) of consecutive scenes plus the guest RAM at the same moment.
 *
 *   ta_capture --image 1ST_READ.BIN --dcdata DIR --out OUTDIR [--level Learn_10] [--at 1500] [--n 3] [--wide 0|1]
 *
 * Why this exists (stall finding, verified 2026-11 on this branch): oracle_run's `--redirect Learn_10` rewrites the Menu *demo timer's*
 * request (~guest frame 460). The game is then in demo-playback mode and after the DAT/TMP/TEX load it opens
 * `DCData\Demos\Learn_10\Demo000.Sav`, which does not exist on the disc (only Boat01, Cask_30, Learn_30, Nave_10, Plum_00, Rodeo_40,
 * Whale_10 have one); the FileMng open fails, the async read is then issued on the invalid slot (hle/io.c: "nothing started (ret -10)") and
 * the wrapper spins. That is NOT a music-stream problem. Starting a NEW GAME from the Menu with real button presses and redirecting only the
 * Menu's own jail_10 request to the wanted level (as done here) leaves demo mode off and the guest runs normal game frames; no host stub is needed.
 *
 * Capture mechanism: hle/ta_hle.c already dumps scenes when env R2_FRAMES=n1,n2,.. (non-GL host build): $R2_DUMP_DIR/f<n>/frame.bin (strips + parsed
 * vertices: x,y = screen pixels, z = 1/w, u, v, colours), tastream.bin, vram.bin, pvrregs.bin. This driver sets R2_FRAMES at run time (the variable is
 * read per frame) and snapshots guest RAM at each guest frame boundary inside the window: OUT/ram_<n>.bin (16 MiB each).
 * Nothing under tools/sh4recomp is modified. */
#include "hle.h"
#include "pad.h"
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <strings.h>

extern const char *hle_stop_reason(void);
extern unsigned long hle_frames_limit;
extern void (*hle_frame_hook)(unsigned long); extern int hle_no_pace;
extern unsigned long hle_ta_frame_no(void);
static SH4Ctx ctx;
#define NEXT_LEVEL_VA 0x8C123B27u
#define LEVEL_VA      0x8C123B09u

static struct { uint32_t mask; unsigned long from, to; } presses[64]; static int npress;
static char level[30] = "Learn_10", outdir[512] = "ta_out";
static unsigned long capture_at = 1500, ncap = 3;
#define MAXWIN 32
static unsigned long win_rel[MAXWIN]; static int nwin, win_is_rel;      /* capture windows: --at a,b,c (absolute guest frames) or --rel a,b,c (guest frames after the level name first appears) */
static int walk;                                                        /* --walk 1: drive the left stick after the level appears so successive windows have different camera poses */
static unsigned long lvl_seen = 0; static int lvl_seen_ok;
static int cur_win = -1; static unsigned long win_start, first_ta; static int armed;
static void add_press(const char *name, uint32_t mask, unsigned long f) { (void)name; presses[npress].mask = mask; presses[npress].from = f; presses[npress].to = f + 4; npress++; }
static void parse_list(const char *s) { nwin = 0; while (*s && nwin < MAXWIN) { win_rel[nwin++] = strtoul(s, (char **)&s, 10); if (*s == ',') s++; } }
/* Stick script (INFERRED to move Rayman/the camera; effect measured via the camera position in RAM, reported by ta_compare): 4 phases of 120 frames cycling
 * forward / forward-right / forward-left / back after the level has been up for 150 frames. */
static void walk_stick(unsigned long rel, PadAnalog *an) {
    if (!walk || rel < 150) return;
    switch (((rel - 150) / 120) % 4) { case 0: an->joyx = 128; an->joyy = 0; break; case 1: an->joyx = 255; an->joyy = 40; break; case 2: an->joyx = 0; an->joyy = 40; break; default: an->joyx = 128; an->joyy = 255; break; }
}

static void frame_hook(unsigned long fr) {
    uint32_t m = 0; for (int i = 0; i < npress; i++) if (fr >= presses[i].from && fr < presses[i].to) m |= presses[i].mask;
    char *nx = (char *)sh4_ram + (NEXT_LEVEL_VA & 0xFFFFFF);
    if (nx[0] && strcasecmp(nx, level)) { fprintf(stderr, "[ta_capture] frame %lu: redirect next %s -> %s\n", fr, nx, level); memcpy(nx, level, strlen(level) + 1); }
    const char *cur = (const char *)sh4_ram + (LEVEL_VA & 0xFFFFFF);
    if (!lvl_seen_ok && !strncasecmp(cur, level, 29) && npress && fr > 900) { lvl_seen_ok = 1; lvl_seen = fr; fprintf(stderr, "[ta_capture] frame %lu: level name '%s' is now current\n", fr, cur); }
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    if (lvl_seen_ok) walk_stick(fr - lvl_seen, &an);
    static uint32_t lastm = ~0u; static uint16_t lastx = 0xFFFF; uint16_t sig = (uint16_t)(an.joyx << 8 | an.joyy);
    if (m != lastm || sig != lastx) { lastm = m; lastx = sig; pad_set_state(m, &an); }
    if (!armed && cur_win + 1 < nwin) {
        unsigned long at = win_is_rel ? (lvl_seen_ok ? lvl_seen + win_rel[cur_win + 1] : ~0ul) : win_rel[cur_win + 1];
        if (fr == at) {
            if (strncasecmp(cur, level, 29)) { fprintf(stderr, "[ta_capture] FAIL: level at capture frame is '%s', wanted '%s'\n", cur, level); hle_stop("wrong level"); return; }
            cur_win++; win_start = fr;
            first_ta = hle_ta_frame_no() + 1;                 /* next STARTRENDER number */
            char list[256] = ""; for (unsigned long i = 0; i < ncap; i++) { char t[32]; snprintf(t, sizeof t, "%s%lu", i ? "," : "", first_ta + i); strcat(list, t); }
            setenv("R2_DUMP_DIR", outdir, 1); setenv("R2_FRAMES", list, 1); armed = 1;
            {   /* the camera scene N was projected with is the RAM state at the end of the previous guest frame (measured, Jail_10): keep ram_<first-1> too */
                char p[640]; snprintf(p, sizeof p, "%s/ram_%lu.bin", outdir, first_ta - 1); FILE *d = fopen(p, "wb");
                if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); }
            }
            fprintf(stderr, "[ta_capture] frame %lu level=%s: window %d capturing TA scenes %s\n", fr, cur, cur_win, list);
        }
    }
    if (armed) {
        unsigned long t = hle_ta_frame_no();
        if (t >= first_ta && t < first_ta + ncap) {          /* hook runs after scene t has been handed to the TA parser: RAM = state at end of that guest frame */
            char p[640]; snprintf(p, sizeof p, "%s/ram_%lu.bin", outdir, t); FILE *d = fopen(p, "wb");
            if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); fprintf(stderr, "[ta_capture] guest frame %lu: ta scene %lu, RAM -> %s\n", fr, t, p); }
        }
        if (t >= first_ta + ncap - 1 + 1 || fr > win_start + 40) {
            armed = 0; setenv("R2_FRAMES", "", 1);
            if (cur_win + 1 >= nwin) hle_stop("captured");
        }
    }
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }

int main(int argc, char **argv) {
    const char *image = "1ST_READ.BIN", *dcdata = "."; int timeout = 600; int wide = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--out") && i + 1 < argc) snprintf(outdir, sizeof outdir, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--level") && i + 1 < argc) snprintf(level, sizeof level, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--at") && i + 1 < argc) { parse_list(argv[++i]); win_is_rel = 0; }
        else if (!strcmp(argv[i], "--rel") && i + 1 < argc) { parse_list(argv[++i]); win_is_rel = 1; }
        else if (!strcmp(argv[i], "--walk") && i + 1 < argc) walk = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--n") && i + 1 < argc) ncap = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--wide") && i + 1 < argc) wide = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    /* menu -> new game (measured: the request appears at guest frame ~802 with these presses). */
    add_press("START", PAD_START, 300); add_press("START", PAD_START, 400); add_press("START", PAD_START, 500);
    add_press("A", PAD_A, 600); add_press("A", PAD_A, 700); add_press("A", PAD_A, 800);
    { char cmd[600]; snprintf(cmd, sizeof cmd, "mkdir -p '%s'", outdir); if (system(cmd)) return 1; }
    setenv("R2_WIDE", wide ? "1" : "0", 1);                   /* 4:3 unless asked (the HLE otherwise forces the game's 16:9 mode) */
    if (!nwin) { win_rel[nwin++] = capture_at; }
    { unsigned long mx = 0; for (int i = 0; i < nwin; i++) if (win_rel[i] > mx) mx = win_rel[i]; hle_frames_limit = (win_is_rel ? 2500 : 0) + mx + 300; }
    hle_no_pace = 1; hle_verbose = 0;
    FILE *f = fopen(image, "rb"); if (!f) { perror(image); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n); if (fread(buf, 1, n, f) != (size_t)n) return 2; fclose(f);
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(timeout);
    int rc = hle_run_main(&ctx);
    alarm(0);
    fprintf(stderr, "ta_capture result: rc=%d (%s)\n", rc, hle_stop_reason());
    return (rc == 3 || !strcmp(hle_stop_reason(), "captured")) ? 0 : rc;
}
