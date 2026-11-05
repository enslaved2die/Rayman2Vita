/* vis_predict: native sector/IPO visibility predictor + validation against the oracle (re_analysis/dc/notes_visibility.md).
 *   vis_predict CAPDIR DCDATA_DIR [--level Learn_10] [--scene N] [-v] [--no-flags] [--no-frustum] [--no-neighbours]
 * CAPDIR comes from vis_capture (vis.mk): f<N>/frame.bin (TA stream), ram_<N>.bin (guest RAM), trace_<N>.txt (filtered guest function-entry trace of the same guest frame).
 *
 * The rule under test (decoded from the lifted game code, tools/sh4recomp/gen_fix: f_8c04b7e0 -> f_8c05f4a0 -> f_8c05f026 -> f_8c09a060 -> f_8c0ab4c6, frustum test f_8c084d00):
 *   1. current sector S0 = sector of the main actor (player table entry 1, global 0x8C123CF8; dynamic game state; read from guest RAM here: **(actor.data+0x20));
 *   2. sectors considered = S0 plus the entries of S0's neighbour list (sector data +0x20, count +0x24, 8-byte entries {?,?,kind(int8 @+2),?,sector SO @+4}) with kind != 2;
 *      NOT transitive: neighbours of neighbours are not considered;
 *   3. per considered sector: frustum test of the sector's bounding box (SO+0x34 -> {min[3], max[3]}) against the camera frustum; if it is rejected and SO flags (+0x30) & 0x200 is 0 the sector is skipped;
 *   4. otherwise recurse through the children (f_8c09a060): per child, bounding box (SO+0x34, translated by the child's global matrix translation unless that matrix has type 1) against the frustum;
 *      child visited iff accepted or (flags +0x30) & 0x200; an accepted node is DRAWN iff (parentMask & SO.flags(+0x2C)) & 0x800000 and (SO.flags(+0x30) & 2) == 0; the AND-ed mask is passed down;
 *   5. frustum = 4 side planes from the viewport struct (camera-space normals at vp+0xAC/0xBC/0xCC/0xDC) + near plane (vp+0x80); a box is rejected iff it lies completely outside one plane.
 * The predictor itself lives in src/cpa/cpa_vis.{c,h} (this tool is the harness: it reads the dynamic inputs - camera, viewport planes, player sector/position - from guest RAM, calls cpa_vis_predict and compares with the trace).
 * Evidence tags are in the notes file; this tool prints the numbers. */
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_vis.h"
/* vis.mk links only cpa_image.c + cpa_scene.c (vis.mk is not ours to edit in this change): compile the library unit into this harness. Drop this include when cpa_vis.c is added to vis.mk's SRC. */
#ifndef CPA_VIS_LINKED
#include "../../src/cpa/cpa_vis.c"
#endif
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <dirent.h>
#include <ctype.h>

#define RAM_BASE 0x8C000000u
#define VA_RAYMAN_PTR 0x8C123CF8u     /* global: SuperObject of the main (camera-followed) actor = player table entry 1 (f_8c058460(1)); NOT 0x8C123CF0, which is a different actor in Jail_10 and Rodeo_60 */
#define VA_VP_PTR     0x8C123C40u     /* **(VA_VP_PTR) = active viewport struct */
#define VA_MASK       0x8C123B68u     /* global draw mask (0xFFFFFFFF in all captures) */
#define VA_FLAG_DBG   0x8C124740u     /* debug flag that makes kind-2 neighbours visible (0 in all captures) */
#define VA_HFOV 0x8C00F300u
#define VA_ROW_U 0x8C00F308u
#define VA_ROW_F 0x8C00F314u
#define VA_POS 0x8C00F394u
#define NEAR_ZC 0.25

/* ---------- guest RAM ---------- */
typedef struct { uint8_t *b; } Ram;
static uint32_t r32(const Ram *r, uint32_t va) { uint32_t v = 0; if (va >= RAM_BASE && va - RAM_BASE + 4 <= (16u << 20)) memcpy(&v, r->b + (va - RAM_BASE), 4); return v; }
static float rf(const Ram *r, uint32_t va) { float f; uint32_t v = r32(r, va); memcpy(&f, &v, 4); return f; }
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}

/* ---------- frustum from guest RAM (dynamic inputs; the rule itself is cpa_vis_box_test) ---------- */
static int frustum_from_ram(const Ram *ram, CpaVisFrustum *f) {
    float U[3], F[3], C[3]; for (int i = 0; i < 3; i++) { U[i] = rf(ram, VA_ROW_U + 4u * i); F[i] = rf(ram, VA_ROW_F + 4u * i); C[i] = rf(ram, VA_POS + 4u * i); }
    uint32_t vp = r32(ram, r32(ram, VA_VP_PTR)); if (vp < RAM_BASE || vp + 0x100 > RAM_BASE + (16u << 20)) return 0;
    static const uint32_t po[4] = { 0xAC, 0xBC, 0xCC, 0xDC };
    float side[4][4]; for (int k = 0; k < 4; k++) for (int j = 0; j < 4; j++) side[k][j] = rf(ram, vp + po[k] + 4u * j);
    float nearD = rf(ram, vp + 0x80);
    cpa_vis_frustum_from_planes(f, C, U, F, side, nearD);
    return isfinite(f->C[0]) && isfinite(f->d[4]);
}

/* ---------- native predictor: cpa_vis ---------- */
/* ---------- trace (ground truth) ---------- */
static void push(uint32_t **a, uint32_t *n, uint32_t *cap, uint32_t v) { if (*n == *cap) { *cap = *cap ? *cap * 2 : 256; *a = realloc(*a, *cap * 4); } (*a)[(*n)++] = v; }
typedef struct { uint32_t *sec, *visited, *drawn; uint32_t nSec, nVis, nDrawn, top; } Trace;
static int trace_load(const char *path, Trace *t) {
    FILE *f = fopen(path, "r"); if (!f) return 0; char line[256]; memset(t, 0, sizeof *t); uint32_t cs = 0, cv = 0, cd = 0;
    while (fgets(line, sizeof line, f)) {
        unsigned a = 0, pr, r4, r5, r6, sp; if (sscanf(line, "f_%x pr=%x r4=%x r5=%x r6=%x sp=%x", &a, &pr, &r4, &r5, &r6, &sp) != 6) continue;
        if (a == 0x8c05f4a0) t->top = r5;
        else if (a == 0x8c05f026) push(&t->sec, &t->nSec, &cs, r5);
        else if (a == 0x8c09a060) push(&t->visited, &t->nVis, &cv, r4);
        else if (a == 0x8c0ab4c6) push(&t->drawn, &t->nDrawn, &cd, r4);
    }
    fclose(f); return 1;
}
static int in_set(const uint32_t *a, uint32_t n, uint32_t v) { for (uint32_t i = 0; i < n; i++) if (a[i] == v) return 1; return 0; }

/* ---------- screen-space evidence (same projection/match as ta_compare.c) ---------- */
typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { float sx[3], sy[3], w[3]; uint32_t tri, item; int used; float cx; } PTri;
static const int perms[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };
static int cmp_cx(const void *a, const void *b) { float x = ((const PTri *)a)->cx, y = ((const PTri *)b)->cx; return x < y ? -1 : x > y; }
typedef struct { uint64_t scenes, exact, setEq, predSec, trSec, secEq, tr_ipo, pr_ipo, tp_ipo, fp_ipo, fn_ipo, trAll, prAll, tpAll;
    uint64_t topN, topNatPrev, topNatCur, topPtrPrev, topPtrCur, extraT[6], eSub[5], eSubOv[2], D, E, P_D, P_E, N_ok, Dmiss, trD_in, trE_wrong, ambTri, s0native, s0ramEq, s0cand; } Tot;

static int read_scene_list(const char *capdir, long *scenes) { int ns = 0; DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long n; if (sscanf(e->d_name, "f%ld", &n) == 1 && ns < 256) scenes[ns++] = n; } if (d) closedir(d);
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; } return ns; }

static int g_verbose, g_noflags, g_nofrustum, g_noneigh, g_nativeSector; static long g_ramDelta = -1, g_traceDelta = -1;     /* trace for scene N = trace_<N+g_traceDelta> (default -1: scene N is the TA dump of the traversal of guest frame N-1, VERIFIED, see notes) */     /* RAM dump used for scene N = ram_<N+g_ramDelta> (default -1: end of the previous guest frame, measured in ta_compare.c) */

static uint32_t g_father;

static int do_scene(const CpaImage *im, uint32_t root, const char *capdir, const char *level, long scene, Tot *T, const CpaVisTriMap *pvt, const CpaScene *sc) {
    (void)root; char p[1100]; size_t n;
    long rs = scene + g_ramDelta; snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); FILE *t = fopen(p, "rb"); if (t) fclose(t); else rs = scene;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); Ram ram; ram.b = slurp(p, &n); if (!ram.b || n != (16u << 20)) { fprintf(stderr, "bad %s\n", p); return 2; }
    CpaVisFrustum fr; if (!frustum_from_ram(&ram, &fr)) { printf("SCENE %s %ld SKIPPED (no valid viewport/camera in RAM)\n", level, scene); free(ram.b); return 1; }
    uint32_t actor = r32(&ram, VA_RAYMAN_PTR), adata = r32(&ram, actor + 4), sp = r32(&ram, adata + 0x20), s0 = r32(&ram, sp);
    if (!cpa_is_ptr(im, s0) || cpa_u32(im, s0) != CPA_SO_SECTOR) { printf("SCENE %s %ld SKIPPED (player sector pointer 0x%08x not a sector)\n", level, scene, s0); free(ram.b); return 1; }
    /* native sector lookup for the player position (f_8c055a5c -> f_8c09458c, see notes): player global matrix translation from RAM (dynamic input) */
    uint32_t sNative = 0; { uint32_t gm = r32(&ram, actor + 0x24); float pos[3] = { rf(&ram, gm + 0x58), rf(&ram, gm + 0x5C), rf(&ram, gm + 0x60) };
        sNative = cpa_vis_find_sector(im, g_father ? g_father : cpa_u32(im, s0 + 0x1c), pos); T->s0cand++; if (sNative == s0) T->s0native++; }
    CpaVisOpts vo; cpa_vis_opts_default(&vo); vo.mask = r32(&ram, VA_MASK); vo.ignoreFlags = g_noflags; vo.ignoreFrustum = g_nofrustum; vo.ignoreNeighbours = g_noneigh; vo.allowKind2 = (r32(&ram, VA_FLAG_DBG) & 0xFF) == 1;
    CpaVisInput vi; memset(&vi, 0, sizeof vi); vi.sector = g_nativeSector ? sNative : s0; vi.frustum = &fr;
    CpaVis P; if (!cpa_vis_predict(&P, im, &vi, &vo) && vi.sector) { fprintf(stderr, "cpa_vis_predict failed\n"); free(ram.b); return 2; }
    uint32_t S = P.sector; const uint32_t *secs = P.sectors; int nsec = (int)P.nSectors;
    Trace tr; char tp[1100]; snprintf(tp, sizeof tp, "%s/trace_%ld.txt", capdir, scene + g_traceDelta); int haveTr = trace_load(tp, &tr);
    if (haveTr && tr.top) {       /* which state reproduces the sector the game actually used (f_8c05f4a0 argument): position/pointer at the end of the previous guest frame or of this one? */
        T->topN++; T->topNatPrev += (sNative == tr.top); T->topPtrPrev += (s0 == tr.top);
        snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, scene); size_t n2; uint8_t *b2 = slurp(p, &n2);
        if (b2 && n2 == (16u << 20)) { Ram r2; r2.b = b2; uint32_t a2 = r32(&r2, VA_RAYMAN_PTR), gm2 = r32(&r2, a2 + 0x24); float pos2[3] = { rf(&r2, gm2 + 0x58), rf(&r2, gm2 + 0x5C), rf(&r2, gm2 + 0x60) };
            T->topNatCur += (cpa_vis_find_sector(im, g_father ? g_father : cpa_u32(im, s0 + 0x1c), pos2) == tr.top); T->topPtrCur += (r32(&r2, r32(&r2, r32(&r2, a2 + 4) + 0x20)) == tr.top); }
        free(b2); }
    /* compare predicted sets with the trace (ground truth of what the game submitted) */
    uint32_t prIpo = 0, trIpo = 0, tpIpo = 0, prAll = P.nDrawn, trAll = haveTr ? tr.nDrawn : 0, tpAll = 0; uint32_t fpL[64], fnL[64]; int nfp = 0, nfn = 0;
    if (haveTr) {
        for (uint32_t i = 0; i < P.nDrawn; i++) { int ip = cpa_u32(im, P.drawn[i]) == CPA_SO_IPO; prIpo += ip; if (in_set(tr.drawn, tr.nDrawn, P.drawn[i])) { tpAll++; tpIpo += ip; } else if (ip && nfp < 64) fpL[nfp++] = P.drawn[i]; }
        for (uint32_t i = 0; i < tr.nDrawn; i++) { int ip = cpa_u32(im, tr.drawn[i]) == CPA_SO_IPO; trIpo += ip; if (!in_set(P.drawn, P.nDrawn, tr.drawn[i])) { uint32_t ty = cpa_u32(im, tr.drawn[i]); T->extraT[ty == 1 ? 0 : ty == 2 ? 1 : ty == 4 ? 2 : ty == 8 ? 3 : ty == CPA_SO_IPO ? 4 : 5]++; } if (ip && !in_set(P.drawn, P.nDrawn, tr.drawn[i]) && nfn < 64) fnL[nfn++] = tr.drawn[i]; }
    }
    /* sector set equality: trace f_8c05f026 sectors vs our sector list before frustum (those that reached do_sector) */
    int setEq = 0; if (haveTr) { setEq = ((uint32_t)nsec == tr.nSec); for (int i = 0; i < nsec && setEq; i++) if (!in_set(tr.sec, tr.nSec, secs[i])) setEq = 0; }
    int exact = haveTr && prIpo == trIpo && tpIpo == prIpo;       /* IPO submit set identical */
    T->scenes++; T->exact += exact; T->setEq += setEq; T->tr_ipo += trIpo; T->pr_ipo += prIpo; T->tp_ipo += tpIpo; T->trAll += trAll; T->prAll += prAll; T->tpAll += tpAll; if (nsec && S == s0) T->s0ramEq++;
    printf("SCENE %s %ld sectors pred %d trace %u (%s) | submitted: all pred %u trace %u both %u | IPOs pred %u trace %u both %u (FP %u FN %u) %s\n", level, scene, nsec, haveTr ? tr.nSec : 0, setEq ? "same set" : "DIFFERENT", prAll, trAll, tpAll, prIpo, trIpo, tpIpo, prIpo - tpIpo, trIpo - tpIpo, exact ? "EXACT" : "");
    if (g_verbose) { for (int i = 0; i < nfp; i++) printf("    FP ipo %08x (sector %08x, f2c %08x f30 %08x)\n", fpL[i], cpa_u32(im, fpL[i] + 0x1c), cpa_u32(im, fpL[i] + 0x2C), cpa_u32(im, fpL[i] + 0x30));
                     for (int i = 0; i < nfn; i++) printf("    FN ipo %08x (parent %08x, f2c %08x f30 %08x)\n", fnL[i], cpa_u32(im, fnL[i] + 0x1c), cpa_u32(im, fnL[i] + 0x2C), cpa_u32(im, fnL[i] + 0x30)); }

    /* ---- screen-space comparison: drawn IPO = IPO owning >= 1 native triangle matched to an oracle triangle; evidence-of-absence = IPO owning an on-screen, front-facing, non-twin native triangle but no matched one ---- */
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn);
    if (fb && sc) {
        uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
        float U[3], F[3], L[3], C[3]; for (int i = 0; i < 3; i++) { U[i] = rf(&ram, VA_ROW_U + 4u * i); F[i] = rf(&ram, VA_ROW_F + 4u * i); C[i] = rf(&ram, VA_POS + 4u * i); }
        L[0] = U[1]*F[2] - U[2]*F[1]; L[1] = U[2]*F[0] - U[0]*F[2]; L[2] = U[0]*F[1] - U[1]*F[0];
        double hfov = rf(&ram, VA_HFOV), asp = rf(&ram, VA_HFOV + 4), fx = 320.0 / tan(hfov / 2.0), fy = 240.0 / tan(hfov * asp / 2.0);
        uint32_t nt = sc->nVerts / 3; PTri *pt = calloc(nt ? nt : 1, sizeof *pt); uint32_t npt = 0; float *area = calloc(nt ? nt : 1, 4); uint8_t *onscr = calloc(nt ? nt : 1, 1), *isStatic = calloc(nt ? nt : 1, 1);
        for (uint32_t it = 0; it < sc->nItems; it++) { const CpaDrawItem *d = &sc->items[it]; if (d->isActor) continue;
            for (uint32_t k = 0; k + 2 < d->vertCount; k += 3) { uint32_t tri = d->firstVert / 3 + k / 3; PTri q; memset(&q, 0, sizeof q); int ok = 1; isStatic[tri] = 1;
                for (int j = 0; j < 3; j++) { const float *Pw = &sc->pos[(tri * 3 + j) * 3]; double r[3] = { Pw[0] - C[0], Pw[1] - C[1], Pw[2] - C[2] }; double zc = F[0]*r[0] + F[1]*r[1] + F[2]*r[2];
                    if (zc < NEAR_ZC) { ok = 0; break; } q.sx[j] = (float)(320.0 - fx * (L[0]*r[0] + L[1]*r[1] + L[2]*r[2]) / zc); q.sy[j] = (float)(240.0 - fy * (U[0]*r[0] + U[1]*r[1] + U[2]*r[2]) / zc); q.w[j] = (float)(1.0 / (4.0 * zc)); }
                if (!ok) continue; q.tri = tri; q.item = it; q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; pt[npt++] = q; } }
        qsort(pt, npt, sizeof *pt, cmp_cx);
        /* oracle triangles */
        uint32_t no = 0; float (*osx)[3] = calloc(nvert + 1, sizeof *osx), (*osy)[3] = calloc(nvert + 1, sizeof *osy), (*oz)[3] = calloc(nvert + 1, sizeof *oz);
        for (uint32_t i = 0; i < nstrip; i++) { const TaS *s = &strips[i]; if (s->sprite) continue; for (uint32_t k = 0; k + 2 < s->count; k++) { for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; osx[no][j] = v->x; osy[no][j] = v->y; oz[no][j] = v->z; } no++; } }
        const double tol = 0.1, ztol = 2e-3;
        for (uint32_t a = 0; a < no; a++) { float ocx = (osx[a][0] + osx[a][1] + osx[a][2]) / 3.0f; uint32_t lo = 0, hi = npt; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (pt[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
            for (uint32_t m = lo; m < npt && pt[m].cx <= ocx + (float)tol + 1e-3f; m++) { if (pt[m].used) continue; int hit = 0;
                for (int pi = 0; pi < 6 && !hit; pi++) { int ok = 1; for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j]; if (fabs(pt[m].sx[q] - osx[a][j]) > tol || fabs(pt[m].sy[q] - osy[a][j]) > tol || fabs(pt[m].w[q] - oz[a][j]) / (fabs(oz[a][j]) + 1e-9) > ztol) ok = 0; } hit = ok; }
                if (hit) { pt[m].used = 1; break; } } }
        /* per-IPO tallies */
        static uint32_t ipoD[8192], ipoE[8192], ipoETf[8192][3]; static int ipoETn[8192]; uint32_t nD = 0, nE = 0; uint32_t amb = 0;
        for (uint32_t m = 0; m < npt; m++) {
            const float *P9 = &sc->pos[pt[m].tri * 9]; uint32_t own[2], nown = cpa_vis_trimap_owners(pvt, P9, own, NULL, 2), ipo = nown == 1 ? own[0] : 0;   /* several owners (duplicate geometry) = ambiguous, skipped */
            if (pt[m].used) { if (!ipo) { amb++; continue; } if (!in_set(ipoD, nD, ipo) && nD < 8192) ipoD[nD++] = ipo; continue; }
            /* undrawn native triangle: evidence of absence only if fully on-screen, front-facing (area <= 0, the opaque one-sided rule), and not a twin of a drawn triangle */
            double ar = (pt[m].sx[1]-pt[m].sx[0])*(pt[m].sy[2]-pt[m].sy[0]) - (pt[m].sx[2]-pt[m].sx[0])*(pt[m].sy[1]-pt[m].sy[0]);
            int on = 1; for (int j = 0; j < 3; j++) if (pt[m].sx[j] < 1 || pt[m].sx[j] > 638 || pt[m].sy[j] < 1 || pt[m].sy[j] > 478) on = 0;
            if (!on || ar >= -0.5) continue;
            int twin = 0; for (uint32_t m2 = 0; m2 < npt && !twin; m2++) { if (m2 == m || !pt[m2].used) continue; if (fabsf(pt[m2].cx - pt[m].cx) > 0.2f) continue;
                for (int pi = 0; pi < 6 && !twin; pi++) { int ok = 1; for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j]; if (fabs(pt[m2].sx[q] - pt[m].sx[j]) > 0.2 || fabs(pt[m2].sy[q] - pt[m].sy[j]) > 0.2) ok = 0; } twin = ok; } }
            if (twin) continue;
            if (!ipo) { amb++; continue; }
            { uint32_t k = 0; while (k < nE && ipoE[k] != ipo) k++; if (k == nE && nE < 8192) { ipoE[nE] = ipo; ipoETn[nE] = 0; nE++; }
              if (k < nE) { uint32_t tf = sc->items[pt[m].item].texFlags; int q = 0; while (q < ipoETn[k] && ipoETf[k][q] != tf) q++; if (q == ipoETn[k] && q < 3) ipoETf[k][ipoETn[k]++] = tf; } }
            if (haveTr && in_set(tr.drawn, tr.nDrawn, ipo)) { int ac = sc->items[pt[m].item].alphaClass; T->eSub[ac + 1 > 4 ? 4 : ac + 1]++; T->eSubOv[sc->items[pt[m].item].overlayMode ? 1 : 0]++; }
        }
        /* an IPO with a drawn triangle is not "absent" even if it also has undrawn front-facing triangles (those are material/pass effects, see NATIVE_ENGINE.md) */
        uint32_t nEa = 0; static uint32_t ipoEa[8192]; for (uint32_t i = 0; i < nE; i++) if (!in_set(ipoD, nD, ipoE[i])) ipoEa[nEa++] = ipoE[i];
        uint32_t pD = 0, pE = 0, dMiss = 0, eNot = 0; for (uint32_t i = 0; i < nD; i++) { if (in_set(P.drawn, P.nDrawn, ipoD[i])) pD++; else dMiss++; }
        for (uint32_t i = 0; i < nEa; i++) { if (in_set(P.drawn, P.nDrawn, ipoEa[i])) pE++; else eNot++; }
        uint32_t trD = 0, trE = 0; if (haveTr) { for (uint32_t i = 0; i < nD; i++) trD += in_set(tr.drawn, tr.nDrawn, ipoD[i]); for (uint32_t i = 0; i < nEa; i++) trE += in_set(tr.drawn, tr.nDrawn, ipoEa[i]); }
        printf("    screen: IPOs with a matched oracle triangle D=%u (predicted %u, missed %u) | IPOs with on-screen front-facing undrawn triangles and no drawn one E=%u (predicted-drawn %u = false positive, predicted-absent %u) | ambiguous tris skipped %u | trace-submitted: D %u/%u, E %u/%u\n", nD, pD, dMiss, nEa, pE, eNot, amb, trD, nD, trE, nEa);
        if (g_verbose) { for (uint32_t i = 0; i < nD; i++) if (!in_set(P.drawn, P.nDrawn, ipoD[i])) printf("    D-miss ipo %08x (in trace: %d)\n", ipoD[i], haveTr ? in_set(tr.drawn, tr.nDrawn, ipoD[i]) : -1);
                         for (uint32_t i = 0; i < nEa; i++) if (in_set(P.drawn, P.nDrawn, ipoEa[i])) { uint32_t k = 0; while (ipoE[k] != ipoEa[i]) k++; uint32_t mk = 0; for (uint32_t q = 0; q < P.nDrawn; q++) if (P.drawn[q] == ipoEa[i]) mk = P.drawnMask[q]; printf("    E-pred-drawn ipo %08x mask %08x (in trace: %d) undrawn texFlags:", ipoEa[i], mk, haveTr ? in_set(tr.drawn, tr.nDrawn, ipoEa[i]) : -1); for (int q = 0; q < ipoETn[k]; q++) printf(" %08x", ipoETf[k][q]); printf("\n"); } }
        T->D += nD; T->P_D += pD; T->Dmiss += dMiss; T->E += nEa; T->P_E += pE; T->N_ok += eNot; T->ambTri += amb; T->trD_in += trD; T->trE_wrong += trE;
        free(pt); free(area); free(onscr); free(isStatic); free(osx); free(osy); free(oz); free(fb);
    }
    cpa_vis_free(&P); if (haveTr) { free(tr.sec); free(tr.visited); free(tr.drawn); } free(ram.b);
    return 0;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; long only = -1;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) only = atol(argv[++i]);
        else if (!strcmp(argv[i], "-v")) g_verbose = 1;
        else if (!strcmp(argv[i], "--no-flags")) g_noflags = 1;
        else if (!strcmp(argv[i], "--no-frustum")) g_nofrustum = 1;
        else if (!strcmp(argv[i], "--no-neighbours")) g_noneigh = 1;
        else if (!strcmp(argv[i], "--native-sector")) g_nativeSector = 1;
        else if (!strcmp(argv[i], "--ramdelta") && i + 1 < argc) g_ramDelta = atol(argv[++i]);
        else if (!strcmp(argv[i], "--tracedelta") && i + 1 < argc) g_traceDelta = atol(argv[++i]);
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--scene N] [-v] [--no-flags|--no-frustum|--no-neighbours|--native-sector]\n", argv[0]); return 2; }
    char fixp[1100], lvlp[1100]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata); char up[64]; snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c);
    snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN)) { fprintf(stderr, "cannot read %s / %s\n", fixp, lvlp); return 2; }
    if (!cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "scene load failed\n"); return 2; }
    uint32_t root = 0; { uint32_t w13, w16; memcpy(&w13, lvl + 13 * 4, 4); root = w13; memcpy(&w16, lvl + 16 * 4, 4); g_father = w16; }
    CpaVisTriMap pvt; if (!cpa_vis_trimap_build(&pvt, &img)) { fprintf(stderr, "trimap failed\n"); return 2; }
    long scenes[256]; int ns = read_scene_list(capdir, scenes); Tot T; memset(&T, 0, sizeof T);
    for (int i = 0; i < ns; i++) { if (only >= 0 && scenes[i] != only) continue; do_scene(&img, root, capdir, level, scenes[i], &T, &pvt, &sc); }
    printf("LEVEL %s scenes %llu | sector list equal to trace %llu | player sector via native lookup (lifted f_8c09458c rule) equals the game's sector %llu | IPO submit sets EXACT %llu | IPOs: predicted %llu trace %llu both %llu => precision %.2f%% recall %.2f%% | all SOs: predicted %llu trace %llu both %llu\n",
           level, (unsigned long long)T.scenes, (unsigned long long)T.setEq, (unsigned long long)T.s0native, (unsigned long long)T.exact, (unsigned long long)T.pr_ipo, (unsigned long long)T.tr_ipo, (unsigned long long)T.tp_ipo,
           T.pr_ipo ? 100.0 * T.tp_ipo / T.pr_ipo : 0.0, T.tr_ipo ? 100.0 * T.tp_ipo / T.tr_ipo : 0.0, (unsigned long long)T.prAll, (unsigned long long)T.trAll, (unsigned long long)T.tpAll);
    printf("LEVELSECTOR %s: sector the game traversed (f_8c05f4a0 arg) in %llu scenes: reproduced by RAM sector pointer of prev frame %llu / of this frame %llu; by native lookup(actor global position) of prev frame %llu / of this frame %llu\n", level, (unsigned long long)T.topN, (unsigned long long)T.topPtrPrev, (unsigned long long)T.topPtrCur, (unsigned long long)T.topNatPrev, (unsigned long long)T.topNatCur);
    printf("LEVELSCREEN %s drawn-IPO evidence D %llu (predicted %llu, missed %llu) recall %.2f%% | absent-IPO evidence E %llu (predicted-drawn %llu, predicted-absent %llu) => precision on evidence %.2f%% | of D in game trace %llu, of E in game trace %llu\n",
           level, (unsigned long long)T.D, (unsigned long long)T.P_D, (unsigned long long)T.Dmiss, T.D ? 100.0 * T.P_D / T.D : 0.0, (unsigned long long)T.E, (unsigned long long)T.P_E, (unsigned long long)T.N_ok,
           (T.P_D + T.P_E) ? 100.0 * T.P_D / (T.P_D + T.P_E) : 0.0, (unsigned long long)T.trD_in, (unsigned long long)T.trE_wrong);
    printf("LEVELEXTRA %s: SuperObjects the game submitted that the static predictor does not list (actors/dynamic world, not in the sector walk), by SO type [world(1)/actor(2)/sector(4)/physical(8)/IPO(0x20)/other]: %llu/%llu/%llu/%llu/%llu/%llu\n", level, (unsigned long long)T.extraT[0], (unsigned long long)T.extraT[1], (unsigned long long)T.extraT[2], (unsigned long long)T.extraT[3], (unsigned long long)T.extraT[4], (unsigned long long)T.extraT[5]);
    printf("LEVELEDIAG %s: undrawn on-screen front-facing non-twin native triangles inside IPOs the game DID submit, by INFERRED alphaClass [unknown/opaque/cutout/blend/additive]: %llu/%llu/%llu/%llu/%llu; in materials with overlayMode!=0: %llu, ==0: %llu\n", level, (unsigned long long)T.eSub[0], (unsigned long long)T.eSub[1], (unsigned long long)T.eSub[2], (unsigned long long)T.eSub[3], (unsigned long long)T.eSub[4], (unsigned long long)T.eSubOv[1], (unsigned long long)T.eSubOv[0]);
    cpa_vis_trimap_free(&pvt); cpa_scene_free(&sc); free(fix); free(lvl);
    return 0;
}
