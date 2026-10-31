/* Dreamcast Rayman 2 static level geometry: SuperObject-tree walk + mesh decode.
 * Layouts verified in tools/DC_LEVEL_FORMAT.md (ported from tools/dc_level_parse.c).
 * Reads the pristine DAT images by VA; no heuristic scanning, no synthesized data. */
#ifndef R2_LEVEL_GEO_H
#define R2_LEVEL_GEO_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct R2Geo_Image {
    uint32_t       base;   /* VA of file offset 0 */
    const uint8_t *p;
    size_t         n;
} R2Geo_Image;

typedef struct R2Geo_Batch {
    uint32_t first;   /* first vertex */
    uint32_t count;   /* vertex count (3 per triangle) */
    uint32_t texVa;   /* DC texture struct VA (0 = none) */
    unsigned int glTex;
    int alphaMode;    /* final pass: 0 opaque, 1 cutout (alpha test), 2 blend, 3 additive */
    int alphaSrc;     /* 0 = decoded texture flags (tex+4), 1 = texel-alpha fallback (flags unclear/absent) */
    int wrapS, wrapT; /* GL wrap enums from tex+0x18 (see R2Geo_ResolveTextures) */
    int isActor;      /* 1 = unposed actor part (PLACEHOLDER pile), hidden unless debug toggle on */
} R2Geo_Batch;

/* Posed Rayman (SO 0x8CBB07D0): local-space part elements re-transformed each frame from the animation tables. */
#define R2GEO_RIG_MAXCH 16
typedef struct R2Geo_RigElem {
    uint32_t tex; unsigned glTex; int alphaMode, alphaSrc, wrapS, wrapT;
    uint32_t nTri; int chan;
    float *lpos, *uv, *wpos;   /* 9 floats per tri (local), 6 per tri, 9 per tri (posed, world) */
} R2Geo_RigElem;
typedef struct R2Geo_Rig {
    bool     valid;
    uint32_t soVa, geoCount;
    uint32_t H[10];                       /* LEARN DAT header words 0..9 (animation tables) */
    int      anim;                        /* animation index (0 = Wait) */
    uint32_t nCh, nFrames, firstFrame, nKeys;
    int      obj[R2GEO_RIG_MAXCH];        /* ObjectsTable index per channel */
    uint32_t geo[R2GEO_RIG_MAXCH];
    float    fps; int fpsFromData;        /* AnimRef byte +2 of the state that uses this anim */
    uint32_t animRefFrames;               /* AnimRef u16@0 (cross-check against nFrames) */
    float    world[16];                   /* placement matrix (row vectors) */
    int      placement;                   /* 0 SO global matrix (identity in data), 1 header-word-25 block matrix (INFERRED spawn) */
    R2Geo_RigElem *el; uint32_t nEl, nTris, nElTexResolved;
    float    pmin[3], pmax[3];            /* world bbox of the last pose */
} R2Geo_Rig;
typedef struct R2Geo_TexHist { uint32_t flags; int wrap; uint32_t count; int cls; } R2Geo_TexHist;

typedef struct R2Geo_Scene {
    float       *pos;      /* 3 floats per vertex, world space, raw engine axes */
    float       *uv;       /* 2 floats per vertex, raw */
    uint32_t     nVerts;
    R2Geo_Batch *batches;
    uint32_t     nBatches;
    /* stats from the walk */
    uint32_t nSO, nSOWorld, nSOActor, nSOSector, nSOIpo, nSOOther;
    uint32_t nParentMismatch, nCountMismatch, nCycle, nUnreadable;
    uint32_t nIpo, nIpoMesh, nMeshes, nElements, nElemSkipped, nTris, nDistinctTex, nTexResolved;
    /* actor part meshes (PLACEHOLDER POSE: every part drawn at the actor SuperObject global matrix, no per-part pose) */
    uint32_t nActors, nActorNoTable, nActorTblEntries, nActorNullPo, nActorBadChain, nActorDupGeo, nActorGeos, nActorTris;
    uint32_t nStaticTris, nBatchCutout, nBatchBlend;
    float    bmin[3], bmax[3];   /* static geometry only (actors excluded) */
    R2Geo_Rig rig;
    uint32_t nUnposedActorTris;   /* actor triangles in the placeholder pile (excludes Rayman) */
    /* texture flag decode stats (distinct texture structs used by drawn batches/rig) */
    R2Geo_TexHist texHist[96]; uint32_t nTexHist, nTexDistinct, nTexFlagUnclear, nTexWrapUnclear;
    uint32_t uvRange[6][4];   /* per wrap class (0,1,2,3,>3,none): batches with [in-range, U>1or<0, V>1or<0, both] (evidence for wrap meaning) */
    uint32_t flagVsTexel[5][3];   /* [class from flags 0..3, 4 = unclear->fallback][texel class 0..2] over distinct textures */
} R2Geo_Scene;

/* root = VA of the World SuperObject (DAT header word 13). Returns false if the root
 * is not a verified world node or nothing could be decoded. */
bool R2Geo_Build(const R2Geo_Image *fix, const R2Geo_Image *lvl, uint32_t rootVa, R2Geo_Scene *out);
/* Resolve DC texture-struct VAs to GL textures (call after the .TEX bank is loaded). */
void R2Geo_ResolveTextures(R2Geo_Scene *s);
/* Submit batches (+ posed Rayman). Returns draw calls. */
uint32_t R2Geo_Draw(const R2Geo_Scene *s, int drawFlags);   /* R2GEO_DRAW_* bits */
#define R2GEO_DRAW_UNPOSED 1   /* also draw the unposed actor pile (debug) */
#define R2GEO_DRAW_RIG_ONLY 2  /* draw only the posed Rayman (debug) */
/* Evaluate Rayman's animation at fractional frame ft in [firstFrame, firstFrame+nFrames) and re-pose his parts. */
void R2Geo_RigPose(R2Geo_Scene *s, float ft);
void R2Geo_Free(R2Geo_Scene *s);

#endif
