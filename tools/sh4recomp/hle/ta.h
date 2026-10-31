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
    uint8_t flip_v, flip_u;           /* tsp[18], tsp[17] [DOC] */
    uint8_t clamp_v, clamp_u;         /* tsp[16], tsp[15] [DOC] */
    uint8_t filter;                   /* tsp[14:13]: 0 point 1 bilinear 2 trilinear-A 3 trilinear-B [DOC] */
    uint8_t super_sample;             /* tsp[12] [DOC] */
    uint8_t mip_adjust;               /* tsp[11:8] [DOC] */
    uint8_t shading;                  /* tsp[7:6]: 0 decal 1 modulate 2 decal-alpha 3 modulate-alpha [DOC] */
    uint16_t tex_w, tex_h;            /* 8<<tsp[2:0] (U), 8<<tsp[5:3] (V) [DOC; low 6 bits written by game 0x8C0E0780] */
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
typedef struct TaModTri { float v[3][3]; uint32_t ctl; uint32_t isp; uint8_t list; } TaModTri;

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
} TaFrame;

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
    uint32_t fifo_words[8]; int fifo_n;   /* word-wise FIFO writes */
    TaSinkFn sink; void *sink_user;
} TaCtx;

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
    uint32_t list_first[TA_NUM_LISTS], list_count[TA_NUM_LISTS];  /* batch index ranges per list type (batches are grouped by list) */
} TaGl;
/* Convert strips -> triangle lists (even/odd winding corrected so a fixed cull mode works), sprites -> 2 tris,
 * flat-shading (gouraud=0) applied by copying the 3rd-vertex colour, consecutive same-state strips merged,
 * batches grouped by list in submission order. Modifier lists are not emitted (see TaFrame.mods). */
int  ta_build_gl(const TaFrame *f, TaGl *out);
void ta_gl_free(TaGl *g);
/* Suggested draw order of list types: opaque, punch-through, translucent. Returns count (3). */
int  ta_draw_order(int out_lists[3]);

#ifdef __cplusplus
}
#endif
#endif
