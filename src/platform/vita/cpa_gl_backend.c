/* cpa_gl_backend: see header. Host build: tools/sh4recomp/hle/tests_ta/fakegl on the include path (+ tools/cpa_tests/shadow_glext.h force-included). */
#include <vitaGL.h>
#include "cpa_gl_backend.h"
#include <math.h>
#include <string.h>

void cpa_gl_config_default(CpaGlConfig *c) { memset(c, 0, sizeof *c); c->farZ = 4000.0f; c->drawLayer2 = 0; c->clear = 1; c->clearColor[3] = 1.0f; }

void cpa_gl_build_matrices(const CpaCamera *cam, int w, int h, CpaFit fit, float farZ, float proj[16], float mv[16]) {
    CpaProj p; cpa_proj_init(&p, cam, w, h, fit);
    float n = cam->nearZ > 0 ? cam->nearZ : CPA_NEAR_ZC, f = farZ;
    memset(proj, 0, 64);
    proj[0] = 2.0f * p.fx / (float)w; proj[5] = 2.0f * p.fy / (float)h;
    proj[10] = -(f + n) / (f - n); proj[14] = -2.0f * f * n / (f - n); proj[11] = -1.0f;
    /* principal point is the viewport centre (cpa_proj_init), so no x/y offset terms */
    float d[3][3], t[3] = { 0, 0, 0 };
    for (int j = 0; j < 3; j++) { d[0][j] = -cam->left[j]; d[1][j] = cam->up[j]; d[2][j] = -cam->fwd[j]; }
    memset(mv, 0, 64);
    for (int r = 0; r < 3; r++) { for (int j = 0; j < 3; j++) { mv[j * 4 + r] = d[r][j]; t[r] -= d[r][j] * cam->pos[j]; } mv[12 + r] = t[r]; }
    mv[15] = 1.0f;
}

static uint32_t slot(uint32_t va) { return ((va >> 2) * 2654435761u) & (CPA_GL_TEXSLOTS - 1); }
/* >= 0: slot of va; < 0: -(free slot)-1; full table -> -CPA_GL_TEXSLOTS-1 */
static int tex_find(const CpaGlBackend *b, uint32_t va) {
    uint32_t s = slot(va);
    for (uint32_t i = 0; i < CPA_GL_TEXSLOTS; i++, s = (s + 1) & (CPA_GL_TEXSLOTS - 1)) { if (!b->tex[s].va) return -(int)s - 1; if (b->tex[s].va == va) return (int)s; }
    return -CPA_GL_TEXSLOTS - 1;
}

void cpa_gl_backend_init(CpaGlBackend *b, const CpaGlConfig *cfg) {
    memset(b, 0, sizeof *b); if (cfg) b->cfg = *cfg; else cpa_gl_config_default(&b->cfg);
    b->curTex = -1; b->blendOn = b->alphaOn = b->cullOn = -1; b->depthWrite = -1; b->curSrc = b->curDst = 0xFFFFFFFFu; b->init = 1;
}
void cpa_gl_backend_shutdown(CpaGlBackend *b) {
    for (uint32_t i = 0; i < CPA_GL_TEXSLOTS; i++) if (b->tex[i].va) { GLuint id = b->tex[i].id; glDeleteTextures(1, &id); }
    memset(b->tex, 0, sizeof b->tex); b->nTex = 0;
}

static void be_upload(void *user, const CpaTexDesc *t) {
    CpaGlBackend *b = (CpaGlBackend *)user; int s = tex_find(b, t->texVa);
    if (s >= 0) return;
    s = -s - 1; if (s >= CPA_GL_TEXSLOTS) return;
    static uint8_t grey[8 * 8 * 4]; static int gi;
    if (!gi) { memset(grey, 0x80, sizeof grey); for (int i = 3; i < 8 * 8 * 4; i += 4) grey[i] = 0xFF; gi = 1; }
    GLuint id = 0; glGenTextures(1, &id); glBindTexture(GL_TEXTURE_2D, id); b->curTex = -1;
    if (t->rgba && t->width && t->height) glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, t->width, t->height, 0, GL_RGBA, GL_UNSIGNED_BYTE, t->rgba);
    else glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 8, 8, 0, GL_RGBA, GL_UNSIGNED_BYTE, grey);   /* placeholder: PVR decode is not in src/cpa yet */
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    b->tex[s].va = t->texVa; b->tex[s].id = id; b->tex[s].wrapU = b->tex[s].wrapV = 1; b->nTex++;
}

static void set_cap(GLenum cap, int *cur, int on) { if (*cur == on) return; if (on) glEnable(cap); else glDisable(cap); *cur = on; }

static void be_begin(void *user, const CpaRenderFrame *f) {
    CpaGlBackend *b = (CpaGlBackend *)user; float proj[16], mv[16];
    b->verts = f->verts; b->drawsIssued = b->drawsSkipped = 0;
    cpa_gl_build_matrices(&f->cam, f->w, f->h, f->fit, b->cfg.farZ, proj, mv);
    glViewport(0, 0, f->w, f->h);
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(proj); glMatrixMode(GL_MODELVIEW); glLoadMatrixf(mv);
    if (b->cfg.clear) { glClearColor(b->cfg.clearColor[0], b->cfg.clearColor[1], b->cfg.clearColor[2], b->cfg.clearColor[3]); glDepthMask(GL_TRUE); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); }
    glEnableClientState(GL_VERTEX_ARRAY); glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glVertexPointer(3, GL_FLOAT, (int)sizeof(CpaRenderVertex), &f->verts[0].x);
    glTexCoordPointer(2, GL_FLOAT, (int)sizeof(CpaRenderVertex), &f->verts[0].u);
#ifdef CPA_GL_HOST_FAKE
    { static const float white[4] = { 1, 1, 1, 1 }; glEnableClientState(GL_COLOR_ARRAY); glColorPointer(4, GL_FLOAT, 0, white); }   /* the fake reads the colour array unconditionally */
#else
    glDisableClientState(GL_COLOR_ARRAY);
#endif
    glColor4f(1, 1, 1, 1);                               /* vertex colours / lighting are not decoded yet */
    glFrontFace(GL_CCW); glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LEQUAL);     /* LEQUAL: layer 2 re-draws the exact base depth */
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    b->curTex = -1; b->blendOn = b->alphaOn = b->cullOn = -1; b->depthWrite = 1; b->curSrc = b->curDst = 0xFFFFFFFFu;
}

static void be_draw(void *user, const CpaRenderFrame *f, const CpaRenderDraw *d) {
    CpaGlBackend *b = (CpaGlBackend *)user; (void)f;
    if (!d->count) return;
    if (d->layer && (!b->cfg.drawLayer2 || !d->texVa)) { b->drawsSkipped++; return; }
    int s = d->texVa ? tex_find(b, d->texVa) : -1;
    if (d->texVa && s < 0) { b->drawsSkipped++; return; }          /* texture was never uploaded */
    if (d->texVa) {
        if (b->curTex != s) { glBindTexture(GL_TEXTURE_2D, b->tex[s].id); b->curTex = s; }
        if (b->tex[s].wrapU != d->wrapU) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, d->wrapU ? GL_REPEAT : GL_CLAMP_TO_EDGE); b->tex[s].wrapU = d->wrapU; }
        if (b->tex[s].wrapV != d->wrapV) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, d->wrapV ? GL_REPEAT : GL_CLAMP_TO_EDGE); b->tex[s].wrapV = d->wrapV; }
    }
    int blend = d->blend != CPA_BLEND_NONE;
    set_cap(GL_BLEND, &b->blendOn, blend);
    if (blend) { unsigned dst = d->blend == CPA_BLEND_ADD ? GL_ONE : GL_ONE_MINUS_SRC_ALPHA; if (b->curSrc != GL_SRC_ALPHA || b->curDst != dst) { glBlendFunc(GL_SRC_ALPHA, dst); b->curSrc = GL_SRC_ALPHA; b->curDst = dst; } }
    if (d->alphaTest && b->alphaOn != 1) glAlphaFunc(GL_GREATER, 0.5f);
    set_cap(GL_ALPHA_TEST, &b->alphaOn, d->alphaTest);
    set_cap(GL_CULL_FACE, &b->cullOn, d->cullBack);
    int dw = d->pass != CPA_PASS_TRANSLUCENT;                      /* translucent: depth test, no depth write */
    if (b->depthWrite != dw) { glDepthMask(dw ? GL_TRUE : GL_FALSE); b->depthWrite = dw; }
    glDrawArrays(GL_TRIANGLES, (int)d->first, (int)d->count); b->drawsIssued++;
}
static void be_end(void *user) { (void)user; }

void cpa_gl_backend_vtable(CpaGlBackend *b, CpaRenderBackend *out) {
    memset(out, 0, sizeof *out); out->user = b; out->begin_frame = be_begin; out->upload_texture = be_upload; out->draw = be_draw; out->end_frame = be_end;
}
