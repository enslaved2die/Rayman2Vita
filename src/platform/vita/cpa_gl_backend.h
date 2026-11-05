/* cpa_gl_backend: vitaGL / fixed-function GL consumer of the native render path (src/cpa/cpa_render.h). Written against the GL API subset that vitaGL provides and that the host
 * fake tools/sh4recomp/hle/tests_ta/fakegl implements; COMPILE-CHECKED AND COUNTED ON THE HOST ONLY (never run on a Vita, not wired into any real build file).
 * State rules (docs/NATIVE_ENGINE.md 'N1 gap closure', cpa_drawlist.h): opaque = no blend, back faces culled; cutout = alpha test, two-sided (INFERRED); translucent = blend
 * (SRC_ALPHA, ONE_MINUS_SRC_ALPHA) or additive (SRC_ALPHA, ONE), two-sided, depth test without depth write. wrap: GL_REPEAT / GL_CLAMP_TO_EDGE per texture object.
 * Projection: the verified oracle camera (cpa_camera.h): sx = cx - fx*(L.r)/Zc, sy = cy - fy*(U.r)/Zc with eye = (-L.r, U.r, -F.r); front faces are CCW in GL (y up). */
#ifndef CPA_GL_BACKEND_H
#define CPA_GL_BACKEND_H
#include "../../cpa/cpa_render.h"

typedef struct CpaGlConfig {
    float farZ;                 /* default 4000 (matched oracle vertices reach Zc 1889) */
    int   drawLayer2;           /* default 0: the layer-2 texture is unknown (texVa 0), such draws are skipped by the backend; counted by the builder anyway */
    int   clear;                /* default 1: clear colour+depth in begin_frame */
    float clearColor[4];
} CpaGlConfig;
void cpa_gl_config_default(CpaGlConfig *c);

/* Pure math, host-testable: column-major GL matrices for the oracle camera model at a viewport (cpa_proj_init semantics, any CpaFit). */
void cpa_gl_build_matrices(const CpaCamera *cam, int w, int h, CpaFit fit, float farZ, float proj[16], float modelview[16]);

#define CPA_GL_TEXSLOTS 4096
typedef struct CpaGlBackend {
    CpaGlConfig cfg;
    struct { uint32_t va; unsigned id; uint8_t wrapU, wrapV; } tex[CPA_GL_TEXSLOTS]; uint32_t nTex;
    const CpaRenderVertex *verts;
    int curTex, blendOn, alphaOn, cullOn, depthWrite; unsigned curSrc, curDst; int init;
    uint32_t drawsIssued, drawsSkipped;
} CpaGlBackend;
void cpa_gl_backend_init(CpaGlBackend *b, const CpaGlConfig *cfg);   /* cfg NULL = defaults; backend may be reused for many frames */
void cpa_gl_backend_shutdown(CpaGlBackend *b);                       /* deletes textures */
void cpa_gl_backend_vtable(CpaGlBackend *b, CpaRenderBackend *out);
#endif
