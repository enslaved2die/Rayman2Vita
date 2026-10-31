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

GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp);
void vita_gl_texture_cache_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* VITA_GL_RENDER_H */
