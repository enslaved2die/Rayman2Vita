/* cpa_gl_backend: see header. Host build: tools/sh4recomp/hle/tests_ta/fakegl on the include path (+ tools/cpa_tests/shadow_glext.h force-included). */
#include <vitaGL.h>
#include "cpa_gl_backend.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

void cpa_gl_config_default(CpaGlConfig *c) { memset(c, 0, sizeof *c); c->farZ = 4000.0f; c->drawLayer2 = 1; c->clear = 1; c->clearColor[3] = 1.0f; c->layer2Alpha = 1.0f; c->hudReanchor = 1; }

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
    memset(b->tex, 0, sizeof b->tex); b->nTex = 0; free(b->hudV); b->hudV = NULL; b->hudCap = 0;
}

static int wrap_enum(unsigned m) { return m == CPA_WRAP_CLAMP ? GL_CLAMP_TO_EDGE : m == CPA_WRAP_MIRROR ? GL_MIRRORED_REPEAT : GL_REPEAT; }

static void be_upload(void *user, const CpaTexDesc *t) {
    CpaGlBackend *b = (CpaGlBackend *)user; int s = tex_find(b, t->texVa);
    if (s >= 0) return;
    s = -s - 1; if (s >= CPA_GL_TEXSLOTS) return;
    static uint8_t grey[8 * 8 * 4]; static int gi;
    if (!gi) { memset(grey, 0x80, sizeof grey); for (int i = 3; i < 8 * 8 * 4; i += 4) grey[i] = 0xFF; gi = 1; }
    GLuint id = 0; glGenTextures(1, &id); glBindTexture(GL_TEXTURE_2D, id); b->curTex = -1;
    int real = t->rgba && t->width && t->height, mip = real && t->mip;
    /* Level 0 only, RGBA8 straight from cpa_tex (VERIFIED byte-exact vs the oracle's decode, transparent-texel bleed included); mips are generated like the oracle's GL path does for PVR mip chains.
     * Filter: bilinear, nearest mip level when a chain exists (GL_LINEAR_MIPMAP_NEAREST) = the PVR filter field value 1 (see WRAPCHK/FILTCHK in shadow_run for what the game uses). */
    if (real) glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, t->width, t->height, 0, GL_RGBA, GL_UNSIGNED_BYTE, t->rgba);
    else glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 8, 8, 0, GL_RGBA, GL_UNSIGNED_BYTE, grey);   /* placeholder: the provider could not decode this VA */
    if (mip) glGenerateMipmap(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, mip ? GL_LINEAR_MIPMAP_NEAREST : GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    uint8_t wu = real ? t->wrapU : CPA_WRAP_REPEAT, wv = real ? t->wrapV : CPA_WRAP_REPEAT;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap_enum(wu)); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap_enum(wv));
    b->tex[s].va = t->texVa; b->tex[s].id = id; b->tex[s].wrapU = wu; b->tex[s].wrapV = wv; b->tex[s].mip = (uint8_t)mip; b->tex[s].placeholder = (uint8_t)!real; b->nTex++;
    if (real) b->nUploaded++; else b->nPlaceholder++;
}

static void set_cap(GLenum cap, int *cur, int on) { if (*cur == on) return; if (on) glEnable(cap); else glDisable(cap); *cur = on; }

static void be_begin(void *user, const CpaRenderFrame *f) {
    CpaGlBackend *b = (CpaGlBackend *)user; float proj[16], mv[16];
    b->verts = f->verts; b->drawsIssued = b->drawsSkipped = b->drawsLayer2 = b->drawsPlaceholder = 0;
    cpa_gl_build_matrices(&f->cam, f->w, f->h, f->fit, b->cfg.farZ, proj, mv);
    glViewport(0, 0, f->w, f->h);
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(proj); glMatrixMode(GL_MODELVIEW); glLoadMatrixf(mv);
    if (b->cfg.clear) { glClearColor(b->cfg.clearColor[0], b->cfg.clearColor[1], b->cfg.clearColor[2], b->cfg.clearColor[3]); glDepthMask(GL_TRUE); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); }
    glEnableClientState(GL_VERTEX_ARRAY); glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glVertexPointer(3, GL_FLOAT, (int)sizeof(CpaRenderVertex), &f->verts[0].x);
    glTexCoordPointer(2, GL_FLOAT, (int)sizeof(CpaRenderVertex), &f->verts[0].u);
    /* Per-vertex colour = the game's TA vertex ARGB (cpa_light.h), 4 unsigned bytes R,G,B,A inside CpaRenderVertex; modulates the texture (GL_MODULATE) like the TSP "modulate alpha" shading.
     * The fake GL of the host tests reads the colour pointer unconditionally (16 bytes per vertex): the frame's vertex array has one spare vertex for that. */
    glEnableClientState(GL_COLOR_ARRAY); glColorPointer(4, GL_UNSIGNED_BYTE, (int)sizeof(CpaRenderVertex), &f->verts[0].r);
    glColor4f(1, 1, 1, 1);
    glFrontFace(GL_CCW); glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LEQUAL);     /* LEQUAL: layer 2 re-draws the exact base depth */
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    b->curTex = -1; b->blendOn = b->alphaOn = b->cullOn = -1; b->depthWrite = 1; b->curSrc = b->curDst = 0xFFFFFFFFu; b->colorA = 1.0f; b->colorArrayOn = 1;
}

static void be_draw(void *user, const CpaRenderFrame *f, const CpaRenderDraw *d) {
    CpaGlBackend *b = (CpaGlBackend *)user; (void)f;
    if (!d->count) return;
    if (d->layer && (!b->cfg.drawLayer2 || !d->texVa)) { b->drawsSkipped++; return; }
    int s = d->texVa ? tex_find(b, d->texVa) : -1;
    if (d->texVa && s < 0) { b->drawsSkipped++; return; }          /* texture was never uploaded */
    if (d->texVa) {
        if (b->curTex != s) { glBindTexture(GL_TEXTURE_2D, b->tex[s].id); b->curTex = s; }
        if (b->tex[s].wrapU != d->wrapU) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap_enum(d->wrapU)); b->tex[s].wrapU = d->wrapU; }
        if (b->tex[s].wrapV != d->wrapV) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap_enum(d->wrapV)); b->tex[s].wrapV = d->wrapV; }
        if (b->tex[s].placeholder) b->drawsPlaceholder++;
    }
    /* Layer 2 (second texture layer, overlayMode 1..3). INFERRED approximation of the bump lighting: the game draws the polygon a second time with a resident 64x64 PVR2 bump map (S/R
     * texels), UVs x8, translucent (src alpha, inv src alpha, VERIFIED TSP), the bump coefficients K1..K3,Q coming per polygon from the offset colour (UNKNOWN per polygon; the oracle's
     * fixed K measured on the game's strips are used when the texture is decoded). The result of that decode is a WHITE texture whose alpha is the bump intensity, so the layer is a
     * white detail/grain pattern blended over the base. We draw exactly that with a constant light direction (the decode's Q) and a constant strength (cfg.layer2Alpha); the true per-polygon
     * light direction/strength and the substitute noise (the real map is generated per boot) are NOT reproduced. */
    float ca = d->layer ? b->cfg.layer2Alpha : 1.0f;
    if (d->layer && b->colorArrayOn) { glDisableClientState(GL_COLOR_ARRAY); b->colorArrayOn = 0; }      /* layer 2: constant colour (bump coefficients UNKNOWN) */
    else if (!d->layer && !b->colorArrayOn) { glEnableClientState(GL_COLOR_ARRAY); b->colorArrayOn = 1; }
    if (b->colorA != ca) { glColor4f(1, 1, 1, ca); b->colorA = ca; }
    if (d->layer) b->drawsLayer2++;
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
void cpa_gl_build_hud_matrix(float aspect, float P[16]) {
    float wv = 480.0f * aspect; memset(P, 0, 16 * sizeof(float));
    P[0] = 2.0f / wv; P[5] = -2.0f / 480.0f; P[10] = 1.0f; P[12] = -1.0f; P[13] = 1.0f; P[15] = 1.0f;
}

/* 2D pass: the guest's TA screen (640x480 virtual, y down, no depth) over the viewport. 4:3 viewport = the oracle layout (VERIFIED quad geometry/texture/colour/list, hud_compare); other aspects: DESIGN. */
static void be_draw_hud(void *user, const CpaRenderFrame *f) {
    CpaGlBackend *b = (CpaGlBackend *)user; float P[16], aspect = 4.0f / 3.0f; int vx = 0, vw = f->w;
    b->hudDraws = b->hudSkipped = 0;
    if (!f->nHud || f->w <= 0 || f->h <= 0) return;
    if (f->fit == CPA_FIT_PILLARBOX43) { vw = (int)((float)f->h * 4.0f / 3.0f + 0.5f); if (vw > f->w) vw = f->w; vx = (f->w - vw) / 2; }
    else if (f->fit == CPA_FIT_HORPLUS) { aspect = (float)f->w / (float)f->h; if (aspect < 4.0f / 3.0f) aspect = 4.0f / 3.0f; }
    if ((uint32_t)(f->nHud * 6 + 1) > b->hudCap) { uint32_t nc = f->nHud * 6 + 1; CpaRenderVertex *p = (CpaRenderVertex *)realloc(b->hudV, nc * sizeof *p); if (!p) return; b->hudV = p; b->hudCap = nc; }
    cpa_gl_build_hud_matrix(aspect, P);
    glViewport(vx, 0, vw, f->h);
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(P); glMatrixMode(GL_MODELVIEW); glLoadIdentity();
    glDisable(GL_DEPTH_TEST); set_cap(GL_CULL_FACE, &b->cullOn, 0); set_cap(GL_ALPHA_TEST, &b->alphaOn, 0);
    if (b->depthWrite != 0) { glDepthMask(GL_FALSE); b->depthWrite = 0; }
    if (!b->colorArrayOn) { glEnableClientState(GL_COLOR_ARRAY); b->colorArrayOn = 1; }
    glEnableClientState(GL_VERTEX_ARRAY); glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glVertexPointer(3, GL_FLOAT, (int)sizeof(CpaRenderVertex), &b->hudV[0].x);
    glTexCoordPointer(2, GL_FLOAT, (int)sizeof(CpaRenderVertex), &b->hudV[0].u);
    glColorPointer(4, GL_UNSIGNED_BYTE, (int)sizeof(CpaRenderVertex), &b->hudV[0].r);
    if (b->colorA != 1.0f) { glColor4f(1, 1, 1, 1); b->colorA = 1.0f; }
    for (uint32_t i = 0; i < f->nHud; i++) {
        const CpaRenderHud *h = &f->hud[i]; const CpaHudQuad *q = &h->q;
        int s = q->texVa ? tex_find(b, q->texVa) : -1;
        if (q->texVa && s < 0) { b->hudSkipped++; continue; }
        CpaRenderVertex *v = &b->hudV[0];
        static const int ord[6] = { 0, 1, 2, 1, 3, 2 };            /* strip A,B,C,D = triangles (A,B,C),(B,C,D) */
        float dx = 0;
        if (aspect > 4.0f / 3.0f + 1e-4f) dx = b->cfg.hudReanchor ? cpa_hud_reanchor_x(0.0f, q->anchor, aspect) : (480.0f * aspect - 640.0f) * 0.5f;
        for (int k = 0; k < 6; k++) {
            int j = ord[k]; v[k].x = q->x[j] + dx; v[k].y = q->y[j]; v[k].z = 0.0f; v[k].u = q->u[j]; v[k].v = q->v[j];
            v[k].a = (uint8_t)(q->argb[j] >> 24); v[k].r = (uint8_t)(q->argb[j] >> 16); v[k].g = (uint8_t)(q->argb[j] >> 8); v[k].b = (uint8_t)q->argb[j];
        }
        if (q->texVa) {
            if (b->curTex != s) { glBindTexture(GL_TEXTURE_2D, b->tex[s].id); b->curTex = s; }
            if (b->tex[s].wrapU != h->wrapU) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap_enum(h->wrapU)); b->tex[s].wrapU = h->wrapU; }
            if (b->tex[s].wrapV != h->wrapV) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap_enum(h->wrapV)); b->tex[s].wrapV = h->wrapV; }
        }
        int blend = h->blend != CPA_BLEND_NONE; set_cap(GL_BLEND, &b->blendOn, blend);
        if (blend) { unsigned dst = h->blend == CPA_BLEND_ADD ? GL_ONE : GL_ONE_MINUS_SRC_ALPHA; if (b->curSrc != GL_SRC_ALPHA || b->curDst != dst) { glBlendFunc(GL_SRC_ALPHA, dst); b->curSrc = GL_SRC_ALPHA; b->curDst = dst; } }
        glDrawArrays(GL_TRIANGLES, 0, 6); b->hudDraws++;
    }
}
static void be_end(void *user) { (void)user; }

void cpa_gl_backend_vtable(CpaGlBackend *b, CpaRenderBackend *out) {
    memset(out, 0, sizeof *out); out->user = b; out->begin_frame = be_begin; out->upload_texture = be_upload; out->draw = be_draw; out->draw_hud = be_draw_hud; out->end_frame = be_end;
}
