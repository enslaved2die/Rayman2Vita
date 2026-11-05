/* cpa_follow: native replica of the original follow camera, PARTIAL (N3). Portable C99, no globals, no GL.
 *
 * What is decoded and what is not (tags: VERIFIED = reproduced against per-frame oracle logs, tools/cpa_tests/test_follow.c; INFERRED = fit to those logs, not read from code;
 * UNKNOWN = not decoded). Details, offsets and numbers: re_analysis/dc/notes_camera.md.
 *
 *  - Layout (VERIFIED by diffing guest RAM across frames and by the watch/trace of the writers):
 *      camera SO       = *(0x8C123CF8)   (player-table entry 1; Learn_10 0x8CBB1580; type 2 SO, data = camera actor)
 *      camera matrix   = *(camSO+0x24)   (global matrix: +0 type word, +4 3x3 rows, +0x30 4x4, translation at +0x58)
 *      camera actor    = *(camSO+4)      (Learn_10 0x8CD85954)
 *      Rayman SO       = *(0x8C123CF0), matrix at *(SO+0x24), translation at +0x58 (Learn_10 0x8CBB07D0)
 *      camData         = camActor+0x194  (Learn_10 0x8CD85AE8; the argument r4 of the camera behaviour f_8c08e51c)
 *         camData+0x22c  float  gain-like scalar (0.35 default; varies 0.001..0.68 over time; role UNKNOWN)
 *         camData+0x230  float[3]  T  tracked target point (copy at +0x284)            -- see step_target
 *         camData+0x23c  float[3]  velocity-like vector of T (role INFERRED), +0x248 float speed-like scalar
 *         camData+0x4ec  float[3]  C  camera position as of the previous write (== camera matrix translation one frame later)
 *         camData+0x4fc  float[3]  L  aim (look-at) point                               -- see step_aim
 *      The camera SO matrix (what the renderer reads after the per-frame copy to 0x8C00F300) holds position C and orientation rows R0,R1,R2.
 *  - Orientation (VERIFIED): R0 = normalize(C - L), R2 = normalize(R0 x (0,0,1)), R1 = R2 x R0; i.e. a look-at from C to L with world up +Z, no roll.
 *    Oracle Learn_10 (1690 frames of play) and Jail_10 (3401 frames, cinematic camera): angle between R0 and normalize(C-L) max 0.03 degrees.
 *  - T (INFERRED): T follows Rayman's matrix translation + (0,0,1.4) with a first-order lag, kTarget ~ 0.222 per 60 Hz guest frame in plain running; z is exact
 *    (rms 5e-4), x/y deviate whenever Rayman turns/changes state (jumps of up to 1.4 units): the real target depends on more than the translation. Free-run error is large (see notes).
 *  - L (INFERRED): first-order lag of T, kAim ~ 0.17. Teacher-forced on the oracle T: mean error 0.26, max ~1.0 world units over 1585 frames.
 *  - C (UNKNOWN): the position controller (distance band, orbit rotation, height, collision pull-in, mode switches) is NOT decoded. The model here carries C with L's
 *    motion and clamps the horizontal distance to a band; its error is large (several world units, see notes) and it is provided as a labelled placeholder only.
 */
#ifndef CPA_FOLLOW_H
#define CPA_FOLLOW_H

#include <stdint.h>
#include "cpa_camera.h"

/* guest addresses and offsets (VERIFIED, see above) */
#define CPA_FOLLOW_VA_CAMSO      0x8C123CF8u
#define CPA_FOLLOW_VA_PLAYERSO   0x8C123CF0u
#define CPA_FOLLOW_SO_DATA       0x04u     /* SO -> actor */
#define CPA_FOLLOW_SO_MATRIX     0x24u     /* SO -> global matrix */
#define CPA_FOLLOW_MAT_TRANS     0x58u     /* float[3] translation in the global matrix */
#define CPA_FOLLOW_MAT_ROWS      0x04u     /* float[9] rows R0,R1,R2 */
#define CPA_FOLLOW_ACT_CAMDATA   0x194u    /* camera actor -> camData (inline) */
#define CPA_FOLLOW_CD_GAIN       0x22Cu
#define CPA_FOLLOW_CD_TARGET     0x230u
#define CPA_FOLLOW_CD_TARGETVEL  0x23Cu
#define CPA_FOLLOW_CD_POS        0x4ECu
#define CPA_FOLLOW_CD_AIM        0x4FCu

typedef struct CpaFollowRam {      /* what cpa_follow_read_ram extracts from a 16 MiB guest RAM image */
    uint32_t camSO, playerSO, camActor;
    float camPos[3];               /* camera SO global matrix translation */
    float camRows[9];              /* R0,R1,R2 */
    float target[3];               /* T  */
    float aim[3];                  /* L  */
    float camDataPos[3];           /* camData+0x4ec */
    float playerPos[3];            /* Rayman SO global matrix translation */
    float gain;                    /* camData+0x22c */
} CpaFollowRam;

/* Reads the structures above from a guest RAM image (ram = 16 MiB, address 0x8C000000 maps to ram[0]). Returns 0 on success, -1 if a pointer is invalid. */
int cpa_follow_read_ram(const uint8_t *ram, CpaFollowRam *out);

/* Orientation rows from C and L: VERIFIED. rows[0..8] = R0,R1,R2. Returns 0, or -1 if C == L (rows untouched). */
int cpa_follow_rows(const float C[3], const float L[3], float rows[9]);

/* Aim-point integrator (VERIFIED against the oracle, test_follow check 4; found by running the lifted f_8c08cd74 on RAM dumps, see notes_camera.md section 5).
 * Per guest frame, with T and the speed S1 (actor+0x3dc, camData+0x248) as produced by the upstream camera director: step = min(S1*dt, 0.5*|T-L|) along (T-L)/|T-L|; L += step.
 * dt = 0.016 (the engine passes counter(16 ms)/1000 in fr4 to the behaviour). Returns |step|; outStep may be NULL. The speed S1 itself is NOT decoded (UNKNOWN). */
float cpa_follow_aim_step(float L[3], const float T[3], float speed, float dt, float outStep[3]);

typedef struct CpaFollowCfg {
    float targetOffsetZ;   /* 1.4   (INFERRED: T - Rayman in z when Rayman stands/runs on level ground) */
    float kTarget;         /* 0.222 (INFERRED) */
    float kAim;            /* 0.17  (INFERRED) */
    float distMin, distMax;/* horizontal C-L distance band, 7.5 / 9.3 (INFERRED from one run, placeholder) */
    float kDist;           /* 0.09 pull towards the band (placeholder) */
    float height;          /* C.z - L.z target, 2.8 (placeholder) */
    float kHeight;         /* 0.025 (placeholder) */
} CpaFollowCfg;

typedef struct CpaFollow {
    CpaFollowCfg cfg;
    float T[3], L[3], C[3];
} CpaFollow;

void cpa_follow_cfg_default(CpaFollowCfg *cfg);
/* Seed from an existing camera state (e.g. read from the oracle or the level start). */
void cpa_follow_init(CpaFollow *f, const CpaFollowCfg *cfg, const float T[3], const float L[3], const float C[3]);
/* One 60 Hz guest frame. rayman = Rayman SO matrix translation AFTER this frame's movement. */
void cpa_follow_step_target(CpaFollow *f, const float rayman[3]);
void cpa_follow_step_aim(CpaFollow *f);
void cpa_follow_step_pos(CpaFollow *f, const float Lprev[3]);
void cpa_follow_step(CpaFollow *f, const float rayman[3]);
/* Build the engine camera (orientation VERIFIED from C,L; hfov/ratio as given). */
void cpa_follow_camera(const CpaFollow *f, float hfov, float vfovRatio, CpaCamera *out);

#endif
