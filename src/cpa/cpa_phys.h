/* cpa_phys: native replica of the Rayman 2 (Dreamcast) actor dynamics step: gravity integration, sphere-vs-static-triangle ground contact.
 * Plain C99, libc + libm only. Evidence and tags (VERIFIED / INFERRED / UNKNOWN): re_analysis/dc/notes_physics.md; verified by
 * tools/cpa_tests/test_phys.c against the per-frame oracle log of tools/cpa_tests/physlog_run.c (recompiled game, Learn_10).
 *
 * Axes: raw engine axes, +z up (see cpa_coll.h). Units: game units and seconds.
 */
#ifndef CPA_PHYS_H
#define CPA_PHYS_H

#include "cpa_coll.h"

/* Frame time used by the dynamics integrator. VERIFIED: v.z' = v.z - g*DT and pos' = pos + v'*DT reproduce the oracle to float precision with
 * DT = 0.01666 (not 1/60 = 0.016667): ratio pos-step/velocity = 0.9996 over thousands of frames. The game runs one dynamics step per 1/60 s frame. */
#define CPA_PHYS_DT 0.01666f

/* Radius of the sphere (centre at origin + (0,0,R)) that rests on the static collision triangles of Rayman while he is grounded.
 * VERIFIED against the oracle (r_eff = 0.9000 +-0.0005 on every single-plane slope frame); where the value is stored in the game data is UNKNOWN
 * (it is not any ZDM/ZDE sphere of Rayman's CollSet, not in the Dynam block). */
#define CPA_PHYS_RAYMAN_R 0.9f

typedef struct CpaPhysContact {
    int      hit;           /* a triangle supports the sphere */
    float    n[3];          /* stored face normal of the supporting triangle */
    float    p[3];          /* contact point on that triangle */
    uint32_t tri;           /* index into CpaCollWorld.tri */
    uint16_t mat;           /* index into CpaCollWorld.mats */
} CpaPhysContact;

/* Vertical resting position of a sphere of radius r (centre = origin + (0,0,r)) at (x,y), starting from origin height zStart:
 * the highest height in [zStart - maxDown, zStart + maxUp] at which the sphere touches a supporting triangle. A triangle supports only if
 * (a) the sphere centre at the START height is in front of it (stored normal; one-sided, discrete), (b) its normal.z >= minNz (walls do not support),
 * (c) its collide material has no bit of skipCmat (water). If nAllow > 0 only meshes whose IPO SuperObject VA is in soAllow[] are used
 * (the game tests only the IPOs under the actor's current sector and the sectors in sector-data +0x30, VERIFIED by trace, see notes_collision.md). Returns 1 and the origin height in *zOrigin when something supports, else 0. */
int cpa_phys_rest(const CpaCollWorld *w, float x, float y, float zStart, float maxUp, float maxDown, float r, float minNz, uint32_t skipCmat, float *zOrigin, CpaPhysContact *c, const uint32_t *soAllow, uint32_t nAllow);

/* Closest point on triangle (a,b,c) to point p (Ericson, Real-Time Collision Detection 5.1.5). */
void cpa_phys_closest_tri(const float p[3], const float a[3], const float b[3], const float c[3], float out[3]);

/* Airborne integration for one frame: vel.z -= gravity*dt, then pos += vel*dt (VERIFIED against the oracle, see test_phys 'air'). The horizontal velocity is
 * produced by the AI/state machine (stick, friction), not by this engine layer: it is an input. */
void cpa_phys_free_step(float pos[3], float vel[3], float gravity, float dt);

#endif
