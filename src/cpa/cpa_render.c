/* cpa_render: see cpa_render.h for the pipeline and evidence tags. */
#include "cpa_render.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

void cpa_render_opts_default(CpaRenderOpts *o) {
    memset(o, 0, sizeof *o);
    o->useVis = 1; o->useLighting = 1; o->useFade = 1; o->includeLayer2 = 1; o->includeSprites = 1; o->actorMode = 1; o->sortTranslucent = 1; o->mergeOpaque = 1;
    o->cutoutAsTranslucent = 1; o->flagRule = 1; o->animMode = CPA_ANIM_BEST; o->spriteHalfScale = 0.5f;
}

/* ---------------- texture state from tex.flags / .TEX wrap bits ---------------- */

/* List rule (VERIFIED as a list rule, see CpaRenderOpts.flagRule): flags & 0x2A -> translucent (0x20 additive, else alpha blend, two-sided); 0x10 cutout -> translucent pass with alpha blend
 * (cutoutTrans, VERIFIED: matched cutout-class triangles are all in TA list 2) or the cutout pass with alpha test; otherwise opaque, back faces culled. Pixel format is NOT consulted. */
static void flag_class(uint32_t f, int cutoutTrans, uint8_t *pass, uint8_t *blend, uint8_t *alphaTest, uint8_t *cullBack) {
    f &= 0x7FFFFFFFu; *alphaTest = 0;
    if (f & 0x2A)      { *pass = CPA_PASS_TRANSLUCENT; *blend = (f & 0x20) ? CPA_BLEND_ADD : CPA_BLEND_ALPHA; *cullBack = 0; }
    else if (f & 0x10) { *cullBack = 0; if (cutoutTrans) { *pass = CPA_PASS_TRANSLUCENT; *blend = CPA_BLEND_ALPHA; } else { *pass = CPA_PASS_CUTOUT; *blend = CPA_BLEND_NONE; *alphaTest = 1; } }
    else               { *pass = CPA_PASS_OPAQUE; *blend = CPA_BLEND_NONE; *cullBack = 1; }
}

/* Wrap byte (tex+0x18 after load = cpa_tex_postload) -> wrap per axis. MEASURED (shadow_run WRAPCHK, oracle TSP clamp/flip bits of the strips that sample each texture, 7 levels,
 * deterministic per byte value, zero exceptions): 0x00 -> clamp U+V, 0x01 -> repeat U+V, 0x02 -> mirror U+V, 0x04 -> clamp V (U repeat), 0x10 -> clamp U (V repeat),
 * 0x18 -> mirror U (V repeat). INFERRED for the values without an oracle sample (0x08: 9 shipped textures, 0x24: 8; 0x20 does not occur): per axis a flip bit beats a clamp bit
 * (U: 0x08 flip, 0x10 clamp; V: 0x20 flip, 0x04 clamp), as 0x18 shows for U. The pre-load DAT wrap byte of cpa_scene (tileU/tileV) is a different encoding. */
void cpa_tex_wrap_modes(uint8_t wb, uint8_t *wrapU, uint8_t *wrapV) {
    if (wb <= 2) { uint8_t m = wb == 0 ? CPA_WRAP_CLAMP : wb == 1 ? CPA_WRAP_REPEAT : CPA_WRAP_MIRROR; *wrapU = *wrapV = m; return; }
    *wrapU = (wb & 0x08) ? CPA_WRAP_MIRROR : (wb & 0x10) ? CPA_WRAP_CLAMP : CPA_WRAP_REPEAT;
    *wrapV = (wb & 0x20) ? CPA_WRAP_MIRROR : (wb & 0x04) ? CPA_WRAP_CLAMP : CPA_WRAP_REPEAT;
}

/* ---------------- texture store ---------------- */
static int cmp_entry(const void *a, const void *b) { uint32_t x = ((const CpaTexEntry *)a)->va, y = ((const CpaTexEntry *)b)->va; return x < y ? -1 : x > y; }

int cpa_texstore_load(CpaTexStore *s, CpaScene *sc, const uint8_t *lvlTex, size_t lvlTexN, const uint8_t *fixDat, size_t fixDatN, const uint8_t *fixTex, size_t fixTexN) {
    memset(s, 0, sizeof *s);
    CpaTexInfo *ti = NULL, *all = NULL; uint32_t nti = 0, nfix = 0, fixVa[4096]; int ok = 1;
    if (lvlTex && sc) {
        int tabOk = cpa_tex_table(&sc->img, lvlTex, lvlTexN, &ti, &nti);
        int bankOk = cpa_texbank_load(lvlTex, lvlTexN, &s->bank[0]);
        if (tabOk && bankOk && s->bank[0].n == nti) {
            uint32_t *va = (uint32_t *)malloc(4 * (nti + 1));
            if (va) { for (uint32_t i = 0; i < nti; i++) va[i] = ti[i].structVa; s->levelOk = cpa_texbank_set_vas(&s->bank[0], va, nti); free(va); }
        }
        ok &= s->levelOk;
    }
    if (fixTex && fixDat) {
        nfix = cpa_tex_fix_table(fixDat, fixDatN, fixVa, 4096);
        int bankOk = cpa_texbank_load(fixTex, fixTexN, &s->bank[1]);
        if (bankOk && nfix && nfix == s->bank[1].n) s->fixOk = cpa_texbank_set_vas(&s->bank[1], fixVa, nfix);
        ok &= s->fixOk;
    }
    uint32_t nl = s->levelOk ? s->bank[0].n : 0, nf = s->fixOk ? s->bank[1].n : 0, n = nl + nf;
    s->e = (CpaTexEntry *)calloc(n ? n : 1, sizeof *s->e); all = (CpaTexInfo *)calloc(n ? n : 1, sizeof *all);
    if (!s->e || !all) { free(s->e); free(all); free(ti); s->e = NULL; return 0; }
    for (int b = 0; b < 2; b++) {
        uint32_t cnt = b ? nf : nl;
        for (uint32_t i = 0; i < cnt; i++) {
            const CpaTexChunk *c = &s->bank[b].c[i]; CpaTexEntry *e = &s->e[s->n]; CpaTexInfo *a = &all[s->n];
            e->va = c->structVa; e->w = c->info.w; e->h = c->info.h; e->raw = c->info.raw; e->pvrFmt = (uint16_t)(c->info.raw & 0xFFFF); e->mip = c->info.mip; e->isFix = (uint8_t)b;
            cpa_tex_postload(e->raw, &e->flags, &e->wrapByte); cpa_tex_wrap_modes(e->wrapByte, &e->wrapU, &e->wrapV);
            e->bank = &s->bank[b]; e->chunk = i;
            a->structVa = e->va; a->raw = e->raw; a->flags = e->flags; a->wrap = e->wrapByte; a->pvrFmt = e->pvrFmt; a->width = e->w; a->height = e->h;
            s->n++;
        }
    }
    s->nLevel = nl; s->nFix = nf;
    if (sc && s->n) cpa_scene_apply_tex(sc, all, s->n);
    qsort(s->e, s->n, sizeof *s->e, cmp_entry);
    free(all); free(ti);
    return ok;
}

void cpa_texstore_free(CpaTexStore *s) {
    for (uint32_t i = 0; i < s->n; i++) free(s->e[i].rgba);
    free(s->e); free(s->bumpRgba[0]); free(s->bumpRgba[1]);
    cpa_texbank_free(&s->bank[0]); cpa_texbank_free(&s->bank[1]); memset(s, 0, sizeof *s);
}

const CpaTexEntry *cpa_texstore_find(const CpaTexStore *s, uint32_t va) {
    if (!s || !va) return NULL;
    uint32_t lo = 0, hi = s->n;
    while (lo < hi) { uint32_t m = (lo + hi) / 2; if (s->e[m].va < va) lo = m + 1; else hi = m; }
    return lo < s->n && s->e[lo].va == va ? &s->e[lo] : NULL;
}

/* Substitute for the resident layer-2 bump map. The guest generates it at boot (FUN_8c013b52: LCG noise through a Hilbert-order fill; content differs between boots, so any noise of the
 * same kind is as faithful as the original). Substitute = deterministic LCG bytes as raw PVR bump texels (S = high byte, R = low byte), decoded by the normal bump path of cpa_tex with the
 * oracle's fixed K1/K2/K3/Q (INFERRED, cpa_tex.c bump_px). 64x64; the mip variant carries a full chain (the backend generates it from level 0). */
static uint32_t *bump_build(int mip) {
    uint8_t *blk = (uint8_t *)calloc(1, 16 + 0x4000 + 64); CpaPvrInfo in; uint32_t *out = NULL;
    if (!blk) return NULL;
    memcpy(blk, "PVRT", 4); blk[8] = CPA_PVR_BUMP; blk[9] = mip ? CPA_PVRD_TWIDDLED_MIP : CPA_PVRD_TWIDDLED; blk[12] = 64; blk[14] = 64;
    if (cpa_pvr_parse(blk, 16 + 0x4000 + 64, &in) && in.w == 64 && in.h == 64 && 16 + in.needLen <= 16 + 0x4000 + 64) {
        uint32_t x = mip ? 0x2545F491u : 0x9E3779B9u;
        for (uint32_t i = 0; i < in.needLen; i++) { x = x * 1664525u + 1013904223u; blk[16 + i] = (uint8_t)(x >> 24); }
        out = (uint32_t *)malloc(64 * 64 * 4);
        if (out && cpa_pvr_decode(&in, blk, 16 + 0x4000 + 64, NULL, 0, out)) { free(out); out = NULL; }
    }
    free(blk); return out;
}

const uint32_t *cpa_texstore_pixels(CpaTexStore *s, uint32_t va) {
    if (va == CPA_TEXVA_BUMP_MIP || va == CPA_TEXVA_BUMP) {
        int k = va == CPA_TEXVA_BUMP_MIP ? 0 : 1; if (!s->bumpRgba[k]) s->bumpRgba[k] = bump_build(k == 0);
        return s->bumpRgba[k];
    }
    CpaTexEntry *e = (CpaTexEntry *)cpa_texstore_find(s, va);
    if (!e || e->state < 0) return NULL;
    if (e->state == 0) {
        size_t npx = (size_t)e->w * e->h; e->state = -1;
        if (!npx || npx > (size_t)1024 * 1024) { s->nDecodeFail++; return NULL; }
        uint32_t *p = (uint32_t *)malloc(npx * 4);
        if (!p) return NULL;
        if (cpa_texbank_decode(e->bank, e->chunk, NULL, 0, p)) { free(p); s->nDecodeFail++; return NULL; }
        cpa_tex_bleed(p, e->w, e->h); e->rgba = p; e->state = 1; s->nDecoded++;
    }
    return e->rgba;
}

void cpa_texstore_trim(CpaTexStore *s) {
    for (uint32_t i = 0; i < s->n; i++) if (s->e[i].state == 1) { free(s->e[i].rgba); s->e[i].rgba = NULL; s->e[i].state = 0; }
}

int cpa_texstore_describe(void *user, uint32_t va, CpaTexDesc *out) {
    CpaTexStore *s = (CpaTexStore *)user; const uint32_t *px = cpa_texstore_pixels(s, va);
    if (!px) return 0;
    out->texVa = va;
    if (va == CPA_TEXVA_BUMP_MIP || va == CPA_TEXVA_BUMP) {
        out->width = out->height = 64; out->pvrFmt = CPA_PVR_BUMP | ((va == CPA_TEXVA_BUMP_MIP ? CPA_PVRD_TWIDDLED_MIP : CPA_PVRD_TWIDDLED) << 8);
        out->mip = va == CPA_TEXVA_BUMP_MIP; out->wrapU = out->wrapV = CPA_WRAP_REPEAT; out->substitute = 1;
    } else {
        const CpaTexEntry *e = cpa_texstore_find(s, va);
        out->width = e->w; out->height = e->h; out->pvrFmt = e->pvrFmt; out->mip = e->mip; out->wrapU = e->wrapU; out->wrapV = e->wrapV; out->substitute = 0;
    }
    out->rgba = (const uint8_t *)px; return 1;
}

static void store_wrap(const CpaTexStore *s, uint32_t va, uint8_t *wu, uint8_t *wv) {
    const CpaTexEntry *e = cpa_texstore_find(s, va);
    if (e) { *wu = e->wrapU; *wv = e->wrapV; }
}

void cpa_render_ctx_set_texstore(CpaRenderCtx *c, CpaTexStore *store) {
    c->store = store;
    if (store) { c->opts.describe = cpa_texstore_describe; c->opts.describeUser = store; } else if (c->opts.describe == cpa_texstore_describe) { c->opts.describe = NULL; c->opts.describeUser = NULL; }
}

int cpa_render_ctx_init(CpaRenderCtx *c, const CpaScene *scene, const CpaRenderOpts *opts) {
    memset(c, 0, sizeof *c); c->scene = scene;
    if (opts) c->opts = *opts; else cpa_render_opts_default(&c->opts);
    c->haveTmap = cpa_vis_trimap_build(&c->tmap, &scene->img);
    if (scene->img.nReg > 0 && scene->img.reg[0].p) c->haveTables = cpa_anim_tables_from_header(scene->img.reg[0].p, scene->img.reg[0].n, &c->tables);
    return 1;
}
void cpa_render_ctx_free(CpaRenderCtx *c) { if (c->haveTmap) cpa_vis_trimap_free(&c->tmap); free(c->texSeen); memset(c, 0, sizeof *c); }
void cpa_render_ctx_forget_textures(CpaRenderCtx *c) { c->nTexSeen = 0; }
void cpa_render_frame_free(CpaRenderFrame *f) { free(f->verts); free(f->draws); free(f->triSource); memset(f, 0, sizeof *f); }

/* ---------------- internal batch ---------------- */
typedef struct {
    uint32_t first, count;      /* vertex units into the scene arrays (arena = 0) or the arena (arena = 1) */
    uint8_t arena, source;
    uint32_t texVa;
    uint8_t pass, blend, alphaTest, cullBack, wrapU, wrapV, layer, uvRule, layerTexUnknown;
    uint32_t seq; double depth;
} RB;

typedef struct {
    RB *b; uint32_t n, cap;
    float *apos, *auv; uint32_t *acol; uint32_t an, acap;      /* arena: actor / sprite vertices (acol = packed ARGB per vertex) */
    int lighting; const CpaLight *lights; uint32_t nLights; CpaLightEnv env;   /* actor lighting inputs (cpa_light.h) */
    int oom;
    int flagRule, cutoutTrans; uint32_t nByFlags;
    const CpaTexStore *store;
} Build;

static RB *rb_new(Build *B) {
    if (B->n == B->cap) { uint32_t nc = B->cap ? B->cap * 2 : 1024; RB *p = (RB *)realloc(B->b, nc * sizeof *p); if (!p) { B->oom = 1; return NULL; } B->b = p; B->cap = nc; }
    RB *r = &B->b[B->n++]; memset(r, 0, sizeof *r); r->seq = B->n - 1; return r;
}
static int arena_reserve(Build *B, uint32_t nv) {
    if (B->an + nv <= B->acap) return 1;
    uint32_t nc = B->acap ? B->acap : 4096; while (nc < B->an + nv) nc *= 2;
    float *p = (float *)realloc(B->apos, (size_t)nc * 12), *q = (float *)realloc(B->auv, (size_t)nc * 8); uint32_t *cc = (uint32_t *)realloc(B->acol, (size_t)nc * 4);
    if (p) B->apos = p; if (q) B->auv = q; if (cc) B->acol = cc;
    if (!p || !q || !cc) { B->oom = 1; return 0; }
    B->acap = nc; return 1;
}

/* Material class decode of a texture struct; same rule as cpa_scene.c tex_decode (static there, restated: flags at +4 with bit31 set, wrap byte at +0x18).
 * INFERRED classes, see cpa_scene.h. Keep in sync with cpa_scene.c. */
static void classify_tex(const CpaImage *im, uint32_t texVa, uint8_t *pass, uint8_t *blend, uint8_t *alphaTest, uint8_t *cullBack, uint8_t *wrapU, uint8_t *wrapV, int flagRule, int cutoutTrans, uint32_t *nByFlags) {
    uint32_t fl = 0; uint8_t wr = 0; int8_t alpha = CPA_ALPHA_UNKNOWN; int flagsRead = 0; *wrapU = *wrapV = 1;
    if (texVa && cpa_is_ptr(im, texVa) && cpa_rd32(im, texVa + 4, &fl) && cpa_rd8(im, texVa + 0x18, &wr)) {
        uint32_t f = fl & 0x7FFFFFFFu;
        if (f & 0x20) alpha = CPA_ALPHA_ADDITIVE; else if (f & 0x40) alpha = CPA_ALPHA_BLEND; else if (f & 0x10) alpha = CPA_ALPHA_CUTOUT; else if (f & 0x08) alpha = CPA_ALPHA_BLEND; else if (f == 0) alpha = CPA_ALPHA_OPAQUE;
        /* bit31 set = pre-load DAT value (wrap byte decodable, INFERRED); clear = post-load guest value as found in a RAM dump (cpa_tex_postload: same flag bits, wrap byte not decoded -> repeat) */
        if (fl & 0x80000000u) { if (wr <= 3) { *wrapU = (wr & 2) ? 1 : 0; *wrapV = (wr & 1) ? 1 : 0; } }
        else cpa_tex_wrap_modes(wr, wrapU, wrapV);          /* post-load wrap byte (RAM dump): the same decode as the texture store */
        flagsRead = 1;
    }
    *alphaTest = 0;
    switch (alpha) {                                           /* same table as cpa_drawlist.c classify() */
    case CPA_ALPHA_OPAQUE:   *pass = CPA_PASS_OPAQUE;      *blend = CPA_BLEND_NONE; *cullBack = 1; break;
    case CPA_ALPHA_CUTOUT:   *pass = CPA_PASS_CUTOUT;      *blend = CPA_BLEND_NONE; *cullBack = 0; *alphaTest = 1; break;
    case CPA_ALPHA_ADDITIVE: *pass = CPA_PASS_TRANSLUCENT; *blend = CPA_BLEND_ADD;  *cullBack = 0; break;
    default:                 *pass = CPA_PASS_TRANSLUCENT; *blend = CPA_BLEND_ALPHA; *cullBack = 0; break;
    }
    if (flagRule && flagsRead) { flag_class(fl, cutoutTrans, pass, blend, alphaTest, cullBack); (*nByFlags)++; }
}

/* ---------------- actors ---------------- */
typedef struct { float mn[3], mx[3]; int any; } Box;

/* Type-1 elements of one GeometricObject through M into the arena (one RB per element). Returns triangles emitted. */
static uint32_t actor_geo(Build *B, const CpaImage *im, uint32_t geo, const float M[16], const float Wm[16], Box *box, uint32_t *skipped) {
    uint32_t pv, ptypes, pelems, cnt, total = 0;
    if (!cpa_rd32(im, geo, &pv) || !cpa_rd32(im, geo + 0x10, &ptypes) || !cpa_rd32(im, geo + 0x14, &pelems) || !cpa_rd32(im, geo + 0x2C, &cnt)) return 0;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !cpa_is_ptr(im, pv) || !cpa_is_ptr(im, ptypes) || !cpa_is_ptr(im, pelems) || !cpa_ptr(im, pv, (size_t)nv * 12)) return 0;
    float (*vw)[3] = (float (*)[3])malloc(sizeof(float[3]) * nv); if (!vw) { B->oom = 1; return 0; }
    for (uint32_t i = 0; i < nv; i++) {
        float v[3]; for (int k = 0; k < 3; k++) if (!cpa_rdf(im, pv + i * 12 + k * 4, &v[k])) v[k] = 0;
        for (int j = 0; j < 3; j++) vw[i][j] = v[0] * M[j] + v[1] * M[4 + j] + v[2] * M[8 + j] + M[12 + j];
    }
    for (uint32_t e = 0; e < ne; e++) {
        uint16_t et; uint32_t el, w[8]; int ok = 1;
        if (!cpa_rd16(im, ptypes + 2 * e, &et) || !cpa_rd32(im, pelems + 4 * e, &el) || !cpa_is_ptr(im, el)) { (*skipped)++; continue; }
        if (et != 1) { (*skipped)++; continue; }                                      /* type 3 (sprite) in a posed actor: not exported */
        for (int i = 0; i < 8; i++) ok &= cpa_rd32(im, el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !cpa_is_ptr16(im, w[2]) || !cpa_is_ptr16(im, w[3]) || !cpa_is_ptr(im, w[5]) || !cpa_ptr(im, w[2], (size_t)ntri * 6) || !cpa_ptr(im, w[3], (size_t)ntri * 6) || !cpa_ptr(im, w[5], (size_t)nuv * 8)) { (*skipped)++; continue; }
        uint32_t gm = w[0], vm = 0, tex = 0;                                           /* element[0] -> GameMaterial; GameMaterial[0] -> VisualMaterial; VM+0x4C -> texture struct */
        if (cpa_is_ptr(im, gm) && cpa_rd32(im, gm, &vm) && cpa_is_ptr(im, vm)) cpa_rd32(im, vm + 0x4C, &tex);
        if (!arena_reserve(B, ntri * 3)) break;
        CpaLightMat lmat; int haveMat = B->lighting && cpa_light_mat_read(im, vm, &lmat);       /* texFlags: the guest RAM image holds the post-load value */
        uint32_t pnrm = 0; if (haveMat) { cpa_rd32(im, geo + 4, &pnrm); if (!cpa_is_ptr(im, pnrm) || !cpa_ptr(im, pnrm, (size_t)nv * 12)) pnrm = 0; }
        uint32_t first = B->an, got = 0;
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3]; int fo = 1;
            for (int k = 0; k < 3; k++) fo &= cpa_rd16(im, w[2] + t * 6 + k * 2, &vi[k]) && cpa_rd16(im, w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) continue;
            for (int k = 0; k < 3; k++) {
                float u = 0, v = 0; cpa_rdf(im, w[5] + ui[k] * 8u, &u); cpa_rdf(im, w[5] + ui[k] * 8u + 4, &v);
                uint32_t o = first + got * 3 + k; memcpy(B->apos + 3 * (size_t)o, vw[vi[k]], 12); B->auv[2 * (size_t)o] = u; B->auv[2 * (size_t)o + 1] = v;
                if (haveMat) {      /* cpa_light.h: v = sum of the parallel lights at the world-space unit normal (stored normal through the channel's world 3x3, no mirror); ambient lights are in env.G */
                    float nl[3] = { 0, 0, 0 }, nW[3], acc[4] = { 0, 0, 0, 0 };
                    if (pnrm) for (int a = 0; a < 3; a++) nl[a] = cpa_f32(im, pnrm + vi[k] * 12u + 4u * a);
                    for (int a = 0; a < 3; a++) nW[a] = nl[0] * Wm[a] + nl[1] * Wm[4 + a] + nl[2] * Wm[8 + a];
                    { float L2 = sqrtf(nW[0] * nW[0] + nW[1] * nW[1] + nW[2] * nW[2]); if (L2 > 1e-6f) for (int a = 0; a < 3; a++) nW[a] /= L2; }
                    for (uint32_t li = 0; li < B->nLights; li++) cpa_light_accum(&B->lights[li], nW, acc, &B->env);
                    B->acol[o] = cpa_light_argb(&lmat, &B->env, acc);
                } else B->acol[o] = 0xFFFFFFFFu;
                for (int j = 0; j < 3; j++) { float x = vw[vi[k]][j]; if (!box->any || x < box->mn[j]) box->mn[j] = x; if (!box->any || x > box->mx[j]) box->mx[j] = x; } box->any = 1;
            }
            got++;
        }
        if (!got) continue;
        B->an += got * 3; total += got;
        RB *r = rb_new(B); if (!r) break;
        r->first = first; r->count = got * 3; r->arena = 1; r->source = CPA_SRC_ACTOR; r->texVa = tex;
        classify_tex(im, tex, &r->pass, &r->blend, &r->alphaTest, &r->cullBack, &r->wrapU, &r->wrapV, B->flagRule, B->cutoutTrans, &B->nByFlags);
        store_wrap(B->store, tex, &r->wrapU, &r->wrapV);
    }
    free(vw); return total;
}

static int cmp_u32(const void *a, const void *b) { uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b; return x < y ? -1 : x > y; }

/* ---------------- ordering ---------------- */
static const RB *g_rbBase;
static int cmp_opq(const void *pa, const void *pb) {
    const RB *a = &g_rbBase[*(const uint32_t *)pa], *b = &g_rbBase[*(const uint32_t *)pb];
    if (a->texVa != b->texVa) return a->texVa < b->texVa ? -1 : 1;
    if (a->blend != b->blend) return a->blend < b->blend ? -1 : 1;
    if (a->alphaTest != b->alphaTest) return a->alphaTest < b->alphaTest ? -1 : 1;
    if (a->cullBack != b->cullBack) return a->cullBack < b->cullBack ? -1 : 1;
    if (a->wrapU != b->wrapU) return a->wrapU < b->wrapU ? -1 : 1;
    if (a->wrapV != b->wrapV) return a->wrapV < b->wrapV ? -1 : 1;
    return a->seq < b->seq ? -1 : a->seq > b->seq;
}
static int cmp_trn(const void *pa, const void *pb) {
    const RB *a = &g_rbBase[*(const uint32_t *)pa], *b = &g_rbBase[*(const uint32_t *)pb];
    if (a->depth != b->depth) return a->depth > b->depth ? -1 : 1;     /* far first */
    if (a->layer != b->layer) return a->layer < b->layer ? -1 : 1;
    return a->seq < b->seq ? -1 : a->seq > b->seq;
}
static int cmp_seq(const void *pa, const void *pb) { const RB *a = &g_rbBase[*(const uint32_t *)pa], *b = &g_rbBase[*(const uint32_t *)pb]; return a->seq < b->seq ? -1 : a->seq > b->seq; }

static int same_state(const CpaRenderDraw *d, const RB *r) {
    return d->texVa == r->texVa && d->blend == r->blend && d->alphaTest == r->alphaTest && d->cullBack == r->cullBack && d->wrapU == r->wrapU && d->wrapV == r->wrapV && d->layer == r->layer && d->pass == r->pass;
}

int cpa_render_build_frame(CpaRenderCtx *c, CpaRenderFrame *out, const CpaFrameInput *in) {
    const CpaScene *S = c->scene; const CpaRenderOpts *O = &c->opts;
    memset(out, 0, sizeof *out); out->cam = in->cam; out->w = in->w; out->h = in->h; out->fit = in->fit;
    CpaRenderStats *st = &out->st;
    Build B; memset(&B, 0, sizeof B); B.flagRule = O->flagRule; B.cutoutTrans = O->cutoutAsTranslucent; B.store = c->store;
    B.lighting = O->useLighting; B.lights = in->lights; B.nLights = in->nLights > CPA_RENDER_MAXLIGHTS ? CPA_RENDER_MAXLIGHTS : in->nLights;
    cpa_light_env_default(&B.env); cpa_light_env_from_list(in->lights, B.nLights, &B.env);

    /* 1. visibility */
    CpaVisFrustum fr; CpaVis vis; CpaVisCull cull; int haveVis = 0, haveCull = 0; uint32_t *drawnActors = NULL; uint32_t nDrawnActors = 0;
    memset(&vis, 0, sizeof vis); memset(&cull, 0, sizeof cull);
    if (in->hasFrustum) fr = in->frustum;
    else cpa_vis_frustum_from_camera(&fr, &in->cam, in->cam.hfov * 0.5f, in->cam.hfov * in->cam.vfovRatio * 0.5f, in->cam.hfov * in->cam.vfovRatio * 0.5f);
    if (O->useVis && c->haveTmap && (in->sector || in->hasPos)) {
        CpaVisInput vi; memset(&vi, 0, sizeof vi); vi.sector = in->sector; vi.hasPos = in->hasPos; memcpy(vi.pos, in->pos, 12); vi.frustum = &fr;
        CpaVisOpts vo; cpa_vis_opts_default(&vo); if (in->drawMask) vo.mask = in->drawMask; vo.allowKind2 = in->allowKind2;
        haveVis = cpa_vis_predict(&vis, &S->img, &vi, &vo);
        if (haveVis) { haveCull = cpa_vis_cull_build(&cull, &vis, &c->tmap, S);
            st->haveVis = 1; st->visSector = vis.sector; st->visNIpos = vis.nIpos;
            drawnActors = (uint32_t *)malloc((vis.nDrawn + 1) * 4);
            if (drawnActors) { for (uint32_t i = 0; i < vis.nDrawn; i++) if (cpa_u32(&S->img, vis.drawn[i]) == CPA_SO_ACTOR) drawnActors[nDrawnActors++] = vis.drawn[i]; qsort(drawnActors, nDrawnActors, 4, cmp_u32); } }
    }

    /* 2. static batches + sprites from the draw list */
    CpaDrawList dl; CpaDrawListOpts dopt; cpa_drawlist_opts_default(&dopt); dopt.includeLayer2 = O->includeLayer2; dopt.includeSprites = O->includeSprites; dopt.cull = haveCull ? &cull : NULL;
    if (!cpa_drawlist_build(&dl, S, &dopt)) { cpa_vis_cull_free(&cull); cpa_vis_free(&vis); free(drawnActors); return 0; }
    for (uint32_t i = 0; i < dl.nBatches; i++) {
        const CpaBatch *b = &dl.batches[i]; RB *r = rb_new(&B); if (!r) break;
        r->first = b->firstVert; r->count = b->vertCount; r->source = CPA_SRC_STATIC; r->texVa = b->texVa; r->pass = b->pass; r->blend = b->blend; r->alphaTest = b->alphaTest;
        r->cullBack = b->cullBack; r->wrapU = b->wrapU; r->wrapV = b->wrapV; r->layer = b->layer; r->uvRule = b->uvRule; r->layerTexUnknown = b->layerTexUnknown;
        { /* tex.flags list rule (the item's flags are post-load once cpa_texstore_load applied them); a layer-2 batch keeps its base's cull state */
            const CpaDrawItem *it = &S->items[b->item];
            if (O->flagRule && it->texVa && it->texFlagsValid) {
                uint8_t p, bl, at;
                flag_class(it->texFlags, O->cutoutAsTranslucent, &p, &bl, &at, &r->cullBack);
                if (!b->layer) { r->pass = p; r->blend = bl; r->alphaTest = at; B.nByFlags++; }
            }
        }
        if (b->layer) { r->texVa = b->overlayMode == 1 ? CPA_TEXVA_BUMP_MIP : CPA_TEXVA_BUMP; r->wrapU = r->wrapV = CPA_WRAP_REPEAT; }   /* INFERRED substitute, see CpaTexDesc.substitute */
        else store_wrap(c->store, r->texVa, &r->wrapU, &r->wrapV);
        st->staticBatches++;
    }
    if (haveCull) st->staticTrisCulled = cull.nTriCulled;

    /* 3. posed actors */
    const CpaImage *aim = in->actorImg ? in->actorImg : &S->img;
    if (O->actorMode && c->haveTables) {
        CpaAnimRig *rig = (CpaAnimRig *)malloc(sizeof *rig);
        for (uint32_t a = 0; rig && a < in->nActors && !B.oom; a++) {
            const CpaRenderActor *ra = &in->actors[a]; CpaAnimActor A; st->actorsGiven++;
            if (O->actorMode == 2 && haveVis && !bsearch(&ra->soVa, drawnActors, nDrawnActors, 4, cmp_u32)) { st->actorsVisCulled++; continue; }
            if (!cpa_anim_actor_open(&A, aim, &c->tables, ra->soVa) || !cpa_anim_rig_pose(&A, ra->anim, ra->frame, O->animMode, ra->matrix, rig)) { st->actorsFailed++; continue; }
            st->actorsPosed++;
            uint32_t mark = B.n, amark = B.an; Box box; memset(&box, 0, sizeof box);
            for (unsigned ch = 0; ch < rig->pose.nCh; ch++) {
                int obj = rig->pose.ch[ch].obj; if (obj < 0) continue;
                uint32_t geo = cpa_anim_obj_geo(&A, obj); if (geo) actor_geo(&B, aim, geo, rig->objM[ch], rig->world[ch], &box, &st->actorElemSkipped);
            }
            if (!box.any || !cpa_vis_box_test(&fr, box.mn, box.mx)) { B.n = mark; B.an = amark; st->actorsBboxCulled++; continue; }
            st->actorsDrawn++; st->actorBatches += B.n - mark;
        }
        free(rig);
    }

    /* 4. sprites -> quads in the arena */
    for (uint32_t i = 0; i < dl.nSprites && !B.oom; i++) {
        const CpaDrawSprite *sp = &dl.sprites[i]; float q[12]; cpa_sprite_quad(&in->cam, sp, O->spriteHalfScale, q);
        if (!arena_reserve(&B, 6)) break;
        static const int tri[6] = { 0, 1, 2, 1, 3, 2 }; static const float quv[4][2] = { {0, 0}, {1, 0}, {0, 1}, {1, 1} };
        for (int k = 0; k < 6; k++) { uint32_t o = B.an + (uint32_t)k; B.acol[o] = 0xFFFFFFFFu; memcpy(B.apos + 3 * (size_t)o, q + 3 * tri[k], 12); B.auv[2 * (size_t)o] = quv[tri[k]][0]; B.auv[2 * (size_t)o + 1] = quv[tri[k]][1]; }
        RB *r = rb_new(&B); if (!r) break;
        r->first = B.an; r->count = 6; B.an += 6; r->arena = 1; r->source = CPA_SRC_SPRITE; r->texVa = sp->texVa; r->pass = sp->pass; r->blend = sp->blend; r->alphaTest = sp->alphaTest;
        r->cullBack = 0; r->wrapU = sp->wrapU; r->wrapV = sp->wrapV; st->spriteQuads++;
        if (O->flagRule && sp->src < S->nSprites && S->sprites[sp->src].texVa && S->sprites[sp->src].texFlagsValid) {
            uint8_t cb; flag_class(S->sprites[sp->src].texFlags, O->cutoutAsTranslucent, &r->pass, &r->blend, &r->alphaTest, &cb); B.nByFlags++;
        }
        store_wrap(c->store, r->texVa, &r->wrapU, &r->wrapV);
    }
    cpa_drawlist_free(&dl); cpa_vis_cull_free(&cull); cpa_vis_free(&vis); free(drawnActors);
    if (B.oom) { free(B.b); free(B.apos); free(B.auv); free(B.acol); return 0; }
    st->srcBatches = B.n;
    if (O->cutoutAsTranslucent) for (uint32_t i = 0; i < B.n; i++) { RB *r = &B.b[i]; if (r->pass == CPA_PASS_CUTOUT) { r->pass = CPA_PASS_TRANSLUCENT; r->blend = CPA_BLEND_ALPHA; r->alphaTest = 0; r->cullBack = 0; } }

    /* 5. order per pass, copy into the frame stream, merge identical adjacent states */
    uint32_t totV = 0; for (uint32_t i = 0; i < B.n; i++) totV += B.b[i].count;
    out->verts = (CpaRenderVertex *)malloc((totV + 1) * sizeof *out->verts);   /* +1: host fake GL reads 16 bytes at the colour pointer of the last vertex */ out->draws = (CpaRenderDraw *)malloc((B.n ? B.n : 1) * sizeof *out->draws);
    uint32_t *idx = (uint32_t *)malloc((B.n ? B.n : 1) * 4);
    out->triSource = (uint8_t *)malloc(totV / 3 + 1);
    if (!out->verts || !out->draws || !idx || !out->triSource) { free(out->verts); free(out->draws); free(out->triSource); free(idx); free(B.b); free(B.apos); free(B.auv); free(B.acol); memset(out, 0, sizeof *out); return 0; }
    if (O->sortTranslucent)
        for (uint32_t i = 0; i < B.n; i++) { RB *r = &B.b[i]; if (r->pass != CPA_PASS_TRANSLUCENT || !r->count) continue;
            const float *P = r->arena ? B.apos : S->pos; double sum = 0;
            for (uint32_t v = 0; v < r->count; v++) { const float *p = P + 3 * (size_t)(r->first + v); sum += (double)in->cam.fwd[0] * (p[0] - in->cam.pos[0]) + (double)in->cam.fwd[1] * (p[1] - in->cam.pos[1]) + (double)in->cam.fwd[2] * (p[2] - in->cam.pos[2]); }
            r->depth = sum / r->count; }
    g_rbBase = B.b;
    for (int p = 0; p < CPA_PASS_COUNT; p++) {
        out->passStart[p] = out->nDraws;
        uint32_t n = 0; for (uint32_t i = 0; i < B.n; i++) if (B.b[i].pass == p) idx[n++] = i;
        if (p == CPA_PASS_TRANSLUCENT) qsort(idx, n, 4, O->sortTranslucent ? cmp_trn : cmp_seq);
        else qsort(idx, n, 4, O->mergeOpaque ? cmp_opq : cmp_seq);
        for (uint32_t k = 0; k < n; k++) {
            const RB *r = &B.b[idx[k]]; if (!r->count) continue;
            CpaRenderDraw *d = out->nDraws > out->passStart[p] ? &out->draws[out->nDraws - 1] : NULL;
            if (!d || !same_state(d, r)) {
                d = &out->draws[out->nDraws++]; memset(d, 0, sizeof *d);
                d->first = out->nVerts; d->texVa = r->texVa; d->pass = r->pass; d->blend = r->blend; d->alphaTest = r->alphaTest; d->cullBack = r->cullBack; d->wrapU = r->wrapU; d->wrapV = r->wrapV; d->layer = r->layer; d->layerTexUnknown = r->layerTexUnknown;
            }
            d->count += r->count; d->nSrc++; d->nSrcKind[r->source]++;
            for (uint32_t v = 0; v < r->count; v++) {
                const float *P = (r->arena ? B.apos : S->pos) + 3 * (size_t)(r->first + v), *U = (r->arena ? B.auv : S->uv) + 2 * (size_t)(r->first + v);
                CpaRenderVertex *o = &out->verts[out->nVerts++]; o->x = P[0]; o->y = P[1]; o->z = P[2]; o->u = U[0]; o->v = U[1];
                { uint32_t col = 0xFFFFFFFFu; size_t vx = r->first + v;
                  if (O->useLighting && !r->layer) {
                      if (r->arena) col = B.acol[vx];
                      else if (S->col) { col = S->col[vx]; uint32_t mi = S->vtxMat[vx];
                          if (O->useFade && in->fade.enabled && mi < S->nLmat) { float zc = (float)((double)in->cam.fwd[0] * (P[0] - in->cam.pos[0]) + (double)in->cam.fwd[1] * (P[1] - in->cam.pos[1]) + (double)in->cam.fwd[2] * (P[2] - in->cam.pos[2]));
                              col = cpa_light_fade_argb(&in->fade, &S->lmat[mi], col, zc, 1.0f); } }
                  }
                  o->a = (uint8_t)(col >> 24); o->r = (uint8_t)(col >> 16); o->g = (uint8_t)(col >> 8); o->b = (uint8_t)col; }
                if (r->uvRule == CPA_UVRULE_OVERLAY) { o->u *= CPA_OVERLAY_UV_SCALE; o->v *= CPA_OVERLAY_UV_SCALE; }
                else if (r->uvRule == CPA_UVRULE_OVERLAY_FLIPV) { o->u *= CPA_OVERLAY_UV_SCALE; o->v = CPA_OVERLAY_UV_SCALE * (1.0f - U[1]); }
            }
            uint32_t tris = r->count / 3; st->trisPass[p] += tris; memset(out->triSource + (out->nVerts - r->count) / 3, r->source, tris);
            if (r->layer) st->trisLayer2 += tris; else if (r->source == CPA_SRC_STATIC) st->trisStatic += tris; else if (r->source == CPA_SRC_ACTOR) st->trisActor += tris; else st->trisSprite += tris;
        }
        st->drawsPass[p] = out->nDraws - out->passStart[p];
    }
    out->passStart[CPA_PASS_COUNT] = out->nDraws; st->nDraws = out->nDraws;
    { /* distinct textures */
        uint32_t *t = (uint32_t *)malloc((out->nDraws + 1) * 4), n = 0;
        if (t) { for (uint32_t i = 0; i < out->nDraws; i++) if (out->draws[i].texVa && !out->draws[i].layer) {
                     t[n++] = out->draws[i].texVa; if (c->store && !cpa_texstore_find(c->store, out->draws[i].texVa)) st->drawsTexMissing++; }
            qsort(t, n, 4, cmp_u32);
            for (uint32_t i = 0; i < n; i++) if (!i || t[i] != t[i - 1]) { st->texturesUsed++; if (c->store && !cpa_texstore_find(c->store, t[i])) st->texturesMissing++; }
            free(t); }
    }
    st->passByFlags = B.nByFlags;
    free(idx); free(B.b); free(B.apos); free(B.auv); free(B.acol);
    return 1;
}

uint32_t cpa_render_submit(CpaRenderCtx *c, const CpaRenderFrame *f, const CpaRenderBackend *be) {
    uint32_t n = 0;
    if (be->begin_frame) be->begin_frame(be->user, f);
    for (uint32_t i = 0; i < f->nDraws; i++) {
        const CpaRenderDraw *d = &f->draws[i];
        if (d->texVa && be->upload_texture) {
            uint32_t k = 0; while (k < c->nTexSeen && c->texSeen[k] != d->texVa) k++;
            if (k == c->nTexSeen) {
                if (c->nTexSeen == c->capTexSeen) { uint32_t nc = c->capTexSeen ? c->capTexSeen * 2 : 256; uint32_t *p = (uint32_t *)realloc(c->texSeen, nc * 4); if (p) { c->texSeen = p; c->capTexSeen = nc; } }
                if (c->nTexSeen < c->capTexSeen) c->texSeen[c->nTexSeen++] = d->texVa;
                CpaTexDesc t; memset(&t, 0, sizeof t); t.texVa = d->texVa;
                if (c->opts.describe) c->opts.describe(c->opts.describeUser, d->texVa, &t);
                t.texVa = d->texVa; be->upload_texture(be->user, &t);
            }
        }
        if (be->draw) be->draw(be->user, f, d);
        n++;
    }
    if (be->end_frame) be->end_frame(be->user);
    return n;
}

/* ---------------- SHADOW MODE ONLY: guest RAM adapter ---------------- */
#define RAM_BASE 0x8C000000u
#define RAM_SIZE (16u << 20)
#define VA_HFOV 0x8C00F300u
#define VA_ASPECT 0x8C00F304u
#define VA_ROW_U 0x8C00F308u
#define VA_ROW_F 0x8C00F314u
#define VA_POS 0x8C00F394u
#define VA_RAYMAN_PTR 0x8C123CF8u
#define VA_VP_PTR 0x8C123C40u
#define VA_MASK 0x8C123B68u
#define VA_FLAG_DBG 0x8C124740u

typedef struct { CpaRenderActor *a; uint32_t n, cap, unposed; const CpaImage *im; const CpaAnimTables *T; } Walk;
static void ram_walk(Walk *W, uint32_t so, int depth, unsigned *budget) {
    if (depth > 40 || (*budget)++ > 20000) return;
    uint32_t type; if (!cpa_rd32(W->im, so, &type)) return;
    if (type == CPA_SO_ACTOR) {
        CpaAnimActor A; CpaAnimCur cur; float M[16];
        if (cpa_anim_actor_open(&A, W->im, W->T, so) && cpa_anim_read_matrix(W->im, cpa_u32(W->im, so + 0x24), M)) {
            if (A.chanList && cpa_anim_cur(&A, &cur)) {
                if (W->n == W->cap) { uint32_t nc = W->cap ? W->cap * 2 : 128; CpaRenderActor *p = (CpaRenderActor *)realloc(W->a, nc * sizeof *p); if (!p) return; W->a = p; W->cap = nc; }
                CpaRenderActor *r = &W->a[W->n++]; r->soVa = so; r->anim = cur.animIdx; r->frame = cur.frame; memcpy(r->matrix, M, 64);
            } else W->unposed++;
        }
    }
    uint32_t ch = cpa_u32(W->im, so + 8);
    for (unsigned k = 0; ch && k < 20000 && cpa_is_ptr(W->im, ch); k++) { ram_walk(W, ch, depth + 1, budget); ch = cpa_u32(W->im, ch + 0x14); }
}

int cpa_render_input_from_ram(CpaFrameInput *in, CpaRenderActor **actors, uint32_t *nUnposed, const CpaImage *ram, const CpaScene *sc, const CpaAnimTables *T) {
    memset(in, 0, sizeof *in); *actors = NULL; in->nActors = 0; in->actorImg = ram;
    float hfov = cpa_f32(ram, VA_HFOV), asp = cpa_f32(ram, VA_ASPECT), U[3], F[3], C[3];
    for (int i = 0; i < 3; i++) { U[i] = cpa_f32(ram, VA_ROW_U + 4u * i); F[i] = cpa_f32(ram, VA_ROW_F + 4u * i); C[i] = cpa_f32(ram, VA_POS + 4u * i); }
    if (!(hfov >= 0.1f && hfov <= 3.0f) || fabsf(F[0] * F[0] + F[1] * F[1] + F[2] * F[2] - 1.0f) > 1e-2f) return 0;
    cpa_camera_from_rows(&in->cam, C, U, F, hfov, asp);
    in->w = 640; in->h = 480; in->fit = CPA_FIT_HORPLUS;
    /* viewport planes (same reads as ta_compare.c vis_from_ram) */
    uint32_t vp = cpa_u32(ram, cpa_u32(ram, VA_VP_PTR)), actor = cpa_u32(ram, VA_RAYMAN_PTR), gm = cpa_u32(ram, actor + 0x24);
    if (vp >= RAM_BASE && vp + 0x100 <= RAM_BASE + RAM_SIZE) {
        float side[4][4]; static const uint32_t po[4] = { 0xAC, 0xBC, 0xCC, 0xDC };
        for (int k = 0; k < 4; k++) for (int j = 0; j < 4; j++) side[k][j] = cpa_f32(ram, vp + po[k] + 4u * j);
        cpa_vis_frustum_from_planes(&in->frustum, C, U, F, side, cpa_f32(ram, vp + 0x80)); in->hasFrustum = 1;
    }
    if (actor >= RAM_BASE && gm >= RAM_BASE && gm + 0x70 <= RAM_BASE + RAM_SIZE) { in->hasPos = 1; for (int i = 0; i < 3; i++) in->pos[i] = cpa_f32(ram, gm + 0x58 + 4u * i); }
    in->drawMask = cpa_u32(ram, VA_MASK); in->allowKind2 = (cpa_u32(ram, VA_FLAG_DBG) & 0xFF) == 1;
    Walk W; memset(&W, 0, sizeof W); W.im = ram; W.T = T; unsigned budget = 0;
    if (sc->img.nReg > 0) ram_walk(&W, cpa_u32(&sc->img, sc->img.reg[0].base + 13 * 4), 0, &budget);
    *actors = W.a; in->actors = W.a; in->nActors = W.n; if (nUnposed) *nUnposed = W.unposed;
    in->nLights = cpa_light_read_ram_list(ram, in->lights, CPA_RENDER_MAXLIGHTS);      /* light list + distance-fade block of the guest (cpa_light.h; the fade enable flag is not decoded, see notes_lighting.md) */
    cpa_light_fade_from_ram(ram, &in->fade);
    return 1;
}
