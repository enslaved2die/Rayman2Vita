/* cpa_drawlist: flatten a CpaScene into renderer-agnostic, pass-ordered batches. No GL, no camera needed (a camera is only used by the optional translucent sort).
 * Batches REFERENCE the scene's vertex arrays (CpaScene.pos/uv, triangle lists, 3 verts per triangle): the scene must outlive the list. Layer-2 batches reuse the same
 * vertex range as their base batch and carry a UV rule instead of new UVs (cpa_overlay_uv semantics).
 *
 * Pass / state rules and their evidence (tools/cpa_tests/ta_compare.c, docs/NATIVE_ENGINE.md 'N1 gap closure' / 'N1 layer 2'):
 *   VERIFIED  matched oracle triangles by (alphaClass -> TA list): opaque -> list 0 (opaque) 43/43 in Learn_10 f1500; blend/additive/unknown -> list 2 (translucent) 24/24.
 *   VERIFIED  back faces: opaque-list oracle triangles never have a back-facing projection (0/1223 Jail_10 1401); translucent-list ones do (402/1016) => opaque one-sided, translucent two-sided.
 *   VERIFIED  overlayMode != 0 (VisualMaterial+0x149) <=> polygon is drawn a second time in the translucent list (1839/1839, 0 exceptions, 4 levels), after/with the base draw.
 *   INFERRED  cutout (alphaClass 0x10) -> punch-through list (list 4): no matched triangle of that class was ever observed in the captures available here, so pass, alpha-test and cull
 *             for cutout are by analogy (DC punch-through = alpha test), culling for cutout set to NONE (foliage/fences), UNVERIFIED.
 *   INFERRED  layer-2 culling = base material's culling (never measured separately); layer-2 blend = src-alpha/inv-src-alpha (TSP 0x949021DB / 0x9490A1DB, measured), its texture is a
 *             resident global texture that is NOT in the scene (batch.texVa == 0, layerTexUnknown == 1): a renderer may skip layer-2 batches until that texture is recovered.
 *   INFERRED  ordering inside a pass = scene (submission) order; the optional translucent depth sort is OUR choice (back to front by batch centroid), not oracle behaviour.
 *   UNVERIFIED actors: CpaDrawItem.isActor geometry is an unposed pile in cpa_scene (PLACEHOLDER pose). Excluded by default.
 * Visibility (sector/IPO culling) is NOT modelled: the oracle skips whole IPOs/sectors by a rule that is not decoded (docs 'N1 gap closure' d), so the list is the superset of what the game draws. */
#ifndef CPA_DRAWLIST_H
#define CPA_DRAWLIST_H

#include "cpa_scene.h"
#include "cpa_camera.h"

typedef enum { CPA_PASS_OPAQUE = 0, CPA_PASS_CUTOUT = 1, CPA_PASS_TRANSLUCENT = 2, CPA_PASS_COUNT = 3 } CpaPass;
typedef enum { CPA_BLEND_NONE = 0, CPA_BLEND_ALPHA, CPA_BLEND_ADD } CpaBlendMode;
typedef enum { CPA_UVRULE_NATIVE = 0,        /* uv as stored in CpaScene.uv */
               CPA_UVRULE_OVERLAY,           /* (K*u, K*v),     K = CPA_OVERLAY_UV_SCALE (overlayMode 1, 2) */
               CPA_UVRULE_OVERLAY_FLIPV } CpaUvRule; /* (K*u, K*(1-v)) (overlayMode 3) */

typedef struct CpaBatch {
    uint32_t firstVert, vertCount;  /* into CpaScene.pos / uv (triangle list) */
    uint32_t item;                  /* index into CpaScene.items this batch comes from */
    uint32_t texVa;                 /* texture struct VA (0 for layer 2: unknown global texture) */
    uint8_t  pass;                  /* CpaPass */
    uint8_t  blend;                 /* CpaBlendMode */
    uint8_t  alphaTest;             /* 1 = discard transparent texels (cutout) */
    uint8_t  cullBack;              /* 1 = back faces culled (screen area > 0, see cpa_screen_area2); 0 = two-sided */
    uint8_t  wrapU, wrapV;          /* 1 = repeat, 0 = clamp (INFERRED: cpa_scene tileU/tileV; unclear wrap -> repeat). Layer 2: repeat, UVs go up to 8x */
    uint8_t  layer;                 /* 0 = base, 1 = second texture layer */
    uint8_t  uvRule;                /* CpaUvRule */
    uint8_t  overlayMode;           /* raw VM+0x149 of the item */
    uint8_t  layerTexUnknown;       /* 1 on layer-2 batches */
    uint8_t  isActor;               /* placeholder-pose actor geometry (only present if opts.includeActors) */
    int8_t   alphaClass;            /* CPA_ALPHA_* of the item */
    uint32_t seq;                   /* position in scene order before pass sorting (stable order key) */
} CpaBatch;

/* Sprite element (type 3) as a camera-facing quad. Size semantics UNVERIFIED (0 of 45 Learn_10 sprites were attributed to an oracle quad). */
typedef struct CpaDrawSprite {
    uint32_t src;                   /* index into CpaScene.sprites */
    float    pos[3];
    float    sizeX, sizeY;          /* element +4/+8, see halfExtentScale in cpa_sprite_quad */
    uint32_t texVa;
    uint8_t  pass, blend, alphaTest, wrapU, wrapV, isActor;
} CpaDrawSprite;

typedef struct CpaDrawListOpts {
    int includeActors;      /* default 0 */
    int includeLayer2;      /* default 1 */
    int includeSprites;     /* default 1 */
} CpaDrawListOpts;

typedef struct CpaDrawList {
    const CpaScene *scene;
    CpaBatch *batches; uint32_t nBatches;
    uint32_t passStart[CPA_PASS_COUNT + 1];     /* batches[passStart[p] .. passStart[p+1]) belong to pass p */
    CpaDrawSprite *sprites; uint32_t nSprites;  /* drawn with the pass/state they carry, after the batches of the same pass (renderer's choice) */
    uint32_t nLayer2;
} CpaDrawList;

void cpa_drawlist_opts_default(CpaDrawListOpts *o);
/* Returns 1 on success (also for an empty scene), 0 on allocation failure. */
int  cpa_drawlist_build(CpaDrawList *dl, const CpaScene *s, const CpaDrawListOpts *opts);
void cpa_drawlist_free(CpaDrawList *dl);
/* Optional: reorder the TRANSLUCENT pass back to front by batch centroid depth along the camera forward axis; layer 2 of an item stays after its base. Stable. */
void cpa_drawlist_sort_translucent(CpaDrawList *dl, const CpaCamera *cam);
/* Camera-facing quad of a sprite, corners in order TL, TR, BL, BR (screen sense, strip order). halfExtentScale: 0.5 if sizeX/Y are full sizes, 1.0 if half sizes (UNVERIFIED). */
void cpa_sprite_quad(const CpaCamera *cam, const CpaDrawSprite *sp, float halfExtentScale, float corners[12]);

#endif
