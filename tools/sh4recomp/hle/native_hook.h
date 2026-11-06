/* native_hook.h - run-time switchable NATIVE renderer (src/cpa + cpa_gl_backend on vitaGL) in place of the recompiled TA draw.
 * Compiled only with -DR2_NATIVE_GFX (Makefile.vita).  Switch: empty file ux0:data/rayman2/NATIVE_GFX.  Default (no file) = the recompiled TA path, untouched.
 * Threading: native_hook_frame runs on the GUEST thread at STARTRENDER (reads sh4_ram, builds the CpaRenderFrame), native_hook_render on the RENDER thread (GL submit). */
#ifndef R2_NATIVE_HOOK_H
#define R2_NATIVE_HOOK_H
#ifdef __cplusplus
extern "C" {
#endif
void *native_hook_frame(void);            /* guest thread; NULL = draw this frame with the recompiled TA path */
void  native_hook_render(void *job);      /* render thread, GL context current; takes ownership of job */
void  vita_gl_set_pending_native(void *job);   /* vita_gl_render.c: the next presented job carries `job` (NULL = none) */
#ifdef __cplusplus
}
#endif
#endif
