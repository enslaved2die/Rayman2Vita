/* vita_gl_render.h - PS Vita vitaGL rendering backend for Dreamcast TA interpreter. */
#ifndef VITA_GL_RENDER_H
#define VITA_GL_RENDER_H

#if defined(__vita__) || defined(CPA_PLATFORM_VITA)
#include <vitaGL.h>
#else
#include <stdint.h>
typedef unsigned int GLuint;
#endif
#include "ta.h"
#include "texmap.h"

#ifdef __cplusplus
extern "C" {
#endif

/* vita_gl_render_init: vglInit + GL state; with the render thread (R2_RENDER_THREAD, default 1) the thread is created here and runs vglInit itself (this call waits for it).
 * ta_hle.c at STARTRENDER: if vita_gl_rt_active(): vita_gl_present_frame(f) (takes ownership of f; blocks when the renderer is 2 frames behind), else vita_gl_render_frame(f); vita_gl_swap(); ta_frame_free(f). */
void vita_gl_render_init(void);
void vita_gl_render_frame(const TaFrame *frame);
void vita_gl_swap(void);
void vita_gl_present_frame(TaFrame *frame);
void vita_gl_present_raw(TaRaw *raw, uint32_t shad_scale);     /* deferred parse: raw TA packets of one scene (ta.h TaRaw), parsed on the render thread; takes ownership */
void vita_gl_present_fb(uint32_t fb_offset);                   /* direct frame-buffer presentation (swirl / loading vignet) */
void vita_gl_capture_scene(uint32_t off0, uint32_t off1);       /* snapshot the last presented scene into the 640x480 RGB565 frame-buffer shadows at off0/off1 (base image of the swirl) */
int  vita_gl_rt_active(void);

/* per-process GL submission counters (cheap; read by vita_main.c's periodic log and by the host fake-GL test) */
typedef struct VitaGlPerf {
    uint32_t frames, batches, draws, fog_draws, state_calls, state_skipped, tex_binds, tex_params, tex_uploads;
    uint64_t verts;                     /* vertices submitted (fog passes included) */
} VitaGlPerf;
extern VitaGlPerf vita_gl_perf;

/* per-frame work counters of the frame being / last rendered (render thread; reset at the start of every job; plain increments, always compiled).  Used by the once-per-second [pf] log (R2_PF) and by test_glcount. */
typedef struct VitaGlPfFrame {
    uint32_t draws, fog_draws, batches, verts;           /* glDrawArrays calls (fog re-draws and shadow-volume draws included in draws), batches built, vertices submitted */
    uint32_t st_depth_test, st_depth_func, st_depth_mask, st_blend, st_blendfunc, st_alpha_test, st_alpha_ref, st_tex2d, st_env, st_colptr, st_stencil;   /* state calls that actually reached GL, by kind */
    uint32_t tex_bind, tex_param, tex_up, tex_bytes;      /* glBindTexture, glTexParameteri, glTexImage2D count + bytes (frame-buffer presentation upload included) */
    float area_opq, area_punch, area_trans, area_fog;    /* sum of triangle areas in units of the 640x480 screen: opaque / punch-through / translucent (= alpha blended) / opaque fog re-draw */
} VitaGlPfFrame;
const VitaGlPfFrame *vita_gl_pf_frame(void);

void vita_gl_texture_cache_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* VITA_GL_RENDER_H */
