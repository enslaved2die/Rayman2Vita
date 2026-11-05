/* See cpa_scene.h. Logic re-stated from src/engine/r2_level_geo.c without GL or file-scope globals. */
#include "cpa_scene.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

/* ---------- small math (row-vector convention, INFERRED from translation in row 3) ---------- */
typedef struct { float m[16]; } Mat;

static void mat_ident(Mat *r) { memset(r, 0, sizeof *r); r->m[0] = r->m[5] = r->m[10] = r->m[15] = 1.f; }
/* Matrix object. VERIFIED layout (DC_LEVEL_FORMAT.md sec 5): +00 u32 type (1..6 seen), +04 float rot3x3[9], +28 float m4x4[16]. */
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
static void xform(const Mat *m, const float v[3], float o[3]) {
    for (int j = 0; j < 3; j++)
        o[j] = v[0] * m->m[j] + v[1] * m->m[4 + j] + v[2] * m->m[8 + j] + m->m[12 + j];
}
static uint32_t le32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

/* ---------- walk context ---------- */
typedef struct {
    uint32_t tex;
    uint32_t nTri; int actor, chan; float *pos, *uv;
    uint8_t overlay;
    uint32_t animHead, animCount;   /* VisualMaterial texture-animation frame list (0 = none), see vm_texture() */
} Elem;

typedef struct {
    CpaScene *s;
    const CpaImage *im;
    Elem *el; uint32_t nEl, capEl;
    uint8_t *seen[CPA_MAX_REGIONS];
    uint32_t nodes;
    uint32_t *geoDone; uint32_t nGeoDone, capGeoDone;
    int curChan;   /* >= 0 while decoding a Rayman rig part */
    CpaSprite *spr; uint32_t nSpr, capSpr;
    uint32_t *vmSeen; uint32_t nVmSeen, capVmSeen;   /* distinct VisualMaterials already counted for the animation statistics */
} Ctx;

/* Decode texture-struct flags/wrap. Wrap evidence (INFERRED, notes_levels.md): UV extents of static batches: wrap 2 has U-only
 * out-of-range UVs, wrap 1 none U-only, wrap 3 mostly both; agrees with FUN_8c03a5dc (U pair -> 2, V pair -> 1). */
static void tex_decode(const CpaImage *im, uint32_t texVa, uint32_t *flags, uint8_t *wrap, uint8_t *valid,
                       uint8_t *tileU, uint8_t *tileV, uint8_t *wrapUnclear, int8_t *alpha) {
    uint32_t fl = 0; uint8_t wr = 0;
    *flags = 0; *wrap = 0; *valid = 0; *tileU = *tileV = 1; *wrapUnclear = 1; *alpha = CPA_ALPHA_UNKNOWN;
    if (!texVa || !cpa_is_ptr(im, texVa) || !cpa_rd32(im, texVa + 4, &fl) || !(fl & 0x80000000u) || !cpa_rd8(im, texVa + 0x18, &wr)) return;
    *valid = 1; *flags = fl & 0x7FFFFFFFu; *wrap = wr;
    uint32_t f = *flags;
    if (f & 0x20) *alpha = CPA_ALPHA_ADDITIVE;
    else if (f & 0x40) *alpha = CPA_ALPHA_BLEND;
    else if (f & 0x10) *alpha = CPA_ALPHA_CUTOUT;
    else if (f & 0x08) *alpha = CPA_ALPHA_BLEND;
    else if (f == 0) *alpha = CPA_ALPHA_OPAQUE;
    if (wr <= 3) { *tileU = (wr & 2) ? 1 : 0; *tileV = (wr & 1) ? 1 : 0; *wrapUnclear = 0; }
}


/* VisualMaterial texture animation (VERIFIED from the lifted guest per-frame material update f_8c01215c = FUN_8c01215c, tools/sh4recomp/gen_fix/recomp_00.c,
 * and by R2_WATCH on Rodeo_40: the late writes to VM+0x4C come from this function, with "VM+4 |= 0x1000" = texture-dirty):
 *   VM+0x138 head node, VM+0x13C current node, VM+0x140 frame count (0 = not animated), VM+0x144 float time accumulator, VM+0x134 frame stamp of the last update,
 *   VM+0x148 byte (must be 0 for the animation to run). Node (>= 0x10 bytes): +0 texture struct VA, +4 float duration, +8 next node (0 = end, the update then
 *   wraps to the head). Every update does VM+0x4C = current.node[0] (guest: ST32(vm+0x4C, LD32(LD32(vm+0x13C)))).
 * The DAT holds the load-time state (current == head, VM+0x4C == head texture, accumulator 0). A guest RAM dump taken after frames have run holds the live frame:
 * VM+0x4C is then another list entry (Rodeo_40: 14-node ping-pong list, 70 ms per frame, Boat01 likewise). That live frame depends on elapsed guest time, which the
 * loader cannot know, so the loader reports the HEAD (load-time) frame as texVa for a VM whose VM+0x4C equals its current node's texture, and exposes the list.
 * Returns the texture VA to use; head and count are 0 for a VM without a valid list. *norm = 1 iff the live frame was replaced by the head frame. */
static uint32_t vm_texture(const CpaImage *im, uint32_t vm, uint32_t *head, uint32_t *count, int *norm, int *bad) {
    uint32_t t4c = 0, cnt = 0, hd = 0, cur = 0, n, tex0 = 0, curTex = 0; uint8_t b148 = 0;
    *head = *count = 0; *norm = 0; *bad = 0;
    if (!cpa_rd32(im, vm + 0x4C, &t4c)) return 0;
    if (!cpa_rd32(im, vm + 0x140, &cnt) || cnt == 0) return t4c;
    if (!cpa_rd8(im, vm + 0x148, &b148) || b148 != 0) return t4c;
    if (cnt > 256 || !cpa_rd32(im, vm + 0x138, &hd) || !cpa_rd32(im, vm + 0x13C, &cur) || !cpa_is_ptr(im, hd) || !cpa_is_ptr(im, cur)) { *bad = 1; return t4c; }
    n = hd; int curIn = 0;
    for (uint32_t i = 0; i < cnt; i++) {
        uint32_t nx = 0;
        if (!cpa_is_ptr(im, n) || !cpa_rd32(im, n + 8, &nx)) { *bad = 1; return t4c; }
        if (n == cur) { curIn = 1; cpa_rd32(im, n, &curTex); }
        if (i == 0) cpa_rd32(im, n, &tex0);
        if (i + 1 < cnt ? nx == 0 : nx != 0) { *bad = 1; return t4c; }   /* list must hold exactly cnt nodes */
        n = nx;
    }
    if (!curIn) { *bad = 1; return t4c; }
    *head = hd; *count = cnt;
    if (t4c == curTex && t4c != tex0) { *norm = 1; return tex0; }
    return t4c;
}
static void vm_anim_stats(Ctx *c, uint32_t vm, uint32_t head, int norm, int bad) {
    if (!head && !bad) return;
    for (uint32_t i = 0; i < c->nVmSeen; i++) if (c->vmSeen[i] == vm) return;
    if (c->nVmSeen == c->capVmSeen) { c->capVmSeen = c->capVmSeen ? c->capVmSeen * 2 : 64; c->vmSeen = (uint32_t *)realloc(c->vmSeen, 4u * c->capVmSeen); if (!c->vmSeen) { c->capVmSeen = c->nVmSeen = 0; return; } }
    c->vmSeen[c->nVmSeen++] = vm;
    if (bad) c->s->nAnimMatBad++; else { c->s->nAnimMat++; c->s->nAnimLiveFrame += (uint32_t)norm; }
}
int cpa_tex_anim_node(const CpaImage *im, uint32_t head, uint32_t k, uint32_t *tex, float *dur) {
    uint32_t n = head;
    for (uint32_t i = 0; i < k; i++) { if (!cpa_is_ptr(im, n) || !cpa_rd32(im, n + 8, &n) || !n) return 0; }
    if (!cpa_is_ptr(im, n) || !cpa_rd32(im, n, tex)) return 0;
    if (dur) *dur = cpa_f32(im, n + 4);
    return 1;
}

/* GeometricObject (GeoObj.c) -- VERIFIED: +00 float3* verts, +10 u16* elementTypes, +14 ptr* elements, +2C s16 nVerts, s16 nElements.
 * Element type 1 (indexed triangles; 280/280 static elements in LEARN_10, 235 of 288 actor elements in BAST_10): [0] GameMaterial*,
 * [1] u16 nTri|u16 nUV<<16, [2] u16 vtxIdx[3n], [3] u16 uvIdx[3n], [4] float3 faceNormal[n], [5] float2 uv[nUV].
 * Element type 3 (sprite; 53 in BAST_10, 32 in JAIL_10, 45 in LEARN_10, every one in an actor geometry with exactly 1 vertex and 1 element; decoded into
 * CpaScene.sprites, layout in cpa_scene.h): [0] VisualMaterial*, [1] float sizeX, [2] float sizeY. Element types other than 1 and 3 are skipped (never
 * seen in the 7 levels checked; counted in nElemSkipped). A type-3 element in any other shape than nVerts == 1 is counted in nSpriteBad and not exported. */
static int emit_geo(Ctx *c, uint32_t geo, const Mat *wm, int isActor, uint32_t soVa) {
    const CpaImage *im = c->im;
    uint32_t pv, ptypes, pelems, cnt;
    if (!cpa_rd32(im, geo + 0x00, &pv) || !cpa_rd32(im, geo + 0x10, &ptypes) || !cpa_rd32(im, geo + 0x14, &pelems) ||
        !cpa_rd32(im, geo + 0x2C, &cnt)) return 0;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !cpa_is_ptr(im, pv) || !cpa_is_ptr(im, ptypes) || !cpa_is_ptr(im, pelems)) return 0;
    if (!cpa_ptr(im, pv, (size_t)nv * 12)) return 0;

    float (*vw)[3] = (float (*)[3])malloc(sizeof(float[3]) * nv);
    if (!vw) return 0;
    for (uint32_t i = 0; i < nv; i++) {
        float v[3];
        for (int k = 0; k < 3; k++) if (!cpa_rdf(im, pv + i * 12 + k * 4, &v[k])) { free(vw); return 0; }
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
        if (!cpa_rd16(im, ptypes + 2 * e, &etype) || !cpa_rd32(im, pelems + 4 * e, &el) || !cpa_is_ptr(im, el)) { c->s->nElemSkipped++; continue; }
        if (etype == 3) {
            uint32_t w3[5], vm3 = 0, tex3 = 0; int ok3 = 1;
            for (int i = 0; i < 5; i++) ok3 &= cpa_rd32(im, el + 4u * i, &w3[i]);
            float sx, sy; memcpy(&sx, &w3[1], 4); memcpy(&sy, &w3[2], 4);
            if (!ok3 || nv != 1 || ne != 1 || !cpa_is_ptr(im, w3[0]) || !isfinite(sx) || !isfinite(sy)) { c->s->nSpriteBad++; continue; }
            if (c->curChan >= 0) { c->s->nSpriteRig++; continue; }
            vm3 = w3[0];
            { uint32_t ah, ac; int nm, bd; tex3 = vm_texture(im, vm3, &ah, &ac, &nm, &bd); vm_anim_stats(c, vm3, ah, nm, bd); }
            if (c->nSpr == c->capSpr) { c->capSpr = c->capSpr ? c->capSpr * 2 : 64; c->spr = (CpaSprite *)realloc(c->spr, sizeof(CpaSprite) * c->capSpr); if (!c->spr) { c->capSpr = c->nSpr = 0; free(vw); return 0; } }
            CpaSprite *sp = &c->spr[c->nSpr++]; memset(sp, 0, sizeof *sp);
            memcpy(sp->pos, vw[0], sizeof sp->pos); sp->sizeX = sx; sp->sizeY = sy; sp->texVa = tex3; sp->isActor = (uint8_t)isActor; sp->geoVa = geo; sp->soVa = soVa;
            for (int k = 0; k < 3; k++) cpa_rdf(im, pv + 4u * k, &sp->local[k]);
            { uint8_t wb; tex_decode(im, tex3, &sp->texFlags, &wb, &sp->texFlagsValid, &sp->tileU, &sp->tileV, &sp->wrapUnclear, &sp->alphaClass); }
            continue;
        }
        if (etype != 1) { c->s->nElemSkipped++; continue; }
        int ok = 1;
        for (int i = 0; i < 8; i++) ok &= cpa_rd32(im, el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !cpa_is_ptr16(im, w[2]) || !cpa_is_ptr16(im, w[3]) || !cpa_is_ptr(im, w[5]) ||
            !cpa_ptr(im, w[2], (size_t)ntri * 6) || !cpa_ptr(im, w[3], (size_t)ntri * 6) || !cpa_ptr(im, w[5], (size_t)nuv * 8)) {
            c->s->nElemSkipped++; continue;
        }

        uint32_t vm = 0, tex = 0, ahead = 0, acount = 0;
        if (cpa_is_ptr(im, w[0]) && cpa_rd32(im, w[0], &vm) && cpa_is_ptr(im, vm)) {
            int nm, bd;
            tex = vm_texture(im, vm, &ahead, &acount, &nm, &bd);
            vm_anim_stats(c, vm, ahead, nm, bd);
        }

        Elem E; memset(&E, 0, sizeof E);
        E.tex = tex; E.actor = isActor; E.chan = c->curChan; E.animHead = ahead; E.animCount = acount;
        if (vm) cpa_rd8(im, vm + 0x149, &E.overlay);   /* VisualMaterial+0x149: second-pass selector, see cpa_scene.h */
        E.pos = (float *)malloc(sizeof(float) * 9 * ntri);
        E.uv  = (float *)malloc(sizeof(float) * 6 * ntri);
        if (!E.pos || !E.uv) { free(E.pos); free(E.uv); free(vw); return 0; }
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3];
            int fo = 1;
            for (int k = 0; k < 3; k++) fo &= cpa_rd16(im, w[2] + t * 6 + k * 2, &vi[k]) && cpa_rd16(im, w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) continue;
            for (int k = 0; k < 3; k++) {
                float u = 0, v = 0;
                cpa_rdf(im, w[5] + ui[k] * 8u, &u); cpa_rdf(im, w[5] + ui[k] * 8u + 4, &v);
                memcpy(E.pos + (E.nTri * 3 + k) * 3, vw[vi[k]], sizeof(float) * 3);
                E.uv[(E.nTri * 3 + k) * 2 + 0] = u;
                E.uv[(E.nTri * 3 + k) * 2 + 1] = v;
            }
            E.nTri++;
        }
        if (c->nEl == c->capEl) {
            c->capEl = c->capEl ? c->capEl * 2 : 512;
            c->el = (Elem *)realloc(c->el, sizeof(Elem) * c->capEl);
        }
        c->el[c->nEl++] = E;
    }
    free(vw);
    return 1;
}

/* ---------- Rayman rig (notes_pose.md) ---------- */
static void rig_build(Ctx *c, uint32_t actorVa, uint32_t soVa, const Mat *soWorld) {
    CpaRig *R = &c->s->rig;
    const CpaImage *im = c->im;
    const CpaRegion *L = &im->reg[0];
    uint32_t d3, tbl, arr, hw;
    /* Actor -> 3dData (+0x00 of actor data) -> ObjectsTable ptr (+0x0C) -> {array*, ?, u16 count}. VERIFIED on data (notes_geometry.md sec 2). */
    if (L->n < 0x28 || !cpa_rd32(im, actorVa, &d3) || !cpa_is_ptr(im, d3) || !cpa_rd32(im, d3 + 0xC, &tbl) || !cpa_is_ptr(im, tbl) ||
        !cpa_rd32(im, tbl, &arr) || !cpa_is_ptr(im, arr) || !cpa_rd32(im, tbl + 8, &hw)) return;
    for (int i = 0; i < 10; i++)   /* H0..H9 = level DAT header words 0..9 (VERIFIED, notes_geometry.md sec 3) */
        R->H[i] = le32(L->p + 4 * i);
    uint32_t ntbl = hw & 0xFFFF;
    R->soVa = soVa; R->anim = 0;
    /* Animation record: 0x38 bytes at H0 + 0x38*anim (VERIFIED FUN_8c0810a0). u16 fields: [0] nKeys (meaning INFERRED), +0xC nChannels,
     * +0xE nFrames, +0x18 first frame number, +0x2E base into H5, +0x30 base into H6 (notes_geometry.md H0 row). */
    uint32_t ar = R->H[0] + 0x38u * (uint32_t)R->anim;
    R->nKeys = cpa_u16(im, ar); R->nCh = cpa_u16(im, ar + 0xC); R->nFrames = cpa_u16(im, ar + 0xE); R->firstFrame = cpa_u16(im, ar + 0x18);
    if (!R->nCh || R->nCh > CPA_RIG_MAXCH || !R->nFrames) return;

    /* frame rate: State list at 3dData+0x14 (0x30 B each, +0x10 -> State -> AnimRef whose u16@0x18 = anim index, u8@2 = fps).
     * INFERRED (linkage verified on samples only; fps semantics INFERRED). */
    R->fps = 0.f; R->fpsFromData = 0;
    uint32_t lst = cpa_u32(im, d3 + 0x14);
    if (cpa_is_ptr(im, lst)) for (uint32_t i = 0; i < 512; i++) {
        uint32_t st = cpa_u32(im, lst + 0x30 * i + 0x10), ref;
        if (!cpa_is_ptr(im, st) || !cpa_rd32(im, st, &ref) || !cpa_is_ptr(im, ref) || !cpa_ptr(im, ref, 0x1C)) continue;
        if (cpa_u16(im, ref + 0x18) != (uint16_t)R->anim) continue;
        uint8_t sp = 0; cpa_rd8(im, ref + 2, &sp);
        R->animRefFrames = cpa_u16(im, ref);
        if (sp) { R->fps = (float)sp; R->fpsFromData = 1; break; }
    }

    /* per-channel object at the first frame: H4idx = H7[streamBase + chan.+6]; object = H4[idx].+2 (VERIFIED FUN_8c082160) */
    uint32_t streamBase = cpa_u16(im, R->H[5] + 10u * cpa_u16(im, ar + 0x2E) + 8);
    uint32_t b6 = cpa_u16(im, ar + 0x30);
    c->curChan = -1;
    for (uint32_t ch = 0; ch < R->nCh; ch++) {
        uint32_t r6 = R->H[6] + 0x10u * (b6 + ch);
        uint16_t h4i = cpa_u16(im, R->H[7] + 2u * (streamBase + cpa_u16(im, r6 + 6)));
        R->obj[ch] = (h4i == 0xFFFF) ? -1 : (int)cpa_s16(im, R->H[4] + 6u * h4i + 2);
        R->geo[ch] = 0;
        if (R->obj[ch] < 0 || (uint32_t)R->obj[ch] >= ntbl) continue;
        /* ObjectsTable entry (0x10 B): +4 PO; PO +0 VisualSet; VisualSet +4 GeometricObject (INFERRED PO shape, data-verified on 358+133) */
        uint32_t po = cpa_u32(im, arr + 0x10u * (uint32_t)R->obj[ch] + 4), vs, geo;
        if (!cpa_is_ptr(im, po) || !cpa_rd32(im, po, &vs) || !cpa_is_ptr(im, vs) || !cpa_rd32(im, vs + 4, &geo) || !cpa_is_ptr(im, geo)) continue;
        R->geo[ch] = geo;
        Mat id; mat_ident(&id);
        c->curChan = (int)ch;
        if (emit_geo(c, geo, &id, 1, soVa)) R->geoCount++;
        c->curChan = -1;
    }

    /* placement (INFERRED): SO global matrix (identity in data) unless header word 25 points at a block {actor, SO, matrix@+0xC} that checks out */
    R->placement = 0;
    Mat w = *soWorld;
    {
        uint32_t b = (L->n >= 0x68) ? le32(L->p + 25 * 4) : 0;
        Mat bm;
        if (cpa_is_ptr(im, b) && cpa_u32(im, b) == actorVa && cpa_u32(im, b + 4) == soVa && mat_read(im, b + 0xC, &bm)) { w = bm; R->placement = 1; }
    }
    memcpy(R->world, w.m, sizeof R->world);
    R->valid = R->geoCount > 0;
}

/* ---------- SuperObject walk ----------
 * SuperObject (0x48 B) VERIFIED: +00 type, +04 data, +08 firstChild, +0C lastChild, +10 childCount, +14 next, +18 prev,
 * +1C parent, +20 localMatrix*, +24 globalMatrix*. 272/272 nodes: global == local * parentGlobal. */
static void walk(Ctx *c, uint32_t va, uint32_t parent, int depth, const Mat *pg) {
    CpaScene *s = c->s;
    const CpaImage *im = c->im;
    const CpaRegion *m = cpa_region_of(im, va, 0x48);
    if (!m || depth > 32 || c->nodes > 100000) { s->nUnreadable++; return; }
    int ri = (int)(m - im->reg);
    uint32_t slot = (va - m->base) >> 2;
    if (c->seen[ri][slot >> 3] & (1u << (slot & 7))) { s->nCycle++; return; }
    c->seen[ri][slot >> 3] |= (uint8_t)(1u << (slot & 7));
    c->nodes++;

    uint32_t w[18];
    for (int i = 0; i < 18; i++) if (!cpa_rd32(im, va + 4u * i, &w[i])) { s->nUnreadable++; return; }
    s->nSO++;
    switch (w[0]) {
        case CPA_SO_WORLD: s->nSOWorld++; break; case CPA_SO_ACTOR: s->nSOActor++; break;
        case CPA_SO_SECTOR: s->nSOSector++; break; case CPA_SO_IPO: s->nSOIpo++; break; default: s->nSOOther++;
    }
    if (w[7] != parent) s->nParentMismatch++;

    Mat loc, glob, chain, world;
    int hl = cpa_is_ptr(im, w[8]) && mat_read(im, w[8], &loc);
    int hg = cpa_is_ptr(im, w[9]) && mat_read(im, w[9], &glob);
    if (hl) mat_mul(&loc, pg, &chain); else chain = *pg;
    world = hg ? glob : chain;

    if (w[0] == CPA_SO_ACTOR) {
        uint32_t d3 = 0, tbl = 0, arr = 0, hw = 0;
        s->nActors++;
        if (va == s->raymanSoVa) { if (cpa_is_ptr(im, w[1])) rig_build(c, w[1], va, &world); }
        else if (!cpa_is_ptr(im, w[1]) || !cpa_rd32(im, w[1], &d3) || !cpa_is_ptr(im, d3) || !cpa_rd32(im, d3 + 0xC, &tbl) ||
                 !cpa_is_ptr(im, tbl) || !cpa_rd32(im, tbl, &arr) || !cpa_is_ptr(im, arr) || !cpa_rd32(im, tbl + 8, &hw)) s->nActorNoTable++;
        else {
            uint32_t cnt = hw & 0xFFFF;
            if (cnt > 4096) cnt = 0;
            for (uint32_t i = 0; i < cnt; i++) {
                uint32_t po, vs, geo;
                s->nActorTblEntries++;
                if (!cpa_rd32(im, arr + 0x10 * i + 4, &po) || !cpa_is_ptr(im, po)) { s->nActorNullPo++; continue; }
                if (!cpa_rd32(im, po, &vs) || !cpa_is_ptr(im, vs) || !cpa_rd32(im, vs + 4, &geo) || !cpa_is_ptr(im, geo)) { s->nActorBadChain++; continue; }
                int dup = 0;
                for (uint32_t k = 0; k < c->nGeoDone; k++) if (c->geoDone[k] == geo) { dup = 1; break; }
                if (dup) { s->nActorDupGeo++; continue; }
                if (c->nGeoDone == c->capGeoDone) {
                    c->capGeoDone = c->capGeoDone ? c->capGeoDone * 2 : 256;
                    c->geoDone = (uint32_t *)realloc(c->geoDone, sizeof(uint32_t) * c->capGeoDone);
                }
                c->geoDone[c->nGeoDone++] = geo;
                if (emit_geo(c, geo, &world, 1, va)) s->nActorGeos++;   /* PLACEHOLDER pose: whole actor at SO global matrix, no per-part pose */
            }
        }
    }

    if (w[0] == CPA_SO_IPO) {   /* IPO -> PO (IPO+0) -> VisualSet -> GeometricObject (VisualSet+4); 133/133 VERIFIED */
        uint32_t po, vs, geo;
        s->nIpo++;
        if (cpa_is_ptr(im, w[1]) && cpa_rd32(im, w[1], &po) && cpa_is_ptr(im, po) && cpa_rd32(im, po, &vs) && cpa_is_ptr(im, vs) &&
            cpa_rd32(im, vs + 4, &geo) && cpa_is_ptr(im, geo) && emit_geo(c, geo, &world, 0, va)) { s->nIpoMesh++; s->nStaticMeshes++; }
    }

    uint32_t ch = w[2], n = 0;
    while (ch && n < 100000) {
        uint32_t nxt;
        if (!cpa_rd32(im, ch + 0x14, &nxt)) { s->nUnreadable++; break; }
        walk(c, ch, va, depth + 1, &world);
        n++;
        ch = nxt;
    }
    if (n != w[4]) s->nCountMismatch++;
}

int cpa_scene_load(CpaScene *out, const CpaImage *img, uint32_t rootVa) {
    memset(out, 0, sizeof *out);
    if (!img || img->nReg < 1) return 0;
    out->img = *img;
    for (int k = 0; k < 3; k++) { out->bmin[k] = 1e30f; out->bmax[k] = -1e30f; }

    uint32_t type, par;
    if (!cpa_rd32(img, rootVa, &type) || type != CPA_SO_WORLD || !cpa_rd32(img, rootVa + 0x1C, &par) || par != 0) return 0;

    /* Rayman SO: level header word 22 (== word 30). INFERRED identification (notes_pose.md): both words hold 0x8CBB07D0 in LEARN_10
     * and that node is a type-2 SO whose 3dData chain resolves to the 9-channel Wait animation. */
    {
        const CpaRegion *L = &img->reg[0];
        uint32_t w22 = 0, w30 = 0, t = 0;
        if (L->n >= 0x7C) { w22 = le32(L->p + 22 * 4); w30 = le32(L->p + 30 * 4); }
        if (w22 && w22 == w30 && cpa_rd32(img, w22, &t) && t == CPA_SO_ACTOR) out->raymanSoVa = w22;
    }

    Ctx c; memset(&c, 0, sizeof c);
    c.s = out; c.im = &out->img; c.curChan = -1;
    int okAlloc = 1;
    for (int i = 0; i < img->nReg; i++) { c.seen[i] = (uint8_t *)calloc(img->reg[i].n / 32 + 1, 1); okAlloc &= c.seen[i] != NULL; }
    if (!okAlloc) { for (int i = 0; i < img->nReg; i++) free(c.seen[i]); return 0; }
    Mat id; mat_ident(&id);
    walk(&c, rootVa, 0, 0, &id);
    for (int i = 0; i < img->nReg; i++) free(c.seen[i]);
    free(c.geoDone); free(c.vmSeen);

    /* split Rayman's local-space parts into the rig (re-posed per frame, not batched) */
    {
        CpaRig *R = &out->rig;
        uint32_t nr = 0, k = 0;
        for (uint32_t i = 0; i < c.nEl; i++) if (c.el[i].chan >= 0) nr++;
        if (nr) R->part = (CpaRigPart *)calloc(nr, sizeof(CpaRigPart));
        for (uint32_t i = 0; i < c.nEl; i++) {
            Elem *e = &c.el[i];
            if (e->chan >= 0 && R->part) {
                CpaRigPart *r = &R->part[R->nPart++];
                r->texVa = e->tex; r->nTri = e->nTri; r->chan = e->chan; r->lpos = e->pos; r->uv = e->uv;
                tex_decode(img, e->tex, &r->texFlags, &r->texWrapByte, &r->texFlagsValid, &r->tileU, &r->tileV, &r->wrapUnclear, &r->alphaClass);
                r->wpos = (float *)malloc(sizeof(float) * 9 * (e->nTri ? e->nTri : 1));
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
    out->pos = (float *)malloc(sizeof(float) * 9 * (total ? total : 1));
    out->uv  = (float *)malloc(sizeof(float) * 6 * (total ? total : 1));
    out->items = (CpaDrawItem *)calloc(c.nEl ? c.nEl : 1, sizeof(CpaDrawItem));
    uint8_t *done = (uint8_t *)calloc(c.nEl ? c.nEl : 1, 1);
    uint32_t nv = 0;
    /* merge elements with equal (texture, isActor, overlayMode) into one draw item (order = first occurrence) */
    for (uint32_t i = 0; i < c.nEl && out->pos && out->uv && out->items && done; i++) {
        if (done[i]) continue;
        CpaDrawItem *b = &out->items[out->nItems++];
        b->texVa = c.el[i].tex; b->firstVert = nv; b->isActor = (uint8_t)c.el[i].actor; b->overlayMode = c.el[i].overlay; b->texAnimHead = c.el[i].animHead; b->texAnimCount = c.el[i].animCount;
        tex_decode(img, b->texVa, &b->texFlags, &b->texWrapByte, &b->texFlagsValid, &b->tileU, &b->tileV, &b->wrapUnclear, &b->alphaClass);
        for (uint32_t j = i; j < c.nEl; j++) {
            if (done[j] || c.el[j].tex != b->texVa || c.el[j].animHead != c.el[i].animHead || c.el[j].actor != b->isActor || c.el[j].overlay != b->overlayMode) continue;
            memcpy(out->pos + nv * 3, c.el[j].pos, sizeof(float) * 9 * c.el[j].nTri);
            memcpy(out->uv + nv * 2, c.el[j].uv, sizeof(float) * 6 * c.el[j].nTri);
            nv += c.el[j].nTri * 3;
            done[j] = 1;
        }
        b->vertCount = nv - b->firstVert;
    }
    out->nVerts = nv;
    out->sprites = c.spr; out->nSprites = c.nSpr;
    for (uint32_t i = 0; i < c.nSpr; i++) out->nSpriteActor += c.spr[i].isActor;
    c.spr = NULL;

    /* distinct texture statistics over draw items + rig parts */
    {
        uint32_t cap = out->nItems + out->rig.nPart, n = 0;
        uint32_t *seen = (uint32_t *)malloc(sizeof(uint32_t) * (cap + 1));
        for (uint32_t i = 0; i < cap && seen; i++) {
            uint32_t tv; uint8_t valid, wu; int8_t al;
            if (i < out->nItems) { tv = out->items[i].texVa; valid = out->items[i].texFlagsValid; wu = out->items[i].wrapUnclear; al = out->items[i].alphaClass; }
            else { const CpaRigPart *r = &out->rig.part[i - out->nItems]; tv = r->texVa; valid = r->texFlagsValid; wu = r->wrapUnclear; al = r->alphaClass; }
            if (!tv) continue;
            int dup = 0;
            for (uint32_t k = 0; k < n; k++) if (seen[k] == tv) { dup = 1; break; }
            if (dup) continue;
            seen[n++] = tv; out->nTexDistinct++;
            if (!valid || al == CPA_ALPHA_UNKNOWN) out->nTexFlagUnclear++;
            if (wu) out->nTexWrapUnclear++;
        }
        free(seen);
    }
    for (uint32_t i = 0; i < c.nEl; i++) { free(c.el[i].pos); free(c.el[i].uv); }
    free(c.el); free(done);
    return out->nTris > 0 || out->rig.nTris > 0;
}

int cpa_scene_load_dats(CpaScene *out, CpaImage *img, const uint8_t *fix, size_t fixN, const uint8_t *lvl, size_t lvlN) {
    cpa_image_init(img);
    memset(out, 0, sizeof *out);
    if (!lvl || lvlN < 0x98 || !cpa_image_add_dat(img, CPA_DAT_LEVEL, lvl, lvlN)) return 0;
    if (fix && !cpa_image_add_dat(img, CPA_DAT_FIX, fix, fixN)) return 0;
    return cpa_scene_load(out, img, le32(lvl + 13 * 4));   /* header word 13 = World SO (VERIFIED) */
}

void cpa_scene_free(CpaScene *s) {
    for (uint32_t i = 0; i < s->rig.nPart; i++) { free(s->rig.part[i].lpos); free(s->rig.part[i].uv); free(s->rig.part[i].wpos); }
    free(s->rig.part);
    free(s->pos); free(s->uv); free(s->items); free(s->sprites);
    memset(s, 0, sizeof *s);
}

/* ---------- Rayman pose (port of tools/dc_actor_pose.c; notes_pose.md) ---------- */
/* Quaternion table H2: 4 x s16 / 32767 (VERIFIED, FUN_8c081200 literal 3.0518509e-05). */
static void quat_get(const CpaImage *im, uint32_t H2, uint16_t idx, float q[4]) {
    for (int i = 0; i < 4; i++) q[i] = (float)cpa_s16(im, H2 + 8u * idx + 2u * i) * (1.0f / 32767.0f);
}
/* Row-major, as stored by FUN_8c081660 (VERIFIED). */
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
static void slerp(const float a[4], const float b[4], float t, float o[4]) {   /* INFERRED interpolation (real engine has ease terms, UNRESOLVED) */
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

void cpa_rig_pose(CpaScene *s, float ft) {
    CpaRig *R = &s->rig;
    const CpaImage *im = &s->img;
    if (!R->valid) return;
    const uint32_t *H = R->H;
    uint32_t ar = H[0] + 0x38u * (uint32_t)R->anim, b6 = cpa_u16(im, ar + 0x30);
    if (ft < (float)R->firstFrame) ft = (float)R->firstFrame;
    if (ft > (float)(R->firstFrame + R->nFrames - 1)) ft = (float)(R->firstFrame + R->nFrames - 1);
    uint32_t f = (uint32_t)ft - R->firstFrame;
    Mat W; memcpy(W.m, R->world, sizeof W.m);
    Mat cm[CPA_RIG_MAXCH]; uint8_t have[CPA_RIG_MAXCH] = {0};
    for (uint32_t ch = 0; ch < R->nCh; ch++) {
        /* channel row (H6, 0x10 B): +8 u32 base into H8; H8[base+frame] = key index; key = H9 + 0x24*idx (VERIFIED) */
        uint32_t r6 = H[6] + 0x10u * (b6 + ch), hbase = cpa_u32(im, r6 + 8);
        uint32_t kidx = cpa_u32(im, H[8] + 4u * (hbase + f)), key = H[9] + 0x24u * kidx, nextkey = 0;
        float t = 0, kfr = (float)cpa_u16(im, key + 0x10);
        uint16_t flags = cpa_u16(im, key + 0x12);
        if (!(flags & 0x80)) {   /* next key = key + 0x24 unless flag 0x80; t = (frame - key.frame)/(next.frame - key.frame) VERIFIED FUN_8c0823c0 */
            uint32_t nk = key + 0x24; float nf = (float)cpa_u16(im, nk + 0x10);
            if (nf > kfr && ft > kfr) { nextkey = nk; t = (ft - kfr) / (nf - kfr); if (t > 1.f) t = 1.f; }
        }
        float q[4] = { 0, 0, 0, 1 }, Rm[9], T[3];
        if (!(flags & 0x10)) {
            quat_get(im, H[2], cpa_u16(im, key + 0x14), q);
            if (t > 0 && nextkey && !(cpa_u16(im, nextkey + 0x12) & 0x10)) { float q2[4]; quat_get(im, H[2], cpa_u16(im, nextkey + 0x14), q2); slerp(q, q2, t, q); }
        }
        quat_to_m3(q, Rm);
        /* translation = H1[vecIdx] * key.len (key+0x1A vec index, key+0xC float). Absolute in actor space, not accumulated: INFERRED
         * from physical plausibility (feet z -0.003..0.33 at Wait f0). */
        uint16_t vt = cpa_u16(im, key + 0x1A); float len = cpa_f32(im, key + 0xC);
        for (int i = 0; i < 3; i++) T[i] = cpa_f32(im, H[1] + 12u * vt + 4u * i) * len;
        if (t > 0 && nextkey) for (int i = 0; i < 3; i++) {
            float b = cpa_f32(im, H[1] + 12u * cpa_u16(im, nextkey + 0x1A) + 4u * i) * cpa_f32(im, nextkey + 0xC);
            T[i] += (b - T[i]) * t;
        }
        float S[3]; uint16_t vs = cpa_u16(im, key + 0x18);
        for (int i = 0; i < 3; i++) S[i] = cpa_f32(im, H[1] + 12u * vs + 4u * i);
        if (fabsf(S[0] - 1) > 1e-4f || fabsf(S[1] - 1) > 1e-4f || fabsf(S[2] - 1) > 1e-4f) {   /* INFERRED, never hit for Wait */
            float qb[4], Rb[9], RbT[9], D[9] = { S[0],0,0, 0,S[1],0, 0,0,S[2] }, t1[9], t2[9];
            quat_get(im, H[2], cpa_u16(im, key + 0x16), qb); quat_to_m3(qb, Rb);
            for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) RbT[i * 3 + j] = Rb[j * 3 + i];
            m3_mul(Rb, D, t1); m3_mul(t1, RbT, t2); m3_mul(t2, Rm, Rm);
        }
        Mat pm; mat_ident(&pm);
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) pm.m[i * 4 + j] = Rm[i * 3 + j];
        for (int j = 0; j < 3; j++) pm.m[12 + j] = T[j];
        mat_mul(&pm, &W, &cm[ch]); have[ch] = 1;
    }
    for (int k = 0; k < 3; k++) { R->pmin[k] = 1e30f; R->pmax[k] = -1e30f; }
    for (uint32_t i = 0; i < R->nPart; i++) {
        CpaRigPart *r = &R->part[i];
        if (!r->wpos || r->chan < 0 || r->chan >= CPA_RIG_MAXCH || !have[r->chan]) continue;
        for (uint32_t v = 0; v < r->nTri * 3; v++) {
            xform(&cm[r->chan], r->lpos + v * 3, r->wpos + v * 3);
            for (int k = 0; k < 3; k++) { float x = r->wpos[v * 3 + k]; if (x < R->pmin[k]) R->pmin[k] = x; if (x > R->pmax[k]) R->pmax[k] = x; }
        }
    }
}


/* ---------- .TEX post-load state (see cpa_scene.h) ---------- */
void cpa_tex_postload(uint32_t raw, uint32_t *flags, uint8_t *wrap) {
    uint32_t w = 0, fl = 0, k;
    /* FUN_8c03a5dc: U pair then V pair; a full V pair replaces the whole byte (guest: R5 = 1) */
    if ((raw & 0xC0000000u) == 0xC0000000u) w = 2; else if (raw & 0x40000000u) w = 0x20; else if (raw & 0x80000000u) w = 8;
    if ((raw & 0x30000000u) == 0x30000000u) w = 1; else if (raw & 0x10000000u) w |= 0x10; else if (raw & 0x20000000u) w |= 4;
    /* FUN_8c03a680 */
    if ((raw & 0x08000000u) == 0x08000000u) { raw &= 0xF700FFFFu; fl |= 0x40; }
    k = raw & 0x0F000000u;
    if (k == 0x01000000u || k == 0x02000000u) fl |= 0x12;
    else if (k == 0x03000000u || k == 0x04000000u || k == 0x05000000u) fl |= 0x08;
    else if (k == 0x06000000u) fl |= 0x20;
    else if (k == 0x07000000u) fl |= 0x08 | 0x200;
    *flags = fl; *wrap = (uint8_t)w;
}

/* One chunk. Returns malloc'ed block (*outN bytes) or NULL. */
static uint8_t *tex_unpack(const uint8_t *p, size_t n, size_t *pos, size_t *outN) {
    size_t cap = 0, len = 0, st = *pos, end;
    uint8_t *o = NULL;
    if (st + 4 > n) return NULL;
    end = st + le32(p + st);
    if (end > n || end < st + 4) return NULL;
    size_t q = st + 4;
    while (q < end) {
        uint8_t c = p[q++]; size_t cnt, dist = 0; int copy = 0;
        if (c & 1) {
            uint32_t v;
            if (q - 1 + 4 > end) { free(o); return NULL; }
            v = le32(p + q - 1); q += 3;
            cnt = v >> 24; dist = (v & 0xFFFFFEu) >> 1; copy = 1;
            if (!dist || dist > len) { free(o); return NULL; }
        } else if (c == 0) {
            cnt = 4;
        } else cnt = c >> 2;
        if (!copy && q + cnt > end) { free(o); return NULL; }
        if (len + cnt > cap) {
            size_t nc = cap ? cap * 2 : 4096;
            while (nc < len + cnt) nc *= 2;
            if (nc > ((size_t)16 << 20)) { free(o); return NULL; }
            uint8_t *t = (uint8_t *)realloc(o, nc); if (!t) { free(o); return NULL; }
            o = t; cap = nc;
        }
        if (copy) for (size_t i = 0; i < cnt; i++) { o[len] = o[len - dist]; len++; }
        else { memcpy(o + len, p + q, cnt); len += cnt; q += cnt; }
    }
    if (q != end) { free(o); return NULL; }
    *pos = end; *outN = len;
    return o;
}

int cpa_tex_table(const CpaImage *img, const uint8_t *texFile, size_t texN, CpaTexInfo **out, uint32_t *count) {
    *out = NULL; *count = 0;
    if (!img->nReg || img->reg[0].n < 0x94 || texN < 8 || memcmp(texFile, "LZSS", 4)) return 0;
    uint32_t n = le32(img->reg[0].p + 0x8C), tbl = le32(img->reg[0].p + 0x90);
    if (!n || n > 4096 || !cpa_ptr(img, tbl, (size_t)n * 4)) return 0;
    CpaTexInfo *t = (CpaTexInfo *)calloc(n, sizeof *t);
    if (!t) return 0;
    size_t pos = 4; int ok = 1;
    for (uint32_t i = 0; i < n && ok; i++) {
        size_t bn = 0; uint8_t *b = tex_unpack(texFile, texN, &pos, &bn);
        if (!b) { ok = 0; break; }
        uint32_t k = (bn >= 4 && !memcmp(b, "GBIX", 4)) ? 4 : 0;
        if (bn < (size_t)(k + 4) * 4) { free(b); ok = 0; break; }
        CpaTexInfo *e = &t[i];
        e->structVa = cpa_u32(img, tbl + 4 * i); e->hasGbix = (uint8_t)(k != 0);
        e->raw = le32(b + (k + 2) * 4);
        { uint32_t wh = le32(b + (k + 3) * 4); e->width = (uint16_t)(wh & 0xFFFF); e->height = (uint16_t)(wh >> 16); }
        e->pvrFmt = (uint16_t)(e->raw & 0xFFFF);
        cpa_tex_postload(e->raw, &e->flags, &e->wrap);
        free(b);
        if (!cpa_is_ptr(img, e->structVa)) ok = 0;
    }
    if (ok && pos != texN) ok = 0;   /* exactly n chunks */
    *out = t; *count = n;
    return ok;
}

static const CpaTexInfo *tex_find(const CpaTexInfo *t, uint32_t n, uint32_t va) {
    for (uint32_t i = 0; i < n; i++) if (t[i].structVa == va) return &t[i];
    return NULL;
}
static void tex_apply_one(const CpaTexInfo *e, uint32_t *flags, uint8_t *wrapB, uint8_t *valid, uint8_t *tileU, uint8_t *tileV, uint8_t *wrapUnclear, int8_t *alpha) {
    uint32_t f = e->flags;
    *flags = f; if (wrapB) *wrapB = e->wrap; *valid = 1;
    *alpha = CPA_ALPHA_UNKNOWN;
    if (f & 0x20) *alpha = CPA_ALPHA_ADDITIVE; else if (f & 0x40) *alpha = CPA_ALPHA_BLEND; else if (f & 0x10) *alpha = CPA_ALPHA_CUTOUT;
    else if (f & 0x08) *alpha = CPA_ALPHA_BLEND; else if (f == 0) *alpha = CPA_ALPHA_OPAQUE;
    *tileU = *tileV = 1; *wrapUnclear = 1;   /* the pre-load tile decode (tex_decode) is not valid for post-load wrap values: not claimed */
}
uint32_t cpa_scene_apply_tex(CpaScene *s, const CpaTexInfo *t, uint32_t n) {
    uint32_t u = 0;
    for (uint32_t i = 0; i < s->nItems; i++) { CpaDrawItem *d = &s->items[i]; const CpaTexInfo *e = tex_find(t, n, d->texVa); if (e) { tex_apply_one(e, &d->texFlags, &d->texWrapByte, &d->texFlagsValid, &d->tileU, &d->tileV, &d->wrapUnclear, &d->alphaClass); u++; } }
    for (uint32_t i = 0; i < s->nSprites; i++) { CpaSprite *d = &s->sprites[i]; const CpaTexInfo *e = tex_find(t, n, d->texVa); if (e) { tex_apply_one(e, &d->texFlags, NULL, &d->texFlagsValid, &d->tileU, &d->tileV, &d->wrapUnclear, &d->alphaClass); u++; } }
    for (uint32_t i = 0; i < s->rig.nPart; i++) { CpaRigPart *d = &s->rig.part[i]; const CpaTexInfo *e = tex_find(t, n, d->texVa); if (e) { tex_apply_one(e, &d->texFlags, &d->texWrapByte, &d->texFlagsValid, &d->tileU, &d->tileV, &d->wrapUnclear, &d->alphaClass); u++; } }
    return u;
}
