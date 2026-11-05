/* ta_actor: kind-C comparison for POSED ACTORS (docs/NATIVE_ENGINE.md sec. 4, N1/N2).
 *   ta_actor CAPDIR DCDATA_DIR [--level Learn_10] [--scene N | --all] [--tol PX] [--ztol REL] [-v] [-vv]
 * Inputs: same capture dirs as ta_compare (f<N>/frame.bin = oracle TA stream of scene N, ram_<N-1>.bin = guest RAM at the end of the previous guest frame, camera read from it).
 * For every type-2 SuperObject in the RAM tree that has a live animation state (cpa_anim_cur: guest (anim, frame)) the actor is posed NATIVELY with cpa_anim_rig_pose
 * (actor matrix = the guest's global matrix of the actor SuperObject, SO+0x24; tables and geometry read through the RAM image, i.e. same reader as the DAT) and its type-1 elements are projected
 * with the verified camera model of ta_compare.c. Actors without a live state are placed UNPOSED (all ObjectsTable objects at the actor matrix) and tallied separately.
 * Each oracle triangle is classified: STATIC (equals a projected static native triangle, 0.1 px / 2e-3 rel. 1/w, any vertex order), POSED (not static, equals a posed-actor triangle),
 * UNPOSED, or NONE (then: near-plane fragment if a vertex has z_ta == 1.0, else other). Nothing here is read from game code beyond what cpa_anim/ta_compare already verified. */
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_anim.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>

#define RAM_BASE 0x8C000000u
#define NEAR_ZC 0.25
typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { float sx[3], sy[3], w[3], u[3], v[3], cx; int actor; uint8_t posed; } NTri;
typedef struct { float sx[3], sy[3], z[3], u[3], v[3]; uint32_t tcw, list; int cls, actor, uvOnlyActor; } OTri;
enum { C_STATIC, C_POSED, C_UNPOSED, C_NEARFRAG, C_OTHER, C_STATCLIP, C_STATPLANE, C_SCREENQ };
typedef struct { float P[9]; uint8_t clipped; } StatW;   /* world triangle of every static native triangle; clipped = a vertex behind the near plane or off the 640x480 viewport */
static const int perms[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };

typedef struct { uint32_t so, anim, frame, nCh, nObj, tris, posed; int ok; uint32_t hit, uvHit; float actorPos[3]; } ActInfo;

static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - RAM_BASE), 4); return f; }
static int cmp_cx(const void *a, const void *b) { float x = ((const NTri *)a)->cx, y = ((const NTri *)b)->cx; return x < y ? -1 : x > y; }

typedef struct { double fx, fy, C[3], U[3], F[3], L[3]; } Cam;
static int proj(const Cam *c, const float P[3], float *sx, float *sy, float *w) {
    double r[3] = { P[0] - c->C[0], P[1] - c->C[1], P[2] - c->C[2] };
    double zc = c->F[0]*r[0] + c->F[1]*r[1] + c->F[2]*r[2]; if (zc < NEAR_ZC) return 0;
    *sx = (float)(320.0 - c->fx * (c->L[0]*r[0] + c->L[1]*r[1] + c->L[2]*r[2]) / zc);
    *sy = (float)(240.0 - c->fy * (c->U[0]*r[0] + c->U[1]*r[1] + c->U[2]*r[2]) / zc);
    *w = (float)(1.0 / (4.0 * zc)); return 1;
}
typedef struct { NTri *a; uint32_t n, cap, behind; } NList;
static void nl_push(NList *l, const NTri *t) { if (l->n == l->cap) { l->cap = l->cap ? l->cap * 2 : 4096; l->a = realloc(l->a, l->cap * sizeof *l->a); } l->a[l->n++] = *t; }

/* all type-1 triangles of a GeometricObject, vertices through the row-vector matrix M (same float arithmetic as cpa_scene.c xform) */
static void geo_tris(const CpaImage *im, uint32_t geo, const float M[16], const Cam *cam, int actor, int posed, NList *out) {
    uint32_t pv, ptypes, pelems, cnt;
    if (!cpa_rd32(im, geo, &pv) || !cpa_rd32(im, geo + 0x10, &ptypes) || !cpa_rd32(im, geo + 0x14, &pelems) || !cpa_rd32(im, geo + 0x2C, &cnt)) return;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !cpa_is_ptr(im, pv) || !cpa_is_ptr(im, ptypes) || !cpa_is_ptr(im, pelems) || !cpa_ptr(im, pv, (size_t)nv * 12)) return;
    float (*vw)[3] = malloc(sizeof(float[3]) * nv); if (!vw) return;
    for (uint32_t i = 0; i < nv; i++) { float v[3]; for (int k = 0; k < 3; k++) if (!cpa_rdf(im, pv + i * 12 + k * 4, &v[k])) v[k] = 0;
        for (int j = 0; j < 3; j++) vw[i][j] = v[0] * M[j] + v[1] * M[4+j] + v[2] * M[8+j] + M[12+j]; }
    for (uint32_t e = 0; e < ne; e++) {
        uint16_t et; uint32_t el, w[8]; int ok = 1;
        if (!cpa_rd16(im, ptypes + 2 * e, &et) || et != 1 || !cpa_rd32(im, pelems + 4 * e, &el) || !cpa_is_ptr(im, el)) continue;
        for (int i = 0; i < 8; i++) ok &= cpa_rd32(im, el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !cpa_is_ptr16(im, w[2]) || !cpa_is_ptr16(im, w[3]) || !cpa_is_ptr(im, w[5]) || !cpa_ptr(im, w[2], (size_t)ntri * 6) || !cpa_ptr(im, w[3], (size_t)ntri * 6) || !cpa_ptr(im, w[5], (size_t)nuv * 8)) continue;
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3]; int fo = 1; NTri q; memset(&q, 0, sizeof q);
            for (int k = 0; k < 3; k++) fo &= cpa_rd16(im, w[2] + t * 6 + k * 2, &vi[k]) && cpa_rd16(im, w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) continue;
            int pok = 1;
            for (int k = 0; k < 3; k++) { float u = 0, v = 0; cpa_rdf(im, w[5] + ui[k] * 8u, &u); cpa_rdf(im, w[5] + ui[k] * 8u + 4, &v); q.u[k] = u; q.v[k] = v;
                if (!proj(cam, vw[vi[k]], &q.sx[k], &q.sy[k], &q.w[k])) pok = 0; }
            if (!pok) { out->behind++; continue; }
            q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; q.actor = actor; q.posed = (uint8_t)posed; nl_push(out, &q);
        }
    }
    free(vw);
}
static int match(const NList *l, const OTri *o, double tol, double ztol, int *pi_out) {
    float ocx = (o->sx[0] + o->sx[1] + o->sx[2]) / 3.0f; uint32_t lo = 0, hi = l->n;
    while (lo < hi) { uint32_t m = (lo + hi) / 2; if (l->a[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
    for (uint32_t m = lo; m < l->n && l->a[m].cx <= ocx + (float)tol + 1e-3f; m++)
        for (int pi = 0; pi < 6; pi++) { int ok = 1;
            for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j];
                if (fabs(l->a[m].sx[q] - o->sx[j]) > tol || fabs(l->a[m].sy[q] - o->sy[j]) > tol || fabs(l->a[m].w[q] - o->z[j]) / (fabs(o->z[j]) + 1e-9) > ztol) ok = 0; }
            if (ok) { if (pi_out) *pi_out = pi; return (int)m; } }
    return -1;
}
static int uv_equal(const NTri *t, const OTri *o) {
    for (int pi = 0; pi < 6; pi++) { int ok = 1; for (int j = 0; j < 3; j++) { int q = perms[pi][j]; if (fabsf(t->u[q] - o->u[j]) > 1e-3f || fabsf(t->v[q] - o->v[j]) > 1e-3f) { ok = 0; break; } } if (ok) return 1; }
    return 0;
}
static int uv_equal_perm(const NTri *t, const OTri *o, int pi) {
    for (int j = 0; j < 3; j++) { int q = perms[pi][j]; if (fabsf(t->u[q] - o->u[j]) > 1e-3f || fabsf(t->v[q] - o->v[j]) > 1e-3f) return 0; }
    return 1;
}

typedef struct { const CpaImage *im; const CpaAnimTables *T; const Cam *cam; NList *posed, *unposed; ActInfo *ai; int nai; int verbose; } Ctx;
static void do_actor(Ctx *c, uint32_t so) {
    CpaAnimActor A; CpaAnimCur cur; CpaAnimRig *rig; float M[16]; ActInfo *ai;
    if (c->nai >= 512) return;
    if (!cpa_anim_actor_open(&A, c->im, c->T, so)) return;
    ai = &c->ai[c->nai++]; memset(ai, 0, sizeof *ai); ai->so = so; ai->nObj = A.nObj;
    if (!cpa_anim_read_matrix(c->im, cpa_u32(c->im, so + 0x24), M)) { ai->ok = -1; return; }
    for (int i = 0; i < 3; i++) ai->actorPos[i] = M[12 + i];
    uint32_t before = c->posed->n, beforeU = c->unposed->n;
    int idx = c->nai - 1;
    rig = malloc(sizeof *rig);
    if (A.chanList && cpa_anim_cur(&A, &cur) && cpa_anim_rig_pose(&A, cur.animIdx, cur.frame, CPA_ANIM_BEST, M, rig)) {
        ai->ok = 1; ai->anim = cur.animIdx; ai->frame = cur.frame; ai->nCh = rig->pose.nCh;
        for (unsigned ch = 0; ch < rig->pose.nCh; ch++) { int obj = rig->pose.ch[ch].obj; if (obj < 0) continue; uint32_t geo = cpa_anim_obj_geo(&A, obj); if (geo) geo_tris(c->im, geo, rig->objM[ch], c->cam, idx, 1, c->posed); }
        ai->posed = 1; ai->tris = c->posed->n - before;
    } else {
        for (unsigned o = 0; o < A.nObj && o < 512; o++) { uint32_t geo = cpa_anim_obj_geo(&A, (int)o); if (geo) geo_tris(c->im, geo, M, c->cam, idx, 0, c->unposed); }
        ai->tris = c->unposed->n - beforeU;
    }
    free(rig);
}
static void walk(Ctx *c, uint32_t va, int depth, unsigned *n) {
    if (depth > 40 || (*n)++ > 20000) return;
    uint32_t type, ch; if (!cpa_rd32(c->im, va, &type)) return;
    if (type == 2) do_actor(c, va);
    ch = cpa_u32(c->im, va + 8);
    for (unsigned k = 0; ch && k < 20000 && cpa_is_ptr(c->im, ch); k++) { walk(c, ch, depth + 1, n); ch = cpa_u32(c->im, ch + 0x14); }
}

typedef struct { uint32_t oracle, stat, posed, unposed, nearfrag, other, uvAgree, uvDis, statClip, statPlane, screenQ, screenQHud, rTiny, rStaticUv, rActorUv, rUnknown, rUnkOpaque; } Tot;

static int g_actorRamSame;   /* --actor-ram-same: actor state from ram_<N> (end of the SAME guest frame) while the camera still comes from ram_<N-1> */
static int g_ramStatic;   /* --ram-static: static IPO geometry re-walked from the RAM dump (live SuperObject matrices) instead of the DAT */
static int do_scene(const CpaScene *sc0, const uint8_t *lvl, size_t lvlN, const char *capdir, const char *level, long scene, double tol, double ztol, int verbose, Tot *tot) {
    char p[1100]; size_t n; long rs = scene - 1; snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); FILE *t = fopen(p, "rb"); if (t) fclose(t); else rs = scene;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) { fprintf(stderr, "bad %s\n", p); return 2; }
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) { fprintf(stderr, "cannot read %s\n", p); return 2; }
    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    if (16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) != fn) { fprintf(stderr, "frame.bin size mismatch\n"); return 2; }
    Cam cam; float hfov = rdf(ram, 0x8C00F300), asp = rdf(ram, 0x8C00F304);
    for (int i = 0; i < 3; i++) { cam.U[i] = rdf(ram, 0x8C00F308 + 4 * i); cam.F[i] = rdf(ram, 0x8C00F314 + 4 * i); cam.C[i] = rdf(ram, 0x8C00F394 + 4 * i); }
    cam.L[0] = cam.U[1]*cam.F[2] - cam.U[2]*cam.F[1]; cam.L[1] = cam.U[2]*cam.F[0] - cam.U[0]*cam.F[2]; cam.L[2] = cam.U[0]*cam.F[1] - cam.U[1]*cam.F[0];
    cam.fx = 320.0 / tan(hfov / 2.0); cam.fy = 240.0 / tan(hfov * asp / 2.0);
    if (!isfinite(hfov) || hfov < 0.1f || hfov > 3.0f) { printf("scene %ld: no valid camera\n", scene); return 1; }
    CpaScene scR; const CpaScene *sc = sc0; CpaImage ri; uint32_t rootVa; memcpy(&rootVa, lvl + 13 * 4, 4);
    if (g_ramStatic) { cpa_image_init(&ri); cpa_image_add(&ri, ram, n, RAM_BASE); if (!cpa_scene_load(&scR, &ri, rootVa)) { fprintf(stderr, "ram scene load failed\n"); return 2; } sc = &scR; }
    /* static native triangles (scene draw list, non-actor items) */
    NList st; memset(&st, 0, sizeof st); StatW *sw = NULL; uint32_t nsw = 0, capsw = 0;
    for (uint32_t it = 0; it < sc->nItems; it++) { const CpaDrawItem *d = &sc->items[it]; if (d->isActor) continue;
        for (uint32_t k = 0; k + 2 < d->vertCount; k += 3) { uint32_t tr = d->firstVert / 3 + k / 3; NTri q; memset(&q, 0, sizeof q); int ok = 1;
            for (int j = 0; j < 3; j++) { if (!proj(&cam, &sc->pos[(tr * 3 + j) * 3], &q.sx[j], &q.sy[j], &q.w[j])) { ok = 0; break; } q.u[j] = sc->uv[(tr * 3 + j) * 2]; q.v[j] = sc->uv[(tr * 3 + j) * 2 + 1]; }
            { StatW w; memcpy(w.P, &sc->pos[tr * 9], sizeof w.P); w.clipped = 0;
              for (int j = 0; j < 3; j++) { double r[3] = { w.P[3*j]-cam.C[0], w.P[3*j+1]-cam.C[1], w.P[3*j+2]-cam.C[2] }; double zc = cam.F[0]*r[0]+cam.F[1]*r[1]+cam.F[2]*r[2];
                if (zc < NEAR_ZC) w.clipped = 1; else { double sx = 320.0 - cam.fx * (cam.L[0]*r[0]+cam.L[1]*r[1]+cam.L[2]*r[2]) / zc, sy = 240.0 - cam.fy * (cam.U[0]*r[0]+cam.U[1]*r[1]+cam.U[2]*r[2]) / zc; if (sx < 0 || sx >= 640 || sy < 0 || sy >= 480) w.clipped = 1; } }
              if (nsw == capsw) { capsw = capsw ? capsw * 2 : 4096; sw = realloc(sw, capsw * sizeof *sw); } sw[nsw++] = w; }
            if (!ok) { st.behind++; continue; } q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; nl_push(&st, &q); } }
    /* actors from the RAM image */
    uint8_t *ram2 = NULL; size_t n2 = 0; CpaImage im; cpa_image_init(&im);
    if (g_actorRamSame) { snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, scene); ram2 = slurp(p, &n2); if (ram2 && n2 == (16u << 20)) cpa_image_add(&im, ram2, n2, RAM_BASE); else { free(ram2); ram2 = NULL; } }
    if (!ram2) cpa_image_add(&im, ram, n, RAM_BASE);
    CpaAnimTables T;
    if (!cpa_anim_tables_from_header(lvl, lvlN, &T)) return 2;
    NList po, un; memset(&po, 0, sizeof po); memset(&un, 0, sizeof un); ActInfo *ai = calloc(512, sizeof *ai);
    Ctx c = { &im, &T, &cam, &po, &un, ai, 0, verbose }; unsigned wn = 0; uint32_t root; memcpy(&root, lvl + 13 * 4, 4);
    walk(&c, root, 0, &wn);
    qsort(st.a, st.n, sizeof *st.a, cmp_cx); qsort(po.a, po.n, sizeof *po.a, cmp_cx); qsort(un.a, un.n, sizeof *un.a, cmp_cx);
    /* oracle triangles */
    OTri *ot = calloc(nvert + 1, sizeof *ot); uint32_t no = 0, nspr = 0;
    for (uint32_t i = 0; i < nstrip; i++) { const TaS *s = &strips[i]; if (s->sprite) { nspr++; continue; }
        for (uint32_t k = 0; k + 2 < s->count; k++) { OTri *o = &ot[no++]; for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; o->sx[j] = v->x; o->sy[j] = v->y; o->z[j] = v->z; o->u[j] = v->u; o->v[j] = v->v; } o->tcw = s->tcw; o->list = s->list; } }
    Tot sc_t; memset(&sc_t, 0, sizeof sc_t); sc_t.oracle = no;
    uint32_t *uvOnly = calloc(512, 4);
    for (uint32_t a = 0; a < no; a++) {
        OTri *o = &ot[a]; int pi = 0, m; o->actor = -1; o->uvOnlyActor = -1;
        if (match(&st, o, tol, ztol, &pi) >= 0) { o->cls = C_STATIC; sc_t.stat++; continue; }
        if ((m = match(&po, o, tol, ztol, &pi)) >= 0) { o->cls = C_POSED; o->actor = po.a[m].actor; sc_t.posed++; ai[o->actor].hit++; if (uv_equal_perm(&po.a[m], o, pi)) sc_t.uvAgree++; else sc_t.uvDis++; continue; }
        if ((m = match(&un, o, tol, ztol, &pi)) >= 0) { o->cls = C_UNPOSED; o->actor = un.a[m].actor; sc_t.unposed++; ai[o->actor].hit++; continue; }
        { int found = 0; double R[3][3]; int okz = 1;   /* UV-free: all 3 vertices on the plane of ONE static native triangle and inside it (ta_compare clip model: plane 3e-3*Zc, bary -0.02) */
          for (int j = 0; j < 3; j++) { double zc = 1.0 / (4.0 * o->z[j]); if (!(o->z[j] > 0) || !isfinite(zc)) { okz = 0; break; }
              double lr = (320.0 - o->sx[j]) * zc / cam.fx, ur = (240.0 - o->sy[j]) * zc / cam.fy; for (int k = 0; k < 3; k++) R[j][k] = lr * cam.L[k] + ur * cam.U[k] + zc * cam.F[k]; }
          for (uint32_t t2 = 0; okz && t2 < nsw && !found; t2++) { const float *P = sw[t2].P; double A[3][3];
              for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) A[j][k] = P[j*3+k] - cam.C[k];
              double e1[3] = { A[1][0]-A[0][0], A[1][1]-A[0][1], A[1][2]-A[0][2] }, e2[3] = { A[2][0]-A[0][0], A[2][1]-A[0][1], A[2][2]-A[0][2] };
              double nn[3] = { e1[1]*e2[2]-e1[2]*e2[1], e1[2]*e2[0]-e1[0]*e2[2], e1[0]*e2[1]-e1[1]*e2[0] }; double nl = sqrt(nn[0]*nn[0]+nn[1]*nn[1]+nn[2]*nn[2]); if (nl < 1e-12) continue;
              double d11 = e1[0]*e1[0]+e1[1]*e1[1]+e1[2]*e1[2], d12 = e1[0]*e2[0]+e1[1]*e2[1]+e1[2]*e2[2], d22 = e2[0]*e2[0]+e2[1]*e2[1]+e2[2]*e2[2], den = d11*d22 - d12*d12; int all = 1;
              for (int j = 0; j < 3 && all; j++) { double r[3] = { R[j][0]-A[0][0], R[j][1]-A[0][1], R[j][2]-A[0][2] }; double dist = fabs(r[0]*nn[0]+r[1]*nn[1]+r[2]*nn[2]) / nl, zc = 1.0 / (4.0 * o->z[j]);
                  if (dist > 3e-3 * zc + 1e-4) { all = 0; break; }
                  double d1 = r[0]*e1[0]+r[1]*e1[1]+r[2]*e1[2], d2 = r[0]*e2[0]+r[1]*e2[1]+r[2]*e2[2], b1 = (d22*d1 - d12*d2) / den, b2 = (d11*d2 - d12*d1) / den, b0 = 1.0 - b1 - b2;
                  if (b0 < -0.02 || b1 < -0.02 || b2 < -0.02) all = 0; }
              if (all) found = 1 + sw[t2].clipped; }
          if (found) { o->cls = found == 2 ? C_STATCLIP : C_STATPLANE; if (found == 2) sc_t.statClip++; else sc_t.statPlane++; continue; } }
        { /* screen-aligned quad half: equal depth at all 3 vertices and two axis-aligned edges (billboard sprite / particle / HUD / lens quad); z_ta >= 100 (Zc <= 0.0025) = 2D HUD layer */
          int eq = fabsf(o->z[0]-o->z[1]) < 1e-4f * o->z[0] && fabsf(o->z[0]-o->z[2]) < 1e-4f * o->z[0], ax = 0;
          for (int a1 = 0; a1 < 3; a1++) for (int b1 = 0; b1 < 3; b1++) if (a1 != b1) { int c2 = 3 - a1 - b1; /* corner a1: one edge horizontal, one vertical */
              if (fabsf(o->sy[a1]-o->sy[b1]) < 0.02f && fabsf(o->sx[a1]-o->sx[c2]) < 0.02f) ax = 1; }
          if (eq && ax) { o->cls = C_SCREENQ; sc_t.screenQ++; if (o->z[0] >= 100.0f) sc_t.screenQHud++; continue; } }
        int nf = 0; for (int j = 0; j < 3; j++) if (fabsf(o->z[j] - 1.0f) < 2e-3f) nf = 1;
        o->cls = nf ? C_NEARFRAG : C_OTHER; if (nf) sc_t.nearfrag++; else sc_t.other++;
        if (!nf) {
            double ar = fabs((double)(o->sx[1]-o->sx[0])*(o->sy[2]-o->sy[0]) - (double)(o->sx[2]-o->sx[0])*(o->sy[1]-o->sy[0])) * 0.5;
            int su = 0; for (uint32_t m2 = 0; m2 < st.n && !su; m2++) if (uv_equal(&st.a[m2], o)) su = 1;
            for (uint32_t m2 = 0; m2 < po.n && o->uvOnlyActor < 0; m2++) if (uv_equal(&po.a[m2], o)) o->uvOnlyActor = po.a[m2].actor;
            for (uint32_t m2 = 0; m2 < un.n && o->uvOnlyActor < 0; m2++) if (uv_equal(&un.a[m2], o)) o->uvOnlyActor = un.a[m2].actor;
            if (o->uvOnlyActor >= 0) { uvOnly[o->uvOnlyActor]++; ai[o->uvOnlyActor].uvHit++; }
            if (ar < 10.0) sc_t.rTiny++; else if (su) sc_t.rStaticUv++; else if (o->uvOnlyActor >= 0) sc_t.rActorUv++; else { sc_t.rUnknown++; if (o->list == 0) sc_t.rUnkOpaque++; }
        }
    }
    uint32_t nonStatic = no - sc_t.stat;
    printf("SCENE %s %ld oracle %u (sprite strips %u) | native static %u (behind near %u), posed-actor tris %u (behind %u), unposed-actor tris %u | STATIC %u POSED %u UNPOSED %u static-clip-frag %u static-plane(decal/subdiv) %u nearfrag-unattributed %u other %u | non-static %u: posed-explained %.2f%% (posed+unposed %.2f%%) | posed UV agree %u/%u\n",
           level, scene, no, nspr, st.n, st.behind, po.n, po.behind, un.n, sc_t.stat, sc_t.posed, sc_t.unposed, sc_t.statClip, sc_t.statPlane, sc_t.nearfrag, sc_t.other, nonStatic,
           nonStatic ? 100.0 * sc_t.posed / nonStatic : 0.0, nonStatic ? 100.0 * (sc_t.posed + sc_t.unposed) / nonStatic : 0.0, sc_t.uvAgree, sc_t.uvAgree + sc_t.uvDis);
    if (verbose) {
        for (int i = 0; i < c.nai; i++) if (ai[i].hit || uvOnly[i] || verbose > 1)
            printf("  actor %08X %s anim %u frame %u ch %u obj %u tris %u pos (%.2f %.2f %.2f): oracle hits %u, geometry-miss but UV-identical %u\n", ai[i].so, ai[i].posed ? "POSED" : "unposed", ai[i].anim, ai[i].frame, ai[i].nCh, ai[i].nObj, ai[i].tris, ai[i].actorPos[0], ai[i].actorPos[1], ai[i].actorPos[2], ai[i].hit, uvOnly[i]);
        if (verbose > 2) for (uint32_t a = 0; a < no; a++) if (ot[a].cls != C_STATIC && ot[a].cls != C_POSED) {
            int su = 0; for (uint32_t m2 = 0; m2 < st.n && !su; m2++) if (uv_equal(&st.a[m2], &ot[a])) su = 1;
            double ar = fabs((double)(ot[a].sx[1]-ot[a].sx[0])*(ot[a].sy[2]-ot[a].sy[0]) - (double)(ot[a].sx[2]-ot[a].sx[0])*(ot[a].sy[1]-ot[a].sy[0])) * 0.5;
            printf("  NONSTATIC tri %u cls %d list %u tcw %08x area %.2f staticUV %d: (%.2f,%.2f) (%.2f,%.2f) (%.2f,%.2f) z %.4f %.4f %.4f uv (%.3f %.3f) (%.3f %.3f) (%.3f %.3f)\n", a, ot[a].cls, ot[a].list, ot[a].tcw, ar, su, ot[a].sx[0], ot[a].sy[0], ot[a].sx[1], ot[a].sy[1], ot[a].sx[2], ot[a].sy[2], ot[a].z[0], ot[a].z[1], ot[a].z[2], ot[a].u[0], ot[a].v[0], ot[a].u[1], ot[a].v[1], ot[a].u[2], ot[a].v[2]); }
        if (verbose > 1) for (uint32_t a = 0; a < no; a++) if (ot[a].cls == C_OTHER) printf("  OTHER tri %u list %u tcw %08x uvActor %d: (%.2f,%.2f) (%.2f,%.2f) (%.2f,%.2f) z %.4f %.4f %.4f uv (%.3f %.3f)\n", a, ot[a].list, ot[a].tcw, ot[a].uvOnlyActor, ot[a].sx[0], ot[a].sy[0], ot[a].sx[1], ot[a].sy[1], ot[a].sx[2], ot[a].sy[2], ot[a].z[0], ot[a].z[1], ot[a].z[2], ot[a].u[0], ot[a].v[0]);
    }
    if (tot) { tot->oracle += sc_t.oracle; tot->stat += sc_t.stat; tot->posed += sc_t.posed; tot->unposed += sc_t.unposed; tot->nearfrag += sc_t.nearfrag; tot->other += sc_t.other; tot->uvAgree += sc_t.uvAgree; tot->uvDis += sc_t.uvDis; tot->screenQ += sc_t.screenQ; tot->screenQHud += sc_t.screenQHud; tot->statClip += sc_t.statClip; tot->statPlane += sc_t.statPlane; tot->rTiny += sc_t.rTiny; tot->rStaticUv += sc_t.rStaticUv; tot->rActorUv += sc_t.rActorUv; tot->rUnknown += sc_t.rUnknown; tot->rUnkOpaque += sc_t.rUnkOpaque; }
    if (g_ramStatic) cpa_scene_free(&scR);
    free(sw); free(st.a); free(po.a); free(un.a); free(ai); free(ot); free(uvOnly); free(ram); free(ram2); free(fb);
    return 0;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; long scene = -1; double tol = 0.1, ztol = 2e-3; int verbose = 0, all = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) scene = atol(argv[++i]);
        else if (!strcmp(argv[i], "--tol") && i + 1 < argc) tol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--ztol") && i + 1 < argc) ztol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--all")) all = 1; else if (!strcmp(argv[i], "--ram-static")) g_ramStatic = 1; else if (!strcmp(argv[i], "--actor-ram-same")) g_actorRamSame = 1;
        else if (!strcmp(argv[i], "-v")) verbose = 1; else if (!strcmp(argv[i], "-vv")) verbose = 2; else if (!strcmp(argv[i], "-vvv")) verbose = 3;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--scene N | --all] [--tol px] [--ztol rel] [-v|-vv]\n", argv[0]); return 2; }
    long scenes[256]; int ns = 0;
    { DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long k; if (sscanf(e->d_name, "f%ld", &k) == 1 && ns < 256) scenes[ns++] = k; } if (d) closedir(d); }
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    if (!all) { if (scene < 0 && ns) scene = scenes[0]; scenes[0] = scene; ns = 1; }
    char fixp[1100], lvlp[1100], up[64]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata);
    snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c); snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN) || !cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "load failed\n"); return 2; }
    Tot tot; memset(&tot, 0, sizeof tot);
    for (int i = 0; i < ns; i++) do_scene(&sc, lvl, lvlN, capdir, level, scenes[i], tol, ztol, verbose, &tot);
    uint32_t ns2 = tot.oracle - tot.stat, rest = ns2 - tot.statClip - tot.statPlane - tot.screenQ;   /* non-static, not a clip fragment/decal of a static triangle */
    printf("LEVEL %s scenes %d oracle %u STATIC %u | non-static %u = POSED %u + UNPOSED %u + static-clip-fragments %u + static-plane(decal/subdiv) %u + screen-aligned quad %u (of which HUD z>=100: %u) + near-frag-unattributed %u + other %u | posed share of non-static %.2f%%, of non-static minus static clip/plane %.2f%% (%u; minus clip/plane/screen quads) | posed UV agree %u/%u\n",
           level, ns, tot.oracle, tot.stat, ns2, tot.posed, tot.unposed, tot.statClip, tot.statPlane, tot.screenQ, tot.screenQHud, tot.nearfrag, tot.other, ns2 ? 100.0 * tot.posed / ns2 : 0.0, rest ? 100.0 * tot.posed / rest : 0.0, rest, tot.uvAgree, tot.uvAgree + tot.uvDis);
    printf("  residual 'other' %u: tiny (<10 px^2) %u, not tiny with UV identical to a STATIC triangle %u, not tiny UV identical only to an actor triangle %u, not tiny UV identical to nothing %u (opaque list %u)\n",
           tot.other, tot.rTiny, tot.rStaticUv, tot.rActorUv, tot.rUnknown, tot.rUnkOpaque);
    cpa_scene_free(&sc); free(fix); free(lvl);
    return 0;
}
