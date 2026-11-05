/* ta_compare: kind-C comparison (docs/NATIVE_ENGINE.md sec. 4) of ONE oracle TA scene against the native static draw list.
 *   ta_compare CAPDIR DCDATA_DIR [--level Learn_10] [--scene N] [--tol PX] [--ztol REL] [-v]
 * CAPDIR comes from ta_capture (see ta.mk): f<N>/frame.bin = the TA vertex stream of scene N as parsed by hle/ta.c (x,y screen pixels, z = 1/w, u, v),
 * ram_<N>.bin = guest RAM at the end of that guest frame.
 *
 * Camera model (measured on Learn_10, guest frame 1500, 4:3 mode R2_WIDE=0; every constant below is tagged):
 *   world->screen is exactly   Zc = F . (X - C);  sx = 320 - fx * (L . (X - C)) / Zc;  sy = 240 - fy * (U . (X - C)) / Zc;  z_ta = 1 / (4 Zc)
 *   with X = native world position (raw engine axes, no extra matrix), and from guest RAM (static addresses in the global area, big-endian-free: SH-4 is LE):
 *     0x8C00F300 f32 hfov (full horizontal FOV, radians: 1.2)        0x8C00F304 f32 aspect (0.75: vfov = hfov * aspect)
 *     0x8C00F308 3xf32 U (camera "up" row)  0x8C00F314 3xf32 F (forward row)  0x8C00F320 3xf32 L (camera "left" row)   [3x3 orthonormal, row-major]
 *     0x8C00F394 3xf32 C (camera position)
 *   fx = 320 / tan(hfov/2), fy = 240 / tan(vfov/2).  VERIFIED = reproduces a RANSAC-free linear fit of 201 matched vertices to ~1e-3 px (see test run).
 *   INFERRED: the factor 4 in z_ta (measured |row0| = 4.0000 of the fitted w = 1/z plane), pixel centre (320,240), the semantics of 0x8C00F304,
 *   and that these addresses are the active camera in every level / mode (only Learn_10 checked).  UNKNOWN: which struct these fields belong to.
 * Matching never uses UVs: native triangle (projected with the RAM camera) <-> oracle triangle iff some vertex permutation agrees in x, y within --tol px
 * and in 1/w within --ztol relative.  UVs/texture are then compared on the matched pairs as an independent check.
 * Limits (reported, not hidden): only STATIC native triangles are projected (actors are an unposed pile in cpa_scene); native triangles with any vertex behind the
 * camera (Zc <= 0) are skipped (the game clips those, producing new vertices); the game's sector visibility/back-face culling is not modelled, so
 * native->oracle ("coverage") is informational only. The pass metric is oracle->native over oracle triangles that are static-UV candidates. */
#include "../../src/cpa/cpa_scene.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <dirent.h>
#include <ctype.h>

#define RAM_BASE 0x8C000000u
#define VA_HFOV 0x8C00F300u
#define VA_ASPECT 0x8C00F304u
#define VA_ROW_U 0x8C00F308u
#define VA_ROW_F 0x8C00F314u
#define VA_ROW_L 0x8C00F320u
#define VA_POS 0x8C00F394u

typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;      /* == TaVertex in hle/ta.h */
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { float sx[3], sy[3], w[3], u[3], v[3]; uint32_t item; uint32_t tri; int used; float cx; } PTri;
typedef struct { float sx[3], sy[3], z[3], u[3], v[3]; uint32_t tcw, tsp, list; int cand, matched; } OTri;
static const int perms[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };

static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - RAM_BASE), 4); return f; }
static int cmp_cx(const void *a, const void *b) { float x = ((const PTri *)a)->cx, y = ((const PTri *)b)->cx; return x < y ? -1 : x > y; }
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; long scene = -1, ramscene = -1; double tol = 0.1, ztol = 2e-3; int verbose = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) scene = atol(argv[++i]);
        else if (!strcmp(argv[i], "--ram") && i + 1 < argc) ramscene = atol(argv[++i]);     /* use ram_<N>.bin (default: same N as the scene) */
        else if (!strcmp(argv[i], "--tol") && i + 1 < argc) tol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--ztol") && i + 1 < argc) ztol = atof(argv[++i]);
        else if (!strcmp(argv[i], "-v")) verbose = 1;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--scene N] [--tol px] [--ztol rel] [-v]\n", argv[0]); return 2; }
    if (scene < 0) {                                                /* first f<N> scene directory in CAPDIR */
        DIR *d = opendir(capdir); struct dirent *e; long best = -1;
        while (d && (e = readdir(d))) { long n; if (sscanf(e->d_name, "f%ld", &n) == 1 && (best < 0 || n < best)) best = n; }
        if (d) closedir(d); scene = best;
    }
    if (scene < 0) { fprintf(stderr, "no f<N> scene in %s (run ta-capture)\n", capdir); return 2; }

    if (ramscene < 0) {                        /* measured (Jail_10): scene N is projected with the camera in RAM at the end of the previous guest frame, ram_<N-1> */
        char q[1100]; snprintf(q, sizeof q, "%s/ram_%ld.bin", capdir, scene - 1); FILE *t = fopen(q, "rb"); if (t) { fclose(t); ramscene = scene - 1; } else ramscene = scene;
    }
    char p[1100]; size_t n;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, ramscene); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) { fprintf(stderr, "bad %s\n", p); return 2; }
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) { fprintf(stderr, "cannot read %s\n", p); return 2; }
    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2];
    TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    if (16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) != fn) { fprintf(stderr, "frame.bin size mismatch\n"); return 2; }

    /* native scene */
    char fixp[1100], lvlp[1100]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata);
    char up[64]; snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c);
    snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN)) { fprintf(stderr, "cannot read %s / %s\n", fixp, lvlp); return 2; }
    if (!cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "scene load failed\n"); return 2; }

    /* camera from guest RAM */
    float hfov = rdf(ram, VA_HFOV), asp = rdf(ram, VA_ASPECT), U[3], F[3], L[3], C[3];
    for (int i = 0; i < 3; i++) { U[i] = rdf(ram, VA_ROW_U + 4 * i); F[i] = rdf(ram, VA_ROW_F + 4 * i); L[i] = rdf(ram, VA_ROW_L + 4 * i); C[i] = rdf(ram, VA_POS + 4 * i); }
    float Lram[3] = { L[0], L[1], L[2] };
    L[0] = U[1]*F[2] - U[2]*F[1]; L[1] = U[2]*F[0] - U[0]*F[2]; L[2] = U[0]*F[1] - U[1]*F[0];      /* L := U x F (measured to equal the f320 row when that row is valid, see header) */
    double fx = 320.0 / tan(hfov / 2.0), fy = 240.0 / tan(hfov * asp / 2.0);
    printf("scene %ld of %s/%s: oracle strips %u verts %u\n", scene, capdir, level, nstrip, nvert);
    printf("camera (guest RAM): hfov %.5f aspect %.5f -> fx %.4f fy %.4f | pos (%.4f %.4f %.4f)\n  U (%.5f %.5f %.5f) F (%.5f %.5f %.5f) L=UxF (%.5f %.5f %.5f); RAM row@F320 (%.5f %.5f %.5f)%s\n",
           hfov, asp, fx, fy, C[0], C[1], C[2], U[0], U[1], U[2], F[0], F[1], F[2], L[0], L[1], L[2], Lram[0], Lram[1], Lram[2],
           (fabsf(Lram[0]-L[0]) + fabsf(Lram[1]-L[1]) + fabsf(Lram[2]-L[2]) < 1e-3f) ? " [agrees]" : " [DISAGREES: row not valid in this snapshot]");
    if (!isfinite(hfov) || hfov < 0.1f || hfov > 3.0f || fabsf(F[0]*F[0] + F[1]*F[1] + F[2]*F[2] - 1.0f) > 1e-2f) { printf("RESULT: camera in RAM does not look like a camera; abort\n"); return 1; }

    /* project native static triangles */
    uint32_t nt = sc.nVerts / 3; PTri *pt = calloc(nt, sizeof *pt); uint32_t *natTex = calloc(nt, 4); uint8_t *natStatic = calloc(nt, 1), *natBehind = calloc(nt, 1); uint32_t npt = 0, nStatic = 0, nBehind = 0;
    for (uint32_t it = 0; it < sc.nItems; it++) {
        const CpaDrawItem *d = &sc.items[it]; if (d->isActor) continue;
        for (uint32_t k = 0; k + 2 < d->vertCount + 0u; k += 3) {
            uint32_t t = d->firstVert / 3 + k / 3; nStatic++; natTex[t] = d->texVa; natStatic[t] = 1; PTri q; memset(&q, 0, sizeof q); int ok = 1;
            for (int j = 0; j < 3; j++) {
                const float *P = &sc.pos[(t * 3 + j) * 3]; double r[3] = { P[0] - C[0], P[1] - C[1], P[2] - C[2] };
                double zc = F[0]*r[0] + F[1]*r[1] + F[2]*r[2];
                if (zc <= 1e-4) { ok = 0; break; }
                q.sx[j] = (float)(320.0 - fx * (L[0]*r[0] + L[1]*r[1] + L[2]*r[2]) / zc);
                q.sy[j] = (float)(240.0 - fy * (U[0]*r[0] + U[1]*r[1] + U[2]*r[2]) / zc);
                q.w[j] = (float)(1.0 / (4.0 * zc)); q.u[j] = sc.uv[(t * 3 + j) * 2]; q.v[j] = sc.uv[(t * 3 + j) * 2 + 1];
            }
            if (!ok) { nBehind++; natBehind[t] = 1; continue; }
            q.item = it; q.tri = t; q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; pt[npt++] = q;
        }
    }
    qsort(pt, npt, sizeof *pt, cmp_cx);
    printf("native static triangles %u: projected %u, skipped (vertex behind camera) %u\n", nStatic, npt, nBehind);

    /* oracle triangles (non-sprite strips; strip of n verts gives n-2 triangles) */
    OTri *ot = calloc(nvert + 1, sizeof *ot); uint32_t no = 0, nspr = 0, nsprV = 0;
    for (uint32_t i = 0; i < nstrip; i++) {
        const TaS *s = &strips[i]; if (s->sprite) { nspr++; nsprV += s->count; continue; }
        for (uint32_t k = 0; k + 2 < s->count; k++) {
            OTri *o = &ot[no++]; for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; o->sx[j] = v->x; o->sy[j] = v->y; o->z[j] = v->z; o->u[j] = v->u; o->v[j] = v->v; }
            o->tcw = s->tcw; o->tsp = s->tsp; o->list = s->list;
        }
    }
    /* UV classification: does any native static / actor-pile triangle have the identical UV triple (any rotation/flip)? independent of the geometry match */
    uint32_t nCandStatic = 0, nCandActor = 0, nCandNone = 0;
    {
        uint8_t *isact = calloc(nt, 1);
        for (uint32_t it = 0; it < sc.nItems; it++) for (uint32_t k = 0; k < sc.items[it].vertCount / 3; k++) isact[sc.items[it].firstVert / 3 + k] = sc.items[it].isActor;
        for (uint32_t a = 0; a < no; a++) {
            int cs = 0, ca = 0;
            for (uint32_t t = 0; t < nt && !cs; t++) {
                const float *uv = sc.uv + t * 6; int hit = 0;
                for (int pi = 0; pi < 6 && !hit; pi++) { int ok = 1; for (int j = 0; j < 3; j++) { int q = perms[pi][j]; if (fabsf(uv[q*2] - ot[a].u[j]) > 1e-3f || fabsf(uv[q*2+1] - ot[a].v[j]) > 1e-3f) { ok = 0; break; } } hit = ok; }
                if (hit) { if (isact[t]) ca = 1; else cs = 1; }
            }
            ot[a].cand = cs ? 2 : (ca ? 1 : 0); nCandStatic += cs; nCandActor += (!cs && ca); nCandNone += (!cs && !ca);
        }
        free(isact);
    }

    /* match: oracle -> native by screen geometry only */
    uint32_t matched = 0, matchedCand[3] = { 0, 0, 0 }, totCand[3] = { 0, 0, 0 }, uvAgree = 0, uvDis = 0; double maxErr = 0, sumErr = 0;
    uint32_t listMatched[8] = { 0 }; uint32_t texPair = 0, texConsistent = 0;
    struct { uint32_t va, tcw; } texmap[512]; int ntexmap = 0; int texInconsistent = 0;
    int xtab[5][8]; memset(xtab, 0, sizeof xtab);
    for (uint32_t a = 0; a < no; a++) {
        totCand[ot[a].cand]++;
        float ocx = (ot[a].sx[0] + ot[a].sx[1] + ot[a].sx[2]) / 3.0f; int hitIdx = -1, hitPerm = 0; double hitErr = 0;
        /* lower bound in cx */
        uint32_t lo = 0, hi = npt; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (pt[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
        for (uint32_t m = lo; m < npt && pt[m].cx <= ocx + (float)tol + 1e-3f; m++) {
            if (pt[m].used) continue;
            for (int pi = 0; pi < 6; pi++) {
                double e = 0; int ok = 1;
                for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j];
                    double dx = fabs(pt[m].sx[q] - ot[a].sx[j]), dy = fabs(pt[m].sy[q] - ot[a].sy[j]);
                    double dz = fabs(pt[m].w[q] - ot[a].z[j]) / (fabs(ot[a].z[j]) + 1e-9);
                    if (dx > tol || dy > tol || dz > ztol) ok = 0; else { double ee = dx > dy ? dx : dy; if (ee > e) e = ee; } }
                if (ok) { hitIdx = (int)m; hitPerm = pi; hitErr = e; break; }
            }
            if (hitIdx >= 0) break;
        }
        if (hitIdx < 0) continue;
        pt[hitIdx].used = 1; ot[a].matched = 1; matched++; matchedCand[ot[a].cand]++; sumErr += hitErr; if (hitErr > maxErr) maxErr = hitErr; if (ot[a].list < 8) listMatched[ot[a].list]++;
        int uvok = 1; for (int j = 0; j < 3; j++) { int q = perms[hitPerm][j]; if (fabsf(pt[hitIdx].u[q] - ot[a].u[j]) > 1e-3f || fabsf(pt[hitIdx].v[q] - ot[a].v[j]) > 1e-3f) uvok = 0; }
        uvok ? uvAgree++ : uvDis++;
        const CpaDrawItem *d = &sc.items[pt[hitIdx].item]; texPair++;
        int f = -1; for (int i = 0; i < ntexmap; i++) if (texmap[i].va == d->texVa) { f = i; break; }
        if (f < 0 && ntexmap < 512) { texmap[ntexmap].va = d->texVa; texmap[ntexmap].tcw = ot[a].tcw; ntexmap++; texConsistent++; }
        else if (f >= 0) { if (texmap[f].tcw == ot[a].tcw) texConsistent++; else texInconsistent++; }
        if (ot[a].list < 5) xtab[d->alphaClass + 1][ot[a].list]++;
        if (verbose) printf("  oracle tri %u list %u -> native tri %u item %u perm %d err %.4f px uv %s\n", a, ot[a].list, pt[hitIdx].tri, pt[hitIdx].item, hitPerm, hitErr, uvok ? "same" : "DIFF");
    }
    /* Static-triangle denominator. An oracle triangle counts as "static" if it was matched by geometry, OR it is unmatched but has a native static triangle with
     * identical UVs whose texture struct is already known (from the matched pairs above) to be the oracle triangle's texture (tcw). This keeps coincidental
     * UV patterns of actor/HUD triangles out of the denominator. Unmatched ones are then explained: native candidate behind the camera (the game clips it and
     * emits new vertices) or a genuine mismatch. Triangles whose native texture never appeared in a matched pair cannot be verified and are reported apart. */
    uint32_t unmClip = 0, unmBad = 0, unverif = 0, unverifCoinc = 0;
    for (uint32_t a = 0; a < no; a++) {
        if (ot[a].matched) continue;
        int clip = 0, bad = 0, unv = 0; uint32_t unvT = 0;
        for (uint32_t t = 0; t < nt; t++) {
            if (!natStatic[t]) continue;
            const float *uv = sc.uv + t * 6; int hit = 0;
            for (int pi = 0; pi < 6 && !hit; pi++) { int ok = 1; for (int j = 0; j < 3; j++) { int q = perms[pi][j]; if (fabsf(uv[q*2] - ot[a].u[j]) > 1e-3f || fabsf(uv[q*2+1] - ot[a].v[j]) > 1e-3f) { ok = 0; break; } } hit = ok; }
            if (!hit) continue;
            int f = -1; for (int i = 0; i < ntexmap; i++) if (texmap[i].va == natTex[t]) { f = i; break; }
            if (f < 0) { if (!unv) unvT = t; unv = 1; continue; }
            if (texmap[f].tcw != ot[a].tcw) continue;
            if (natBehind[t]) clip = 1; else bad = 1;
        }
        if (clip) unmClip++;
        else if (bad) { unmBad++; if (verbose) printf("  UNMATCHED static-like oracle tri %u (list %u) first vertex (%.2f %.2f z %.5f)\n", a, ot[a].list, ot[a].sx[0], ot[a].sy[0], ot[a].z[0]); }
        else if (unv) {
            int bound = 0; for (int i = 0; i < ntexmap; i++) if (texmap[i].tcw == ot[a].tcw) bound = 1;
            if (bound) unverifCoinc++; else unverif++;       /* bound: the oracle texture is already the image of a different native texture => the UV match is a coincidence */
            if (verbose && !bound) {
                double bestd = 1e30; int found = 0;       /* distance of the oracle tri to the native candidate's projection (best vertex permutation) */
                for (uint32_t m = 0; m < npt; m++) if (pt[m].tri == unvT) { found = 1; for (int pi = 0; pi < 6; pi++) { double e = 0; for (int j = 0; j < 3; j++) { int q = perms[pi][j]; double dx = fabs(pt[m].sx[q] - ot[a].sx[j]), dy = fabs(pt[m].sy[q] - ot[a].sy[j]); if (dx > e) e = dx; if (dy > e) e = dy; } if (e < bestd) bestd = e; } }
                printf("  UNVERIFIABLE oracle tri %u list %u tcw %08x first vertex (%.2f %.2f z %.5f): native cand tri %u %s, best perm max err %.2f px\n", a, ot[a].list, ot[a].tcw, ot[a].sx[0], ot[a].sy[0], ot[a].z[0], unvT, found ? "projected" : "behind camera", found ? bestd : -1.0);
            }
        }
    }
    uint32_t staticTotal = matched + unmClip + unmBad;
    uint32_t natVisible = 0; for (uint32_t m = 0; m < npt; m++) { int inside = 0; for (int j = 0; j < 3; j++) if (pt[m].sx[j] >= 0 && pt[m].sx[j] < 640 && pt[m].sy[j] >= 0 && pt[m].sy[j] < 480) inside = 1; natVisible += inside; }

    printf("\noracle: %u triangles (+ %u sprite strips / %u verts not compared)\n", no, nspr, nsprV);
    printf("  UV classification (geometry independent): static-UV-candidate %u | only actor-pile-UV %u | no native UV match %u\n", nCandStatic, nCandActor, nCandNone);
    printf("match tolerance: %.3f px in x,y and %.1e relative in 1/w, any vertex permutation, one-to-one\n", tol, ztol);
    printf("matched oracle triangles: %u / %u (all)            = %.2f%%\n", matched, no, no ? 100.0 * matched / no : 0.0);
    printf("  of static-UV candidates: %u / %u               = %.2f%%   (UV-coincidence denominator; the static count below is the metric)\n", matchedCand[2], totCand[2], totCand[2] ? 100.0 * matchedCand[2] / totCand[2] : 0.0);
    printf("  of actor-only-UV tris  : %u / %u (actors are unposed in cpa_scene: expected ~0)\n", matchedCand[1], totCand[1]);
    printf("  of no-UV-match tris    : %u / %u (HUD, particles, shadows, clip-generated)\n", matchedCand[0], totCand[0]);
    printf("  match error: mean %.5f px, max %.5f px (x,y); matched by list: opaque %u, op-mod %u, translucent %u, tr-mod %u, punch %u\n", matched ? sumErr / matched : 0, maxErr, listMatched[0], listMatched[1], listMatched[2], listMatched[3], listMatched[4]);
    printf("  on matched pairs: UV identical %u, UV different %u (UV is not used to match)\n", uvAgree, uvDis);
    printf("  texture identity: native texture struct -> oracle tcw consistent %u of %u pairs (%d distinct native textures, %d inconsistent)\n", texConsistent, texPair, ntexmap, texInconsistent);
    printf("  material class (INFERRED alphaClass vs TA list) on matched pairs [rows alphaClass unknown/opaque/cutout/blend/additive; cols opaque,op-mod,translucent,tr-mod,punch]:\n");
    { const char *rn[5] = { "unknown", "opaque", "cutout", "blend", "additive" }; for (int r = 0; r < 5; r++) printf("    %-8s %4d %4d %4d %4d %4d\n", rn[r], xtab[r][0], xtab[r][1], xtab[r][2], xtab[r][3], xtab[r][4]); }
    printf("\nstatic oracle triangles (matched + unmatched-with-known-static-texture+UV): %u\n", staticTotal);
    printf("  matched %u | unmatched, native candidate behind camera (game clips) %u | unmatched, native candidate projected elsewhere (MISMATCH) %u | unmatched UV coincidences (oracle texture bound to another native texture) %u | unmatched, texture UNVERIFIABLE (oracle texture unbound) %u\n", matched, unmClip, unmBad, unverifCoinc, unverif);
    printf("  match rate over static oracle triangles: %u / %u = %.2f%%;  excluding clip-affected: %u / %u = %.2f%%\n", matched, staticTotal, staticTotal ? 100.0 * matched / staticTotal : 0.0, matched, matched + unmBad, matched + unmBad ? 100.0 * matched / (matched + unmBad) : 0.0);
    printf("native->oracle (informational; game sector culling / backface culling not modelled): static tris with a vertex on screen %u, of which matched %u\n", natVisible, matched);
    printf("\nRESULT: scene %ld tol %.3f px: %u/%u static oracle triangles matched (%.2f%%); %u of all %u oracle triangles (rest: actors/HUD/clip-generated). One scene, one level: N1 (>=99.5%%, 3 levels) is NOT met by this alone.\n",
           scene, tol, matched, staticTotal, staticTotal ? 100.0 * matched / staticTotal : 0.0, matched, no);
    cpa_scene_free(&sc); free(pt); free(ot); free(fb); free(ram); free(fix); free(lvl);
    return 0;
}
