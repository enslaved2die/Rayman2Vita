/* oracle_run: minimal host driver around the recompiled game (tools/sh4recomp/build_hle objects).
 * Purpose: reach a chosen level without scripting the whole campaign, then dump guest RAM for kind-A comparison.
 *   oracle_run --image 1ST_READ.BIN --dcdata DIR --frames N --press START@120 ... --warp learn_10@600 --dump-ram out.bin
 * --until-level NAME[+SETTLE] stops the run once szLevelName (0x8C123B09) == NAME for SETTLE frames (then --dump-ram).
 * --redirect NAME overwrites every next-level request the game itself makes (the Menu demo timer fires one at ~frame 460) with NAME.
 * --warp NAME@FRAME writes NAME into the engine's szNextLevelName (guest VA 0x8C123B27, re_analysis/dc/notes_levels.md a2)
 * at guest frame FRAME; the guest main loop then performs its normal level load (the same path AI ChangeMap uses).
 * This is a test-harness poke into oracle RAM, not game behaviour. Everything else mirrors hle/run_game.c. */
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
static SH4Ctx ctx;
#define NEXT_LEVEL_VA 0x8C123B27u
static struct { uint32_t mask; unsigned long from, to; } presses[1024]; static int npress;
static char want_level[30]; static unsigned long want_settle, want_since; static char redirect[30]; static char warp_name[30]; static unsigned long warp_frame = ~0ul;
static void add_press(const char *spec) {
    static const struct { const char *n; uint32_t m; } nm[] = { {"START", PAD_START}, {"A", PAD_A}, {"B", PAD_B}, {"X", PAD_X}, {"Y", PAD_Y}, {"UP", PAD_UP}, {"DOWN", PAD_DOWN}, {"LEFT", PAD_LEFT}, {"RIGHT", PAD_RIGHT} };
    char b[64]; snprintf(b, sizeof b, "%s", spec); char *at = strchr(b, '@'); if (!at || npress >= 1024) { fprintf(stderr, "bad --press %s\n", spec); exit(1); }
    *at++ = 0; unsigned long f = strtoul(at, &at, 10), h = (*at == '+') ? strtoul(at + 1, 0, 10) : 4;
    for (unsigned i = 0; i < sizeof nm / sizeof *nm; i++) if (!strcmp(nm[i].n, b)) { presses[npress].mask = nm[i].m; presses[npress].from = f; presses[npress].to = f + h; npress++; return; }
    fprintf(stderr, "unknown button %s\n", b); exit(1);
}
static void frame_hook(unsigned long fr) {
    uint32_t m = 0; for (int i = 0; i < npress; i++) if (fr >= presses[i].from && fr < presses[i].to) m |= presses[i].mask;
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    static uint32_t last = ~0u; if (m != last) { last = m; pad_set_state(m, &an); }
    { static char prev[30]; const char *c0 = (const char *)sh4_ram + (0x8C123B09u & 0xFFFFFF), *c1 = (const char *)sh4_ram + (0x8C123B27u & 0xFFFFFF);
      char cur[30]; snprintf(cur, sizeof cur, "%s|%s", c0, c1); if (strcmp(cur, prev)) { fprintf(stderr, "[oracle_run] frame %lu: level=%s next=%s\n", fr, c0, c1); strcpy(prev, cur); } }
    if (redirect[0]) {
        char *nx = (char *)sh4_ram + (NEXT_LEVEL_VA & 0xFFFFFF);
        if (nx[0] && strcasecmp(nx, redirect)) { fprintf(stderr, "[oracle_run] frame %lu: redirect next %s -> %s\n", fr, nx, redirect); memcpy(nx, redirect, strlen(redirect) + 1); }
    }
    if (want_level[0]) {
        const char *cur = (const char *)sh4_ram + (0x8C123B09u & 0xFFFFFF);
        if (!strncasecmp(cur, want_level, 29)) { if (!want_since) want_since = fr; if (fr - want_since >= want_settle) { fprintf(stderr, "[oracle_run] frame %lu: level %s resident for %lu frames, stopping\n", fr, cur, fr - want_since); hle_stop("level reached"); } }
        else want_since = 0;
    }
    if (fr == warp_frame) { memcpy(sh4_ram + (NEXT_LEVEL_VA & 0xFFFFFF), warp_name, strlen(warp_name) + 1); fprintf(stderr, "[oracle_run] frame %lu: next level <- %s\n", fr, warp_name); }
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }
int main(int argc, char **argv) {
    const char *image = "1ST_READ.BIN", *dcdata = "."; int timeout = 300; const char *dumpram = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--frames") && i + 1 < argc) hle_frames_limit = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--press") && i + 1 < argc) add_press(argv[++i]);
        else if (!strcmp(argv[i], "--warp") && i + 1 < argc) { char *s = argv[++i], *at = strchr(s, '@'); if (!at) return 1; *at = 0; snprintf(warp_name, sizeof warp_name, "%s", s); warp_frame = strtoul(at + 1, 0, 10); }
        else if (!strcmp(argv[i], "--until-level") && i + 1 < argc) { char *s = argv[++i], *pl = strchr(s, '+'); if (pl) { *pl = 0; want_settle = strtoul(pl + 1, 0, 10); } snprintf(want_level, sizeof want_level, "%s", s); }
        else if (!strcmp(argv[i], "--redirect") && i + 1 < argc) snprintf(redirect, sizeof redirect, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--dump-ram") && i + 1 < argc) dumpram = argv[++i];
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    hle_no_pace = 1; hle_verbose = 0;
    FILE *f = fopen(image, "rb"); if (!f) { perror(image); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n); if (fread(buf, 1, n, f) != (size_t)n) return 2; fclose(f);
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(timeout);
    int rc = hle_run_main(&ctx);
    alarm(0);
    if (dumpram) { FILE *d = fopen(dumpram, "wb"); if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); fprintf(stderr, "guest RAM dumped to %s\n", dumpram); } }
    fprintf(stderr, "oracle_run result: rc=%d (%s)\n", rc, hle_stop_reason());
    return rc == 3 ? 0 : rc;
}
