/* cpa_vis: which sectors / SuperObjects (IPOs) the original engine submits for a camera. Portable C99, no GL, no globals, no guest-RAM knowledge.
 *
 * This is the library form of the predictor in tools/cpa_tests/vis_predict.c; the rule, its derivation from the lifted game code (f_8c04b7e0 -> f_8c05f4a0 -> f_8c05f026 -> f_8c09a060 -> f_8c0ab4c6,
 * frustum f_8c084d00) and the evidence are in re_analysis/dc/notes_visibility.md. Evidence tags: VERIFIED = reproduced against a guest function-entry trace of the recompiled game (oracle) by running,
 * CODE = read from the lifted code but not exercised by the captures, INFERRED = fits data only, DESIGN = our choice.
 *
 *   VERIFIED  IPO submit set: 1433 / 1433 IPOs over 7 levels x 12 scenes (84 scenes, 42 distinct camera poses), precision 100%, recall 100%, with the current sector taken from the game and with the
 *             sector found by cpa_vis_find_sector (the latter: sector list equal to the game's in 80/84 scenes, IPO sets identical in 84/84; the 4 differing Rodeo_60 scenes have two overlapping
 *             sectors of equal priority, the game picked the larger one, the tie-break here picks the one whose box centre is closer).
 *   VERIFIED  considered sectors = current sector S + its direct neighbours (kind != 2); NOT transitive. Removing the neighbours drops recall to 51.7%, removing the box test drops precision to 46.8%,
 *             ignoring the SuperObject flag words drops precision to 95.0% (ablations on the same 84 scenes).
 *   CODE      kind-2 neighbours (only considered when the engine debug byte is 1; never occurs in the captures), the sector far value at data+0x60 (0.0 in all captures: the fade branch of the frustum test
 *             is not modelled), nodes with flag 0x200 that are box-rejected, an f2c word without bit 0x800000, matrices of type other than 1/2.
 *   INPUTS    (dynamic game state that this library does not predict) the camera (position, U, F), the four viewport side planes + near distance, the current sector or the player position
 *             (cpa_vis_find_sector reproduces f_8c09458c; the actual search point the game uses is UNKNOWN, the actor's global translation works in 80/84 scenes), and the draw mask (0xFFFFFFFF in all captures).
 *   NOT       actors / dynamic world draws (200..497 extra f_8c0ab4c6 calls per level, SO pointers outside the level image), triangle / material level culling inside a submitted IPO, Rayman's sub-objects.
 *   RESIDUAL  52 of the 1433 submitted IPOs (Helic_30 10, Whale_10 42) have on-screen front-facing triangles but no triangle in the oracle TA stream: the game submits them, the loss happens below the
 *             IPO level (not decoded). A renderer that culls by this predictor therefore draws a (small) superset of what the game rasterises, never a subset.
 *
 * Image requirements: the level DAT must be region 0 of the CpaImage (father sector = level header word 16), the SuperObjects are read through the image (bounds-checked), nothing is cached across calls. */
#ifndef CPA_VIS_H
#define CPA_VIS_H

#include "cpa_image.h"
#include "cpa_camera.h"

struct CpaScene;

/* ---------------- frustum ----------------
 * Five planes through/near the camera C: n . (X - C) <= d is inside; four side planes (d = 0 in every capture) + the near plane (n = -F, d = -near). A box is rejected iff it lies completely outside one plane
 * (the box corner most inside that plane is still outside). VERIFIED against the lifted f_8c084d00: 0 mismatches in 16000 random boxes on 4 dumps. */
typedef struct CpaVisFrustum { float C[3]; float n[5][3]; float d[5]; } CpaVisFrustum;

/* Generic form = what the game stores in its viewport struct: side[k] = {vx, vy, vz, d} in CAMERA space (x = left row L, y = up row U, z = forward row F), world normal n = -vx*L + vy*U + vz*F with
 * L = U x F. up/fwd are used as given (not re-normalised). The order of the four planes is irrelevant. nearDist = viewport near distance (0.25 in every capture). */
void cpa_vis_frustum_from_planes(CpaVisFrustum *f, const float pos[3], const float up[3], const float fwd[3], const float side[4][4], float nearDist);
/* Symmetric-camera derivation: half-angles hHalf (left/right), upHalf, downHalf in radians; side normals (-+cos h, 0, -sin h), (0, cos u, -sin u), (0, -cos d, -sin d), d = 0.
 * VERIFIED equal to the numbers in the game's viewport struct (-+0.8253, 0, -0.5646 for h = 0.6 = hfov/2; 0.9004, 0.435 for u = d = 0.45 = hfov*ratio/2 in the steady state).
 * Using cam->hfov/2 for hHalf and cam->hfov*cam->vfovRatio/2 for both vertical half angles is therefore the steady-state frustum. At level start the game uses different (asymmetric, smaller)
 * vertical half angles for a while (0.419 / 0.282 rad seen; cause UNKNOWN, notes_visibility.md 3.5): pass them explicitly if known, otherwise the predicted set is a superset near the bottom of the screen. */
void cpa_vis_frustum_from_camera(CpaVisFrustum *f, const CpaCamera *cam, float hHalf, float upHalf, float downHalf);
/* 1 = box intersects/inside, 0 = completely outside one plane. */
int  cpa_vis_box_test(const CpaVisFrustum *f, const float mn[3], const float mx[3]);

/* ---------------- current sector ---------------- */
/* Father sector of all sectors = level header word 16 (VERIFIED: parent of every sector); 0 if the image has no level region. */
uint32_t cpa_vis_level_father(const CpaImage *im);
/* Lifted f_8c09458c: among the children of `father` whose data box (data+0x48 min .. data+0x54 max, inclusive) contains pos, two groups by the byte data+0x64 (== 0 first, != 0 second); the winner of a group has
 * the highest int8 priority at data+0x67 (initial best 0), ties by the smaller distance of pos to the box centre (first child wins an exact tie); result = group-0 winner, else group-1 winner, else the LAST
 * child of the father, else 0. CODE for the host override word (non-zero forces a sector; 0 in all dumps) which is not modelled. */
uint32_t cpa_vis_find_sector(const CpaImage *im, uint32_t father, const float pos[3]);

/* ---------------- predictor ---------------- */
typedef struct CpaVisOpts {
    uint32_t mask;              /* draw mask (game global 0x8C123B68; 0xFFFFFFFF in every capture); default 0xFFFFFFFF */
    int ignoreFlags;            /* ablation: ignore SO flag words +0x2C/+0x30 (precision 95.0%) */
    int ignoreFrustum;          /* ablation: every box accepted (precision 46.8%) */
    int ignoreNeighbours;       /* ablation: current sector only (recall 51.7%) */
    int allowKind2;             /* neighbours of kind 2 are considered (the engine's debug byte == 1; CODE) */
} CpaVisOpts;
void cpa_vis_opts_default(CpaVisOpts *o);

typedef struct CpaVisInput {
    uint32_t sector;            /* current sector SuperObject (type 4). 0 = derive from pos */
    int      hasPos;            /* pos valid (used only if sector == 0) */
    float    pos[3];            /* player position (global matrix translation of the main actor, INFERRED search point) */
    uint32_t father;            /* father sector for the lookup; 0 = cpa_vis_level_father(im) */
    const CpaVisFrustum *frustum;   /* required unless opts.ignoreFrustum */
} CpaVisInput;

typedef struct CpaVis {
    uint32_t sector;                        /* current sector actually used (0 if none) */
    uint32_t *sectors; uint32_t nSectors;   /* considered sectors, in game order: current sector first, then neighbours */
    uint32_t *drawn; uint32_t nDrawn;       /* every SuperObject the game would pass to f_8c0ab4c6 (any type: sectors, IPOs, ...), in traversal order */
    uint32_t *drawnMask;                    /* draw mask in force at each drawn[] entry */
    uint32_t *visited; uint32_t nVisited;   /* SuperObjects entered by f_8c09a060 (drawn or not) */
    uint32_t *ipos; uint32_t nIpos;         /* drawn SuperObjects of type CPA_SO_IPO, sorted ascending (binary search key for cpa_vis_ipo_visible) */
} CpaVis;

/* Returns 1 on success (also if the sector list is empty because the current sector has no valid data), 0 if no current sector can be determined or on allocation failure; *out is then empty. */
int  cpa_vis_predict(CpaVis *out, const CpaImage *im, const CpaVisInput *in, const CpaVisOpts *opts);
void cpa_vis_free(CpaVis *v);
/* 1 iff the IPO SuperObject `ipoVa` is in the predicted submit set. */
int  cpa_vis_ipo_visible(const CpaVis *v, uint32_t ipoVa);

/* ---------------- triangle -> IPO ownership and draw-list culling ----------------
 * CpaScene triangles are merged across IPOs (draw items are per texture), so the IPO of a static triangle is recovered from the level image: the world position of every vertex of every IPO geometry is
 * recomputed with the loader's float arithmetic (same matrix chain), and a scene triangle belongs to every IPO whose vertex table contains all three of its world positions bit-exactly (duplicate geometry in
 * several IPOs gives several owners). This relies on cpa_scene.c's arithmetic staying identical (it does today: 100% of static triangles of Learn_10 are owned, test_vis checks). */
typedef struct CpaVisTriMap { void *a; uint32_t n, cap; } CpaVisTriMap;
int  cpa_vis_trimap_build(CpaVisTriMap *m, const CpaImage *im);     /* 1 on success (also for an image without IPOs) */
void cpa_vis_trimap_free(CpaVisTriMap *m);
/* Owners of the triangle with world positions p9 (9 floats): distinct IPO VAs (and their sector SuperObject VAs) into ipo[] / sector[] (either may be NULL), at most `max`; returns the count (0 = unknown). */
uint32_t cpa_vis_trimap_owners(const CpaVisTriMap *m, const float p9[9], uint32_t *ipo, uint32_t *sector, uint32_t max);

/* Keep masks for a scene: tri[t] (t = firstVert/3 + k of the scene's triangle list) and sprite[i]. A static triangle is dropped iff it has owners and none is in the predicted set; triangles without owner,
 * actor geometry and sprites of non-IPO SuperObjects are always kept (we have no prediction for them). */
typedef struct CpaVisCull {
    uint8_t *tri; uint32_t nTri;
    uint8_t *sprite; uint32_t nSprite;
    uint32_t nTriCulled, nTriUnowned, nSpriteCulled;
} CpaVisCull;
int  cpa_vis_cull_build(CpaVisCull *c, const CpaVis *v, const CpaVisTriMap *m, const struct CpaScene *s);   /* 1 on success, 0 on allocation failure */
void cpa_vis_cull_free(CpaVisCull *c);

#endif
