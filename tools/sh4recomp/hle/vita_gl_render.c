/* vita_gl_render.c - PS Vita vitaGL rendering backend for the Dreamcast TA interpreter.
 *
 * What is proven / assumed (see also ta.h, ta.c and tools/ta_render.py which implement the same model on the host):
 *  [PROVEN] texture memory is read linearly at tcw[20:0]*8 from the harness VRAM image; TSP U (width) = bits 5:3, V (height) = bits 2:0;
 *           twiddle / rectangular twiddle / VQ / mip-chain layouts (decoder in ta.c, bit-identical to the Python decoder on every texture of the title frame).
 *  [DOC]    list semantics (opaque ignores alpha, punch-through = alpha test with PT_ALPHA_REF, translucent = TSP src/dst blend in submission order),
 *           shading instruction table (decal / modulate / decal-alpha / modulate-alpha), use-alpha, ignore-texture-alpha, clamp / flip UV.
 *  [ASSUMED] translucent polygons are drawn in submission order (no HW auto-sort), no fog, no offset (specular) colour, no modifier volumes,
 *           depth range heuristic (ta_gl_depth_cut), the 4:3 frame is pillarboxed onto 960x544.
 *
 * Geometry: vertices arrive as screen-space (x, y, 1/W).  ta_build_gl_ex culls (ISP cull modes) and clips them to the 640x480 screen in screen space
 * (exact for the PVR interpolation model), then ta_gl_make_clip turns them into a position attribute (x_ndc*W, y_ndc*W, W) which together with the constant matrix
 * from ta_gl_projection gives clip coordinates with w_c = W: vitaGL's perspective-correct varyings then equal the PVR's u/W, v/W interpolation, and the depth
 * buffer holds s*(1/W) so GL_GREATER is the PVR "greater" (nearer) test.  Derivation: ta.h.
 */
#include "vita_gl_render.h"

#if defined(__vita__) || defined(CPA_PLATFORM_VITA)

#include <vitaGL.h>
#include <psp2/kernel/clib.h>
#include "hle.h"
#include "ta.h"
#include "texmap.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <math.h>

#define SCREEN_W 960
#define SCREEN_H 544
#define VIEW_W 725                      /* 544 * 4 / 3 */
#define VIEW_X ((SCREEN_W - VIEW_W) / 2)
/* 16:9: when the game runs its own 16:9 mode (hle_ta_wide_active(); forced on by default in ta_hle.c, R2_WIDE / hle_ta_wide_set() toggle) the 640x480 screen-space output is
 * horizontally squeezed by 1/k (k = 4/3) by the engine itself (wider FOV, widened culling, squeezed HUD), so the whole 640x480 vertex space is mapped onto the full
 * 960x544 viewport: x * 1.5, y * 1.1333 (pixel aspect 0.5% off square), geometry is rasterised natively, no bitmap scaling.  4:3 mode keeps the centred 725x544 pillarbox. */

#define TEX_CACHE_SIZE 4096
#define TEX_CACHE_MASK (TEX_CACHE_SIZE - 1)

typedef struct {
    uint32_t tcw, tsp;
    uint32_t gen;                       /* (unused: validity is by content hash) */
    uint32_t epoch;
    uint32_t content_hash;              /* hash of the texture bytes in VRAM at decode time */
    int chk_frame;                      /* frame number of the last successful validity check (once per frame) */
    uint32_t pal_hash;                  /* palette textures: hash of the palette entries used */
    GLuint tex_id;
    uint8_t used;
    int dec_frame;
} TexCacheEntry;

static TexCacheEntry s_tex_cache[TEX_CACHE_SIZE];
static uint32_t *s_decode_buf = NULL;   /* 1024x1024 RGBA8 */
static uint32_t s_pal[1040];            /* palette RAM + registers snapshot */
static int s_pal_valid_frame = -1;
static int s_frame_no = 0;
#define DUMP_DIR "ux0:data/rayman2/"
static void gl_logf(const char *fmt, ...);
#ifndef R2_TEX_AGE
#define R2_TEX_AGE 0
#endif
#ifndef R2_NOSTENCIL_DRAW
#define R2_NOSTENCIL_DRAW 0
#endif
#ifndef R2_NOCLEARST
#define R2_NOCLEARST 0
#endif
#ifndef R2_NOBATCHDIS
#define R2_NOBATCHDIS 0
#endif
#ifndef R2_NOENDDIS
#define R2_NOENDDIS 0
#endif
#ifdef R2_FAKE_SHADOW
#define R2_ALLRECV 1
#else
#define R2_ALLRECV 0
#endif
#ifndef R2_TFOG
#define R2_TFOG 1
#endif
static uint32_t s_tex_misses, s_tex_redecodes, s_tex_hash_bytes;

/* ----------------------------------------------------------------------------
 * Texture decode & upload (decoder lives in ta.c)
 * ---------------------------------------------------------------------------- */

static uint32_t palette_hash(uint32_t tcw)
{
    int fmt = (int)((tcw >> 27) & 7);
    uint32_t h = 2166136261u;
    if (fmt == 5) { uint32_t b = ((tcw >> 21) & 63) << 4; for (uint32_t i = 0; i < 16; i++) { h ^= s_pal[(b + i) & 1023]; h *= 16777619u; } }
    else if (fmt == 6) { uint32_t b = ((tcw >> 25) & 3) << 8; for (uint32_t i = 0; i < 256; i++) { h ^= s_pal[(b + i) & 1023]; h *= 16777619u; } }
    return h ^ s_pal[1024];
}

static void snapshot_palette_once_per_frame(void)
{
    if (s_pal_valid_frame == s_frame_no) return;
    hle_ta_pvr_snapshot(s_pal);
    s_pal_valid_frame = s_frame_no;
}


/* Conservative byte length of the texture data in VRAM (linear view at tcw*8): pixel data (+mip chain) (+VQ codebook). */
static uint32_t tex_byte_len(uint32_t tcw, uint32_t tsp)
{
    int w, h; ta_tex_size(tsp, &w, &h);
    int mip = (int)(tcw >> 31), vq = (int)((tcw >> 30) & 1), fmt = (int)((tcw >> 27) & 7);
    if (mip) h = w;
    uint32_t n;
    if (vq) n = 2048u + (uint32_t)(w * h) / 4u;
    else if (fmt == 5) n = (uint32_t)(w * h) / 2u;
    else if (fmt == 6) n = (uint32_t)(w * h);
    else n = (uint32_t)(w * h) * 2u;
    if (mip) n = n + n / 3u + 64u;
    return n;
}

/* 4-lane multiplicative hash of the texture bytes (catches textures written without kmLoadTexture, partial overwrites, overlapping surfaces). */
static uint32_t tex_content_hash(uint32_t tcw, uint32_t tsp)
{
    const uint8_t *vram = hle_vram_ptr();
    uint32_t off = (tcw & 0x1FFFFFu) << 3, n = tex_byte_len(tcw, tsp);
    if (!vram || off >= (8u << 20)) return 0;
    if (off + n > (8u << 20)) n = (8u << 20) - off;
    const uint32_t *p = (const uint32_t *)(vram + off);
    uint32_t words = n >> 2, i = 0;
    uint32_t a = 2166136261u, b = 0x9E3779B9u, c = 0x85EBCA6Bu, d = 0xC2B2AE35u;
    for (; i + 4 <= words; i += 4) {
        a = (a ^ p[i]) * 16777619u; b = (b ^ p[i + 1]) * 16777619u; c = (c ^ p[i + 2]) * 16777619u; d = (d ^ p[i + 3]) * 16777619u;
        a ^= a >> 15; b ^= b >> 15; c ^= c >> 15; d ^= d >> 15;
    }
    for (; i < words; i++) { a = (a ^ p[i]) * 16777619u; a ^= a >> 15; }
    s_tex_hash_bytes += n;
    return a ^ (b * 3u) ^ (c * 5u) ^ (d * 7u) ^ n;
}

static int decode_and_upload_texture(TexCacheEntry *e, uint32_t tcw, uint32_t tsp)
{
    uint8_t *vram = hle_vram_ptr();
    if (!vram) return 0;
    if (!s_decode_buf) {
        s_decode_buf = (uint32_t *)malloc(1024 * 1024 * sizeof(uint32_t));
        if (!s_decode_buf) return 0;
    }
    int w, h;
    ta_tex_size(tsp, &w, &h);
    int mip = (int)(tcw >> 31);
    if (mip) h = w;                                   /* mip chains are square */

    TaTexEnv env = { NULL, 0, 0 };
    int fmt = (int)((tcw >> 27) & 7);
    snapshot_palette_once_per_frame();
    env.text_control = s_pal[1025];
    if (fmt == 5 || fmt == 6) { env.pal = s_pal; env.pal_ctrl = s_pal[1024]; e->pal_hash = palette_hash(tcw); } else e->pal_hash = 0;

    ta_tex_decode(vram, 8u << 20, tcw, tsp, &env, 0, (int)((tsp >> 19) & 1), s_decode_buf);

    e->dec_frame = s_frame_no;
    e->content_hash = tex_content_hash(tcw, tsp);
    e->chk_frame = s_frame_no;
    if (e->tex_id == 0) glGenTextures(1, &e->tex_id);
    if (e->tex_id == 0) return 0;
    glBindTexture(GL_TEXTURE_2D, e->tex_id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, s_decode_buf);

    int filt = (int)((tsp >> 13) & 3);                /* 0 point, 1 bilinear, 2/3 trilinear */
    int levels = ta_tex_levels(tcw, tsp);
    GLint minf, magf = filt ? GL_LINEAR : GL_NEAREST;
    if (levels > 1) {
        glGenerateMipmap(GL_TEXTURE_2D);              /* the PVR mip levels are box-filtered versions of level 0 in the source files */
        minf = filt == 0 ? GL_NEAREST_MIPMAP_NEAREST : filt == 1 ? GL_LINEAR_MIPMAP_NEAREST : GL_LINEAR_MIPMAP_LINEAR;
    } else minf = magf;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minf);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magf);

    /* PVR2 TSP: bit15 ClampV, bit16 ClampU, bit17 FlipV, bit18 FlipU (same as TaState.clamp_v/clamp_u/flip_v/flip_u; the old u/v swap smeared planks/rock and cut Lum glows in half) */
    int clamp_v = (int)((tsp >> 15) & 1), clamp_u = (int)((tsp >> 16) & 1), flip_v = (int)((tsp >> 17) & 1), flip_u = (int)((tsp >> 18) & 1);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, clamp_u ? GL_CLAMP_TO_EDGE : flip_u ? GL_MIRRORED_REPEAT : GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, clamp_v ? GL_CLAMP_TO_EDGE : flip_v ? GL_MIRRORED_REPEAT : GL_REPEAT);
    return 1;
}

static inline uint32_t tex_hash(uint32_t tcw, uint32_t tsp)
{
    uint32_t h = tcw ^ (tsp * 0x9E3779B9u);
    h ^= h >> 16; h *= 0x85EBCA6Bu; h ^= h >> 13; h *= 0xC2B2AE35u; h ^= h >> 16;
    return h & TEX_CACHE_MASK;
}

/* Is the cached decode still valid?  Checked at most once per frame per texture: the texture bytes in VRAM are hashed (the game writes
 * textures through paths that never call kmLoadTexture and surfaces overlap, so the per-surface generation counter missed updates and left textures stale/black);
 * palettes are compared by hash. */
static int entry_valid(TexCacheEntry *e)
{
    if (R2_TEX_AGE && s_frame_no - e->dec_frame > R2_TEX_AGE) return 0;   /* DEBUG experiment */
    if (e->chk_frame == s_frame_no) return 1;
    int fmt = (int)((e->tcw >> 27) & 7);
    if (fmt == 5 || fmt == 6) { snapshot_palette_once_per_frame(); if (palette_hash(e->tcw) != e->pal_hash) return 0; }
    if (tex_content_hash(e->tcw, e->tsp) != e->content_hash) return 0;
    e->chk_frame = s_frame_no;
    return 1;
}

GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp)
{
    uint32_t h = tex_hash(tcw, tsp);
    TexCacheEntry *slot = NULL;
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        TexCacheEntry *e = &s_tex_cache[(h + i) & TEX_CACHE_MASK];
        if (!e->used) { slot = e; break; }
        if (e->tcw == tcw && e->tsp == tsp) {
            if (entry_valid(e)) return e->tex_id;
            s_tex_redecodes++;
            decode_and_upload_texture(e, tcw, tsp);
            return e->tex_id;
        }
    }
    if (!slot) {                                      /* cache full: evict the home bucket */
        slot = &s_tex_cache[h];
        if (slot->tex_id) glDeleteTextures(1, &slot->tex_id);
        memset(slot, 0, sizeof *slot);
    }
    s_tex_misses++;
    memset(slot, 0, sizeof *slot);
    slot->tcw = tcw; slot->tsp = tsp;
    if (decode_and_upload_texture(slot, tcw, tsp)) slot->used = 1;
    else { if (slot->tex_id) glDeleteTextures(1, &slot->tex_id); memset(slot, 0, sizeof *slot); return 0; }
    return slot->tex_id;
}

void vita_gl_texture_cache_clear(void)
{
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        if (s_tex_cache[i].used && s_tex_cache[i].tex_id) glDeleteTextures(1, &s_tex_cache[i].tex_id);
        memset(&s_tex_cache[i], 0, sizeof s_tex_cache[i]);
    }
}

/* ----------------------------------------------------------------------------
 * vitaGL lifecycle & rendering
 * ---------------------------------------------------------------------------- */

void vita_gl_render_init(void)
{
    vglInitExtended(8 * 1024 * 1024, SCREEN_W, SCREEN_H, 16 * 1024 * 1024, SCE_GXM_MULTISAMPLE_NONE);
    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClearDepthf(0.0f);                              /* depth buffer holds s/W: 0 = infinitely far */
    glDepthMask(GL_TRUE);
    glDepthRangef(0.0f, 1.0f);
    vita_gl_texture_cache_clear();
    if (!s_decode_buf) s_decode_buf = (uint32_t *)malloc(1024 * 1024 * sizeof(uint32_t));
}

static const GLenum s_gl_depth_funcs[8] = { GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS };

/* TSP src instruction -> GL source factor; use_alpha=0 means the source alpha is 1. */
static GLenum src_factor(int inst, int use_alpha)
{
    switch (inst & 7) {
    case 0: return GL_ZERO;
    case 1: return GL_ONE;
    case 2: return GL_DST_COLOR;
    case 3: return GL_ONE_MINUS_DST_COLOR;
    case 4: return use_alpha ? GL_SRC_ALPHA : GL_ONE;
    case 5: return use_alpha ? GL_ONE_MINUS_SRC_ALPHA : GL_ZERO;
    case 6: return GL_DST_ALPHA;
    default: return GL_ONE_MINUS_DST_ALPHA;
    }
}
/* TSP dst instruction -> GL destination factor ("other colour" = the source colour). */
static GLenum dst_factor(int inst, int use_alpha)
{
    switch (inst & 7) {
    case 0: return GL_ZERO;
    case 1: return GL_ONE;
    case 2: return GL_SRC_COLOR;
    case 3: return GL_ONE_MINUS_SRC_COLOR;
    case 4: return use_alpha ? GL_SRC_ALPHA : GL_ONE;
    case 5: return use_alpha ? GL_ONE_MINUS_SRC_ALPHA : GL_ZERO;
    case 6: return GL_DST_ALPHA;
    default: return GL_ONE_MINUS_DST_ALPHA;
    }
}


/* ----------------------------------------------------------------------------
 * Debug capture: create the file ux0:data/rayman2/SHOT.TXT and the next rendered frame is dumped as
 *   shot.ppm  (960x544 RGB read back from the GL framebuffer)  and  frame.bin / vram.bin / pvrregs.bin (same format as the host harness, for tools/ta_render.py)
 * into ux0:data/rayman2/dump/ ; the trigger file is deleted afterwards.
 * ---------------------------------------------------------------------------- */
#define DUMP_DIR "ux0:data/rayman2/"
static int s_dump_pending = 0, s_shot_after_swap = 0;
static void gl_logf(const char *fmt, ...)
{
    char b[400]; va_list ap; va_start(ap, fmt); vsnprintf(b, sizeof b, fmt, ap); va_end(ap);
    sceClibPrintf("%s\n", b);
    FILE *o = fopen(DUMP_DIR "gl.log", "a");
    if (!o) return;
    fputs(b, o); fputc('\n', o); fclose(o);
}
static void dump_frame_bin(const TaFrame *f)
{
    FILE *o = fopen(DUMP_DIR "frame.bin", "wb");
    if (o) {
        uint32_t hdr[4] = { 0x31465452u, f->nstrips, f->nverts, (uint32_t)s_frame_no };
        fwrite(hdr, 4, 4, o);
        for (uint32_t i = 0; i < f->nstrips; i++) {
            const TaStrip *st = &f->strips[i];
            uint32_t r[8] = { st->st.ctl, st->st.isp, st->st.tsp, st->st.tcw, st->first, st->count, (uint32_t)st->st.is_sprite, st->st.list };
            fwrite(r, 4, 8, o);
        }
        fwrite(f->verts, sizeof(TaVertex), f->nverts, o);
        fclose(o);
    }
    o = fopen(DUMP_DIR "vram.bin", "wb"); if (o) { fwrite(hle_vram_ptr(), 1, 8u << 20, o); fclose(o); }
    o = fopen(DUMP_DIR "pvrregs.bin", "wb"); if (o) { uint32_t pr[1040]; hle_ta_pvr_snapshot(pr); fwrite(pr, 4, 1040, o); fclose(o); }
}
static void dump_shot_ppm(void)
{
    uint8_t *px = (uint8_t *)malloc(SCREEN_W * SCREEN_H * 4);
    if (!px) return;
    glFinish();
    glReadPixels(0, 0, SCREEN_W, SCREEN_H, GL_RGBA, GL_UNSIGNED_BYTE, px);
    FILE *o = fopen(DUMP_DIR "shot.ppm", "wb");
    if (o) {
        fprintf(o, "P6\n%d %d\n255\n", SCREEN_W, SCREEN_H);
        for (int y = SCREEN_H - 1; y >= 0; y--)       /* GL rows are bottom-up */
            for (int x = 0; x < SCREEN_W; x++) fwrite(&px[(y * SCREEN_W + x) * 4], 1, 3, o);
        fclose(o);
    }
    free(px);
}
static uint32_t s_only_tcw;
static void debug_capture_poll(void)
{
    if ((s_frame_no & 15) != 0) return;
    { FILE *q = fopen(DUMP_DIR "ONLY.TXT", "rb"); s_only_tcw = 0; if (q) { char b[32] = {0}; fread(b, 1, 31, q); fclose(q); s_only_tcw = (uint32_t)strtoul(b, NULL, 16); } }   /* debug: draw only translucent batches with this TCW */
    FILE *t = fopen(DUMP_DIR "SHOT.TXT", "rb");
    if (t) { fclose(t); remove(DUMP_DIR "SHOT.TXT"); s_dump_pending = 1; }
}

static TaClipVertex *s_cv = NULL, *s_fv = NULL;   /* s_fv: fog-pass colours (fog colour, per-vertex fog alpha) parallel to s_cv */
static uint32_t s_cv_cap = 0;
static TaClipVertex *s_mv = NULL; static uint32_t s_mv_cap = 0;   /* modifier-volume triangles */

/* Shadow (modifier volume) pass, run after the opaque + punch-through lists.  Stencil bit 0x80 = receiver (polygon with PCW shadow bit, written while drawing),
 * bit 0x01 = parity of volume faces farther than the visible surface (odd = inside the volume).  Pixels with both bits are darkened by FPU_SHAD_SCALE. */
static void draw_shadow_volumes(const TaFrame *frame, float cut, const TaClipVertex *scene_cv)
{
    uint32_t nt = 0;
    for (uint32_t i = 0; i < frame->nmods; i++) if (frame->mods[i].list == TA_L_OPAQUE_MOD) nt++;
    if (!nt) return;
    if (s_mv_cap < nt * 3) {
        free(s_mv); s_mv_cap = nt * 3 + 1024;
        s_mv = (TaClipVertex *)malloc(s_mv_cap * sizeof(TaClipVertex));
        if (!s_mv) { s_mv_cap = 0; return; }
    }
    uint32_t nv = 0;
    for (uint32_t i = 0; i < frame->nmods; i++) {
        const TaModTri *t = &frame->mods[i];
        if (t->list != TA_L_OPAQUE_MOD) continue;
        int ok = 1;
        for (int k = 0; k < 3; k++) if (!(t->v[k][2] > 0.f) || !isfinite(t->v[k][0]) || !isfinite(t->v[k][1]) || !isfinite(t->v[k][2])) ok = 0;
        if (!ok) continue;
        TaGlVertex gv[3];
        memset(gv, 0, sizeof gv);
        for (int k = 0; k < 3; k++) { gv[k].x = t->v[k][0]; gv[k].y = t->v[k][1]; gv[k].z = t->v[k][2]; }
        ta_gl_make_clip(gv, 3, cut, &s_mv[nv]);
        nv += 3;
    }
    if (!nv) return;

    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
    glDisable(GL_TEXTURE_2D); glDisable(GL_BLEND); glDisable(GL_ALPHA_TEST); glDisable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LESS); glDepthMask(GL_FALSE);
    glEnable(GL_STENCIL_TEST);
    glStencilMask(0x01); glStencilFunc(GL_ALWAYS, 0, 0); glStencilOp(GL_KEEP, GL_KEEP, GL_INVERT);
    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &s_mv[0].px);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &s_mv[0].u);
    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_mv[0].r);
    glDrawArrays(GL_TRIANGLES, 0, nv);

    /* darken receivers inside the volume: full-viewport black quad with alpha 1 - scale */
    float a = 1.0f - (float)(frame->shad_scale & 255u) / 256.0f;
    static TaClipVertex q[6];
    static const float qx[6] = { -1, 1, 1, -1, 1, -1 }, qy[6] = { -1, -1, 1, -1, 1, 1 };
    for (int i = 0; i < 6; i++) { q[i].px = qx[i]; q[i].py = qy[i]; q[i].pz = 0.f; q[i].u = q[i].v = 0.f; q[i].r = q[i].g = q[i].b = 0.f; q[i].a = a; }
    float id[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(id); glMatrixMode(GL_MODELVIEW);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glStencilMask(0); glStencilFunc(GL_EQUAL, 0x81, 0x81); glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &q[0].px);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &q[0].u);
    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &q[0].r);
    glDrawArrays(GL_TRIANGLES, 0, 6);

    /* restore */
    float proj[16]; ta_gl_projection(cut, proj);
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(proj); glMatrixMode(GL_MODELVIEW);
    glDisable(GL_STENCIL_TEST); glStencilMask(0xFF);
    glDisable(GL_BLEND); glEnable(GL_DEPTH_TEST); glDepthMask(GL_TRUE);
    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].px);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].u);
    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].r);
}

void vita_gl_render_frame(const TaFrame *frame_in)
{
    const TaFrame *frame = frame_in;
    if (!frame) return;
#ifdef R2_FAKE_SHADOW   /* debug: synthetic closed box volume + every polygon a receiver, to exercise the stencil path where no shadow is on screen */
    static TaFrame ff; static TaModTri fm[12];
    {
        float X0 = 160, X1 = 480, Y0 = 100, Y1 = 380, Z0 = 0.0001f, Z1 = 5.0f;
        float c[8][3] = { {X0,Y0,Z0},{X1,Y0,Z0},{X1,Y1,Z0},{X0,Y1,Z0},{X0,Y0,Z1},{X1,Y0,Z1},{X1,Y1,Z1},{X0,Y1,Z1} };
        static const int f[12][3] = { {0,1,2},{0,2,3},{4,5,6},{4,6,7},{0,1,5},{0,5,4},{3,2,6},{3,6,7},{0,3,7},{0,7,4},{1,2,6},{1,6,5} };
        memset(fm, 0, sizeof fm);
        for (int i = 0; i < 12; i++) { fm[i].list = TA_L_OPAQUE_MOD; for (int k = 0; k < 3; k++) memcpy(fm[i].v[k], c[f[i][k]], 12); }
        ff = *frame_in; ff.mods = fm; ff.nmods = 12; ff.shad_scale = 0x19b; frame = &ff;
    }
#endif
    s_frame_no++;
    debug_capture_poll();
    if (s_dump_pending) dump_frame_bin(frame);

    if (s_frame_no <= 12) gl_logf("[vita] render_frame call #%d strips=%u verts=%u hle_frame_count=%lu", s_frame_no, (unsigned)frame->nstrips, (unsigned)frame->nverts, (unsigned long)hle_frame_count);
    TaGl gl;
    TaBuildOpts opts = { 1, 1, -2.0f, -2.0f, 642.0f, 482.0f };   /* software cull + clip to the screen (+2 px) */
    if (ta_build_gl_ex(frame, &gl, &opts) != 0) return;
    static int s_dbg_once; if (!s_dbg_once) { s_dbg_once = 1; gl_logf("[vita] vita_gl_render build marker: " __DATE__ " " __TIME__ " sort+nozwrite-trans v5"); }
    if (gl.nverts == 0 || gl.nbatches == 0) { ta_gl_free(&gl); return; }

    if (s_cv_cap < gl.nverts) {
        free(s_cv); free(s_fv); s_cv_cap = gl.nverts + 4096;
        s_cv = (TaClipVertex *)malloc(s_cv_cap * sizeof(TaClipVertex));
        s_fv = (TaClipVertex *)malloc(s_cv_cap * sizeof(TaClipVertex));
        if (!s_cv || !s_fv) { free(s_cv); free(s_fv); s_cv = s_fv = NULL; s_cv_cap = 0; ta_gl_free(&gl); return; }
    }
    float cut = ta_gl_depth_cut(&gl);
    ta_gl_make_clip(gl.verts, gl.nverts, cut, s_cv);
    snapshot_palette_once_per_frame();
    uint32_t fog_table[128]; hle_ta_fog_table(fog_table);
    const uint32_t fog_den = s_pal[1030], fog_ram = s_pal[1028];
    const float fog_r = ((fog_ram >> 16) & 255) / 255.0f, fog_g = ((fog_ram >> 8) & 255) / 255.0f, fog_b = (fog_ram & 255) / 255.0f;

    /* Frame clear: whole display black (4:3 pillarbox bars), then restrict drawing to the viewport (full screen in 16:9 mode, centred 4:3 area otherwise). */
    const int vp_x = hle_ta_wide_active() ? 0 : VIEW_X, vp_w = hle_ta_wide_active() ? SCREEN_W : VIEW_W;
    glDisable(GL_SCISSOR_TEST);
    glViewport(vp_x, 0, vp_w, SCREEN_H);
    glDepthMask(GL_TRUE);
    glClearDepthf(0.0f);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);                 /* pillarbox stays black */
    int have_shadow = 0;                              /* any opaque-mod volume this frame -> maintain the receiver stencil bit while drawing */
    for (uint32_t i = 0; i < frame->nmods; i++) if (frame->mods[i].list == TA_L_OPAQUE_MOD) { have_shadow = 1; break; }
#ifdef R2_FORCE_STENCIL
    have_shadow = 1;
#endif
    if (have_shadow && !R2_NOCLEARST) { glStencilMask(0xFF); glClearStencil(0); }
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | ((have_shadow && !R2_NOCLEARST) ? GL_STENCIL_BUFFER_BIT : 0));
    {   /* ISP_BACKGND plane: the game sets an untextured flat plane (0x8080ff on the menu, brown in the lava level); it fills the 4:3 area behind everything. */
        float bg[3][4]; uint32_t bisp, btsp, btcw;
        if (hle_ta_background(bg, &bisp, &btsp, &btcw)) {
            glEnable(GL_SCISSOR_TEST); glScissor(vp_x, 0, vp_w, SCREEN_H);
            { static int once; if (!once) { once = 1; gl_logf("[vita] ISP_BACKGND plane colour a=%.2f r=%.2f g=%.2f b=%.2f isp=%08x tsp=%08x tcw=%08x", bg[0][0], bg[0][1], bg[0][2], bg[0][3], (unsigned)bisp, (unsigned)btsp, (unsigned)btcw); } }
#ifndef R2_BG_BLACK
#define R2_BG_BLACK 0
#endif
            if (R2_BG_BLACK) glClearColor(0.0f, 0.0f, 0.0f, 1.0f); else
            glClearColor(bg[0][1], bg[0][2], bg[0][3], 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
        }
    }
    glEnable(GL_SCISSOR_TEST);
    glScissor(vp_x, 0, vp_w, SCREEN_H);

    float proj[16];
    ta_gl_projection(cut, proj);
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixf(proj);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &s_cv[0].px);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &s_cv[0].u);
    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_cv[0].r);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisable(GL_CULL_FACE);                          /* ISP culling is done in ta_build_gl_ex */

    if (s_frame_no <= 12) gl_logf("[vita] frame %d nmods=%u have_shadow=%d shad=%x", s_frame_no, (unsigned)frame->nmods, have_shadow, (unsigned)frame->shad_scale);
    int st_cur = 0;                                   /* current stencil state of the batch loop (see below) */
    uint32_t pt_ref = hle_reg_get(0xA05F811Cu) & 255;   /* PT_ALPHA_REF; 0 (never written) -> alpha > 0 */

    /* Draw order: opaque, punch-through, translucent (submission order inside a list). */
    static const int s_draw_lists[3] = { TA_L_OPAQUE, TA_L_PUNCH, TA_L_TRANS };
    for (int li = 0; li < 3; li++) {
        int list_id = s_draw_lists[li];
        if (list_id == TA_L_TRANS && have_shadow) { draw_shadow_volumes(frame, cut, s_cv); st_cur = 0; }
        uint32_t first_b = gl.list_first[list_id], n_b = gl.list_count[list_id];
        /* Translucent list: ISP_FEED_CFG bit0 = 0 -> the PVR sorts back-to-front (farthest = smallest 1/W first); translucent polygons never write depth
         * (otherwise a transparent texel of a near layer, e.g. foliage, would reject the sky behind it: that was the "periwinkle cut-outs" bug). */
        static uint32_t s_ord[4096]; static float s_key[4096];
        const int dbg = (s_frame_no % 60 == 0 || s_frame_no <= 12) && list_id == TA_L_TRANS;
        uint32_t n_ord = n_b < 4096 ? n_b : 4096;
        for (uint32_t b = 0; b < n_ord; b++) s_ord[b] = b;
        if (list_id == TA_L_TRANS && !(hle_reg_get(0xA05F8098u) & 1)) {
            for (uint32_t b = 0; b < n_ord; b++) {
                const TaBatch *bt = &gl.batches[first_b + b]; float zm = 1e30f;
                for (uint32_t i = 0; i < bt->count; i++) if (gl.verts[bt->first + i].z < zm) zm = gl.verts[bt->first + i].z;
                s_key[b] = zm;
            }
            for (uint32_t i = 1; i < n_ord; i++) { uint32_t o = s_ord[i]; float k = s_key[o]; uint32_t j = i; while (j > 0 && s_key[s_ord[j - 1]] > k) { s_ord[j] = s_ord[j - 1]; j--; } s_ord[j] = o; }   /* stable insertion sort */
        }
        if (dbg) {
            uint32_t feed = hle_reg_get(0xA05F8098u);
            gl_logf("[vita] frame %d wide_active=%d pref=%d vp_x=%d vp_w=%d ISP_FEED_CFG=%08x sorted=%d trans_batches=%u (of %u) nverts=%u", s_frame_no, hle_ta_wide_active(), hle_ta_wide_pref(), vp_x, vp_w, (unsigned)feed, !(feed & 1), (unsigned)n_b, gl.nbatches, gl.nverts);
            for (uint32_t i = 0; i < n_ord && i < 8; i++) gl_logf("[vita]   ord[%u]=%u key=%g", i, s_ord[i], s_key[s_ord[i]]);
        }
        for (uint32_t bi = 0; bi < n_ord; bi++) {
            uint32_t b = s_ord[bi];
            const TaBatch *batch = &gl.batches[first_b + b];
            if (batch->count == 0) continue;
            const TaState *st = &batch->st;
            if (s_only_tcw && list_id == TA_L_TRANS && st->tcw != s_only_tcw) continue;

            glEnable(GL_DEPTH_TEST);
            glDepthFunc(s_gl_depth_funcs[st->depth_mode & 7]);
            glDepthMask((st->z_write_disable || list_id == TA_L_TRANS) ? GL_FALSE : GL_TRUE);
            if (dbg && bi < 8) { const TaGlVertex *v0 = &gl.verts[batch->first]; gl_logf("[vita]     tcw=%08x tsp=%08x shade=%d tex=%d v0 col=%.2f,%.2f,%.2f,%.2f v1 col=%.2f,%.2f,%.2f,%.2f", (unsigned)st->tcw, (unsigned)st->tsp, st->shading, st->textured, v0[0].r, v0[0].g, v0[0].b, v0[0].a, v0[1].r, v0[1].g, v0[1].b, v0[1].a); }
            if (dbg && bi < 8) gl_logf("[vita]   trans b=%u cnt=%u depth_mode=%d zwd=%d mask=%d func=%d", b, batch->count, st->depth_mode, st->z_write_disable, (st->z_write_disable || list_id == TA_L_TRANS) ? 0 : 1, (int)s_gl_depth_funcs[st->depth_mode & 7]);

            if (list_id == TA_L_TRANS) {
                glEnable(GL_BLEND);
                glBlendFunc(src_factor(st->src_blend, st->use_alpha), dst_factor(st->dst_blend, st->use_alpha));
                glDisable(GL_ALPHA_TEST);
            } else if (list_id == TA_L_PUNCH) {
                glDisable(GL_BLEND);
                glEnable(GL_ALPHA_TEST);
                glAlphaFunc(GL_GEQUAL, (float)(pt_ref ? pt_ref : 1) / 255.0f);
            } else {                                  /* opaque: texture/vertex alpha ignored */
                glDisable(GL_BLEND);
                glDisable(GL_ALPHA_TEST);
            }

            if (have_shadow) {                            /* receivers mark stencil bit 7 where they are the visible surface; state is only touched on change */
                int want = list_id == TA_L_TRANS ? 0 : (st->shadow || R2_ALLRECV) ? 2 : 1;   /* 0 stencil off, 1 write 0 to bit 7, 2 write 1 */
                if (want != st_cur) {
                    if (want == 0) glDisable(GL_STENCIL_TEST);
                    else {
                        if (st_cur == 0) glEnable(GL_STENCIL_TEST);
                        glStencilMask(0x80); glStencilFunc(GL_ALWAYS, want == 2 ? 0x80 : 0x00, 0x80); glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
                    }
                    st_cur = want;
                }
            }

            GLuint tex_id = 0;
            if (st->textured) tex_id = vita_gl_get_or_create_texture(st->tcw, st->tsp);
            if (tex_id) {
                glEnable(GL_TEXTURE_2D);
                glBindTexture(GL_TEXTURE_2D, tex_id);
                /* PVR shading instruction: 0 decal (rgb,a = tex), 1 modulate (rgb = tex*col, a = tex; vertex alpha forced to 1 in ta_build_gl_ex),
                 * 2 decal-alpha (rgb = tex*ta + col*(1-ta), a = col.a), 3 modulate-alpha (rgb = tex*col, a = ta*col.a). */
                static const GLint env[4] = { GL_REPLACE, GL_MODULATE, GL_DECAL, GL_MODULATE };
                glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, env[st->shading & 3]);
            } else {
                glDisable(GL_TEXTURE_2D);
            }
            /* Translucent table fog: pre-fog the vertex colour toward FOG_COL_RAM (alpha untouched) before the blend (approximation: HW fogs after texture modulation) */
            int pre_fogged = 0;
            if (R2_TFOG && list_id == TA_L_TRANS && (st->fog_ctrl == 0 || st->fog_ctrl == 3) && fog_den) {
                float amax = 0.0f;
                for (uint32_t i = 0; i < batch->count; i++) {
                    uint32_t vi = batch->first + i;
                    float a = ta_fog_alpha(gl.verts[vi].z, fog_den, fog_table);
                    s_fv[vi] = s_cv[vi];
                    s_fv[vi].r = s_cv[vi].r + (fog_r - s_cv[vi].r) * a; s_fv[vi].g = s_cv[vi].g + (fog_g - s_cv[vi].g) * a; s_fv[vi].b = s_cv[vi].b + (fog_b - s_cv[vi].b) * a;
                    if (a > amax) amax = a;
                }
                if (amax > 1.0f / 255.0f) { glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_fv[0].r); pre_fogged = 1; }
            }
            glDrawArrays(GL_TRIANGLES, batch->first, batch->count);
            if (pre_fogged) glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_cv[0].r);
            /* Table fog (TSP fog control 0) on opaque polygons: a second untextured pass in FOG_COL_RAM with the per-vertex fog alpha, blended over the
             * lit/textured result and depth-tested GEQUAL (same vertices -> same depth, so exactly the visible pixels).  Translucent/punch-through are not fogged [ASSUMED approximation]. */
            if (list_id == TA_L_OPAQUE && st->fog_ctrl == 0 && (st->depth_mode == 4 || st->depth_mode == 6) && fog_den) {
                float amax = 0.0f;
                for (uint32_t i = 0; i < batch->count; i++) {
                    uint32_t vi = batch->first + i;
                    float a = ta_fog_alpha(gl.verts[vi].z, fog_den, fog_table);
                    s_fv[vi].px = s_cv[vi].px; s_fv[vi].py = s_cv[vi].py; s_fv[vi].pz = s_cv[vi].pz; s_fv[vi].u = 0; s_fv[vi].v = 0;
                    s_fv[vi].r = fog_r; s_fv[vi].g = fog_g; s_fv[vi].b = fog_b; s_fv[vi].a = a;
                    if (a > amax) amax = a;
                }
                if (amax > 1.0f / 255.0f) {
                    if (st_cur) { glDisable(GL_STENCIL_TEST); st_cur = 0; }
                    glDisable(GL_TEXTURE_2D);
                    glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
                    glDepthFunc(GL_GEQUAL); glDepthMask(GL_FALSE);
                    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_fv[0].r);
                    glDrawArrays(GL_TRIANGLES, batch->first, batch->count);
                    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &s_cv[0].r);
                    glDisable(GL_BLEND);
                }
            }
            if (s_dump_pending) gl_logf("[gl]  list %d batch %u first=%u count=%u tex=%u fmt=%u/%u/%u shade=%d depth=%d zwd=%d blend=%d/%d ua=%d glerr=0x%x", list_id, b, batch->first, batch->count, tex_id, st->pixel_format, st->mip_mapped, st->vq, st->shading, st->depth_mode, st->z_write_disable, st->src_blend, st->dst_blend, st->use_alpha, (unsigned)glGetError());
        }
    }

    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_SCISSOR_TEST);
    if (have_shadow && !R2_NOENDDIS) { glDisable(GL_STENCIL_TEST); glStencilMask(0xFF); }

    if (s_dump_pending) {
        gl_logf("[gl] dump: frame %d verts=%u batches=%u cut=%g texmiss=%u redecode=%u hashbytes=%u mods=%u glerr=0x%x", s_frame_no, gl.nverts, gl.nbatches, cut, s_tex_misses, s_tex_redecodes, s_tex_hash_bytes, (unsigned)frame->nmods, (unsigned)glGetError());
        s_shot_after_swap = 1; s_dump_pending = 0;      /* vitaGL's glReadPixels reads the presented (front) buffer: capture after the swap */
    }
    ta_gl_free(&gl);
}

void vita_gl_swap(void)
{
    vglSwapBuffers(GL_FALSE);
    if (s_shot_after_swap) { s_shot_after_swap = 0; dump_shot_ppm(); }
}

#else

/* Host stubs when building without the Vita toolchain */
void vita_gl_render_init(void) {}
void vita_gl_render_frame(const TaFrame *frame) { (void)frame; }
void vita_gl_swap(void) {}
GLuint vita_gl_get_or_create_texture(uint32_t tcw, uint32_t tsp) { (void)tcw; (void)tsp; return 0; }
void vita_gl_texture_cache_clear(void) {}

#endif
