/* vita_gl_render.c - PS Vita vitaGL rendering backend for Dreamcast TA interpreter.
 *
 * Implements:
 * 1. Hardware context initialization via vitaGL (vglInitExtended).
 * 2. Dreamcast VRAM texture decoding (twiddled, linear, VQ) for RGB565, ARGB1555, ARGB4444.
 * 3. Texture caching keyed by (tcw, tsp).
 * 4. Display list rasterization via ta_build_gl: batching, culling, blending, depth tests.
 * 5. Display buffer swapping (vglSwapBuffers).
 */

#include "vita_gl_render.h"

#if defined(__vita__) || defined(CPA_PLATFORM_VITA)

#include <vitaGL.h>
#include "hle.h"
#include "ta.h"
#include "texmap.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

#define TEX_CACHE_SIZE 4096
#define TEX_CACHE_MASK (TEX_CACHE_SIZE - 1)

typedef struct {
    uint32_t tcw;
    uint32_t tsp;
    GLuint tex_id;
    uint8_t used;
} TexCacheEntry;

static TexCacheEntry s_tex_cache[TEX_CACHE_SIZE];
static uint32_t *s_decode_buf = NULL;

/* ----------------------------------------------------------------------------
 * Twiddle Bit-Interleaving (Morton Z-Order Curve)
 * ---------------------------------------------------------------------------- */

static inline uint32_t pvr_morton_spread(uint32_t val) {
    val = (val | (val << 8)) & 0x00FF00FFu;
    val = (val | (val << 4)) & 0x0F0F0F0Fu;
    val = (val | (val << 2)) & 0x33333333u;
    val = (val | (val << 1)) & 0x55555555u;
    return val;
}

static inline uint32_t pvr_twiddle_index(uint32_t x, uint32_t y) {
    return (pvr_morton_spread(y) << 0) | (pvr_morton_spread(x) << 1);
}

static inline uint32_t pvr_twiddle_rect_index(uint32_t x, uint32_t y, uint32_t w, uint32_t h) {
    if (w == h) {
        return pvr_twiddle_index(x, y);
    }
    if (w > h) {
        uint32_t min_dim = h;
        uint32_t block_idx = x / min_dim;
        uint32_t in_x = x % min_dim;
        return (block_idx * min_dim * min_dim) + pvr_twiddle_index(in_x, y);
    } else {
        uint32_t min_dim = w;
        uint32_t block_idx = y / min_dim;
        uint32_t in_y = y % min_dim;
        return (block_idx * min_dim * min_dim) + pvr_twiddle_index(x, in_y);
    }
}

/* ----------------------------------------------------------------------------
 * Pixel Color Conversion (RGBA8888 Little-Endian for OpenGL)
 * ---------------------------------------------------------------------------- */

static inline uint32_t pvr_convert_argb1555(uint16_t p) {
    uint32_t a = (p & 0x8000) ? 0xFF : 0x00;
    uint32_t r = (p >> 10) & 0x1F;
    uint32_t g = (p >> 5) & 0x1F;
    uint32_t b = p & 0x1F;
    r = (r << 3) | (r >> 2);
    g = (g << 3) | (g >> 2);
    b = (b << 3) | (b >> 2);
    return (a << 24) | (b << 16) | (g << 8) | r;
}

static inline uint32_t pvr_convert_rgb565(uint16_t p) {
    uint32_t r = (p >> 11) & 0x1F;
    uint32_t g = (p >> 5) & 0x3F;
    uint32_t b = p & 0x1F;
    r = (r << 3) | (r >> 2);
    g = (g << 2) | (g >> 4);
    b = (b << 3) | (b >> 2);
    return 0xFF000000u | (b << 16) | (g << 8) | r;
}

static inline uint32_t pvr_convert_argb4444(uint16_t p) {
    uint32_t a = (p >> 12) & 0x0F;
    uint32_t r = (p >> 8) & 0x0F;
    uint32_t g = (p >> 4) & 0x0F;
    uint32_t b = p & 0x0F;
    a = (a << 4) | a;
    r = (r << 4) | r;
    g = (g << 4) | g;
    b = (b << 4) | b;
    return (a << 24) | (b << 16) | (g << 8) | r;
}

static inline uint32_t pvr_convert_pixel(uint16_t p, uint32_t fmt) {
    switch (fmt) {
        case 0: return pvr_convert_argb1555(p);
        case 1: return pvr_convert_rgb565(p);
        case 2: return pvr_convert_argb4444(p);
        default: return 0xFF808080u;
    }
}

/* ----------------------------------------------------------------------------
 * Texture Decoding & VRAM Upload
 * ---------------------------------------------------------------------------- */

static GLuint decode_and_upload_texture(uint32_t tcw, uint32_t tsp) {
    uint8_t *vram = hle_vram_ptr();
    if (!vram) return 0;

    if (!s_decode_buf) {
        s_decode_buf = (uint32_t *)malloc(1024 * 1024 * sizeof(uint32_t));
        if (!s_decode_buf) return 0;
    }

    uint32_t mip = (tcw >> 31) & 1;
    uint32_t vq = (tcw >> 30) & 1;
    uint32_t fmt = (tcw >> 27) & 7;
    uint32_t nontw = (tcw >> 26) & 1;
    uint32_t vram_addr = (tcw & 0x1FFFFF) << 3;
    vram_addr &= 0x007FFFFFu; /* Mask to 8 MiB VRAM boundary */

    uint32_t w = 8u << (tsp & 7);
    uint32_t h = 8u << ((tsp >> 3) & 7);
    if (w > 1024) w = 1024;
    if (h > 1024) h = 1024;

    const uint32_t vram_limit = 8 * 1024 * 1024;

    if (fmt > 2) {
        /* Fallback for formats not in RGB565 / ARGB1555 / ARGB4444 (e.g. YUV, bump, paletted) */
        for (uint32_t i = 0; i < w * h; i++) {
            s_decode_buf[i] = 0xFF808080u;
        }
    } else if (vq) {
        /* VQ texture */
        if (vram_addr + 2048 > vram_limit) {
            memset(s_decode_buf, 0, w * h * sizeof(uint32_t));
        } else {
            const uint16_t *book = (const uint16_t *)(vram + vram_addr);
            uint32_t o = 2048;
            if (mip) {
                for (uint32_t s = 1; s < w; s <<= 1) {
                    uint32_t half = s / 2;
                    o += (half == 0) ? 1 : (half * half);
                }
            }

            uint32_t bw = (w + 1) / 2;
            uint32_t bh = (h + 1) / 2;
            uint32_t nblocks = bw * bh;

            const uint8_t *idx = (vram_addr + o + nblocks <= vram_limit) ? (vram + vram_addr + o) : NULL;

            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    uint32_t tw_bidx = pvr_twiddle_rect_index(bx, by, bw, bh);
                    uint8_t entry = (idx && tw_bidx < nblocks) ? idx[tw_bidx] : 0;
                    const uint16_t *blk = &book[entry * 4];

                    uint32_t x0 = bx * 2;
                    uint32_t y0 = by * 2;
                    uint32_t x1 = x0 + 1;
                    uint32_t y1 = y0 + 1;

                    if (x0 < w && y0 < h) s_decode_buf[y0 * w + x0] = pvr_convert_pixel(blk[0], fmt);
                    if (x0 < w && y1 < h) s_decode_buf[y1 * w + x0] = pvr_convert_pixel(blk[1], fmt);
                    if (x1 < w && y0 < h) s_decode_buf[y0 * w + x1] = pvr_convert_pixel(blk[2], fmt);
                    if (x1 < w && y1 < h) s_decode_buf[y1 * w + x1] = pvr_convert_pixel(blk[3], fmt);
                }
            }
        }
    } else {
        /* Uncompressed (linear or twiddled) */
        uint32_t o = 0;
        if (mip && !nontw && (w == h)) {
            static const uint32_t s_mip_offsets[8] = {
                0x30, 0xB0, 0x2B0, 0xAB0, 0x2AB0, 0xAAB0, 0x2AAB0, 0xAAAB0
            };
            int exp = tsp & 7;
            if (exp >= 0 && exp < 8) o = s_mip_offsets[exp];
        }

        const uint16_t *src = (const uint16_t *)(vram + vram_addr + o);

        if (nontw) {
            /* Linear */
            for (uint32_t y = 0; y < h; y++) {
                for (uint32_t x = 0; x < w; x++) {
                    uint32_t lin_idx = y * w + x;
                    uint16_t raw = (vram_addr + o + (lin_idx + 1) * 2 <= vram_limit) ? src[lin_idx] : 0;
                    s_decode_buf[lin_idx] = pvr_convert_pixel(raw, fmt);
                }
            }
        } else {
            /* Twiddled */
            for (uint32_t y = 0; y < h; y++) {
                for (uint32_t x = 0; x < w; x++) {
                    uint32_t tw_idx = pvr_twiddle_rect_index(x, y, w, h);
                    uint16_t raw = (vram_addr + o + (tw_idx + 1) * 2 <= vram_limit) ? src[tw_idx] : 0;
                    s_decode_buf[y * w + x] = pvr_convert_pixel(raw, fmt);
                }
            }
        }
    }

    /* GL Texture Generation & Upload */
    GLuint tex_id = 0;
    glGenTextures(1, &tex_id);
    if (tex_id == 0) return 0;

    glBindTexture(GL_TEXTURE_2D, tex_id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, s_decode_buf);

    GLint filter = ((tsp >> 13) & 3) ? GL_LINEAR : GL_NEAREST;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);

    GLint wrap_s = ((tsp >> 15) & 1) ? GL_CLAMP_TO_EDGE : (((tsp >> 17) & 1) ? GL_MIRRORED_REPEAT : GL_REPEAT);
    GLint wrap_t = ((tsp >> 16) & 1) ? GL_CLAMP_TO_EDGE : (((tsp >> 18) & 1) ? GL_MIRRORED_REPEAT : GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap_s);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap_t);

    return tex_id;
}

/* ----------------------------------------------------------------------------
 * Texture Hash Table / Cache
 * ---------------------------------------------------------------------------- */

static inline uint32_t tex_hash(uint32_t tcw, uint32_t tsp) {
    uint32_t h = tcw ^ (tsp * 0x9E3779B9u);
    h ^= h >> 16;
    h *= 0x85EBCA6Bu;
    h ^= h >> 13;
    h *= 0xC2B2AE35u;
    h ^= h >> 16;
    return h & TEX_CACHE_MASK;
}

GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp) {
    uint32_t h = tex_hash(tcw, tsp);
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        uint32_t idx = (h + i) & TEX_CACHE_MASK;
        if (!s_tex_cache[idx].used) {
            GLuint tid = decode_and_upload_texture(tcw, tsp);
            s_tex_cache[idx].tcw = tcw;
            s_tex_cache[idx].tsp = tsp;
            s_tex_cache[idx].tex_id = tid;
            s_tex_cache[idx].used = 1;
            return tid;
        }
        if (s_tex_cache[idx].tcw == tcw && s_tex_cache[idx].tsp == tsp) {
            return s_tex_cache[idx].tex_id;
        }
    }
    return decode_and_upload_texture(tcw, tsp);
}

void vita_gl_texture_cache_clear(void) {
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        if (s_tex_cache[i].used) {
            if (s_tex_cache[i].tex_id != 0) {
                glDeleteTextures(1, &s_tex_cache[i].tex_id);
            }
            s_tex_cache[i].used = 0;
            s_tex_cache[i].tex_id = 0;
            s_tex_cache[i].tcw = 0;
            s_tex_cache[i].tsp = 0;
        }
    }
}

/* ----------------------------------------------------------------------------
 * vitaGL Lifecycle & Rendering
 * ---------------------------------------------------------------------------- */

void vita_gl_render_init(void) {
    vglInitExtended(8 * 1024 * 1024, 960, 544, 16 * 1024 * 1024, SCE_GXM_MULTISAMPLE_NONE);
    glViewport(0, 0, 960, 544);
    glClearColor(0.2f, 0.3f, 0.5f, 1.0f);

    vita_gl_texture_cache_clear();

    if (!s_decode_buf) {
        s_decode_buf = (uint32_t *)malloc(1024 * 1024 * sizeof(uint32_t));
    }
}

static const GLenum s_gl_depth_funcs[8] = {
    GL_NEVER,    /* 0: never */
    GL_LESS,     /* 1: less */
    GL_EQUAL,    /* 2: equal */
    GL_LEQUAL,   /* 3: lequal */
    GL_GREATER,  /* 4: greater */
    GL_NOTEQUAL, /* 5: nequal */
    GL_GEQUAL,   /* 6: gequal */
    GL_ALWAYS    /* 7: always */
};

static const GLenum s_gl_src_blend[8] = {
    GL_ZERO,                /* 0: zero */
    GL_ONE,                 /* 1: one */
    GL_DST_COLOR,           /* 2: other color (dst color) */
    GL_ONE_MINUS_DST_COLOR, /* 3: inv other color (1 - dst color) */
    GL_SRC_ALPHA,           /* 4: src alpha */
    GL_ONE_MINUS_SRC_ALPHA, /* 5: inv src alpha */
    GL_DST_ALPHA,           /* 6: dst alpha */
    GL_ONE_MINUS_DST_ALPHA  /* 7: inv dst alpha */
};

static const GLenum s_gl_dst_blend[8] = {
    GL_ZERO,                /* 0: zero */
    GL_ONE,                 /* 1: one */
    GL_SRC_COLOR,           /* 2: other color (src color) */
    GL_ONE_MINUS_SRC_COLOR, /* 3: inv other color (1 - src color) */
    GL_SRC_ALPHA,           /* 4: src alpha */
    GL_ONE_MINUS_SRC_ALPHA, /* 5: inv src alpha */
    GL_DST_ALPHA,           /* 6: dst alpha */
    GL_ONE_MINUS_DST_ALPHA  /* 7: inv dst alpha */
};

void vita_gl_render_frame(const TaFrame *frame) {
    if (!frame) return;

    TaGl gl;
    if (ta_build_gl(frame, &gl) != 0) return;
    if (gl.nverts == 0 || gl.nbatches == 0) {
        ta_gl_free(&gl);
        return;
    }

    /* Frame clear */
    glDepthMask(GL_TRUE);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* Setup Ortho/screen projection */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, 640.0f, 480.0f, 0.0f, -10000.0f, 10000.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    /* Setup vertex arrays */
    glVertexPointer(3, GL_FLOAT, sizeof(TaGlVertex), &gl.verts[0].x);
    glColorPointer(4, GL_FLOAT, sizeof(TaGlVertex), &gl.verts[0].r);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaGlVertex), &gl.verts[0].u);

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    /* Draw batches in order: OPAQUE, PUNCH-THROUGH, TRANSLUCENT */
    static const int s_draw_lists[3] = { TA_L_OPAQUE, TA_L_PUNCH, TA_L_TRANS };

    for (int li = 0; li < 3; li++) {
        int list_id = s_draw_lists[li];
        uint32_t first_b = gl.list_first[list_id];
        uint32_t n_b = gl.list_count[list_id];

        for (uint32_t b = 0; b < n_b; b++) {
            const TaBatch *batch = &gl.batches[first_b + b];
            if (batch->count == 0) continue;

            /* Set culling based on batch->st.cull_mode */
            if (batch->st.cull_mode == 0 || batch->st.cull_mode == 1) {
                glDisable(GL_CULL_FACE);
            } else {
                glEnable(GL_CULL_FACE);
                if (batch->st.cull_mode == 2) {
                    /* Cull CCW */
                    glFrontFace(GL_CW);
                    glCullFace(GL_BACK);
                } else {
                    /* Cull CW */
                    glFrontFace(GL_CCW);
                    glCullFace(GL_BACK);
                }
            }

            /* Set depth mask / depth func based on batch->st.depth_mode and batch->st.z_write_disable */
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(s_gl_depth_funcs[batch->st.depth_mode & 7]);
            glDepthMask(batch->st.z_write_disable ? GL_FALSE : GL_TRUE);

            /* Set blending for translucent batches */
            if (list_id == TA_L_TRANS) {
                glEnable(GL_BLEND);
                glBlendFunc(s_gl_src_blend[batch->st.src_blend & 7],
                            s_gl_dst_blend[batch->st.dst_blend & 7]);
                glDisable(GL_ALPHA_TEST);
            } else if (list_id == TA_L_PUNCH) {
                glDisable(GL_BLEND);
                glEnable(GL_ALPHA_TEST);
                glAlphaFunc(GL_GREATER, 0.5f);
            } else {
                glDisable(GL_BLEND);
                glDisable(GL_ALPHA_TEST);
            }

            /* If batch->st.textured, bind the decoded GL texture; else glDisable(GL_TEXTURE_2D) */
            if (batch->st.textured) {
                glEnable(GL_TEXTURE_2D);
                GLuint tex_id = vita_gl_get_or_create_texture(batch->st.tcw, batch->st.tsp);
                glBindTexture(GL_TEXTURE_2D, tex_id);
                glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,
                          (batch->st.shading == 0) ? GL_DECAL : GL_MODULATE);
            } else {
                glDisable(GL_TEXTURE_2D);
            }

            /* Call glDrawArrays */
            glDrawArrays(GL_TRIANGLES, batch->first, batch->count);
        }
    }

    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);

    ta_gl_free(&gl);
}

void vita_gl_swap(void) {
    vglSwapBuffers(GL_FALSE);
}

#else

/* Host stubs when building without Vita toolchain */
void vita_gl_render_init(void) {}
void vita_gl_render_frame(const TaFrame *frame) { (void)frame; }
void vita_gl_swap(void) {}
GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp) { (void)tcw; (void)tsp; return 0; }
void vita_gl_texture_cache_clear(void) {}

#endif
