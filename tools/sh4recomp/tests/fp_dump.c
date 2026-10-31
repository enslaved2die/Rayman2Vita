/* fp_dump <fsca|fsrra> <fpscr_hex> <infile> <outfile>: runs runtime.h's fp_fsca / fp_fsrra on each u32 of infile.
 * fsca: output 2 u32 per input (sin bits, cos bits); fsrra: 1 u32 per input. Used by fsca_fsrra.py. */
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const Sh4FuncEnt sh4_functab[1] = {{0, 0}}; const uint32_t sh4_functab_n = 0;   /* runtime.c needs a table; none used here */
int main(int argc, char **argv) {
    FILE *f = fopen(argv[3], "rb"); fseek(f, 0, SEEK_END); long n = ftell(f) / 4; fseek(f, 0, SEEK_SET);
    uint32_t *in = malloc(n * 4); if (fread(in, 4, n, f) != (size_t)n) return 2; fclose(f);
    static SH4Ctx c; sh4_ctx_reset(&c); c.fpscr = 0; sh4_setfpscr(&c, strtoul(argv[2], 0, 16));   /* also sets the host rounding mode like lds Rm,FPSCR does */
    FILE *o = fopen(argv[4], "wb");
    for (long i = 0; i < n; i++) {
        if (!strcmp(argv[1], "fsca")) { c.fpul = in[i]; c.fr[2] = c.fr[3] = 0xDEADBEEF; fp_fsca(&c, 2); fwrite(&c.fr[2], 4, 2, o); }
        else { c.fr[5] = in[i]; fp_fsrra(&c, 5); fwrite(&c.fr[5], 4, 1, o); }
    }
    fclose(o); return 0;
}
