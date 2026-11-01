/* Counting stand-in for vitaGL, used by test_glcount.c to run the real hle/vita_gl_render.c on the host and count what it would submit to the GPU driver. */
#pragma once
#include <stdint.h>
#include <string.h>
typedef unsigned int GLuint, GLenum, GLbitfield; typedef int GLint, GLsizei; typedef float GLfloat; typedef unsigned char GLboolean; typedef void GLvoid;
enum { GL_FALSE = 0, GL_TRUE = 1, GL_DEPTH_TEST = 0xB71, GL_BLEND = 0xBE2, GL_ALPHA_TEST = 0xBC0, GL_TEXTURE_2D = 0xDE1, GL_CULL_FACE = 0xB44, GL_SCISSOR_TEST = 0xC11, GL_STENCIL_TEST = 0xB90,
       GL_COLOR_BUFFER_BIT = 0x4000, GL_DEPTH_BUFFER_BIT = 0x100, GL_STENCIL_BUFFER_BIT = 0x400,
       GL_NEVER = 0x200, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS,
       GL_ZERO = 0, GL_ONE = 1, GL_SRC_COLOR = 0x300, GL_ONE_MINUS_SRC_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
       GL_PROJECTION = 0x1701, GL_MODELVIEW = 0x1700, GL_FLOAT = 0x1406, GL_UNSIGNED_BYTE = 0x1401, GL_RGBA = 0x1908, GL_TRIANGLES = 4,
       GL_VERTEX_ARRAY = 0x8074, GL_COLOR_ARRAY = 0x8076, GL_TEXTURE_COORD_ARRAY = 0x8078,
       GL_TEXTURE_ENV = 0x2300, GL_TEXTURE_ENV_MODE = 0x2200, GL_REPLACE = 0x1E01, GL_MODULATE = 0x2100, GL_DECAL = 0x2101,
       GL_TEXTURE_MIN_FILTER = 0x2801, GL_TEXTURE_MAG_FILTER = 0x2800, GL_TEXTURE_WRAP_S = 0x2802, GL_TEXTURE_WRAP_T = 0x2803,
       GL_NEAREST = 0x2600, GL_LINEAR = 0x2601, GL_NEAREST_MIPMAP_NEAREST = 0x2700, GL_LINEAR_MIPMAP_NEAREST = 0x2701, GL_LINEAR_MIPMAP_LINEAR = 0x2703,
       GL_REPEAT = 0x2901, GL_CLAMP_TO_EDGE = 0x812F, GL_MIRRORED_REPEAT = 0x8370, GL_KEEP = 0x1E00, GL_INVERT = 0x150A };
#define SCE_GXM_MULTISAMPLE_NONE 0
typedef struct FakeGl { unsigned long draws, enables, disables, depth_func, depth_mask, blend_func, alpha_func, texenv, bind, colptr, ptrs, texparam, teximage, clears, other, gen, state_total; } FakeGl;
extern FakeGl fg;
#define FGC(f) (fg.f++, fg.state_total++)
static inline void glEnable(GLenum c) { (void)c; FGC(enables); }
static inline void glDisable(GLenum c) { (void)c; FGC(disables); }
static inline void glViewport(int a, int b, int c, int d) { (void)a; (void)b; (void)c; (void)d; fg.other++; }
static inline void glClearColor(float a, float b, float c, float d) { (void)a; (void)b; (void)c; (void)d; fg.other++; }
static inline void glClearDepthf(float a) { (void)a; fg.other++; }
static inline void glDepthMask(GLboolean m) { (void)m; FGC(depth_mask); }
static inline void glDepthRangef(float a, float b) { (void)a; (void)b; fg.other++; }
static inline void glStencilMask(GLuint m) { (void)m; fg.other++; }
static inline void glClearStencil(int s) { (void)s; fg.other++; }
static inline void glClear(GLbitfield b) { (void)b; fg.clears++; }
static inline void glScissor(int a, int b, int c, int d) { (void)a; (void)b; (void)c; (void)d; fg.other++; }
static inline void glMatrixMode(GLenum m) { (void)m; fg.other++; }
static inline void glLoadMatrixf(const float *m) { (void)m; fg.other++; }
static inline void glLoadIdentity(void) { fg.other++; }
static inline void glVertexPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; (void)s; (void)p; fg.ptrs++; }
static inline void glTexCoordPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; (void)s; (void)p; fg.ptrs++; }
static inline void glColorPointer(int n, GLenum t, int s, const void *p) { (void)n; (void)t; (void)s; (void)p; FGC(colptr); }
static inline void glEnableClientState(GLenum c) { (void)c; fg.other++; }
static inline void glDisableClientState(GLenum c) { (void)c; fg.other++; }
static inline void glDepthFunc(GLenum f) { (void)f; FGC(depth_func); }
static inline void glBlendFunc(GLenum a, GLenum b) { (void)a; (void)b; FGC(blend_func); }
static inline void glAlphaFunc(GLenum f, float r) { (void)f; (void)r; FGC(alpha_func); }
static inline void glTexEnvi(GLenum a, GLenum b, GLint c) { (void)a; (void)b; (void)c; FGC(texenv); }
static inline void glBindTexture(GLenum t, GLuint id) { (void)t; (void)id; FGC(bind); }
static inline void glTexImage2D(GLenum t, int l, int ifmt, int w, int h, int b, GLenum f, GLenum ty, const void *p) { (void)t; (void)l; (void)ifmt; (void)w; (void)h; (void)b; (void)f; (void)ty; (void)p; fg.teximage++; }
static inline void glGenTextures(int n, GLuint *ids) { static GLuint next = 1; for (int i = 0; i < n; i++) ids[i] = next++; fg.gen++; }
static inline void glDeleteTextures(int n, const GLuint *ids) { (void)n; (void)ids; fg.other++; }
static inline void glGenerateMipmap(GLenum t) { (void)t; fg.other++; }
static inline void glTexParameteri(GLenum t, GLenum p, GLint v) { (void)t; (void)p; (void)v; FGC(texparam); }
static inline void glDrawArrays(GLenum m, int first, int count) { (void)m; (void)first; (void)count; fg.draws++; }
static inline void glStencilFunc(GLenum f, int r, GLuint m) { (void)f; (void)r; (void)m; fg.other++; }
static inline void glStencilOp(GLenum a, GLenum b, GLenum c) { (void)a; (void)b; (void)c; fg.other++; }
static inline void glColorMask(GLboolean a, GLboolean b, GLboolean c, GLboolean d) { (void)a; (void)b; (void)c; (void)d; fg.other++; }
static inline void glReadPixels(int a, int b, int c, int d, GLenum e, GLenum f, void *p) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; (void)p; }
static inline void glFinish(void) {}
static inline GLenum glGetError(void) { return 0; }
static inline void vglInitExtended(int a, int b, int c, int d, int e) { (void)a; (void)b; (void)c; (void)d; (void)e; }
static inline void vglSwapBuffers(GLboolean b) { (void)b; }
