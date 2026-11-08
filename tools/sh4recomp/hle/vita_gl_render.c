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
#include "swflag.h"
#include "r2prof.h"
#include "vita_gl_render.h"

#if defined(__vita__) || defined(CPA_PLATFORM_VITA)

#include <vitaGL.h>
#include <psp2/gxm.h>
#include <ctype.h>
#include <psp2/kernel/clib.h>
#include "hle.h"
#include "ta.h"
#include "texmap.h"
#include "perf.h"
#include "cpa_hd_tex.h"
#include "cpa_hd_manifest.h"
#include "cpa_hd_stage.h"
#ifdef R2_NATIVE_GFX
#include "native_hook.h"
#endif
#ifdef R2_USE_VITADEBUGGER
#include "uvdb.h"
#endif

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#if defined(__vita__)
static inline uint32_t fp_get(void) { uint32_t v; __asm__ volatile("vmrs %0, fpscr" : "=r"(v)); return v & 0x03C00000u; }      /* RMode[23:22], FZ[24], DN[25] */
static inline void fp_set(uint32_t m) { uint32_t v; __asm__ volatile("vmrs %0, fpscr" : "=r"(v)); v = (v & ~0x03C00000u) | m; __asm__ volatile("vmsr fpscr, %0" : : "r"(v)); }

extern void *gpu_alloc_mapped_aligned_for_gpu(uint32_t alignment, uint32_t size);
extern void vgl_free(void *ptr);
extern size_t vgl_malloc_usable_size(void *ptr);
extern void *__real_sceClibMspaceRealloc(void *mspace, void *ptr, size_t size);

/* Safe wrapper around Sony sceClibMspaceRealloc:
 * When VitaGL calls sceClibMspaceRealloc on pointers allocated with sceClibMspaceMemalign,
 * dlmalloc chunk headers are corrupted, crashing _mspace_malloc.
 * Our wrapper detects when realloc is called on an aligned chunk and performs safe re-allocation. */
void *__wrap_sceClibMspaceRealloc(void *mspace, void *ptr, size_t size)
{
    if (!ptr) return gpu_alloc_mapped_aligned_for_gpu(16, (uint32_t)size);
    if (!size) { vgl_free(ptr); return NULL; }
    size_t old_sz = vgl_malloc_usable_size(ptr);
    if (old_sz >= size) return ptr;
    void *new_ptr = gpu_alloc_mapped_aligned_for_gpu(16, (uint32_t)size);
    if (!new_ptr) return NULL;
    memcpy(new_ptr, ptr, old_sz < size ? old_sz : size);
    vgl_free(ptr);
    return new_ptr;
}
#else
#include <fenv.h>
static inline uint32_t fp_get(void) { return (uint32_t)fegetround(); }
static inline void fp_set(uint32_t m) { fesetround((int)m); }
#endif

/* R2_INTERNAL_SCALE (percent, build constant): render at a lower internal resolution; the display unit upscales the framebuffer to the 960x544 screen.  Only the sizes the Vita
 * display engine scales in hardware are valid: 100 (960x544), 75 (720x408), 67 (640x368), 50 (480x272).  Cuts fill-rate (translucent overdraw, fog pass) at the cost of sharpness;
 * everything below is derived from SCREEN_W / SCREEN_H.  Needs Vita measurement (perf.log "overdraw" and "swap" lines show whether the GPU is the limit). */
static int s_screen_w = 960;
static int s_screen_h = 544;
static int s_view_w   = 725;
static int s_view_x   = 117;

static void update_scale_dims(void) {
    int scale = r2_get_render_scale();
    if (scale == 75) {
        s_screen_w = 720; s_screen_h = 408;
    } else if (scale == 67) {
        s_screen_w = 640; s_screen_h = 368;
    } else if (scale == 50) {
        s_screen_w = 480; s_screen_h = 272;
    } else {
        s_screen_w = 960; s_screen_h = 544;
    }
    s_view_w = s_screen_h * 4 / 3;
    s_view_x = (s_screen_w - s_view_w) / 2;
}

#define SCREEN_W s_screen_w
#define SCREEN_H s_screen_h
#define VIEW_W   s_view_w
#define VIEW_X   s_view_x
/* 16:9: when the game runs its own 16:9 mode (hle_ta_wide_active(); forced on by default in ta_hle.c, R2_WIDE / hle_ta_wide_set() toggle) the 640x480 screen-space output is
 * horizontally squeezed by 1/k (k = 4/3) by the engine itself (wider FOV, widened culling, squeezed HUD), so the whole 640x480 vertex space is mapped onto the full
 * 960x544 viewport: x * 1.5, y * 1.1333 (pixel aspect 0.5% off square), geometry is rasterised natively, no bitmap scaling.  4:3 mode keeps the centred 725x544 pillarbox. */

#define TEX_CACHE_SIZE 4096
#define TEX_CACHE_MASK (TEX_CACHE_SIZE - 1)

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * Render thread design (R2_RENDER_THREAD, see re_analysis/dc/notes_render_thread.md)
 *   guest thread (vita_gl_present_frame, called at STARTRENDER):  validates / decodes textures, snapshots every piece of PVR state the renderer reads into a RenderJob, hands the job over.
 *   render thread (or the same thread when R2_RENDER_THREAD=0: identical code path): uploads textures, builds the GL batches from the TaFrame, draws, swaps.
 * The renderer never touches guest-written memory (VRAM, PVR registers, guest RAM): only the RenderJob.  The decoded-texture cache is split in two tables with the SAME slot indices:
 *   GTex (guest thread only): key (tcw, tsp&KEY), VRAM epoch stamp, validity bookkeeping.   RTex (render thread only): the GL texture object + its filter/wrap state.
 * A job carries the texture "ops" (slot, pixels to upload) the guest decided on and the "refs" (key -> slot) of every texture the frame draws; ops of frame N are executed before frame N is drawn
 * and frames are executed in order, so RTex always reflects the guest's view as of the frame being drawn.
 * ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
typedef struct {
    uint32_t tcw, tsp;                  /* key (tsp already masked) */
    HleTexStamp stamp;                  /* VRAM epoch / palette epoch / content hash at decode time */
    int chk_frame;                      /* guest frame number of the last successful validity check (once per frame) */
    uint8_t used;
    int dec_frame;
    uint8_t hd_pending;                 /* drawn with the original (PVR) texture while its HD override stages; re-checked each frame */
    uint32_t hd_va;
    char hd_bank[32];
} GTexEntry;
typedef struct {
    GLuint tex_id;
    uint8_t levels;                     /* mip levels of the uploaded texture */
    GLint minf, magf, wrap_s, wrap_t;   /* parameters currently set on the GL texture object (0 = unknown) */
    void *gpu_mem;                      /* DXT chain copy in GPU-mapped memory; vitaGL may reference it after glCompressedTexImage2D (freed with the texture) */
} RTexEntry;
static GTexEntry s_gtex[TEX_CACHE_SIZE];
static RTexEntry s_rtex[TEX_CACHE_SIZE];

typedef struct { uint16_t slot; uint8_t reset, levels, fmt; uint16_t w, h; void *pix; } TexOp;   /* pix == NULL with reset: delete the slot's GL texture; fmt: 0 ARGB1555, 1 RGB565, 2 ARGB4444, other 32-bit RGBA */
typedef struct { uint32_t tcw, tsp; int slot; } TexRef;
typedef struct RenderJob {
    TaFrame *frame;                     /* owned by the job: freed by the render side after drawing (NULL until parsed when raw != NULL) */
    TaRaw *raw; uint32_t shad_scale;    /* deferred parse: captured packets, parsed by the render thread; FPU_SHAD_SCALE as of STARTRENDER */
    int is_fb; uint32_t fb_off;         /* direct frame-buffer presentation job (swirl / loading vignet) */
    void *native;                       /* R2_NATIVE_GFX: NatJob built by native_hook_frame (NULL = draw the TA frame as usual) */
    int is_cap;                         /* scene-capture job: read the presented (front) buffer back into s_scene565 (base image of the swirl transition) */
    uint32_t regs[256];                 /* PVR register file 0x5F8000..0x5F83FC at STARTRENDER (control regs + fog table at 0x80..0xFF; palette RAM is decoded on guest thread) */
    float bg[3][4]; uint32_t bg_isp, bg_tsp, bg_tcw; int have_bg;   /* ISP_BACKGND plane (lives in VRAM) */
    int wide;                           /* hle_ta_wide_active() */
    uint32_t fpmode;                    /* FP rounding / flush-to-zero mode of the guest thread at STARTRENDER (the SH-4 code runs with FPSCR.RM=1 = round-to-zero in the hardware FPSCR; the old inline renderer inherited it, the render thread must run the same arithmetic) */
    TexOp *ops; uint32_t nops, capops;
    TexRef *refs; uint32_t nrefs, caprefs;
    uint64_t t_prep_us;
    char slow[400];                     /* '[slow] ...' guest-side breakdown of the guest frame that produced this job (empty unless it was a hang); completed with the render-side numbers in pf_end */
} RenderJob;
#define PVR_REGJ(j, addr) ((j)->regs[((addr) - 0x005F8000u) >> 2])

static uint32_t s_gframe_no = 0;        /* guest-side frame counter (texture validity is checked at most once per frame) */
static uint32_t s_frame_no = 0;         /* render-side frame counter (logs) */
static GLuint s_cur_tex = (GLuint)-1;   /* texture bound to GL_TEXTURE_2D as far as the render side knows ((GLuint)-1 = unknown) */
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
#ifndef R2_GL_DEBUG
#define R2_GL_DEBUG 0                   /* 1: log translucent-list batches every 60th frame (each gl_logf is an SD-card fopen) */
#endif
static uint32_t s_tex_misses, s_tex_redecodes;     /* guest side */
VitaGlPerf vita_gl_perf;
static VitaGlPfFrame pf;                         /* counters of the frame in flight (render thread) */
const VitaGlPfFrame *vita_gl_pf_frame(void) { return &pf; }
#ifndef R2_PF
#define R2_PF R2_PERF                           /* 1: once-per-second [pf] summary (timing split + work counters + worst frame); -DR2_PF=0 removes the timing code (the counters stay, they are plain increments) */
#endif
static uint64_t s_pf_pending_parse;              /* render thread: parse time of the job about to execute (consumed by pf_begin) */

/* PVR registers read straight from the flat register file (boot.c) - GUEST thread only (texture decode palette / control registers at hand-off time). */
#define PVR_REG(addr) (hle_pvr_regs()[((addr) - 0x005F8000u) >> 2])

/* ----------------------------------------------------------------------------
 * Texture bookkeeping + decode (guest side), upload + bind (render side)
 * ---------------------------------------------------------------------------- */

static inline void bind_tex(GLuint id)
{
    if (s_cur_tex == id) return;
    glBindTexture(GL_TEXTURE_2D, id); s_cur_tex = id; vita_gl_perf.tex_binds++; pf.tex_bind++;
}

/* filter / wrap of the texture object for a given TSP word.  PVR2 TSP: bit15 ClampV, bit16 ClampU, bit17 FlipV, bit18 FlipU (same as TaState.clamp_v/clamp_u/flip_v/flip_u; the old
 * u/v swap smeared planks/rock and cut Lum glows in half).  Only touches GL when a value differs from what the object already has. */
static void apply_tex_params(RTexEntry *e, uint32_t tsp)
{
    int filt = (int)((tsp >> 13) & 3);                /* 0 point, 1 bilinear, 2/3 trilinear */
    GLint magf = filt ? GL_LINEAR : GL_NEAREST, minf;
    /* In VitaGL, GL_LINEAR_MIPMAP_NEAREST and GL_NEAREST_MIPMAP_NEAREST disable hardware mip filtering (SCE_GXM_TEXTURE_MIP_FILTER_DISABLED).
     * To enable hardware mipmap filtering on Vita GXM, GL_*_MIPMAP_LINEAR must be used. */
    if (e->levels > 1) minf = filt == 0 ? GL_NEAREST_MIPMAP_LINEAR : GL_LINEAR_MIPMAP_LINEAR;
    else minf = magf;
    int clamp_v = (int)((tsp >> 15) & 1), clamp_u = (int)((tsp >> 16) & 1), flip_v = (int)((tsp >> 17) & 1), flip_u = (int)((tsp >> 18) & 1);
    GLint ws = clamp_u ? GL_CLAMP_TO_EDGE : flip_u ? GL_MIRRORED_REPEAT : GL_REPEAT, wt = clamp_v ? GL_CLAMP_TO_EDGE : flip_v ? GL_MIRRORED_REPEAT : GL_REPEAT;
    if (e->minf == minf && e->magf == magf && e->wrap_s == ws && e->wrap_t == wt) return;
    bind_tex(e->tex_id);
    if (e->minf != minf) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minf);
        e->minf = minf;
        vita_gl_perf.tex_params++;
        pf.tex_param++;
        if (e->levels > 1) {
            SceGxmTexture *gxm_tex = vglGetGxmTexture(GL_TEXTURE_2D);
            if (gxm_tex) {
                sceGxmTextureSetMipFilter(gxm_tex, SCE_GXM_TEXTURE_MIP_FILTER_ENABLED);
                sceGxmTextureSetMipmapCount(gxm_tex, e->levels);
            }
        }
    }
    if (e->magf != magf) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magf); e->magf = magf; vita_gl_perf.tex_params++; pf.tex_param++; }
    if (e->wrap_s != ws) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, ws); e->wrap_s = ws; vita_gl_perf.tex_params++; pf.tex_param++; }
    if (e->wrap_t != wt) { glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wt); e->wrap_t = wt; vita_gl_perf.tex_params++; pf.tex_param++; }
}

/* GUEST: decode the texture of (tcw, tsp) from VRAM into a fresh pixel buffer (the render side uploads and frees it).  Returns the buffer or NULL.
 * For format 1 (RGB565), decodes directly into a 16-bit buffer. Alpha formats (0: ARGB1555, 2: ARGB4444) decode to 32-bit RGBA for maximum quality and VitaGL compatibility. */
/* Mip levels of a full chain for an image of this size (down to 1x1). */
static uint8_t hd_full_levels(uint32_t w, uint32_t h)
{
    uint32_t m = w > h ? w : h;
    uint8_t n = 1;
    while (m > 1) { m >>= 1; n++; }
    return n;
}

static int s_hd_pending;                /* set by decode_texture when the HD override is still being staged */
static uint32_t s_hd_pending_va;
static char s_hd_pending_bank[32];
/* records on a cache entry that it was decoded from the original texture while its override stages */
static void mark_hd_pending(GTexEntry *e)
{
    e->hd_pending = (uint8_t)(s_hd_pending ? 1 : 0);
    if (s_hd_pending) { e->hd_va = s_hd_pending_va; snprintf(e->hd_bank, sizeof e->hd_bank, "%s", s_hd_pending_bank); }
}
#define TEX_PENDING_ID 0xFFFFFFFFu       /* render_texture: texture not staged yet; the batch is skipped this frame */

static void *decode_texture(uint32_t tcw, uint32_t tsp, int *pw, int *ph, uint8_t *pfmt, uint8_t *plevels)
{
    if (plevels) *plevels = 0;
    s_hd_pending = 0;
    /* Check HD replacement hook first */
    uint32_t vram_addr = (tcw & 0x1FFFFFu) << 3;
    const HleTex *t = hle_texmap_find(vram_addr);
    char level_buf[32] = {0};
    const uint8_t *ram = hle_ptr(0x8C000000u);
    if (ram) {
        for (int i = 0; i < 30; i++) {
            char c = (char)ram[0x123B09u + i];
            if (c == '$' || c == 0) break;
            if (!(isalnum((unsigned char)c) || c == '_')) { level_buf[0] = 0; break; }
            level_buf[i] = (char)toupper((unsigned char)c);
        }
    }
    if (cpa_hd_tex_is_enabled()) {
        /* HD overrides are staged by a worker thread (cpa_hd_stage.h): no file is read or decoded on this thread. */
        cpa_hd_stage_init();
        static bool s_fix_prefetched;
        static char s_prefetched_level[32];
        if (!s_fix_prefetched) { cpa_hd_stage_prefetch_bank("FIX"); s_fix_prefetched = true; }
        /* Level-load prefetch (HD_Texture_Plan.md, Phase 4): the first decode under a new level name queues that bank. */
        if (level_buf[0] && strcmp(s_prefetched_level, level_buf) != 0) {
            snprintf(s_prefetched_level, sizeof(s_prefetched_level), "%s", level_buf);
            cpa_hd_stage_prefetch_bank(level_buf);
        }

        const char *bank = (t && t->struct_va && cpa_hd_manifest_is_fix_va(t->struct_va)) ? "FIX" : (level_buf[0] ? level_buf : cpa_hd_tex_get_level());
        bool is_fix = (strcmp(bank, "FIX") == 0);
        CpaHdTexture hd_tex;
        CpaHdStageState st = cpa_hd_stage_request(bank, t ? t->struct_va : 0, -1, &hd_tex);
        if (st == CPA_HD_STAGE_PENDING) {   /* the original texture is drawn meanwhile; the entry is re-checked each frame until the override is ready */
            s_hd_pending = 1; s_hd_pending_va = t ? t->struct_va : 0; snprintf(s_hd_pending_bank, sizeof s_hd_pending_bank, "%s", bank);
        }
   /* not staged yet: the batch is skipped and the texture is asked again next frame; PVR is not used (it would stay cached and the override would never show) */
        if (st == CPA_HD_STAGE_READY) {
#ifdef CPA_HD_FORCE_RGBA
            /* test build: expand DXT to RGBA here, like FIX, so no compressed upload happens */
            if (hd_tex.format != CPA_HD_TEX_FMT_RGBA8888) {
                size_t npx = (size_t)hd_tex.width * hd_tex.height;
                uint32_t *px = (uint32_t *)malloc(npx * 4);
                if (px && cpa_dxt_decompress(hd_tex.data, hd_tex.width, hd_tex.height, hd_tex.format, px) == 0) {
                    free(hd_tex.data);
                    hd_tex.data = px;
                    hd_tex.format = CPA_HD_TEX_FMT_RGBA8888;
                    hd_tex.data_size = (uint32_t)(npx * 4);
                    hd_tex.mip_count = 1;
                    is_fix = true; /* full GL mip chain, as FIX gets */
                } else {
                    free(px);
                    free(hd_tex.data);
                    return NULL;
                }
            }
#endif
            *pw = (int)hd_tex.width;
            *ph = (int)hd_tex.height;
            if (hd_tex.format == CPA_HD_TEX_FMT_RGBA8888) {
                /* RGBA8888 (FIX always; PNG/raw overrides): FIX gets a GL mip chain for smooth anti-aliased fonts */
                if (plevels) *plevels = (tcw >> 31) ? hd_full_levels(hd_tex.width, hd_tex.height) : 1;   /* the override is 2x the original: its own chain, not the PVR's */
                *pfmt = 255;
            } else {
                /* DXT1 / DXT5 with the baked mip chain, uploaded compressed */
                if (plevels) *plevels = hd_tex.mip_count;
                *pfmt = (hd_tex.format == CPA_HD_TEX_FMT_DXT1) ? 254 : 253;
            }
            return hd_tex.data;
        }
    }

    uint8_t *vram = hle_vram_ptr();
    if (!vram) return NULL;
    int w, h;
    ta_tex_size(tsp, &w, &h);
    if (tcw >> 31) h = w;                             /* mip chains are square */
    const uint32_t *pr = hle_pvr_regs();
    TaTexEnv env = { pr + 0x400, PVR_REG(0x005F8108u), PVR_REG(0x005F80E4u) };   /* palette RAM, PAL_RAM_CTRL, TEXT_CONTROL */
    int fmt = (int)((tcw >> 27) & 7);
    int force_op = (fmt == 0) ? 0 : (int)((tsp >> 19) & 1);
    *pfmt = (uint8_t)fmt;
    if (fmt == 1) {
        uint16_t *px16 = (uint16_t *)malloc((size_t)w * h * sizeof(uint16_t));
        if (!px16) return NULL;
        if (ta_tex_decode16(vram, 8u << 20, tcw, tsp, &env, 0, force_op, px16) == 0) {
            *pw = w; *ph = h;
            return px16;
        }
        free(px16);
    }
    uint32_t *px = (uint32_t *)malloc((size_t)w * h * sizeof(uint32_t));
    if (!px) return NULL;
    if (!(fmt == 5 || fmt == 6)) env.pal = NULL;
    ta_tex_decode(vram, 8u << 20, tcw, tsp, &env, 0, force_op, px);
    *pw = w; *ph = h;
    *pfmt = 255; /* 32-bit RGBA */
    return px;
}

static inline uint32_t tex_hash(uint32_t tcw, uint32_t tsp)
{
    uint32_t h = tcw ^ (tsp * 0x9E3779B9u);
    h ^= h >> 16; h *= 0x85EBCA6Bu; h ^= h >> 13; h *= 0xC2B2AE35u; h ^= h >> 16;
    return h & TEX_CACHE_MASK;
}

/* GUEST: is the cached decode still valid?  Checked at most once per frame per texture.  The game writes textures through paths that never call kmLoadTexture and surfaces overlap, so the
 * per-surface generation counter missed updates and left textures stale/black; the VRAM page epochs see every write path, and the content hash backs them up whenever a page of the
 * texture was written (identical rewrites and neighbouring-texture writes do not force a re-decode). */
static int entry_valid(GTexEntry *e)
{
    if (R2_TEX_AGE && (int)s_gframe_no - e->dec_frame > R2_TEX_AGE) return 0;   /* DEBUG experiment */
    if (e->hd_pending) {   /* original texture on screen: the override takes over once it is ready (a cheap check, no decode) */
        if (cpa_hd_stage_poll(e->hd_bank, e->hd_va, -1) != CPA_HD_STAGE_PENDING) return 0;
    }
    if (e->chk_frame == (int)s_gframe_no) return 1;
    if (!hle_texstamp_valid(&e->stamp, e->tcw, e->tsp)) return 0;
    e->chk_frame = (int)s_gframe_no;
    return 1;
}

static TexOp *job_op(RenderJob *j)
{
    if (j->nops == j->capops) { j->capops = j->capops ? j->capops * 2 : 16; j->ops = (TexOp *)realloc(j->ops, j->capops * sizeof(TexOp)); }
    return &j->ops[j->nops++];
}
/* GUEST: make sure the texture (tcw, tsp_full) is current in the GL cache as of this frame; queue an upload op when it is new or stale.  Returns the slot or -1. */
static int guest_texture_slot(RenderJob *j, uint32_t tcw, uint32_t tsp_full)
{
    const uint32_t tsp = tsp_full & HLE_TEX_KEY_TSP;
    uint32_t h = tex_hash(tcw, tsp);
    GTexEntry *slot = NULL; int reset = 0;
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        GTexEntry *e = &s_gtex[(h + i) & TEX_CACHE_MASK];
        if (!e->used) { slot = e; break; }
        if (e->tcw == tcw && e->tsp == tsp) {
            int sl = (int)(e - s_gtex);
            if (!entry_valid(e)) {
                s_tex_redecodes++;
                int w, hh; uint8_t fmt, hd_levels = 0; void *px = decode_texture(tcw, tsp, &w, &hh, &fmt, &hd_levels);
                if (!px) { TexOp *op = job_op(j); op->slot = (uint16_t)sl; op->reset = 1; op->pix = NULL; op->w = op->h = op->levels = op->fmt = 0; memset(e, 0, sizeof *e); return s_hd_pending ? -2 : -1; }
                hle_texstamp_set(&e->stamp, tcw, tsp); mark_hd_pending(e); e->dec_frame = (int)s_gframe_no; e->chk_frame = (int)s_gframe_no;
                TexOp *op = job_op(j); op->slot = (uint16_t)sl; op->reset = 0; op->pix = px; op->w = (uint16_t)w; op->h = (uint16_t)hh;
                op->levels = (hd_levels > 1) ? hd_levels : (uint8_t)ta_tex_levels(tcw, tsp);
                op->fmt = fmt;
            }
            return sl;
        }
    }
    if (!slot) {                                      /* cache full: evict the home bucket */
        slot = &s_gtex[h]; reset = 1;
        memset(slot, 0, sizeof *slot);
    }
    int sl = (int)(slot - s_gtex);
    s_tex_misses++;
    memset(slot, 0, sizeof *slot);
    slot->tcw = tcw; slot->tsp = tsp;
    int w, hh; uint8_t fmt, hd_levels = 0; void *px = decode_texture(tcw, tsp, &w, &hh, &fmt, &hd_levels);
    if (!px) { memset(slot, 0, sizeof *slot); if (reset) { TexOp *op = job_op(j); op->slot = (uint16_t)sl; op->reset = 1; op->pix = NULL; op->w = op->h = op->levels = op->fmt = 0; } return s_hd_pending ? -2 : -1; }
    hle_texstamp_set(&slot->stamp, tcw, tsp); mark_hd_pending(slot); slot->dec_frame = (int)s_gframe_no; slot->chk_frame = (int)s_gframe_no; slot->used = 1;
    TexOp *op = job_op(j); op->slot = (uint16_t)sl; op->reset = (uint8_t)reset; op->pix = px; op->w = (uint16_t)w; op->h = (uint16_t)hh;
    op->levels = (hd_levels > 1) ? hd_levels : (uint8_t)ta_tex_levels(tcw, tsp);
    op->fmt = fmt;
    return sl;
}

/* Frees a copied DXT chain. R2_HD_GPU_MEM_NOFREE (test build) keeps it alive to isolate the free. */
#ifdef R2_HD_GPU_MEM_NOFREE
#define HD_GPU_FREE(p) ((void)(p))
#else
#define HD_GPU_FREE(p) vgl_free(p)
#endif

/* Bytes of a block-compressed mip chain of `levels` levels, as the DXT upload branches walk it. */
static size_t dxt_chain_bytes(uint32_t w, uint32_t h, int levels, uint32_t block)
{
    size_t total = 0;
    for (int lvl = 0; lvl < levels; lvl++) {
        uint32_t cw = (w >> lvl) > 0 ? (w >> lvl) : 1;
        uint32_t ch = (h >> lvl) > 0 ? (h >> lvl) : 1;
        total += (size_t)((cw + 3) / 4) * ((ch + 3) / 4) * block;
    }
    return total;
}

/* RENDER: execute the texture ops of a job (GL object create / delete / upload) */
static void render_exec_ops(RenderJob *j)
{
    for (uint32_t i = 0; i < j->nops; i++) {
        TexOp *op = &j->ops[i]; RTexEntry *e = &s_rtex[op->slot];
        if (op->reset && e->tex_id) { glDeleteTextures(1, &e->tex_id); s_cur_tex = (GLuint)-1; if (e->gpu_mem) HD_GPU_FREE(e->gpu_mem); memset(e, 0, sizeof *e); }
        if (!op->pix) continue;
#if R2_PERF
        uint64_t t0 = r2_now_us();
#endif
        if (e->tex_id == 0) glGenTextures(1, &e->tex_id);
        if (e->tex_id) {
            bind_tex(e->tex_id);
            if (op->fmt == 253) {
                /* Hardware-compressed DXT5 (UBC3) - multi-level upload with safe vgl_realloc */
                GLsizei block_bytes = 16;
                /* copy the chain into GPU-mapped memory the entry keeps; the payload itself is freed below */
                size_t chain_sz = dxt_chain_bytes(op->w, op->h, op->levels, 16);
                uint8_t *gm = (uint8_t *)gpu_alloc_mapped_aligned_for_gpu(64, (uint32_t)chain_sz);
                if (gm) memcpy(gm, op->pix, chain_sz);
                const uint8_t *base = gm ? gm : (const uint8_t *)op->pix;
                void *old_gm = e->gpu_mem;
                if (gm) e->gpu_mem = gm;
                const uint8_t *ptr = base;
                uint32_t total_sz = 0;
                uint8_t upload_levels = 0;
                for (uint8_t lvl = 0; lvl < op->levels; lvl++) {
                    GLsizei cur_w = (op->w >> lvl) > 0 ? (op->w >> lvl) : 1;
                    GLsizei cur_h = (op->h >> lvl) > 0 ? (op->h >> lvl) : 1;
                    GLsizei lvl_sz = ((cur_w + 3) / 4) * ((cur_h + 3) / 4) * block_bytes;
                    if (cur_w >= 4 && cur_h >= 4) {
                        glCompressedTexImage2D(GL_TEXTURE_2D, lvl, GL_COMPRESSED_RGBA_S3TC_DXT5_EXT, cur_w, cur_h, 0, lvl_sz, ptr);
                        upload_levels = lvl + 1;
                    }
                    ptr += lvl_sz;
                    total_sz += (uint32_t)lvl_sz;
                }
                if (upload_levels == 0) {
                    GLsizei lvl_sz = ((op->w + 3) / 4) * ((op->h + 3) / 4) * block_bytes;
                    glCompressedTexImage2D(GL_TEXTURE_2D, 0, GL_COMPRESSED_RGBA_S3TC_DXT5_EXT, op->w, op->h, 0, lvl_sz, base);
                    upload_levels = 1;
                    total_sz = (uint32_t)lvl_sz;
                }
                if (old_gm) HD_GPU_FREE(old_gm);   /* the previous chain is no longer referenced by this texture */
                vita_gl_perf.tex_uploads++; pf.tex_up++; pf.tex_bytes += total_sz;
                e->levels = upload_levels;
#if R2_PERF
                g_perf.tex_uploads++; g_perf.tex_bytes += (uint64_t)total_sz;
#endif
                e->minf = e->magf = e->wrap_s = e->wrap_t = 0;
                if (e->levels > 1) {
                    SceGxmTexture *gxm_tex = vglGetGxmTexture(GL_TEXTURE_2D);
                    if (gxm_tex) {
                        sceGxmTextureSetMipFilter(gxm_tex, SCE_GXM_TEXTURE_MIP_FILTER_ENABLED);
                        sceGxmTextureSetMipmapCount(gxm_tex, e->levels);
                    }
                }
            } else if (op->fmt == 254) {
                /* Hardware-compressed DXT1 (UBC1) - multi-level upload with safe vgl_realloc */
                GLsizei block_bytes = 8;
                /* copy the chain into GPU-mapped memory the entry keeps; the payload itself is freed below */
                size_t chain_sz = dxt_chain_bytes(op->w, op->h, op->levels, 8);
                uint8_t *gm = (uint8_t *)gpu_alloc_mapped_aligned_for_gpu(64, (uint32_t)chain_sz);
                if (gm) memcpy(gm, op->pix, chain_sz);
                const uint8_t *base = gm ? gm : (const uint8_t *)op->pix;
                void *old_gm = e->gpu_mem;
                if (gm) e->gpu_mem = gm;
                const uint8_t *ptr = base;
                uint32_t total_sz = 0;
                uint8_t upload_levels = 0;
                for (uint8_t lvl = 0; lvl < op->levels; lvl++) {
                    GLsizei cur_w = (op->w >> lvl) > 0 ? (op->w >> lvl) : 1;
                    GLsizei cur_h = (op->h >> lvl) > 0 ? (op->h >> lvl) : 1;
                    GLsizei lvl_sz = ((cur_w + 3) / 4) * ((cur_h + 3) / 4) * block_bytes;
                    if (cur_w >= 4 && cur_h >= 4) {
                        glCompressedTexImage2D(GL_TEXTURE_2D, lvl, GL_COMPRESSED_RGBA_S3TC_DXT1_EXT, cur_w, cur_h, 0, lvl_sz, ptr);
                        upload_levels = lvl + 1;
                    }
                    ptr += lvl_sz;
                    total_sz += (uint32_t)lvl_sz;
                }
                if (upload_levels == 0) {
                    GLsizei lvl_sz = ((op->w + 3) / 4) * ((op->h + 3) / 4) * block_bytes;
                    glCompressedTexImage2D(GL_TEXTURE_2D, 0, GL_COMPRESSED_RGBA_S3TC_DXT1_EXT, op->w, op->h, 0, lvl_sz, base);
                    upload_levels = 1;
                    total_sz = (uint32_t)lvl_sz;
                }
                if (old_gm) HD_GPU_FREE(old_gm);   /* the previous chain is no longer referenced by this texture */
                vita_gl_perf.tex_uploads++; pf.tex_up++; pf.tex_bytes += total_sz;
                e->levels = upload_levels;
#if R2_PERF
                g_perf.tex_uploads++; g_perf.tex_bytes += (uint64_t)total_sz;
#endif
                e->minf = e->magf = e->wrap_s = e->wrap_t = 0;
                if (e->levels > 1) {
                    SceGxmTexture *gxm_tex = vglGetGxmTexture(GL_TEXTURE_2D);
                    if (gxm_tex) {
                        sceGxmTextureSetMipFilter(gxm_tex, SCE_GXM_TEXTURE_MIP_FILTER_ENABLED);
                        sceGxmTextureSetMipmapCount(gxm_tex, e->levels);
                    }
                }
            } else {
                GLenum ifmt, format, type;
                uint32_t bpp;
                if (op->fmt == 0) {
                    ifmt = GL_RGBA; format = GL_RGBA; type = GL_UNSIGNED_SHORT_5_5_5_1; bpp = 2;
                } else if (op->fmt == 1) {
                    ifmt = GL_RGB; format = GL_RGB; type = GL_UNSIGNED_SHORT_5_6_5; bpp = 2;
                } else if (op->fmt == 2) {
                    ifmt = GL_RGBA; format = GL_RGBA; type = GL_UNSIGNED_SHORT_4_4_4_4; bpp = 2;
                } else {
                    ifmt = GL_RGBA; format = GL_RGBA; type = GL_UNSIGNED_BYTE; bpp = 4;
                }
                glTexImage2D(GL_TEXTURE_2D, 0, ifmt, op->w, op->h, 0, format, type, op->pix);
                vita_gl_perf.tex_uploads++; pf.tex_up++; pf.tex_bytes += (uint32_t)op->w * op->h * bpp;
                e->levels = op->levels;
                if (op->levels > 1) {
                    glGenerateMipmap(GL_TEXTURE_2D);   /* the PVR mip levels are box-filtered versions of level 0 in the source files */
                    SceGxmTexture *gxm_tex = vglGetGxmTexture(GL_TEXTURE_2D);
                    if (gxm_tex) {
                        sceGxmTextureSetMipFilter(gxm_tex, SCE_GXM_TEXTURE_MIP_FILTER_ENABLED);
                        sceGxmTextureSetMipmapCount(gxm_tex, e->levels);
                    }
                }
                e->minf = e->magf = e->wrap_s = e->wrap_t = 0;        /* (re)apply filter / wrap for the TSP the batch draws with */
#if R2_PERF
                g_perf.tex_uploads++; g_perf.tex_bytes += (uint64_t)op->w * op->h * bpp;
#endif
            }
        }
#if R2_PERF
        g_perf.t_texdec += r2_now_us() - t0;
#endif
        free(op->pix); op->pix = NULL;
    }
    j->nops = 0;
}
/* RENDER: GL texture for a (tcw, tsp) the job's refs know, with filter / wrap set for this tsp; 0 = draw untextured */
static GLuint render_texture(const RenderJob *j, const uint16_t *tab, uint32_t tcw, uint32_t tsp_full)
{
    const uint32_t tsp = tsp_full & HLE_TEX_KEY_TSP;
    uint32_t h = tex_hash(tcw, tsp) & 2047;
    for (uint32_t i = 0; i < 2048; i++) {
        uint16_t v = tab[(h + i) & 2047];
        if (!v) return 0;
        const TexRef *r = &j->refs[v - 1];
        if (r->tcw == tcw && r->tsp == tsp) {
            if (r->slot == -2) return TEX_PENDING_ID;   /* override still staging: draw nothing for this batch */
            if (r->slot < 0) return 0;
            RTexEntry *e = &s_rtex[r->slot];
            if (!e->tex_id) return 0;
            apply_tex_params(e, tsp_full);
            return e->tex_id;
        }
    }
    return 0;
}

void vita_gl_texture_cache_clear(void)
{
    for (uint32_t i = 0; i < TEX_CACHE_SIZE; i++) {
        if (s_rtex[i].tex_id) glDeleteTextures(1, &s_rtex[i].tex_id);
        if (s_rtex[i].gpu_mem) HD_GPU_FREE(s_rtex[i].gpu_mem);
        memset(&s_rtex[i], 0, sizeof s_rtex[i]); memset(&s_gtex[i], 0, sizeof s_gtex[i]);
    }
    s_cur_tex = (GLuint)-1;
}

/* ----------------------------------------------------------------------------
 * vitaGL lifecycle & rendering
 * ---------------------------------------------------------------------------- */

static void gl_init_context(void)
{
    update_scale_dims();
    vglInitExtended(8 * 1024 * 1024, SCREEN_W, SCREEN_H, 16 * 1024 * 1024, SCE_GXM_MULTISAMPLE_NONE);
    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClearDepthf(0.0f);                              /* depth buffer holds s/W: 0 = infinitely far */
    glDepthMask(GL_TRUE);
    glDepthRangef(0.0f, 1.0f);
    vita_gl_texture_cache_clear();
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
#ifdef R2_DEBUG_POLL
/* build with -DR2_DEBUG_POLL to enable the SD-card trigger files (two fopen() per poll on the render thread, every 16 frames) */
static void debug_capture_poll(void)
{
    if ((s_frame_no & 15) != 0) return;
    { FILE *q = fopen(DUMP_DIR "ONLY.TXT", "rb"); s_only_tcw = 0; if (q) { char b[32] = {0}; fread(b, 1, 31, q); fclose(q); s_only_tcw = (uint32_t)strtoul(b, NULL, 16); } }   /* debug: draw only translucent batches with this TCW */
    FILE *t = fopen(DUMP_DIR "SHOT.TXT", "rb");
    if (t) { fclose(t); remove(DUMP_DIR "SHOT.TXT"); s_dump_pending = 1; }
}
#else
#define debug_capture_poll() ((void)0)
#endif

/* ----------------------------------------------------------------------------
 * GL state cache.  vitaGL marks the fixed-function vertex/fragment programs dirty on every glEnable/glDisable/glTexEnvi/glBlendFunc/glAlphaFunc/glColorPointer call, even when the
 * value is unchanged, which forces a shader reload + uniform upload on the next glDrawArrays.  All state set in the batch loop goes through these wrappers and reaches GL only
 * when it differs from what GL already has.  Everything is reset to "unknown" at the start of a frame and after code that talks to GL directly (shadow pass).
 * ---------------------------------------------------------------------------- */
static struct { int depth_test, depth_func, depth_mask, blend, bsrc, bdst, alpha_test, alpha_ref, tex2d, env; const void *colptr; int colstride; } gc;
static void gc_reset(void) { memset(&gc, 0xFF, sizeof gc); gc.colptr = (const void *)(uintptr_t)~(uintptr_t)0; }
#define GC_SET(field, val, call) do { int _v = (int)(val); if (gc.field != _v) { gc.field = _v; call; vita_gl_perf.state_calls++; pf.st_##field++; } else vita_gl_perf.state_skipped++; } while (0)
static inline void gc_depth_test(int on) { GC_SET(depth_test, on, if (on) glEnable(GL_DEPTH_TEST); else glDisable(GL_DEPTH_TEST)); }
static inline void gc_depth_func(GLenum f) { GC_SET(depth_func, f, glDepthFunc(f)); }
static inline void gc_depth_mask(int m) { GC_SET(depth_mask, m, glDepthMask(m ? GL_TRUE : GL_FALSE)); }
static inline void gc_blend(int on) { GC_SET(blend, on, if (on) glEnable(GL_BLEND); else glDisable(GL_BLEND)); }
static inline void gc_blend_func(GLenum s, GLenum d)
{
    if (gc.bsrc != (int)s || gc.bdst != (int)d) { gc.bsrc = (int)s; gc.bdst = (int)d; glBlendFunc(s, d); vita_gl_perf.state_calls++; pf.st_blendfunc++; } else vita_gl_perf.state_skipped++;
}
static inline void gc_alpha_test(int on) { GC_SET(alpha_test, on, if (on) glEnable(GL_ALPHA_TEST); else glDisable(GL_ALPHA_TEST)); }
static inline void gc_alpha_ref(int ref255) { GC_SET(alpha_ref, ref255, glAlphaFunc(GL_GEQUAL, (float)ref255 / 255.0f)); }
static inline void gc_tex2d(int on) { GC_SET(tex2d, on, if (on) glEnable(GL_TEXTURE_2D); else glDisable(GL_TEXTURE_2D)); }
static inline void gc_texenv(GLint m) { GC_SET(env, m, glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, m)); }
static inline void gc_color_ptr(const void *p, int stride)
{
    if (gc.colptr != p || gc.colstride != stride) { gc.colptr = p; gc.colstride = stride; glColorPointer(4, GL_FLOAT, stride, p); vita_gl_perf.state_calls++; pf.st_colptr++; } else vita_gl_perf.state_skipped++;
}

static TaClipVertex *s_cv = NULL;
static float (*s_fc)[4] = NULL;                   /* fog-pass colours (r,g,b,a), one packed float4 per vertex, parallel to s_cv (read through glColorPointer with stride 16: no position / uv copy) */
#define CV_STRIDE ((int)sizeof(TaClipVertex))
#define FC_STRIDE ((int)sizeof(float) * 4)

/* ---- table fog second pass (see the batch loop).  The alpha / colour of the pass are built into s_fc by the loop; this issues the draw.
 * Opaque and punch-through lists: when every batch of the list uses depth func GREATER with depth writes on, the fog passes are deferred to the end of the list (fq[]) and drawn back to back: a fog pass at GEQUAL only
 * lands on pixels where its batch is the visible one, so a later batch that overwrites those pixels (and carries its own fog pass) hides it either way, and the result equals the interleaved order
 * (up to the 8-bit rounding order of two fog blends on a coplanar tie).  This removes the per-batch colour-pointer / blend / depth state toggles (each one makes vitaGL reload its programs). ---- */
#if R2_PERF || R2_PF
/* sum of triangle areas of a GL_TRIANGLES vertex run, in units of the 640x480 screen (vertices are already in 640x480 pixel space) */
static inline float perf_area(const TaGlVertex *v, uint32_t n)
{
#if defined(R2_VITA_PROFILE)
    float a = 0.0f;
    for (uint32_t i = 0; i + 2 < n; i += 3) {
        float ar = (v[i + 1].x - v[i].x) * (v[i + 2].y - v[i].y) - (v[i + 2].x - v[i].x) * (v[i + 1].y - v[i].y);
        a += ar < 0 ? -ar : ar;
    }
    return a * (0.5f / (640.0f * 480.0f));
#else
    (void)v; (void)n;
    return 0.0f;
#endif
}
#endif
typedef struct FogJob { uint32_t first, count; GLuint tex_id; uint8_t textured, alpha_test; } FogJob;
static int s_fog_defer = -1;                      /* run-time switch NO_FOG_DEFER (host: env R2_NO_FOG_DEFER): draw every fog pass right after its batch like before */
static void fog_pass_draw(int *st_cur, const FogJob *fj, uint32_t fog_ram, float fog_r, float fog_g, float fog_b, const TaGlVertex *gv)
{
    if (*st_cur) { glDisable(GL_STENCIL_TEST); *st_cur = 0; vita_gl_perf.state_calls++; pf.st_stencil++; }
    if (fj->textured) {
        static uint32_t s_envcol_key = 0xFFFFFFFFu;
        gc_tex2d(1); bind_tex(fj->tex_id);
        if (s_envcol_key != fog_ram) { const GLfloat ec[4] = { fog_r, fog_g, fog_b, 1.0f }; glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_COLOR, ec); s_envcol_key = fog_ram; }
        gc_texenv(GL_BLEND);
        /* 1-bit alpha (ARGB1555) / punch-through: the test must still decide on the texel; the fog-weighted product would drop light fog, so test "> 0" (product is 0 or fog) */
        if (fj->alpha_test) { gc_alpha_test(1); gc_alpha_ref(1); } else gc_alpha_test(0);
    } else {
        gc_tex2d(0);
        gc_alpha_test(0);
    }
    gc_blend(1); gc_blend_func(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    gc_depth_func(gc.depth_func == (int)GL_ALWAYS ? GL_ALWAYS : GL_GEQUAL); gc_depth_mask(0);
    gc_color_ptr(s_fc, FC_STRIDE);
    glDrawArrays(GL_TRIANGLES, fj->first, fj->count);
    vita_gl_perf.fog_draws++; vita_gl_perf.verts += fj->count; pf.fog_draws++; pf.draws++; pf.verts += fj->count;
#if R2_PERF || R2_PF
    {   const float ar = perf_area(&gv[fj->first], fj->count); pf.area_fog += ar;
#if R2_PERF
        g_perf.area[3] += ar;
#endif
    }
#endif
    (void)gv;
}
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
    glDrawArrays(GL_TRIANGLES, 0, nv); pf.draws++; pf.verts += nv;

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
    glDrawArrays(GL_TRIANGLES, 0, 6); pf.draws++; pf.verts += 6;

    /* restore */
    float proj[16]; ta_gl_projection(cut, proj);
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(proj); glMatrixMode(GL_MODELVIEW);
    glDisable(GL_STENCIL_TEST); glStencilMask(0xFF);
    glDisable(GL_BLEND); glEnable(GL_DEPTH_TEST); glDepthMask(GL_TRUE);
    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].px);
    glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].u);
    glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &scene_cv[0].r);
}

#if R2_PERF
static uint64_t s_t_swap_end; static int s_t_swap_end_prev_valid; static uint64_t s_t_present_end;
#endif
static void render_job_exec(RenderJob *job);
#define PH(a, b) ((unsigned long long)((a) > (b) ? (a) - (b) : 0))
static void rt_log(const char *ln) { if (r2_perf_sink) r2_perf_sink(ln); else { fputs(ln, stderr); fputc(10, stderr); } }
/* ----------------------------------------------------------------------------
 * [pf] once-per-second frame profile (R2_PF, default = R2_PERF; render thread; ~3 clock reads per frame + plain counter increments).
 * Timing split per frame: game-thread hand-off period / blocked time, render-thread CPU (job start .. just before swap, incl. deferred TA parse), optional GPU wait, swap/vsync wait, render-thread
 * period (swap end to swap end).  Work per frame: draw calls, batches, vertices, GL state calls by kind, texture binds / uploads / bytes, overdraw in screens.  Each field is logged as avg/max over the window,
 * plus the counters of the single slowest frame (by render period) so a spike like the Fairy Glades arrow can be attributed (CPU-bound render? upload? overdraw? game thread?).
 * Off: -DR2_PF=0 at build time, or at run time: host env R2_PF=0 (default on) / Vita: OFF by default, enabled by the empty file ux0:data/rayman2/PF (also enables the [slow] hang lines).  GPU wait: host env R2_PF_GPU=1 / Vita file ux0:data/rayman2/PF_GPU makes the render thread call glFinish()
 * before the swap and report that wait separately from the vsync wait (it serialises CPU and GPU, so frame times grow: use it to diagnose, not to measure the normal frame rate).
 * ---------------------------------------------------------------------------- */
#if R2_PF
enum { M_GPER, M_GBLK, M_RTCPU, M_PARSE, M_GPU, M_SWAP, M_PER, M_DRAWS, M_FOG, M_BATCH, M_VERTS, M_SDEPTH, M_SBLEND, M_SALPHA, M_STEX, M_SENV, M_SCOL, M_SSTEN, M_BIND, M_TPAR, M_UP, M_UPKB,
       M_AOPQ, M_APUNCH, M_ATRANS, M_AFOG, M_N };
static int s_pf_on = -1, s_pf_gpu;
static uint64_t s_pf_start, s_pf_prev_end, s_pf_win0, s_pf_last_present, s_pf_pending_parse_last;
static volatile uint32_t s_pf_gper, s_pf_gblk;                           /* written by the guest thread at each hand-off (single 32-bit stores), sampled by the render thread */
static struct { unsigned n; double sum[M_N], mx[M_N], worst[M_N]; double worst_per; int worst_frame; unsigned long worst_gframe; } s_pfw;
static int pf_file_exists(const char *path) { FILE *f = fopen(path, "rb"); if (f) { fclose(f); return 1; } return 0; }
static void pf_init(void)
{
#if defined(__vita__)
    s_pf_on = pf_file_exists("ux0:data/rayman2/PF"); s_pf_gpu = s_pf_on && pf_file_exists("ux0:data/rayman2/PF_GPU");   /* Vita: OFF by default; the empty file PF enables [pf] + [slow] */
#else
    const char *e = getenv("R2_PF"), *g = getenv("R2_PF_GPU");
    s_pf_on = !(e && *e && atoi(e) == 0); s_pf_gpu = g && *g && atoi(g) != 0;
#endif
}
static inline void pf_begin(void)
{
    memset(&pf, 0, sizeof pf);
    if (s_pf_on < 0) pf_init();
    s_pf_pending_parse_last = s_pf_pending_parse; s_pf_pending_parse = 0;
    if (s_pf_on) s_pf_start = r2_now_us() - s_pf_pending_parse_last;
}
/* guest thread, at every hand-off to the render thread: period since the previous hand-off and the time it was blocked waiting for a free job slot */
static inline void pf_guest_handoff(uint64_t now, uint64_t blocked_us)
{
    if (s_pf_last_present) s_pf_gper = (uint32_t)(now - s_pf_last_present);
    s_pf_last_present = now; s_pf_gblk = (uint32_t)blocked_us;
}
/* ---- [slow]: per-guest-frame hang breakdown (R2_PF, enabled with [pf]).  When the time between two hand-offs exceeds 100 ms, ONE line is logged: the guest-side split (deltas of the g_perf / io counters
 * between the two hand-offs, taken on the guest thread in pf_slow_begin) completed by the render-side numbers of the job that frame produced (pf_end).  At most 200 lines per run; written through rt_log
 * (wait-free ring).  Note io is the guest thread's synchronous file time and may overlap sndtick (the stream feeder's reads); "other" = total - the listed parts, i.e. the recompiled SH-4 code itself. */
extern uint64_t hle_io_t_us __attribute__((weak)), hle_io_calls __attribute__((weak)), hle_io_bytes __attribute__((weak));
extern size_t hle_io_note_fmt(char *o, size_t cap) __attribute__((weak));
extern void hle_io_note_reset(void) __attribute__((weak));
#define SLOW_US 100000u
#define SLOW_MAX_LINES 200u
static uint64_t s_sl_prev_now, s_sl_vs, s_sl_st, s_sl_sl, s_sl_prep, s_sl_wait, s_sl_iot, s_sl_ioc, s_sl_iob, s_sl_td0;
static unsigned s_sl_lines;
static char s_sl_guest[400]; static int s_sl_pending;
static const char *s_slow_cur;                                       /* render thread: guest part of the job being rendered (NULL = none) */
static void pf_slow_begin(uint64_t now)                              /* guest thread, at the top of every hand-off (before the back-pressure wait) */
{
    if (s_pf_on < 0) pf_init();
    if (s_pf_on <= 0) return;
    const uint64_t vs = g_perf.t_vsleep, st = g_perf.t_snd_tick, sl = g_perf.t_snd_lock, pr = g_perf.t_prep, wt = g_perf.t_rt_wait;
    const uint64_t iot = &hle_io_t_us ? hle_io_t_us : 0, ioc = &hle_io_calls ? hle_io_calls : 0, iob = &hle_io_bytes ? hle_io_bytes : 0;
    const uint64_t per = s_sl_prev_now ? now - s_sl_prev_now : 0;
    if (per > SLOW_US && s_sl_lines < SLOW_MAX_LINES && !s_sl_pending) {
        const double d_io = (double)(iot - s_sl_iot), d_vs = (double)(vs - s_sl_vs), d_st = (double)(st - s_sl_st), d_sl = (double)(sl - s_sl_sl), d_pr = (double)(pr - s_sl_prep), d_wt = (double)(wt - s_sl_wait);
        double other = (double)per - d_io - d_vs - d_st - d_sl - d_pr - d_wt; if (other < 0) other = 0;
        char files[200]; files[0] = 0; if (&hle_io_note_fmt) hle_io_note_fmt(files, sizeof files);
        snprintf(s_sl_guest, sizeof s_sl_guest, "[slow] guest frame %lu: total %.1f ms = io %.1f ms (%u calls, %u KB; files: %s) + vsleep %.1f ms + sndtick %.1f ms + sndlock %.1f ms + prep(tex decode) %.1f ms + blocked %.1f ms + other(code) %.1f ms",
                 (unsigned long)hle_frame_count, per / 1000.0, d_io / 1000.0, (unsigned)(ioc - s_sl_ioc), (unsigned)((iob - s_sl_iob) / 1024u), files[0] ? files : "none",
                 d_vs / 1000.0, d_st / 1000.0, d_sl / 1000.0, d_pr / 1000.0, d_wt / 1000.0, other / 1000.0);
        s_sl_pending = 1;
    }
    s_sl_prev_now = now; s_sl_vs = vs; s_sl_st = st; s_sl_sl = sl; s_sl_prep = pr; s_sl_wait = wt; s_sl_iot = iot; s_sl_ioc = ioc; s_sl_iob = iob;
    if (&hle_io_note_reset) hle_io_note_reset();
}
static inline void pf_slow_attach(RenderJob *j)                      /* guest thread, right after prepare_job */
{
    if (s_sl_pending) { memcpy(j->slow, s_sl_guest, sizeof j->slow); j->slow[sizeof j->slow - 1] = 0; s_sl_pending = 0; } else j->slow[0] = 0;
}
static inline void pf_slow_take(const RenderJob *j) { s_slow_cur = j->slow[0] ? j->slow : NULL; }   /* render thread, at the start of every job */
static const char *pn(const double *a, const double *m, int i, int dec)      /* "avg/max" (or just the value when m == NULL) into a rotating buffer */
{
    static char buf[32][28]; static unsigned k; char *b = buf[k++ & 31];
    if (m) snprintf(b, 28, "%.*f/%.*f", dec, a[i], dec, m[i]); else snprintf(b, 28, "%.*f", dec, a[i]);
    return b;
}
static int pf_work(char *o, size_t cap, const double *a, const double *m)
{
    return snprintf(o, cap, "draws %s (fog %s) batches %s verts %s | gl state calls: depth %s blend %s alpha %s tex2d %s env %s colptr %s stencil %s | binds %s texparam %s | tex uploads %s (%s KB) | fill (screens) opaque %s punch %s trans %s fog %s",
        pn(a, m, M_DRAWS, 0), pn(a, m, M_FOG, 0), pn(a, m, M_BATCH, 0), pn(a, m, M_VERTS, 0), pn(a, m, M_SDEPTH, 0), pn(a, m, M_SBLEND, 0), pn(a, m, M_SALPHA, 0), pn(a, m, M_STEX, 0), pn(a, m, M_SENV, 0),
        pn(a, m, M_SCOL, 0), pn(a, m, M_SSTEN, 0), pn(a, m, M_BIND, 0), pn(a, m, M_TPAR, 0), pn(a, m, M_UP, m ? 1 : 0), pn(a, m, M_UPKB, 0), pn(a, m, M_AOPQ, 2), pn(a, m, M_APUNCH, 2), pn(a, m, M_ATRANS, 2), pn(a, m, M_AFOG, 2));
}
static int pf_times(char *o, size_t cap, const double *a, const double *m)
{
    return snprintf(o, cap, "game: hand-off period %s ms, blocked %s | render thread: cpu %s (parse %s) gpu-wait %s swap/vsync %s period %s ms",
        pn(a, m, M_GPER, 1), pn(a, m, M_GBLK, 1), pn(a, m, M_RTCPU, 1), pn(a, m, M_PARSE, 1), pn(a, m, M_GPU, 1), pn(a, m, M_SWAP, 1), pn(a, m, M_PER, 1));
}
static void pf_flush(uint64_t now)
{
    char ln[760]; double n = s_pfw.n ? s_pfw.n : 1, avg[M_N]; int o;
    for (int i = 0; i < M_N; i++) avg[i] = s_pfw.sum[i] / n;
    o = snprintf(ln, sizeof ln, "[pf] %.2fs %u frames (%.1f fps) | ", (now - s_pf_win0) / 1e6, s_pfw.n, s_pfw.n * 1e6 / (double)(now - s_pf_win0 ? now - s_pf_win0 : 1));
    pf_times(ln + o, sizeof ln - o, avg, s_pfw.mx); rt_log(ln);
    o = snprintf(ln, sizeof ln, "[pf]   per frame avg/max: "); pf_work(ln + o, sizeof ln - o, avg, s_pfw.mx); rt_log(ln);
    o = snprintf(ln, sizeof ln, "[pf]   worst frame: period %.1f ms (render frame #%d, guest frame %lu): ", s_pfw.worst_per, s_pfw.worst_frame, s_pfw.worst_gframe);
    pf_times(ln + o, sizeof ln - o, s_pfw.worst, NULL); rt_log(ln);
    o = snprintf(ln, sizeof ln, "[pf]   worst frame work: "); pf_work(ln + o, sizeof ln - o, s_pfw.worst, NULL); rt_log(ln);
    memset(&s_pfw, 0, sizeof s_pfw); s_pf_win0 = now;
}
/* render thread, after the swap: t_a = timestamp before glFinish/swap, gpu_us = glFinish wait (0 unless R2_PF_GPU), swap_us = vglSwapBuffers, t_end = after the swap */
extern uint32_t r2_perf_dbg[4], r2_perf_post_dbg[4] __attribute__((weak));
static uint64_t s_dbg_vgl_us, s_dbg_rep_us;     /* render thread: vglSwapBuffers alone / r2_perf_report alone, of the job just finished ([rstall]) */
static uint64_t s_ph_wait;                       /* render thread: time the loop waited for this job (defined below as a tentative definition too) */
static void pf_end(uint64_t t_a, uint64_t gpu_us, uint64_t swap_us, uint64_t t_end)
{
    if (s_pf_on <= 0) return;
    double v[M_N];
    const double per = s_pf_prev_end ? (double)(t_end - s_pf_prev_end) : 0.0;
    v[M_GPER] = s_pf_gper / 1000.0; v[M_GBLK] = s_pf_gblk / 1000.0;
    v[M_RTCPU] = (t_a - s_pf_start) / 1000.0; v[M_PARSE] = s_pf_pending_parse_last / 1000.0; v[M_GPU] = gpu_us / 1000.0; v[M_SWAP] = swap_us / 1000.0; v[M_PER] = per / 1000.0;
    v[M_DRAWS] = pf.draws; v[M_FOG] = pf.fog_draws; v[M_BATCH] = pf.batches; v[M_VERTS] = pf.verts;
    v[M_SDEPTH] = pf.st_depth_test + pf.st_depth_func + pf.st_depth_mask; v[M_SBLEND] = pf.st_blend + pf.st_blendfunc; v[M_SALPHA] = pf.st_alpha_test + pf.st_alpha_ref;
    v[M_STEX] = pf.st_tex2d; v[M_SENV] = pf.st_env; v[M_SCOL] = pf.st_colptr; v[M_SSTEN] = pf.st_stencil; v[M_BIND] = pf.tex_bind; v[M_TPAR] = pf.tex_param;
    v[M_UP] = pf.tex_up; v[M_UPKB] = pf.tex_bytes / 1024.0;
    v[M_AOPQ] = pf.area_opq; v[M_APUNCH] = pf.area_punch; v[M_ATRANS] = pf.area_trans; v[M_AFOG] = pf.area_fog;
    const double up_ms = (g_perf.t_texdec >= s_sl_td0 ? (double)(g_perf.t_texdec - s_sl_td0) : (double)g_perf.t_texdec) / 1000.0; s_sl_td0 = g_perf.t_texdec;   /* g_perf is zeroed by every 300-frame report */
    {   if (s_slow_cur) {
            char ln[700]; snprintf(ln, sizeof ln, "%s | render cpu %.1f ms (uploads %.1f ms, %.0f KB) swap %.1f ms | draws %u (fog %u) verts %u | t=%.3fs (render/cpu numbers are THIS frame's job; 'blocked' waited for an earlier job: see [rstall])", s_slow_cur, v[M_RTCPU], up_ms, v[M_UPKB], v[M_SWAP], (unsigned)pf.draws, (unsigned)pf.fog_draws, (unsigned)pf.verts, t_end / 1e6);
            rt_log(ln); s_sl_lines++; s_slow_cur = NULL;
        }
    }
    {   /* [rstall]: a render job that itself took > 50 ms (start of the job .. after the swap).  The guest's 'blocked' time in a [slow] line is spent waiting for an EARLIER job, so look for the [rstall] line
         * just before it (same clock: t= is seconds on the render thread's clock).  gpu-wait is only measured with the PF_GPU file; without it the GPU wait is part of swap. */
        static unsigned n_rs;
        const uint64_t job_us = t_end - s_pf_start;
        if (job_us > 50000u && n_rs < 200u) {
            char ln[420];
            snprintf(ln, sizeof ln, "[rstall] t=%.3fs render frame #%d (guest ~%lu): job %.1f ms = idle-before %.1f (not included) | parse %.1f + cpu-to-swap %.1f (tex uploads %.1f ms, %.0f KB) + gpu-wait %.1f + swap/vsync %.1f [= vglSwapBuffers %.1f + perf-report %.1f (copy %.1f, reset %.1f, post %.1f; perf_post: switch-check %u us, copy %u us, nolog=%u, calls=%u) + rest] | draws %u (fog %u) verts %u",
                     t_end / 1e6, s_frame_no, (unsigned long)hle_frame_count, job_us / 1000.0, s_ph_wait / 1000.0, v[M_PARSE], v[M_RTCPU], up_ms, v[M_UPKB], v[M_GPU], v[M_SWAP], s_dbg_vgl_us / 1000.0, s_dbg_rep_us / 1000.0, r2_perf_dbg[0] / 1000.0, r2_perf_dbg[1] / 1000.0, r2_perf_dbg[2] / 1000.0, &r2_perf_post_dbg[0] ? r2_perf_post_dbg[0] : 0u, &r2_perf_post_dbg[0] ? r2_perf_post_dbg[1] : 0u, &r2_perf_post_dbg[0] ? r2_perf_post_dbg[2] : 0u, &r2_perf_post_dbg[0] ? r2_perf_post_dbg[3] : 0u, (unsigned)pf.draws, (unsigned)pf.fog_draws, (unsigned)pf.verts);
            rt_log(ln); n_rs++;
        }
    }
    s_pf_prev_end = t_end;
    if (!s_pf_win0) s_pf_win0 = t_end;
    if (per > 0) {                                     /* the first frame has no period */
        s_pfw.n++;
        for (int i = 0; i < M_N; i++) { s_pfw.sum[i] += v[i]; if (v[i] > s_pfw.mx[i]) s_pfw.mx[i] = v[i]; }
        if (v[M_PER] > s_pfw.worst_per) { s_pfw.worst_per = v[M_PER]; memcpy(s_pfw.worst, v, sizeof v); s_pfw.worst_frame = s_frame_no; s_pfw.worst_gframe = hle_frame_count; }
    }
    if (t_end - s_pf_win0 >= 1000000u) pf_flush(t_end);
}
#else
#define pf_begin() memset(&pf, 0, sizeof pf)
#define pf_slow_begin(now) ((void)0)
#define pf_slow_attach(j) ((void)0)
#define pf_slow_take(j) ((void)0)
#define pf_guest_handoff(now, blocked) ((void)0)
#endif
/* per-phase timestamps of the frame being rendered (render thread; logged for the first RT_PHASE_FRAMES frames: where do the 2.9 s of the first real frame go?) */
#define RT_PHASE_FRAMES 8
static struct { uint64_t t0, ops, build, clear0, clear1, draw0, first_draw0, first_draw1, draws_end, end; unsigned ndraw_slow; } s_ph;
static void vita_gl_render_frame_impl(RenderJob *job)
{
    const TaFrame *frame_in = job->frame;
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

    if (R2_GL_DEBUG && s_frame_no <= 12) gl_logf("[vita] render_frame call #%d strips=%u verts=%u hle_frame_count=%lu", s_frame_no, (unsigned)frame->nstrips, (unsigned)frame->nverts, (unsigned long)hle_frame_count);
    static TaGl gl;                                   /* persistent: vertex / batch arrays keep their capacity from frame to frame */
    TaBuildOpts opts = { 1, 1, -2.0f, -2.0f, 642.0f, 482.0f, 0 };   /* software cull + clip to the screen (+2 px) */
#if R2_PERF
    uint64_t t_b0 = r2_now_us();
#endif
    s_ph.t0 = r2_now_us();
    render_exec_ops(job);                             /* texture creation / upload of this frame (decoded on the guest thread) */
    s_ph.ops = r2_now_us();
    if (ta_build_gl_reuse(frame, &gl, &opts) != 0) return;
    static int s_dbg_once; if (!s_dbg_once) { s_dbg_once = 1; gl_logf("[vita] vita_gl_render build marker: " __DATE__ " " __TIME__ " sort+nozwrite-trans v5 perf-gl"); }
    if (gl.nverts == 0 || gl.nbatches == 0) return;

    if (s_cv_cap < gl.nverts) {
        free(s_cv); free(s_fc); s_cv_cap = gl.nverts + 4096;
        s_cv = (TaClipVertex *)malloc(s_cv_cap * sizeof(TaClipVertex));
        s_fc = (float (*)[4])malloc(s_cv_cap * sizeof(float[4]));
        if (!s_cv || !s_fc) { free(s_cv); free(s_fc); s_cv = NULL; s_fc = NULL; s_cv_cap = 0; return; }
    }
    float cut = 1.0f;
    ta_gl_make_clip(gl.verts, gl.nverts, cut, s_cv);
    s_ph.build = r2_now_us();
#if R2_PERF
    g_perf.t_build += r2_now_us() - t_b0; g_perf.strips += frame->nstrips; g_perf.tris += gl.nverts / 3;
#endif
    uint32_t fog_table[128];
    for (int i = 0; i < 128; i++) fog_table[i] = job->regs[0x80 + i] & 0xFFFFu;     /* fog table registers 0xA05F8200.. as of STARTRENDER */
    static int s_nofog = -1;                          /* A/B switch: empty file ux0:data/rayman2/NO_FOG (host: env R2_NO_FOG) skips every fog pass / pre-fog (visual change; for measuring their draw cost only) */
    if (s_nofog < 0) s_nofog = hle_switch("NO_FOG");
    const uint32_t fog_den = s_nofog ? 0u : PVR_REGJ(job, 0x005F80B8u), fog_ram = PVR_REGJ(job, 0x005F80B0u);
    const float fog_den_scale = fog_den ? ta_fog_density_scale(fog_den) : 0.0f;
    const float fog_r = ((fog_ram >> 16) & 255) / 255.0f, fog_g = ((fog_ram >> 8) & 255) / 255.0f, fog_b = (fog_ram & 255) / 255.0f;
    vita_gl_perf.frames++; vita_gl_perf.batches += gl.nbatches; pf.batches = gl.nbatches;
    gc_reset();
    if (s_fog_defer < 0) s_fog_defer = !hle_switch("NO_FOG_DEFER");

    /* Frame clear. Wide mode (default): the viewport is the whole display, so one glClear covers it (colour = ISP_BACKGND plane colour when the game defines one).
     * 4:3: whole display black first (pillarbox bars), then the viewport area only with the background colour. */
    const int wide = job->wide;
    const int vp_x = wide ? 0 : VIEW_X, vp_w = wide ? SCREEN_W : VIEW_W;
    glDisable(GL_SCISSOR_TEST);
    glViewport(vp_x, 0, vp_w, SCREEN_H);
    glDepthMask(GL_TRUE);
    glClearDepthf(0.0f);
    int have_shadow = 0;                              /* any opaque-mod volume this frame -> maintain the receiver stencil bit while drawing */
    for (uint32_t i = 0; i < frame->nmods; i++) if (frame->mods[i].list == TA_L_OPAQUE_MOD) { have_shadow = 1; break; }
#ifdef R2_FORCE_STENCIL
    have_shadow = 1;
#endif
    if (have_shadow && !R2_NOCLEARST) { glStencilMask(0xFF); glClearStencil(0); }
    const GLbitfield clear_bits = GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | ((have_shadow && !R2_NOCLEARST) ? GL_STENCIL_BUFFER_BIT : 0);
    {   /* ISP_BACKGND plane: the game sets an untextured flat plane (0x8080ff on the menu, brown in the lava level); it fills the 4:3 area behind everything. */
        float (*bg)[4] = job->bg; uint32_t bisp = job->bg_isp, btsp = job->bg_tsp, btcw = job->bg_tcw;
        int have_bg = job->have_bg;
#ifndef R2_BG_BLACK
#define R2_BG_BLACK 0
#endif
        if (have_bg) { static int once; if (!once) { once = 1; gl_logf("[vita] ISP_BACKGND plane colour a=%.2f r=%.2f g=%.2f b=%.2f isp=%08x tsp=%08x tcw=%08x", bg[0][0], bg[0][1], bg[0][2], bg[0][3], (unsigned)bisp, (unsigned)btsp, (unsigned)btcw); } }
        s_ph.clear0 = r2_now_us();
        if (wide) {
            if (have_bg && !R2_BG_BLACK) glClearColor(bg[0][1], bg[0][2], bg[0][3], 1.0f); else glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(clear_bits);
        } else {
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);         /* pillarbox stays black */
            glClear(clear_bits);
            if (have_bg) {
                glEnable(GL_SCISSOR_TEST); glScissor(vp_x, 0, vp_w, SCREEN_H);
                if (R2_BG_BLACK) glClearColor(0.0f, 0.0f, 0.0f, 1.0f); else glClearColor(bg[0][1], bg[0][2], bg[0][3], 1.0f);
                glClear(GL_COLOR_BUFFER_BIT);
            }
        }
    }
    s_ph.clear1 = r2_now_us();
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
    gc_color_ptr(&s_cv[0].r, CV_STRIDE);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisable(GL_CULL_FACE);                          /* ISP culling is done in ta_build_gl_ex */

    if (R2_GL_DEBUG && s_frame_no <= 12) gl_logf("[vita] frame %d nmods=%u have_shadow=%d shad=%x", s_frame_no, (unsigned)frame->nmods, have_shadow, (unsigned)frame->shad_scale);
    int st_cur = 0;                                   /* current stencil state of the batch loop (see below) */
    static uint16_t ref_tab[2048];                    /* (tcw, tsp key) -> index+1 into job->refs, rebuilt per frame */
    memset(ref_tab, 0, sizeof ref_tab);
    for (uint32_t i = 0; i < job->nrefs; i++) {
        uint32_t h = tex_hash(job->refs[i].tcw, job->refs[i].tsp) & 2047;
        while (ref_tab[h]) h = (h + 1) & 2047;
        ref_tab[h] = (uint16_t)(i + 1);
    }
    uint32_t pt_ref = PVR_REGJ(job, 0x005F811Cu) & 255;     /* PT_ALPHA_REF; 0 (never written) -> alpha > 0 */
    const int trans_sorted = !(PVR_REGJ(job, 0x005F8098u) & 1);   /* ISP_FEED_CFG bit0 = 0: translucent list is depth-sorted */

    s_ph.draw0 = r2_now_us(); s_ph.first_draw0 = s_ph.first_draw1 = 0;
    /* Draw order: opaque, punch-through, translucent (submission order inside a list). */
    static const int s_draw_lists[3] = { TA_L_OPAQUE, TA_L_PUNCH, TA_L_TRANS };
    for (int li = 0; li < 3; li++) {
        int list_id = s_draw_lists[li];
        if (list_id == TA_L_TRANS && have_shadow) { draw_shadow_volumes(frame, cut, s_cv); st_cur = 0; gc_reset(); }
        uint32_t first_b = gl.list_first[list_id], n_b = gl.list_count[list_id];
        static FogJob fq[4096]; uint32_t nfq = 0;
        int defer_fog = 0;                          /* opaque / punch-through list: fog passes deferred to the end of the list (see fog_pass_draw) */
        if ((list_id == TA_L_OPAQUE || list_id == TA_L_PUNCH) && s_fog_defer && fog_den && !s_only_tcw) {
            defer_fog = 1;
            for (uint32_t b = 0; b < n_b && defer_fog; b++) {
                const TaBatch *bt = &gl.batches[first_b + b];
                if (bt->count && (s_gl_depth_funcs[bt->st.depth_mode & 7] != GL_GREATER || bt->st.z_write_disable)) defer_fog = 0;
            }
            if (n_b > 4096) defer_fog = 0;
        }
        /* Translucent list: ISP_FEED_CFG bit0 = 0 -> the PVR sorts back-to-front (farthest = smallest 1/W first); translucent polygons never write depth
         * (otherwise a transparent texel of a near layer, e.g. foliage, would reject the sky behind it: that was the "periwinkle cut-outs" bug). */
        static uint32_t s_ord[4096]; static float s_key[4096]; static uint8_t s_hud[4096];
        const int dbg = R2_GL_DEBUG && (s_frame_no <= 12 || s_frame_no % 60 == 0) && list_id == TA_L_TRANS;
        uint32_t n_ord = n_b < 4096 ? n_b : 4096;
        const int sorted = list_id == TA_L_TRANS && trans_sorted;
        const float hud_z = cut * (0.995f / 0.98f);   /* same ceiling as ta_gl_make_clip */
        const float hud_thresh = hud_z * 0.999f;
        if (list_id == TA_L_TRANS) {
            for (uint32_t b = 0; b < n_ord; b++) {
                const TaBatch *bt = &gl.batches[first_b + b];
                const TaGlVertex *bv = &gl.verts[bt->first];
                float sum_z = 0.0f;
                uint8_t is_hud = 1;
                for (uint32_t i = 0; i < bt->count; i++) {
                    float z = bv[i].z;
                    sum_z += z;
                    if (z < hud_thresh) is_hud = 0;
                }
                s_hud[b] = is_hud;
                if (sorted) {
                    s_key[b] = bt->count ? (sum_z / (float)bt->count) : 0.0f;
                    if (s_key[b] > hud_z) s_key[b] = hud_z;   /* 2D/HUD layer (1/W clamped to the depth-cut ceiling in ta_gl_make_clip): all one depth -> keep submission order (stable sort), so dialog text stays above the letterbox bars */
                    s_ord[b] = b;
                }
            }
            if (sorted) {
                for (uint32_t i = 1; i < n_ord; i++) { uint32_t o = s_ord[i]; float k = s_key[o]; uint32_t j = i; while (j > 0 && s_key[s_ord[j - 1]] > k) { s_ord[j] = s_ord[j - 1]; j--; } s_ord[j] = o; }   /* stable insertion sort */
            }
        }
        if (dbg) {
            uint32_t feed = PVR_REGJ(job, 0x005F8098u);
            gl_logf("[vita] frame %d wide_active=%d pref=%d vp_x=%d vp_w=%d ISP_FEED_CFG=%08x sorted=%d trans_batches=%u (of %u) nverts=%u", s_frame_no, job->wide, hle_ta_wide_pref(), vp_x, vp_w, (unsigned)feed, !(feed & 1), (unsigned)n_b, gl.nbatches, gl.nverts);
            for (uint32_t i = 0; sorted && i < n_ord && i < 8; i++) gl_logf("[vita]   ord[%u]=%u key=%g", i, s_ord[i], s_key[s_ord[i]]);
        }
        for (uint32_t bi = 0; bi < n_ord; bi++) {
            uint32_t b = sorted ? s_ord[bi] : bi;
            const TaBatch *batch = &gl.batches[first_b + b];
            if (batch->count == 0) continue;
            const TaState *st = &batch->st;
            if (s_only_tcw && list_id == TA_L_TRANS && st->tcw != s_only_tcw) continue;

            int hud = (list_id == TA_L_TRANS) ? s_hud[b] : 0;

            /* Batch coalescing: look ahead in sorted draw order. Contiguous batches in vertex buffer
             * that share the exact same render state can be drawn with a single glDrawArrays call. */
            uint32_t coalesce_cnt = 0;
            while (bi + 1 + coalesce_cnt < n_ord) {
                uint32_t next_b = sorted ? s_ord[bi + 1 + coalesce_cnt] : (bi + 1 + coalesce_cnt);
                const TaBatch *next_bt = &gl.batches[first_b + next_b];
                if (next_bt->count == 0) { coalesce_cnt++; continue; }
                if (s_only_tcw && list_id == TA_L_TRANS && next_bt->st.tcw != s_only_tcw) break;
                /* Must be contiguous in vertex stream */
                const TaBatch *prev_bt = &gl.batches[first_b + (sorted ? s_ord[bi + coalesce_cnt] : (bi + coalesce_cnt))];
                if (next_bt->first != prev_bt->first + prev_bt->count) break;

                /* State comparison */
                const TaState *nst = &next_bt->st;
                if (nst->tcw != st->tcw || nst->tsp != st->tsp) break;
                if (nst->depth_mode != st->depth_mode || nst->z_write_disable != st->z_write_disable) break;
                if (nst->src_blend != st->src_blend || nst->dst_blend != st->dst_blend || nst->use_alpha != st->use_alpha) break;
                if (nst->shading != st->shading || nst->fog_ctrl != st->fog_ctrl) break;
                if (nst->pixel_format != st->pixel_format || nst->textured != st->textured || nst->shadow != st->shadow) break;

                if (list_id == TA_L_TRANS && s_hud[next_b] != hud) break;
                coalesce_cnt++;
            }

            uint32_t total_batch_count = batch->count;
            if (coalesce_cnt > 0) {
                const TaBatch *last_bt = &gl.batches[first_b + (sorted ? s_ord[bi + coalesce_cnt] : (bi + coalesce_cnt))];
                total_batch_count = (last_bt->first + last_bt->count) - batch->first;
            }

            gc_depth_test(1);
            /* Translucent list: the game's coplanar overlays (bump-map / detail strips over the terrain, water ripples) share the exact depth of the surface below and use depth mode GREATER (never GEQUAL
             * in any dumped frame), so they must pass on equality like on the PVR (its sorted translucent pass ties pass); strict GREATER rejected every pixel of them. */
            gc_depth_func(list_id == TA_L_TRANS && (st->depth_mode & 7) == 4 ? GL_GEQUAL : s_gl_depth_funcs[st->depth_mode & 7]);
            if (hud) gc_depth_func(GL_ALWAYS);
            int is_cutout_trans = (list_id == TA_L_TRANS && st->textured && st->pixel_format == 0);
            gc_depth_mask(!st->z_write_disable && (list_id != TA_L_TRANS || is_cutout_trans));
            if (dbg && bi < 8) { const TaGlVertex *v0 = &gl.verts[batch->first]; gl_logf("[vita]     tcw=%08x tsp=%08x shade=%d tex=%d v0 col=%.2f,%.2f,%.2f,%.2f v1 col=%.2f,%.2f,%.2f,%.2f", (unsigned)st->tcw, (unsigned)st->tsp, st->shading, st->textured, v0[0].r, v0[0].g, v0[0].b, v0[0].a, v0[1].r, v0[1].g, v0[1].b, v0[1].a); }
            if (dbg && bi < 8) gl_logf("[vita]   trans b=%u cnt=%u depth_mode=%d zwd=%d mask=%d func=%d", b, total_batch_count, st->depth_mode, st->z_write_disable, (st->z_write_disable || list_id == TA_L_TRANS) ? 0 : 1, (int)s_gl_depth_funcs[st->depth_mode & 7]);

            if (list_id == TA_L_TRANS) {
                gc_blend(1);
                gc_blend_func(src_factor(st->src_blend, st->use_alpha), dst_factor(st->dst_blend, st->use_alpha));
                if (is_cutout_trans) {
                    gc_alpha_test(1);
                    gc_alpha_ref(128);
                } else {
                    gc_alpha_test(0);
                }
            } else if (list_id == TA_L_PUNCH) {
                gc_blend(0);
                gc_alpha_test(1);
                gc_alpha_ref((int)(pt_ref ? pt_ref : 1));
            } else {                                  /* opaque: texture/vertex alpha ignored except ARGB1555 cutouts */
                gc_blend(0);
                if (st->textured && st->pixel_format == 0) {
                    gc_alpha_test(1);
                    gc_alpha_ref(128);
                } else {
                    gc_alpha_test(0);
                }
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
                    vita_gl_perf.state_calls++; pf.st_stencil++;
                } else vita_gl_perf.state_skipped++;
            }

            GLuint tex_id = 0;
            if (st->textured) tex_id = render_texture(job, ref_tab, st->tcw, st->tsp);
            if (tex_id == TEX_PENDING_ID) continue;
            if (tex_id) {
                gc_tex2d(1);
                bind_tex(tex_id);
                /* PVR shading instruction: 0 decal (rgb,a = tex), 1 modulate (rgb = tex*col, a = tex; vertex alpha forced to 1 in ta_build_gl_ex),
                 * 2 decal-alpha (rgb = tex*ta + col*(1-ta), a = col.a), 3 modulate-alpha (rgb = tex*col, a = ta*col.a). */
                static const GLint env[4] = { GL_REPLACE, GL_MODULATE, GL_DECAL, GL_MODULATE };
                gc_texenv(env[st->shading & 3]);
            } else {
                gc_tex2d(0);
            }
            /* Fog (PVR2 fogs the final post-texture colour; alpha is never touched):
             *  - untextured translucent: pre-fog the vertex colour toward FOG_COL_RAM before the blend (exact: no texture to modulate);
             *  - additive translucent (dst factor ONE): fog fades toward black, so the colour is scaled by (1 - fog), no extra pass;
             *  - textured translucent: colour left alone here, fogged by the post pass below (pre-fogging the vertex colour would MODULATE the texture by the fog colour). */
            int pre_fogged = 0;
            const int tfog_on = R2_TFOG && fog_den && (list_id == TA_L_PUNCH ? st->fog_ctrl == 0 : (st->fog_ctrl == 0 || st->fog_ctrl == 3));
            const int additive = (list_id == TA_L_TRANS && st->dst_blend == 1);
            if (list_id == TA_L_TRANS && tfog_on && (additive || !tex_id)) {
                float amax = 0.0f;
                for (uint32_t i = 0; i < total_batch_count; i++) {
                    uint32_t vi = batch->first + i;
                    float a = ta_fog_alpha_scaled(gl.verts[vi].z, fog_den_scale, fog_table);
                    s_fc[vi][3] = s_cv[vi].a;
                    if (additive) { s_fc[vi][0] = s_cv[vi].r * (1.0f - a); s_fc[vi][1] = s_cv[vi].g * (1.0f - a); s_fc[vi][2] = s_cv[vi].b * (1.0f - a); }
                    else { s_fc[vi][0] = s_cv[vi].r + (fog_r - s_cv[vi].r) * a; s_fc[vi][1] = s_cv[vi].g + (fog_g - s_cv[vi].g) * a; s_fc[vi][2] = s_cv[vi].b + (fog_b - s_cv[vi].b) * a; }
                    if (a > amax) amax = a;
                }
                if (amax > 1.0f / 255.0f) { gc_color_ptr(s_fc, FC_STRIDE); pre_fogged = 1; }
            }
            uint64_t td0 = r2_now_us();
            glDrawArrays(GL_TRIANGLES, batch->first, total_batch_count);
            if (!s_ph.first_draw1) { s_ph.first_draw0 = td0; s_ph.first_draw1 = r2_now_us(); }
#if R2_PERF
            {   /* first-use cost detector: a single draw call that takes > 5 ms is (almost certainly) vitaGL creating a shader / fragment program for a state combination it had not seen (task 3, notes_render_thread.md) */
                uint64_t dt = r2_now_us() - td0; static int s_slow_logged;
                if (dt > 5000 && s_slow_logged < 64 && r2_perf_sink) {
                    char ln[300]; s_slow_logged++;
                    snprintf(ln, sizeof ln, "[perf] SLOW DRAW %llu us (render frame %d, guest frame %lu): list %d tex=%d shade=%d alpha_test=%d blend=%d/%d use_alpha=%d fmt=%d verts=%u",
                             (unsigned long long)dt, s_frame_no, hle_frame_count, list_id, st->textured, st->shading, list_id == TA_L_PUNCH, st->src_blend, st->dst_blend, st->use_alpha, st->pixel_format, total_batch_count);
                    r2_perf_sink(ln);
                }
            }
#endif
            vita_gl_perf.draws++; vita_gl_perf.verts += total_batch_count; pf.draws++; pf.verts += total_batch_count;
#if R2_PERF || R2_PF
            {   const float ar = perf_area(&gl.verts[batch->first], total_batch_count);
                if (list_id == TA_L_TRANS) pf.area_trans += ar; else if (list_id == TA_L_PUNCH) pf.area_punch += ar; else pf.area_opq += ar;
#if R2_PERF
                g_perf.area[list_id == TA_L_TRANS ? 2 : list_id == TA_L_PUNCH ? 1 : 0] += ar;
#endif
            }
#endif
            if (pre_fogged) gc_color_ptr(&s_cv[0].r, CV_STRIDE);
            /* Table fog (TSP fog control 0): a second pass over the same vertices in FOG_COL_RAM with the per-vertex fog alpha, blended over the result and depth-tested
             * GEQUAL (same vertices -> same depth, so exactly the visible pixels; ALWAYS for batches drawn with ALWAYS).  Untextured, except for polygons with per-texel
             * transparency (opaque ARGB1555 cutout, punch-through, smooth-alpha translucent): that pass is textured with TEXTURE_ENV_MODE=BLEND and env colour = vertex
             * colour = fog colour (rgb = fog colour for every texel, a = texel alpha * vertex alpha * fog), so it keeps the main pass's cutout/alpha shape instead of painting a
             * fog-coloured box over the transparent texels.  Untextured/additive translucent were fogged above; other translucent blend modes are not fogged [ASSUMED]. */
            const int fog_textured = tex_id && (st->shading & 3) != 2 && (list_id == TA_L_PUNCH || list_id == TA_L_TRANS || (list_id == TA_L_OPAQUE && st->pixel_format == 0));
            const int fog_func_ok = (gc.depth_func == (int)GL_GREATER || gc.depth_func == (int)GL_GEQUAL || gc.depth_func == (int)GL_ALWAYS);
            const int fog_post = fog_func_ok && fog_den && !additive &&
                (list_id == TA_L_OPAQUE ? st->fog_ctrl == 0 : list_id == TA_L_PUNCH ? tfog_on : (tfog_on && tex_id && st->dst_blend == 5));
            if (fog_post) {
                float amax = 0.0f;
                const int opq = (list_id == TA_L_OPAQUE);                           /* non-opaque: a = vertex alpha * fog; opaque: a = fog */
                for (uint32_t i = 0; i < total_batch_count; i++) {
                    uint32_t vi = batch->first + i;
                    float a = ta_fog_alpha_scaled(gl.verts[vi].z, fog_den_scale, fog_table);
                    s_fc[vi][0] = fog_r; s_fc[vi][1] = fog_g; s_fc[vi][2] = fog_b;
                    s_fc[vi][3] = opq ? a : s_cv[vi].a * a;
                    if (a > amax) amax = a;
                }
                if (amax > 1.0f / 255.0f) {
                    FogJob fj = { batch->first, total_batch_count, tex_id, (uint8_t)fog_textured, (uint8_t)(list_id != TA_L_TRANS || st->pixel_format == 0) };
                    if (defer_fog) fq[nfq++] = fj;
                    else { fog_pass_draw(&st_cur, &fj, fog_ram, fog_r, fog_g, fog_b, gl.verts); gc_color_ptr(&s_cv[0].r, CV_STRIDE); gc_blend(0); }
                }
            }
            if (s_dump_pending) gl_logf("[gl]  list %d batch %u first=%u count=%u (coal=%u) tex=%u fmt=%u/%u/%u shade=%d depth=%d zwd=%d blend=%d/%d ua=%d glerr=0x%x", list_id, b, batch->first, total_batch_count, coalesce_cnt, tex_id, st->pixel_format, st->mip_mapped, st->vq, st->shading, st->depth_mode, st->z_write_disable, st->src_blend, st->dst_blend, st->use_alpha, (unsigned)glGetError());
            bi += coalesce_cnt;
        }
        if (nfq) {                                  /* deferred fog passes of this list, in the original order */
            for (uint32_t q = 0; q < nfq; q++) fog_pass_draw(&st_cur, &fq[q], fog_ram, fog_r, fog_g, fog_b, gl.verts);
            gc_color_ptr(&s_cv[0].r, CV_STRIDE); gc_blend(0);
        }
    }

    s_ph.draws_end = r2_now_us();
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_SCISSOR_TEST);
    gc_reset();
    if (have_shadow && !R2_NOENDDIS) { glDisable(GL_STENCIL_TEST); glStencilMask(0xFF); }

    if (s_dump_pending) {
        gl_logf("[gl] dump: frame %d verts=%u batches=%u cut=%g texmiss=%u redecode=%u hashbytes=%llu mods=%u glerr=0x%x", s_frame_no, gl.nverts, gl.nbatches, cut, s_tex_misses, s_tex_redecodes, (unsigned long long)0, (unsigned)frame->nmods, (unsigned)glGetError());
        s_shot_after_swap = 1; s_dump_pending = 0;      /* vitaGL's glReadPixels reads the presented (front) buffer: capture after the swap */
    }
}

static void render_swap_inner(void)
{
#if R2_PERF
    uint64_t t0 = r2_now_us();
    vglSwapBuffers(GL_FALSE);
    uint64_t t1 = r2_now_us();
    s_dbg_vgl_us = t1 - t0;
    g_perf.t_swap += t1 - t0;
    if (s_t_swap_end_prev_valid) {
        uint32_t per = (uint32_t)(t1 - s_t_swap_end); g_perf.t_period += per; if (per > g_perf.max_period_us) g_perf.max_period_us = per;
        if (per > 16700) g_perf.over17++; if (per > 33400) g_perf.over34++; if (per > 50000) g_perf.over50++;
        static uint64_t l_ren, l_swp, l_prep, l_up, l_wait;
#define DLT(cur, last) ((cur) >= (last) ? (cur) - (last) : (cur))      /* g_perf is zeroed by every report */
        if (per > 200000 && r2_perf_sink) {     /* a frame > 200 ms: say what the pipeline spent it on (the v11 log only had windowed averages) */
            static int n_log; char ln[400];
            if (n_log++ < 100) {
                snprintf(ln, sizeof ln, "[perf] SLOW FRAME %u ms (render frame %d, guest frame %lu): render %llu us (of which uploads %llu) swap %llu us | guest-side prep %llu us, blocked at hand-off %llu us, tex uploads so far %u",
                         per / 1000, s_frame_no, hle_frame_count, (unsigned long long)DLT(g_perf.t_render, l_ren), (unsigned long long)DLT(g_perf.t_texdec, l_up), (unsigned long long)DLT(g_perf.t_swap, l_swp),
                         (unsigned long long)DLT(g_perf.t_prep, l_prep), (unsigned long long)DLT(g_perf.t_rt_wait, l_wait), vita_gl_perf.tex_uploads);
                r2_perf_sink(ln);
            }
        }
        l_ren = g_perf.t_render; l_swp = g_perf.t_swap; l_prep = g_perf.t_prep; l_up = g_perf.t_texdec; l_wait = g_perf.t_rt_wait;
    }
    s_t_swap_end_prev_valid = 1; s_t_swap_end = t1; g_perf.frames++;
    { const uint64_t tr0 = r2_now_us(); if (g_perf.frames >= R2_PERF_FRAMES) {
#if defined(__vita__)
        /* The 300-frame r2_perf_report call stalled the render thread for 140-430 ms every 300 frames on the Vita (measured with the [rstall] probes; cause inside the report/post path not found).
         * Off by default on the Vita now: the [perf]/[vita] 300-frame blocks are written only when the empty file ux0:data/rayman2/PERF_REPORT exists. */
        static int s_rep = -1; if (s_rep < 0) s_rep = hle_switch("PERF_REPORT");
        if (s_rep) r2_perf_report(hle_frame_count); else g_perf.frames = 0;
#else
        r2_perf_report(hle_frame_count);
#endif
    } s_dbg_rep_us = r2_now_us() - tr0; }
#else
    vglSwapBuffers(GL_FALSE);
#endif
    if (s_shot_after_swap) { s_shot_after_swap = 0; dump_shot_ppm(); }
}
static void render_swap(void)
{
#if R2_PF
    if (s_pf_on > 0) {
        const uint64_t ta = r2_now_us(); uint64_t gpu = 0;
        if (s_pf_gpu) { glFinish(); gpu = r2_now_us() - ta; }
        const uint64_t tb = r2_now_us();
        render_swap_inner();
        const uint64_t te = r2_now_us();
        pf_end(ta, gpu, te - tb, te);
        return;
    }
#endif
    render_swap_inner();
}

/* ----------------------------------------------------------------------------
 * Start-up warm-up of the fixed-function pipeline (task 3 of notes_render_thread.md).
 * vitaGL's fixed-function layer generates Cg source per (texture on/off, texenv mode, alpha-test mode, ...) and compiles it with libshacccg/shark the FIRST time a draw uses that
 * combination (disk cache ux0:data/shader_cache/vN/{v,f}/HASH.gxp is consulted first), and creates a GXM fragment program per (shader, blend factors / colour mask) pair the first time it is
 * drawn.  On a real Vita the first 300-frame window of the v11 log had one 10.2 s frame and 85 ms average submit time: that is these first-use costs landing in the middle of the intro.
 * Drawing one invisible (1x1 scissor) triangle per state combination here moves all of it in front of the first game frame (and, with the disk cache populated by this first run, makes
 * later runs start fast).  The set below is every combination vita_gl_render_frame can request: opaque / punch-through (alpha test) / translucent (blend pairs from src_factor/dst_factor,
 * the common ones), x untextured + textured REPLACE / MODULATE / DECAL, the table-fog pass (untextured, SRC_ALPHA/ONE_MINUS_SRC_ALPHA) and the shadow volume passes (colour mask off; quad blend).
 * ---------------------------------------------------------------------------- */
#ifndef R2_GL_WARMUP
#if defined(__vita__)
#define R2_GL_WARMUP 32                                /* DEFAULT 32 (one full glClear: v rt2 showed the first glClear of the first real frame taking 1.0 s on a real Vita); the full mask (31) hung Vita3K at guest frame 4; run-time kill switch: file ux0:data/rayman2/NO_WARMUP; mask bits: 1 opaque+punch, 2 translucent pairs, 4 shadow passes, 8 delete the dummy texture, 16 glFinish, 32 a full glClear (Vita3K bisect knobs) */
#else
#define R2_GL_WARMUP 0                                  /* host fake: off unless R2_GL_WARMUP=1 in the environment (keeps digests comparable with the old code) */
#endif
#endif
static void warm_clear(void)     /* first glClear (vitaGL's clear programs; ~1.0 s on the first real frame in the rt2 log): colour+depth like a normal frame, and with stencil like a shadow frame */
{
    glDisable(GL_SCISSOR_TEST); glClearColor(0.f, 0.f, 0.f, 1.f); glClearDepthf(0.f); glClearStencil(0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
}
static void gl_warmup(void)
{
#if !defined(__vita__)
    int wu = 0; { const char *e = getenv("R2_GL_WARMUP"); if (e && *e) wu = atoi(e); } if (!wu) return;
#else
    int wu = R2_GL_WARMUP;
    if (wu) { FILE *f = fopen("ux0:data/rayman2/NO_WARMUP", "rb"); if (f) { fclose(f); wu = 0; } }
    if (!wu) return;
#endif
    uint64_t t0 = r2_now_us();
    if (!(wu & 31)) { warm_clear(); glFinish(); gl_logf("[vita] GL warm-up: first glClear in %llu ms", (unsigned long long)((r2_now_us() - t0) / 1000)); return; }
    static TaClipVertex v[3] = { { -1.f, -1.f, 0.5f, 0.f, 0.f, 1.f, 1.f, 1.f, 1.f }, { 1.f, -1.f, 0.5f, 1.f, 0.f, 1.f, 1.f, 1.f, 1.f }, { 0.f, 1.f, 0.5f, 0.5f, 1.f, 1.f, 1.f, 1.f, 1.f } };
    GLuint tex = 0; static const uint32_t px[4] = { 0xFF8080FFu, 0xFFFFFFFFu, 0x80FFFFFFu, 0xFF000000u };
    glGenTextures(1, &tex); glBindTexture(GL_TEXTURE_2D, tex); s_cur_tex = tex;
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 2, 2, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glDisable(GL_CULL_FACE); glDisable(GL_DEPTH_TEST); glDepthMask(GL_FALSE);
    glEnable(GL_SCISSOR_TEST); glScissor(0, 0, 1, 1);
    float id[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
    glMatrixMode(GL_PROJECTION); glLoadMatrixf(id); glMatrixMode(GL_MODELVIEW); glLoadIdentity();
    glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &v[0].px); glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &v[0].u);
    gc_reset(); gc_color_ptr(&v[0].r, CV_STRIDE);
    glEnableClientState(GL_VERTEX_ARRAY); glEnableClientState(GL_COLOR_ARRAY); glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    static const GLint envs[4] = { GL_REPLACE, GL_MODULATE, GL_DECAL, GL_BLEND };
    unsigned draws = 0;
#define WARM_DRAW(texmode)  do { if ((texmode) < 0) gc_tex2d(0); else { gc_tex2d(1); gc_texenv(envs[texmode]); } glDrawArrays(GL_TRIANGLES, 0, 3); draws++; } while (0)
    if (wu & 1) for (int alpha = 0; alpha < 2; alpha++) {                       /* opaque (alpha 0) and punch-through (alpha test GEQUAL), blend off */
        gc_blend(0); gc_alpha_test(alpha); if (alpha) gc_alpha_ref(128);
        for (int m = -1; m < 3; m++) WARM_DRAW(m);
    }
    if (wu & 2) {
    gc_alpha_test(0); gc_blend(1);                                   /* translucent: blend pairs */
    static const GLenum pairs[][2] = { { GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA }, { GL_ONE, GL_ONE }, { GL_SRC_ALPHA, GL_ONE }, { GL_ONE, GL_ONE_MINUS_SRC_ALPHA },
                                       { GL_ZERO, GL_SRC_COLOR }, { GL_DST_COLOR, GL_ZERO }, { GL_ZERO, GL_ONE_MINUS_SRC_ALPHA }, { GL_ONE_MINUS_SRC_ALPHA, GL_SRC_ALPHA },
                                       { GL_DST_COLOR, GL_SRC_COLOR }, { GL_ONE, GL_ZERO } };
    for (unsigned p = 0; p < sizeof pairs / sizeof pairs[0]; p++) {
        gc_blend_func(pairs[p][0], pairs[p][1]);
        WARM_DRAW(-1); WARM_DRAW(1);                                 /* untextured + MODULATE for every pair */
        if (p == 0 || p == 1 || p == 3) { WARM_DRAW(0); WARM_DRAW(2); }   /* the common ones also REPLACE / DECAL */
    }
    /* textured table-fog pass: GL_BLEND texenv + SRC_ALPHA / ONE_MINUS_SRC_ALPHA, with and without 1-bit alpha test */
    gc_blend_func(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    WARM_DRAW(3);
    gc_alpha_test(1); gc_alpha_ref(1);
    WARM_DRAW(3);
    gc_alpha_test(0);
    }
    if (wu & 4) {
    gc_blend(0);                                                     /* shadow volumes: colour mask off, then the darkening quad (blend SRC_ALPHA/ONE_MINUS_SRC_ALPHA, stencil) */
    gc_tex2d(0);
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE); glEnable(GL_STENCIL_TEST); glStencilMask(0x01); glStencilFunc(GL_ALWAYS, 0, 0); glStencilOp(GL_KEEP, GL_KEEP, GL_INVERT);
    glDrawArrays(GL_TRIANGLES, 0, 3); draws++;
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); glStencilMask(0); glStencilFunc(GL_EQUAL, 0x81, 0x81); glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    gc_blend(1); gc_blend_func(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDrawArrays(GL_TRIANGLES, 0, 3); draws++;
    glDisable(GL_STENCIL_TEST); glStencilMask(0xFF);
    }
    gc_blend(0); gc_tex2d(0);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY); glDisableClientState(GL_COLOR_ARRAY); glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_SCISSOR_TEST); glDepthMask(GL_TRUE);
    if (wu & 8) { glBindTexture(GL_TEXTURE_2D, 0); glDeleteTextures(1, &tex); s_cur_tex = (GLuint)-1; }
    gc_reset();
    if (wu & 32) warm_clear();
    if (wu & 16) glFinish();
#undef WARM_DRAW
    gl_logf("[vita] GL warm-up: %u draws in %llu ms (first-use shader / fragment-program creation, see notes_render_thread.md)", draws, (unsigned long long)((r2_now_us() - t0) / 1000));
}
static void gl_start(void)
{
    uint64_t t0 = r2_now_us();
    gl_init_context();
    uint64_t t1 = r2_now_us();
    gl_warmup();
    { char ln[200]; snprintf(ln, sizeof ln, "[perf] GL start: vglInitExtended + state %llu ms, warm-up (mask %d) %llu ms", (unsigned long long)((t1 - t0) / 1000), R2_GL_WARMUP, (unsigned long long)((r2_now_us() - t1) / 1000)); rt_log(ln); }
}

/* ----------------------------------------------------------------------------
 * Job preparation (guest thread) and execution (render thread or inline)
 * ---------------------------------------------------------------------------- */
#define RT_JOBS 3                                   /* ring slots: R2_RT_DEPTH (2) jobs in flight + the one being prepared */
static RenderJob s_jobs[RT_JOBS + 1];
static int s_job_next;                              /* guest: next ring slot to prepare */
static int s_rt_on;                                 /* 1: render thread running */

/* GUEST: build the job for `frame`: textures, register snapshot, background plane, wide flag */
#ifdef R2_NATIVE_GFX
static void *s_pending_native;      /* guest thread: handed to the next prepare_job */
void vita_gl_set_pending_native(void *job) { s_pending_native = job; }
#endif
static RenderJob *prepare_job(TaFrame *frame, TaRaw *raw, uint32_t shad)
{
    RenderJob *j = &s_jobs[s_job_next];
    uint64_t t0 = r2_now_us();
    s_gframe_no++;
    j->is_fb = 0; j->fb_off = 0; j->is_cap = 0;
    j->frame = frame; j->raw = raw; j->shad_scale = shad; j->nops = 0; j->nrefs = 0;
#ifdef R2_NATIVE_GFX
    j->native = s_pending_native; s_pending_native = NULL;
#else
    j->native = NULL;
#endif
#ifdef R2_NATIVE_GFX
    if (j->native) {      /* pure native frame: no PVR register snapshot, no background plane, and above all no TA texture validation / decode / upload (the native texture store is the only one) */
        j->have_bg = 0; j->wide = hle_ta_wide_active(); j->fpmode = fp_get(); j->t_prep_us = r2_now_us() - t0;
        return j;
    }
#endif
    memcpy(j->regs, hle_pvr_regs(), sizeof j->regs);
    j->have_bg = hle_ta_background(j->bg, &j->bg_isp, &j->bg_tsp, &j->bg_tcw);
    j->wide = hle_ta_wide_active();
    j->fpmode = fp_get();
    /* every texture a drawn strip uses (unique by key), validated / decoded now while the guest cannot be writing VRAM.  Deferred parse: the headers captured with the packets
     * (a superset of the textures of strips with >= 3 vertices) */
    static struct { uint32_t tcw, tsp, stamp; } seen[2048]; static uint32_t seen_gen;
    seen_gen++;
    uint32_t n_in = frame ? frame->nstrips : raw->ntex;
    for (uint32_t i = 0; i < n_in; i++) {
        uint32_t tcw, tsp_full;
        if (frame) {
            const TaStrip *st = &frame->strips[i];
            if (!st->st.textured || st->count < 3 || st->st.list == TA_L_OPAQUE_MOD || st->st.list == TA_L_TRANS_MOD) continue;
            tcw = st->st.tcw; tsp_full = st->st.tsp;
        } else { tcw = raw->tex[i][0]; tsp_full = raw->tex[i][1]; }
        uint32_t tsp = tsp_full & HLE_TEX_KEY_TSP, h = tex_hash(tcw, tsp) & 2047; int found = 0;
        for (uint32_t k = 0; k < 2048; k++) {
            uint32_t q = (h + k) & 2047;
            if (seen[q].stamp != seen_gen) { seen[q].stamp = seen_gen; seen[q].tcw = tcw; seen[q].tsp = tsp; break; }
            if (seen[q].tcw == tcw && seen[q].tsp == tsp) { found = 1; break; }
        }
        if (found) continue;
        if (j->nrefs >= 1024) continue;               /* more than 1024 distinct textures in one frame: the rest draws untextured */
        if (j->nrefs == j->caprefs) { j->caprefs = j->caprefs ? j->caprefs * 2 : 64; j->refs = (TexRef *)realloc(j->refs, j->caprefs * sizeof(TexRef)); }
        TexRef *r = &j->refs[j->nrefs++]; r->tcw = tcw; r->tsp = tsp; r->slot = guest_texture_slot(j, tcw, tsp_full);
    }
    j->t_prep_us = r2_now_us() - t0;
#if R2_PERF
    g_perf.t_prep += j->t_prep_us;
#endif
    return j;
}

static RenderJob *prepare_fb_job(uint32_t fb_off)
{
    RenderJob *j = &s_jobs[s_job_next];
    s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
    s_gframe_no++;
    memset(j, 0, sizeof(*j));
    j->is_fb = 1;
    j->fb_off = fb_off;
    j->fpmode = fp_get();
    return j;
}

/* Last presented scene as a 640x480 RGB565 image (the Dreamcast frame buffer the game's CPU swirl/fade code draws on top of).  Filled by capture_front_to_scene() on the GL thread. */
static uint16_t s_scene565[640 * 480];
static int s_scene_ok;
static void capture_front_to_scene(int wide)
{
    uint8_t *px = (uint8_t *)malloc((size_t)SCREEN_W * SCREEN_H * 4);
    if (!px) return;
    glFinish();
    glReadPixels(0, 0, SCREEN_W, SCREEN_H, GL_RGBA, GL_UNSIGNED_BYTE, px);       /* vitaGL: the presented (front) buffer = the last scene frame */
    int vx = wide ? 0 : VIEW_X, vw = wide ? SCREEN_W : VIEW_W;
    for (int y = 0; y < 480; y++) {
        int sy = SCREEN_H - 1 - (y * SCREEN_H + SCREEN_H / 2) / 480;            /* GL rows are bottom-up */
        const uint8_t *row = px + (size_t)sy * SCREEN_W * 4;
        for (int x = 0; x < 640; x++) {
            const uint8_t *q = row + (size_t)(vx + (x * vw + vw / 2) / 640) * 4;
            s_scene565[y * 640 + x] = (uint16_t)(((q[0] >> 3) << 11) | ((q[1] >> 2) << 5) | (q[2] >> 3));
        }
    }
    s_scene_ok = 1;
    free(px);
}

static void render_job_exec(RenderJob *j)
{
#if R2_PERF
    uint64_t t0 = r2_now_us();
#endif
    pf_begin();
    pf_slow_take(j);
    uint32_t fp_saved = fp_get();
    if (fp_saved != j->fpmode) fp_set(j->fpmode);     /* no-op inline; on the render thread: the guest's rounding mode */
    if (j->is_cap) { capture_front_to_scene(j->wide); if (fp_saved != j->fpmode) fp_set(fp_saved); return; }
    if (j->is_fb) {
        s_frame_no++;
        vita_gl_perf.frames++;
        static GLuint s_fb_tex = 0;
        if (!s_fb_tex) {
            glGenTextures(1, &s_fb_tex);
            glBindTexture(GL_TEXTURE_2D, s_fb_tex);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        } else {
            glBindTexture(GL_TEXTURE_2D, s_fb_tex);
        }
        s_cur_tex = s_fb_tex;
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, 640, 480, 0, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, hle_fbshadow_ptr() + (j->fb_off & 0x7FFFFF));
        pf.tex_up++; pf.tex_bytes += 640 * 480 * 2;

        int wide = hle_ta_wide_active();
        if (!wide) {
            glViewport(0, 0, SCREEN_W, SCREEN_H);
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
        }
        int vp_x = wide ? 0 : VIEW_X, vp_w = wide ? SCREEN_W : VIEW_W;
        glViewport(vp_x, 0, vp_w, SCREEN_H);

        glDisable(GL_DEPTH_TEST);
        glDisable(GL_ALPHA_TEST);
        glDisable(GL_BLEND);
        glDisable(GL_STENCIL_TEST);
        glDisable(GL_CULL_FACE);
        glDisable(GL_SCISSOR_TEST);
        glDepthMask(GL_FALSE);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);

        glEnable(GL_TEXTURE_2D);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

        float id[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
        glMatrixMode(GL_PROJECTION); glLoadMatrixf(id);
        glMatrixMode(GL_MODELVIEW); glLoadMatrixf(id);

        static const TaClipVertex qv[6] = {
            { -1.0f, -1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f },
            {  1.0f, -1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f },
            {  1.0f,  1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f },
            { -1.0f, -1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f },
            {  1.0f,  1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f },
            { -1.0f,  1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f },
        };
        glEnableClientState(GL_VERTEX_ARRAY);
        glEnableClientState(GL_COLOR_ARRAY);
        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        glVertexPointer(3, GL_FLOAT, sizeof(TaClipVertex), &qv[0].px);
        glTexCoordPointer(2, GL_FLOAT, sizeof(TaClipVertex), &qv[0].u);
        glColorPointer(4, GL_FLOAT, sizeof(TaClipVertex), &qv[0].r);
        glDrawArrays(GL_TRIANGLES, 0, 6); pf.draws++; pf.verts += 6;
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
        glDisableClientState(GL_COLOR_ARRAY);
        glDisableClientState(GL_VERTEX_ARRAY);

        s_cur_tex = (GLuint)-1;
        if (fp_saved != j->fpmode) fp_set(fp_saved);
#if R2_PERF
        g_perf.t_render += r2_now_us() - t0;
#endif
        return;
    }
#ifdef R2_NATIVE_GFX
    if (j->native) {      /* pure native: the native renderer draws this frame (or a clear frame); no TA texture ops, no TA strips */
        s_frame_no++; vita_gl_perf.frames++;
        gc_reset();
        native_hook_render(j->native); j->native = NULL;
        s_cur_tex = (GLuint)-1; gc_reset();
        if (fp_saved != j->fpmode) fp_set(fp_saved);
        return;
    }
#endif
    vita_gl_render_frame_impl(j);
    if (fp_saved != j->fpmode) fp_set(fp_saved);
#if R2_PERF
    g_perf.t_render += r2_now_us() - t0;
#endif
}

/* ---- threading ---- */
#ifndef R2_RENDER_THREAD
#define R2_RENDER_THREAD 1                          /* 1: GL on a dedicated thread (default); 0: everything inline on the game thread; runtime override: file ux0:data/rayman2/NO_RENDER_THREAD */
#endif
#ifdef R2_DEBUG_POLL
#undef R2_RENDER_THREAD
#define R2_RENDER_THREAD 0                          /* the debug capture reads guest memory from the renderer */
#endif
#ifndef R2_RT_DEPTH
#define R2_RT_DEPTH 2                               /* jobs in flight (queued + being drawn): the guest can run at most this many frames ahead of the GPU frame being built */
#endif
#ifndef R2_RENDER_CPU
#define R2_RENDER_CPU SCE_KERNEL_CPU_MASK_USER_0    /* game thread = USER_1, audio = USER_2 (vita_main.c) */
#endif
#if defined(__vita__)
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/cpu.h>
typedef SceUID RSem;
static void rsem_init(RSem *s, int n) { *s = sceKernelCreateSema("r2_rt", 0, n, 0x7FFFFFFF, NULL); }
static void rsem_wait(RSem *s) { sceKernelWaitSema(*s, 1, NULL); }
static void rsem_post(RSem *s) { sceKernelSignalSema(*s, 1); }
#else
#include <pthread.h>
typedef struct { pthread_mutex_t m; pthread_cond_t c; int n; } RSem;
static void rsem_init(RSem *s, int n) { pthread_mutex_init(&s->m, NULL); pthread_cond_init(&s->c, NULL); s->n = n; }
static void rsem_wait(RSem *s) { pthread_mutex_lock(&s->m); while (s->n <= 0) pthread_cond_wait(&s->c, &s->m); s->n--; pthread_mutex_unlock(&s->m); }
static void rsem_post(RSem *s) { pthread_mutex_lock(&s->m); s->n++; pthread_cond_signal(&s->c); pthread_mutex_unlock(&s->m); }
#endif
static RSem s_sem_free, s_sem_job, s_sem_ready, s_sem_cap;
static int s_ring_head, s_ring_tail;                // guest advances head, render advances tail (each owns its index)
static RenderJob *s_ring[RT_JOBS + 1];
#if defined(R2_RT_STRESS)
static void rt_stress_delay(void) { static __thread unsigned r = 12345; r = r * 1103515245u + 12345u; if ((r >> 16) % 5 == 0) { struct timespec ts = { 0, (long)((r >> 8) % 3000000u) }; nanosleep(&ts, NULL); } }
#else
#define rt_stress_delay() ((void)0)
#endif

static uint64_t s_ph_wait;
static void render_thread_loop(void)
{
    /* vglInit and the warm-up run here while the game thread is already loading (render_init does not wait): guest hand-offs queue up until this thread is ready */
    gl_start();
    for (;;) {
        uint64_t t0 = r2_now_us();
        rsem_wait(&s_sem_job);
#if R2_PERF
        g_perf.t_rt_idle += r2_now_us() - t0;
#endif
        s_ph_wait = r2_now_us() - t0;
        RenderJob *j = s_ring[s_ring_tail]; s_ring_tail = (s_ring_tail + 1) % (RT_JOBS + 1);
        if (!j) break;                              /* shutdown marker */
        rt_stress_delay();
#ifdef R2_NATIVE_GFX
        if (j->raw && j->native) { ta_raw_free(j->raw); j->raw = NULL; }    /* pure native: the captured TA packets are dropped unparsed */
#endif
        if (j->raw) {                               /* deferred parse: raw packets -> TaFrame on this thread (parse state persists across frames in s_rctx, packets arrive in guest order) */
#if R2_PERF
            uint64_t tp = r2_now_us();
#endif
            static TaCtx s_rctx; static int s_rctx_ok;
            if (!s_rctx_ok) { ta_init(&s_rctx); s_rctx_ok = 1; }
#if R2_PF
            const uint64_t tp_pf = r2_now_us();
#endif
            j->frame = ta_parse_raw(&s_rctx, j->raw);
            j->frame->shad_scale = j->shad_scale;
            ta_raw_free(j->raw); j->raw = NULL;
#if R2_PERF
            g_perf.t_parse += r2_now_us() - tp;
#endif
#if R2_PF
            s_pf_pending_parse = r2_now_us() - tp_pf;
#endif
        }
        render_job_exec(j);
        if (j->is_cap) { rsem_post(&s_sem_cap); rsem_post(&s_sem_free); continue; }      /* capture job: no swap (it would present the stale back buffer) */
        uint64_t t_sw0 = r2_now_us();
        render_swap();
        if (s_frame_no <= RT_PHASE_FRAMES) {
            char ln[420]; uint64_t t_sw1 = r2_now_us();
            snprintf(ln, sizeof ln, "[perf] RT first frames #%d: waited for job %llu us | ops/uploads %llu | build+cut %llu | up to clear %llu | glClear %llu | setup %llu | draws %llu (first glDrawArrays %llu) | swap %llu | total %llu us (verts %u)",
                     s_frame_no, (unsigned long long)s_ph_wait, PH(s_ph.ops, s_ph.t0), PH(s_ph.build, s_ph.ops), PH(s_ph.clear0, s_ph.build),
                     PH(s_ph.clear1, s_ph.clear0), PH(s_ph.draw0, s_ph.clear1), PH(s_ph.draws_end, s_ph.draw0), PH(s_ph.first_draw1, s_ph.first_draw0),
                     (unsigned long long)(t_sw1 - t_sw0), (unsigned long long)(t_sw1 - s_ph.t0), (unsigned)(j->frame ? j->frame->nverts : 0));
            rt_log(ln);
        }
        ta_frame_free(j->frame); j->frame = NULL;
        rsem_post(&s_sem_free);
    }
}
#if defined(__vita__)
static int render_thread_entry(SceSize args, void *argp) {
    (void)args; (void)argp;
#ifdef R2_USE_VITADEBUGGER
    uvdb_register_thread("rayman2_render");
#endif
    render_thread_loop();
    return 0;
}
#else
static void *render_thread_entry(void *arg) { (void)arg; render_thread_loop(); return NULL; }
#endif

int vita_gl_rt_active(void) { return s_rt_on; }

void vita_gl_render_init(void)
{
    int want = R2_RENDER_THREAD;
#if defined(__vita__)
    if (want) { FILE *f = fopen("ux0:data/rayman2/NO_RENDER_THREAD", "rb"); if (f) { fclose(f); want = 0; } }
#else
    { const char *e = getenv("R2_RENDER_THREAD"); if (e && *e) want = atoi(e) != 0; }
    if (getenv("R2_TACHK")) want = 0;      /* the host cross-check builds frames on the guest thread with the same (static-buffer) depth-cut code */
#endif
    if (!want) { gl_start(); return; }
    rsem_init(&s_sem_free, R2_RT_DEPTH); rsem_init(&s_sem_job, 0); rsem_init(&s_sem_ready, 0); rsem_init(&s_sem_cap, 0);
#if defined(__vita__)
    SceUID th = sceKernelCreateThread("rayman2_render", render_thread_entry, 0x10000100, 256 * 1024, 0, R2_RENDER_CPU, NULL);
    if (th < 0 || sceKernelStartThread(th, 0, NULL) < 0) { gl_logf("[vita] render thread create failed 0x%08x: rendering inline", th); gl_start(); return; }
#else
    pthread_t th; if (pthread_create(&th, NULL, render_thread_entry, NULL)) { gl_start(); return; }
    pthread_detach(th);
#endif
    s_rt_on = 1;                                    /* vglInit runs on the render thread; the game thread does not wait for it (jobs queue in the ring) */
}

/* GUEST at STARTRENDER, threaded path: takes ownership of `frame`.  Blocks while R2_RT_DEPTH jobs are in flight (back-pressure). */
void vita_gl_present_frame(TaFrame *frame)
{
    uint64_t now = r2_now_us();
    pf_slow_begin(now);
#if R2_PERF
    if (s_t_present_end) g_perf.t_guest += now - s_t_present_end;
    uint64_t tw = now;
#endif
    rt_stress_delay();
    { int p_ = R2P_SET(5); rsem_wait(&s_sem_free); R2P_RESTORE(p_); }
#if R2_PERF
    g_perf.t_rt_wait += r2_now_us() - tw;
#endif
    pf_guest_handoff(now, r2_now_us() - now);
    RenderJob *j = prepare_job(frame, NULL, frame->shad_scale);
    pf_slow_attach(j);
    s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
    s_ring[s_ring_head] = j; s_ring_head = (s_ring_head + 1) % (RT_JOBS + 1);
    rsem_post(&s_sem_job);
#if R2_PERF
    s_t_present_end = r2_now_us();
#endif
}

/* GUEST at STARTRENDER, deferred parse: takes ownership of the raw scene */
void vita_gl_present_raw(TaRaw *raw, uint32_t shad_scale)
{
    uint64_t now = r2_now_us();
    pf_slow_begin(now);
#if R2_PERF
    if (s_t_present_end) g_perf.t_guest += now - s_t_present_end;
    uint64_t tw = now;
#endif
    rt_stress_delay();
    { int p_ = R2P_SET(5); rsem_wait(&s_sem_free); R2P_RESTORE(p_); }
#if R2_PERF
    g_perf.t_rt_wait += r2_now_us() - tw;
#endif
    pf_guest_handoff(now, r2_now_us() - now);
    RenderJob *j = prepare_job(NULL, raw, shad_scale);
    pf_slow_attach(j);
    s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
    s_ring[s_ring_head] = j; s_ring_head = (s_ring_head + 1) % (RT_JOBS + 1);
    rsem_post(&s_sem_job);
#if R2_PERF
    s_t_present_end = r2_now_us();
#endif
}

void vita_gl_present_fb(uint32_t fb_off)
{
    if (s_rt_on) {
        rsem_wait(&s_sem_free);
        s_ring[s_ring_head] = prepare_fb_job(fb_off);
        s_ring_head = (s_ring_head + 1) % (RT_JOBS + 1);
        rsem_post(&s_sem_job);
    } else {
        RenderJob *j = prepare_fb_job(fb_off);
        render_job_exec(j);
        render_swap();
    }
}

/* GUEST, at the start of a level transition (swirl init): snapshot the last presented scene into both 640x480 RGB565 frame-buffer shadows (fb offsets off0/off1) so the CPU swirl/fade
 * (black pixels written by f_8c039bc0 into the shadow) and the next present_fb draw over the frozen last frame instead of over black.  Synchronous: the guest waits for the GL thread, so
 * it can not race the guest's own shadow writes that follow. */
void vita_gl_capture_scene(uint32_t off0, uint32_t off1)
{
    RenderJob *j = &s_jobs[s_job_next];
    if (s_rt_on) {
        rsem_wait(&s_sem_free);
        j = &s_jobs[s_job_next]; s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
        memset(j, 0, sizeof(*j)); j->is_cap = 1; j->wide = hle_ta_wide_active(); j->fpmode = fp_get();
        s_ring[s_ring_head] = j; s_ring_head = (s_ring_head + 1) % (RT_JOBS + 1);
        rsem_post(&s_sem_job);
        rsem_wait(&s_sem_cap);
    } else {
        s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
        memset(j, 0, sizeof(*j)); j->is_cap = 1; j->wide = hle_ta_wide_active(); j->fpmode = fp_get();
        render_job_exec(j);
    }
    if (!s_scene_ok) return;
    uint32_t o[2] = { off0 & 0x7FFFFF, off1 & 0x7FFFFF };
    for (int i = 0; i < 2; i++)
        if (o[i] + sizeof s_scene565 <= (8u << 20)) memcpy(hle_fbshadow_ptr() + o[i], s_scene565, sizeof s_scene565);
}

/* ---- inline (single-thread) path, API unchanged: vita_gl_render_frame(f); vita_gl_swap(); caller frees f ---- */
void vita_gl_render_frame(const TaFrame *frame)
{
#if R2_PERF
    uint64_t t0 = r2_now_us();
    if (s_t_swap_end) g_perf.t_guest += t0 - s_t_swap_end;
#endif
    RenderJob *j = prepare_job((TaFrame *)frame, NULL, frame->shad_scale);
    s_job_next = (s_job_next + 1) % (RT_JOBS + 1);
    render_job_exec(j);
    j->frame = NULL;
}
void vita_gl_swap(void) { render_swap(); }

#else

/* Host stubs when building without the Vita toolchain */
void vita_gl_render_init(void) {}
void vita_gl_render_frame(const TaFrame *frame) { (void)frame; }
void vita_gl_swap(void) {}
void vita_gl_present_frame(TaFrame *frame) { ta_frame_free(frame); }
void vita_gl_present_raw(TaRaw *raw, uint32_t shad_scale) { (void)shad_scale; ta_raw_free(raw); }
void vita_gl_present_fb(uint32_t fb_offset) { (void)fb_offset; }
void vita_gl_capture_scene(uint32_t off0, uint32_t off1) { (void)off0; (void)off1; }
int vita_gl_rt_active(void) { return 0; }
void vita_gl_texture_cache_clear(void) {}

#endif
