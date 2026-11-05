/* cpa_render: backend-agnostic per-frame builder for the native render path (milestone N1/N2 glue, strangler "shadow mode", docs/NATIVE_ENGINE.md sec. 6).
 * Portable C99, no GL, no globals. One call builds the COMPLETE draw list of a frame from a CpaScene (static level data from the DAT) plus per-frame inputs:
 * camera, player position / sector, and the live actors (SuperObject + guest animation state + actor matrix). The output is one interleaved world-space vertex stream
 * plus a short list of state-sorted draws; a backend (CpaRenderBackend, a struct of callbacks) consumes it. Nothing here reads guest RAM except the optional adapter
 * cpa_render_input_from_ram (marked SHADOW MODE ONLY below); a standalone game would fill CpaFrameInput from its own state.
 *
 * Pipeline per frame (evidence tags as in cpa_vis.h / cpa_drawlist.h: VERIFIED = reproduced against the oracle by running, INFERRED = fits data, DESIGN = our choice):
 *   1. visibility        cpa_vis_predict (VERIFIED 1433/1433 IPOs) -> keep masks -> cpa_drawlist_build (culled static batches, layer-2 batches, sprites).
 *   2. posed actors      for every CpaRenderActor: cpa_anim_rig_pose(CPA_ANIM_BEST) hierarchy (VERIFIED vertex-exact for the channels it covers, see cpa_anim.h), type-1 elements
 *                        through objM, texture via element -> GameMaterial -> VisualMaterial(+0x4C) (the chain VERIFIED for static elements, 280/280; applied to actor elements as is).
 *                        Whole-actor bbox is frustum-tested (DESIGN, conservative: never drops a visible actor). Optional filter by the predicted drawn set (opts.actorMode 2, INFERRED).
 *   3. sprites           element type 3 -> camera-facing quad (size semantics UNVERIFIED, opts.spriteHalfScale).
 *   4. pass sort/merge   opaque + cutout: free reorder, sorted by (texture,state) and merged (DESIGN: depth test makes the order irrelevant for opaque, fewer GL draws than the
 *                        oracle's submission order); translucent: back to front by batch centroid (DESIGN, INFERRED order in the oracle = submission order), layer 2 after its base,
 *                        only adjacent identical states are merged.
 * NOT modelled (honest list, see shadow report): vertex colours / lighting, fog, shadows, particles/HUD quads, texture pixels (PVR decode is not in src/cpa; the backend gets the
 * texture VA + the .TEX header info and, if the embedder supplies it, pixels), the layer-2 texture (unknown global), animated-texture live frame for STATIC items, live moving static IPOs. */
#ifndef CPA_RENDER_H
#define CPA_RENDER_H

#include "cpa_drawlist.h"
#include "cpa_anim.h"

/* ---------------- frame output ---------------- */
typedef struct CpaRenderVertex { float x, y, z, u, v; } CpaRenderVertex;      /* world space (raw engine axes), 20 bytes */
enum { CPA_SRC_STATIC = 0, CPA_SRC_ACTOR = 1, CPA_SRC_SPRITE = 2 };

typedef struct CpaRenderDraw {
    uint32_t first, count;      /* into CpaRenderFrame.verts, triangle list */
    uint32_t texVa;             /* texture struct VA; 0 = layer-2 (unknown global texture) or untextured */
    uint8_t  pass;              /* CpaPass */
    uint8_t  blend;             /* CpaBlendMode */
    uint8_t  alphaTest;
    uint8_t  cullBack;          /* 1: cull faces with positive cpa_screen_area2 (back); 0: two-sided */
    uint8_t  wrapU, wrapV;      /* 1 repeat, 0 clamp */
    uint8_t  layer;             /* 0 base, 1 second texture layer */
    uint8_t  layerTexUnknown;
    uint32_t nSrc;              /* number of source batches merged into this draw */
    uint32_t nSrcKind[3];       /* of those, per CPA_SRC_* */
} CpaRenderDraw;

typedef struct CpaRenderStats {
    uint32_t trisPass[CPA_PASS_COUNT];
    uint32_t trisStatic, trisActor, trisSprite, trisLayer2;          /* layer-2 triangles are also inside trisPass[TRANSLUCENT] and NOT in trisStatic */
    uint32_t srcBatches;                                             /* batches before merge: drawlist batches + actor element batches + sprites */
    uint32_t staticBatches, actorBatches, spriteQuads;
    uint32_t nDraws, drawsPass[CPA_PASS_COUNT];
    uint32_t staticTrisCulled;                                       /* dropped by the visibility prediction */
    uint32_t actorsGiven, actorsPosed, actorsFailed, actorsBboxCulled, actorsVisCulled, actorsDrawn;
    uint32_t actorElemSkipped;
    uint32_t texturesUsed;                                           /* distinct texVa in the draws (layer 2 excluded) */
    uint32_t haveVis, visSector, visNIpos;
} CpaRenderStats;

typedef struct CpaRenderFrame {
    CpaCamera cam; int w, h; CpaFit fit;
    CpaRenderVertex *verts; uint32_t nVerts;
    CpaRenderDraw *draws; uint32_t nDraws;
    uint8_t *triSource;                          /* per triangle (vertex index / 3): CPA_SRC_*; diagnostics, one byte per triangle */
    uint32_t passStart[CPA_PASS_COUNT + 1];      /* draws[passStart[p] .. passStart[p+1]) belong to pass p */
    CpaRenderStats st;
} CpaRenderFrame;

/* ---------------- inputs ---------------- */
typedef struct CpaRenderActor {
    uint32_t soVa;              /* Actor SuperObject (type 2) */
    unsigned anim, frame;       /* animation index (H0) and absolute frame, i.e. cpa_anim_cur() of the guest */
    float    matrix[16];        /* actor-to-world, row vectors (the guest's global matrix of the SuperObject, SO+0x24) */
} CpaRenderActor;

typedef struct CpaFrameInput {
    CpaCamera cam;
    int w, h; CpaFit fit;                 /* output viewport (only stored in the frame; the builder itself is resolution independent) */
    int hasFrustum; CpaVisFrustum frustum;/* hasFrustum = 0: steady-state symmetric frustum from cam (cpa_vis_frustum_from_camera, VERIFIED equal to the game's numbers in steady state) */
    uint32_t sector; int hasPos; float pos[3];   /* as CpaVisInput: current sector, or the player position (sector found by cpa_vis_find_sector); neither -> NO visibility culling */
    uint32_t drawMask; int allowKind2;    /* cpa_vis draw mask (0 = default 0xFFFFFFFF) and engine debug byte == 1 */
    const CpaRenderActor *actors; uint32_t nActors;
    const CpaImage *actorImg;             /* image the actors' tables/geometry are read from: NULL = scene->img (unposed-capable DAT data only) ; the guest RAM image for live actors */
} CpaFrameInput;

typedef struct CpaTexDesc {
    uint32_t texVa;
    uint16_t width, height;     /* 0 if unknown */
    uint16_t pvrFmt;            /* CpaTexInfo.pvrFmt, 0 if unknown */
    const uint8_t *rgba;        /* tightly packed RGBA8 pixels or NULL when the embedder cannot decode (PVR decode is not part of src/cpa yet): the backend then uses a placeholder */
} CpaTexDesc;
/* Optional texture provider: fills `out` for a texture struct VA (return 0 = unknown texture). Called once per VA until cpa_render_ctx_forget_textures. */
typedef int (*CpaTexDescribeFn)(void *user, uint32_t texVa, CpaTexDesc *out);

typedef struct CpaRenderOpts {
    int useVis;                 /* default 1 */
    int includeLayer2;          /* default 1 */
    int includeSprites;         /* default 1 */
    int actorMode;              /* 0 none, 1 all posed actors with bbox frustum test (default), 2 additionally require the actor SO in the predicted drawn set */
    int sortTranslucent;        /* default 1 */
    int mergeOpaque;            /* default 1: state-sort + merge opaque/cutout; 0 keeps scene order (and merges only adjacent identical states) */
    int cutoutAsTranslucent;    /* default 1: material class cutout (flag 0x10) is placed in the translucent pass with alpha blend, two-sided. VERIFIED against the oracle in shadow runs: all matched cutout-class
                                   triangles are in TA list 2 (translucent), none in list 4 (Learn_10 393/393, Jail_10 926/926); the cpa_drawlist.h 'punch-through' guess is not supported by the captures */
    int animMode;               /* cpa_anim mode, default CPA_ANIM_BEST */
    float spriteHalfScale;      /* default 0.5 (sizeX/sizeY taken as full sizes; UNVERIFIED) */
    CpaTexDescribeFn describe; void *describeUser;
} CpaRenderOpts;
void cpa_render_opts_default(CpaRenderOpts *o);

/* ---------------- backend interface ----------------
 * begin_frame receives the whole vertex stream (valid until end_frame returns) so a backend can upload/point once; draws then arrive in pass order (opaque, cutout, translucent). */
typedef struct CpaRenderBackend {
    void *user;
    void (*begin_frame)(void *user, const CpaRenderFrame *f);
    void (*upload_texture)(void *user, const CpaTexDesc *t);              /* once per texVa until forgotten */
    void (*draw)(void *user, const CpaRenderFrame *f, const CpaRenderDraw *d);
    void (*end_frame)(void *user);
} CpaRenderBackend;

/* ---------------- context ---------------- */
typedef struct CpaRenderCtx {
    const CpaScene *scene; CpaRenderOpts opts;
    CpaVisTriMap tmap; int haveTmap;
    CpaAnimTables tables; int haveTables;
    uint32_t *texSeen; uint32_t nTexSeen, capTexSeen;
} CpaRenderCtx;
/* scene must outlive the context. Builds the triangle ownership map once (a few ms to tens of ms per level). Returns 1 (visibility/actors degrade gracefully when the map or the tables are missing). */
int  cpa_render_ctx_init(CpaRenderCtx *c, const CpaScene *scene, const CpaRenderOpts *opts);
void cpa_render_ctx_free(CpaRenderCtx *c);
void cpa_render_ctx_forget_textures(CpaRenderCtx *c);

/* Returns 1 on success, 0 on allocation failure (frame then empty). */
int  cpa_render_build_frame(CpaRenderCtx *c, CpaRenderFrame *out, const CpaFrameInput *in);
void cpa_render_frame_free(CpaRenderFrame *f);
/* Push a frame to a backend. Texture uploads (new VAs only) happen between begin_frame and the first draw that needs them. Returns the number of draws issued. */
uint32_t cpa_render_submit(CpaRenderCtx *c, const CpaRenderFrame *f, const CpaRenderBackend *be);

/* ---------------- SHADOW MODE ONLY: guest-RAM adapter ----------------
 * Fills a CpaFrameInput from a guest RAM image (single region at 0x8C000000), with the same addresses ta_compare.c / vis_predict.c use (camera 0x8C00F300.., viewport via 0x8C123C40,
 * player 0x8C123CF8, mask 0x8C123B68, debug byte 0x8C124740; all VERIFIED there on 7 levels) and walks the SuperObject tree for type-2 actors with a live animation state
 * (cpa_anim_cur). *actors is malloc'ed (free it). Actors without a live state are not listed (counted in *nUnposed when non-NULL). Returns 1 iff a plausible camera was read. */
int cpa_render_input_from_ram(CpaFrameInput *in, CpaRenderActor **actors, uint32_t *nUnposed, const CpaImage *ram, const CpaScene *sc, const CpaAnimTables *T);

#endif
