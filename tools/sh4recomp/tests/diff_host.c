/* host side of the real-function differential test.
 * diff_host <bin> <spec> <mode> <logout> [ramdump]
 * spec line: addr r4 r5 r6 r7 f4 f5 f6 f7 (hex). Scratch RAM 0x8C500000..+0x10000 is filled by LCG(seed) (same in qemu run).
 * mode "select": run each call in a forked child (1s alarm); print "idx ok|fail" so unsupported (I/O, unresolved) calls are dropped.
 * mode "run": run all calls sequentially in one process, writing r0,r1,fr0 per call to logout. */
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#define SCR2 0x8C500000u
static void on_alarm(int s) { (void)s; _exit(3); }
static void fault(const char *w, uint32_t a, uint32_t b) { (void)w; (void)a; (void)b; _exit(4); }
typedef struct { uint32_t a, r[4], f[4]; } Call;
static void init_ram(const char *bin) {
    memset(sh4_ram, 0, sizeof sh4_ram);
    FILE *f = fopen(bin, "rb"); fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    if (fread(&sh4_ram[0x10000], 1, n, f) != (size_t)n) exit(2); fclose(f);
    uint32_t x = 12345;
    for (int i = 0; i < 0x10000; i++) { x = x * 1103515245u + 12345u; sh4_ram[(SCR2 & 0xFFFFFF) + i] = x >> 16; }
}
static void do_call(SH4Ctx *c, const Call *k, uint32_t out[3], int idx) {
    memset(c, 0, sizeof *c); c->sr_other = 0x700000F0u; c->fpscr = 0;
    c->r[15] = 0x8CFFF000u; c->gbr = SCR2 + 0x8000;
    for (int i = 0; i < 4; i++) { c->r[4 + i] = k->r[i]; c->fr[4 + i] = k->f[i]; }
    c->fpscr = 0x00040001u; fesetround(FE_TOWARDZERO);
    c->r[0] = SCR2 + 0x8000; c->r[1] = k->a; c->r[2] = k->f[3]; c->r[8] = 0x8C700000u + 12u * idx; c->pr = getenv("DH_PR") ? (uint32_t)strtoul(getenv("DH_PR"), 0, 16) : 0x8C001000u; c->fpul = k->f[3];  /* the driver's last 'fsts FPUL,FR7' leaves FPUL=f7 - setjmp-like functions save FPUL */ /* mirror the SH-4 driver's register state */
    sh4_call(c, k->a);
    out[0] = c->r[0]; out[1] = c->r[1]; out[2] = c->fr[0];
}
int main(int argc, char **argv) {
    static Call calls[20000]; int n = 0; char line[512];
    FILE *sp = fopen(argv[2], "r");
    while (fgets(line, sizeof line, sp)) {
        Call *k = &calls[n]; unsigned v[9];
        if (sscanf(line, "%x %x %x %x %x %x %x %x %x", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8]) != 9) continue;
        k->a = v[0]; for (int i = 0; i < 4; i++) { k->r[i] = v[1 + i]; k->f[i] = v[5 + i]; } n++;
    }
    sh4_fault_handler = fault; static SH4Ctx ctx;
    if (!strcmp(argv[3], "select")) {
        FILE *lo = fopen(argv[4], "w");
        for (int i = 0; i < n; i++) {
            fflush(lo); pid_t p = fork();
            if (p == 0) { signal(SIGALRM, on_alarm); alarm(1); init_ram(argv[1]); uint32_t o[3]; do_call(&ctx, &calls[i], o, 0); _exit(0); }
            int st; waitpid(p, &st, 0);
            fprintf(lo, "%d %d\n", i, WIFEXITED(st) && WEXITSTATUS(st) == 0);
        }
        fclose(lo); return 0;
    }
    signal(SIGALRM, on_alarm); alarm(120); init_ram(argv[1]);
    FILE *lo = fopen(argv[4], "wb");
    for (int i = 0; i < n; i++) { uint32_t o[3]; do_call(&ctx, &calls[i], o, i); fwrite(o, 4, 3, lo); }
    fclose(lo);
    if (argc > 5) { FILE *f = fopen(argv[5], "wb"); fwrite(sh4_ram, 1, sizeof sh4_ram, f); fclose(f); }
    return 0;
}
