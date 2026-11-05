/* cpa_coll: portable parser + queries for the collision data of Dreamcast Rayman 2 level DATs (+ FIX.DAT).
 * Plain C99, libc + libm only. Reads through cpa_image (bounds-checked VA view); does not own the buffers.
 *
 * Format notes and evidence: re_analysis/dc/notes_collision.md. Tags in comments:
 *   VERIFIED = checked against guest RAM / decompiled code / a data consistency test that can fail (tools/cpa_tests/test_coll.c);
 *   INFERRED = fits the data only;  UNKNOWN = present in the data, meaning not decoded.
 *
 * Coordinates: raw engine axes, +z up (VERIFIED by actor rigs standing on z=0), row-vector matrices (translation in row 3, INFERRED
 * convention shared with cpa_scene). Static meshes are returned in WORLD space; actor zones and actor-PO meshes stay in the owner's
 * LOCAL space (zone centres are tens of units from the level origin only after the actor's SO matrix is applied: INFERRED).
 *
 * Structure summary (all VERIFIED unless noted):
 *   PO (12 B)            { VisualSet*, CollSet*, BoundingSphere* }                         [PO+4]
 *   PO CollSet (16 B)    { slot0, slot1, slot2, slot3 } each a collide GeometricObject or NULL, same slot order as the actor CollSet (ZDD, ZDM, ZDE, ZDR).
 *                        Slot 3 (ZDR) = the world collision mesh of an IPO (3844 meshes, 101k triangles in 78 levels; VERIFIED incl. against the editor
 *                        .zoo/.phy files: CS = { ZDR(mesh) } only). IPO slots 0..2 are NULL in all 78 levels. 12 ObjectsTable POs of actors carry sphere zones in
 *                        slots 1/2 (per-part zones, CpaPoZone); the slot order of these 16 bytes is INFERRED to equal the actor-level order. 8 actor POs hold a sphere
 *                        object in slot 3 instead of a mesh (treated as a zone).
 *   collide GeometricObject  = the 0x44-byte visual GeometricObject layout: +0 float3* verts, +4 float3* normals, +8 per-vertex GameMaterial*,
 *                        +0x10 u16* elementTypes, +0x14 ptr* elements, +0x2C u16 nVerts, +0x2E u16 nElements, +0x34 radius, +0x38 centre.
 *     element type 1 (indexed triangles): [0] GameMaterial*, [1] u16 nTri | u16 (=nVerts-ish, UNKNOWN), [2] u16 vidx[3*nTri],
 *                        [3] u16 second index array (UNKNOWN, same count), [4] float3 faceNormal[nTri], [5] float2[] (UNKNOWN, 8 B/vertex).
 *     element type 7 (spheres): [0] sphere* , [1] u16 count; sphere (12 B) = { float radius, GameMaterial*, u16 centreVertexIdx, u16 pad }.
 *     element type 8 (aligned boxes): [0] box*, [1] u16 count; box (8 B) = { u16 minVertexIdx, u16 maxVertexIdx, GameMaterial* }.
 *   Actor CollSet (0x68 B) = *(*(actorSO+4)+0x14):  +0x00..0x0C four zone arrays {Zdx**, u16 n} in slot order ZDD, ZDM, ZDE, ZDR (the game's own
 *                        type ids are ZDD=0, ZDE=1, ZDM=2, ZDR=3; FUN_8c047e48 maps type 0->slot0, 2->slot1, 1->slot2, 3->slot3);
 *                        +0x10..0x1C four activation tables, same slot order: array[nStates] of { ZoneSet*, u32 seq }, ZoneSet = { u16* idx, u32 n };
 *                        +0x20..0x3C runtime "current set" pointers (not parsed); +0x40 u8 enable (ctor sets 1), +0x41 s8 CharacterPriority
 *                        (INFERRED name from the editor), +0x42 u8 CollisionFlag bits (named bit tests in the game: 1,2,4,8,0x10,0x20,0x40).
 *   GameMaterial (0x14 B) = { VisualMaterial*, mechanics* (0 in all samples), s32 soundIdx (-1 or 0..16, INFERRED sound/ground class),
 *                        collideMaterial (u32 -1 = none, else a pointer to a u32 bitfield), pad }.
 */
#ifndef CPA_COLL_H
#define CPA_COLL_H

#include "cpa_image.h"

enum { CPA_ZDX_ZDD = 0, CPA_ZDX_ZDM = 1, CPA_ZDX_ZDE = 2, CPA_ZDX_ZDR = 3, CPA_ZDX_N = 4 };   /* storage slot order, VERIFIED (decompiled FUN_8c047e48) */
enum { CPA_ZSHAPE_SPHERE = 7, CPA_ZSHAPE_BOX = 8 };                                             /* element type ids, VERIFIED (only 7 and 8 occur) */

/* Collide material bit labels: INFERRED from correlation with texture names only (notes_collision.md sec 6), never from game code. */
/* bit 0 is set in 19 of the 20 distinct values seen (0x00010000 lacks it); other bits seen: 16-19, 21, 22, 24-28, 30, 31 (low 16 bits are 1 or 0 in all but two values) */
#define CPA_CMAT_WATER    0x40000000u   /* eau_eau, marais_eau, lily pads (INFERRED) */
#define CPA_CMAT_NOCOL    0x82000000u   /* bits 31+25 always together: bulbs, fog, chains (INFERRED: non-solid) */

typedef struct CpaCollMat {
    uint32_t gmVa;          /* GameMaterial VA */
    uint32_t collideId;     /* u32 bitfield behind GM+0xC, valid iff hasCollideId */
    int32_t  soundIdx;      /* GM+8 as stored: -1 none, 0..16 seen (INFERRED ground/sound class) */
    uint8_t  hasCollideId;
} CpaCollMat;

typedef struct CpaCollMesh {
    uint32_t soVa;          /* owning SuperObject (IPO for static, actor for CPA_COLL_ACTOR_PO) */
    uint32_t poVa, geoVa;
    uint32_t firstTri, nTri;
    float    bmin[3], bmax[3];   /* vertex bounds (world for static, local for actor) */
    uint8_t  isStatic;      /* 1 = IPO mesh in world space; 0 = actor ObjectsTable PO mesh in the object's local space */
    int32_t  objIndex;      /* actor ObjectsTable index (isStatic == 0), else -1 */
} CpaCollMesh;

typedef struct CpaCollHit {
    float    t;             /* ray parameter (distance for a unit direction) */
    float    p[3];          /* hit point */
    float    n[3];          /* unit face normal as stored in the DAT (rotated by the IPO matrix) */
    uint32_t tri, mesh;     /* indices into CpaCollWorld.tri* / .meshes */
    uint16_t mat;           /* index into CpaCollWorld.mats */
    float    depth;         /* sphere queries: penetration depth (r - distance to the triangle plane point) */
} CpaCollHit;

typedef struct CpaZonePrim {
    uint8_t  shape;         /* CPA_ZSHAPE_SPHERE or CPA_ZSHAPE_BOX */
    float    a[3];          /* sphere: centre; box: min corner (object-local) */
    float    b[3];          /* sphere: b[0] = radius; box: max corner */
    uint32_t gmVa;          /* GameMaterial VA of the primitive */
} CpaZonePrim;

typedef struct CpaZone {    /* one collide GeometricObject out of a ZDx array */
    uint32_t geoVa;
    uint32_t firstPrim, nPrim;
    float    bsRadius, bsCentre[3];   /* GeometricObject +0x34/+0x38 */
} CpaZone;

typedef struct CpaZoneSetTable {   /* a per-state activation table (shared between actors of one family) */
    uint32_t va, nStates;
    uint32_t firstSet;      /* index into CpaCollWorld.sets, nStates consecutive entries */
} CpaZoneSetTable;
typedef struct CpaZoneSet { uint32_t firstIdx; uint32_t n; } CpaZoneSet;   /* into CpaCollWorld.setIdx (u16 zone indices) */

typedef struct CpaPoZone {  /* a zone attached to one ObjectsTable PO (part) of an actor, via PO CollSet slots 0..2 (slot 3 only when it holds spheres/boxes) */
    uint32_t soVa, poVa;
    int32_t  objIndex;      /* ObjectsTable index of the PO */
    uint8_t  slot;          /* CPA_ZDX_* */
    uint32_t zone;          /* index into CpaCollWorld.zones */
} CpaPoZone;

typedef struct CpaCollActor {
    uint32_t soVa, actorVa, collSetVa;
    uint8_t  enable, collisionFlag; int8_t priority;
    uint32_t zFirst[CPA_ZDX_N], zCount[CPA_ZDX_N];   /* ranges into CpaCollWorld.zones */
    int32_t  table[CPA_ZDX_N];                       /* index into CpaCollWorld.tables, -1 none */
} CpaCollActor;

typedef struct CpaCollWorld {
    CpaImage img;
    float    (*vert)[3];  uint32_t nVert;   /* triangle vertices of all meshes (static: world space) */
    uint32_t (*tri)[3];   uint32_t nTri;    /* absolute indices into vert */
    float    (*nrm)[3];                     /* per-triangle stored unit face normal */
    uint16_t *triMat;                       /* per-triangle index into mats */
    uint32_t *triMesh;
    CpaCollMesh *meshes;  uint32_t nMeshes;
    CpaCollMat  *mats;    uint32_t nMats;
    CpaZone     *zones;   uint32_t nZones;
    CpaZonePrim *prims;   uint32_t nPrims;
    CpaCollActor *actors; uint32_t nActors;
    CpaZoneSetTable *tables; uint32_t nTables;
    CpaPoZone   *poZones; uint32_t nPoZones;
    CpaZoneSet  *sets;    uint32_t nSets;
    uint16_t    *setIdx;  uint32_t nSetIdx;
    float bmin[3], bmax[3];                 /* bounds of all static triangles */

    /* ---- load statistics (every counter that is not a plain total is a failure/consistency counter that should be 0) ---- */
    uint32_t nSO, nSOIpo, nSOActor;
    uint32_t nIpoWithCollSet, nIpoCollSetNoMesh;    /* IPOs whose PO has a CollSet / whose ZDR slot is NULL */
    uint32_t nIpoSlotsNonZR;                        /* IPO PO CollSets with slot 0..2 non-NULL (0 in all shipped levels) */
    uint32_t nStaticMeshes, nActorMeshes, nElems, nElemSprite, nElemZone, nElemOther;   /* element type 3 (sprite) / 7,8 (zone prims) / anything else (0) inside ZDR meshes */
    uint32_t nBadGeo, nBadElem, nBadIdx, nBadNormal, nBadMat, nUnreadable;
    uint32_t nNormalFlip;                           /* stored normal disagrees with the CCW cross product (angle > 90 deg) */
    uint32_t nDegenerate;                           /* zero-area triangles */
    uint32_t nSpheres, nBoxes, nBadPrim;
    uint32_t nActorsWithCollSet, nActorsWithTables, nTableCountMismatch, nZoneSetIdxRange, nBadZone;
    uint32_t nIpoMatNonIdentity;
} CpaCollWorld;

/* Load the collision data reachable from the world SuperObject (DAT header word 13). img must hold the level (region 0) and FIX.
 * stateCount(actor) is read from the family state list for the table-size cross-check (nTableCountMismatch). Returns 1 on success. */
int  cpa_coll_load(CpaCollWorld *w, const CpaImage *img, uint32_t rootVa);
void cpa_coll_free(CpaCollWorld *w);

/* Nearest hit of the ray o + t*d, 0 <= t <= tmax, against the STATIC meshes. d need not be unit but t is then in units of |d|.
 * twoSided = 0: only triangles whose stored normal faces the ray origin (n.d < 0) count. Returns 1 on hit. */
int  cpa_coll_raycast(const CpaCollWorld *w, const float o[3], const float d[3], float tmax, int twoSided, CpaCollHit *hit);
/* Convenience: straight-down probe (0,0,-1) from (x,y,zTop), up to maxDrop. */
int  cpa_coll_ground(const CpaCollWorld *w, float x, float y, float zTop, float maxDrop, CpaCollHit *hit);
/* All STATIC triangles overlapping the sphere (centre c, radius r): fills up to max hits (closest-point contact normal in n, depth = r - dist).
 * Returns the number of overlapping triangles (may exceed max). */
uint32_t cpa_coll_sphere(const CpaCollWorld *w, const float c[3], float r, CpaCollHit *hits, uint32_t max);

/* Active zones of one actor in one state: writes zone indices (into the actor's zone range for that slot) and returns their count.
 * state is the family state index (VERIFIED: tables have exactly the family's state count). Returns 0 when the actor has no table. */
uint32_t cpa_coll_active_zones(const CpaCollWorld *w, const CpaCollActor *a, int slot, uint32_t state, uint16_t *out, uint32_t max);
/* Index of the CpaCollActor for a SuperObject VA or -1. */
int  cpa_coll_find_actor(const CpaCollWorld *w, uint32_t soVa);

#endif
