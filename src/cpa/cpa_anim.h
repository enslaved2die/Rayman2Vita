/* cpa_anim: generic actor animation decoding for Dreamcast Rayman 2 (milestone N2).
 * Portable C99, depends only on cpa_image.h. Works on a DAT image set (static) or on a 16 MiB guest-RAM dump presented as ONE CpaImage region at
 * 0x8C000000 (oracle); the code is byte-for-byte the same on both.
 *
 * Scope: for ANY actor SuperObject (type 2) and ANY animation index of the level's animation tables H0..H9 (level DAT header words 0..9):
 *   - cpa_anim_actor_open   : Actor -> 3dData -> ObjectsTable / State list, (runtime only) channel list and current animation state
 *   - cpa_anim_info         : animation record (H0 + 0x38 * idx) summary
 *   - cpa_anim_eval         : per-channel pose at an integer frame (object index, rotation 3x3, translation, scale, key data)
 *   - cpa_anim_compose      : channel matrices -> actor-space/world matrices given a parent table
 *   - cpa_anim_obj_*        : ObjectsTable entry -> GeometricObject / mirror vector
 *
 * Tags: VERIFIED = reproduced against the guest's own RAM (tools/cpa_tests/test_anim.c, numbers in docs / report); INFERRED = fits only;
 * UNRESOLVED = not decoded. See the block comments per function.
 */
#ifndef CPA_ANIM_H
#define CPA_ANIM_H

#include "cpa_image.h"

#define CPA_ANIM_MAXCH   64     /* channels of one animation (largest seen: see test_anim output) */
#define CPA_ANIM_MAXSLOT 256    /* channel-list slots of one actor */

typedef struct CpaAnimTables { uint32_t H[10]; } CpaAnimTables;
/* H0..H9 = level DAT header words 0..9 (VERIFIED notes_pose.md). `hdr` = first 40 bytes of the level DAT. */
int cpa_anim_tables_from_header(const uint8_t *hdr, size_t n, CpaAnimTables *t);

typedef struct CpaAnimActor {
    const CpaImage *im; CpaAnimTables T;
    uint32_t soVa, actorVa, d3Va;        /* SuperObject(type 2), SO+4 (Actor), Actor+0 (3dData) */
    uint32_t objArr, nObj;               /* ObjectsTable: 3dData+0xC -> {entries*, ?, u16 count}; entry 0x10 B: +0 mirror-vector*, +4 PO */
    uint32_t stateList, nStates;         /* 3dData+0x14, 0x30 B nodes: +0x10 State* -> State+0 AnimRef*; nStates counted until a null State (INFERRED end) */
    /* runtime-only (valid when the image is a RAM dump; 0 for a DAT image where the engine has not built them yet) */
    uint32_t chanList, nChanList;        /* 3dData+0xA0 / +0xA4 (VERIFIED FUN_8c0828a0 reads exactly these); entry 0x14 B: +0 node SO, +4 inner SO, +8 next, +0xC parent entry, +0x10 lock, +0x11 enable */
    uint32_t curState;                   /* 3dData+0xAC: live animation state (see cpa_anim_cur) */
} CpaAnimActor;
int cpa_anim_actor_open(CpaAnimActor *a, const CpaImage *im, const CpaAnimTables *t, uint32_t soVa);

/* Live animation state (RAM image only). VERIFIED by oracle: S = 3dData+0xAC; S+0x00 channel record array (6 B: u16 obj, u8 1, u8 slot, u8 a, u8 b),
 * S+0x14 AnimRef* currently played, S+0x18 u16 frame (absolute frame number: record frame f = frame - rec.u16@0x18). AnimRef: u16@0 frame count,
 * u8@2 fps (INFERRED), u16@0x18 animation index into H0. */
typedef struct CpaAnimCur { int valid; uint32_t animRef, chanRecs; unsigned animIdx, frame, refFrames, fps; } CpaAnimCur;
int cpa_anim_cur(const CpaAnimActor *a, CpaAnimCur *c);

typedef struct CpaAnimInfo { uint32_t idx, rec; unsigned nKeys, nCh, nFrames, firstFrame; } CpaAnimInfo;
int cpa_anim_info(const CpaAnimActor *a, unsigned animIdx, CpaAnimInfo *o);

typedef struct CpaAnimChan {
    uint16_t slot;        /* channel-list slot this channel drives (H6 row u16@2) */
    int      obj;         /* ObjectsTable index displayed by this channel at this frame (-1 none); can change per frame */
    uint16_t h4flags;     /* H4 record u16@0 (bit 0x800 <=> channel has a non-root parent in the observed SuperObject tree, see test_anim) */
    uint16_t kflags;      /* key flags (H9 +0x12) */
    uint32_t keyVa;       /* H9 key record VA used (next key = keyVa + 0x24 unless flag 0x80) */
    uint16_t nflags, kframe, nframe;   /* next key flags / key frame / next key frame (0 when there is no next key) */
    uint16_t ease[4];     /* raw key s16 fields +0x1C..+0x22 */
    uint16_t nease[4];    /* same for the next key */
    float    t;           /* interpolation factor used (0 = at key) */
    float    q[4];        /* rotation quaternion xyzw (after slerp) */
    float    rot[9];      /* row-major, v' = v*rot (VERIFIED engine convention) */
    float    T[3];        /* translation */
    float    S[3];        /* scale vector H1[key+0x18]; (1,1,1) unless the key scales (INFERRED application) */
    int      hasScale;
} CpaAnimChan;

typedef struct CpaAnimPose {
    CpaAnimInfo info; unsigned frame;
    CpaAnimChan ch[CPA_ANIM_MAXCH]; unsigned nCh;
} CpaAnimPose;

/* mode bit 0: engine integer-angle sine-table slerp (slerp_tab in cpa_anim.c) instead of float slerp; bit 1: interpolation factor t as a quotient rounded toward zero (INFERRED).
 * 0 = baseline of cpa_scene.c; CPA_ANIM_BEST = best match to the oracle. */
#define CPA_ANIM_BEST 3
int cpa_anim_eval(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int mode, CpaAnimPose *p);

/* 4x4 row-vector matrix of one channel (rot in the upper 3x3, T in row 3). */
void cpa_anim_chan_matrix(const CpaAnimChan *c, float m[16]);

/* Parent table read from a RUNNING guest: parentSlot[slot] = parent slot or -1 (parent is the actor). Reads ChanList entry+0xC from a RAM image.
 * Kept as the oracle for cpa_anim_static_parents (below), which needs no guest. Returns number of slots read. */
int cpa_anim_read_parents(const CpaAnimActor *a, int16_t parentSlot[CPA_ANIM_MAXSLOT]);

/* STATIC parent topology (VERIFIED, DAT data only; see re_analysis/dc/notes_anim_parents.md). The guest builds ChanList entry+0xC in the anim-switch
 * function FUN_8c0544a0 from the current frame's H5 row (10 B, row = H5 + 10*(rec.u16@0x2E + f)): u16@4 = pair count N, u16@6 = first pair index into H3;
 * H3 is an array of 4 B pairs {u16 child slot, u16 parent slot} (the global 0x8C2CFDD8 holds H3: the old note "H3 = event list" is wrong). The guest sets
 * entry[child].parent = &entry[parent]. Pairs are per frame row, not per animation: the guest only re-applies them when the pair pointer changes, i.e. the
 * ChanList holds the pairs of the most recently applied row. parentSlot[] is filled for every slot (-1 = child of the actor); *nPairs = N (may be NULL).
 * Returns 1 on success, 0 if (animIdx, frame) is outside the record or the tables are unreadable. Also reports the row's root rotation/vector words
 * (H5 u16@0/u16@2; 0xFFFF = none, always none in the 126 oracle dumps) through rootQ / rootV (may be NULL). */
int cpa_anim_static_parents(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int16_t parentSlot[CPA_ANIM_MAXSLOT], unsigned *nPairs, unsigned *rootQ, unsigned *rootV);
/* world[i] (for pose channel i) = local_i * world(parent) ; actor = actor-to-world matrix (row-vector). Channels whose parent slot is not driven by this
 * animation use the actor matrix. Returns 1 on success. */
int cpa_anim_compose(const CpaAnimPose *p, const int16_t parentSlot[CPA_ANIM_MAXSLOT], const float actor[16], float world[CPA_ANIM_MAXCH][16]);

/* Hierarchical native rig pose: everything a renderer needs for one actor/animation/frame from DAT data only.
 * world[i]  = 4x4 row-vector world matrix of pose channel i (the guest's channel SuperObject global, SO+0x24): local_i * world(parent) with the actor matrix as root.
 * objM[i]   = matrix to apply to the vertices of ObjectsTable object ch[i].obj: diag(mirror vector) * world[i] when the object entry has a mirror vector (the guest then
 *             wraps the PO in an inner node under the channel node; VERIFIED vertex-exact), else world[i]. v' = v * objM[i] (row vector, translation in row 3).
 * parentSlot is the static table above. Channels whose parent slot is not driven by this animation hang off the actor matrix (INFERRED; the guest would use that
 * node's stale global from an earlier animation; counted in test_anim as "undriven parent"). Returns 1 on success. */
typedef struct CpaAnimRig {
    CpaAnimPose pose; int16_t parentSlot[CPA_ANIM_MAXSLOT]; unsigned nPairs;
    float world[CPA_ANIM_MAXCH][16]; float objM[CPA_ANIM_MAXCH][16]; int wrapped[CPA_ANIM_MAXCH]; int undrivenParent[CPA_ANIM_MAXCH];
} CpaAnimRig;
int cpa_anim_rig_pose(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int mode, const float actor[16], CpaAnimRig *r);

/* ObjectsTable access. geo = GeometricObject VA via entry+4 -> PO+0 -> VisualSet+4 (VERIFIED chain, notes_geometry.md). */
uint32_t cpa_anim_obj_geo(const CpaAnimActor *a, int obj);
int      cpa_anim_obj_mirror(const CpaAnimActor *a, int obj, float v[3]);   /* entry+0 vector (e.g. -1,1,1); returns 0 and (1,1,1) when absent */
/* GeometricObject vertex array: pointer to nVerts*3 floats in the image, or NULL. */
const float *cpa_anim_geo_verts(const CpaImage *im, uint32_t geo, unsigned *nVerts);

/* Row-vector 4x4 helpers. */
void cpa_anim_mat_mul(const float a[16], const float b[16], float r[16]);
int  cpa_anim_read_matrix(const CpaImage *im, uint32_t matVa, float m[16]);        /* guest Matrix object: +0 type, +4 rot3x3, +0x28 float m4x4[16] */
int  cpa_anim_read_matrix3(const CpaImage *im, uint32_t matVa, float r[9]);        /* the rot3x3 copy at +4 */

#endif
