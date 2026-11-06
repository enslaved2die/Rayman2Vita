/* Counting stand-in for vitaGL, used by test_glcount.c to run the real hle/vita_gl_render.c on the host and count what it would submit to the GPU driver. */
#pragma once
#include <stdint.h>
#include <string.h>
#include <stdio.h>
typedef unsigned int GLuint, GLenum, GLbitfield; typedef int GLint, GLsizei; typedef float GLfloat; typedef unsigned char GLboolean; typedef void GLvoid;
enum { GL_FALSE = 0, GL_TRUE = 1, GL_DEPTH_TEST = 0xB71, GL_BLEND = 0xBE2, GL_ALPHA_TEST = 0xBC0, GL_TEXTURE_2D = 0xDE1, GL_CULL_FACE = 0xB44, GL_SCISSOR_TEST = 0xC11, GL_STENCIL_TEST = 0xB90,
       GL_COLOR_BUFFER_BIT = 0x4000, GL_DEPTH_BUFFER_BIT = 0x100, GL_STENCIL_BUFFER_BIT = 0x400,
       GL_NEVER = 0x200, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS,
       GL_ZERO = 0, GL_ONE = 1, GL_SRC_COLOR = 0x300, GL_ONE_MINUS_SRC_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
       GL_PROJECTION = 0x1701, GL_MODELVIEW = 0x1700, GL_FLOAT = 0x1406, GL_UNSIGNED_BYTE = 0x1401, GL_RGBA = 0x1908, GL_RGB = 0x1907, GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033, GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034, GL_UNSIGNED_SHORT_5_6_5 = 0x8363, GL_TRIANGLES = 4,
       GL_VERTEX_ARRAY = 0x8074, GL_COLOR_ARRAY = 0x8076, GL_TEXTURE_COORD_ARRAY = 0x8078,
       GL_TEXTURE_ENV = 0x2300, GL_TEXTURE_ENV_MODE = 0x2200, GL_REPLACE = 0x1E01, GL_MODULATE = 0x2100, GL_DECAL = 0x2101,
       GL_TEXTURE_MIN_FILTER = 0x2801, GL_TEXTURE_MAG_FILTER = 0x2800, GL_TEXTURE_WRAP_S = 0x2802, GL_TEXTURE_WRAP_T = 0x2803,
       GL_NEAREST = 0x2600, GL_LINEAR = 0x2601, GL_NEAREST_MIPMAP_NEAREST = 0x2700, GL_LINEAR_MIPMAP_NEAREST = 0x2701, GL_LINEAR_MIPMAP_LINEAR = 0x2703,
       GL_REPEAT = 0x2901, GL_CLAMP_TO_EDGE = 0x812F, GL_MIRRORED_REPEAT = 0x8370, GL_KEEP = 0x1E00, GL_INVERT = 0x150A };
#define SCE_GXM_MULTISAMPLE_NONE 0
/* ---- state-tracking digest (R2_GLDIGEST=file on the host run: one line per swap = hash of every draw / clear: full fixed-function state + the vertex data the draw reads + the texture content and sampler
 * state bound at the time).  Independent of call order / redundant calls / upload scheduling, so a single-thread run and a render-thread run (and old vs new TA code) must produce identical lines. ---- */
typedef struct FakeGlRec {
    uint64_t h, frame_h; unsigned long frame_no, draws_in_frame;
    uint32_t cap[32]; uint32_t depth_func, depth_mask, bsrc, bdst, afunc; float aref; int texenv, bound; int vp[4], sc[4]; float cc[4], cd; uint32_t cmask; uint32_t st_mask, st_func, st_ref, st_fmask, st_op[3];
    float proj[16], mv[16]; GLenum mmode; const char *vptr, *tptr, *cptr; int vstride, tstride, cstride; uint32_t cs_bits;
    struct { uint64_t pix; int w, h; uint32_t minf, magf, ws, wt; int has; } tex[65536]; unsigned next_tex;
    void *out; int out_open; int trace;
} FakeGlRec;
extern FakeGlRec fgr;
static inline void fgr_mix(uint64_t v) { fgr.h = (fgr.h ^ v) * 0x100000001B3ull; fgr.h ^= fgr.h >> 29; }
static inline void fgr_mixf(float f) { uint32_t u; memcpy(&u, &f, 4); fgr_mix(u); }
static inline uint64_t fgr_hash_bytes(const void *p, size_t n) { const uint8_t *b = (const uint8_t *)p; uint64_t h = 0xcbf29ce484222325ull; size_t i = 0; for (; i + 8 <= n; i += 8) { uint64_t w; memcpy(&w, b + i, 8); h = (h ^ w) * 0x100000001B3ull; h ^= h >> 31; } for (; i < n; i++) h = (h ^ b[i]) * 0x100000001B3ull; return h; }
static inline int fgr_capidx(GLenum c) { switch (c) { case 0xB71: return 0; case 0xBE2: return 1; case 0xBC0: return 2; case 0xDE1: return 3; case 0xB44: return 4; case 0xC11: return 5; case 0xB90: return 6; default: return 7; } }
extern void (*fgr_draw_cb)(int first, int count); extern void (*fgr_clear_cb)(unsigned bits);   /* optional rasteriser hooks (test_glcount GLC_RASTER) */
typedef struct FakeGl { unsigned long draws, enables, disables, depth_func, depth_mask, blend_func, alpha_func, texenv, bind, colptr, ptrs, texparam, teximage, clears, other, gen, state_total; } FakeGl;
extern FakeGl fg;
#define FGC(f) (fg.f++, fg.state_total++)
static inline void glEnable(GLenum c) { fgr.cap[fgr_capidx(c)] = 1; FGC(enables); }
static inline void glDisable(GLenum c) { fgr.cap[fgr_capidx(c)] = 0; FGC(disables); }
static inline void glViewport(int a, int b, int c, int d) { fgr.vp[0] = a; fgr.vp[1] = b; fgr.vp[2] = c; fgr.vp[3] = d; fg.other++; }
static inline void glClearColor(float a, float b, float c, float d) { fgr.cc[0] = a; fgr.cc[1] = b; fgr.cc[2] = c; fgr.cc[3] = d; fg.other++; }
static inline void glClearDepthf(float a) { fgr.cd = a; fg.other++; }
static inline void glDepthMask(GLboolean m) { fgr.depth_mask = m; FGC(depth_mask); }
static inline void glDepthRangef(float a, float b) { (void)a; (void)b; fg.other++; }
static inline void glStencilMask(GLuint m) { fgr.st_mask = m; fg.other++; }
static inline void glClearStencil(int s) { (void)s; fg.other++; }
static inline void glClear(GLbitfield b) { if (fgr_clear_cb) fgr_clear_cb(b); fg.clears++; fgr_mix(0xC1EA4ull ^ b); for (int i = 0; i < 4; i++) fgr_mixf(fgr.cc[i]); fgr_mixf(fgr.cd); fgr_mix(fgr.cap[5]); for (int i = 0; i < 4; i++) fgr_mix((uint32_t)fgr.sc[i]); for (int i = 0; i < 4; i++) fgr_mix((uint32_t)fgr.vp[i]); fgr_mix(fgr.depth_mask); fgr_mix(fgr.st_mask); if (fgr.trace) fprintf(stderr, "[gltrace] clear bits=%x cc=%g,%g,%g cd=%g sc=%d,%d,%d,%d vp=%d,%d,%d,%d h=%016llx\n", b, fgr.cc[0], fgr.cc[1], fgr.cc[2], fgr.cd, fgr.sc[0], fgr.sc[1], fgr.sc[2], fgr.sc[3], fgr.vp[0], fgr.vp[1], fgr.vp[2], fgr.vp[3], (unsigned long long)fgr.h); }
static inline void glScissor(int a, int b, int c, int d) { fgr.sc[0] = a; fgr.sc[1] = b; fgr.sc[2] = c; fgr.sc[3] = d; fg.other++; }
static inline void glMatrixMode(GLenum m) { fgr.mmode = m; fg.other++; }
static inline void glLoadMatrixf(const float *m) { memcpy(fgr.mmode == GL_PROJECTION ? fgr.proj : fgr.mv, m, 64); fg.other++; }
static inline void glLoadIdentity(void) { static const float id[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 }; memcpy(fgr.mmode == GL_PROJECTION ? fgr.proj : fgr.mv, id, 64); fg.other++; }
static inline void glVertexPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; fgr.vptr = (const char *)p; fgr.vstride = s; fg.ptrs++; }
static inline void glTexCoordPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; fgr.tptr = (const char *)p; fgr.tstride = s; fg.ptrs++; }
static inline void glColorPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; fgr.cptr = (const char *)p; fgr.cstride = s; FGC(colptr); }
static inline void glEnableClientState(GLenum c) { fgr.cs_bits |= 1u << (c & 7); fg.other++; }
static inline void glDisableClientState(GLenum c) { fgr.cs_bits &= ~(1u << (c & 7)); fg.other++; }
static inline void glDepthFunc(GLenum f) { fgr.depth_func = f; FGC(depth_func); }
static inline void glBlendFunc(GLenum a, GLenum b) { fgr.bsrc = a; fgr.bdst = b; FGC(blend_func); }
static inline void glAlphaFunc(GLenum f, float r) { fgr.afunc = f; fgr.aref = r; FGC(alpha_func); }
static inline void glTexEnvi(GLenum a, GLenum b, GLint c) { (void)a; (void)b; fgr.texenv = c; FGC(texenv); }
#define GL_TEXTURE_ENV_COLOR 0x2201
static inline void glTexEnvfv(GLenum a, GLenum b, const GLfloat *c) { (void)a; (void)b; (void)c; fg.other++; }
static inline void glBindTexture(GLenum t, GLuint id) { (void)t; fgr.bound = (int)(id & 0xFFFF); FGC(bind); }
static inline void glTexImage2D(GLenum t, int l, int ifmt, int w, int h, int b, GLenum f, GLenum ty, const void *p) { (void)t; (void)l; (void)ifmt; (void)b; (void)f; size_t bpp = (ty == GL_UNSIGNED_SHORT_5_6_5 || ty == GL_UNSIGNED_SHORT_5_5_5_1 || ty == GL_UNSIGNED_SHORT_4_4_4_4) ? 2 : 4; fgr.tex[fgr.bound].pix = fgr_hash_bytes(p, (size_t)w * h * bpp); fgr.tex[fgr.bound].w = w; fgr.tex[fgr.bound].h = h; fgr.tex[fgr.bound].has = 1; fg.teximage++; }
static inline void glGenTextures(int n, GLuint *ids) { static GLuint next = 1; for (int i = 0; i < n; i++) { ids[i] = next++; if (next > 60000) next = 1; memset(&fgr.tex[ids[i]], 0, sizeof fgr.tex[0]); } fg.gen++; }
static inline void glDeleteTextures(int n, const GLuint *ids) { for (int i = 0; i < n; i++) memset(&fgr.tex[ids[i] & 0xFFFF], 0, sizeof fgr.tex[0]); fg.other++; }
static inline void glGenerateMipmap(GLenum t) { (void)t; fg.other++; }
static inline void glTexParameteri(GLenum t, GLenum p, GLint v) { (void)t; if (p == GL_TEXTURE_MIN_FILTER) fgr.tex[fgr.bound].minf = (uint32_t)v; else if (p == GL_TEXTURE_MAG_FILTER) fgr.tex[fgr.bound].magf = (uint32_t)v; else if (p == GL_TEXTURE_WRAP_S) fgr.tex[fgr.bound].ws = (uint32_t)v; else fgr.tex[fgr.bound].wt = (uint32_t)v; FGC(texparam); }
static inline void glDrawArrays(GLenum m, int first, int count)
{
    fg.draws++; fgr.draws_in_frame++;
    uint64_t h_start = fgr.h; (void)h_start;
    fgr_mix(0xD2A4ull ^ m ^ ((uint64_t)count << 8));
    for (int i = 0; i < 8; i++) fgr_mix(fgr.cap[i]);
    fgr_mix(fgr.depth_func); fgr_mix(fgr.depth_mask); fgr_mix(fgr.bsrc); fgr_mix(fgr.bdst); fgr_mix(fgr.afunc); fgr_mixf(fgr.aref); fgr_mix((uint32_t)fgr.texenv);
    for (int i = 0; i < 4; i++) { fgr_mix((uint32_t)fgr.vp[i]); fgr_mix((uint32_t)fgr.sc[i]); } fgr_mix(fgr.st_mask); fgr_mix(fgr.cs_bits);
    for (int i = 0; i < 16; i++) fgr_mixf(fgr.proj[i]);
    if (fgr.cap[3]) { const typeof(fgr.tex[0]) *t = &fgr.tex[fgr.bound]; fgr_mix(t->pix); fgr_mix((uint64_t)t->w << 16 | (uint64_t)t->h); fgr_mix(t->minf); fgr_mix(t->magf); fgr_mix(t->ws); fgr_mix(t->wt); fgr_mix((uint64_t)t->has); }
    uint64_t h_state = fgr.h;
    if (fgr.trace) { uint64_t a = 0, b = 0, c = 0, d = 0; for (int i = 0; i < 8; i++) a = a * 31 + fgr.cap[i];
        b = fgr.depth_func * 3 + fgr.depth_mask * 5 + fgr.bsrc * 7 + fgr.bdst * 11 + fgr.afunc * 13 + (uint64_t)fgr.texenv * 17;
        for (int i = 0; i < 4; i++) c = c * 131 + (uint32_t)fgr.vp[i] * 7 + (uint32_t)fgr.sc[i]; c = c * 131 + fgr.st_mask * 3 + fgr.cs_bits;
        d = fgr_hash_bytes(fgr.proj, 64);
        fprintf(stderr, "[gltrace]   caps=%llx fn=%llx vpsc=%llx projhash=%llx aref=%a texhas=%d texpix=%llx cap7=%u\n", (unsigned long long)a, (unsigned long long)b, (unsigned long long)c, (unsigned long long)d, fgr.aref, fgr.tex[fgr.bound].has, (unsigned long long)fgr.tex[fgr.bound].pix, fgr.cap[7]); }
    for (int i = first; i < first + count; i++) {
        const float *v = (const float *)(fgr.vptr + (size_t)i * fgr.vstride), *t = (const float *)(fgr.tptr + (size_t)i * fgr.tstride), *c = (const float *)(fgr.cptr + (size_t)i * fgr.cstride);
        for (int k = 0; k < 3; k++) fgr_mixf(v[k]);
        for (int k = 0; k < 2; k++) fgr_mixf(t[k]);
        for (int k = 0; k < 4; k++) fgr_mixf(c[k]);
    }
    if (fgr.trace) fprintf(stderr, "[gltrace] cap=%u%u%u%u%u%u%u df=%x dm=%u bl=%x/%x af=%x/%g te=%d proj0=%g,%g,%g,%g,%g texh=%016llx %d,%d cs=%x\n", fgr.cap[0], fgr.cap[1], fgr.cap[2], fgr.cap[3], fgr.cap[4], fgr.cap[5], fgr.cap[6], fgr.depth_func, fgr.depth_mask, fgr.bsrc, fgr.bdst, fgr.afunc, fgr.aref, fgr.texenv, fgr.proj[0], fgr.proj[5], fgr.proj[10], fgr.proj[14], fgr.proj[11], (unsigned long long)fgr.tex[fgr.bound].pix, fgr.tex[fgr.bound].w, fgr.tex[fgr.bound].h, fgr.cs_bits);
    if (fgr.trace) fprintf(stderr, "[gltrace] proj=%g %g %g %g | %g %g %g %g | %g %g %g %g | %g %g %g %g vp=%d,%d,%d,%d sc=%d,%d,%d,%d stm=%x tex minf=%x magf=%x ws=%x wt=%x has=%d\n", fgr.proj[0],fgr.proj[1],fgr.proj[2],fgr.proj[3],fgr.proj[4],fgr.proj[5],fgr.proj[6],fgr.proj[7],fgr.proj[8],fgr.proj[9],fgr.proj[10],fgr.proj[11],fgr.proj[12],fgr.proj[13],fgr.proj[14],fgr.proj[15], fgr.vp[0], fgr.vp[1], fgr.vp[2], fgr.vp[3], fgr.sc[0], fgr.sc[1], fgr.sc[2], fgr.sc[3], fgr.st_mask, fgr.tex[fgr.bound].minf, fgr.tex[fgr.bound].magf, fgr.tex[fgr.bound].ws, fgr.tex[fgr.bound].wt, fgr.tex[fgr.bound].has);
    if (fgr.trace) fprintf(stderr, "[gltrace] hstart=%016llx f%lu d%lu first=%d count=%d state=%016llx total=%016llx tex=%d\n", (unsigned long long)h_start, fgr.frame_no, fgr.draws_in_frame, first, count, (unsigned long long)h_state, (unsigned long long)fgr.h, fgr.bound);
    if (fgr_draw_cb) fgr_draw_cb(first, count);
}
static inline void glStencilFunc(GLenum f, int r, GLuint m) { fgr.st_func = f; fgr.st_ref = (uint32_t)r; fgr.st_fmask = m; fg.other++; }
static inline void glStencilOp(GLenum a, GLenum b, GLenum c) { fgr.st_op[0] = a; fgr.st_op[1] = b; fgr.st_op[2] = c; fg.other++; }
static inline void glColorMask(GLboolean a, GLboolean b, GLboolean c, GLboolean d) { fgr.cmask = a | b << 1 | c << 2 | d << 3; fg.other++; }
static inline void glReadPixels(int a, int b, int c, int d, GLenum e, GLenum f, void *p) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; (void)p; }
static inline void glFinish(void) {}
static inline GLenum glGetError(void) { return 0; }
static inline void vglInitExtended(int a, int b, int c, int d, int e) { (void)a; (void)b; (void)c; (void)d; (void)e; }
void fgr_end_frame(void);
static inline void vglSwapBuffers(GLboolean b) { (void)b; fgr_end_frame(); }
