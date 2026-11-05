/* See cpa_coll.h and re_analysis/dc/notes_collision.md. */
#include "cpa_coll.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct { float m[16]; } Mat;
typedef float F3[3];
typedef uint32_t U3[3];

static void mat_ident(Mat *r) { memset(r, 0, sizeof *r); r->m[0] = r->m[5] = r->m[10] = r->m[15] = 1.f; }
/* Matrix object: +00 u32 type (1..6), +04 float rot3x3[9], +28 float m4x4[16] (VERIFIED, DC_LEVEL_FORMAT.md sec 5). */
static int mat_read(const CpaImage *im, uint32_t va, Mat *r) {
    uint32_t type;
    if (!cpa_rd32(im, va, &type) || type < 1 || type > 6) return 0;
    for (int i = 0; i < 16; i++) if (!cpa_rdf(im, va + 0x28 + 4u * i, &r->m[i])) return 0;
    return 1;
}
static void mat_mul(const Mat *a, const Mat *b, Mat *r) {
    Mat t;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float s = 0;
            for (int k = 0; k < 4; k++) s += a->m[i * 4 + k] * b->m[k * 4 + j];
            t.m[i * 4 + j] = s;
        }
    *r = t;
}
static int mat_is_identity(const Mat *m) {
    Mat id; mat_ident(&id);
    for (int i = 0; i < 16; i++) if (fabsf(m->m[i] - id.m[i]) > 1e-5f) return 0;
    return 1;
}
static void xform_p(const Mat *m, const float v[3], float o[3]) {
    for (int j = 0; j < 3; j++) o[j] = v[0] * m->m[j] + v[1] * m->m[4 + j] + v[2] * m->m[8 + j] + m->m[12 + j];
}
static void xform_d(const Mat *m, const float v[3], float o[3]) {
    for (int j = 0; j < 3; j++) o[j] = v[0] * m->m[j] + v[1] * m->m[4 + j] + v[2] * m->m[8 + j];
}

/* ---------- growable arrays ---------- */
#define GROW(arr, n, cap, T) do { if ((n) >= (cap)) { uint32_t nc_ = (cap) ? (cap) * 2 : 256; T *p_ = (T *)realloc((arr), sizeof(T) * nc_); if (!p_) { c->oom = 1; return 0; } (arr) = p_; (cap) = nc_; } } while (0)

typedef struct {
    CpaCollWorld *w;
    const CpaImage *im;
    uint32_t capPoZone, capVert, capTri, capMesh, capMat, capZone, capPrim, capActor, capTable, capSet, capSetIdx;
    uint8_t *seen[CPA_MAX_REGIONS];
    uint32_t *geoDone; uint32_t nGeoDone, capGeoDone;
    int oom;
} Ctx;

static int geo_done(Ctx *c, uint32_t geo) {
    for (uint32_t k = 0; k < c->nGeoDone; k++) if (c->geoDone[k] == geo) return 1;
    if (c->nGeoDone == c->capGeoDone) {
        uint32_t nc = c->capGeoDone ? c->capGeoDone * 2 : 256;
        uint32_t *p = (uint32_t *)realloc(c->geoDone, sizeof(uint32_t) * nc);
        if (!p) { c->oom = 1; return 1; }
        c->geoDone = p; c->capGeoDone = nc;
    }
    c->geoDone[c->nGeoDone++] = geo;
    return 0;
}


/* The five per-triangle arrays share one capacity. */
static int tri_reserve(Ctx *c) {
    CpaCollWorld *w = c->w;
    if (w->nTri < c->capTri) return 1;
    uint32_t nc = c->capTri ? c->capTri * 2 : 1024;
    U3 *t = (U3 *)realloc(w->tri, sizeof(U3) * nc); if (t) w->tri = t;
    F3 *n = (F3 *)realloc(w->nrm, sizeof(F3) * nc); if (n) w->nrm = n;
    uint16_t *tm = (uint16_t *)realloc(w->triMat, sizeof(uint16_t) * nc); if (tm) w->triMat = tm;
    uint32_t *tmesh = (uint32_t *)realloc(w->triMesh, sizeof(uint32_t) * nc); if (tmesh) w->triMesh = tmesh;
    if (!t || !n || !tm || !tmesh) { c->oom = 1; return 0; }
    c->capTri = nc;
    return 1;
}

/* GameMaterial -> material table index (dedupe by VA). Layout VERIFIED on data: see header. */
static int mat_index(Ctx *c, uint32_t gm, uint16_t *out) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    for (uint32_t k = w->nMats; k-- > 0 && k + 64 >= w->nMats;) if (w->mats[k].gmVa == gm) { *out = (uint16_t)k; return 1; }
    for (uint32_t k = 0; k < w->nMats; k++) if (w->mats[k].gmVa == gm) { *out = (uint16_t)k; return 1; }
    if (w->nMats >= 65535) return 0;
    GROW(w->mats, w->nMats, c->capMat, CpaCollMat);
    CpaCollMat *m = &w->mats[w->nMats];
    memset(m, 0, sizeof *m);
    m->gmVa = gm; m->soundIdx = -1;
    if (gm) {
        uint32_t snd = 0, cm = 0;
        if (cpa_rd32(im, gm + 8, &snd)) m->soundIdx = (int32_t)snd;
        if (cpa_rd32(im, gm + 12, &cm) && cm != 0xFFFFFFFFu && cpa_is_ptr(im, cm) && cpa_rd32(im, cm, &m->collideId)) m->hasCollideId = 1;
    }
    *out = (uint16_t)w->nMats++;
    return 1;
}

static void v3sub(const float *a, const float *b, float *o) { o[0] = a[0] - b[0]; o[1] = a[1] - b[1]; o[2] = a[2] - b[2]; }
static void v3cross(const float *a, const float *b, float *o) { o[0] = a[1] * b[2] - a[2] * b[1]; o[1] = a[2] * b[0] - a[0] * b[2]; o[2] = a[0] * b[1] - a[1] * b[0]; }
static float v3dot(const float *a, const float *b) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }

/* Header of a collide GeometricObject. */
typedef struct { uint32_t vp, et, ep; uint16_t nv, ne; float rad, ctr[3]; } GeoHdr;
static int geo_hdr(const CpaImage *im, uint32_t geo, GeoHdr *h) {
    uint32_t v;
    if (!cpa_is_ptr(im, geo) || !cpa_ptr(im, geo, 0x44)) return 0;
    h->vp = cpa_u32(im, geo); h->et = cpa_u32(im, geo + 0x10); h->ep = cpa_u32(im, geo + 0x14);
    h->nv = cpa_u16(im, geo + 0x2C); h->ne = cpa_u16(im, geo + 0x2E);
    h->rad = cpa_f32(im, geo + 0x34);
    for (int i = 0; i < 3; i++) h->ctr[i] = cpa_f32(im, geo + 0x38 + 4u * i);
    (void)v;
    if (h->ne > 64) return 0;
    if (h->nv && !cpa_ptr(im, h->vp, 12u * h->nv)) return 0;
    if (h->ne && (!cpa_ptr(im, h->et, 2u * h->ne) || !cpa_ptr(im, h->ep, 4u * h->ne))) return 0;
    return 1;
}

/* Append one triangle-mesh geometry (static: world, actor: local). Returns 1 if a mesh entry was created. */
static int add_mesh(Ctx *c, uint32_t soVa, uint32_t poVa, uint32_t geo, const Mat *m, int isStatic, int32_t objIndex) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    GeoHdr h;
    if (!geo_hdr(im, geo, &h)) { w->nBadGeo++; return 0; }
    uint32_t v0 = w->nVert, t0 = w->nTri;
    /* vertices */
    for (uint16_t i = 0; i < h.nv; i++) {
        float p[3], q[3];
        for (int k = 0; k < 3; k++) p[k] = cpa_f32(im, h.vp + 12u * i + 4u * k);
        xform_p(m, p, q);
        GROW(w->vert, w->nVert, c->capVert, F3);
        memcpy(w->vert[w->nVert++], q, sizeof q);
    }
    for (uint16_t e = 0; e < h.ne; e++) {
        uint16_t type = cpa_u16(im, h.et + 2u * e);
        uint32_t el = cpa_u32(im, h.ep + 4u * e);
        w->nElems++;
        if (type == 3) { w->nElemSprite++; continue; }
        if (type == CPA_ZSHAPE_SPHERE || type == CPA_ZSHAPE_BOX) { w->nElemZone++; continue; }
        if (type != 1) { w->nElemOther++; continue; }
        if (!cpa_ptr(im, el, 0x18)) { w->nBadElem++; continue; }
        uint32_t gm = cpa_u32(im, el), nTri = cpa_u16(im, el + 4), ip = cpa_u32(im, el + 8), np = cpa_u32(im, el + 0x10);
        if (nTri && (!cpa_ptr(im, ip, 6u * nTri) || !cpa_ptr(im, np, 12u * nTri))) { w->nBadElem++; continue; }
        uint16_t mi = 0;
        if (!mat_index(c, gm, &mi)) { w->nBadMat++; continue; }
        for (uint32_t t = 0; t < nTri; t++) {
            uint32_t idx[3]; int ok = 1;
            for (int k = 0; k < 3; k++) { idx[k] = cpa_u16(im, ip + 6u * t + 2u * k); if (idx[k] >= h.nv) ok = 0; }
            if (!ok) { w->nBadIdx++; continue; }
            float sn[3], rn[3];
            for (int k = 0; k < 3; k++) sn[k] = cpa_f32(im, np + 12u * t + 4u * k);
            float sl = sqrtf(v3dot(sn, sn));             /* stored length, before the IPO matrix (which may scale) */
            xform_d(m, sn, rn);
            float ln = sqrtf(v3dot(rn, rn));
            const float *a = w->vert[v0 + idx[0]], *b = w->vert[v0 + idx[1]], *d = w->vert[v0 + idx[2]];
            float e1[3], e2[3], cr[3];
            v3sub(b, a, e1); v3sub(d, a, e2); v3cross(e1, e2, cr);
            float lc = sqrtf(v3dot(cr, cr));
            if (lc < 1e-6f || sl == 0.f) w->nDegenerate++;   /* zero/sliver triangle: the stored normal is then exactly (0,0,0); |cross| = 2*area */
            if (!(sl > 0.5f && sl < 1.5f) || !(ln > 0.f)) {   /* stored normal unusable: fall back to the cross product */
                if (sl != 0.f && lc >= 1e-6f) w->nBadNormal++;
                if (lc > 0) { rn[0] = cr[0] / lc; rn[1] = cr[1] / lc; rn[2] = cr[2] / lc; } else { rn[0] = 0; rn[1] = 0; rn[2] = 1; }
            } else { rn[0] /= ln; rn[1] /= ln; rn[2] /= ln; }
            if (lc >= 1e-6f && v3dot(cr, rn) < 0) w->nNormalFlip++;
            if (!tri_reserve(c)) return 0;
            for (int k = 0; k < 3; k++) w->tri[w->nTri][k] = v0 + idx[k];
            memcpy(w->nrm[w->nTri], rn, sizeof rn);
            w->triMat[w->nTri] = mi;
            w->triMesh[w->nTri] = w->nMeshes;
            w->nTri++;
        }
    }
    GROW(w->meshes, w->nMeshes, c->capMesh, CpaCollMesh);
    CpaCollMesh *ms = &w->meshes[w->nMeshes];
    memset(ms, 0, sizeof *ms);
    ms->soVa = soVa; ms->poVa = poVa; ms->geoVa = geo; ms->firstTri = t0; ms->nTri = w->nTri - t0;
    ms->isStatic = (uint8_t)isStatic; ms->objIndex = objIndex;
    for (int k = 0; k < 3; k++) { ms->bmin[k] = 1e30f; ms->bmax[k] = -1e30f; }
    for (uint32_t t = t0; t < w->nTri; t++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) {
                float x = w->vert[w->tri[t][j]][k];
                if (x < ms->bmin[k]) ms->bmin[k] = x;
                if (x > ms->bmax[k]) ms->bmax[k] = x;
            }
    if (isStatic && ms->nTri)
        for (int k = 0; k < 3; k++) { if (ms->bmin[k] < w->bmin[k]) w->bmin[k] = ms->bmin[k]; if (ms->bmax[k] > w->bmax[k]) w->bmax[k] = ms->bmax[k]; }
    w->nMeshes++;
    (void)v0;
    return 1;
}

/* Zone (sphere / box collide object) -> CpaZone with primitives; returns 1 on success. */
static int add_zone(Ctx *c, uint32_t geo) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    GeoHdr h;
    GROW(w->zones, w->nZones, c->capZone, CpaZone);
    CpaZone *z = &w->zones[w->nZones];
    memset(z, 0, sizeof *z);
    z->geoVa = geo; z->firstPrim = w->nPrims;
    w->nZones++;                         /* keep indices aligned with the array even when the zone is unusable */
    if (!geo_hdr(im, geo, &h)) { w->nBadZone++; return 0; }
    z->bsRadius = h.rad; memcpy(z->bsCentre, h.ctr, sizeof h.ctr);
    for (uint16_t e = 0; e < h.ne; e++) {
        uint16_t type = cpa_u16(im, h.et + 2u * e);
        uint32_t el = cpa_u32(im, h.ep + 4u * e);
        uint32_t arr = cpa_u32(im, el), n = cpa_u16(im, el + 4);
        if ((type != CPA_ZSHAPE_SPHERE && type != CPA_ZSHAPE_BOX) || !cpa_ptr(im, el, 8) || n > 1024) { w->nBadPrim++; continue; }
        uint32_t stride = type == CPA_ZSHAPE_SPHERE ? 12u : 8u;
        if (n && !cpa_ptr(im, arr, stride * n)) { w->nBadPrim++; continue; }
        for (uint32_t i = 0; i < n; i++) {
            CpaZonePrim p; memset(&p, 0, sizeof p);
            uint32_t a = arr + stride * i;
            p.shape = (uint8_t)type;
            if (type == CPA_ZSHAPE_SPHERE) {
                float r = cpa_f32(im, a); uint16_t ci = cpa_u16(im, a + 8);
                p.gmVa = cpa_u32(im, a + 4);
                if (ci >= h.nv || !(r >= 0.f)) { w->nBadPrim++; continue; }   /* radius 0 / -0 occurs: disabled placeholder zone */
                for (int k = 0; k < 3; k++) p.a[k] = cpa_f32(im, h.vp + 12u * ci + 4u * k);
                p.b[0] = r; w->nSpheres++;
            } else {
                uint16_t i0 = cpa_u16(im, a), i1 = cpa_u16(im, a + 2);
                p.gmVa = cpa_u32(im, a + 4);
                if (i0 >= h.nv || i1 >= h.nv) { w->nBadPrim++; continue; }
                for (int k = 0; k < 3; k++) { p.a[k] = cpa_f32(im, h.vp + 12u * i0 + 4u * k); p.b[k] = cpa_f32(im, h.vp + 12u * i1 + 4u * k); }
                if (p.a[0] > p.b[0] || p.a[1] > p.b[1] || p.a[2] > p.b[2]) { w->nBadPrim++; continue; }
                w->nBoxes++;
            }
            GROW(w->prims, w->nPrims, c->capPrim, CpaZonePrim);
            w->prims[w->nPrims++] = p;
        }
    }
    z->nPrim = w->nPrims - z->firstPrim;
    return 1;
}

/* Activation table (dedupe by header VA). Returns table index or -1. */
static int add_table(Ctx *c, uint32_t th) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    for (uint32_t k = 0; k < w->nTables; k++) if (w->tables[k].va == th) return (int)k;
    uint32_t dat = 0; uint16_t n = 0;
    if (!cpa_rd32(im, th, &dat) || !cpa_rd16(im, th + 4, &n) || n > 4096 || (n && !cpa_ptr(im, dat, 8u * n))) { w->nBadZone++; return -1; }
    GROW(w->tables, w->nTables, c->capTable, CpaZoneSetTable);
    CpaZoneSetTable *t = &w->tables[w->nTables];
    t->va = th; t->nStates = n; t->firstSet = w->nSets;
    for (uint32_t s = 0; s < n; s++) {
        uint32_t zs = cpa_u32(im, dat + 8u * s), ld = 0, ln = 0;
        CpaZoneSet set; set.firstIdx = w->nSetIdx; set.n = 0;
        if (zs && cpa_is_ptr(im, zs) && cpa_rd32(im, zs, &ld) && cpa_rd32(im, zs + 4, &ln) && ln <= 1024 && (ln == 0 || cpa_ptr(im, ld, 2u * ln))) {
            for (uint32_t q = 0; q < ln; q++) {
                GROW(w->setIdx, w->nSetIdx, c->capSetIdx, uint16_t);
                w->setIdx[w->nSetIdx++] = cpa_u16(im, ld + 2u * q);
            }
            set.n = ln;
        } else if (zs) w->nBadZone++;
        GROW(w->sets, w->nSets, c->capSet, CpaZoneSet);
        w->sets[w->nSets++] = set;
    }
    return (int)w->nTables++;
}

static int parse_actor(Ctx *c, uint32_t soVa, uint32_t actorVa) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    uint32_t cs = 0;
    if (!cpa_rd32(im, actorVa + 0x14, &cs) || cs == 0) return 1;   /* no CollSet is normal (3993 of 5535 type-2 SOs) */
    if (!cpa_is_ptr(im, cs) || !cpa_ptr(im, cs, 0x44)) { w->nUnreadable++; return 1; }
    w->nActorsWithCollSet++;
    GROW(w->actors, w->nActors, c->capActor, CpaCollActor);
    CpaCollActor *a = &w->actors[w->nActors];
    memset(a, 0, sizeof *a);
    a->soVa = soVa; a->actorVa = actorVa; a->collSetVa = cs;
    a->enable = cpa_u32(im, cs + 0x40) & 0xFF; a->priority = (int8_t)((cpa_u32(im, cs + 0x40) >> 8) & 0xFF); a->collisionFlag = (cpa_u32(im, cs + 0x40) >> 16) & 0xFF;
    for (int s = 0; s < CPA_ZDX_N; s++) a->table[s] = -1;
    for (int s = 0; s < CPA_ZDX_N; s++) {
        uint32_t hd = cpa_u32(im, cs + 4u * s), dat = 0; uint16_t n = 0;
        a->zFirst[s] = w->nZones;
        if (!hd) continue;
        if (!cpa_is_ptr(im, hd) || !cpa_rd32(im, hd, &dat) || !cpa_rd16(im, hd + 4, &n) || n > 256 || (n && !cpa_ptr(im, dat, 4u * n))) { w->nBadZone++; continue; }
        for (uint16_t i = 0; i < n; i++) {
            uint32_t z = cpa_u32(im, dat + 4u * i);
            if (!z) { GROW(w->zones, w->nZones, c->capZone, CpaZone); memset(&w->zones[w->nZones], 0, sizeof(CpaZone)); w->zones[w->nZones].firstPrim = w->nPrims; w->nZones++; continue; }
            add_zone(c, z);
            if (c->oom) return 0;
        }
        a->zCount[s] = w->nZones - a->zFirst[s];
    }
    /* per-state activation tables */
    {
        uint32_t d3 = cpa_u32(im, actorVa), nd = cpa_u32(im, d3 + 0x14), famStates = nd ? cpa_u32(im, nd + 0x14) : 0;
        int any = 0;
        for (int s = 0; s < CPA_ZDX_N; s++) {
            uint32_t th = cpa_u32(im, cs + 0x10 + 4u * s);
            if (!th) continue;
            int ti = add_table(c, th);
            if (c->oom) return 0;
            a->table[s] = ti; any = 1;
            if (ti >= 0) {
                const CpaZoneSetTable *t = &w->tables[ti];
                if (t->nStates != famStates) w->nTableCountMismatch++;
                for (uint32_t q = 0; q < t->nStates; q++) {
                    const CpaZoneSet *zs = &w->sets[t->firstSet + q];
                    for (uint32_t k = 0; k < zs->n; k++) if (w->setIdx[zs->firstIdx + k] >= a->zCount[s]) w->nZoneSetIdxRange++;
                }
            }
        }
        if (any) w->nActorsWithTables++;
    }
    w->nActors++;
    return 1;
}

/* PO CollSet = 16 bytes { slot0, slot1, slot2, slot3 } of collide GeometricObject pointers. Slots follow the actor-level order ZDD, ZDM, ZDE, ZDR
 * (INFERRED for slots 0..2 from the few object-table POs that use them; slot 3 = ZDR mesh is VERIFIED by the editor files and 100k+ triangles). */
static int po_collset(Ctx *c, uint32_t po, uint32_t slot[4]) {
    const CpaImage *im = c->im;
    uint32_t cs = cpa_u32(im, po + 4);
    memset(slot, 0, 4 * sizeof(uint32_t));
    if (!cs || !cpa_is_ptr(im, cs) || !cpa_ptr(im, cs, 16)) return 0;
    for (int k = 0; k < 4; k++) slot[k] = cpa_u32(im, cs + 4u * k);
    return 1;
}

/* does the collide GeometricObject hold sphere/box primitives (first element type 7 or 8)? */
static int geo_is_zone(const CpaImage *im, uint32_t geo) {
    GeoHdr h;
    if (!geo_hdr(im, geo, &h) || h.ne == 0) return 0;
    uint16_t t = cpa_u16(im, h.et);
    return t == CPA_ZSHAPE_SPHERE || t == CPA_ZSHAPE_BOX;
}

static int walk(Ctx *c, uint32_t va, uint32_t parent, int depth, const Mat *pg) {
    CpaCollWorld *w = c->w; const CpaImage *im = c->im;
    const CpaRegion *m = cpa_region_of(im, va, 0x48);
    if (!m || depth > 32 || w->nSO > 100000) { w->nUnreadable++; return 1; }
    int ri = (int)(m - im->reg);
    uint32_t slot = (va - m->base) >> 2;
    if (c->seen[ri][slot >> 3] & (1u << (slot & 7))) return 1;
    c->seen[ri][slot >> 3] |= (uint8_t)(1u << (slot & 7));
    w->nSO++;
    uint32_t wd[18];
    for (int i = 0; i < 18; i++) if (!cpa_rd32(im, va + 4u * i, &wd[i])) { w->nUnreadable++; return 1; }
    (void)parent;
    Mat loc, glob, chain, world;
    int hl = cpa_is_ptr(im, wd[8]) && mat_read(im, wd[8], &loc);
    int hg = cpa_is_ptr(im, wd[9]) && mat_read(im, wd[9], &glob);
    if (hl) mat_mul(&loc, pg, &chain); else chain = *pg;
    world = hg ? glob : chain;

    if (wd[0] == 0x20) {   /* IPO: data -> IPO, IPO+0 -> PO, PO+4 -> CollSet (16 B), CollSet+12 = ZDR mesh */
        uint32_t po = 0, sl[4], zdr = 0;
        w->nSOIpo++;
        if (cpa_is_ptr(im, wd[1]) && cpa_rd32(im, wd[1], &po) && cpa_is_ptr(im, po)) {
            if (cpa_u32(im, po + 4)) w->nIpoWithCollSet++;
            po_collset(c, po, sl);
            w->nIpoSlotsNonZR += (sl[0] != 0) + (sl[1] != 0) + (sl[2] != 0);
            zdr = sl[3];
            if (zdr) {
                if (!mat_is_identity(&world)) w->nIpoMatNonIdentity++;
                if (add_mesh(c, va, po, zdr, &world, 1, -1)) w->nStaticMeshes++;
            } else if (cpa_u32(im, po + 4)) w->nIpoCollSetNoMesh++;
        }
    }
    if (wd[0] == 2) {      /* actor */
        uint32_t d3 = 0, tbl = 0, arr = 0, hw = 0;
        w->nSOActor++;
        if (cpa_is_ptr(im, wd[1])) {
            if (!parse_actor(c, va, wd[1])) return 0;
            if (cpa_rd32(im, wd[1], &d3) && cpa_is_ptr(im, d3) && cpa_rd32(im, d3 + 0xC, &tbl) && cpa_is_ptr(im, tbl) && cpa_rd32(im, tbl, &arr) &&
                cpa_is_ptr(im, arr) && cpa_rd32(im, tbl + 8, &hw)) {
                uint32_t cnt = hw & 0xFFFF;
                if (cnt > 4096) cnt = 0;
                for (uint32_t i = 0; i < cnt; i++) {
                    uint32_t po = cpa_u32(im, arr + 0x10 * i + 4), sl[4];
                    if (!cpa_is_ptr(im, po) || !po_collset(c, po, sl)) continue;
                    if (!sl[0] && !sl[1] && !sl[2] && !sl[3]) continue;
                    if (geo_done(c, po)) { if (c->oom) return 0; continue; }   /* object tables are shared between actors of a family */
                    for (int k = 0; k < 4; k++) {
                        if (!sl[k]) continue;
                        if (k < 3 || geo_is_zone(im, sl[k])) {      /* PO-level zone */
                            GROW(w->poZones, w->nPoZones, c->capPoZone, CpaPoZone);
                            CpaPoZone *pz = &w->poZones[w->nPoZones++];
                            pz->soVa = va; pz->poVa = po; pz->objIndex = (int32_t)i; pz->slot = (uint8_t)k; pz->zone = w->nZones;
                            add_zone(c, sl[k]);
                        } else {
                            Mat id; mat_ident(&id);
                            if (add_mesh(c, va, po, sl[k], &id, 0, (int32_t)i)) w->nActorMeshes++;
                        }
                        if (c->oom) return 0;
                    }
                }
            }
        }
    }
    uint32_t ch = wd[2], n = 0;
    while (ch && n < 100000) {
        uint32_t nxt;
        if (!cpa_rd32(im, ch + 0x14, &nxt)) { w->nUnreadable++; break; }
        if (!walk(c, ch, va, depth + 1, &world)) return 0;
        n++;
        ch = nxt;
    }
    return 1;
}

int cpa_coll_load(CpaCollWorld *w, const CpaImage *img, uint32_t rootVa) {
    memset(w, 0, sizeof *w);
    if (!img || img->nReg < 1) return 0;
    w->img = *img;
    for (int k = 0; k < 3; k++) { w->bmin[k] = 1e30f; w->bmax[k] = -1e30f; }
    uint32_t type, par;
    if (!cpa_rd32(img, rootVa, &type) || type != 1 || !cpa_rd32(img, rootVa + 0x1C, &par) || par != 0) return 0;
    Ctx c; memset(&c, 0, sizeof c);
    c.w = w; c.im = &w->img;
    int ok = 1;
    for (int i = 0; i < img->nReg; i++) { c.seen[i] = (uint8_t *)calloc(img->reg[i].n / 32 + 1, 1); ok &= c.seen[i] != NULL; }
    Mat id; mat_ident(&id);
    if (ok) ok = walk(&c, rootVa, 0, 0, &id) && !c.oom;
    for (int i = 0; i < img->nReg; i++) free(c.seen[i]);
    free(c.geoDone);
    if (!ok) { cpa_coll_free(w); return 0; }
    return 1;
}

void cpa_coll_free(CpaCollWorld *w) {
    free(w->vert); free(w->tri); free(w->nrm); free(w->triMat); free(w->triMesh);
    free(w->meshes); free(w->mats); free(w->zones); free(w->prims); free(w->actors);
    free(w->tables); free(w->sets); free(w->setIdx); free(w->poZones);
    memset(w, 0, sizeof *w);
}

/* ---------- queries ---------- */
static int ray_aabb(const float o[3], const float d[3], const float bmin[3], const float bmax[3], float tmax) {
    float t0 = 0, t1 = tmax;
    for (int k = 0; k < 3; k++) {
        if (fabsf(d[k]) < 1e-20f) { if (o[k] < bmin[k] || o[k] > bmax[k]) return 0; continue; }
        float inv = 1.f / d[k], a = (bmin[k] - o[k]) * inv, b = (bmax[k] - o[k]) * inv;
        if (a > b) { float t = a; a = b; b = t; }
        if (a > t0) t0 = a;
        if (b < t1) t1 = b;
        if (t0 > t1) return 0;
    }
    return 1;
}

int cpa_coll_raycast(const CpaCollWorld *w, const float o[3], const float d[3], float tmax, int twoSided, CpaCollHit *hit) {
    float best = tmax; int found = 0;
    for (uint32_t mi = 0; mi < w->nMeshes; mi++) {
        const CpaCollMesh *ms = &w->meshes[mi];
        if (!ms->isStatic || !ms->nTri || !ray_aabb(o, d, ms->bmin, ms->bmax, best)) continue;
        for (uint32_t t = ms->firstTri; t < ms->firstTri + ms->nTri; t++) {
            const float *n = w->nrm[t];
            float nd = v3dot(n, d);
            if (!twoSided && !(nd < 0)) continue;
            const float *a = w->vert[w->tri[t][0]], *b = w->vert[w->tri[t][1]], *c = w->vert[w->tri[t][2]];
            float e1[3], e2[3], p[3], s[3], q[3];
            v3sub(b, a, e1); v3sub(c, a, e2);
            v3cross(d, e2, p);
            float det = v3dot(e1, p);
            if (fabsf(det) < 1e-12f) continue;
            float inv = 1.f / det;
            v3sub(o, a, s);
            float u = v3dot(s, p) * inv;
            if (u < -1e-6f || u > 1.f + 1e-6f) continue;
            v3cross(s, e1, q);
            float v = v3dot(d, q) * inv;
            if (v < -1e-6f || u + v > 1.f + 1e-6f) continue;
            float tt = v3dot(e2, q) * inv;
            if (tt < 0 || tt > best) continue;
            best = tt; found = 1;
            if (hit) {
                hit->t = tt; hit->tri = t; hit->mesh = mi; hit->mat = w->triMat[t]; hit->depth = 0;
                for (int k = 0; k < 3; k++) { hit->p[k] = o[k] + tt * d[k]; hit->n[k] = n[k]; }
            }
        }
    }
    return found;
}

int cpa_coll_ground(const CpaCollWorld *w, float x, float y, float zTop, float maxDrop, CpaCollHit *hit) {
    float o[3] = { x, y, zTop }, d[3] = { 0, 0, -1 };
    return cpa_coll_raycast(w, o, d, maxDrop, 0, hit);
}

/* closest point on triangle (Ericson, Real-Time Collision Detection 5.1.5) */
static void closest_tri(const float p[3], const float a[3], const float b[3], const float c[3], float out[3]) {
    float ab[3], ac[3], ap[3];
    v3sub(b, a, ab); v3sub(c, a, ac); v3sub(p, a, ap);
    float d1 = v3dot(ab, ap), d2 = v3dot(ac, ap);
    if (d1 <= 0 && d2 <= 0) { memcpy(out, a, 12); return; }
    float bp[3]; v3sub(p, b, bp);
    float d3 = v3dot(ab, bp), d4 = v3dot(ac, bp);
    if (d3 >= 0 && d4 <= d3) { memcpy(out, b, 12); return; }
    float vc = d1 * d4 - d3 * d2;
    if (vc <= 0 && d1 >= 0 && d3 <= 0) { float v = d1 / (d1 - d3); for (int k = 0; k < 3; k++) out[k] = a[k] + v * ab[k]; return; }
    float cp[3]; v3sub(p, c, cp);
    float d5 = v3dot(ab, cp), d6 = v3dot(ac, cp);
    if (d6 >= 0 && d5 <= d6) { memcpy(out, c, 12); return; }
    float vb = d5 * d2 - d1 * d6;
    if (vb <= 0 && d2 >= 0 && d6 <= 0) { float wv = d2 / (d2 - d6); for (int k = 0; k < 3; k++) out[k] = a[k] + wv * ac[k]; return; }
    float va = d3 * d6 - d5 * d4;
    if (va <= 0 && (d4 - d3) >= 0 && (d5 - d6) >= 0) { float wv = (d4 - d3) / ((d4 - d3) + (d5 - d6)); for (int k = 0; k < 3; k++) out[k] = b[k] + wv * (c[k] - b[k]); return; }
    float den = 1.f / (va + vb + vc), v = vb * den, wv = vc * den;
    for (int k = 0; k < 3; k++) out[k] = a[k] + ab[k] * v + ac[k] * wv;
}

uint32_t cpa_coll_sphere(const CpaCollWorld *w, const float c[3], float r, CpaCollHit *hits, uint32_t max) {
    uint32_t n = 0;
    for (uint32_t mi = 0; mi < w->nMeshes; mi++) {
        const CpaCollMesh *ms = &w->meshes[mi];
        if (!ms->isStatic || !ms->nTri) continue;
        int out = 0;
        for (int k = 0; k < 3; k++) if (c[k] < ms->bmin[k] - r || c[k] > ms->bmax[k] + r) out = 1;
        if (out) continue;
        for (uint32_t t = ms->firstTri; t < ms->firstTri + ms->nTri; t++) {
            float q[3], dv[3];
            closest_tri(c, w->vert[w->tri[t][0]], w->vert[w->tri[t][1]], w->vert[w->tri[t][2]], q);
            v3sub(c, q, dv);
            float d2 = v3dot(dv, dv);
            if (d2 > r * r) continue;
            if (hits && n < max) {
                CpaCollHit *h = &hits[n];
                float d = sqrtf(d2);
                h->tri = t; h->mesh = mi; h->mat = w->triMat[t]; h->t = d; h->depth = r - d;
                memcpy(h->p, q, 12);
                if (d > 1e-6f) for (int k = 0; k < 3; k++) h->n[k] = dv[k] / d;
                else memcpy(h->n, w->nrm[t], 12);
            }
            n++;
        }
    }
    return n;
}

uint32_t cpa_coll_active_zones(const CpaCollWorld *w, const CpaCollActor *a, int slot, uint32_t state, uint16_t *out, uint32_t max) {
    if (slot < 0 || slot >= CPA_ZDX_N || a->table[slot] < 0) return 0;
    const CpaZoneSetTable *t = &w->tables[a->table[slot]];
    if (state >= t->nStates) return 0;
    const CpaZoneSet *s = &w->sets[t->firstSet + state];
    uint32_t n = 0;
    for (uint32_t k = 0; k < s->n && n < max; k++) out[n++] = w->setIdx[s->firstIdx + k];
    return n;
}

int cpa_coll_find_actor(const CpaCollWorld *w, uint32_t soVa) {
    for (uint32_t i = 0; i < w->nActors; i++) if (w->actors[i].soVa == soVa) return (int)i;
    return -1;
}
