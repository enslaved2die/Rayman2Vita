/* generic host harness: test_main E <entry_addr> L <addr> <file> ... D <addr> <len> <outfile> ...
 * Loads files into guest RAM, runs the lifted function at <entry_addr> and dumps RAM regions.
 * Optional initial register state: S <name> <hexval> (r0..r15, fpscr, sr, gbr, pr, ...) */
#include "runtime.h"
#include "recomp_decls.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

static void on_alarm(int s) { (void)s; fprintf(stderr, "TIMEOUT\n"); _exit(3); }
static void fault(const char *w, uint32_t a, uint32_t b) { fprintf(stderr, "FAULT %s %08x %08x\n", w, a, b); _exit(4); }

int main(int argc, char **argv) {
    SH4Ctx *c = calloc(1, sizeof *c);
    sh4_ctx_reset(c);
    c->sr_other = 0x700000F0u; c->fpscr = 0x00040001u; c->r[15] = 0x8CFFF000u;
    sh4_fault_handler = fault;
    uint32_t entry = 0; int i = 1; int ndump = 0; struct { uint32_t a, n; const char *f; } d[16];
    signal(SIGALRM, on_alarm); alarm(60);
    while (i < argc) {
        if (!strcmp(argv[i], "E")) { entry = strtoul(argv[i+1], 0, 16); i += 2; }
        else if (!strcmp(argv[i], "L")) {
            uint32_t a = strtoul(argv[i+1], 0, 16); FILE *f = fopen(argv[i+2], "rb"); if (!f) { perror("L"); return 2; }
            fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
            if (fread(&sh4_ram[a & 0xFFFFFF], 1, n, f) != (size_t)n) return 2; fclose(f); i += 3;
        } else if (!strcmp(argv[i], "D")) { d[ndump].a = strtoul(argv[i+1], 0, 16); d[ndump].n = strtoul(argv[i+2], 0, 16); d[ndump].f = argv[i+3]; ndump++; i += 4; }
        else if (!strcmp(argv[i], "S")) {
            const char *nm = argv[i+1]; uint32_t v = strtoul(argv[i+2], 0, 16);
            if (nm[0] == 'r') c->r[atoi(nm + 1)] = v; else if (!strcmp(nm, "pr")) c->pr = v; else if (!strcmp(nm, "fpscr")) c->fpscr = v;
            i += 3;
        } else { fprintf(stderr, "bad arg %s\n", argv[i]); return 2; }
    }
    sh4_call(c, entry);
    for (int k = 0; k < ndump; k++) { FILE *f = fopen(d[k].f, "wb"); fwrite(&sh4_ram[d[k].a & 0xFFFFFF], 1, d[k].n, f); fclose(f); }
    return 0;
}
