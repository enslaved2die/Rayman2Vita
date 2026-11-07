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
 * Textures: CpaTexStore (below) decodes the level + FIX .TEX natively (cpa_tex, VERIFIED byte-exact) and serves them through opts.describe; pass/blend follow tex.flags (flagRule), wrap modes come
 * from the .TEX header wrap byte (MEASURED against the oracle TSP bits). Layer 2 draws with a SUBSTITUTE bump texture (INFERRED) - the real per-polygon bump lighting is not reproduced.
 * Vertex colours (cpa_light.h): static geometry from the level RLI + VisualMaterial (VERIFIED, lightcmp_static: 100% of the matched vertices of 7 levels, with the additive distance fade);
 * posed actors from the sector light stack (parallel, ambient and omni lights, per-actor selection and object transparency objAlpha, 83-100% exact ARGB per level; spot / type-5 lights: code-read port, no capture contains one), see re_analysis/dc/notes_lighting.md.
 * NOT modelled (honest list, see shadow report): omni / spot lights, fog (offset colour), shadows, particles/HUD quads, the real layer-2 bump coefficients and noise, animated-texture live frame
 * (native binds the load-time head frame), live moving static IPOs. */
#ifndef CPA_RENDER_H
#define CPA_RENDER_H

#include "cpa_drawlist.h"
#include "cpa_anim.h"
#include "cpa_tex.h"
#include "cpa_light.h"
#include "cpa_hud.h"

/* ---------------- frame output ---------------- */
typedef struct CpaRenderVertex {
    float x, y, z, u, v;        /* world space (raw engine axes) */
    uint8_t r, g, b, a;         /* vertex colour = the ARGB the game writes into the TA stream (cpa_light.h), unpacked; 24 bytes per vertex. Layer-2 draws carry opaque white (their real colours are the
                                   bump coefficients, UNKNOWN); sprites carry white */
} CpaRenderVertex;
enum { CPA_SRC_STATIC = 0, CPA_SRC_ACTOR = 1, CPA_SRC_SPRITE = 2 };

typedef struct CpaRenderDraw {
    uint32_t first, count;      /* into CpaRenderFrame.verts, triangle list */
    uint32_t texVa;             /* texture struct VA; 0 = untextured; CPA_TEXVA_BUMP_MIP / CPA_TEXVA_BUMP on layer-2 draws (substitute bump noise, see below) */
    uint8_t  pass;              /* CpaPass */
    uint8_t  blend;             /* CpaBlendMode */
    uint8_t  alphaTest;
    uint8_t  cullBack;          /* 1: cull faces with positive cpa_screen_area2 (back); 0: two-sided */
    uint8_t  wrapU, wrapV;      /* CPA_WRAP_*: 0 clamp, 1 repeat, 2 mirror (from the .TEX header wrap bits when a CpaTexStore is attached, else repeat) */
    uint8_t  layer;             /* 0 base, 1 second texture layer */
    uint8_t  layerTexUnknown;   /* layer 2: the real texture is a resident bump map generated per boot; texVa is a SUBSTITUTE (INFERRED) */
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
    uint32_t texturesMissing, drawsTexMissing;                       /* with a CpaTexStore attached: distinct texVa (and draws using one) that do not resolve to a .TEX chunk (layer 2 excluded) */
    uint32_t passByFlags;                                            /* source batches whose pass/blend came from tex.flags (flag rule) instead of the drawlist's alphaClass */
    uint32_t haveVis, visSector, visNIpos;
    uint32_t hudQuads, hudTranslucent, hudAdditive, hudTexMissing;   /* HUD pass: quads, of those translucent / additive, and quads whose texture does not resolve in the store */
    /* stage timers in microseconds (only filled when CpaRenderOpts.now_us is set): visibility + cull, static batches, actor pose, actor lighting selection, actor geometry (vertex transform + vertex colours), sprites, sort/merge/vertex stream, HUD */
    uint32_t usVis, usStatic, usPose, usLight, usActorGeo, usSprites, usVerts, usHud;
} CpaRenderStats;

/* HUD quad as submitted to the backend's 2D pass: the cpa_hud quad plus the state the guest's 2D path gives it. Drawn AFTER all 3D passes in the 640x480 virtual ortho space
 * (x right, y down), no depth test, vertex order A,B,C,D = triangle strip, in list order (= guest submission order). pass/blend from the texture flags and vertex alpha
 * (cpa_hud_pass: translucent iff flags & 0x2A or alpha < 0.98; additive iff flags & 0x20); wrap from the texture store (clamp when unknown). */
typedef struct CpaRenderHud { CpaHudQuad q; uint8_t pass, blend, wrapU, wrapV; } CpaRenderHud;

typedef struct CpaRenderFrame {
    CpaCamera cam; int w, h; CpaFit fit;
    CpaRenderHud *hud; uint32_t nHud;            /* HUD quads (2D pass), empty when CpaFrameInput.hud was NULL */
    CpaRenderVertex *verts; uint32_t nVerts;
    CpaRenderDraw *draws; uint32_t nDraws;
    uint8_t *triSource;                          /* per triangle (vertex index / 3): CPA_SRC_*; diagnostics, one byte per triangle */
    uint32_t passStart[CPA_PASS_COUNT + 1];      /* draws[passStart[p] .. passStart[p+1]) belong to pass p */
    CpaRenderStats st;
} CpaRenderFrame;

/* ---------------- inputs ---------------- */
#define CPA_RENDER_MAXLIGHTS 16
typedef struct CpaRenderActor {
    uint32_t soVa;              /* Actor SuperObject (type 2) */
    unsigned anim, frame;       /* animation index (H0) and absolute frame, i.e. cpa_anim_cur() of the guest */
    float    matrix[16];        /* actor-to-world, row vectors (the guest's global matrix of the SuperObject, SO+0x24) */
    uint32_t sectorSO;          /* Sector SuperObject (type 4) whose actor list (data+0) holds this actor, 0 = unknown. When set (and actorImg readable), the actor is lit by cpa_light_sector_lights(sectorSO)
                                   + cpa_light_for_actor instead of filtering the frame's RAM light list (VERIFIED selection, notes_lighting.md section 5). cpa_render_input_from_ram fills it */
} CpaRenderActor;

typedef struct CpaFrameInput {
    CpaCamera cam;
    int w, h; CpaFit fit;                 /* output viewport (only stored in the frame; the builder itself is resolution independent) */
    int hasFrustum; CpaVisFrustum frustum;/* hasFrustum = 0: steady-state symmetric frustum from cam (cpa_vis_frustum_from_camera, VERIFIED equal to the game's numbers in steady state) */
    uint32_t sector; int hasPos; float pos[3];   /* as CpaVisInput: current sector, or the player position (sector found by cpa_vis_find_sector); neither -> NO visibility culling */
    uint32_t drawMask; int allowKind2;    /* cpa_vis draw mask (0 = default 0xFFFFFFFF) and engine debug byte == 1 */
    const CpaRenderActor *actors; uint32_t nActors;
    const CpaImage *actorImg;             /* image the actors' tables/geometry are read from: NULL = scene->img (unposed-capable DAT data only) ; the guest RAM image for live actors */
    uint32_t nLights; CpaLight lights[CPA_RENDER_MAXLIGHTS];   /* light list for actors (cpa_light.h); empty = actors get the ambient-only colour of their material */
    float sceneAlpha; int hasSceneAlpha;  /* g = guest 0x8C2E24CC (distance-fade alpha of the visibility test, cpa_light_dist_alpha) for the actors with SuperObject-flag 0x200000; hasSceneAlpha = 0 -> 1.0 */
    const CpaHudFrame *hud;               /* optional 2D layer (cpa_hud_build of the same RAM image); copied into the frame. NULL = no HUD */
    CpaLightFade fade;                    /* distance fade of additive static geometry (cpa_light.h); .enabled = 0 = off. Source of the parameters UNKNOWN (runtime state), see cpa_light.h */
} CpaFrameInput;

typedef struct CpaTexDesc {
    uint32_t texVa;
    uint16_t width, height;     /* 0 if unknown */
    uint16_t pvrFmt;            /* CpaTexInfo.pvrFmt, 0 if unknown */
    const uint8_t *rgba;        /* tightly packed RGBA8 pixels (R in the low byte of each u32), level 0 only, transparent-texel colour bleed already applied (cpa_tex_bleed, as the oracle's host decode);
                                   NULL when the embedder cannot decode: the backend then uses a grey placeholder */
    uint8_t  mip;               /* 1: the PVR carries a mip chain, the backend generates mipmaps from level 0 (the oracle's GL path does the same) */
    uint8_t  wrapU, wrapV;      /* default wrap of the texture from its .TEX header (CPA_WRAP_*); providers must fill them (a zeroed desc means clamp) */
    uint8_t  substitute;        /* 1 = layer-2 bump noise (INFERRED substitute for the per-boot generated resident texture) */
} CpaTexDesc;
/* Optional texture provider: fills `out` for a texture struct VA (return 0 = unknown texture). Called once per VA until cpa_render_ctx_forget_textures. */
typedef int (*CpaTexDescribeFn)(void *user, uint32_t texVa, CpaTexDesc *out);

/* ---------------- texture store: real textures for the draws ----------------
 * Level .TEX + FIX.TEX banks (cpa_texbank_*), keyed by texture struct VA. Decoded lazily to RGBA8 level 0 (+ cpa_tex_bleed), cached, handed to the backend through CpaTexDescribeFn.
 * Evidence: pixels VERIFIED byte-exact vs the oracle's TA decode (cpa_tex.h, test_tex); VA -> chunk mapping VERIFIED (level table 9374/9374, FIX table 280/280); wrap modes see
 * cpa_tex_wrap_modes. The layer-2 bump textures are a SUBSTITUTE (INFERRED, see CPA_TEXVA_BUMP). */
enum { CPA_WRAP_CLAMP = 0, CPA_WRAP_REPEAT = 1, CPA_WRAP_MIRROR = 2 };
#define CPA_TEXVA_BUMP_MIP 0xFFFFB001u   /* layer 2, overlayMode 1: resident 64x64 bump map with mips (oracle tcw 0xA0050000). Not a guest address. */
#define CPA_TEXVA_BUMP     0xFFFFB002u   /* layer 2, overlayMode 2 and 3: resident 64x64 bump map, no mips (oracle tcw 0x20050558) */

/* .TEX header wrap byte (tex+0x18 after load, cpa_tex_postload) -> per-axis wrap mode of the texture object. */
void cpa_tex_wrap_modes(uint8_t wrapByte, uint8_t *wrapU, uint8_t *wrapV);

typedef struct CpaTexEntry {
    uint32_t va; uint16_t w, h, pvrFmt; uint8_t mip, isFix, wrapByte, wrapU, wrapV;
    uint32_t raw, flags;        /* PVR header word, post-load tex.flags (cpa_tex_postload) */
    const CpaTexBank *bank; uint32_t chunk;
    uint32_t *rgba;             /* decoded level 0 (lazy; freed by cpa_texstore_trim) */
    int8_t   state;             /* 0 not decoded, 1 decoded, -1 decode failed */
} CpaTexEntry;
typedef struct CpaTexStore {
    CpaTexBank bank[2];         /* 0 level, 1 FIX */
    CpaTexEntry *e; uint32_t n;                 /* sorted by va */
    uint32_t nLevel, nFix; int levelOk, fixOk;
    uint32_t *bumpRgba[2]; uint32_t nDecoded, nDecodeFail;
    char levelName[32];
} CpaTexStore;
/* Set level name for HD texture override matching */
void cpa_texstore_set_level_name(CpaTexStore *s, const char *name);
/* Loads both banks. sc (may be NULL) gets cpa_scene_apply_tex with the post-load flags of BOTH banks, so pass classification uses the values the running game has (the DAT image holds
 * pre-load values). Any of lvlTex / fixDat / fixTex may be NULL (that bank is then empty). Returns 1 iff the level bank matched the DAT table and every chunk of both banks parsed. */
int  cpa_texstore_load(CpaTexStore *s, CpaScene *sc, const uint8_t *lvlTex, size_t lvlTexN, const uint8_t *fixDat, size_t fixDatN, const uint8_t *fixTex, size_t fixTexN);
void cpa_texstore_free(CpaTexStore *s);
const CpaTexEntry *cpa_texstore_find(const CpaTexStore *s, uint32_t va);   /* no decode; the layer-2 substitutes are not entries */
const uint32_t *cpa_texstore_pixels(CpaTexStore *s, uint32_t va);          /* decode level 0 on first use; NULL if unknown / failed. Also serves CPA_TEXVA_BUMP* (64x64) */
void cpa_texstore_trim(CpaTexStore *s);                                    /* drop cached pixels (after upload); re-decoded on demand */
int  cpa_texstore_describe(void *store, uint32_t texVa, CpaTexDesc *out);  /* CpaTexDescribeFn; out->rgba valid until cpa_texstore_trim / free */

typedef struct CpaRenderOpts {
    int useVis;                 /* default 1 */
    int includeLayer2;          /* default 1 */
    int includeSprites;         /* default 1 */
    int actorMode;              /* 0 none, 1 all posed actors with bbox frustum test (default), 2 additionally require the actor SO in the predicted drawn set */
    int sortTranslucent;        /* default 1 */
    int mergeOpaque;            /* default 1: state-sort + merge opaque/cutout; 0 keeps scene order (and merges only adjacent identical states) */
    int cutoutAsTranslucent;    /* default 1: material class cutout (flag 0x10) is placed in the translucent pass with alpha blend, two-sided. VERIFIED against the oracle in shadow runs: all matched cutout-class
                                   triangles are in TA list 2 (translucent), none in list 4 (Learn_10 393/393, Jail_10 926/926); the cpa_drawlist.h 'punch-through' guess is not supported by the captures */
    int flagRule;               /* default 1: pass/blend of every textured batch from tex.flags: flags & 0x2A -> translucent list (0x20 additive, else alpha blend), cutout (0x10) in the translucent pass
                                   too (cutoutAsTranslucent), everything else opaque. List rule VERIFIED: flags 0 -> list 0 (3364/3364 strips), flags != 0 -> list 2 (1832/1832) in 5 scenes; the 0x2A mask is the
                                   guest's own test in FUN_8c037700 (INFERRED from reading). Over all 9654 shipped textures flags != 0 <=> flags & 0x2A. 0 = the drawlist's alphaClass classes (older behaviour) */
    int useLighting;            /* default 1: vertex colours from cpa_light (static: RLI + material; actors: light list). 0: every vertex opaque white (the pre-N1-lighting behaviour) */
    int useFade;                /* default 1: apply CpaFrameInput.fade to additive static geometry */
    int animMode;               /* cpa_anim mode, default CPA_ANIM_BEST */
    float spriteHalfScale;      /* default 0.5 (sizeX/sizeY taken as full sizes; UNVERIFIED) */
    CpaTexDescribeFn describe; void *describeUser;
    uint64_t (*now_us)(void);   /* optional monotonic microsecond clock for the per-stage timers in CpaRenderStats (NULL = timers stay 0) */
} CpaRenderOpts;
void cpa_render_opts_default(CpaRenderOpts *o);

/* ---------------- backend interface ----------------
 * begin_frame receives the whole vertex stream (valid until end_frame returns) so a backend can upload/point once; draws then arrive in pass order (opaque, cutout, translucent). */
typedef struct CpaRenderBackend {
    void *user;
    void (*begin_frame)(void *user, const CpaRenderFrame *f);
    void (*upload_texture)(void *user, const CpaTexDesc *t);              /* once per texVa until forgotten */
    void (*draw)(void *user, const CpaRenderFrame *f, const CpaRenderDraw *d);
    void (*draw_hud)(void *user, const CpaRenderFrame *f);               /* optional: the whole 2D pass (f->hud[0..nHud)), called after the last 3D draw; textures are uploaded before the call */
    void (*end_frame)(void *user);
} CpaRenderBackend;

/* ---------------- context ---------------- */
typedef struct CpaRenderCtx {
    const CpaScene *scene; CpaRenderOpts opts;
    CpaVisTriMap tmap; int haveTmap;
    CpaAnimTables tables; int haveTables;
    uint32_t *texSeen; uint32_t nTexSeen, capTexSeen;
    CpaTexStore *store;         /* optional, see cpa_render_ctx_set_texstore */
} CpaRenderCtx;
/* Attach a texture store (must outlive the context): draw wrap modes come from it, texture misses are counted in the frame stats, and opts.describe/describeUser point at the store. NULL detaches. */
void cpa_render_ctx_set_texstore(CpaRenderCtx *c, CpaTexStore *store);
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
