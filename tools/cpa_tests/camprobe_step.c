/* camprobe_step: run the lifted camera behaviour f_8c08e51c (and its parts) on a captured guest-RAM dump (research tool for re_analysis/dc/notes_camera.md, N3).
 *   camprobe_step A.bin [B.bin]       load RAM A, copy Rayman's global matrix (and optionally more) from B, call the behaviour once, compare with B
 * Oracle side only, like vis_frustum.c; not part of the native engine. */
#include "hle.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

extern void f_8c08e51c(SH4Ctx *c);
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max, hle_trace_n; extern void hle_set_trace(int);
static SH4Ctx ctx;
static uint8_t *slurp(const char *p) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; uint8_t *b = malloc(SH4_RAM_SIZE); if (!b || fread(b, 1, SH4_RAM_SIZE, f) != SH4_RAM_SIZE) { fclose(f); return NULL; } fclose(f); return b;
}
static uint32_t rd32(const uint8_t *r, uint32_t va) { uint32_t v; memcpy(&v, r + (va & 0xFFFFFF), 4); return v; }
static float rdf(const uint8_t *r, uint32_t va) { float v; memcpy(&v, r + (va & 0xFFFFFF), 4); return v; }

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: camprobe_step A.bin [B.bin]\n"); return 1; }
    uint8_t *A = slurp(argv[1]); if (!A) { fprintf(stderr, "bad A\n"); return 1; }
    uint8_t *B = argc > 2 ? slurp(argv[2]) : NULL;
    memcpy(sh4_ram, A, SH4_RAM_SIZE);
    uint32_t cso = rd32(A, 0x8C123CF8), pso = rd32(A, 0x8C123CF0), cact = rd32(A, cso + 4), cmat = rd32(A, cso + 0x24), pmat = rd32(A, pso + 0x24);
    uint32_t cd = cact + 0x194;
    printf("camSO %08x actor %08x camData %08x cmat %08x pSO %08x pmat %08x ptr@cd+0x170 = %08x\n", cso, cact, cd, cmat, pso, pmat, rd32(A, cd + 0x170));
    if (B) { /* copy Rayman's matrix block from B */
        uint32_t pmatB = rd32(B, rd32(B, 0x8C123CF0) + 0x24);
        memcpy(sh4_ram + (pmat & 0xFFFFFF), B + (pmatB & 0xFFFFFF), 0x80);
        const char *cp = getenv("COPY"); /* COPY=lo-hi,lo-hi (hex camera-actor offsets): copy B's bytes into the model before the call */
        while (cp && *cp) { char *e; unsigned lo = strtoul(cp, &e, 16); if (*e != '-') break; unsigned hi = strtoul(e + 1, &e, 16); memcpy(sh4_ram + ((cact + lo) & 0xFFFFFF), B + ((cact + lo) & 0xFFFFFF), hi - lo); cp = *e == ',' ? e + 1 : e; }
    }
    SH4Ctx *c = &ctx; memset(c, 0, sizeof *c);
    c->fpscr = 0x00040001u; R(15) = 0x8CF00000u;
    R(4) = cd; R(5) = cso; R(6) = cact + 0x680; c->pr = 0x8C010000u;
    { const char *st = getenv("SET"); /* SET=off=val,off=val (hex camera-actor offset, float value), applied after COPY */
      while (st && *st) { char *e; unsigned o = strtoul(st, &e, 16); if (*e != '=') break; float v = strtof(e + 1, &e); memcpy(sh4_ram + ((cact + o) & 0xFFFFFF), &v, 4); st = *e == ',' ? e + 1 : e; } }
    if (getenv("QUIET")) { /* machine-readable: u1 u2 S1 S2 S3 C L (floats), no diff output */
        SH4Ctx *q = &ctx; memset(q, 0, sizeof *q); q->fpscr = 0x00040001u; ctx.r[15] = 0x8CF00000u;
        q->r[4] = cd; q->r[5] = cso; q->r[6] = cact + 0x680; q->pr = 0x8C010000u;
        { float dt = getenv("DT") ? (float)atof(getenv("DT")) : 0.016f; memcpy(&q->fr[4], &dt, 4); }
        f_8c08e51c(q);
        static const unsigned offs[] = { 0x60c, 0x610, 0x614, 0x644, 0x648, 0x64c, 0x3dc, 0x3f8, 0x408, 0x68c, 0x680, 0x684, 0x688, 0x690, 0x694, 0x698 };
        for (unsigned k = 0; k < sizeof offs / sizeof *offs; k++) printf("%.6f ", rdf(sh4_ram, cact + offs[k]));
        printf("\n"); return 0; }
    { float dt = getenv("DT") ? (float)atof(getenv("DT")) : 0.016f; memcpy(&c->fr[4], &dt, 4); }
    if (getenv("TRACE")) { hle_trace_fp = stdout; hle_trace_max = 0; hle_trace_n = 0; hle_set_trace(1); }
    f_8c08e51c(c);
    if (getenv("TRACE")) { hle_set_trace(0); fflush(stdout); }
    printf("ret r0 = %08x\n", R(0));
    const uint8_t *ref = B ? B : A;
    uint32_t refcmat = rd32(ref, rd32(ref, 0x8C123CF8) + 0x24);
    float err = 0;
    for (int k = 0; k < 3; k++) { float a = rdf(sh4_ram, cmat + 0x58 + 4 * k), b = rdf(ref, refcmat + 0x58 + 4 * k); printf("cam pos[%d] model %.6f ref %.6f\n", k, a, b); err += fabsf(a - b); }
    for (int k = 0; k < 9; k++) { float a = rdf(sh4_ram, cmat + 4 + 4 * k), b = rdf(ref, refcmat + 4 + 4 * k); err += fabsf(a - b); }
    printf("total err %.6g\n", err);
    /* diff of actor bytes vs B */
    if (B) for (uint32_t o = 0; o < 0x800; o += 4) { uint32_t x = rd32(sh4_ram, cact + o), y = rd32(B, cact + o), z = rd32(A, cact + o);
        if (x != y) printf("actor+%03x A %08x (%g) model %08x (%g) ref %08x (%g)\n", o, z, *(float *)&z, x, *(float *)&x, y, *(float *)&y); }
    return 0;
}
