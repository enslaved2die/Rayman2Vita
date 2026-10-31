/* run_game: host harness. Loads 1ST_READ.BIN, models the boot environment (hle/boot.c) and runs main().
 * usage: run_game [--image FILE] [--dcdata DIR] [--trace N] [--trace-file F] [--timeout SEC] [-v] [-vv] [--hw] */
#include "hle.h"
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max;
extern const char *hle_stop_reason(void); extern void hle_dump_state(FILE *); extern void hle_dump_hw(FILE *);
extern int hle_stop_on_unhandled; extern void hle_spy_add(uint32_t); extern void hle_set_trace(int);
static SH4Ctx ctx;
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }
int main(int argc, char **argv) {
    const char *image = "../../assets/dc/1ST_READ.BIN", *dcdata = "../../assets/dc"; int timeout = 20, hw = 0; const char *dumpram = 0;
    const char *tf = 0; long trace = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--trace") && i + 1 < argc) trace = atol(argv[++i]);
        else if (!strcmp(argv[i], "--trace-file") && i + 1 < argc) tf = argv[++i];
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
    if (trace) { hle_trace_fp = tf ? fopen(tf, "w") : stderr; hle_trace_max = (unsigned long)trace; hle_set_trace(1); }
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    signal(SIGALRM, on_alarm); alarm(timeout);
    int rc = hle_run_main(&ctx);
    alarm(0);
    if (hle_trace_fp && hle_trace_fp != stderr) fclose(hle_trace_fp);
    hle_dump_state(stderr);
    if (hw) hle_dump_hw(stderr);
    if (dumpram) { FILE *d = fopen(dumpram, "wb"); if (d) { fwrite(sh4_ram, 1, SH4_RAM_SIZE, d); fclose(d); fprintf(stderr, "guest RAM (0x8C000000..0x8CFFFFFF) dumped to %s\n", dumpram); } }
    fprintf(stderr, "run_game result: %s (code %d)\n", rc == 0 ? "main returned" : rc == 1 ? "guest exit" : "stopped", rc);
    return rc;
}
