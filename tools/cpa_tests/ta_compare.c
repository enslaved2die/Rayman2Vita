/* ta_compare: kind-C comparison (docs/NATIVE_ENGINE.md sec. 4) of ONE oracle TA scene against the native static draw list.
 *   ta_compare CAPDIR DCDATA_DIR [--level Learn_10] [--scene N | --all] [--tol PX] [--ztol REL] [-v]
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
 * Limits (reported, not hidden): only STATIC native triangles are projected (actors are an unposed pile in cpa_scene); native triangles with any vertex nearer than the near plane
 * (Zc < NEAR_ZC = 0.25, measured) are not projected (the game clips those, producing new vertices on the plane); unmatched oracle triangles are then tested as clip fragments (see below); the game's sector visibility/back-face culling is not modelled, so
 * native->oracle ("coverage") is informational only. The pass metric is oracle->native over oracle triangles that are static-UV candidates. */
#include "../../src/cpa/cpa_scene.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <dirent.h>
#include <ctype.h>

typedef struct { int ok; uint32_t texUnexplActor; uint32_t cull[10]; uint32_t staticTotal, matched, frag, unmBad, unmClip, unverif, sub, subExpl, copOther, copOtherExpl, redraw, redrawSame, oracleTris, texUnexpl, texBoundTotal, vNative, vNear, vOther; double maxErr;
    uint32_t l2Pair[4][6], l2RdExpl, l2RdUnpred, l2FragDis, l2Both, l2Only8, l2Only1, l2Mode0Multi, l2NatMode[4], sprTotal, sprFront, sprMatched, sprOracleTris; } Stats;

#define RAM_BASE 0x8C000000u
#define VA_HFOV 0x8C00F300u
#define VA_ASPECT 0x8C00F304u
#define VA_ROW_U 0x8C00F308u
#define VA_ROW_F 0x8C00F314u
#define VA_ROW_L 0x8C00F320u
#define VA_POS 0x8C00F394u
/* Near plane: Zc = 0.25 (z_ta = 1.0). Measured over 7 levels / 50+ scenes: the smallest Zc of every oracle vertex of a near-clip fragment is exactly 0.2500 and the smallest Zc of any
 * unclipped matched vertex is 0.6457 (never between). Not read from game code; INFERRED from the TA stream. */
#define NEAR_ZC 0.25

typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;      /* == TaVertex in hle/ta.h */
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { float sx[3], sy[3], w[3], u[3], v[3]; uint32_t item; uint32_t tri; int used; int by; float cx; } PTri;
typedef struct { float sx[3], sy[3], z[3], u[3], v[3]; uint32_t tcw, tsp, list; int cand, matched, frag, nw, redraw, redrawSame; uint32_t copT1, fragT1; int copKind, subexp, ambig; uint32_t ctl; int strip, rdm, l2n, spr; } OTri;
static const int perms[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };

/* UV scale class of an oracle draw relative to the native polygon it is paired with (vertex mapping from the geometry permutation pi):
 * 1 = oracle UV == native UV, 8 = oracle UV == CPA_OVERLAY_UV_SCALE * native UV, 7 = (K*u, K*(1-v)) (V-flipped layer, measured for overlayMode 3),
 * 9 = 1 and 8 both fit (all UVs ~0, undecidable), 6 = pure translation (same offset on all three vertices: scrolled UVs, only tested when none of the above fits), 0 = none of them. */
static int uv_scale_class(const PTri *p, int pi, const OTri *o) {
    int f1 = 1, f8 = 1, f7 = 1;
    for (int j = 0; j < 3; j++) { int q = perms[pi][j]; double nu = p->u[q], nv = p->v[q], K = CPA_OVERLAY_UV_SCALE;
        if (fabs(o->u[j] - nu) > 1e-3 + 1e-5 * fabs(nu) || fabs(o->v[j] - nv) > 1e-3 + 1e-5 * fabs(nv)) f1 = 0;
        if (fabs(o->u[j] - K * nu) > 1e-3 + 1e-4 * fabs(K * nu) || fabs(o->v[j] - K * nv) > 1e-3 + 1e-4 * fabs(K * nv)) f8 = 0;
        if (fabs(o->u[j] - K * nu) > 1e-3 + 1e-4 * fabs(K * nu) || fabs(o->v[j] - K * (1.0 - nv)) > 1e-3 + 1e-4 * fabs(K * (1.0 - nv))) f7 = 0; }
    if (!f1 && !f8 && !f7) { int tr = 1; double du = o->u[0] - p->u[perms[pi][0]], dv = o->v[0] - p->v[perms[pi][0]];
        for (int j = 1; j < 3; j++) { int q = perms[pi][j]; if (fabs((o->u[j] - p->u[q]) - du) > 1e-3 || fabs((o->v[j] - p->v[q]) - dv) > 1e-3) tr = 0; }
        if (tr) return 6; }
    return f1 && f8 ? 9 : f1 ? 1 : f8 ? 8 : f7 ? 7 : 0;
}
static int geom_perm(const PTri *p, const OTri *o, double tol, double ztol) {
    for (int pi = 0; pi < 6; pi++) { int ok = 1;
        for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j];
            if (fabs(p->sx[q] - o->sx[j]) > tol || fabs(p->sy[q] - o->sy[j]) > tol || fabs(p->w[q] - o->z[j]) / (fabs(o->z[j]) + 1e-9) > ztol) ok = 0; }
        if (ok) return pi; }
    return -1;
}
static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - RAM_BASE), 4); return f; }
static int cmp_cx(const void *a, const void *b) { float x = ((const PTri *)a)->cx, y = ((const PTri *)b)->cx; return x < y ? -1 : x > y; }
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}


/* Polygon helpers for the subdivision-area test: clip a camera-space triangle at the near plane, project, clip to the 640x480 viewport, return the area in px^2. */
typedef struct { double x, y; } P2;
static double poly_area(const P2 *p, int n) { double a = 0; for (int i = 0; i < n; i++) { int j = (i + 1) % n; a += p[i].x * p[j].y - p[j].x * p[i].y; } return fabs(a) * 0.5; }
static int clip_edge(const P2 *in, int n, P2 *out, int axis, double lim, int keepGreater) {
    int m = 0;
    for (int i = 0; i < n; i++) {
        P2 a = in[i], b = in[(i + 1) % n]; double va = axis ? a.y : a.x, vb = axis ? b.y : b.x;
        int ia = keepGreater ? va >= lim : va <= lim, ib = keepGreater ? vb >= lim : vb <= lim;
        if (ia) out[m++] = a;
        if (ia != ib) { double t = (lim - va) / (vb - va); P2 q = { a.x + t * (b.x - a.x), a.y + t * (b.y - a.y) }; out[m++] = q; }
    }
    return m;
}
static double native_screen_area(const double A[3][3], const double F[3], const double L[3], const double U[3], double fx, double fy) {
    double cam[8][3]; int nc = 0;
    double z[3]; double lx[3], uy[3];
    for (int j = 0; j < 3; j++) { z[j] = F[0]*A[j][0] + F[1]*A[j][1] + F[2]*A[j][2]; lx[j] = L[0]*A[j][0] + L[1]*A[j][1] + L[2]*A[j][2]; uy[j] = U[0]*A[j][0] + U[1]*A[j][1] + U[2]*A[j][2]; }
    for (int j = 0; j < 3; j++) {
        int k = (j + 1) % 3; int ij = z[j] >= NEAR_ZC, ik = z[k] >= NEAR_ZC;
        if (ij) { cam[nc][0] = lx[j]; cam[nc][1] = uy[j]; cam[nc][2] = z[j]; nc++; }
        if (ij != ik) { double t = (NEAR_ZC - z[j]) / (z[k] - z[j]); cam[nc][0] = lx[j] + t * (lx[k] - lx[j]); cam[nc][1] = uy[j] + t * (uy[k] - uy[j]); cam[nc][2] = NEAR_ZC; nc++; }
    }
    if (nc < 3) return 0;
    P2 a[16], b[16]; int n = nc;
    for (int i = 0; i < nc; i++) { a[i].x = 320.0 - fx * cam[i][0] / cam[i][2]; a[i].y = 240.0 - fy * cam[i][1] / cam[i][2]; }
    n = clip_edge(a, n, b, 0, 0.0, 1);   if (n < 3) return 0;
    n = clip_edge(b, n, a, 0, 640.0, 0); if (n < 3) return 0;
    n = clip_edge(a, n, b, 1, 0.0, 1);   if (n < 3) return 0;
    n = clip_edge(b, n, a, 1, 480.0, 0); if (n < 3) return 0;
    return poly_area(a, n);
}

/* ---- Provenance (tooling only; mirrors the walk in src/cpa/cpa_scene.c so the library is unchanged): which IPO SuperObject and which sector SuperObject a static native vertex came from.
 * The world position of every vertex of every IPO geometry is computed with the loader's exact float arithmetic (same matrix chain, same xform), so a native triangle's three world
 * positions are found bit-for-bit in the table. Triangles whose vertices are not all from one IPO (shared coordinates between IPOs) get ipo = 0 (unknown). */
typedef struct { float m[16]; } PMat;
typedef struct { uint32_t k[3], ipo, sector; } PV;
typedef struct { PV *a; uint32_t n, cap, nIpo, nSector, nodes; } PVTab;
static int pm_read(const CpaImage *im, uint32_t va, PMat *r) { uint32_t t; if (!cpa_rd32(im, va, &t) || t < 1 || t > 6) return 0; for (int i = 0; i < 16; i++) if (!cpa_rdf(im, va + 0x28 + 4u * i, &r->m[i])) return 0; return 1; }
static void pm_mul(const PMat *a, const PMat *b, PMat *r) { PMat t; for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) { float s = 0; for (int k = 0; k < 4; k++) s += a->m[i*4+k] * b->m[k*4+j]; t.m[i*4+j] = s; } *r = t; }
static void pm_xf(const PMat *m, const float v[3], float o[3]) { for (int j = 0; j < 3; j++) o[j] = v[0] * m->m[j] + v[1] * m->m[4+j] + v[2] * m->m[8+j] + m->m[12+j]; }
static int pv_cmp(const void *a, const void *b) { const PV *x = a, *y = b; for (int i = 0; i < 3; i++) if (x->k[i] != y->k[i]) return x->k[i] < y->k[i] ? -1 : 1; return 0; }
static void prov_walk(const CpaImage *im, uint32_t va, const PMat *pg, uint32_t sector, int depth, PVTab *T) {
    uint32_t w[18]; if (depth > 32 || T->nodes++ > 100000) return;
    for (int i = 0; i < 18; i++) if (!cpa_rd32(im, va + 4u * i, &w[i])) return;
    PMat loc, glob, chain, world; int hl = cpa_is_ptr(im, w[8]) && pm_read(im, w[8], &loc), hg = cpa_is_ptr(im, w[9]) && pm_read(im, w[9], &glob);
    if (hl) pm_mul(&loc, pg, &chain); else chain = *pg;
    world = hg ? glob : chain;
    if (w[0] == CPA_SO_SECTOR) sector = ++T->nSector;
    if (w[0] == CPA_SO_IPO) {
        uint32_t po, vs, geo, pv, cnt;
        if (cpa_is_ptr(im, w[1]) && cpa_rd32(im, w[1], &po) && cpa_is_ptr(im, po) && cpa_rd32(im, po, &vs) && cpa_is_ptr(im, vs) && cpa_rd32(im, vs + 4, &geo) && cpa_is_ptr(im, geo) &&
            cpa_rd32(im, geo, &pv) && cpa_rd32(im, geo + 0x2C, &cnt) && (cnt & 0xFFFF) && (cnt & 0xFFFF) <= 20000 && cpa_is_ptr(im, pv)) {
            uint32_t nv = cnt & 0xFFFF, id = ++T->nIpo;
            for (uint32_t i = 0; i < nv; i++) {
                float v[3], o[3]; int ok = 1; for (int k = 0; k < 3; k++) ok &= cpa_rdf(im, pv + i * 12 + k * 4, &v[k]); if (!ok) continue;
                pm_xf(&world, v, o);
                if (T->n == T->cap) { T->cap = T->cap ? T->cap * 2 : 4096; T->a = realloc(T->a, T->cap * sizeof *T->a); }
                PV *e = &T->a[T->n++]; memcpy(e->k, o, 12); e->ipo = id; e->sector = sector;
            }
        }
    }
    uint32_t ch = w[2], n = 0;
    while (ch && n++ < 100000) { uint32_t nx; if (!cpa_rd32(im, ch + 0x14, &nx)) break; prov_walk(im, ch, &world, sector, depth + 1, T); ch = nx; }
}
/* ipo/sector ids of native triangle t (all three vertices must be found in ONE IPO; sector then follows); 0 = unknown */
static void prov_find(const PVTab *T, const float *P9, uint32_t *ipo, uint32_t *sector) {
    uint32_t cand[16]; int nc = 0; PV key; *ipo = *sector = 0;
    memcpy(key.k, P9, 12);
    uint32_t lo = 0, hi = T->n; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (pv_cmp(&T->a[m], &key) < 0) lo = m + 1; else hi = m; }
    for (uint32_t m = lo; m < T->n && !pv_cmp(&T->a[m], &key) && nc < 16; m++) cand[nc++] = m;
    for (int c = 0; c < nc; c++) {
        int all = 1;
        for (int v = 1; v < 3 && all; v++) { PV k2; memcpy(k2.k, P9 + 3 * v, 12); uint32_t l2 = 0, h2 = T->n; while (l2 < h2) { uint32_t m = (l2 + h2) / 2; if (pv_cmp(&T->a[m], &k2) < 0) l2 = m + 1; else h2 = m; }
            int f = 0; for (uint32_t m = l2; m < T->n && !pv_cmp(&T->a[m], &k2); m++) if (T->a[m].ipo == T->a[cand[c]].ipo) { f = 1; break; } all = f; }
        if (all) { *ipo = T->a[cand[c]].ipo; *sector = T->a[cand[c]].sector; return; }
    }
}

static int do_scene(const CpaScene *scp, const char *capdir, const char *level, long scene, long ramscene, double tol, double ztol, int verbose, Stats *st) {
    CpaScene sc = *scp; char p[1100]; size_t n;
    if (ramscene < 0) {                        /* measured (Jail_10): scene N is projected with the camera in RAM at the end of the previous guest frame, ram_<N-1> */
        char q[1100]; snprintf(q, sizeof q, "%s/ram_%ld.bin", capdir, scene - 1); FILE *t = fopen(q, "rb"); if (t) { fclose(t); ramscene = scene - 1; } else ramscene = scene;
    }
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, ramscene); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) { fprintf(stderr, "bad %s\n", p); return 2; }
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) { fprintf(stderr, "cannot read %s\n", p); return 2; }
    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2];
    TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    if (16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) != fn) { fprintf(stderr, "frame.bin size mismatch\n"); return 2; }

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
    uint32_t nt = sc.nVerts / 3; PTri *pt = calloc(nt, sizeof *pt); uint32_t *natTex = calloc(nt, 4); uint8_t *natStatic = calloc(nt, 1), *natBehind = calloc(nt, 1), *natOv = calloc(nt ? nt : 1, 1); uint32_t npt = 0, nStatic = 0, nBehind = 0;
    for (uint32_t it = 0; it < sc.nItems; it++) {
        const CpaDrawItem *d = &sc.items[it]; if (d->isActor) continue;
        for (uint32_t k = 0; k + 2 < d->vertCount + 0u; k += 3) {
            uint32_t t = d->firstVert / 3 + k / 3; nStatic++; natTex[t] = d->texVa; natStatic[t] = 1; natOv[t] = d->overlayMode; PTri q; memset(&q, 0, sizeof q); int ok = 1;
            for (int j = 0; j < 3; j++) {
                const float *P = &sc.pos[(t * 3 + j) * 3]; double r[3] = { P[0] - C[0], P[1] - C[1], P[2] - C[2] };
                double zc = F[0]*r[0] + F[1]*r[1] + F[2]*r[2];
                if (zc < NEAR_ZC) { ok = 0; break; }
                q.sx[j] = (float)(320.0 - fx * (L[0]*r[0] + L[1]*r[1] + L[2]*r[2]) / zc);
                q.sy[j] = (float)(240.0 - fy * (U[0]*r[0] + U[1]*r[1] + U[2]*r[2]) / zc);
                q.w[j] = (float)(1.0 / (4.0 * zc)); q.u[j] = sc.uv[(t * 3 + j) * 2]; q.v[j] = sc.uv[(t * 3 + j) * 2 + 1];
            }
            if (!ok) { nBehind++; natBehind[t] = 1; continue; }
            q.item = it; q.tri = t; q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; pt[npt++] = q;
        }
    }
    qsort(pt, npt, sizeof *pt, cmp_cx);
    printf("native static triangles %u: projected %u, skipped (a vertex nearer than the near plane Zc<0.25, clipped by the game) %u\n", nStatic, npt, nBehind);

    /* oracle triangles (non-sprite strips; strip of n verts gives n-2 triangles) */
    OTri *ot = calloc(nvert + 1, sizeof *ot); uint32_t no = 0, nspr = 0, nsprV = 0;
    for (uint32_t i = 0; i < nstrip; i++) {
        const TaS *s = &strips[i]; if (s->sprite) { nspr++; nsprV += s->count; continue; }
        for (uint32_t k = 0; k + 2 < s->count; k++) {
            OTri *o = &ot[no++]; for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; o->sx[j] = v->x; o->sy[j] = v->y; o->z[j] = v->z; o->u[j] = v->u; o->v[j] = v->v; }
            o->tcw = s->tcw; o->tsp = s->tsp; o->list = s->list; o->ctl = s->ctl; o->strip = (int)i;
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
        pt[hitIdx].used = 1; pt[hitIdx].by = (int)a; ot[a].matched = 1; ot[a].nw = ((pt[hitIdx].sx[1]-pt[hitIdx].sx[0])*(pt[hitIdx].sy[2]-pt[hitIdx].sy[0]) - (pt[hitIdx].sx[2]-pt[hitIdx].sx[0])*(pt[hitIdx].sy[1]-pt[hitIdx].sy[0])) < 0; matched++; matchedCand[ot[a].cand]++; sumErr += hitErr; if (hitErr > maxErr) maxErr = hitErr; if (ot[a].list < 8) listMatched[ot[a].list]++;
        int uvok = 1; for (int j = 0; j < 3; j++) { int q = perms[hitPerm][j]; if (fabsf(pt[hitIdx].u[q] - ot[a].u[j]) > 1e-3f || fabsf(pt[hitIdx].v[q] - ot[a].v[j]) > 1e-3f) uvok = 0; }
        uvok ? uvAgree++ : uvDis++;
        const CpaDrawItem *d = &sc.items[pt[hitIdx].item]; texPair++;
        int f = -1; for (int i = 0; i < ntexmap; i++) if (texmap[i].va == d->texVa) { f = i; break; }
        if (f < 0 && ntexmap < 512) { texmap[ntexmap].va = d->texVa; texmap[ntexmap].tcw = ot[a].tcw; ntexmap++; texConsistent++; }
        else if (f >= 0) { if (texmap[f].tcw == ot[a].tcw) texConsistent++; else texInconsistent++; }
        if (ot[a].list < 5) xtab[d->alphaClass + 1][ot[a].list]++;
        if (verbose) printf("  oracle tri %u list %u -> native tri %u item %u perm %d err %.4f px uv %s\n", a, ot[a].list, pt[hitIdx].tri, pt[hitIdx].item, hitPerm, hitErr, uvok ? "same" : "DIFF");
    }
    /* Re-draw model (geometry only, UV independent): an unmatched oracle triangle whose screen/depth geometry equals a native static triangle that is ALREADY paired with another
     * oracle triangle is a second draw of the same static polygon (multi-pass / second texture layer / translucent overlay). Counted as explained geometry; the UV scale and whether the
     * texture (tcw) is the same as the first draw are reported so the claim is checkable. */
    uint32_t nRedraw = 0, nRedrawSameTcw = 0, redrawList[8] = { 0 }, redrawTcw[256]; int nRedrawTcw = 0;
    uint8_t *natRedr = calloc(nt ? nt : 1, 1);   /* research: native triangle has at least one exact re-draw */
    for (uint32_t a = 0; a < no; a++) {
        if (ot[a].matched) continue;
        float ocx = (ot[a].sx[0] + ot[a].sx[1] + ot[a].sx[2]) / 3.0f; int hit = -1;
        uint32_t lo = 0, hi = npt; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (pt[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
        for (uint32_t m = lo; m < npt && pt[m].cx <= ocx + (float)tol + 1e-3f && hit < 0; m++) {
            if (!pt[m].used) continue;
            for (int pi = 0; pi < 6 && hit < 0; pi++) { int ok = 1;
                for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j];
                    if (fabs(pt[m].sx[q] - ot[a].sx[j]) > tol || fabs(pt[m].sy[q] - ot[a].sy[j]) > tol || fabs(pt[m].w[q] - ot[a].z[j]) / (fabs(ot[a].z[j]) + 1e-9) > ztol) ok = 0; }
                if (ok) hit = (int)m; }
        }
        if (hit < 0) continue;
        { int k = 0; while (k < nRedrawTcw && redrawTcw[k] != ot[a].tcw) k++; if (k == nRedrawTcw && nRedrawTcw < 256) redrawTcw[nRedrawTcw++] = ot[a].tcw; }
        natRedr[pt[hit].tri]++; ot[a].rdm = hit + 1; ot[a].redraw = 1; ot[a].redrawSame = (ot[pt[hit].by].tcw == ot[a].tcw); nRedraw++; nRedrawSameTcw += ot[a].redrawSame; if (ot[a].list < 8) redrawList[ot[a].list]++;
        if (verbose) printf("  REDRAW oracle tri %u (list %u tcw %08x) = static native tri %u already paired with oracle tri %d (list %u tcw %08x)\n", a, ot[a].list, ot[a].tcw, pt[hit].tri, pt[hit].by, ot[pt[hit].by].list, ot[pt[hit].by].tcw);
        if (verbose) { float mo = 0, mn = 0; for (int j = 0; j < 3; j++) { float a1 = fabsf(ot[a].u[j]) > fabsf(ot[a].v[j]) ? fabsf(ot[a].u[j]) : fabsf(ot[a].v[j]), b1 = fabsf(ot[pt[hit].by].u[j]) > fabsf(ot[pt[hit].by].v[j]) ? fabsf(ot[pt[hit].by].u[j]) : fabsf(ot[pt[hit].by].v[j]); if (a1 > mo) mo = a1; if (b1 > mn) mn = b1; } printf("    max |uv|: redraw %.3f, first draw %.3f; tile bits tsp redraw %08x first %08x\n", mo, mn, ot[a].tsp, ot[pt[hit].by].tsp); }
    }
    /* ---- Second texture layer, native-data model (VisualMaterial+0x149 = CpaDrawItem.overlayMode; src/cpa). Every oracle draw paired with a native polygon (matched pair or exact re-draw) is classified
     * by the UV scale relative to the native UVs. Prediction under test: a native polygon of a material with overlayMode 0 is drawn once (UV x1); with overlayMode != 0 it is drawn twice, once
     * with UV x1 and once with UV x CPA_OVERLAY_UV_SCALE. A re-draw is "explained by native data" iff its native polygon has overlayMode != 0 and its UV scale is 1 or 8. */
    uint32_t l2Pair[4][6]; memset(l2Pair, 0, sizeof l2Pair); uint32_t l2RdExpl = 0, l2RdUnpred = 0, l2Both = 0, l2Only8 = 0, l2Only1 = 0, l2Mode0Multi = 0, l2NatMode[4] = { 0, 0, 0, 0 };
    uint32_t layerTcw[64]; int nLayerTcw = 0;
    struct { uint32_t mode, cls, list, fmt, tsp, ctl, n; } l2key[64]; int nl2key = 0;
    {
        uint8_t *d1 = calloc(nt ? nt : 1, 1), *d8 = calloc(nt ? nt : 1, 1), *dn = calloc(nt ? nt : 1, 1);
        for (int pass = 0; pass < 2; pass++)
            for (uint32_t a = 0; a < no; a++) {
                int m = -1;
                if (pass == 0 && ot[a].matched) { for (uint32_t q = 0; q < npt; q++) if (pt[q].used && pt[q].by == (int)a) { m = (int)q; break; } }
                else if (pass == 1 && ot[a].redraw) m = ot[a].rdm - 1;
                if (m < 0) continue;
                int pi = geom_perm(&pt[m], &ot[a], tol, ztol); if (pi < 0) continue;
                int cls = uv_scale_class(&pt[m], pi, &ot[a]); uint32_t t = pt[m].tri, mode = natOv[t] > 3 ? 3 : natOv[t];
                int ci = cls == 1 ? 0 : cls == 8 ? 1 : cls == 9 ? 2 : cls == 7 ? 3 : cls == 6 ? 5 : 4;
                l2Pair[mode][ci]++;
                if (verbose && cls == 0) { printf("  L2NEITHER mode %u list %u tcw %08x:", mode, ot[a].list, ot[a].tcw); for (int j = 0; j < 3; j++) { int q = perms[pi][j]; printf(" (%.4f %.4f | %.4f %.4f | r %.3f %.3f)", ot[a].u[j], ot[a].v[j], pt[m].u[q], pt[m].v[q], pt[m].u[q] != 0 ? ot[a].u[j] / pt[m].u[q] : 0.0, pt[m].v[q] != 0 ? ot[a].v[j] / pt[m].v[q] : 0.0); } printf("\n"); }
                if (cls == 1) d1[t]++; else if (cls == 8 || cls == 7) d8[t]++; if (dn[t] < 255) dn[t]++;
                if (pass == 1) { if (natOv[t] && (cls == 1 || cls == 8 || cls == 9 || cls == 7)) { ot[a].l2n = 1; l2RdExpl++; } else l2RdUnpred++; }
                if (natOv[t] && (cls == 8 || cls == 7)) { int k = 0; while (k < nLayerTcw && layerTcw[k] != ot[a].tcw) k++; if (k == nLayerTcw && nLayerTcw < 64) layerTcw[nLayerTcw++] = ot[a].tcw; }
                int k = 0; while (k < nl2key && !(l2key[k].mode == mode && l2key[k].cls == (uint32_t)cls && l2key[k].list == ot[a].list && l2key[k].fmt == ((ot[a].tcw >> 27) & 7) && l2key[k].tsp == ot[a].tsp && l2key[k].ctl == ot[a].ctl)) k++;
                if (k == nl2key && nl2key < 64) { l2key[k].mode = mode; l2key[k].cls = (uint32_t)cls; l2key[k].list = ot[a].list; l2key[k].fmt = (ot[a].tcw >> 27) & 7; l2key[k].tsp = ot[a].tsp; l2key[k].ctl = ot[a].ctl; l2key[k].n = 0; nl2key++; }
                if (k < nl2key) l2key[k].n++;
            }
        for (uint32_t m = 0; m < npt; m++) if (pt[m].used) { uint32_t t = pt[m].tri, mode = natOv[t] > 3 ? 3 : natOv[t];
            if (mode) { l2NatMode[mode]++; if (d1[t] && d8[t]) l2Both++; else if (d8[t]) l2Only8++; else if (d1[t]) l2Only1++; }
            else if (dn[t] > 1) l2Mode0Multi++; }
        free(d1); free(d8); free(dn);
    }
    /* ---- Sprites (element type 3 -> CpaScene.sprites). Native model under test: a sprite is a screen-aligned billboard quad centred on the projection of its world position (the vertex through the SO
     * global matrix), depth 1/(4 Zc) at the centre. An oracle 4-vertex strip is attributed to a sprite iff its four vertices form an axis-aligned rectangle at one depth (1% spread) whose centre is
     * within 1.5 px of the projection and whose depth is within 2% of the sprite's. The size semantic is NOT used to match; the measured ratio (observed half extent) / (size * f / Zc) is reported. */
    uint32_t sprFront = 0, sprMatched = 0, sprOracleTris = 0, sprBehind = 0, sprRatioHalf = 0, sprRatioOne = 0, sprRatioOther = 0;
    {
        uint8_t *sUsed = calloc(nstrip ? nstrip : 1, 1);
        for (uint32_t i = 0; i < sc.nSprites; i++) {
            const CpaSprite *sp = &sc.sprites[i]; float wp[3] = { sp->pos[0], sp->pos[1], sp->pos[2] };
            { /* LIVE placement: the owning SuperObject's global matrix as it is in guest RAM at this scene (actors move; the DAT matrix is the initial one) */
              uint32_t mp = 0; if (sp->soVa >= RAM_BASE && sp->soVa - RAM_BASE + 0x28 < (16u << 20)) memcpy(&mp, ram + (sp->soVa - RAM_BASE) + 0x24, 4);
              if (mp >= RAM_BASE && mp - RAM_BASE + 0x28 + 64 <= (16u << 20)) { float m[16]; memcpy(m, ram + (mp - RAM_BASE) + 0x28, 64);
                  for (int j = 0; j < 3; j++) wp[j] = sp->local[0] * m[j] + sp->local[1] * m[4 + j] + sp->local[2] * m[8 + j] + m[12 + j]; } }
            double r[3] = { wp[0] - C[0], wp[1] - C[1], wp[2] - C[2] };
            double zc = F[0]*r[0] + F[1]*r[1] + F[2]*r[2]; if (zc < NEAR_ZC) { sprBehind++; continue; }
            double psx = 320.0 - fx * (L[0]*r[0] + L[1]*r[1] + L[2]*r[2]) / zc, psy = 240.0 - fy * (U[0]*r[0] + U[1]*r[1] + U[2]*r[2]) / zc, pw = 1.0 / (4.0 * zc);
            sprFront++;
            for (uint32_t k = 0; k < nstrip; k++) {
                const TaS *q = &strips[k]; if (q->sprite || q->count != 4 || sUsed[k]) continue;
                double mnx = 1e30, mxx = -1e30, mny = 1e30, mxy = -1e30, mnz = 1e30, mxz = -1e30;
                for (int j = 0; j < 4; j++) { const TaV *v = &tv[q->first + j]; if (v->x < mnx) mnx = v->x; if (v->x > mxx) mxx = v->x; if (v->y < mny) mny = v->y; if (v->y > mxy) mxy = v->y; if (v->z < mnz) mnz = v->z; if (v->z > mxz) mxz = v->z; }
                double cx = 0.5 * (mnx + mxx), cy = 0.5 * (mny + mxy), mz = 0.5 * (mnz + mxz);
                if (fabs(cx - psx) > 1.5 || fabs(cy - psy) > 1.5 || fabs(mz / pw - 1.0) > 0.02 || (mxz - mnz) > 0.01 * mz) continue;
                int rect = 1; for (int j = 0; j < 4; j++) { const TaV *v = &tv[q->first + j]; if ((fabs(v->x - mnx) > 0.02 && fabs(v->x - mxx) > 0.02) || (fabs(v->y - mny) > 0.02 && fabs(v->y - mxy) > 0.02)) rect = 0; }
                if (!rect || mxx - mnx < 1e-3 || mxy - mny < 1e-3) continue;
                sUsed[k] = 1; sprMatched++;
                double ex = sp->sizeX * fx / zc, ey = sp->sizeY * fy / zc, rx = 0.5 * (mxx - mnx) / ex, ry = 0.5 * (mxy - mny) / ey;
                if (fabs(rx / 0.5 - 1) < 0.05 && fabs(ry / 0.5 - 1) < 0.05) sprRatioHalf++; else if (fabs(rx - 1) < 0.05 && fabs(ry - 1) < 0.05) sprRatioOne++; else sprRatioOther++;
                for (uint32_t a = 0; a < no; a++) if (ot[a].strip == (int)k) { ot[a].spr = 1; sprOracleTris++; }
                if (verbose) printf("  SPRITE %u pos (%.2f %.2f %.2f) size (%.3f %.3f) tex %08x alpha %d -> strip %u list %u tcw %08x ctl %08x tsp %08x: centre (%.2f %.2f) vs (%.2f %.2f) half-extent/(size*f/Zc) = %.3f x %.3f  uv0 (%.3f %.3f) uv2 (%.3f %.3f)\n",
                                    i, sp->pos[0], sp->pos[1], sp->pos[2], sp->sizeX, sp->sizeY, sp->texVa, sp->alphaClass, k, q->list, q->tcw, q->ctl, q->tsp, cx, cy, psx, psy, rx, ry, tv[q->first].u, tv[q->first].v, tv[q->first + 2].u, tv[q->first + 2].v);
                break;
            }
            if (verbose) {   /* diagnostic: nearest oracle strip (any vertex count) by bbox centre among those at a similar depth */
                double bd = 1e30; uint32_t bk = 0; double bz = 0, bw = 0, bh = 0;
                for (uint32_t k = 0; k < nstrip; k++) { const TaS *q = &strips[k]; if (q->sprite || !q->count) continue;
                    double mnx = 1e30, mxx = -1e30, mny = 1e30, mxy = -1e30, mz = 0;
                    for (uint32_t j = 0; j < q->count; j++) { const TaV *v = &tv[q->first + j]; if (v->x < mnx) mnx = v->x; if (v->x > mxx) mxx = v->x; if (v->y < mny) mny = v->y; if (v->y > mxy) mxy = v->y; mz += v->z; }
                    mz /= q->count; if (fabs(mz / pw - 1.0) > 0.05) continue;
                    double d = hypot(0.5 * (mnx + mxx) - psx, 0.5 * (mny + mxy) - psy); if (d < bd) { bd = d; bk = k; bz = mz / pw; bw = mxx - mnx; bh = mxy - mny; } }
                printf("  SPRNEAR %u proj (%.1f %.1f) Zc %.2f size (%.3f %.3f) -> nearest same-depth strip %u dist %.2f px depth ratio %.3f bbox %.1f x %.1f count %u\n", i, psx, psy, zc, sp->sizeX, sp->sizeY, bk, bd, bz, bw, bh, bd < 1e29 ? strips[bk].count : 0);
            }
        }
        free(sUsed);
    }
    /* Clip / subdivision model (geometry only, UV independent): the game clips against the near plane (and the frustum), emitting NEW vertices on the
     * edges of the original triangle. An unmatched oracle triangle is a "clip fragment" iff all three of its vertices, unprojected with the same camera
     * (Zc = 1/(4 z), L.r = (320-sx) Zc/fx, U.r = (240-sy) Zc/fy, F.r = Zc), lie on the plane of ONE native static triangle (distance <= FRAG_PLANE * Zc)
     * and inside it (barycentric >= -FRAG_BARY), with a consistent texture if the native texture is already bound. Reason class: the native triangle has
     * a vertex behind the camera (near clip), else a vertex off the 640x480 viewport (frustum clip), else neither (other subdivision: reported, not hidden). */
    double minZcMatched = 1e30, minZcFrag = 1e30, maxZcMatched = 0;
    for (uint32_t a = 0; a < no; a++) if (ot[a].matched) for (int j = 0; j < 3; j++) { double zc = 1.0 / (4.0 * ot[a].z[j]); if (zc < minZcMatched) minZcMatched = zc; if (zc > maxZcMatched) maxZcMatched = zc; }
    uint32_t vNative = 0, vNear = 0, vOther = 0;
    uint32_t l2FragDis = 0; uint32_t nFrag = 0, fragNear = 0, fragFrustum = 0, fragOther = 0, fragTexBad = 0, fragUnbound = 0, fragSub = 0, nFragLayer = 0;
    {
        const double FRAG_PLANE = 3e-3, FRAG_BARY = 0.02;
        for (uint32_t a = 0; a < no; a++) {
            if (ot[a].matched || ot[a].redraw || ot[a].spr) continue;
            double R[3][3]; int okz = 1;
            for (int j = 0; j < 3; j++) {
                double zc = 1.0 / (4.0 * ot[a].z[j]); if (!(ot[a].z[j] > 0) || !isfinite(zc)) { okz = 0; break; }
                double lr = (320.0 - ot[a].sx[j]) * zc / fx, ur = (240.0 - ot[a].sy[j]) * zc / fy;
                for (int k = 0; k < 3; k++) R[j][k] = lr * L[k] + ur * U[k] + zc * F[k];
            }
            if (!okz) continue;
            for (uint32_t t = 0; t < nt; t++) {
                if (!natStatic[t]) continue;
                const float *P = &sc.pos[t * 9]; double A[3][3];
                for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) A[j][k] = P[j * 3 + k] - C[k];
                double e1[3] = { A[1][0]-A[0][0], A[1][1]-A[0][1], A[1][2]-A[0][2] }, e2[3] = { A[2][0]-A[0][0], A[2][1]-A[0][1], A[2][2]-A[0][2] };
                double nn[3] = { e1[1]*e2[2]-e1[2]*e2[1], e1[2]*e2[0]-e1[0]*e2[2], e1[0]*e2[1]-e1[1]*e2[0] }; double nl = sqrt(nn[0]*nn[0]+nn[1]*nn[1]+nn[2]*nn[2]);
                if (nl < 1e-12) continue;
                double d11 = e1[0]*e1[0]+e1[1]*e1[1]+e1[2]*e1[2], d12 = e1[0]*e2[0]+e1[1]*e2[1]+e1[2]*e2[2], d22 = e2[0]*e2[0]+e2[1]*e2[1]+e2[2]*e2[2], den = d11*d22 - d12*d12;
                int all = 1;
                for (int j = 0; j < 3 && all; j++) {
                    double r[3] = { R[j][0]-A[0][0], R[j][1]-A[0][1], R[j][2]-A[0][2] };
                    double dist = fabs(r[0]*nn[0]+r[1]*nn[1]+r[2]*nn[2]) / nl, zc = 1.0 / (4.0 * ot[a].z[j]);
                    if (dist > FRAG_PLANE * zc + 1e-4) { all = 0; break; }
                    double d1 = r[0]*e1[0]+r[1]*e1[1]+r[2]*e1[2], d2 = r[0]*e2[0]+r[1]*e2[1]+r[2]*e2[2];
                    double b1 = (d22*d1 - d12*d2) / den, b2 = (d11*d2 - d12*d1) / den, b0 = 1.0 - b1 - b2;
                    if (b0 < -FRAG_BARY || b1 < -FRAG_BARY || b2 < -FRAG_BARY) all = 0;
                }
                if (!all) continue;
                int f = -1, layerFrag = 0; for (int i = 0; i < ntexmap; i++) if (texmap[i].va == natTex[t]) { f = i; break; }
                if (f >= 0 && texmap[f].tcw != ot[a].tcw) {
                    /* A second texture layer (tcw proven by exact re-draws above to be drawn over static polygons) legitimately differs from the first-pass texture. */
                    int isLayerOracle = 0; for (int k = 0; k < nRedrawTcw; k++) if (redrawTcw[k] == ot[a].tcw) isLayerOracle = 1;
                    int isLayer = natOv[t] != 0;      /* decided from native data (overlayMode), no longer from the oracle's own re-draw tcw set */
                    if (isLayer != isLayerOracle) l2FragDis++;
                    if (!isLayer) { fragTexBad++; continue; }
                    layerFrag = 1;
                }
                int behind = natBehind[t], off = 0;
                if (!behind) for (int j = 0; j < 3; j++) { double zc = 0; for (int k = 0; k < 3; k++) zc += F[k]*A[j][k];
                    double sxx = 320.0 - fx * (L[0]*A[j][0]+L[1]*A[j][1]+L[2]*A[j][2]) / zc, syy = 240.0 - fy * (U[0]*A[j][0]+U[1]*A[j][1]+U[2]*A[j][2]) / zc;
                    if (sxx < 0 || sxx >= 640 || syy < 0 || syy >= 480) off = 1; }
                if (!ot[a].copT1) { ot[a].copT1 = t + 1; ot[a].copKind = (!behind && !off) ? 1 : 2; }
                if (!behind && !off) { fragOther++; continue; }            /* coplanar and inside, but the native triangle is not clipped: decal/shadow/other, NOT counted as a clip fragment */
                int cn = 0, cz = 0, co = 0, ci = 0;     /* vertex classes: native vertex | on the near plane | other, outside the viewport (frustum clip) | other, INSIDE the viewport */
                for (int j = 0; j < 3; j++) {
                    double zc = 1.0 / (4.0 * ot[a].z[j]); int isnat = 0;
                    for (int q = 0; q < 3; q++) { double dd = sqrt((R[j][0]-A[q][0])*(R[j][0]-A[q][0]) + (R[j][1]-A[q][1])*(R[j][1]-A[q][1]) + (R[j][2]-A[q][2])*(R[j][2]-A[q][2])); if (dd < 3e-3 * zc + 1e-4) isnat = 1; }
                    if (isnat) cn++; else if (fabs(zc - NEAR_ZC) < 2e-3) cz++;
                    else if (ot[a].sx[j] < 0 || ot[a].sx[j] >= 640 || ot[a].sy[j] < 0 || ot[a].sy[j] >= 480) co++;
                    else { ci++; if (verbose) { double rr[3] = { R[j][0]-A[0][0], R[j][1]-A[0][1], R[j][2]-A[0][2] }, q1 = rr[0]*e1[0]+rr[1]*e1[1]+rr[2]*e1[2], q2 = rr[0]*e2[0]+rr[1]*e2[1]+rr[2]*e2[2];
                        double bb1 = (d22*q1 - d12*q2) / den, bb2 = (d11*q2 - d12*q1) / den;
                        printf("  INTERIOR-VERTEX oracle tri %u vertex %d (%.2f %.2f Zc %.3f) bary (%.3f %.3f %.3f) native Zc %.2f %.2f %.2f\n", a, j, ot[a].sx[j], ot[a].sy[j], zc, 1-bb1-bb2, bb1, bb2,
                               F[0]*A[0][0]+F[1]*A[0][1]+F[2]*A[0][2], F[0]*A[1][0]+F[1]*A[1][1]+F[2]*A[1][2], F[0]*A[2][0]+F[1]*A[2][1]+F[2]*A[2][2]); } }
                }
                /* Plain clipping can only create vertices on the near plane or on the frustum (outside / on the viewport edge). An INTERIOR new vertex means the game subdivided
                 * (or this is a coplanar decal): classified apart and NOT counted as a clip fragment. */
                if (ci) { fragSub++; ot[a].ambig = 1; if (verbose) printf("  AMBIGUOUS oracle tri %u list %u tcw %08x uv0 (%.3f %.3f) area %.2f px^2 centre (%.1f %.1f) inside native tri %u\n", a, ot[a].list, ot[a].tcw, ot[a].u[0], ot[a].v[0], fabs((ot[a].sx[1]-ot[a].sx[0])*(ot[a].sy[2]-ot[a].sy[0]) - (ot[a].sx[2]-ot[a].sx[0])*(ot[a].sy[1]-ot[a].sy[0])) * 0.5, (ot[a].sx[0]+ot[a].sx[1]+ot[a].sx[2])/3, (ot[a].sy[0]+ot[a].sy[1]+ot[a].sy[2])/3, t); continue; }
                if (f < 0) fragUnbound++;                                  /* counted, but its texture could not be cross-checked */
                for (int j = 0; j < 3; j++) { double zc = 1.0 / (4.0 * ot[a].z[j]); if (behind && zc < minZcFrag) minZcFrag = zc; }
                vNative += cn; vNear += cz; vOther += co;
                ot[a].frag = 1; ot[a].fragT1 = t + 1; nFrag++; nFragLayer += layerFrag; if (behind) fragNear++; else fragFrustum++;
                break;
            }
        }
    }
    /* Subdivision test (area conservation, geometry only): unmatched oracle triangles that lie in the plane of ONE native static triangle and inside it (recorded above as copT1) are
     * grouped per native triangle. If the summed screen area of the group equals the native triangle's projected area (near-plane- and viewport-clipped) within 5%, the native triangle was
     * drawn as several smaller triangles (game-side subdivision) and the group is explained. A coplanar decal/shadow would not conserve area. */
    uint32_t nSubdivNat = 0, nSubdivTris = 0, nSubdivNatUndrawn = 0, nAmbig = 0, nAmbigExpl = 0, nAmbigNonStatic = 0, nCopOther = 0, nCopOtherExpl = 0;
    {
        double *sumSub = calloc(nt, sizeof(double)); uint8_t *okNat = calloc(nt, 1);
        for (uint32_t a = 0; a < no; a++) if (!ot[a].matched && !ot[a].redraw && ot[a].copT1) {
            const OTri *o = &ot[a]; sumSub[o->copT1 - 1] += fabs((o->sx[1]-o->sx[0])*(o->sy[2]-o->sy[0]) - (o->sx[2]-o->sx[0])*(o->sy[1]-o->sy[0])) * 0.5; }
        double Fd[3] = { F[0], F[1], F[2] }, Ld[3] = { L[0], L[1], L[2] }, Ud[3] = { U[0], U[1], U[2] };
        for (uint32_t t = 0; t < nt; t++) if (sumSub[t] > 0) {
            const float *P = &sc.pos[t * 9]; double A[3][3];
            for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) A[j][k] = P[j * 3 + k] - C[k];
            double ar = native_screen_area(A, Fd, Ld, Ud, fx, fy);
            if (ar > 1e-6 && fabs(sumSub[t] / ar - 1.0) <= 0.05) { okNat[t] = 1; nSubdivNat++; }
        }
        for (uint32_t m = 0; m < npt; m++) if (!pt[m].used && okNat[pt[m].tri]) nSubdivNatUndrawn++;
        for (uint32_t a = 0; a < no; a++) {
            if (ot[a].matched || ot[a].redraw || !ot[a].copT1) continue;
            int ok = okNat[ot[a].copT1 - 1];
            if (ok && !ot[a].frag) { ot[a].subexp = 1; nSubdivTris++; }
            if (ot[a].ambig) {
                int bound = 0; for (int i = 0; i < ntexmap; i++) if (texmap[i].tcw == ot[a].tcw) { bound = 1; break; }
                nAmbig++; nAmbigExpl += ok; if (!ok && !bound) { nAmbigNonStatic++; ot[a].subexp = 2; }   /* texture never paired with any static triangle: effect/particle quad that is only coincidentally coplanar */
            }
            else if (ot[a].copKind == 1 && !ot[a].frag) { nCopOther++; nCopOtherExpl += ok; }
        }
        free(sumSub); free(okNat);
    }
    /* Independent (UV/geometry-free) cross-check of the static denominator: oracle triangles whose texture (tcw) is the image of a native STATIC texture proven by
     * matched pairs. Those that are neither matched nor explained as clip fragments are reported as "unexplained": they are either actor/HUD/decal triangles that
     * share a level texture, or real misses (not hidden). */
    uint32_t texUnexpl = 0, texBoundTotal = 0, texUnexplCand[3] = { 0, 0, 0 };
    for (uint32_t a = 0; a < no; a++) {
        int bound = 0; for (int i = 0; i < ntexmap; i++) if (texmap[i].tcw == ot[a].tcw) { bound = 1; break; }
        for (int i = 0; i < nLayerTcw && !bound; i++) if (layerTcw[i] == ot[a].tcw) bound = 1;      /* texture of a native-predicted layer-2 draw */
        if (!bound) continue; texBoundTotal++; if (!ot[a].matched && !ot[a].frag && !(ot[a].redraw && ot[a].l2n) && !ot[a].subexp && !ot[a].spr) { texUnexpl++; texUnexplCand[ot[a].cand]++; if (verbose) { printf("  UNEXPLAINED tri %u (static-bound tcw %08x list %u): v0 (%.2f %.2f z %.5f) v1 (%.2f %.2f) v2 (%.2f %.2f)\n", a, ot[a].tcw, ot[a].list, ot[a].sx[0], ot[a].sy[0], ot[a].z[0], ot[a].sx[1], ot[a].sy[1], ot[a].sx[2], ot[a].sy[2]);
            for (int j = 0; j < 3; j++) { double zc = 1.0 / (4.0 * ot[a].z[j]), lr = (320.0 - ot[a].sx[j]) * zc / fx, ur = (240.0 - ot[a].sy[j]) * zc / fy; printf("    W%d %.5f %.5f %.5f uv %.4f %.4f\n", j, C[0] + lr*L[0] + ur*U[0] + zc*F[0], C[1] + lr*L[1] + ur*U[1] + zc*F[1], C[2] + lr*L[2] + ur*U[2] + zc*F[2], ot[a].u[j], ot[a].v[j]); } } }
    }
    /* Winding / back-face evidence: signed screen area of matched oracle triangles vs. fully on-screen native triangles the oracle did not draw. */
    uint32_t wMatched[2] = { 0, 0 }, wUnmOn[2] = { 0, 0 }, nUnmOn = 0;
    uint32_t wList[8][2]; memset(wList, 0, sizeof wList);
    for (uint32_t a = 0; a < no; a++) if (ot[a].matched) { wMatched[ot[a].nw]++; if (ot[a].list < 8) wList[ot[a].list][ot[a].nw]++; }
    for (uint32_t m = 0; m < npt; m++) if (!pt[m].used) {
        int on = 1; for (int j = 0; j < 3; j++) if (pt[m].sx[j] < 0 || pt[m].sx[j] >= 640 || pt[m].sy[j] < 0 || pt[m].sy[j] >= 480) on = 0;
        if (!on) continue; double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]); wUnmOn[ar < 0]++; nUnmOn++;
    }
    /* Culling classification of fully on-screen native static triangles that the oracle did NOT draw (descriptive, from this scene's own matched pairs; NOT a predictive visibility model).
     * Granularity levels via SuperObject provenance (prov_walk): IPO (one mesh object) and its sector. "Drawn" native triangle = paired with an oracle triangle, or the parent of a clip fragment.
     * Screen signed area ar<0 is the winding every matched triangle of a one-sided IPO has (INFERRED front face). */
    uint32_t cDegen = 0, cBackOne = 0, cBackTwo = 0, cBackUnk = 0, cFrontPartIpo = 0, cFrontIpoCulled = 0, cFrontSectorCulled = 0, cFrontUnk = 0, cFrontElemUndrawn = 0, cTwin = 0, nIpoDrawn = 0, nIpoCulled = 0, nIpoMixed = 0, nMixedMinority = 0, nIpoMatchedAny = 0, nSecDrawn = 0, nSecCulled = 0;
    {
        PVTab T; memset(&T, 0, sizeof T);
        PMat id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1.f;
        { uint32_t root = 0; if (sc.img.nReg > 0 && sc.img.reg[0].n >= 0x38) { const uint8_t *q = sc.img.reg[0].p + 13 * 4; root = (uint32_t)q[0] | (uint32_t)q[1] << 8 | (uint32_t)q[2] << 16 | (uint32_t)q[3] << 24; }
          if (root) prov_walk(&sc.img, root, &id, 0, 0, &T); }
        if (T.n) qsort(T.a, T.n, sizeof *T.a, pv_cmp);
        uint32_t *tIpo = calloc(nt, 4), *tSec = calloc(nt, 4); uint8_t *drawn = calloc(nt, 1);
        for (uint32_t t = 0; t < nt; t++) if (natStatic[t] && T.n) prov_find(&T, &sc.pos[t * 9], &tIpo[t], &tSec[t]);
        for (uint32_t m = 0; m < npt; m++) if (pt[m].used) drawn[pt[m].tri] = 1;
        for (uint32_t a = 0; a < no; a++) if (ot[a].fragT1) drawn[ot[a].fragT1 - 1] = 1;
        uint32_t ni = T.nIpo + 1, ns = T.nSector + 1;
        uint32_t *iD = calloc(ni, 4), *iPos = calloc(ni, 4), *iNeg = calloc(ni, 4), *iUnd = calloc(ni, 4), *sD = calloc(ns, 4), *sUnd = calloc(ns, 4);
        for (uint32_t m = 0; m < npt; m++) if (pt[m].used) { uint32_t g = tIpo[pt[m].tri];
            double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]); if (ar < 0) iNeg[g]++; else iPos[g]++; }
        uint32_t *tItemId = calloc(nt, 4); uint32_t *ipoItemD = calloc((size_t)ni * (sc.nItems + 1), 4);
        for (uint32_t it = 0; it < sc.nItems; it++) for (uint32_t k = 0; k < sc.items[it].vertCount / 3; k++) tItemId[sc.items[it].firstVert / 3 + k] = it;
        for (uint32_t t = 0; t < nt; t++) if (natStatic[t] && drawn[t]) { iD[tIpo[t]]++; sD[tSec[t]]++; ipoItemD[(size_t)tIpo[t] * (sc.nItems + 1) + tItemId[t]]++; }
        for (uint32_t m = 0; m < npt; m++) if (!drawn[pt[m].tri]) {
            int on = 1; for (int j = 0; j < 3; j++) if (pt[m].sx[j] < 0 || pt[m].sx[j] >= 640 || pt[m].sy[j] < 0 || pt[m].sy[j] >= 480) on = 0;
            double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]);
            if (!on || ar >= 0 || fabs(ar) < 1e-3) continue; iUnd[tIpo[pt[m].tri]]++; sUnd[tSec[pt[m].tri]]++;
        }
        uint32_t wTab[5][2][2]; memset(wTab, 0, sizeof wTab);   /* [alphaClass+1][matched=0/undrawn=1][ar<0 front=0 / ar>=0 back=1] */
        for (uint32_t m = 0; m < npt; m++) {
            int on = 1; for (int j = 0; j < 3; j++) if (pt[m].sx[j] < 0 || pt[m].sx[j] >= 640 || pt[m].sy[j] < 0 || pt[m].sy[j] >= 480) on = 0;
            if (!on) continue; if (!pt[m].used && drawn[pt[m].tri]) continue;
            double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]); if (fabs(ar) < 1e-3) continue;
            wTab[sc.items[pt[m].item].alphaClass + 1][pt[m].used ? 0 : 1][ar >= 0]++;
        }
        { const char *rn[5] = { "unknown", "opaque", "cutout", "blend", "additive" };
          printf("  fully on-screen native tris by material class (INFERRED alphaClass) [matched front/back | undrawn front/back]:");
          for (int r = 0; r < 5; r++) printf(" %s %u/%u|%u/%u;", rn[r], wTab[r][0][0], wTab[r][0][1], wTab[r][1][0], wTab[r][1][1]);
          printf("\n"); }
        for (uint32_t m = 0; m < npt; m++) if (!drawn[pt[m].tri]) {
            int on = 1; for (int j = 0; j < 3; j++) if (pt[m].sx[j] < 0 || pt[m].sx[j] >= 640 || pt[m].sy[j] < 0 || pt[m].sy[j] >= 480) on = 0;
            if (!on) continue;
            double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]); uint32_t g = tIpo[pt[m].tri], sec = tSec[pt[m].tri];
            /* Winding rule measured above: matched OPAQUE-list triangles are (almost) never positive-area, matched TRANSLUCENT-list ones often are => opaque materials are one-sided (back faces
             * culled), translucent two-sided. Material class of a native triangle = INFERRED alphaClass of its draw item. Positive area = back face (INFERRED). */
            int opaque = sc.items[pt[m].item].alphaClass == CPA_ALPHA_OPAQUE;
            /* twin: a DRAWN native triangle with the same three projected vertices (any order/winding): the level data holds the polygon twice (e.g. front + back copy of a two-sided face)
             * and the oracle drew it once, so the unpaired copy is the same draw, not a culled one. */
            int twin = 0;
            { uint32_t lo = 0, hi = npt; while (lo < hi) { uint32_t q = (lo + hi) / 2; if (pt[q].cx < pt[m].cx - (float)tol - 1e-3f) lo = q + 1; else hi = q; }
              for (uint32_t q = lo; q < npt && pt[q].cx <= pt[m].cx + (float)tol + 1e-3f && !twin; q++) {
                  if (q == m || !pt[q].used) continue;
                  for (int pi = 0; pi < 6 && !twin; pi++) { int ok = 1;
                      for (int j = 0; j < 3 && ok; j++) { int k = perms[pi][j]; if (fabs(pt[q].sx[k] - pt[m].sx[j]) > tol || fabs(pt[q].sy[k] - pt[m].sy[j]) > tol || fabs(pt[q].w[k] - pt[m].w[j]) / (fabs(pt[m].w[j]) + 1e-9) > ztol) ok = 0; }
                      twin = ok; } } }
            if (twin) cTwin++;
            else if (fabs(ar) < 1e-3) cDegen++;
            else if (ar > 0 && opaque) cBackOne++;
            else if (ar > 0) cBackTwo++;                                   /* back-facing but a non-opaque (two-sided by the rule) material: NOT explained by culling */
            else if (!g) cFrontUnk++;
            else if (iD[g] && !ipoItemD[(size_t)g * (sc.nItems + 1) + pt[m].item]) cFrontElemUndrawn++;
            else if (iD[g]) { cFrontPartIpo++; if (verbose) printf("  FRONT-UNDRAWN-PARTIAL-IPO native tri %u ipo %u (drawn %u) alpha %d area %.2f px^2 Zc %.1f %.1f %.1f centre (%.0f %.0f)\n", pt[m].tri, g, iD[g], sc.items[pt[m].item].alphaClass, fabs(ar) * 0.5, 0.25 / pt[m].w[0], 0.25 / pt[m].w[1], 0.25 / pt[m].w[2], pt[m].cx, (pt[m].sy[0]+pt[m].sy[1]+pt[m].sy[2])/3); }
            else if (sD[sec]) cFrontIpoCulled++; else cFrontSectorCulled++;
        }
        if (verbose) for (uint32_t m = 0; m < npt; m++) if (pt[m].used) printf("  NATPASS tri %u item %u tex %08x ipo %u sec %u redrawn %u oracleTcw %08x list %u\n", pt[m].tri, pt[m].item, sc.items[pt[m].item].texVa, tIpo[pt[m].tri], tSec[pt[m].tri], natRedr[pt[m].tri], ot[pt[m].by].tcw, ot[pt[m].by].list);
        for (uint32_t g = 1; g < ni; g++) { if (iD[g]) nIpoDrawn++; else if (iUnd[g]) nIpoCulled++; if (iPos[g] && iNeg[g]) { nIpoMixed++; nMixedMinority += iPos[g] < iNeg[g] ? iPos[g] : iNeg[g]; } if (iPos[g] + iNeg[g]) nIpoMatchedAny++; }
        for (uint32_t g = 1; g < ns; g++) { if (sD[g]) nSecDrawn++; else if (sUnd[g]) nSecCulled++; }
        free(T.a); free(tIpo); free(tSec); free(drawn); free(iD); free(iPos); free(iNeg); free(iUnd); free(sD); free(sUnd); free(tItemId); free(ipoItemD);
    }
    /* Static-triangle denominator. An oracle triangle counts as "static" if it was matched by geometry, OR it is unmatched but has a native static triangle with
     * identical UVs whose texture struct is already known (from the matched pairs above) to be the oracle triangle's texture (tcw). This keeps coincidental
     * UV patterns of actor/HUD triangles out of the denominator. Unmatched ones are then explained: native candidate behind the camera (the game clips it and
     * emits new vertices) or a genuine mismatch. Triangles whose native texture never appeared in a matched pair cannot be verified and are reported apart. */
    uint32_t unmClip = 0, unmBad = 0, unverif = 0, unverifCoinc = 0;
    for (uint32_t a = 0; a < no; a++) {
        if (ot[a].matched || ot[a].frag) continue;
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
    uint32_t staticTotal = matched + nFrag + unmClip + unmBad;       /* coplanar-ambiguous triangles (below) are NOT in this denominator: nothing proves they are level geometry; see the pessimistic rate */
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
    printf("clip model: unmatched oracle triangles lying inside one native static triangle (plane+barycentric, UV-free): %u = near-plane clip %u + frustum clip %u (of which texture not cross-checkable %u); coplanar-with-unclipped-native (not counted) %u; coplanar-ambiguous (lie in a native triangle's plane with a vertex strictly inside the viewport and not on the near plane: decal/shadow/small mesh resting on a big floor triangle, or game subdivision; NOT counted, NOT in the denominator) %u; rejected for texture inconsistency %u\n", nFrag, fragNear, fragFrustum, fragUnbound, fragOther, fragSub, fragTexBad);
    printf("  fragment vertices: coincide with a native vertex %u | lie on the near plane Zc=%.2f %u | outside the viewport (frustum clip) %u\n", vNative, NEAR_ZC, vNear, vOther);
    printf("  near-plane evidence: smallest Zc among matched (unclipped) oracle vertices %.4f; smallest Zc among oracle vertices of near-clip fragments %.4f\n", minZcMatched, minZcFrag);
    printf("  clip-aware match rate: (matched %u + clip fragments %u) / static %u = %.2f%%   (strict, no clip model: %.2f%%)\n", matched, nFrag, staticTotal, staticTotal ? 100.0 * (matched + nFrag) / staticTotal : 0.0, staticTotal ? 100.0 * matched / staticTotal : 0.0);
    printf("  re-draws: %u unmatched oracle triangles equal (geometry only) a static native triangle already paired with another oracle triangle (%u with the same tcw as the first draw, %u with a different tcw); by list: opaque %u, op-mod %u, translucent %u, tr-mod %u, punch %u\n", nRedraw, nRedrawSameTcw, nRedraw - nRedrawSameTcw, redrawList[0], redrawList[1], redrawList[2], redrawList[3], redrawList[4]);
    printf("  subdivision test (summed screen area of the coplanar-inside pieces == projected area of ONE native triangle +/-5%%): %u native triangles, %u oracle triangles explained, %u of those native triangles were not drawn as themselves; coplanar-ambiguous %u of which explained %u, of which texture never seen on a static pair (non-level) %u; coplanar with an unclipped native %u of which explained %u\n", nSubdivNat, nSubdivTris, nSubdivNatUndrawn, nAmbig, nAmbigExpl, nAmbigNonStatic, nCopOther, nCopOtherExpl);
    printf("  layer 2 (native data: VisualMaterial+0x149 overlayMode, UV x%.0f): oracle draws paired with a native polygon by overlayMode [UV x1 / UV x8 / undecidable (all UV 0) / UV (x8, x8(1-v)) / none of these / of which pure UV translation (scroll)]: mode0 %u/%u/%u/%u/%u/%u, mode1 %u/%u/%u/%u/%u/%u, mode2 %u/%u/%u/%u/%u/%u, mode3 %u/%u/%u/%u/%u/%u\n", CPA_OVERLAY_UV_SCALE,
           l2Pair[0][0], l2Pair[0][1], l2Pair[0][2], l2Pair[0][3], l2Pair[0][4] + l2Pair[0][5], l2Pair[0][5], l2Pair[1][0], l2Pair[1][1], l2Pair[1][2], l2Pair[1][3], l2Pair[1][4] + l2Pair[1][5], l2Pair[1][5], l2Pair[2][0], l2Pair[2][1], l2Pair[2][2], l2Pair[2][3], l2Pair[2][4] + l2Pair[2][5], l2Pair[2][5], l2Pair[3][0], l2Pair[3][1], l2Pair[3][2], l2Pair[3][3], l2Pair[3][4] + l2Pair[3][5], l2Pair[3][5]);
    printf("  layer 2: re-draws explained by native data (native overlayMode != 0 and UV scale 1 or 8) %u | NOT predicted by native data %u | native polygons with overlayMode != 0 drawn: both UV x1 and x8 %u, only x8 %u, only x1 %u (of %u) | overlayMode 0 polygons drawn more than once %u | clip fragments whose layer verdict differs between native data and the oracle re-draw tcw set %u\n",
           l2RdExpl, l2RdUnpred, l2Both, l2Only8, l2Only1, l2NatMode[1] + l2NatMode[2] + l2NatMode[3], l2Mode0Multi, l2FragDis);
    for (int k = 0; k < nl2key; k++) printf("  L2KEY mode %u uvscale %u list %u tcwfmt %u tsp %08x ctl %08x n %u\n", l2key[k].mode, l2key[k].cls, l2key[k].list, l2key[k].fmt, l2key[k].tsp, l2key[k].ctl, l2key[k].n);
    printf("  sprites (element type 3): native %u, in front of the near plane %u, attributed to an oracle rectangle quad %u (%u oracle triangles); size ratio (half extent)/(size*f/Zc): ~0.5 %u, ~1.0 %u, other %u\n", sc.nSprites, sprFront, sprMatched, sprOracleTris, sprRatioHalf, sprRatioOne, sprRatioOther + 0 * sprBehind);
    printf("  of the clip fragments, %u belong to a second texture layer (tcw proven by exact re-draws, differs from the first-pass texture of the clipped native polygon)\n", nFragLayer);
    printf("  oracle triangles using a static-proven texture: %u, of which neither matched, clip fragment nor re-draw (unexplained): %u (UV identical to: a native static triangle %u | only an actor-pile triangle %u | no native triangle %u)\n", texBoundTotal, texUnexpl, texUnexplCand[2], texUnexplCand[1], texUnexplCand[0]);
    { uint32_t h[5] = { 0, 0, 0, 0, 0 };   /* screen areas of matched oracle triangles: <0.1, <0.5, <1, <4, >=4 px^2 (no tiny-triangle cull if the small bins are populated) */
      for (uint32_t a = 0; a < no; a++) if (ot[a].matched) { double ar = fabs((ot[a].sx[1]-ot[a].sx[0])*(ot[a].sy[2]-ot[a].sy[0]) - (ot[a].sx[2]-ot[a].sx[0])*(ot[a].sy[1]-ot[a].sy[0])) * 0.5; h[ar < 0.1 ? 0 : ar < 0.5 ? 1 : ar < 1 ? 2 : ar < 4 ? 3 : 4]++; }
      printf("  largest Zc among vertices of matched oracle triangles: %.1f | matched screen area histogram <0.1: %u, <0.5: %u, <1: %u, <4: %u, >=4 px^2: %u\n", maxZcMatched, h[0], h[1], h[2], h[3], h[4]); }
    printf("  winding (screen signed area) of matched oracle tris: positive %u, negative %u | fully on-screen native tris NOT drawn by the oracle: %u (winding positive %u, negative %u)\n", wMatched[0], wMatched[1], nUnmOn, wUnmOn[0], wUnmOn[1]);
    printf("  matched winding by TA list [positive/negative area]: opaque %u/%u, op-mod %u/%u, translucent %u/%u, tr-mod %u/%u, punch %u/%u\n", wList[0][0], wList[0][1], wList[1][0], wList[1][1], wList[2][0], wList[2][1], wList[3][0], wList[3][1], wList[4][0], wList[4][1]);
    printf("  undrawn fully on-screen native tris: duplicate (twin) of a drawn native polygon %u | degenerate %u | positive area (back face) in an OPAQUE-class material (back-face culled, one-sided rule) %u | positive area in a non-opaque (two-sided) material, undrawn %u | [unused] %u | FRONT-facing: in a drawn IPO but a texture/material group of it with no drawn triangle %u, in a drawn IPO and drawn material group %u, in an undrawn IPO of a drawn sector %u, in an entirely undrawn sector %u, provenance unknown %u\n", cTwin, cDegen, cBackOne, cBackTwo, cBackUnk, cFrontElemUndrawn, cFrontPartIpo, cFrontIpoCulled, cFrontSectorCulled, cFrontUnk);
    printf("  IPOs with a drawn triangle %u | IPOs with on-screen front-facing geometry and NO drawn triangle %u | sectors with a drawn triangle %u | sectors with on-screen front-facing geometry and NO drawn triangle %u | IPOs with matched tris of BOTH windings %u of %u (minority-winding matched tris %u)\n", nIpoDrawn, nIpoCulled, nSecDrawn, nSecCulled, nIpoMixed, nIpoMatchedAny, nMixedMinority);
    printf("native->oracle (informational; game sector culling / backface culling not modelled): static tris with a vertex on screen %u, of which matched %u\n", natVisible, matched);
    printf("\nRESULT: scene %ld tol %.3f px: %u/%u static oracle triangles matched strictly (%.2f%%), +%u clip fragments => %.2f%% clip-aware; %u of all %u oracle triangles (rest: actors/HUD/particles).\n",
           scene, tol, matched, staticTotal, staticTotal ? 100.0 * matched / staticTotal : 0.0, nFrag, staticTotal ? 100.0 * (matched + nFrag) / staticTotal : 0.0, matched, no);
    free(natOv); free(natRedr); free(pt); free(ot); free(fb); free(ram); free(natTex); free(natStatic); free(natBehind);
    if (st) { st->staticTotal = staticTotal; st->matched = matched; st->frag = nFrag; st->unmBad = unmBad; st->unmClip = unmClip; st->sub = fragSub; st->cull[0] = cDegen; st->cull[1] = cBackOne; st->cull[2] = cBackTwo; st->cull[3] = cBackUnk; st->cull[4] = cFrontPartIpo; st->cull[5] = cFrontIpoCulled; st->cull[6] = cFrontSectorCulled; st->cull[7] = cFrontUnk; st->cull[8] = cFrontElemUndrawn; st->cull[9] = cTwin; st->subExpl = nAmbigExpl + nAmbigNonStatic; st->copOther = nCopOther; st->copOtherExpl = nCopOtherExpl; st->redraw = nRedraw; st->redrawSame = nRedrawSameTcw; st->unverif = unverif + unverifCoinc; st->oracleTris = no; st->vNative = vNative; st->vNear = vNear; st->vOther = vOther; st->texUnexpl = texUnexpl; st->texUnexplActor = texUnexplCand[1]; st->texBoundTotal = texBoundTotal; memcpy(st->l2Pair, l2Pair, sizeof l2Pair); st->l2RdExpl = l2RdExpl; st->l2RdUnpred = l2RdUnpred; st->l2FragDis = l2FragDis; st->l2Both = l2Both; st->l2Only8 = l2Only8; st->l2Only1 = l2Only1; st->l2Mode0Multi = l2Mode0Multi; memcpy(st->l2NatMode, l2NatMode, sizeof l2NatMode); st->sprTotal = sc.nSprites; st->sprFront = sprFront; st->sprMatched = sprMatched; st->sprOracleTris = sprOracleTris; st->ok = 1; st->maxErr = maxErr; }
    return 0;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; long scene = -1, ramscene = -1; double tol = 0.1, ztol = 2e-3; int verbose = 0, all = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) scene = atol(argv[++i]);
        else if (!strcmp(argv[i], "--ram") && i + 1 < argc) ramscene = atol(argv[++i]);     /* use ram_<N>.bin (default: ram_<N-1> if present) */
        else if (!strcmp(argv[i], "--tol") && i + 1 < argc) tol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--ztol") && i + 1 < argc) ztol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--all")) all = 1;                                       /* every f<N> scene in CAPDIR: one SCENE summary line each + a LEVEL line */
        else if (!strcmp(argv[i], "-v")) verbose = 1;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--scene N | --all] [--tol px] [--ztol rel] [-v]\n", argv[0]); return 2; }
    long scenes[256]; int ns = 0;
    { DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long n; if (sscanf(e->d_name, "f%ld", &n) == 1 && ns < 256) scenes[ns++] = n; } if (d) closedir(d); }
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    if (!all) { if (scene < 0 && ns) scene = scenes[0]; if (scene < 0) { fprintf(stderr, "no f<N> scene in %s (run ta-capture)\n", capdir); return 2; } scenes[0] = scene; ns = 1; }
    char fixp[1100], lvlp[1100]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata);
    char up[64]; snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c);
    snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN)) { fprintf(stderr, "cannot read %s / %s\n", fixp, lvlp); return 2; }
    if (!cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "scene load failed\n"); return 2; }
    uint64_t sL2E = 0, sL2U = 0, sL2B = 0, sL2O8 = 0, sL2O1 = 0, sL2M0 = 0, sL2FD = 0, sSprN = 0, sSprF = 0, sSprM = 0, sSprT = 0, sTUA = 0, sAmbE = 0, sCull[10] = { 0 }, sRd = 0, sSub = 0, sT = 0, sM = 0, sF = 0, sTB = 0, sTU = 0, sU = 0, sMis = 0, sVn = 0, sVz = 0, sVo = 0; int nOk = 0, nBad = 0;
    for (int i = 0; i < ns; i++) {
        Stats st; memset(&st, 0, sizeof st);
        int rc = do_scene(&sc, capdir, level, scenes[i], all ? -1 : ramscene, tol, ztol, verbose, &st);
        if (all) {
            if (rc == 0 && st.ok) { nOk++; sT += st.staticTotal; sRd += st.redraw; sM += st.matched; sF += st.frag; sTB += st.texBoundTotal; sTU += st.texUnexpl; sTUA += st.texUnexplActor; sU += st.unverif; sMis += st.unmBad + st.unmClip; sSub += st.sub; sAmbE += st.subExpl; for (int k = 0; k < 10; k++) sCull[k] += st.cull[k]; sL2E += st.l2RdExpl; sL2U += st.l2RdUnpred; sL2B += st.l2Both; sL2O8 += st.l2Only8; sL2O1 += st.l2Only1; sL2M0 += st.l2Mode0Multi; sL2FD += st.l2FragDis; sSprN += st.sprTotal; sSprF += st.sprFront; sSprM += st.sprMatched; sSprT += st.sprOracleTris; sVn += st.vNative; sVz += st.vNear; sVo += st.vOther;
                printf("SCENE %s %ld static %u matched %u clipfrag %u mismatch %u coplanar-ambiguous %u (explained %u) redraw %u unverifiable %u static-texture-unexplained %u/%u strict %.2f%% clipaware %.2f%% conservative %.2f%%\n", level, scenes[i], st.staticTotal, st.matched, st.frag, st.unmBad + st.unmClip, st.sub, st.subExpl, st.redraw, st.unverif, st.texUnexpl, st.texBoundTotal,
                       st.staticTotal ? 100.0 * st.matched / st.staticTotal : 0.0, st.staticTotal ? 100.0 * (st.matched + st.frag) / st.staticTotal : 0.0, st.texBoundTotal ? 100.0 * (st.texBoundTotal - st.texUnexpl) / st.texBoundTotal : 0.0); }
            else { nBad++; printf("SCENE %s %ld SKIPPED (rc %d: no valid camera / capture)\n", level, scenes[i], rc); }
        }
    }
    if (all) printf("LEVEL %s scenes %d (skipped %d) static %llu matched %llu clipfrag %llu mismatch %llu coplanar-ambiguous %llu (explained as non-level %llu) redraw %llu strict %.2f%% clipaware %.2f%% pessimistic(+unexplained ambiguous in denominator) %.2f%% | static-texture tris %llu unexplained %llu (UV-identical only to an actor-pile triangle: %llu) conservative %.2f%% (excluding those %.2f%%) | unverifiable %llu | frag verts native/near/other %llu/%llu/%llu | undrawn-onscreen twin %llu backface-opaque %llu degenerate %llu backface-nonopaque %llu front-in-drawn-ipo %llu front-in-undrawn-ipo-or-sector %llu | layer2 l2expl %llu l2unpred %llu l2both %llu l2only8 %llu l2only1 %llu l2mode0multi %llu l2fragdis %llu | sprites sprN %llu sprFront %llu sprAttr %llu sprTris %llu\n",
                    level, nOk, nBad, (unsigned long long)sT, (unsigned long long)sM, (unsigned long long)sF, (unsigned long long)sMis, (unsigned long long)sSub, (unsigned long long)sAmbE, (unsigned long long)sRd, sT ? 100.0 * sM / sT : 0.0, sT ? 100.0 * (sM + sF) / sT : 0.0, (sT + sSub - sAmbE) ? 100.0 * (sM + sF) / (sT + sSub - sAmbE) : 0.0,
                    (unsigned long long)sTB, (unsigned long long)sTU, (unsigned long long)sTUA, sTB ? 100.0 * (sTB - sTU) / sTB : 0.0, sTB > sTUA ? 100.0 * (sTB - sTU) / (sTB - sTUA) : 0.0, (unsigned long long)sU, (unsigned long long)sVn, (unsigned long long)sVz, (unsigned long long)sVo,
                    (unsigned long long)sCull[9], (unsigned long long)sCull[1], (unsigned long long)sCull[0], (unsigned long long)sCull[2], (unsigned long long)(sCull[4] + sCull[8] + sCull[7] + sCull[3]), (unsigned long long)(sCull[5] + sCull[6]),
                    (unsigned long long)sL2E, (unsigned long long)sL2U, (unsigned long long)sL2B, (unsigned long long)sL2O8, (unsigned long long)sL2O1, (unsigned long long)sL2M0, (unsigned long long)sL2FD, (unsigned long long)sSprN, (unsigned long long)sSprF, (unsigned long long)sSprM, (unsigned long long)sSprT);
    cpa_scene_free(&sc); free(fix); free(lvl);
    return 0;
}
