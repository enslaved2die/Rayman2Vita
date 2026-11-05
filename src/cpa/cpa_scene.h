/* cpa_scene: renderer-agnostic scene decoded from a Dreamcast Rayman 2 level DAT (+ FIX.DAT).
 * Portable C99, no GL. Output is plain arrays + a draw list; any renderer can consume it.
 *
 * Provenance: clean-room re-statement of src/engine/r2_level_geo.c (GL removed), layouts from
 * tools/DC_LEVEL_FORMAT.md and re_analysis/dc/notes_{geometry,levels,pose}.md.
 * Tags: VERIFIED = decompile and/or data consistency test; INFERRED = fits data only.
 * Coordinates: raw engine axes (x,y,z), row-vector matrices (v' = v*M), translation in row 3 (INFERRED convention,
 * see notes). UVs are raw floats, not clamped (VERIFIED range u -4..11, v -11..13.8; v-flip is INFERRED, not applied).
 * Triangle winding: stored index order is CCW about the stored face normal (VERIFIED 8410/8410 tris, notes_geometry.md).
 */
#ifndef CPA_SCENE_H
#define CPA_SCENE_H

#include "cpa_image.h"

/* SuperObject types, VERIFIED (DC_LEVEL_FORMAT.md sec 4). */
enum { CPA_SO_WORLD = 1, CPA_SO_ACTOR = 2, CPA_SO_SECTOR = 4, CPA_SO_IPO = 0x20 };

/* Material class decoded from texture-struct flags (texture struct +4, bit31 always set in level data).
 * INFERRED (notes_levels.md c1): meanings correlated with texture-name suffixes, not read from the draw code.
 *   flag 0x20 -> additive, 0x40 -> blend, 0x10 -> cutout (alpha test), 0x08 -> blend, flags==0 -> opaque,
 *   anything else -> CPA_ALPHA_UNKNOWN (renderer should fall back to texel alpha). */
enum { CPA_ALPHA_UNKNOWN = -1, CPA_ALPHA_OPAQUE = 0, CPA_ALPHA_CUTOUT = 1, CPA_ALPHA_BLEND = 2, CPA_ALPHA_ADDITIVE = 3 };

/* Second texture layer (overlay pass). Evidence (tools/cpa_tests/ta_compare.c, docs/NATIVE_ENGINE.md 'N1 layer 2'): in every captured scene of 7 levels, a static
 * polygon is drawn a second time by the game if and only if the byte at VisualMaterial+0x149 of its material is non-zero (value 1..3). The second draw has the same
 * screen geometry, a different tcw (pixel-format field 4, shared across materials, i.e. NOT a texture stored in the material), the TA translucent list and UVs
 * equal to CPA_OVERLAY_UV_SCALE times the polygon's own UVs. The layer-2 texture itself, its blend values per mode and what the modes 1/2/3 select are not decoded. */
#define CPA_OVERLAY_UV_SCALE 8.0f
/* UV of the layer-2 draw from the polygon's own UV. Measured per overlayMode (ta_compare on the 12-scene captures of Learn_10, Bast_10, Rodeo_60, Whale_10: 1836 layer-2 draws, 0 exceptions): modes 1 and 2 -> (K*u, K*v);
 * mode 3 -> (K*u, K*(1-v)). Returns 0 and leaves the outputs untouched for overlayMode 0 or an unknown mode (> 3: never seen). */
static inline int cpa_overlay_uv(unsigned overlayMode, float u, float v, float *u2, float *v2) {
    if (overlayMode == 1 || overlayMode == 2) { *u2 = CPA_OVERLAY_UV_SCALE * u; *v2 = CPA_OVERLAY_UV_SCALE * v; return 1; }
    if (overlayMode == 3) { *u2 = CPA_OVERLAY_UV_SCALE * u; *v2 = CPA_OVERLAY_UV_SCALE * (1.0f - v); return 1; }
    return 0;
}

/* Draw item = a run of triangle-list vertices sharing one texture struct (merged across elements). */
typedef struct CpaDrawItem {
    uint32_t firstVert;      /* index into CpaScene.pos/uv (vertex units); 3 per triangle */
    uint32_t vertCount;
    uint32_t texVa;          /* DC texture struct VA (0 = untextured). Chain VERIFIED (280/280): element[0]->GameMaterial;
                                GameMaterial[0]->VisualMaterial; VisualMaterial[+0x4C]->texture struct. */
    uint32_t texFlags;       /* raw u32 at texVa+4 with bit31 stripped; valid iff texFlagsValid */
    uint8_t  texWrapByte;    /* raw byte at texVa+0x18; valid iff texFlagsValid */
    uint8_t  texFlagsValid;  /* 1 if bit31 of texVa+4 was set (VERIFIED: always set for level textures that have the struct filled) */
    uint8_t  tileU, tileV;   /* wrap decode, INFERRED (notes_levels.md): wrapByte<=3 only; bit1 = tile U, bit0 = tile V; else 1 (repeat) */
    uint8_t  wrapUnclear;    /* wrap byte >3 or flags absent: tileU/tileV default to repeat */
    int8_t   alphaClass;     /* CPA_ALPHA_*; see above (INFERRED) */
    uint8_t  isActor;        /* 1 = unposed non-Rayman actor part (positions are at the actor SO global matrix: PLACEHOLDER pose) */
    uint8_t  overlayMode;    /* raw byte at VisualMaterial+0x149; 0 = single pass. Non-zero = the polygons of this item are drawn a SECOND time (second texture
                                layer, UV x CPA_OVERLAY_UV_SCALE, translucent list). Correlation VERIFIED against the oracle TA stream, see the block comment
                                above CPA_OVERLAY_UV_SCALE; the meaning of the values 1/2/3 and the identity of the layer-2 texture are UNKNOWN (not in the material). */
} CpaDrawItem;

/* Rayman rig. Layout of animation tables H0..H9 = LEARN DAT header words 0..9 (VERIFIED, notes_geometry.md sec 3 / notes_pose.md). */
#define CPA_RIG_MAXCH 16
typedef struct CpaRigPart {
    uint32_t texVa, texFlags;
    uint8_t  texWrapByte, texFlagsValid, tileU, tileV, wrapUnclear;
    int8_t   alphaClass;
    uint32_t nTri;
    int      chan;                /* animation channel that moves this part */
    float   *lpos;                /* 9 floats / tri, channel-local space (static) */
    float   *uv;                  /* 6 floats / tri */
    float   *wpos;                /* 9 floats / tri, world space after cpa_rig_pose() */
} CpaRigPart;

typedef struct CpaRig {
    int      valid;
    uint32_t soVa, geoCount;
    uint32_t H[10];
    int      anim;                /* animation index (0 = Wait; VERIFIED ry_attente2 -> 0) */
    uint32_t nCh, nFrames, firstFrame, nKeys;
    int      obj[CPA_RIG_MAXCH];  /* ObjectsTable index per channel (VERIFIED chain, notes_pose.md) */
    uint32_t geo[CPA_RIG_MAXCH];
    float    fps; int fpsFromData;
    uint32_t animRefFrames;
    float    world[16];           /* placement (row vectors) */
    int      placement;           /* 0 = SO global matrix; 1 = header-word-25 block matrix (INFERRED spawn) */
    CpaRigPart *part; uint32_t nPart, nTris;
    float    pmin[3], pmax[3];    /* world bbox of last pose */
} CpaRig;

/* Sprite element (GeometricObject element type 3). One per element. Layout evidenced on 130 elements in 3 levels (Bast_10 53, Jail_10 32, Learn_10 45; all in
 * single-vertex, single-element actor geometries): [0] VisualMaterial* (NOT a GameMaterial: no extra indirection; VM+0x4C -> texture struct as for type 1),
 * [1] float sizeX, [2] float sizeY, [3] = 0x0000FFFF, [4] low u16 = 1. Roles of [3]/[4] and whether sizeX/Y are full sizes or half sizes are INFERRED
 * (see docs/NATIVE_ENGINE.md; the oracle comparison measures it). */
typedef struct CpaSprite {
    float    pos[3];         /* the geometry's single vertex through the owning SuperObject global matrix (actor: unposed, i.e. the actor SO placement) */
    float    sizeX, sizeY;   /* element +4 / +8 */
    uint32_t texVa;          /* as CpaDrawItem.texVa, via element[0] = VisualMaterial */
    uint32_t texFlags;
    uint8_t  texFlagsValid, tileU, tileV, wrapUnclear;
    int8_t   alphaClass;
    uint8_t  isActor;
    uint32_t geoVa;
    float    local[3];       /* the vertex before the SO matrix (geometry-local) */
    uint32_t soVa;           /* SuperObject the walk was at when it first reached this geometry (actor geometries are de-duplicated: other owners are not listed) */
} CpaSprite;

typedef struct CpaScene {
    /* draw list: triangle-list vertex arrays, world space (static IPOs: SO global matrix applied) */
    float       *pos;             /* 3 floats / vertex */
    float       *uv;              /* 2 floats / vertex */
    uint32_t     nVerts;
    CpaDrawItem *items;
    uint32_t     nItems;
    uint32_t     nTris;           /* all non-rig triangles (static + unposed actor) */
    uint32_t     nStaticTris, nActorTris;
    float        bmin[3], bmax[3];/* static geometry only */
    CpaRig       rig;
    CpaSprite   *sprites;         /* element type 3, non-rig (static IPOs and non-Rayman actors) */
    uint32_t     nSprites, nSpriteActor, nSpriteRig, nSpriteBad;   /* nSpriteRig: type-3 elements inside Rayman's rig (not exported); nSpriteBad: type 3 not matching the evidenced layout */

    /* walk statistics */
    uint32_t nSO, nSOWorld, nSOActor, nSOSector, nSOIpo, nSOOther;
    uint32_t nParentMismatch, nCountMismatch, nCycle, nUnreadable;
    uint32_t nIpo, nIpoMesh;
    uint32_t nMeshes, nElements, nElemSkipped;    /* all decoded GeometricObjects incl. actors & rig; elements seen */
    uint32_t nStaticMeshes;                       /* meshes from IPOs only */
    uint32_t nActors, nActorNoTable, nActorTblEntries, nActorNullPo, nActorBadChain, nActorDupGeo;
    uint32_t nActorGeos;                          /* unique non-Rayman actor GeometricObjects decoded */
    uint32_t nTexDistinct, nTexFlagUnclear, nTexWrapUnclear;
    uint32_t raymanSoVa;
    CpaImage img;                 /* copy of the image view (pointers only; buffers must outlive the scene) */
} CpaScene;

/* Root = VA of the World SuperObject (level DAT header word 13; VERIFIED type 1, parent NULL, 3 children).
 * `img` must have the level DAT as region 0 and FIX.DAT (optional but needed for global matrices/shared objects) after it.
 * Returns 1 if the root is a verified world node and at least one triangle was decoded. */
int  cpa_scene_load(CpaScene *out, const CpaImage *img, uint32_t rootVa);
/* Convenience: add both DATs to `img` (level first) with header-derived bases, read root from level header word 13, load.
 * Buffers must outlive the scene (rig posing re-reads them). */
int  cpa_scene_load_dats(CpaScene *out, CpaImage *img, const uint8_t *fix, size_t fixN, const uint8_t *lvl, size_t lvlN);
void cpa_scene_free(CpaScene *s);

/* Evaluate Rayman's animation at fractional frame ft in [firstFrame, firstFrame+nFrames-1] and fill rig part wpos.
 * Structure (table walk, quaternion decode, key/next-key t) VERIFIED against decompile; slerp/lerp itself INFERRED. */
void cpa_rig_pose(CpaScene *s, float ft);

#endif
