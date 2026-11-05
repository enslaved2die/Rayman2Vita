/* vis_frustum: probe the game's own frustum functions on a captured guest-RAM dump (research tool for re_analysis/dc/notes_visibility.md).
 *   vis_frustum RAM.bin [--far F] [--planes] < boxes        (boxes: "minx miny minz maxx maxy maxz" per line; prints the result of f_8c084d00 per box)
 * Loads RAM.bin into sh4_ram, takes the viewport struct from **(0x8C123C40) (as the render entry f_8c04b7e0 does), runs the plane setup f_8c084a1a(viewport, far)
 * (as f_8c05f4a0 does with the sector's data+0x60), then calls f_8c084d00(viewport, &min, &max, 0) for each box. The result is the lifted game code's own answer
 * (0 = box rejected, otherwise a bit mask: 0x40 | per-plane "box completely inside" bits 1,2,4,8,0x10(0x10 = test skipped),0x20(far/fade)).
 * Not part of the native engine: this is the oracle side, used to validate the native frustum model in vis_predict.c. */
#include "hle.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void f_8c084a1a(SH4Ctx *c); extern void f_8c084d00(SH4Ctx *c);
static SH4Ctx ctx;
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static float rdf(uint32_t va) { float f; memcpy(&f, sh4_ram + (va & 0xFFFFFF), 4); return f; }
static uint32_t rd32(uint32_t va) { uint32_t v; memcpy(&v, sh4_ram + (va & 0xFFFFFF), 4); return v; }
int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: vis_frustum RAM.bin [--far F] [--planes]\n"); return 1; }
    size_t n; uint8_t *b = slurp(argv[1], &n); if (!b || n != SH4_RAM_SIZE) { fprintf(stderr, "bad ram\n"); return 1; }
    memcpy(sh4_ram, b, n); free(b);
    float farv = 0.0f; int showplanes = 0;
    for (int i = 2; i < argc; i++) { if (!strcmp(argv[i], "--far") && i + 1 < argc) farv = (float)atof(argv[++i]); else if (!strcmp(argv[i], "--planes")) showplanes = 1; }
    uint32_t vp = rd32(rd32(0x8C123C40u));
    SH4Ctx *c = &ctx; memset(c, 0, sizeof *c);
    c->fpscr = 0x00040001u; R(15) = 0x8CF00000u;
    uint32_t fb; memcpy(&fb, &farv, 4);
    R(4) = vp; c->fr[4] = fb; c->pr = 0x8C010000u; f_8c084a1a(c);
    if (showplanes) {
        printf("viewport %08x\n", vp);
        for (int i = 0; i < 5; i++) { uint32_t a = i == 0 ? 0x8C2E2500u : 0x8C2E24D0u + 12u * (uint32_t)(i - 1);
            printf("plane %d world normal (%.6f %.6f %.6f) vp d: ", i, rdf(a), rdf(a + 4), rdf(a + 8)); printf("\n"); }
        printf("origin vec @8c2e250c (%.5f %.5f %.5f)\n", rdf(0x8C2E250Cu), rdf(0x8C2E2510u), rdf(0x8C2E2514u));
        for (uint32_t o = 0x78; o <= 0xF0; o += 4) printf("vp+%02x %.6f\n", o, rdf(vp + o));
    }
    char line[512];
    while (fgets(line, sizeof line, stdin)) {
        float v[6]; if (sscanf(line, "%f %f %f %f %f %f", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]) != 6) continue;
        memcpy(sh4_ram + 0xF80000, v, 24);
        memset(c->r, 0, sizeof c->r); R(15) = 0x8CF00000u; R(4) = vp; R(5) = 0x8CF80000u; R(6) = 0x8CF8000Cu; R(7) = 0; c->pr = 0x8C010000u;
        f_8c084d00(c);
        printf("%u\n", c->r[0]);
    }
    return 0;
}
