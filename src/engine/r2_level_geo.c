/* See r2_level_geo.h. Layouts: tools/DC_LEVEL_FORMAT.md sections 4-6. */
#include "r2_level_geo.h"
#include "gli_vitagl.h"
#include "gli_pvr.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static const R2Geo_Image *g_img[2];
static R2Geo_Image g_imgStore[2];   /* copies: callers pass stack structs, but RigPose reads the images after Build returns */

static const R2Geo_Image *img_of(uint32_t va, size_t len) {
    for (int i = 0; i < 2; i++) {
        const R2Geo_Image *m = g_img[i];
        if (m && va >= m->base && (uint64_t)va + len <= (uint64_t)m->base + m->n) return m;
    }
    return NULL;
}
static int rd32(uint32_t va, uint32_t *o) {
    const R2Geo_Image *m = img_of(va, 4);
    if (!m || (va & 3)) return 0;
    memcpy(o, m->p + (va - m->base), 4);
    return 1;
}
static int rd16(uint32_t va, uint16_t *o) {
    const R2Geo_Image *m = img_of(va, 2);
    if (!m || (va & 1)) return 0;
    memcpy(o, m->p + (va - m->base), 2);
    return 1;
}
static int rd8(uint32_t va, uint8_t *o) {
    const R2Geo_Image *m = img_of(va, 1);
    if (!m) return 0;
    *o = m->p[va - m->base];
    return 1;
}
static uint32_t U32v(uint32_t va) { uint32_t v = 0; rd32(va, &v); return v; }
static uint16_t U16v(uint32_t va) { uint16_t v = 0; rd16(va, &v); return v; }
static int16_t  S16v(uint32_t va) { return (int16_t)U16v(va); }
static float    F32v(uint32_t va) { uint32_t u = U32v(va); float f; memcpy(&f, &u, 4); return isfinite(f) ? f : 0.f; }
static int rdf(uint32_t va, float *o) {
    uint32_t u;
    if (!rd32(va, &u)) return 0;
    memcpy(o, &u, 4);
    return isfinite(*o);
}
static int is_ptr(uint32_t v)   { return v && !(v & 3) && img_of(v, 4); }
static int is_ptr16(uint32_t v) { return v && !(v & 1) && img_of(v, 2); }

typedef struct { float m[16]; } Mat;

static void mat_ident(Mat *r) { memset(r, 0, sizeof *r); r->m[0] = r->m[5] = r->m[10] = r->m[15] = 1.f; }
/* Matrix object: +00 u32 type (1..6), +28 float m4x4[16], row vectors, translation row 3 */
static int mat_read(uint32_t va, Mat *r) {
    uint32_t type;
    if (!rd32(va, &type) || type < 1 || type > 6) return 0;
    for (int i = 0; i < 16; i++) if (!rdf(va + 0x28 + 4u * i, &r->m[i])) return 0;
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
static void xform(const Mat *m, const float v[3], float o[3]) {
    for (int j = 0; j < 3; j++)
        o[j] = v[0] * m->m[j] + v[1] * m->m[4 + j] + v[2] * m->m[8 + j] + m->m[12 + j];
}

/* ---- temporary element list ---- */
typedef struct { uint32_t tex; uint32_t nTri; int actor; int chan; float *pos; float *uv; } Elem;
typedef struct {
    R2Geo_Scene *s;
    Elem *el; uint32_t nEl, capEl;
    uint8_t *seen[2];
    uint32_t nodes;
    uint32_t *geoDone; uint32_t nGeoDone, capGeoDone;   /* actor geo VAs already emitted */
    int curChan;                                         /* >=0 while decoding a Rayman rig part */
} Ctx;

#define RAYMAN_SO_VA 0x8CBB07D0u   /* main character SO (also LEARN_10.DAT header words 22 and 30); notes_pose.md */

static uint8_t **seen_for(Ctx *c, const R2Geo_Image *m) { return &c->seen[m == g_img[0] ? 0 : 1]; }

static int emit_geo(Ctx *c, uint32_t geo, const Mat *wm, int isActor) {
    uint32_t pv, ptypes, pelems, cnt;
    if (!rd32(geo + 0x00, &pv) || !rd32(geo + 0x10, &ptypes) || !rd32(geo + 0x14, &pelems) || !rd32(geo + 0x2C, &cnt)) return 0;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !is_ptr(pv) || !is_ptr(ptypes) || !is_ptr(pelems)) return 0;
    if (!img_of(pv, nv * 12)) return 0;

    float (*vw)[3] = malloc(sizeof(float[3]) * nv);
    if (!vw) return 0;
    for (uint32_t i = 0; i < nv; i++) {
        float v[3];
        for (int k = 0; k < 3; k++) if (!rdf(pv + i * 12 + k * 4, &v[k])) { free(vw); return 0; }
        xform(wm, v, vw[i]);
        for (int k = 0; k < 3 && !isActor; k++) {
            if (vw[i][k] < c->s->bmin[k]) c->s->bmin[k] = vw[i][k];
            if (vw[i][k] > c->s->bmax[k]) c->s->bmax[k] = vw[i][k];
        }
    }
    c->s->nMeshes++;

    for (uint32_t e = 0; e < ne; e++) {
        uint16_t etype; uint32_t el, w[8];
        c->s->nElements++;
        if (!rd16(ptypes + 2 * e, &etype) || !rd32(pelems + 4 * e, &el) || !is_ptr(el)) { c->s->nElemSkipped++; continue; }
        if (etype != 1) { c->s->nElemSkipped++; continue; }   /* only IndexedTriangles decoded */
        int ok = 1;
        for (int i = 0; i < 8; i++) ok &= rd32(el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !is_ptr16(w[2]) || !is_ptr16(w[3]) || !is_ptr(w[5]) ||
            !img_of(w[2], ntri * 6) || !img_of(w[3], ntri * 6) || !img_of(w[5], nuv * 8)) { c->s->nElemSkipped++; continue; }

        uint32_t vm = 0, tex = 0;   /* element -> GameMaterial -> VisualMaterial -> (+0x4C) texture struct */
        if (is_ptr(w[0]) && rd32(w[0], &vm) && is_ptr(vm)) rd32(vm + 0x4C, &tex);

        Elem E; E.tex = tex; E.nTri = 0; E.actor = isActor; E.chan = c->curChan;
        E.pos = malloc(sizeof(float) * 9 * ntri);
        E.uv  = malloc(sizeof(float) * 6 * ntri);
        if (!E.pos || !E.uv) { free(E.pos); free(E.uv); free(vw); return 0; }
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3];
            int fo = 1;
            for (int k = 0; k < 3; k++) fo &= rd16(w[2] + t * 6 + k * 2, &vi[k]) && rd16(w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) continue;
            for (int k = 0; k < 3; k++) {
                float u = 0, v = 0;
                rdf(w[5] + ui[k] * 8u, &u); rdf(w[5] + ui[k] * 8u + 4, &v);
                memcpy(E.pos + (E.nTri * 3 + k) * 3, vw[vi[k]], sizeof(float) * 3);
                E.uv[(E.nTri * 3 + k) * 2 + 0] = u;
                E.uv[(E.nTri * 3 + k) * 2 + 1] = v;
            }
            E.nTri++;
        }
        if (c->nEl == c->capEl) {
            c->capEl = c->capEl ? c->capEl * 2 : 512;
            c->el = realloc(c->el, sizeof(Elem) * c->capEl);
        }
        c->el[c->nEl++] = E;
    }
    free(vw);
    return 1;
}


/* ---- Rayman rig (port of tools/dc_actor_pose.c; layouts in re_analysis/dc/notes_pose.md) ---- */
static void rig_build(Ctx *c, uint32_t actorVa, const Mat *soWorld) {
    R2Geo_Rig *R = &c->s->rig;
    const R2Geo_Image *L = g_img[0];
    uint32_t d3, tbl, arr, hw;
    if (L->n < 0x28 || !rd32(actorVa, &d3) || !is_ptr(d3) || !rd32(d3 + 0xC, &tbl) || !is_ptr(tbl) ||
        !rd32(tbl, &arr) || !is_ptr(arr) || !rd32(tbl + 8, &hw)) return;
    memcpy(R->H, L->p, 40);
    uint32_t ntbl = hw & 0xFFFF;
    R->soVa = RAYMAN_SO_VA; R->anim = 0;
    uint32_t ar = R->H[0] + 0x38u * (uint32_t)R->anim;
    R->nKeys = U16v(ar); R->nCh = U16v(ar + 0xC); R->nFrames = U16v(ar + 0xE); R->firstFrame = U16v(ar + 0x18);
    if (!R->nCh || R->nCh > R2GEO_RIG_MAXCH || !R->nFrames) return;

    /* frame rate: find a State (3dData+0x14 list, node+0x10) whose AnimRef (+0x18 = anim index) is this anim; AnimRef u8@2 */
    R->fps = 0.f; R->fpsFromData = 0;
    uint32_t lst = U32v(d3 + 0x14);
    if (is_ptr(lst)) for (uint32_t i = 0; i < 512; i++) {
        uint32_t st = U32v(lst + 0x30 * i + 0x10), ref;
        if (!is_ptr(st) || !rd32(st, &ref) || !is_ptr(ref) || !img_of(ref, 0x1C)) continue;
        if (U16v(ref + 0x18) != (uint16_t)R->anim) continue;
        uint8_t sp = 0; rd8(ref + 2, &sp);
        R->animRefFrames = U16v(ref);
        if (sp) { R->fps = (float)sp; R->fpsFromData = 1; break; }
    }

    /* per-channel object at the first frame */
    uint32_t streamBase = U16v(R->H[5] + 10u * (U16v(ar + 0x2E) + 0u) + 8);
    uint32_t b6 = U16v(ar + 0x30);
    c->curChan = -1;
    for (uint32_t ch = 0; ch < R->nCh; ch++) {
        uint32_t r6 = R->H[6] + 0x10u * (b6 + ch);
        uint16_t h4i = U16v(R->H[7] + 2u * (streamBase + U16v(r6 + 6)));
        R->obj[ch] = (h4i == 0xFFFF) ? -1 : (int)S16v(R->H[4] + 6u * h4i + 2);
        R->geo[ch] = 0;
        if (R->obj[ch] < 0 || (uint32_t)R->obj[ch] >= ntbl) continue;
        uint32_t po = U32v(arr + 0x10u * (uint32_t)R->obj[ch] + 4), vs, geo;
        if (!is_ptr(po) || !rd32(po, &vs) || !is_ptr(vs) || !rd32(vs + 4, &geo) || !is_ptr(geo)) continue;
        R->geo[ch] = geo;
        Mat id; mat_ident(&id);
        c->curChan = (int)ch;
        if (emit_geo(c, geo, &id, 1)) R->geoCount++;
        c->curChan = -1;
    }

    /* placement: SO global matrix (identity in the data) unless the header-word-25 block verifies */
    R->placement = 0;
    Mat w = *soWorld;
    {
        uint32_t b = 0;
        if (L->n >= 0x68) memcpy(&b, L->p + 25 * 4, 4);
        Mat bm;
        if (is_ptr(b) && U32v(b) == actorVa && U32v(b + 4) == RAYMAN_SO_VA && mat_read(b + 0xC, &bm)) { w = bm; R->placement = 1; }
    }
    memcpy(R->world, w.m, sizeof R->world);
    R->valid = R->geoCount > 0;
}

static void walk(Ctx *c, uint32_t va, uint32_t parent, int depth, const Mat *pg) {
    R2Geo_Scene *s = c->s;
    const R2Geo_Image *m = img_of(va, 0x48);
    if (!m || depth > 32 || c->nodes > 100000) { s->nUnreadable++; return; }
    uint8_t **sb = seen_for(c, m);
    uint32_t slot = (va - m->base) >> 2;
    if ((*sb)[slot >> 3] & (1u << (slot & 7))) { s->nCycle++; return; }
    (*sb)[slot >> 3] |= (uint8_t)(1u << (slot & 7));
    c->nodes++;

    uint32_t w[18];
    for (int i = 0; i < 18; i++) if (!rd32(va + 4u * i, &w[i])) { s->nUnreadable++; return; }
    s->nSO++;
    switch (w[0]) {
        case 1: s->nSOWorld++; break; case 2: s->nSOActor++; break;
        case 4: s->nSOSector++; break; case 0x20: s->nSOIpo++; break; default: s->nSOOther++; }
    if (w[7] != parent) s->nParentMismatch++;

    Mat loc, glob, chain, world;
    int hl = is_ptr(w[8]) && mat_read(w[8], &loc);
    int hg = is_ptr(w[9]) && mat_read(w[9], &glob);
    if (hl) mat_mul(&loc, pg, &chain); else chain = *pg;
    world = hg ? glob : chain;

    if (w[0] == 2) {   /* Actor -> 3dData -> ObjectsTable -> PO -> VisualSet -> geo (re_analysis/dc/notes_geometry.md sec 2/4) */
        uint32_t d3 = 0, tbl = 0, arr = 0, hw = 0;
        s->nActors++;
        if (va == RAYMAN_SO_VA) { if (is_ptr(w[1])) rig_build(c, w[1], &world); }
        else if (!is_ptr(w[1]) || !rd32(w[1], &d3) || !is_ptr(d3) || !rd32(d3 + 0xC, &tbl) || !is_ptr(tbl) ||
            !rd32(tbl, &arr) || !is_ptr(arr) || !rd32(tbl + 8, &hw)) s->nActorNoTable++;
        else {
            uint32_t cnt = hw & 0xFFFF;
            if (cnt > 4096) cnt = 0;
            for (uint32_t i = 0; i < cnt; i++) {
                uint32_t po, vs, geo;
                s->nActorTblEntries++;
                if (!rd32(arr + 0x10 * i + 4, &po) || !is_ptr(po)) { s->nActorNullPo++; continue; }
                if (!rd32(po, &vs) || !is_ptr(vs) || !rd32(vs + 4, &geo) || !is_ptr(geo)) { s->nActorBadChain++; continue; }
                int dup = 0;
                for (uint32_t k = 0; k < c->nGeoDone; k++) if (c->geoDone[k] == geo) { dup = 1; break; }
                if (dup) { s->nActorDupGeo++; continue; }
                if (c->nGeoDone == c->capGeoDone) {
                    c->capGeoDone = c->capGeoDone ? c->capGeoDone * 2 : 256;
                    c->geoDone = realloc(c->geoDone, sizeof(uint32_t) * c->capGeoDone);
                }
                c->geoDone[c->nGeoDone++] = geo;
                if (emit_geo(c, geo, &world, 1)) s->nActorGeos++;
            }
        }
    }

    if (w[0] == 0x20) {   /* IPO -> PO -> VisualSet -> GeometricObject */
        uint32_t po, vs, geo;
        s->nIpo++;
        if (is_ptr(w[1]) && rd32(w[1], &po) && is_ptr(po) && rd32(po, &vs) && is_ptr(vs) &&
            rd32(vs + 4, &geo) && is_ptr(geo) && emit_geo(c, geo, &world, 0)) s->nIpoMesh++;
    }

    uint32_t ch = w[2], n = 0;
    while (ch && n < 100000) {
        uint32_t nxt;
        if (!rd32(ch + 0x14, &nxt)) { s->nUnreadable++; break; }
        walk(c, ch, va, depth + 1, &world);
        n++;
        ch = nxt;
    }
    if (n != w[4]) s->nCountMismatch++;
}

bool R2Geo_Build(const R2Geo_Image *fix, const R2Geo_Image *lvl, uint32_t rootVa, R2Geo_Scene *out) {
    memset(out, 0, sizeof *out);
    g_imgStore[0] = *lvl; g_imgStore[1] = *fix;
    g_img[0] = &g_imgStore[0]; g_img[1] = &g_imgStore[1];
    for (int k = 0; k < 3; k++) { out->bmin[k] = 1e30f; out->bmax[k] = -1e30f; }

    uint32_t type, par;
    if (!rd32(rootVa, &type) || type != 1 || !rd32(rootVa + 0x1C, &par) || par != 0) return false;

    Ctx c; memset(&c, 0, sizeof c);
    c.s = out; c.curChan = -1;
    c.seen[0] = calloc(lvl->n / 32 + 1, 1);
    c.seen[1] = calloc(fix->n / 32 + 1, 1);
    Mat id; mat_ident(&id);
    walk(&c, rootVa, 0, 0, &id);
    free(c.seen[0]); free(c.seen[1]); free(c.geoDone);

    /* move Rayman's local-space part elements into the rig (they are re-posed every frame, not batched) */
    {
        R2Geo_Rig *R = &out->rig;
        uint32_t nr = 0, k = 0;
        for (uint32_t i = 0; i < c.nEl; i++) if (c.el[i].chan >= 0) nr++;
        if (nr) R->el = calloc(nr, sizeof(R2Geo_RigElem));
        for (uint32_t i = 0; i < c.nEl; i++) {
            Elem *e = &c.el[i];
            if (e->chan >= 0 && R->el) {
                R2Geo_RigElem *r = &R->el[R->nEl++];
                r->tex = e->tex; r->nTri = e->nTri; r->chan = e->chan;
                r->lpos = e->pos; r->uv = e->uv; r->wpos = malloc(sizeof(float) * 9 * (e->nTri ? e->nTri : 1));
                if (r->wpos) memcpy(r->wpos, r->lpos, sizeof(float) * 9 * e->nTri);
                R->nTris += e->nTri;
            } else c.el[k++] = *e;
        }
        c.nEl = k;
    }
    uint32_t total = 0;
    for (uint32_t i = 0; i < c.nEl; i++) { total += c.el[i].nTri; if (c.el[i].actor) out->nActorTris += c.el[i].nTri; }
    out->nTris = total;
    out->nStaticTris = total - out->nActorTris;
    out->nUnposedActorTris = out->nActorTris;
    out->pos = malloc(sizeof(float) * 9 * (total ? total : 1));
    out->uv  = malloc(sizeof(float) * 6 * (total ? total : 1));
    out->batches = calloc(c.nEl ? c.nEl : 1, sizeof(R2Geo_Batch));
    uint8_t *done = calloc(c.nEl ? c.nEl : 1, 1);
    uint32_t nv = 0;
    for (uint32_t i = 0; i < c.nEl; i++) {
        if (done[i]) continue;
        R2Geo_Batch *b = &out->batches[out->nBatches++];
        b->texVa = c.el[i].tex; b->first = nv; b->isActor = c.el[i].actor;
        for (uint32_t j = i; j < c.nEl; j++) {
            if (done[j] || c.el[j].tex != b->texVa || c.el[j].actor != b->isActor) continue;
            memcpy(out->pos + nv * 3, c.el[j].pos, sizeof(float) * 9 * c.el[j].nTri);
            memcpy(out->uv + nv * 2, c.el[j].uv, sizeof(float) * 6 * c.el[j].nTri);
            nv += c.el[j].nTri * 3;
            done[j] = 1;
        }
        b->count = nv - b->first;
        if (b->texVa) out->nDistinctTex++;
    }
    out->nVerts = nv;
    for (uint32_t i = 0; i < c.nEl; i++) { free(c.el[i].pos); free(c.el[i].uv); }
    free(c.el); free(done);
    return out->nTris > 0;
}

/* ---- texture flags (notes_levels.md (c1)): tex+4 = DC flags (bit31 always set in level data), tex+0x18 = wrap byte ----
 * Class from flags (INFERRED meanings, correlated with texture-name suffixes, not read from the draw code):
 *   0x20 (_ad/_adnzw)   -> additive          0x40 (0x48)        -> blend
 *   0x10 (0x12, _nz)    -> cutout/alpha test 0x08 (0x08,0x208)  -> blend (alpha-channel textures)
 *   flags == 0          -> opaque            anything else (0x02, 0x802, ...) -> unclear -> texel-alpha fallback
 * Wrap: values 0..3 only are interpreted: bit1 (value 2) = tile in U, bit0 (value 1) = tile in V. Evidence: UV extents of the
 * static batches (log [TEXWRAP]): wrap 2 has U-only out-of-range UVs, wrap 1 has none U-only, wrap 3 mostly both; this agrees with
 * FUN_8c03a5dc (U pair -> 2, V pair -> 1) and contradicts the earlier name-suffix guess in notes_levels.md. A clear bit -> GL_CLAMP_TO_EDGE. Values > 3 (5, 15 seen) are unclear -> GL_REPEAT both. No observed value is mapped to mirror. */
static int tex_resolve(R2Geo_Scene *s, uint32_t texVa, unsigned *gl, int *alpha, int *src, int *wS, int *wT) {
    *gl = texVa ? R2_PVR_GetTextureGLByVA(texVa) : 0;
    *alpha = 0; *src = 1; *wS = *wT = GL_REPEAT;
    if (!*gl) return 0;
    int texel = R2_PVR_GetTextureAlphaModeByVA(texVa);
    uint32_t fl = 0; uint8_t wr = 0; int flagsOk = 0;
    if (is_ptr(texVa) && rd32(texVa + 4, &fl) && (fl & 0x80000000u) && rd8(texVa + 0x18, &wr)) flagsOk = 1;
    int cls = -1;
    if (flagsOk) {
        uint32_t f = fl & 0x7FFFFFFFu;
        if (f & 0x20) cls = 3; else if (f & 0x40) cls = 2; else if (f & 0x10) cls = 1; else if (f & 0x08) cls = 2; else if (f == 0) cls = 0;
    }
    if (cls >= 0) { *alpha = cls; *src = 0; } else *alpha = texel;
    int wrapUnclear = 0;
    if (flagsOk) {
        if (wr <= 3) { *wS = (wr & 2) ? GL_REPEAT : GL_CLAMP_TO_EDGE; *wT = (wr & 1) ? GL_REPEAT : GL_CLAMP_TO_EDGE; }
        else wrapUnclear = 1;
    } else wrapUnclear = 1;
    /* distinct-texture statistics */
    static uint32_t seen[512]; static uint32_t nSeen;
    if (s->nTexDistinct == 0) nSeen = 0;
    int dup = 0;
    for (uint32_t i = 0; i < nSeen; i++) if (seen[i] == texVa) { dup = 1; break; }
    if (!dup && nSeen < 512) {
        seen[nSeen++] = texVa; s->nTexDistinct++;
        if (cls < 0) s->nTexFlagUnclear++;
        if (wrapUnclear) s->nTexWrapUnclear++;
        s->flagVsTexel[cls < 0 ? 4 : cls][texel > 2 ? 2 : texel]++;
        uint32_t key = flagsOk ? (fl & 0x7FFFFFFFu) : 0xFFFFFFFFu; int wk = flagsOk ? wr : -1, f2 = 0;
        for (uint32_t i = 0; i < s->nTexHist; i++) if (s->texHist[i].flags == key && s->texHist[i].wrap == wk) { s->texHist[i].count++; f2 = 1; break; }
        if (!f2 && s->nTexHist < 96) { R2Geo_TexHist *h = &s->texHist[s->nTexHist++]; h->flags = key; h->wrap = wk; h->count = 1; h->cls = cls; }
    }
    return 1;
}

void R2Geo_ResolveTextures(R2Geo_Scene *s) {
    s->nTexResolved = 0; s->nBatchCutout = s->nBatchBlend = 0;
    s->nTexDistinct = s->nTexHist = s->nTexFlagUnclear = s->nTexWrapUnclear = 0;
    memset(s->flagVsTexel, 0, sizeof s->flagVsTexel);
    for (uint32_t i = 0; i < s->nBatches; i++) {
        R2Geo_Batch *b = &s->batches[i];
        tex_resolve(s, b->texVa, &b->glTex, &b->alphaMode, &b->alphaSrc, &b->wrapS, &b->wrapT);
        if (b->alphaMode == 1) s->nBatchCutout++; else if (b->alphaMode >= 2) s->nBatchBlend++;
        if (b->texVa && b->glTex) s->nTexResolved++;
    }
    memset(s->uvRange, 0, sizeof s->uvRange);
    for (uint32_t i = 0; i < s->nBatches; i++) {
        const R2Geo_Batch *b = &s->batches[i];
        if (!b->glTex || b->isActor) continue;
        uint32_t fl = 0; uint8_t wr = 0; int cls = 5;
        if (is_ptr(b->texVa) && rd32(b->texVa + 4, &fl) && (fl & 0x80000000u) && rd8(b->texVa + 0x18, &wr)) cls = wr <= 3 ? wr : 4;
        int ou = 0, ov = 0;
        for (uint32_t v = b->first; v < b->first + b->count; v++) {
            float u = s->uv[v * 2], w = s->uv[v * 2 + 1];
            if (u < -0.01f || u > 1.01f) ou = 1;
            if (w < -0.01f || w > 1.01f) ov = 1;
        }
        s->uvRange[cls][ou && ov ? 3 : ov ? 2 : ou ? 1 : 0]++;
    }
    for (uint32_t i = 0; i < s->rig.nEl; i++) {
        R2Geo_RigElem *r = &s->rig.el[i];
        if (tex_resolve(s, r->tex, &r->glTex, &r->alphaMode, &r->alphaSrc, &r->wrapS, &r->wrapT)) s->rig.nElTexResolved++;
    }
}

/* ---- Rayman pose evaluation (port of tools/dc_actor_pose.c eval_key/main loop) ---- */
static void quat_get(uint32_t H2, uint16_t idx, float q[4]) {
    for (int i = 0; i < 4; i++) q[i] = (float)S16v(H2 + 8u * idx + 2u * i) * (1.0f / 32767.0f);
}
/* stored row-major like FUN_8c081660 (PROVEN) */
static void quat_to_m3(const float q[4], float m[9]) {
    float x = q[0], y = q[1], z = q[2], w = q[3];
    m[0] = 1 - 2 * (y * y + z * z); m[1] = 2 * (x * y - z * w);     m[2] = 2 * (x * z + y * w);
    m[3] = 2 * (x * y + z * w);     m[4] = 1 - 2 * (x * x + z * z); m[5] = 2 * (y * z - x * w);
    m[6] = 2 * (x * z - y * w);     m[7] = 2 * (y * z + x * w);     m[8] = 1 - 2 * (x * x + y * y);
}
static void m3_mul(const float a[9], const float b[9], float r[9]) {
    float t[9];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
        float v = 0; for (int k = 0; k < 3; k++) v += a[i * 3 + k] * b[k * 3 + j]; t[i * 3 + j] = v;
    }
    memcpy(r, t, sizeof t);
}
static void slerp(const float a[4], const float b[4], float t, float o[4]) {   /* my choice of interpolation */
    float d = a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3], sg = 1.f, bb[4];
    if (d < 0) { d = -d; sg = -1.f; }
    for (int i = 0; i < 4; i++) bb[i] = sg * b[i];
    float k0, k1;
    if (d > 0.9995f) { k0 = 1 - t; k1 = t; }
    else { float th = acosf(d), sn = sinf(th); k0 = sinf((1 - t) * th) / sn; k1 = sinf(t * th) / sn; }
    float n = 0;
    for (int i = 0; i < 4; i++) { o[i] = k0 * a[i] + k1 * bb[i]; n += o[i] * o[i]; }
    n = n > 0 ? 1.f / sqrtf(n) : 1.f;
    for (int i = 0; i < 4; i++) o[i] *= n;
}

void R2Geo_RigPose(R2Geo_Scene *s, float ft) {
    R2Geo_Rig *R = &s->rig;
    if (!R->valid) return;
    const uint32_t *H = R->H;
    uint32_t ar = H[0] + 0x38u * (uint32_t)R->anim, b6 = U16v(ar + 0x30);
    if (ft < (float)R->firstFrame) ft = (float)R->firstFrame;
    if (ft > (float)(R->firstFrame + R->nFrames - 1)) ft = (float)(R->firstFrame + R->nFrames - 1);
    uint32_t f = (uint32_t)ft - R->firstFrame;
    Mat W; memcpy(W.m, R->world, sizeof W.m);
    Mat cm[R2GEO_RIG_MAXCH]; uint8_t have[R2GEO_RIG_MAXCH] = {0};
    for (uint32_t ch = 0; ch < R->nCh; ch++) {
        uint32_t r6 = H[6] + 0x10u * (b6 + ch), hbase = U32v(r6 + 8);
        uint32_t kidx = U32v(H[8] + 4u * (hbase + f)), key = H[9] + 0x24u * kidx, nextkey = 0;
        float t = 0, kfr = (float)U16v(key + 0x10);
        uint16_t flags = U16v(key + 0x12);
        if (!(flags & 0x80)) {
            uint32_t nk = key + 0x24; float nf = (float)U16v(nk + 0x10);
            if (nf > kfr && ft > kfr) { nextkey = nk; t = (ft - kfr) / (nf - kfr); if (t > 1.f) t = 1.f; }
        }
        float q[4] = { 0, 0, 0, 1 }, Rm[9], T[3];
        if (!(flags & 0x10)) {
            quat_get(H[2], U16v(key + 0x14), q);
            if (t > 0 && nextkey && !(U16v(nextkey + 0x12) & 0x10)) { float q2[4]; quat_get(H[2], U16v(nextkey + 0x14), q2); slerp(q, q2, t, q); }
        }
        quat_to_m3(q, Rm);
        uint16_t vt = U16v(key + 0x1A); float len = F32v(key + 0xC);
        for (int i = 0; i < 3; i++) T[i] = F32v(H[1] + 12u * vt + 4u * i) * len;
        if (t > 0 && nextkey) for (int i = 0; i < 3; i++) {
            float b = F32v(H[1] + 12u * U16v(nextkey + 0x1A) + 4u * i) * F32v(nextkey + 0xC);
            T[i] += (b - T[i]) * t;
        }
        float S[3]; uint16_t vs = U16v(key + 0x18);
        for (int i = 0; i < 3; i++) S[i] = F32v(H[1] + 12u * vs + 4u * i);
        if (fabsf(S[0] - 1) > 1e-4f || fabsf(S[1] - 1) > 1e-4f || fabsf(S[2] - 1) > 1e-4f) {   /* INFERRED, never hit for Wait */
            float qb[4], Rb[9], RbT[9], D[9] = { S[0],0,0, 0,S[1],0, 0,0,S[2] }, t1[9], t2[9];
            quat_get(H[2], U16v(key + 0x16), qb); quat_to_m3(qb, Rb);
            for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) RbT[i * 3 + j] = Rb[j * 3 + i];
            m3_mul(Rb, D, t1); m3_mul(t1, RbT, t2); m3_mul(t2, Rm, Rm);
        }
        Mat pm; mat_ident(&pm);
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) pm.m[i * 4 + j] = Rm[i * 3 + j];
        for (int j = 0; j < 3; j++) pm.m[12 + j] = T[j];
        mat_mul(&pm, &W, &cm[ch]); have[ch] = 1;
    }
    for (int k = 0; k < 3; k++) { R->pmin[k] = 1e30f; R->pmax[k] = -1e30f; }
    for (uint32_t i = 0; i < R->nEl; i++) {
        R2Geo_RigElem *r = &R->el[i];
        if (!r->wpos || r->chan < 0 || r->chan >= R2GEO_RIG_MAXCH || !have[r->chan]) continue;
        for (uint32_t v = 0; v < r->nTri * 3; v++) {
            xform(&cm[r->chan], r->lpos + v * 3, r->wpos + v * 3);
            for (int k = 0; k < 3; k++) { float x = r->wpos[v * 3 + k]; if (x < R->pmin[k]) R->pmin[k] = x; if (x > R->pmax[k]) R->pmax[k] = x; }
        }
    }
}

/* ---- drawing ---- */
static void bind_tex(unsigned glTex, int wS, int wT) {
    if (glTex) {
        glEnable(GL_TEXTURE_2D); glBindTexture(GL_TEXTURE_2D, glTex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wS);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wT);
    } else glDisable(GL_TEXTURE_2D);
}

uint32_t R2Geo_Draw(const R2Geo_Scene *s, int drawFlags) {
    int showUnposed = drawFlags & R2GEO_DRAW_UNPOSED, rigOnly = drawFlags & R2GEO_DRAW_RIG_ONLY;
    uint32_t calls = 0;
    if ((!s->nVerts && !s->rig.valid) || !g_stVitaGL.bHardwareAccelerated) return 0;
    /* Winding: stored index order is CCW about the stored face normal (notes_geometry.md, 8410/8410 tris);
     * the scene is submitted in raw engine axes with a right-handed lookAt, so GL_CCW front faces apply. */
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glFrontFace(GL_CCW);
    glDisable(GL_LIGHTING);
    glColor4f(1.f, 1.f, 1.f, 1.f);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    /* pass 0: opaque, 1: alpha-tested cutout, 2: blended, 3: additive (blend passes: depth write off) */
    for (int pass = 0; pass < 4; pass++) {
        if (pass == 1) { glEnable(GL_ALPHA_TEST); glAlphaFunc(GL_GREATER, 0.5f); }
        if (pass == 2) { glDisable(GL_ALPHA_TEST); glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); glDepthMask(GL_FALSE); }
        if (pass == 3) { glBlendFunc(GL_SRC_ALPHA, GL_ONE); }
        glVertexPointer(3, GL_FLOAT, 0, s->pos);
        glTexCoordPointer(2, GL_FLOAT, 0, s->uv);
        for (uint32_t i = 0; i < s->nBatches; i++) {
            const R2Geo_Batch *b = &s->batches[i];
            if (rigOnly || b->alphaMode != pass || (b->isActor && !showUnposed)) continue;
            bind_tex(b->glTex, b->wrapS, b->wrapT);
            glDrawArrays(GL_TRIANGLES, (GLint)b->first, (GLsizei)b->count);
            g_stVitaGL.stStats.ulTrianglesDrawn += b->count / 3;
            g_stVitaGL.stStats.ulBatchesSubmitted++;
            calls++;
        }
        for (uint32_t i = 0; i < s->rig.nEl; i++) {
            const R2Geo_RigElem *r = &s->rig.el[i];
            if (!s->rig.valid || r->alphaMode != pass || !r->wpos || !r->nTri) continue;
            glVertexPointer(3, GL_FLOAT, 0, r->wpos);
            glTexCoordPointer(2, GL_FLOAT, 0, r->uv);
            bind_tex(r->glTex, r->wrapS, r->wrapT);
            glDrawArrays(GL_TRIANGLES, 0, (GLsizei)(r->nTri * 3));
            g_stVitaGL.stStats.ulTrianglesDrawn += r->nTri;
            g_stVitaGL.stStats.ulBatchesSubmitted++;
            calls++;
        }
    }
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    return calls;
}

void R2Geo_Free(R2Geo_Scene *s) {
    for (uint32_t i = 0; i < s->rig.nEl; i++) { free(s->rig.el[i].lpos); free(s->rig.el[i].uv); free(s->rig.el[i].wpos); }
    free(s->rig.el);
    free(s->pos); free(s->uv); free(s->batches);
    memset(s, 0, sizeof *s);
}
