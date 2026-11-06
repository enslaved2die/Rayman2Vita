/* PowerVR2 Tile Accelerator (TA) command-stream interpreter.
 *
 * Input : 32-byte packets (SQ flushes to 0xE0000000.. + QACR translation, or direct words to the TA FIFO).
 * Output: per-frame display list (TaFrame) + batched float vertex arrays (TaGl) for a vitaGL backend + text dump.
 * Pure portable C99, no dependency on runtime.h.
 *
 * Status legend used in ta.c comments:  [GAME]  = bit position confirmed by disassembly of the game's own strip-head
 * compilers (0x8C0E0860 / 0x8C0D6700 / 0x8C0E0780); [DOC] = from the public PowerVR2/Dreamcast TA documentation as
 * remembered, not independently verified against the game; [ASSUMED] = guess, flagged in the dump as "unsupported".
 */
#ifndef HLE_TA_H
#define HLE_TA_H
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Parameter types: ctl[31:29] */
enum { TA_P_ENDLIST = 0, TA_P_USERCLIP = 1, TA_P_OBJLISTSET = 2, TA_P_POLYHDR = 4, TA_P_SPRITEHDR = 5, TA_P_VERTEX = 7 };
/* List types: ctl[26:24] */
enum { TA_L_OPAQUE = 0, TA_L_OPAQUE_MOD = 1, TA_L_TRANS = 2, TA_L_TRANS_MOD = 3, TA_L_PUNCH = 4, TA_NUM_LISTS = 5 };
/* Colour type: ctl[5:4] */
enum { TA_COL_PACKED = 0, TA_COL_FLOAT = 1, TA_COL_INTENSITY1 = 2, TA_COL_INTENSITY2 = 3 };

/* Decoded polygon / sprite header state. Raw words kept alongside. */
typedef struct TaState {
    uint32_t ctl, isp, tsp, tcw;      /* raw header words 0..3 */
    uint32_t w4_7[4];                 /* raw words 4..7 (sprite: base/offset colour; intensity: face colour floats) */
    int is_sprite;
    uint8_t list;                     /* ctl[26:24] */
    uint8_t group_en;                 /* ctl[23] */
    uint8_t strip_len;                /* ctl[19:18] (0..3 = 1,2,4,6 strips per header), only meaningful if group_en */
    uint8_t clip_mode;                /* ctl[17:16] if group_en else 0: 0 off, 2 inside, 3 outside */
    uint8_t shadow, volume;           /* ctl[7], ctl[6] */
    uint8_t col_type;                 /* ctl[5:4] */
    uint8_t textured, offset, gouraud, uv16;   /* ctl[3], [2], [1], [0] */
    /* ISP word */
    uint8_t depth_mode;               /* isp[31:29]: 0 never 1 less 2 equal 3 lequal 4 greater 5 nequal 6 gequal 7 always [GAME bits] */
    uint8_t cull_mode;                /* isp[28:27]: 0 none 1 small 2 CCW 3 CW [GAME bits] */
    uint8_t z_write_disable;          /* isp[26] [GAME] */
    /* TSP word */
    uint8_t src_blend, dst_blend;     /* tsp[31:29], tsp[28:26]; 0 zero 1 one 2 other 3 inv-other 4 src-a 5 inv-src-a 6 dst-a 7 inv-dst-a [GAME bits] */
    uint8_t src_select, dst_select;   /* tsp[25], tsp[24] [GAME] */
    uint8_t fog_ctrl;                 /* tsp[23:22]: 0 lookup 1 per-vertex(offset-a) 2 none 3 lookup mode2 [GAME bits] */
    uint8_t clamp_color;              /* tsp[21] [GAME] */
    uint8_t use_alpha;                /* tsp[20] [GAME] */
    uint8_t ignore_tex_alpha;         /* tsp[19] [DOC] */
    uint8_t flip_v, flip_u;           /* tsp[17] = FlipV, tsp[18] = FlipU */
    uint8_t clamp_v, clamp_u;         /* tsp[15] = ClampV, tsp[16] = ClampU */
    uint8_t filter;                   /* tsp[14:13]: 0 point 1 bilinear 2 trilinear-A 3 trilinear-B [DOC] */
    uint8_t super_sample;             /* tsp[12] [DOC] */
    uint8_t mip_adjust;               /* tsp[11:8] [DOC] */
    uint8_t shading;                  /* tsp[7:6]: 0 decal 1 modulate 2 decal-alpha 3 modulate-alpha [DOC] */
    uint16_t tex_w, tex_h;            /* U/width = 8<<tsp[5:3], V/height = 8<<tsp[2:0] [PROVEN by the game's MENU.TEX surfaces; the earlier reading had them swapped] */
    /* TCW word */
    uint8_t mip_mapped, vq;           /* tcw[31], tcw[30] [DOC] */
    uint8_t pixel_format;             /* tcw[29:27]: 0 ARGB1555 1 RGB565 2 ARGB4444 3 YUV422 4 bump 5 pal4 6 pal8 [DOC] */
    uint8_t non_twiddled, stride_sel; /* tcw[26], tcw[25] [DOC] */
    uint8_t pal_sel;                  /* tcw[26:21]: for paletted formats the selector overlaps scan/stride bits [DOC] */
    uint32_t tex_addr;                /* byte address in VRAM = (tcw[20:0]) << 3 [GAME: 0x8C0E0780 stores surf>>3 in 21 bits] */
    /* Intensity face/offset colours (floats a,r,g,b) when col_type is intensity; [DOC, 64-byte hdr layout ASSUMED] */
    float face[4], face_off[4];
    /* user clip rectangle in pixels, valid if clip_mode != 0: [x0,y0) .. [x1,y1) */
    int clip[4];
} TaState;

/* One vertex as parsed. Colours are float {a,r,g,b} in 0..1 (packed/intensity already expanded). */
typedef struct TaVertex {
    float x, y, z;                    /* screen pixels, z = 1/w */
    float u, v;
    float base[4], off[4];            /* a,r,g,b */
} TaVertex;

/* A strip = one run of vertices ending at an end-of-strip vertex, all sharing one header state.
 * Sprites are stored as a 4-vertex strip in order A,B,D,C (D = A+C-B), i.e. tris (A,B,D),(B,D,C). */
typedef struct TaStrip {
    TaState st;
    uint32_t first, count;            /* range into TaFrame.verts */
    uint8_t closed_by_eos;            /* 0 if forced closed (new header / end of list / frame end) */
} TaStrip;

/* Modifier-volume triangle ([ASSUMED] packet layout). */
/* vol = volume index inside the list: a volume ends after a triangle whose header ISP volume instruction (isp[31:29]) is 1 (inside last) or 2 (outside last);
 * the game emits 51 'normal' (0) triangles and then one header with instruction 1 + 1 triangle per shadow cylinder [measured, Jail_10 / title demo]. */
typedef struct TaModTri { float v[3][3]; uint32_t ctl; uint32_t isp; uint8_t list; uint32_t vol; } TaModTri;

typedef struct TaStats {
    uint32_t chunks;                  /* 32-byte packets received */
    uint32_t para[8];                 /* parameter counts by type */
    uint32_t list_end[TA_NUM_LISTS];  /* end-of-list received per list (list of the last header) */
    uint32_t verts, strips, sprites, tris_total, modtris;
    uint32_t warn_vertex_no_header, warn_unsupported, warn_forced_strip_close, warn_bad_list_end;
    uint32_t sink_vram, sink_yuv, sink_tex, sink_unknown;   /* non-TA destinations seen via SQ/ext writes */
} TaStats;

typedef struct TaFrame {
    TaVertex *verts; uint32_t nverts, capverts;
    TaStrip *strips; uint32_t nstrips, capstrips;
    TaModTri *mods; uint32_t nmods, capmods;
    TaStats stats;
    uint32_t shad_scale;              /* FPU_SHAD_SCALE (0xA05F8074) sampled when the frame is handed out: bit8 = 'intensity' (0 = scale applies), [7:0] = shadow scale/256 [DOC] */
} TaFrame;

/* ---- deferred parsing (render thread): the guest-side sinks only capture the raw 32-byte packets of a scene (TaRaw) and frame them just enough to know
 *  - which packets end a list (the guest needs the ASIC list-end interrupt at the moment of the store),
 *  - which textures the scene uses (header words), so the guest thread can validate / decode them against VRAM at STARTRENDER;
 * the render thread then runs the ordinary parser (ta_write / do_vertex / ... on a private TaCtx) over the packets.  Parse results are identical to parsing inline. ---- */
typedef struct TaRaw {
    uint8_t *data; uint32_t nbytes, cap;      /* packets, arrival order (data is 16-byte aligned) */
    uint32_t chunks;                          /* packets received (== TaStats.chunks of the parsed frame) */
    uint32_t (*tex)[2]; uint32_t ntex, captex;   /* (tcw, tsp) of every textured, non-modifier polygon/sprite header (consecutive repeats dropped) */
} TaRaw;
typedef struct TaCap {
    TaRaw *cur;
    int cur_list, vch, pend; uint32_t pend_w0, pend_w2, pend_w3;
    uint8_t hdr_sprite, hdr_volume, hdr_textured, hdr_col;   /* fields of the last decoded header that decide the size of a vertex packet (persist across frames like TaCtx.hdr) */
    uint32_t last_tcw, last_tsp; int last_valid;
} TaCap;
void   ta_cap_init(TaCap *c);
int    ta_cap_write32(TaCap *c, const void *p32);                   /* returns 1 + list index when the packet is an end-of-list of a valid list, else 0 */
void   ta_cap_write(TaCap *c, const void *p, size_t nbytes, uint32_t eol[TA_NUM_LISTS]);   /* eol[l] += end-of-list count per list */
TaRaw *ta_cap_take(TaCap *c);                                       /* closes the scene (same boundary as ta_take_frame) and starts a new one */
void   ta_raw_free(TaRaw *r);

typedef enum { TA_DEST_TAFIFO = 0, TA_DEST_YUV, TA_DEST_TEXTURE, TA_DEST_VRAM, TA_DEST_UNKNOWN } TaDest;

/* Optional sink for 32-byte writes that are not the polygon FIFO (VRAM direct, YUV, TA-texture). May be NULL. */
typedef void (*TaSinkFn)(void *user, TaDest dest, uint32_t ext_addr, const uint8_t data[32]);

typedef struct TaCtx {
    TaFrame *cur;
    uint32_t pend[16]; int have_pend;     /* first half of a 64-byte parameter */
    TaState hdr; int hdr_valid;
    TaState clipst;                       /* holds last user-clip rect in .clip */
    int clip_rect[4];
    float last_face[4], last_face_off[4]; /* for intensity mode 2 [ASSUMED] */
    int cur_list; int strip_open; uint32_t strip_idx;
    uint32_t mod_vol;                     /* running volume index within the current frame's modifier lists */
    uint32_t fifo_words[8]; int fifo_n;   /* word-wise FIFO writes */
    int vch;                              /* cached vertex_chunks(): 32-byte chunks of a para-7 vertex under the current header / list (recomputed when either changes) */
    uint32_t raw_prev[16]; int raw_prev_n; int raw_prev_clip[4]; int raw_prev_ok;   /* raw words of the last decoded polygon header: an identical header skips ta_decode_header */
    TaSinkFn sink; void *sink_user;
} TaCtx;

/* parse a captured scene (TaRaw) on the calling thread; c must be a private TaCtx fed only through this function, scenes in capture order */
TaFrame *ta_parse_raw(TaCtx *c, const TaRaw *r);
void ta_init(TaCtx *c);
void ta_destroy(TaCtx *c);
void ta_set_sink(TaCtx *c, TaSinkFn fn, void *user);

/* ---- input ---- */
/* Raw 32-byte TA packet. */
void ta_write32(TaCtx *c, const void *p32);
/* Multiple of 32 bytes. */
void ta_write(TaCtx *c, const void *p, size_t nbytes);
/* One 32-bit store to the TA FIFO (0x10000000..); every 8th word completes a packet. */
void ta_fifo_write_word(TaCtx *c, uint32_t w);
/* Store-queue flush: sq_addr = the address given to `pref` (0xE0000000..0xE3FFFFFF), data = the 32 SQ bytes.
 * External address = ((QACRn>>2)&7)<<26 | (sq_addr & 0x03FFFFE0), n = (sq_addr>>5)&1. */
TaDest ta_sq_flush(TaCtx *c, uint32_t sq_addr, const void *data32, uint32_t qacr0, uint32_t qacr1);
uint32_t ta_sq_translate(uint32_t sq_addr, uint32_t qacr0, uint32_t qacr1);
/* 32-byte write to an external physical address (after SQ translation). */
TaDest ta_ext_write32(TaCtx *c, uint32_t ext_addr, const void *data32);

/* ---- frame handling ---- */
/* Close open strip, hand the finished frame to the caller (free with ta_frame_free) and start a new one.
 * Call at STARTRENDER (SB/PVR reg 0xA05F8014 write) or from the Kamui hook that presents. */
TaFrame *ta_take_frame(TaCtx *c);
void ta_frame_free(TaFrame *f);

/* ---- decoding helpers (exposed for tests / hooks) ---- */
/* Decode header words w[0..7] (w[8..15] optional, may be NULL) into st. Returns header size in 32B chunks (1 or 2). */
void ta_decode_header(TaState *st, const uint32_t w[8], const uint32_t *w2nd);
/* Number of 32-byte chunks needed by the polygon header whose control word is ctl. */
int  ta_header_chunks(uint32_t ctl);

/* ---- text dump ---- */
void ta_dump_frame(const TaFrame *f, FILE *out, int max_verts_per_strip);
void ta_dump_state(const TaState *st, FILE *out);

/* ---- GL-friendly batches ---- */
typedef struct TaGlVertex { float x, y, z, u, v, r, g, b, a, or_, og, ob, oa; } TaGlVertex;  /* 13 floats, tightly packed */
typedef struct TaBatch {
    TaState st;                       /* state shared by every triangle in this batch (header words + decoded fields) */
    uint32_t first;                   /* first vertex in TaGl.verts (always a multiple of 3) */
    uint32_t count;                   /* vertex count, multiple of 3 (plain GL_TRIANGLES) */
} TaBatch;
typedef struct TaGl {
    TaGlVertex *verts; uint32_t nverts;
    TaBatch *batches; uint32_t nbatches;
    uint32_t capverts, capbatches;    /* allocated capacity (kept across ta_build_gl_reuse calls) */
    uint32_t *sidx; uint32_t sidx_cap;                      /* strip indices grouped by list (build scratch) */
    uint32_t list_first[TA_NUM_LISTS], list_count[TA_NUM_LISTS];  /* batch index ranges per list type (batches are grouped by list) */
} TaGl;
/* Convert strips -> triangle lists (even/odd winding corrected so a fixed cull mode works), sprites -> 2 tris,
 * flat-shading (gouraud=0) applied by copying the 3rd-vertex colour, consecutive same-state strips merged,
 * batches grouped by list in submission order. Modifier lists are not emitted (see TaFrame.mods). */
int  ta_build_gl(const TaFrame *f, TaGl *out);
void ta_gl_free(TaGl *g);
/* Extended build: optional software culling (ISP cull modes 2/3 evaluated in screen space, y down: mode 2 drops triangles whose
 * determinant (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0) is negative (counter-clockwise on screen), mode 3 drops positive (clockwise); modes 0/1 keep all) and
 * optional Sutherland-Hodgman clipping to the rectangle [clip_x0,clip_x1]x[clip_y0,clip_y1] done on the screen-linear quantities
 * (x, y, 1/W, u/W, v/W, colours), which is exact for the PVR's interpolation model.  Triangles with a non-finite coordinate or 1/W <= 0 are dropped.
 * Vertex alpha is adjusted to the TSP shading mode (modulate (1) = texture alpha only -> vertex alpha forced to 1) and use-alpha=0 forces 1. */
typedef struct TaBuildOpts { int cull; int clip; float clip_x0, clip_y0, clip_x1, clip_y1; int exact_merge; } TaBuildOpts;   /* exact_merge: 1 = merge only strips with identical header words (old behaviour) in every list */
int  ta_build_gl_ex(const TaFrame *f, TaGl *out, const TaBuildOpts *o);
/* Same, but `out` is zero-initialised once by the caller and re-used for every frame: its arrays keep their capacity (no per-frame malloc/free). Release with ta_gl_free. */
int  ta_build_gl_reuse(const TaFrame *f, TaGl *out, const TaBuildOpts *o);
/* Robust upper bound of "scene" 1/W: the largest vertex 1/W that is <= 64 * median 1/W (UI quads at z=512 and degenerate near-plane vertices are
 * above it).  Depth is mapped zwin = 0.98 * invW / cut for invW <= cut and outliers are clamped to 0.995. [ASSUMED heuristic] */
float ta_gl_depth_cut(const TaGl *g);        /* median from 64 samples (insertion sort), no allocation */
float ta_gl_depth_cut_ref(const TaGl *g);    /* exact median via qsort (reference for tests) */

/* ---- screen-space (x, y, 1/W) -> GL clip space with perspective-correct varyings ----
 * The TA hands over already projected vertices: x,y in pixels, z = 1/W.  PVR interpolates 1/W, u/W, v/W linearly in screen space and divides per pixel.
 * A GL pipeline does exactly that when each vertex has clip coordinate w_c = W (= 1/z): after the divide by w_c the screen position is
 * recovered (x_c = x_ndc * W, y_c = y_ndc * W), 1/w_c is screen-linear and u,v are interpolated as (u/w_c)/(1/w_c) = (u/W)/(1/W).  Depth: the
 * window depth is made linear in 1/W, zwin = s * invW (s = 0.98/cut, outliers clamped to 0.995), which with ndc_z = 2*zwin - 1 gives z_c = 2s - W: linear
 * in W, so everything is expressed with a constant matrix on the position attribute (px,py,pz) = (x_ndc*W, y_ndc*W, W) (fixed-function GL pipelines that
 * only take 3 position components cannot be fed a per-vertex w otherwise):  clip = (px, py, 2s - pz, pz).  Depth test GREATER then equals PVR "greater". */
typedef struct TaClipVertex { float px, py, pz, u, v, r, g, b, a; } TaClipVertex;   /* 9 floats, tightly packed */
void ta_gl_make_clip(const TaGlVertex *in, uint32_t n, float cut, TaClipVertex *out);
void ta_gl_projection(float cut, float m[16]);   /* column-major 4x4: clip = M * (px,py,pz,1) */

/* ---- texture decoding (PVR texture memory -> RGBA8888, R in the low byte) ---- */
/* Environment the decoder needs besides VRAM: palette RAM (1024 words as at 0xA05F9000, may be NULL), PAL_RAM_CTRL (0xA05F8108), TEXT_CONTROL (0xA05F80E4). */
typedef struct TaTexEnv { const uint32_t *pal; uint32_t pal_ctrl, text_control; } TaTexEnv;
/* Texture size from TSP (U/width = 8<<tsp[5:3], V/height = 8<<tsp[2:0]). */
void ta_tex_size(uint32_t tsp, int *w, int *h);
/* Number of mip levels stored: 1 unless tcw[31] (then log2(w)+1, down to 1x1). Level 0 is the full size, level k is (w>>k)x(h>>k). */
int  ta_tex_levels(uint32_t tcw, uint32_t tsp);
/* Decode one level into rgba (size (w>>level)*(h>>level) words). `vram` is the PVR-order texture memory (linear, byte address = tcw[20:0]*8) of
 * vram_size bytes; out-of-range reads give 0.  force_opaque sets alpha to 255 (TSP ignore-texture-alpha).  Returns 0, or -1 for unsupported (bump). */
int  ta_tex_decode(const uint8_t *vram, uint32_t vram_size, uint32_t tcw, uint32_t tsp, const TaTexEnv *env, int level, int force_opaque, uint32_t *rgba);
/* 16-bit decode directly to GL_UNSIGNED_SHORT_5_5_5_1 (fmt 0), GL_UNSIGNED_SHORT_5_6_5 (fmt 1), or GL_UNSIGNED_SHORT_4_4_4_4 (fmt 2).
 * Returns 0 on success, or -1 if unsupported (non-16-bit format). */
int  ta_tex_decode16(const uint8_t *vram, uint32_t vram_size, uint32_t tcw, uint32_t tsp, const TaTexEnv *env, int level, int force_opaque, uint16_t *out);

/* ---- fog (TSP fog control 0 = table lookup) ----
 * FOG_DENSITY = mantissa[15:8]/128 * 2^(int8)[7:0]; z = clamp(invW * density, 1, 255.99); e = floor(log2 z); m = z*16/2^e - 16; idx = floor(m) + 16e (0..127);
 * fog alpha = lerp(table[idx] >> 8, table[idx] & 255, frac(m)) / 255 (table entry: high byte = value at idx, low byte = value at idx+1 [PROVEN: entry n low byte == entry n+1 high byte in the game's table]).
 * Result colour = lerp(colour, FOG_COL_RAM, alpha) [DOC; the formula follows the public PVR docs / emulators as remembered]. */
float ta_fog_alpha(float inv_w, uint32_t fog_density, const uint32_t table[128]);
float ta_fog_alpha_ref(float inv_w, uint32_t fog_density, const uint32_t table[128]);   /* original log2f/floorf version (tests) */

/* ---- texture cache helpers ---- */
uint32_t ta_tex_byte_len(uint32_t tcw, uint32_t tsp);     /* conservative byte length of the texture data in VRAM at tcw*8 (pixels + mip chain + VQ codebook) */
uint32_t ta_hash_bytes(const void *data, uint32_t n);      /* 4-lane multiplicative content hash */

/* ---- 16:9 mode (ta_hle.c) ---- the game's own "MODE 16/9" renders the scene with a wider FOV and squeezes all x by 1/k about x=320 (k patched to 4/3);
 * renderers un-squeeze by mapping the 640x480 screen space onto the whole 16:9 display.  hle_ta_wide_active() = game currently in 16:9 mode (valid per frame). */
void  hle_ta_wide_set(int on);       /* runtime preference: 1 = force the game's 16:9 mode (default), 0 = 4:3 */
int   hle_ta_wide_pref(void);
int   hle_ta_wide_active(void);
int   r2_get_fps_limit(void);
int   r2_get_render_scale(void);
float hle_ta_wide_k(void);

/* Suggested draw order of list types: opaque, punch-through, translucent. Returns count (3). */
int  ta_draw_order(int out_lists[3]);

#ifdef __cplusplus
}
#endif
#endif
