/* cpa_drawlist: see cpa_drawlist.h for evidence tags. */
#include "cpa_drawlist.h"
#include <stdlib.h>
#include <string.h>

void cpa_drawlist_opts_default(CpaDrawListOpts *o) { o->includeActors = 0; o->includeLayer2 = 1; o->includeSprites = 1; }

static void classify(int8_t alphaClass, uint8_t *pass, uint8_t *blend, uint8_t *alphaTest, uint8_t *cullBack) {
    *alphaTest = 0;
    switch (alphaClass) {
    case CPA_ALPHA_OPAQUE:   *pass = CPA_PASS_OPAQUE;      *blend = CPA_BLEND_NONE;  *cullBack = 1; break;   /* VERIFIED */
    case CPA_ALPHA_CUTOUT:   *pass = CPA_PASS_CUTOUT;      *blend = CPA_BLEND_NONE;  *cullBack = 0; *alphaTest = 1; break; /* INFERRED / unobserved */
    case CPA_ALPHA_ADDITIVE: *pass = CPA_PASS_TRANSLUCENT; *blend = CPA_BLEND_ADD;   *cullBack = 0; break;   /* list VERIFIED (5/5), additive blend INFERRED from flag 0x20 */
    case CPA_ALPHA_BLEND:
    default:                 *pass = CPA_PASS_TRANSLUCENT; *blend = CPA_BLEND_ALPHA; *cullBack = 0; break;   /* blend 11/11, unknown 8/8 -> translucent list VERIFIED */
    }
}

static int layer2_rule(unsigned mode) {
    float a, b;
    if (!cpa_overlay_uv(mode, 0.0f, 0.0f, &a, &b)) return -1;
    return mode == 3 ? CPA_UVRULE_OVERLAY_FLIPV : CPA_UVRULE_OVERLAY;
}

int cpa_drawlist_build(CpaDrawList *dl, const CpaScene *s, const CpaDrawListOpts *opts) {
    CpaDrawListOpts d; if (!opts) { cpa_drawlist_opts_default(&d); opts = &d; }
    memset(dl, 0, sizeof *dl); dl->scene = s;
    uint32_t cap = 0, nsp = 0;
    for (uint32_t i = 0; i < s->nItems; i++) {
        const CpaDrawItem *it = &s->items[i];
        if (it->isActor && !opts->includeActors) continue;
        if (!it->vertCount) continue;
        cap += 1 + ((opts->includeLayer2 && layer2_rule(it->overlayMode) >= 0) ? 1 : 0);
    }
    if (opts->includeSprites) for (uint32_t i = 0; i < s->nSprites; i++) if (!s->sprites[i].isActor || opts->includeActors) nsp++;
    dl->batches = cap ? calloc(cap, sizeof *dl->batches) : NULL;
    dl->sprites = nsp ? calloc(nsp, sizeof *dl->sprites) : NULL;
    if ((cap && !dl->batches) || (nsp && !dl->sprites)) { cpa_drawlist_free(dl); return 0; }

    /* Fill in scene order, then stable-place by pass: base batches of a pass first, layer-2 batches after them (translucent pass only). */
    CpaBatch *tmp = cap ? calloc(cap, sizeof *tmp) : NULL;
    if (cap && !tmp) { cpa_drawlist_free(dl); return 0; }
    uint32_t n = 0, seq = 0;
    for (uint32_t i = 0; i < s->nItems; i++) {
        const CpaDrawItem *it = &s->items[i];
        if ((it->isActor && !opts->includeActors) || !it->vertCount) continue;
        CpaBatch b; memset(&b, 0, sizeof b);
        b.firstVert = it->firstVert; b.vertCount = it->vertCount; b.item = i; b.texVa = it->texVa;
        classify(it->alphaClass, &b.pass, &b.blend, &b.alphaTest, &b.cullBack);
        b.wrapU = it->tileU ? 1 : 0; b.wrapV = it->tileV ? 1 : 0;      /* wrapUnclear items already default to 1 in cpa_scene */
        b.overlayMode = it->overlayMode; b.isActor = it->isActor; b.alphaClass = it->alphaClass; b.seq = seq++;
        tmp[n++] = b;
        int rule = opts->includeLayer2 ? layer2_rule(it->overlayMode) : -1;
        if (rule >= 0) {
            CpaBatch l = b;
            l.layer = 1; l.uvRule = (uint8_t)rule; l.texVa = 0; l.layerTexUnknown = 1;
            l.pass = CPA_PASS_TRANSLUCENT; l.blend = CPA_BLEND_ALPHA; l.alphaTest = 0;   /* cullBack inherited from the base (INFERRED) */
            l.wrapU = l.wrapV = 1; l.seq = seq++;
            tmp[n++] = l; dl->nLayer2++;
        }
    }
    uint32_t w = 0;
    for (int p = 0; p < CPA_PASS_COUNT; p++) {
        dl->passStart[p] = w;
        for (int layer = 0; layer < 2; layer++)
            for (uint32_t k = 0; k < n; k++) if (tmp[k].pass == p && tmp[k].layer == layer) dl->batches[w++] = tmp[k];
    }
    dl->passStart[CPA_PASS_COUNT] = w; dl->nBatches = w;
    free(tmp);

    if (opts->includeSprites) for (uint32_t i = 0; i < s->nSprites; i++) {
        const CpaSprite *sp = &s->sprites[i];
        if (sp->isActor && !opts->includeActors) continue;
        CpaDrawSprite *o = &dl->sprites[dl->nSprites++]; uint8_t cull;
        o->src = i; memcpy(o->pos, sp->pos, 12); o->sizeX = sp->sizeX; o->sizeY = sp->sizeY; o->texVa = sp->texVa;
        classify(sp->alphaClass, &o->pass, &o->blend, &o->alphaTest, &cull);   /* sprite pass is INFERRED from the material class only */
        o->wrapU = sp->tileU ? 1 : 0; o->wrapV = sp->tileV ? 1 : 0; o->isActor = sp->isActor;
    }
    return 1;
}

void cpa_drawlist_free(CpaDrawList *dl) { free(dl->batches); free(dl->sprites); memset(dl, 0, sizeof *dl); }

typedef struct { double key; CpaBatch b; } SortRec;
static int cmp_rec(const void *pa, const void *pb) {
    const SortRec *a = pa, *b = pb;
    if (a->key != b->key) return a->key > b->key ? -1 : 1;     /* far (large depth) first */
    if (a->b.layer != b->b.layer) return a->b.layer < b->b.layer ? -1 : 1;
    return a->b.seq < b->b.seq ? -1 : a->b.seq > b->b.seq;
}

void cpa_drawlist_sort_translucent(CpaDrawList *dl, const CpaCamera *cam) {
    uint32_t a = dl->passStart[CPA_PASS_TRANSLUCENT], b = dl->passStart[CPA_PASS_TRANSLUCENT + 1], n = b - a;
    if (n < 2) return;
    const CpaScene *s = dl->scene; SortRec *r = malloc(n * sizeof *r);
    if (!r) return;
    /* key per ITEM (not per batch) so that layer 2 shares the depth of its base */
    for (uint32_t i = 0; i < n; i++) {
        const CpaBatch *bt = &dl->batches[a + i]; double sum = 0; uint32_t cnt = bt->vertCount;
        for (uint32_t v = 0; v < cnt; v++) { const float *P = &s->pos[3 * (size_t)(bt->firstVert + v)];
            sum += (double)cam->fwd[0] * (P[0] - cam->pos[0]) + (double)cam->fwd[1] * (P[1] - cam->pos[1]) + (double)cam->fwd[2] * (P[2] - cam->pos[2]); }
        r[i].key = cnt ? sum / cnt : 0.0; r[i].b = *bt;
    }
    qsort(r, n, sizeof *r, cmp_rec);
    for (uint32_t i = 0; i < n; i++) dl->batches[a + i] = r[i].b;
    free(r);
}

void cpa_sprite_quad(const CpaCamera *cam, const CpaDrawSprite *sp, float halfExtentScale, float c[12]) {
    float hx = sp->sizeX * halfExtentScale, hy = sp->sizeY * halfExtentScale;
    /* left axis = screen left; TL = pos + left*hx + up*hy, TR = pos - left*hx + up*hy, ... */
    for (int k = 0; k < 4; k++) {
        float sl = (k & 1) ? -hx : hx, su = (k & 2) ? -hy : hy;
        for (int j = 0; j < 3; j++) c[3 * k + j] = sp->pos[j] + cam->left[j] * sl + cam->up[j] * su;
    }
}
