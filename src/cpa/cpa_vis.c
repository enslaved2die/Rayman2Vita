/* cpa_vis: see cpa_vis.h for the rule, evidence tags and limits. Moved from tools/cpa_tests/vis_predict.c (arithmetic kept identical: float planes, same loops). */
#include "cpa_vis.h"
#include "cpa_scene.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

/* ---------------- frustum ---------------- */
void cpa_vis_frustum_from_planes(CpaVisFrustum *f, const float pos[3], const float up[3], const float fwd[3], const float side[4][4], float nearDist) {
    float L[3] = { up[1]*fwd[2] - up[2]*fwd[1], up[2]*fwd[0] - up[0]*fwd[2], up[0]*fwd[1] - up[1]*fwd[0] };
    for (int i = 0; i < 3; i++) f->C[i] = pos[i];
    for (int k = 0; k < 4; k++) {
        float vx = side[k][0], vy = side[k][1], vz = side[k][2];
        for (int i = 0; i < 3; i++) f->n[k][i] = -vx * L[i] + vy * up[i] + vz * fwd[i];   /* outward normal (VERIFIED against f_8c084d00) */
        f->d[k] = side[k][3];
    }
    for (int i = 0; i < 3; i++) f->n[4][i] = -fwd[i];
    f->d[4] = -nearDist;
}

void cpa_vis_frustum_from_camera(CpaVisFrustum *f, const CpaCamera *cam, float hHalf, float upHalf, float downHalf) {
    float side[4][4] = {
        { -cosf(hHalf), 0.0f, -sinf(hHalf), 0.0f },      /* left  */
        {  cosf(hHalf), 0.0f, -sinf(hHalf), 0.0f },      /* right */
        { 0.0f,  cosf(upHalf),   -sinf(upHalf),   0.0f },/* up    */
        { 0.0f, -cosf(downHalf), -sinf(downHalf), 0.0f } /* down  */
    };
    cpa_vis_frustum_from_planes(f, cam->pos, cam->up, cam->fwd, side, cam->nearZ);
}

int cpa_vis_box_test(const CpaVisFrustum *f, const float mn[3], const float mx[3]) {
    for (int k = 0; k < 5; k++) {
        float m = 0;
        for (int i = 0; i < 3; i++) { float lo = (mn[i] - f->C[i]) * f->n[k][i], hi = (mx[i] - f->C[i]) * f->n[k][i]; m += lo < hi ? lo : hi; }
        if (m > f->d[k]) return 0;
    }
    return 1;
}

/* ---------------- current sector ---------------- */
uint32_t cpa_vis_level_father(const CpaImage *im) {
    if (!im || im->nReg < 1 || im->reg[0].n < 17 * 4) return 0;
    const uint8_t *p = im->reg[0].p + 16 * 4;
    return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}

uint32_t cpa_vis_find_sector(const CpaImage *im, uint32_t father, const float pos[3]) {
    uint32_t best[2] = { 0, 0 }, lastc = 0; int bp[2] = { 0, 0 }; double bd[2] = { 1e30, 1e30 };
    uint32_t c = cpa_u32(im, father + 8); int g = 0;
    while (c && g++ < 100000) {
        lastc = c;
        uint32_t d = cpa_u32(im, c + 4); float mn[3], mx[3]; int in = 1; double d2 = 0;
        for (int k = 0; k < 3; k++) {
            mn[k] = cpa_f32(im, d + 0x48 + 4u * k); mx[k] = cpa_f32(im, d + 0x54 + 4u * k);
            if (mn[k] > pos[k] || pos[k] > mx[k]) in = 0;
            double dc = pos[k] - 0.5 * (mn[k] + mx[k]); d2 += dc * dc;
        }
        if (in) {
            uint8_t b64 = 0, b67 = 0; cpa_rd8(im, d + 0x64, &b64); cpa_rd8(im, d + 0x67, &b67);
            int grp = b64 != 0, pr = (int8_t)b67;
            if (pr > bp[grp]) { bp[grp] = pr; bd[grp] = d2; best[grp] = c; }
            else if (pr == bp[grp] && d2 < bd[grp]) { bd[grp] = d2; best[grp] = c; }
        }
        c = cpa_u32(im, c + 0x14);
    }
    return best[0] ? best[0] : best[1] ? best[1] : lastc;
}

/* ---------------- predictor ---------------- */
void cpa_vis_opts_default(CpaVisOpts *o) { memset(o, 0, sizeof *o); o->mask = 0xFFFFFFFFu; }

typedef struct { uint32_t *a; uint32_t n, cap; } U32Vec;
static int vpush(U32Vec *v, uint32_t x) {
    if (v->n == v->cap) { uint32_t nc = v->cap ? v->cap * 2 : 256; uint32_t *p = (uint32_t *)realloc(v->a, nc * 4); if (!p) return 0; v->a = p; v->cap = nc; }
    v->a[v->n++] = x; return 1;
}

typedef struct { const CpaImage *im; CpaVisFrustum fr; uint32_t mask; int useFlags, useFrustum, oom; U32Vec drawn, drawnMask, visited; } Pred;

static int so_bv(const CpaImage *im, uint32_t so, float mn[3], float mx[3]) {      /* SO+0x34 -> {min,max}; 0 if none */
    uint32_t bv = cpa_u32(im, so + 0x34); if (!bv || !cpa_is_ptr(im, bv)) return 0;
    for (int i = 0; i < 3; i++) { mn[i] = cpa_f32(im, bv + 4u * i); mx[i] = cpa_f32(im, bv + 12u + 4u * i); }
    return 1;
}
static void visit(Pred *P, uint32_t so, uint32_t maskIn, int res, int depth);
static void visit_children(Pred *P, uint32_t so, uint32_t m, int depth) {
    uint32_t c = cpa_u32(P->im, so + 8); int guard = 0;
    while (c && guard++ < 100000) {
        float mn[3], mx[3]; int r;
        if (!so_bv(P->im, c, mn, mx)) r = 0x40;                       /* no bounding volume: recurse, "inside" */
        else {
            uint32_t gm = cpa_u32(P->im, c + 0x24);
            if (gm && cpa_is_ptr(P->im, gm) && cpa_u32(P->im, gm) != 1) for (int i = 0; i < 3; i++) { float t = cpa_f32(P->im, gm + 0x58 + 4u * i); mn[i] += t; mx[i] += t; }
            r = P->useFrustum ? cpa_vis_box_test(&P->fr, mn, mx) : 1;
        }
        if (r || ((cpa_u32(P->im, c + 0x30) & 0x200) && P->useFlags)) visit(P, c, m, r, depth + 1);
        c = cpa_u32(P->im, c + 0x14);
    }
}
static void visit(Pred *P, uint32_t so, uint32_t maskIn, int res, int depth) {
    uint32_t f2c = cpa_u32(P->im, so + 0x2C), f30 = cpa_u32(P->im, so + 0x30);
    uint32_t m = P->useFlags ? (maskIn & f2c) : 0xFFFFFFFFu;
    if (!vpush(&P->visited, so)) P->oom = 1;
    if (res && (m & 0x800000u) && (!P->useFlags || !(f30 & 2))) { if (!vpush(&P->drawn, so) || !vpush(&P->drawnMask, m)) P->oom = 1; }
    if (depth < 64) visit_children(P, so, m, depth);
}
static void do_sector(Pred *P, uint32_t sec) {                           /* f_8c05f026 + the first step of f_8c09a060 */
    float mn[3], mx[3]; int r = so_bv(P->im, sec, mn, mx) ? (P->useFrustum ? cpa_vis_box_test(&P->fr, mn, mx) : 1) : 0x40;
    if (r || ((cpa_u32(P->im, sec + 0x30) & 0x200) && P->useFlags)) visit(P, sec, P->mask, r, 0);
}

static int cmp_u32(const void *a, const void *b) { uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b; return x < y ? -1 : x > y; }

void cpa_vis_free(CpaVis *v) { free(v->sectors); free(v->drawn); free(v->drawnMask); free(v->visited); free(v->ipos); memset(v, 0, sizeof *v); }

int cpa_vis_predict(CpaVis *out, const CpaImage *im, const CpaVisInput *in, const CpaVisOpts *opts) {
    CpaVisOpts d; if (!opts) { cpa_vis_opts_default(&d); opts = &d; }
    memset(out, 0, sizeof *out);
    if (!im || !in || (!opts->ignoreFrustum && !in->frustum)) return 0;
    uint32_t S = in->sector;
    if (!S) {
        if (!in->hasPos) return 0;
        uint32_t father = in->father ? in->father : cpa_vis_level_father(im);
        if (!father) return 0;
        S = cpa_vis_find_sector(im, father, in->pos);
    }
    Pred P; memset(&P, 0, sizeof P);
    P.im = im; P.mask = opts->mask; P.useFlags = !opts->ignoreFlags; P.useFrustum = !opts->ignoreFrustum;
    if (in->frustum) P.fr = *in->frustum;
    out->sector = S;
    uint32_t secs[64]; uint32_t nsec = 0;
    if (S) {
        secs[nsec++] = S;
        if (!opts->ignoreNeighbours) {
            uint32_t sd = cpa_u32(im, S + 4), arr = cpa_u32(im, sd + 0x20), cnt = cpa_u32(im, sd + 0x24);
            if (cnt > 60) cnt = 60;
            for (uint32_t i = 0; i < cnt; i++) {
                uint8_t kind = 0; cpa_rd8(im, arr + 8 * i + 2, &kind);
                uint32_t ns = cpa_u32(im, arr + 8 * i + 4);
                if (!opts->allowKind2 && kind == 2) continue;
                if (ns) secs[nsec++] = ns;
            }
        }
    }
    for (uint32_t i = 0; i < nsec; i++) do_sector(&P, secs[i]);
    int ok = !P.oom;
    out->sectors = (uint32_t *)malloc((nsec ? nsec : 1) * 4);
    if (!out->sectors) ok = 0; else { memcpy(out->sectors, secs, nsec * 4); out->nSectors = nsec; }
    out->drawn = P.drawn.a; out->nDrawn = P.drawn.n; out->drawnMask = P.drawnMask.a; out->visited = P.visited.a; out->nVisited = P.visited.n;
    if (ok) {
        uint32_t ni = 0; for (uint32_t i = 0; i < out->nDrawn; i++) ni += cpa_u32(im, out->drawn[i]) == CPA_SO_IPO;
        out->ipos = (uint32_t *)malloc((ni ? ni : 1) * 4);
        if (!out->ipos) ok = 0;
        else { for (uint32_t i = 0; i < out->nDrawn; i++) if (cpa_u32(im, out->drawn[i]) == CPA_SO_IPO) out->ipos[out->nIpos++] = out->drawn[i];
               qsort(out->ipos, out->nIpos, 4, cmp_u32); }
    }
    if (!ok) { cpa_vis_free(out); return 0; }
    return 1;
}

int cpa_vis_ipo_visible(const CpaVis *v, uint32_t ipoVa) { return v->nIpos && bsearch(&ipoVa, v->ipos, v->nIpos, 4, cmp_u32) != NULL; }

/* ---------------- triangle -> IPO ownership ---------------- */
typedef struct { float m[16]; } VMat;
typedef struct { uint32_t k[3], ipo, sector; } PV;

static int vm_read(const CpaImage *im, uint32_t va, VMat *r) { uint32_t t; if (!cpa_rd32(im, va, &t) || t < 1 || t > 6) return 0; for (int i = 0; i < 16; i++) if (!cpa_rdf(im, va + 0x28 + 4u * i, &r->m[i])) return 0; return 1; }
static void vm_mul(const VMat *a, const VMat *b, VMat *r) { VMat t; for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) { float s = 0; for (int k = 0; k < 4; k++) s += a->m[i*4+k] * b->m[k*4+j]; t.m[i*4+j] = s; } *r = t; }
static void vm_xf(const VMat *m, const float v[3], float o[3]) { for (int j = 0; j < 3; j++) o[j] = v[0] * m->m[j] + v[1] * m->m[4+j] + v[2] * m->m[8+j] + m->m[12+j]; }
static int pv_cmp(const void *a, const void *b) { const PV *x = (const PV *)a, *y = (const PV *)b; for (int i = 0; i < 3; i++) if (x->k[i] != y->k[i]) return x->k[i] < y->k[i] ? -1 : 1; return 0; }

typedef struct { CpaVisTriMap *M; uint32_t nodes; int oom; } TmCtx;
static void tm_walk(TmCtx *C, const CpaImage *im, uint32_t va, const VMat *pg, uint32_t sector, int depth) {
    uint32_t w[18]; if (depth > 32 || C->nodes++ > 100000) return;
    for (int i = 0; i < 18; i++) if (!cpa_rd32(im, va + 4u * i, &w[i])) return;
    VMat loc, glob, chain, world; int hl = cpa_is_ptr(im, w[8]) && vm_read(im, w[8], &loc), hg = cpa_is_ptr(im, w[9]) && vm_read(im, w[9], &glob);
    if (hl) vm_mul(&loc, pg, &chain); else chain = *pg;
    world = hg ? glob : chain;
    if (w[0] == CPA_SO_SECTOR) sector = va;
    if (w[0] == CPA_SO_IPO) {      /* IPO -> PO -> VisualSet -> GeometricObject (vertex table geo+0, count geo+0x2C low 16 bits): same chain as cpa_scene.c */
        uint32_t po, vs, geo, pv, cnt;
        if (cpa_is_ptr(im, w[1]) && cpa_rd32(im, w[1], &po) && cpa_is_ptr(im, po) && cpa_rd32(im, po, &vs) && cpa_is_ptr(im, vs) && cpa_rd32(im, vs + 4, &geo) && cpa_is_ptr(im, geo) &&
            cpa_rd32(im, geo, &pv) && cpa_rd32(im, geo + 0x2C, &cnt) && (cnt & 0xFFFF) && (cnt & 0xFFFF) <= 20000 && cpa_is_ptr(im, pv)) {
            uint32_t nv = cnt & 0xFFFF;
            for (uint32_t i = 0; i < nv; i++) {
                float v[3], o[3]; int ok = 1;
                for (int k = 0; k < 3; k++) ok &= cpa_rdf(im, pv + i * 12 + k * 4, &v[k]);
                if (!ok) continue;
                vm_xf(&world, v, o);
                CpaVisTriMap *M = C->M;
                if (M->n == M->cap) { uint32_t nc = M->cap ? M->cap * 2 : 4096; void *p = realloc(M->a, nc * sizeof(PV)); if (!p) { C->oom = 1; return; } M->a = p; M->cap = nc; }
                PV *e = &((PV *)M->a)[M->n++]; memcpy(e->k, o, 12); e->ipo = va; e->sector = sector;
            }
        }
    }
    uint32_t ch = w[2], n = 0;
    while (ch && n++ < 100000) { uint32_t nx; if (!cpa_rd32(im, ch + 0x14, &nx)) break; tm_walk(C, im, ch, &world, sector, depth + 1); ch = nx; }
}

int cpa_vis_trimap_build(CpaVisTriMap *m, const CpaImage *im) {
    memset(m, 0, sizeof *m);
    if (!im || im->nReg < 1 || im->reg[0].n < 14 * 4) return 0;
    const uint8_t *q = im->reg[0].p + 13 * 4;
    uint32_t root = (uint32_t)q[0] | (uint32_t)q[1] << 8 | (uint32_t)q[2] << 16 | (uint32_t)q[3] << 24;
    VMat id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1.0f;
    TmCtx C; C.M = m; C.nodes = 0; C.oom = 0;
    if (root) tm_walk(&C, im, root, &id, 0, 0);
    if (C.oom) { cpa_vis_trimap_free(m); return 0; }
    if (m->n) qsort(m->a, m->n, sizeof(PV), pv_cmp);
    return 1;
}
void cpa_vis_trimap_free(CpaVisTriMap *m) { free(m->a); memset(m, 0, sizeof *m); }

static uint32_t pv_lower(const PV *a, uint32_t n, const PV *key) { uint32_t lo = 0, hi = n; while (lo < hi) { uint32_t mid = (lo + hi) / 2; if (pv_cmp(&a[mid], key) < 0) lo = mid + 1; else hi = mid; } return lo; }

uint32_t cpa_vis_trimap_owners(const CpaVisTriMap *m, const float p9[9], uint32_t *ipo, uint32_t *sector, uint32_t max) {
    const PV *a = (const PV *)m->a; PV key; uint32_t found = 0;
    if (!m->n || !max) return 0;
    memcpy(key.k, p9, 12);
    for (uint32_t i = pv_lower(a, m->n, &key); i < m->n && !pv_cmp(&a[i], &key) && found < max; i++) {
        uint32_t o = a[i].ipo; int dup = 0;
        /* distinct-IPO check against the earlier entries with the same first key (re-derived from the table, so ipo[] may be NULL) */
        { for (uint32_t j = pv_lower(a, m->n, &key); j < i && !pv_cmp(&a[j], &key); j++) if (a[j].ipo == o) { dup = 1; break; } }
        if (dup) continue;
        int all = 1;
        for (int v = 1; v < 3 && all; v++) {
            PV k2; memcpy(k2.k, p9 + 3 * v, 12);
            int f = 0; for (uint32_t j = pv_lower(a, m->n, &k2); j < m->n && !pv_cmp(&a[j], &k2); j++) if (a[j].ipo == o) { f = 1; break; }
            all = f;
        }
        if (all) { if (ipo) ipo[found] = o; if (sector) sector[found] = a[i].sector; found++; }
    }
    return found;
}

/* ---------------- draw-list culling masks ---------------- */
int cpa_vis_cull_build(CpaVisCull *c, const CpaVis *v, const CpaVisTriMap *m, const CpaScene *s) {
    memset(c, 0, sizeof *c);
    uint32_t nt = s->nVerts / 3;
    c->tri = (uint8_t *)malloc(nt ? nt : 1); c->sprite = (uint8_t *)malloc(s->nSprites ? s->nSprites : 1);
    if (!c->tri || !c->sprite) { cpa_vis_cull_free(c); return 0; }
    memset(c->tri, 1, nt ? nt : 1); memset(c->sprite, 1, s->nSprites ? s->nSprites : 1);
    c->nTri = nt; c->nSprite = s->nSprites;
    for (uint32_t it = 0; it < s->nItems; it++) {
        const CpaDrawItem *d = &s->items[it];
        if (d->isActor) continue;
        for (uint32_t k = 0; k + 2 < d->vertCount; k += 3) {
            uint32_t t = d->firstVert / 3 + k / 3, own[16]; uint32_t no = cpa_vis_trimap_owners(m, &s->pos[(size_t)t * 9], own, NULL, 16), vis = 0;
            if (!no) { c->nTriUnowned++; continue; }
            for (uint32_t q = 0; q < no && !vis; q++) vis = (uint32_t)cpa_vis_ipo_visible(v, own[q]);
            if (!vis) { c->tri[t] = 0; c->nTriCulled++; }
        }
    }
    for (uint32_t i = 0; i < s->nSprites; i++) {
        const CpaSprite *sp = &s->sprites[i];
        if (sp->isActor || cpa_u32(&s->img, sp->soVa) != CPA_SO_IPO) continue;
        if (!cpa_vis_ipo_visible(v, sp->soVa)) { c->sprite[i] = 0; c->nSpriteCulled++; }
    }
    return 1;
}
void cpa_vis_cull_free(CpaVisCull *c) { free(c->tri); free(c->sprite); memset(c, 0, sizeof *c); }
