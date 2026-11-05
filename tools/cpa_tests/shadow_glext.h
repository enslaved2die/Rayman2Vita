/* Host-only additions to tools/sh4recomp/hle/tests_ta/fakegl/vitaGL.h (force-included with -include by shadow.mk): the fake lacks a few calls the native backend uses.
 * They only count into fg.other; the real vitaGL implements them. Not part of any Vita build. */
#ifndef SHADOW_GLEXT_H
#define SHADOW_GLEXT_H
#include "vitaGL.h"
#define CPA_GL_HOST_FAKE 1
#ifndef GL_CCW
#define GL_CCW 0x0901
#define GL_BACK 0x0405
#endif
static inline void glCullFace(GLenum m) { (void)m; fg.other++; }
static inline void glFrontFace(GLenum m) { (void)m; fg.other++; }
static inline void glColor4f(float r, float g, float b, float a) { (void)r; (void)g; (void)b; (void)a; fg.other++; }
#endif
