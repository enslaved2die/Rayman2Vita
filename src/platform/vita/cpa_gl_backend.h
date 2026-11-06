/* cpa_gl_backend: vitaGL / fixed-function GL consumer of the native render path (src/cpa/cpa_render.h). Written against the GL API subset that vitaGL provides and that the host
 * fake tools/sh4recomp/hle/tests_ta/fakegl implements; COMPILE-CHECKED AND COUNTED ON THE HOST ONLY (never run on a Vita, not wired into any real build file).
 * State rules (docs/NATIVE_ENGINE.md 'N1 gap closure', cpa_drawlist.h): opaque = no blend, back faces culled; cutout = alpha test, two-sided (INFERRED); translucent = blend
 * (SRC_ALPHA, ONE_MINUS_SRC_ALPHA) or additive (SRC_ALPHA, ONE), two-sided, depth test without depth write. wrap: GL_REPEAT / GL_CLAMP_TO_EDGE / GL_MIRRORED_REPEAT per texture object (CPA_WRAP_*).
 * Textures: CpaTexDesc pixels (RGBA8 level 0 from cpa_tex, bleed applied) are uploaded as is, mips generated with glGenerateMipmap when the PVR has a chain, bilinear filtering (the oracle's strips
 * all use TSP filter 1, MEASURED); a VA the provider cannot describe gets a grey 8x8 placeholder (counted in nPlaceholder). Layer 2 is drawn (cfg.drawLayer2) with the substitute bump texture, src-alpha blend.
 * Projection: the verified oracle camera (cpa_camera.h): sx = cx - fx*(L.r)/Zc, sy = cy - fy*(U.r)/Zc with eye = (-L.r, U.r, -F.r); front faces are CCW in GL (y up). */
#ifndef CPA_GL_BACKEND_H
#define CPA_GL_BACKEND_H
#include "../../cpa/cpa_render.h"

typedef struct CpaGlConfig {
    float farZ;                 /* default 4000 (matched oracle vertices reach Zc 1889) */
    int   drawLayer2;           /* default 1: layer-2 batches are drawn with the substitute bump texture (CPA_TEXVA_BUMP*). 0 skips them */
    int   clear;                /* default 1: clear colour+depth in begin_frame */
    float clearColor[4];
    int   hudReanchor;          /* default 1: HUD pass on a wider-than-4:3 HORPLUS viewport re-anchors every quad by its anchor class (cpa_hud_reanchor_x, DESIGN - only the 4:3 identity is oracle-verified); 0 = centre the 640-wide block */
    float layer2Alpha;          /* default 1.0: constant alpha multiplied onto the layer-2 bump texture (glColor4f). INFERRED approximation of the lighting, see be_draw. Base draws use the per-vertex colour array */
} CpaGlConfig;
void cpa_gl_config_default(CpaGlConfig *c);

/* Pure math, host-testable: column-major GL matrices for the oracle camera model at a viewport (cpa_proj_init semantics, any CpaFit). */
void cpa_gl_build_matrices(const CpaCamera *cam, int w, int h, CpaFit fit, float farZ, float proj[16], float modelview[16]);

/* Pure math, host-testable: column-major ortho matrix of the HUD pass, x in [0, 480*aspect] -> NDC -1..1 (left to right), y in [0,480] -> NDC +1..-1 (top to bottom), z = 0. */
void cpa_gl_build_hud_matrix(float aspect, float proj[16]);

#define CPA_GL_TEXSLOTS 4096
typedef struct CpaGlBackend {
    CpaGlConfig cfg;
    struct { uint32_t va; unsigned id; uint8_t wrapU, wrapV, mip, placeholder; } tex[CPA_GL_TEXSLOTS]; uint32_t nTex;   /* wrapU/V = CPA_WRAP_* currently set on the GL object */
    const CpaRenderVertex *verts;
    int curTex, blendOn, alphaOn, cullOn, depthWrite; unsigned curSrc, curDst; int init; float colorA; int colorArrayOn;   /* colorArrayOn: GL_COLOR_ARRAY (per-vertex lighting colour) enabled; off on layer-2 draws */
    uint32_t drawsIssued, drawsSkipped, drawsLayer2;
    uint32_t nUploaded, nPlaceholder;      /* textures uploaded with real pixels / with the grey placeholder (describe failed) */
    uint32_t drawsPlaceholder;             /* issued draws that sampled a placeholder texture */
    CpaRenderVertex *hudV; uint32_t hudCap;   /* scratch for the 2D pass (6 vertices per quad + 1 spare) */
    uint32_t hudDraws, hudSkipped;         /* HUD quads drawn / skipped (texture never uploaded) in the last frame */
} CpaGlBackend;
void cpa_gl_backend_init(CpaGlBackend *b, const CpaGlConfig *cfg);   /* cfg NULL = defaults; backend may be reused for many frames */
void cpa_gl_backend_shutdown(CpaGlBackend *b);                       /* deletes textures */
void cpa_gl_backend_vtable(CpaGlBackend *b, CpaRenderBackend *out);
#endif
