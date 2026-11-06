/* cpa_light: per-vertex colour of the Dreamcast Rayman 2 renderer (the ARGB the game writes into the TA vertex stream), portable C99, no GL, no globals.
 *
 * What the game does (decoded from the lifted guest code, tools/sh4recomp/gen_fix/recomp_{05,13}.c: f_8c038bec -> f_8c038e80 -> f_8c0388f8 / f_8c038abe -> light accumulation
 * f_8c07c7c0 / f_8c0a2a30 -> colour packer f_8c07d800..f_8c07f4b4; fade f_8c07a100; numbers in re_analysis/dc/notes_lighting.md):
 *   1. Per object a float4 accumulator v[vertex] = (R,G,B,A) is filled
 *        - STATIC geometry (IPO): from the RLI = 4 x s16 per vertex stored in the level data (IPO+4 -> info{count, data*}):  v = s16 / 256.        [VERIFIED, 100% of matched vertices]
 *        - ACTORS: v = 0, then every enabled light of the light list adds its contribution (type 1 parallel: col * max(0, -(n_world . axis)); type 4 ambient: goes to the object-wide
 *          accumulator G instead). Types 2 (omni), 3 (spot) and 5 are NOT decoded (UNKNOWN, see cpa_light_accum).
 *   2. Per material (VisualMaterial: flags @0, ambient RGBA @8, diffuse RGBA @0x18, texture struct @0x4C) the game forms  amb' = amb + diffuse * G  and
 *        byte_c = clamp(trunc(amb'_c * 510 + diffuse_c * 510 * v_c)),   c = R,G,B and (see alpha below) A.
 *      Typical level material: ambient 0.1, diffuse 0.5 -> byte = 51 + 255 * v (v = RLI/256).
 *   3. Alpha (VM flags AND draw flags = S): S bit 3 -> 255; else S bit 26 -> trunc(fr15 * 510) with fr15 = (objAlpha > 0.98 ? 0.5 : objAlpha * 0.5); else the vertex alpha
 *      trunc(amb'_A * 510 + diffuse_A * 510 * v_A). Additive textures (texture-struct flags & 0x20) under S bit 26 are "constant colour": R=G=B=A=trunc(fr15 * 510) (fr15 = 1 when S bit 3).
 *   4. After lighting the game fades additive geometry with distance (CpaLightFade, f_8c07a100): alpha = 255 - reduction(z), z = camera depth of the vertex.
 *
 * Draw flags S: the guest ANDs the call's draw-flag word into the VM flags; the word is not decoded. cpa_light uses S = VM.flags (draw flags all ones); with that the RGB of every
 * matched static vertex is reproduced (see lightcmp_static). The offset colour (fog / bump coefficients) is NOT produced here.
 *
 * Evidence tags: VERIFIED = reproduced against the oracle TA stream by tools/cpa_tests/lightcmp_static.c / lightcmp_actor.c (numbers in re_analysis/dc/notes_lighting.md),
 * INFERRED = fits, UNKNOWN = not decoded. */
#ifndef CPA_LIGHT_H
#define CPA_LIGHT_H

#include "cpa_image.h"

/* Packed vertex colour exactly as the TA stream word: A<<24 | R<<16 | G<<8 | B. */
#define CPA_ARGB(a, r, g, b) (((uint32_t)(a) << 24) | ((uint32_t)(r) << 16) | ((uint32_t)(g) << 8) | (uint32_t)(b))

/* ---------------- material ---------------- */
typedef struct CpaLightMat {
    float    amb[4], dif[4];        /* VisualMaterial +8 .. +0x14 and +0x18 .. +0x24, RGBA */
    uint32_t flags;                 /* VisualMaterial +0 (VERIFIED field; bit 3 and bit 26 are the ones that matter here) */
    uint32_t texFlags;              /* texture struct (VM+0x4C) flags +4, bit 31 stripped; bit 0x20 = additive. The caller may overwrite it with the post-load value */
    uint32_t vm, tex;               /* addresses (diagnostics / de-duplication) */
    uint8_t  valid;
} CpaLightMat;
/* Reads a VisualMaterial. Returns 1 on success. */
int cpa_light_mat_read(const CpaImage *im, uint32_t vmVa, CpaLightMat *m);

/* ---------------- environment of one draw ---------------- */
typedef struct CpaLightEnv {
    float    G[4];                  /* object-wide ambient accumulator (guest gbr+64): sum of the ambient (type 4) lights; 0 for static geometry */
    float    objAlpha;              /* guest light-material word 0 (object transparency level), 1.0 normally */
    float    brightness;            /* added to the diffuse RGB (guest: *0x8C0C7FE4 - 0.5, 0 in every capture) */
    uint32_t drawFlags;             /* ANDed into the VM flags; 0xFFFFFFFF = VM flags as they are (INFERRED, see header) */
} CpaLightEnv;
void cpa_light_env_default(CpaLightEnv *e);

/* Packed ARGB of one vertex: v = accumulator (r,g,b,a), already scaled (RLI s16 / 256, or the sum of light contributions). */
uint32_t cpa_light_argb(const CpaLightMat *m, const CpaLightEnv *e, const float v[4]);

/* ---------------- static geometry: RLI ---------------- */
/* IPO struct (SuperObject.data) -> RLI. Returns the VA of the first vertex entry (4 x s16 each, 8 bytes) and the entry count, or 0 when the IPO has none / the table is unreadable. */
uint32_t cpa_light_rli(const CpaImage *im, uint32_t ipoVa, uint32_t *count);
/* Reads entry i (the 4 raw s16) and converts to the float4 accumulator (s16 / 256). */
int cpa_light_rli_entry(const CpaImage *im, uint32_t dataVa, uint32_t i, int16_t raw[4], float v[4]);

/* ---------------- light sources (actors) ---------------- */
enum { CPA_LIGHT_PARALLEL = 1, CPA_LIGHT_OMNI = 2, CPA_LIGHT_SPOT = 3, CPA_LIGHT_AMBIENT = 4, CPA_LIGHT_TYPE5 = 5 };
typedef struct CpaLight {
    uint32_t va;
    int32_t  type;                  /* light struct +4 */
    uint8_t  enabled;               /* +0x9c */
    uint8_t  chanMode;              /* +0x9f: 0 = RGBA, 1 = alpha only, other = RGB only (VERIFIED for parallel + ambient) */
    float    axis[3];               /* world-space axis the parallel light shines along: column 2 of the 3x3 at +0x28 (VERIFIED, Learn_10 etc.) */
    float    pos[3];                /* world position (matrix row 3, +0x7C) */
    float    col[4];                /* +0x8C RGBA */
    float    param[2];              /* +8, +0xC (omni range / falloff, not used) */
} CpaLight;
int cpa_light_read(const CpaImage *im, uint32_t va, CpaLight *L);
/* Reads the guest light list (SHADOW MODE ONLY: guest RAM addresses 0x8C2DD4B4 pointer array; the count word 0x8C2DD964 is 0 between frames, so the list is read until the first
 * non-pointer, max `max` entries). Returns the number of lights read. */
uint32_t cpa_light_read_ram_list(const CpaImage *ram, CpaLight *out, uint32_t max);

/* Adds light L's contribution for a vertex whose world-space normal is nW (NOT normalised: the guest transforms the light axis into object space with the object's 3x3 and dots with the
 * stored unit normal, so the transform's scale enters the dot) to the vertex accumulator v. Parallel light: col * max(0, -(nW . axis)) per channel selected by chanMode. Ambient lights add nothing per vertex (they are
 * object-wide, see cpa_light_env_from_list) and return 1. Returns 1 if the light type is implemented, 0 for omni / spot / type 5 (UNKNOWN, contribution skipped). */
int cpa_light_accum(const CpaLight *L, const float nW[3], float v[4], CpaLightEnv *env);
/* Object-wide part only (ambient lights): fills env->G from the list. */
void cpa_light_env_from_list(const CpaLight *L, uint32_t n, CpaLightEnv *env);

/* ---------------- distance fade of additive geometry ---------------- */
typedef struct CpaLightFade {
    int   enabled;
    float p[5];                     /* guest block (0x8C140EA8 when the flag word 0x8C140EA4 has bit 3, else 0x8C140EC0): p0 near, p1 far, p2 cut-off, p3 reduction at p0, p4 slope */
} CpaLightFade;
/* alpha byte after the fade for a vertex at camera depth zc (Zc of ta_compare), given the unfaded alpha. objAlpha / drawBit3 as f_8c07a100:
 * reduction = zc < p0 ? trunc(p3) : zc < p1 ? trunc(p3 + p4 * (zc - p0)) : zc < p2 ? trunc(p3 + p4 * (p1 - p0)) : 255; alpha = 255 - reduction, and when draw bit 3 is clear and objAlpha < 0.98
 * alpha = min(alpha, trunc(objAlpha * 255)). VERIFIED on the Jail_10 / Learn_10 / Nave_20 / Helic_30 faded additive polygons (lightcmp_static). The fade parameters themselves come from
 * runtime state (level script); their source is UNKNOWN, shadow mode reads them from guest RAM. */
int cpa_light_fade_alpha(const CpaLightFade *f, float zc, float objAlpha, int drawBit3);
/* Applies the fade to a packed colour (only alpha changes) when f->enabled and the material is additive (texFlags & 0x20). */
uint32_t cpa_light_fade_argb(const CpaLightFade *f, const CpaLightMat *m, uint32_t argb, float zc, float objAlpha);
/* SHADOW MODE ONLY: reads the fade block from guest RAM (0x8C140EA4 flag, 0x8C140EA8 / 0x8C140EC0 blocks). Returns 1 if the block describes a fade (p1 > p0). */
int cpa_light_fade_from_ram(const CpaImage *ram, CpaLightFade *f);

#endif
