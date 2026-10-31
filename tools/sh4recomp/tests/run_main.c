/* smoke: enter the recompiled game at main (0x8C010D92) with no HLE; reports where it first leaves the pure-CPU world. */
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
static void on_alarm(int s) { (void)s; fprintf(stderr, "stopped after timeout (still running guest code)\n"); _exit(3); }
static SH4Ctx *gc;
static void fault(const char *w, uint32_t a, uint32_t b) { fprintf(stderr, "first non-CPU event: %s a=%08x b=%08x  (PR=%08x r15=%08x)\n", w, a, b, gc->pr, gc->r[15]); _exit(4); }
int main(int argc, char **argv) {
    FILE *f = fopen(argv[1], "rb"); fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    if (fread(&sh4_ram[0x10000], 1, n, f) != (size_t)n) return 2; fclose(f);
    static SH4Ctx c; gc = &c; sh4_ctx_reset(&c); c.sr_other = 0x700000F0u; c.fpscr = 0x00040001u; c.r[15] = 0x8C00F400u;
    sh4_fault_handler = fault; signal(SIGALRM, on_alarm); alarm(5);
    sh4_call(&c, 0x8C010D92u);
    fprintf(stderr, "main returned\n"); return 0;
}
