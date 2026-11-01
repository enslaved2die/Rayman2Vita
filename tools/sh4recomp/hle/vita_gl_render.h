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

void vita_gl_render_init(void);
void vita_gl_render_frame(const TaFrame *frame);
void vita_gl_swap(void);

/* per-process GL submission counters (cheap; read by vita_main.c's periodic log and by the host fake-GL test) */
typedef struct VitaGlPerf {
    uint32_t frames, batches, draws, fog_draws, state_calls, state_skipped, tex_binds, tex_params, tex_uploads;
    uint64_t verts;                     /* vertices submitted (fog passes included) */
} VitaGlPerf;
extern VitaGlPerf vita_gl_perf;

GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp);
void vita_gl_texture_cache_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* VITA_GL_RENDER_H */
