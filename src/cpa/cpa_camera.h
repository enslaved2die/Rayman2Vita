/* cpa_camera: camera, projection, near-plane clip and an optional free/orbit camera with dual-stick input. Portable C99, no GL, no globals.
 *
 * Evidence tags: VERIFIED = reproduced against the oracle TA stream by tools/cpa_tests/ta_compare.c (4:3 mode) and again by tools/cpa_tests/test_camera.c;
 * INFERRED = fits the measurements or the notes, not read from game code; DESIGN = our own choice, no oracle exists (the original game has none).
 *
 * Axes: raw engine axes. The captured camera has up ~ +Z (VERIFIED, Learn_10: U = (-0.005,-0.146,0.989)), so the orbit camera uses +Z as world up (INFERRED
 * from that single level; the camera rows are used as they come, so a level with another up axis still projects correctly, only the orbit camera would assume +Z).
 *
 * VERIFIED projection (4:3, 640x480; ta_compare.c header; the guest keeps the camera in RAM at 0x8C00F300 hfov, 0x8C00F304 ratio, 0x8C00F308 U, 0x8C00F314 F,
 * 0x8C00F394 position; the L row at 0x8C00F320 is not always valid, L := U x F is):
 *     r = X - C;  Zc = F.r;  sx = 320 - fx*(L.r)/Zc;  sy = 240 - fy*(U.r)/Zc;  z_ta = 1/(4 Zc)
 *     fx = 320/tan(hfov/2), fy = 240/tan(vfov/2), vfov = hfov*ratio  (an ANGLE product, VERIFIED: hfov 1.2, ratio 0.75 -> vfov 0.9 rad)
 * Near plane Zc = 0.25 (measured on the TA stream, INFERRED, not read from code). Note fx != fy in the original (467.74 vs 496.84): the 4:3 image is not a
 * "square pixel" perspective (fx/fy = 0.941); that is the game's look and CPA_FIT_HORPLUS preserves it exactly at 4:3.
 *
 * Widescreen = a pure parameter change of the same projection (DESIGN, derived from the game's own 16:9 mode, re_analysis/dc/notes_widescreen.md):
 *   the game's 16:9 mode keeps the vertical projection unchanged and scales the horizontal projection by SQ = (4/3)/A (A = displayed W/H, square pixels):
 *   fx' = fx*(W/2)/320 * (4/3)/A, fy' = fy*(H/2)/240. We apply the same law for any A >= 4/3 (Hor+: every world point that was visible at 4:3 keeps its
 *   position relative to the screen height; extra width shows more of the world to left/right). For A < 4/3 (portrait-ish) the horizontal extent is kept and the vertical grows (Vert+).
 *   VERIFIED: at A = 4/3 this is identical to the oracle model. INFERRED: the game's measured wide factor for 960x544 (K3 = 1.2282 on the half-angle, notes_widescreen.md CORRECTION)
 *   equals this law within ~0.1% (cpa_wide_k3() computes the exact angle multiplier, test_camera prints both). NOT VERIFIED: no oracle capture exists of 16:9 3D
 *   geometry from this projection (the oracle is compared at 4:3 only), and whether the engine's frustum/sector culling uses the same widened FOV (notes_widescreen: "not separately verified").
 */
#ifndef CPA_CAMERA_H
#define CPA_CAMERA_H

#include <stdint.h>

#define CPA_NEAR_ZC 0.25f          /* INFERRED from TA stream, see above */
#define CPA_REF_W 640.0f           /* reference (oracle) viewport */
#define CPA_REF_H 480.0f
#define CPA_TA_Z_SCALE 4.0f        /* z_ta = 1/(CPA_TA_Z_SCALE*Zc); INFERRED */

typedef struct CpaCamera {
    float pos[3];                  /* C */
    float up[3], fwd[3], left[3];  /* U, F, L rows; right-handed with left = up x fwd; "left" means +L.r projects to a smaller sx (screen left) */
    float hfov;                    /* full horizontal FOV (radians) of the 4:3 reference image; guest default 1.2 */
    float vfovRatio;               /* vfov = hfov*vfovRatio at the 4:3 reference; guest default 0.75 */
    float nearZ;                   /* Zc of the near plane; CPA_NEAR_ZC */
} CpaCamera;

/* Build from the guest's camera rows (copies U/F, derives L = U x F, does NOT re-normalise: verified numbers use the raw rows). */
void cpa_camera_from_rows(CpaCamera *c, const float pos[3], const float up[3], const float fwd[3], float hfov, float vfovRatio);
/* Orthonormal look-at with +Z up (DESIGN). Returns 0 if eye==target or the view direction is parallel to Z (then left = +Y is used). */
int  cpa_camera_look_at(CpaCamera *c, const float eye[3], const float target[3], float hfov, float vfovRatio);

typedef enum { CPA_FIT_HORPLUS = 0,   /* default: widen horizontally for A > 4/3 (Vert+ below 4/3); identical to the oracle at 640x480 */
               CPA_FIT_PILLARBOX43,   /* 4:3 image centred in the viewport (what the Vita build did before widescreen); identical to the oracle if 4:3 */
               CPA_FIT_STRETCH } CpaFit; /* naive stretch of the 4:3 image over WxH (distorts; kept as a comparison baseline, matches the oracle only at 4:3) */

typedef struct CpaProj {
    int   w, h;                    /* viewport in pixels */
    float cx, cy;                  /* principal point (pixels): w/2, h/2 (INFERRED from 320,240 in the oracle) */
    float fx, fy;                  /* focal lengths in pixels */
    float nearZ;
} CpaProj;

void cpa_proj_init(CpaProj *p, const CpaCamera *c, int w, int h, CpaFit fit);

/* Camera-space point: c[0] = L.r (positive = screen left), c[1] = U.r (positive = screen up), c[2] = Zc (depth along F). */
void cpa_world_to_cam(const CpaCamera *c, const float x[3], float out[3]);
/* Camera space -> out = {sx, sy, z_ta} (pixels, y down, z_ta = 1/(4 Zc)). Returns 0 (out untouched) if Zc < proj nearZ. */
int  cpa_cam_to_screen(const CpaProj *p, const float cam[3], float out[3]);
/* world -> screen in one go. */
int  cpa_project(const CpaCamera *c, const CpaProj *p, const float x[3], float out[3]);
/* Twice the signed screen area of a triangle given as 3x{sx,sy}. VERIFIED rule: with y down, a front face of a stored (CCW about the face normal) triangle has NEGATIVE
 * value (67/67 matched Learn_10 oracle triangles; opaque 43/43 negative); positive = back face. A GL renderer that flips y must flip this sign. */
float cpa_screen_area2(const float s[6]);

/* The game's own 16:9 knob: multiplier K3 of the horizontal half-angle that reproduces fx' of the law above for display aspect A (K3 = atan(tan(h/2)*A/(4/3))/(h/2)). */
float cpa_wide_k3(float hfov, float aspect);

/* Near-plane clip of one world-space triangle (Sutherland-Hodgman on Zc >= nearZ, camera space, attributes linear in 3D hence exact).
 * world: 9 floats, uv: 6 floats or NULL. Returns 0 (fully behind the plane), 3 (nothing clipped, or one vertex in front) or 4 (two vertices in front); new vertices lie on the plane (c[2] == nearZ exactly). */
typedef struct CpaClipVert { float c[3]; float uv[2]; } CpaClipVert;
int cpa_clip_tri_near(const CpaCamera *c, float nearZ, const float world[9], const float uv[6], CpaClipVert out[4]);

/* ---------------- free / orbit camera with dual-stick input (DESIGN: there is no oracle, the original game does not read the right stick) ----------------
 * The orbit camera circles `target` (the caller feeds the followed actor each frame) at `dist`. Right stick: x yaws, y pitches. Everything is frame-rate
 * independent (dt in seconds). Collision-free by design for now (pass through walls). Independent of the follow camera: the original camera can run unchanged
 * and the orbit camera is only constructed from it (cpa_orbit_from_camera) when the player first touches the right stick, so the hand-over is seamless. */
typedef struct CpaStickCfg {
    float deadzone;     /* radial, 0..1 of full deflection; default 0.15 */
    float expo;         /* response exponent applied after dead-zone rescale; 1 = linear, default 1.6 */
    float yawRate;      /* rad/s at full deflection; default 2.6 */
    float pitchRate;    /* rad/s at full deflection; default 1.6 */
    float smoothTau;    /* velocity low-pass time constant (s); 0 = none; default 0.06 */
    float pitchMin, pitchMax;  /* camera elevation limits (rad, + = camera above target); default -0.35, 1.30 */
    int   invertY;      /* 0: stick up looks up (camera moves down); 1: stick up moves camera up */
} CpaStickCfg;

typedef struct CpaOrbitCam {
    float target[3];
    float dist;
    float yaw;          /* direction target->eye in the XY plane, radians CCW seen from +Z, 0 = eye on +X side of target */
    float pitch;        /* elevation of the eye above the XY plane through target */
    float yawVel, pitchVel;   /* smoothed rad/s */
    CpaStickCfg cfg;
} CpaOrbitCam;

void cpa_stick_cfg_default(CpaStickCfg *cfg);
/* Radial dead-zone + response curve. in: raw stick (-1..1 each, y up positive). out: shaped, |out| <= 1, direction preserved, exactly 0 inside the dead zone. */
void cpa_stick_shape(const CpaStickCfg *cfg, float inX, float inY, float *outX, float *outY);
void cpa_orbit_init(CpaOrbitCam *o, const float target[3], float dist, float yaw, float pitch);
/* Resets cfg to defaults (set o->cfg afterwards). Seed from an existing camera looking at a point `dist` ahead of it: the first orbit_to_camera reproduces `c`'s pose (exactly for zero roll). */
void cpa_orbit_from_camera(CpaOrbitCam *o, const CpaCamera *c, float dist);
/* One step: stickX/stickY raw right stick (y up positive), new target position. Yaw is wrapped to [-pi, pi); pitch is clamped (velocity zeroed at the limit). */
void cpa_orbit_update(CpaOrbitCam *o, float stickX, float stickY, const float target[3], float dt);
/* Pose -> CpaCamera with the given FOV parameters (use the follow camera's hfov/ratio so the look does not jump). */
void cpa_orbit_to_camera(const CpaOrbitCam *o, float hfov, float vfovRatio, CpaCamera *out);

#endif
