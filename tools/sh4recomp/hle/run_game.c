/* run_game: host harness. Loads 1ST_READ.BIN, models the boot environment (hle/boot.c) and runs main().
 * usage: run_game [--image FILE] [--dcdata DIR] [--trace N] [--trace-file F] [--timeout SEC] [-v] [-vv] [--hw] */
#include "hle.h"
#include "pad.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max;
extern const char *hle_stop_reason(void); extern void hle_dump_state(FILE *); extern void hle_dump_hw(FILE *);
extern int hle_stop_on_unhandled; extern unsigned long hle_frames_limit, hle_trace_from_frame; extern void hle_spy_add(uint32_t); extern void hle_set_trace(int);
static SH4Ctx ctx;
extern void (*hle_frame_hook)(unsigned long); extern int hle_no_pace;
/* --press NAME@FRAME[+HOLD] : hold pad button NAME (START A B X Y C Z D UP DOWN LEFT RIGHT) from guest frame FRAME for HOLD frames (default 4) */
static struct { uint32_t mask; unsigned long from, to; } presses[1024]; static int npress;
static void add_press(const char *spec) {
    static const struct { const char *n; uint32_t m; } nm[] = { {"START", PAD_START}, {"A", PAD_A}, {"B", PAD_B}, {"X", PAD_X}, {"Y", PAD_Y}, {"C", PAD_C}, {"Z", PAD_Z}, {"D", PAD_D}, {"UP", PAD_UP}, {"DOWN", PAD_DOWN}, {"LEFT", PAD_LEFT}, {"RIGHT", PAD_RIGHT} };
    char b[64]; snprintf(b, sizeof b, "%s", spec); char *at = strchr(b, '@'); if (!at || npress >= 1024) { fprintf(stderr, "bad --press %s\n", spec); exit(1); }
    *at++ = 0; unsigned long f = strtoul(at, &at, 10), h = (*at == '+') ? strtoul(at + 1, 0, 10) : 4;
    for (unsigned i = 0; i < sizeof nm / sizeof *nm; i++) if (!strcmp(nm[i].n, b)) { presses[npress].mask = nm[i].m; presses[npress].from = f; presses[npress].to = f + h; npress++; return; }
    fprintf(stderr, "unknown button %s\n", b); exit(1);
}
static unsigned frame_sleep_us;
/* --stick X,Y@FRAME[+HOLD] : left stick bytes (0..255, 128 = centre) ; --trig RT,LT@FRAME[+HOLD] : analog triggers 0..255 ; --stick2 X,Y@... right stick */
static struct { PadAnalog a; int which; unsigned long from, to; } analogs[256]; static int nanalog;
static void add_analog(const char *spec, int which) {
    char b[64]; snprintf(b, sizeof b, "%s", spec); char *at = strchr(b, '@'); char *cm = strchr(b, ','); if (!at || !cm || nanalog >= 256) { fprintf(stderr, "bad analog spec %s\n", spec); exit(1); }
    *at++ = 0; *cm++ = 0; unsigned x = (unsigned)atoi(b) & 255, y = (unsigned)atoi(cm) & 255; unsigned long f = strtoul(at, &at, 10), h = (*at == '+') ? strtoul(at + 1, 0, 10) : 4;
    memset(&analogs[nanalog], 0, sizeof analogs[0]); analogs[nanalog].a = (PadAnalog){ 0, 0, 128, 128, 128, 128 }; analogs[nanalog].which = which;
    if (which == 0) { analogs[nanalog].a.joyx = x; analogs[nanalog].a.joyy = y; } else if (which == 1) { analogs[nanalog].a.joy2x = x; analogs[nanalog].a.joy2y = y; } else { analogs[nanalog].a.rt = x; analogs[nanalog].a.lt = y; }
    analogs[nanalog].from = f; analogs[nanalog].to = f + h; nanalog++;
}
static void frame_hook(unsigned long fr) {
    if (frame_sleep_us) usleep(frame_sleep_us);
    uint32_t m = 0; for (int i = 0; i < npress; i++) if (fr >= presses[i].from && fr < presses[i].to) m |= presses[i].mask;
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    for (int i = 0; i < nanalog; i++) if (fr >= analogs[i].from && fr < analogs[i].to) { switch (analogs[i].which) { case 0: an.joyx = analogs[i].a.joyx; an.joyy = analogs[i].a.joyy; break; case 1: an.joy2x = analogs[i].a.joy2x; an.joy2y = analogs[i].a.joy2y; break; default: an.rt = analogs[i].a.rt; an.lt = analogs[i].a.lt; } }
    static uint32_t last = ~0u; static PadAnalog lasta; if (m != last || memcmp(&an, &lasta, sizeof an)) { last = m; lasta = an; pad_set_state(m, &an); if (hle_verbose) hle_log("[run_game] frame %lu: pad buttons=%04x stick=%u,%u trig=%u,%u", fr, m, an.joyx, an.joyy, an.rt, an.lt); }
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }
int main(int argc, char **argv) {
    const char *image = "../../assets/dc/1ST_READ.BIN", *dcdata = "../../assets/dc"; int timeout = 20, hw = 0; const char *dumpram = 0;
    const char *tf = 0; long trace = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--trace") && i + 1 < argc) trace = atol(argv[++i]);
        else if (!strcmp(argv[i], "--trace-file") && i + 1 < argc) tf = argv[++i];
        else if (!strcmp(argv[i], "--frames") && i + 1 < argc) hle_frames_limit = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--trace-from-frame") && i + 1 < argc) hle_trace_from_frame = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--fast")) hle_no_pace = 1;
        else if (!strcmp(argv[i], "--frame-sleep-us") && i + 1 < argc) frame_sleep_us = (unsigned)atoi(argv[++i]);
        else if (!strcmp(argv[i], "--stick") && i + 1 < argc) add_analog(argv[++i], 0);
        else if (!strcmp(argv[i], "--stick2") && i + 1 < argc) add_analog(argv[++i], 1);
        else if (!strcmp(argv[i], "--trig") && i + 1 < argc) add_analog(argv[++i], 2);
        else if (!strcmp(argv[i], "--press") && i + 1 < argc) add_press(argv[++i]);
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--spy") && i + 1 < argc) hle_spy_add((uint32_t)strtoul(argv[++i], 0, 16));
        else if (!strcmp(argv[i], "-v")) hle_verbose = 1;
        else if (!strcmp(argv[i], "-vv")) hle_verbose = 2;
        else if (!strcmp(argv[i], "-q")) hle_verbose = 0;
        else if (!strcmp(argv[i], "--stop-unhandled") && i + 1 < argc) hle_stop_on_unhandled = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--hw")) hw = 1;
        else if (!strcmp(argv[i], "--dump-ram") && i + 1 < argc) dumpram = argv[++i];
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    FILE *f = fopen(image, "rb"); if (!f) { perror(image); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n); if (fread(buf, 1, n, f) != (size_t)n) return 2; fclose(f);
    if (trace) { hle_trace_fp = tf ? fopen(tf, "w") : stderr; hle_trace_max = (unsigned long)trace; if (!hle_trace_from_frame) hle_set_trace(1); }
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    if (npress || nanalog || frame_sleep_us) hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(timeout);
    uint64_t t_start = hle_time_us();
    int rc = hle_run_main(&ctx);
    alarm(0);
    { double sec = (hle_time_us() - t_start) / 1e6; fprintf(stderr, "run_game: %lu guest frames (kmRender) in %.2f s host = %.1f fps\n", hle_frame_count, sec, sec > 0 ? hle_frame_count / sec : 0.0); }
    if (hle_trace_fp && hle_trace_fp != stderr) fclose(hle_trace_fp);
    hle_dump_state(stderr);
    if (hw) hle_dump_hw(stderr);
    if (dumpram) { FILE *d = fopen(dumpram, "wb"); if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); fprintf(stderr, "guest RAM (0x8C000000..0x8CFFFFFF) dumped to %s\n", dumpram); } }
    fprintf(stderr, "run_game result: %s (code %d)\n", rc == 0 ? "main returned" : rc == 1 ? "guest exit" : rc == 3 ? "frame limit reached" : "stopped", rc);
    return rc == 3 ? 0 : rc;
}
