/* PowerVR2 TA command-stream interpreter. See ta.h for the status legend ([GAME]/[DOC]/[ASSUMED]). */
#include "ta_ref.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

static float f32(uint32_t w) { float f; memcpy(&f, &w, 4); return f; }
static float f16hi(uint32_t half) { return f32(half << 16); }   /* 16-bit UV = top half of an IEEE float [DOC] */

/* ------------------------------------------------------------------ header */
int ta_header_chunks(uint32_t ctl)
{
    unsigned para = ctl >> 29;
    if (para != TA_P_POLYHDR) return 1;
    unsigned list = (ctl >> 24) & 7;
    if (list == TA_L_OPAQUE_MOD || list == TA_L_TRANS_MOD) return 1;      /* modifier volume header, 32 B [DOC] */
    unsigned col = (ctl >> 4) & 3, vol = (ctl >> 6) & 1, off = (ctl >> 2) & 1;
    if (vol) return (col >= 2) ? 2 : 1;       /* two-volume: packed 32 B, intensity 64 B [DOC] */
    if (col >= 2 && off) return 2;            /* intensity + offset colour: 64 B [DOC] */
    return 1;
}

void ta_decode_header(TaState *s, const uint32_t w[8], const uint32_t *w2)
{
    memset(s, 0, sizeof *s);
    s->ctl = w[0]; s->isp = w[1]; s->tsp = w[2]; s->tcw = w[3];
    memcpy(s->w4_7, w + 4, 16);
    uint32_t c = w[0];
    s->is_sprite = (c >> 29) == TA_P_SPRITEHDR;
    s->list = (c >> 24) & 7;
    s->group_en = (c >> 23) & 1;
    s->strip_len = (c >> 18) & 3;
    s->clip_mode = s->group_en ? (c >> 16) & 3 : 0;
    s->shadow = (c >> 7) & 1; s->volume = (c >> 6) & 1; s->col_type = (c >> 4) & 3;
    s->textured = (c >> 3) & 1; s->offset = (c >> 2) & 1; s->gouraud = (c >> 1) & 1; s->uv16 = c & 1;
    if (s->is_sprite) s->uv16 = 1;
    uint32_t i = w[1], t = w[2], k = w[3];
    s->depth_mode = i >> 29; s->cull_mode = (i >> 27) & 3; s->z_write_disable = (i >> 26) & 1;
    s->src_blend = t >> 29; s->dst_blend = (t >> 26) & 7; s->src_select = (t >> 25) & 1; s->dst_select = (t >> 24) & 1;
    s->fog_ctrl = (t >> 22) & 3; s->clamp_color = (t >> 21) & 1; s->use_alpha = (t >> 20) & 1;
    s->ignore_tex_alpha = (t >> 19) & 1; s->flip_u = (t >> 18) & 1; s->flip_v = (t >> 17) & 1;   /* TSP: 18 FlipU, 17 FlipV, 16 ClampU, 15 ClampV [PROVEN: with the old swapped assignment the title's tree quad (clampV set) wrapped V -> bilinear pulled row 0 in at the edge = seam lines; mountain/sky correct now, matches Flycast fc_04] */
    s->clamp_u = (t >> 16) & 1; s->clamp_v = (t >> 15) & 1; s->filter = (t >> 13) & 3; s->super_sample = (t >> 12) & 1;
    s->mip_adjust = (t >> 8) & 15; s->shading = (t >> 6) & 3;
    s->tex_w = (uint16_t)(8u << ((t >> 3) & 7)); s->tex_h = (uint16_t)(8u << (t & 7));   /* U (width) = tsp[5:3], V (height) = tsp[2:0] [PROVEN: MENU.TEX #13 is 128x64, game TSP size bits = 0x23] */
    s->mip_mapped = k >> 31; s->vq = (k >> 30) & 1; s->pixel_format = (k >> 27) & 7;
    s->non_twiddled = (k >> 26) & 1; s->stride_sel = (k >> 25) & 1; s->pal_sel = (k >> 21) & 0x3F;
    s->tex_addr = (k & 0x1FFFFF) << 3;
    if (s->col_type >= 2 && !s->is_sprite) {
        if (w2) { for (int j = 0; j < 4; j++) { s->face[j] = f32(w2[j]); s->face_off[j] = f32(w2[4 + j]); } }
        else    { for (int j = 0; j < 4; j++) s->face[j] = f32(w[4 + j]); }
    }
}

/* ------------------------------------------------------------------ frame storage */
/* Frames are recycled through a small pool: the vertex/strip/mod arrays keep their capacity from frame to frame (no per-frame malloc/realloc growth from 256 elements, no free). */
#define FRAME_POOL 4
static TaFrame *frame_pool[FRAME_POOL]; static int frame_pool_n;
static TaFrame *frame_new(void)
{
    if (frame_pool_n) {
        TaFrame *f = frame_pool[--frame_pool_n];
        TaVertex *v = f->verts; uint32_t cv = f->capverts; TaStrip *st = f->strips; uint32_t cs = f->capstrips; TaModTri *m = f->mods; uint32_t cm = f->capmods;
        memset(f, 0, sizeof *f);
        f->verts = v; f->capverts = cv; f->strips = st; f->capstrips = cs; f->mods = m; f->capmods = cm;
        return f;
    }
    return (TaFrame *)calloc(1, sizeof(TaFrame));
}
void ta_frame_free(TaFrame *f)
{
    if (!f) return;
    if (frame_pool_n < FRAME_POOL && f->capverts <= (1u << 20)) { frame_pool[frame_pool_n++] = f; return; }
    free(f->verts); free(f->strips); free(f->mods); free(f);
}

#define GROW(arr, n, cap) do { if ((n) >= (cap)) { (cap) = (cap) ? (cap) * 2 : 256; (arr) = realloc((arr), (cap) * sizeof(*(arr))); } } while (0)
static TaVertex *push_vtx(TaFrame *f) { GROW(f->verts, f->nverts, f->capverts); TaVertex *v = &f->verts[f->nverts++]; memset(v, 0, sizeof *v); f->stats.verts++; return v; }

void ta_init(TaCtx *c) { memset(c, 0, sizeof *c); c->cur = frame_new(); c->cur_list = -1; }
void ta_destroy(TaCtx *c) { ta_frame_free(c->cur); c->cur = NULL; }
void ta_set_sink(TaCtx *c, TaSinkFn fn, void *u) { c->sink = fn; c->sink_user = u; }

static void close_strip(TaCtx *c, int by_eos)
{
    if (!c->strip_open) return;
    TaStrip *s = &c->cur->strips[c->strip_idx];
    s->closed_by_eos = (uint8_t)by_eos;
    s->count = c->cur->nverts - s->first;
    c->strip_open = 0;
    if (!by_eos) c->cur->stats.warn_forced_strip_close++;
    if (s->count >= 3) c->cur->stats.tris_total += s->count - 2;
}
static void open_strip(TaCtx *c)
{
    TaFrame *f = c->cur;
    GROW(f->strips, f->nstrips, f->capstrips);
    c->strip_idx = f->nstrips++;
    TaStrip *s = &f->strips[c->strip_idx];
    memset(s, 0, sizeof *s);
    s->st = c->hdr; s->first = f->nverts;
    f->stats.strips++;
    c->strip_open = 1;
}

TaFrame *ta_take_frame(TaCtx *c)
{
    close_strip(c, 1);        /* a trailing strip without EOS is not an error at frame end: silently closed */
    TaFrame *f = c->cur;
    c->cur = frame_new();
    c->have_pend = 0; c->fifo_n = 0; c->hdr_valid = 0; c->cur_list = -1; c->mod_vol = 0;
    return f;
}

/* ------------------------------------------------------------------ vertex decode */
static void pk(float o[4], uint32_t argb) { o[0] = (argb >> 24) / 255.f; o[1] = ((argb >> 16) & 255) / 255.f; o[2] = ((argb >> 8) & 255) / 255.f; o[3] = (argb & 255) / 255.f; }
static void fl(float o[4], uint32_t a, uint32_t r, uint32_t g, uint32_t b) { o[0] = f32(a); o[1] = f32(r); o[2] = f32(g); o[3] = f32(b); }
static void inten(float o[4], const float face[4], float i) { o[0] = face[0]; o[1] = face[1] * i; o[2] = face[2] * i; o[3] = face[3] * i; }

/* number of 32 B chunks of a para-7 vertex under the current header */
static int vertex_chunks(const TaCtx *c)
{
    const TaState *h = &c->hdr;
    if (c->cur_list == TA_L_OPAQUE_MOD || c->cur_list == TA_L_TRANS_MOD) return 2;   /* [ASSUMED] 64 B modifier triangle */
    if (h->is_sprite) return 2;                                                      /* [DOC] sprites are 64 B */
    if (h->volume) return h->textured ? 2 : 1;                                       /* [ASSUMED] */
    if (h->textured && h->col_type == TA_COL_FLOAT) return 2;                        /* vertex type 5/6 [DOC] */
    return 1;
}

static void do_vertex(TaCtx *c, const uint32_t *w, int nch)
{
    TaFrame *f = c->cur;
    const TaState *h = &c->hdr;
    int eos = (w[0] >> 28) & 1;
    if (c->cur_list == TA_L_OPAQUE_MOD || c->cur_list == TA_L_TRANS_MOD) {     /* [ASSUMED] */
        GROW(f->mods, f->nmods, f->capmods);
        TaModTri *m = &f->mods[f->nmods++]; memset(m, 0, sizeof *m);
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) m->v[i][j] = f32(w[1 + i * 3 + j]);
        m->ctl = w[0]; m->isp = h->isp; m->list = (uint8_t)c->cur_list; m->vol = c->mod_vol; f->stats.modtris++;
        if ((h->isp >> 29) & 3) c->mod_vol++;      /* inside-last / outside-last triangle closes the volume */
        return;
    }
    if (!c->hdr_valid) { f->stats.warn_vertex_no_header++; return; }
    if (h->is_sprite) {                                  /* [DOC] ctl,A(xyz),B(xyz),C(xyz),D(xy),dummy,AUV,BUV,CUV */
        if (c->strip_open) close_strip(c, 0);
        open_strip(c);
        float A[3] = { f32(w[1]), f32(w[2]), f32(w[3]) }, B[3] = { f32(w[4]), f32(w[5]), f32(w[6]) }, C[3] = { f32(w[7]), f32(w[8]), f32(w[9]) };
        float D[3] = { f32(w[10]), f32(w[11]), A[2] + C[2] - B[2] };     /* Dz not transmitted: plane extrapolation */
        float au = 0, av = 0, bu = 0, bv = 0, cu = 0, cv = 0;
        if (h->textured) {
            au = f16hi(w[13] >> 16); av = f16hi(w[13] & 0xFFFF);
            bu = f16hi(w[14] >> 16); bv = f16hi(w[14] & 0xFFFF);
            cu = f16hi(w[15] >> 16); cv = f16hi(w[15] & 0xFFFF);
        }
        float du = au + cu - bu, dv = av + cv - bv;
        const float *P[4] = { A, B, D, C };
        float U[4] = { au, bu, du, cu }, V[4] = { av, bv, dv, cv };
        for (int i = 0; i < 4; i++) {
            TaVertex *v = push_vtx(f);
            v->x = P[i][0]; v->y = P[i][1]; v->z = P[i][2]; v->u = U[i]; v->v = V[i];
            pk(v->base, h->w4_7[0]); pk(v->off, h->w4_7[1]);      /* sprite header w4 = base, w5 = offset colour [DOC] */
        }
        f->stats.sprites++;
        close_strip(c, 1);
        return;
    }
    if (h->volume) { f->stats.warn_unsupported++; if (eos) { /* nothing stored */ } return; }
    if (!c->strip_open) open_strip(c);
    TaVertex *v = push_vtx(f);
    v->x = f32(w[1]); v->y = f32(w[2]); v->z = f32(w[3]);
    uint32_t b8_11[4] = { 0, 0, 0, 0 }, o12_15[4] = { 0, 0, 0, 0 }; int has2 = nch == 2;
    if (has2) { memcpy(b8_11, w + 8, 16); memcpy(o12_15, w + 12, 16); }
    int col = h->col_type;
    if (!h->textured) {
        if (col == TA_COL_PACKED) pk(v->base, w[6]);                                    /* type 0 [DOC] */
        else if (col == TA_COL_FLOAT) fl(v->base, w[4], w[5], w[6], w[7]);              /* type 1 [DOC] */
        else inten(v->base, col == 3 ? c->last_face : h->face, f32(w[6]));              /* type 2 [DOC] */
    } else {
        if (h->uv16) { v->u = f16hi(w[4] >> 16); v->v = f16hi(w[4] & 0xFFFF); }         /* types 4/6/8 [DOC] */
        else { v->u = f32(w[4]); v->v = f32(w[5]); }                                    /* types 3/5/7 [GAME: type 3 produced by game] */
        if (col == TA_COL_PACKED) { pk(v->base, w[6]); pk(v->off, w[7]); }              /* type 3/4 [GAME] */
        else if (col == TA_COL_FLOAT) { fl(v->base, b8_11[0], b8_11[1], b8_11[2], b8_11[3]); fl(v->off, o12_15[0], o12_15[1], o12_15[2], o12_15[3]); } /* 5/6 */
        else {
            const float *fc = col == 3 ? c->last_face : h->face, *fo = col == 3 ? c->last_face_off : h->face_off;
            inten(v->base, fc, f32(w[6])); inten(v->off, fo, f32(w[7]));              /* 7/8 */
        }
    }
    if (eos) close_strip(c, 1);
}

/* ------------------------------------------------------------------ parameter dispatch */
static void do_param(TaCtx *c, const uint32_t *w, int nch)
{
    TaFrame *f = c->cur;
    unsigned para = w[0] >> 29;
    f->stats.para[para]++;
    switch (para) {
    case TA_P_ENDLIST:
        close_strip(c, 0);
        if (c->cur_list >= 0 && c->cur_list < TA_NUM_LISTS) f->stats.list_end[c->cur_list]++; else f->stats.warn_bad_list_end++;
        break;
    case TA_P_USERCLIP:      /* [DOC] w4..w7 = xmin,ymin,xmax,ymax in 32-pixel tiles (inclusive max) */
        c->clip_rect[0] = (int)(w[4] & 0x3F) * 32; c->clip_rect[1] = (int)(w[5] & 0xF) * 32;
        c->clip_rect[2] = ((int)(w[6] & 0x3F) + 1) * 32; c->clip_rect[3] = ((int)(w[7] & 0xF) + 1) * 32;
        break;
    case TA_P_OBJLISTSET: break;                     /* 32 B, no rendering effect modelled */
    case TA_P_POLYHDR:
    case TA_P_SPRITEHDR: {
        close_strip(c, 0);
        int list = (w[0] >> 24) & 7;
        if (list >= TA_NUM_LISTS) { f->stats.warn_unsupported++; c->hdr_valid = 0; break; }
        c->cur_list = list;
        if (para == TA_P_POLYHDR && (list == TA_L_OPAQUE_MOD || list == TA_L_TRANS_MOD)) {   /* modifier volume header [DOC] */
            memset(&c->hdr, 0, sizeof c->hdr); c->hdr.ctl = w[0]; c->hdr.isp = w[1]; c->hdr.list = (uint8_t)list; c->hdr_valid = 1; break;
        }
        ta_decode_header(&c->hdr, w, nch == 2 ? w + 8 : NULL);
        memcpy(c->hdr.clip, c->clip_rect, sizeof c->hdr.clip);
        if (c->hdr.col_type == TA_COL_INTENSITY1 && !c->hdr.is_sprite) { memcpy(c->last_face, c->hdr.face, 16); memcpy(c->last_face_off, c->hdr.face_off, 16); }
        c->hdr_valid = 1;
        break; }
    case TA_P_VERTEX: do_vertex(c, w, nch); break;
    default: f->stats.warn_unsupported++; break;    /* 3, 6: reserved */
    }
}

void ta_write32(TaCtx *c, const void *p)
{
    uint32_t w[8]; memcpy(w, p, 32);
    c->cur->stats.chunks++;
    if (c->have_pend) {
        uint32_t both[16]; memcpy(both, c->pend, 32); memcpy(both + 8, w, 32);
        c->have_pend = 0;
        do_param(c, both, 2);
        return;
    }
    unsigned para = w[0] >> 29;
    int need = 1;
    if (para == TA_P_POLYHDR) need = ta_header_chunks(w[0]);
    else if (para == TA_P_VERTEX) need = vertex_chunks(c);
    if (need == 2) { memcpy(c->pend, w, 32); c->have_pend = 1; return; }
    do_param(c, w, 1);
}
void ta_write(TaCtx *c, const void *p, size_t n) { for (size_t o = 0; o + 32 <= n; o += 32) ta_write32(c, (const uint8_t *)p + o); }
void ta_fifo_write_word(TaCtx *c, uint32_t w)
{
    c->fifo_words[c->fifo_n++] = w;
    if (c->fifo_n == 8) { c->fifo_n = 0; ta_write32(c, c->fifo_words); }
}

uint32_t ta_sq_translate(uint32_t a, uint32_t q0, uint32_t q1)
{
    uint32_t q = (a & 0x20) ? q1 : q0;
    return (((q >> 2) & 7u) << 26) | (a & 0x03FFFFE0u);
}
TaDest ta_ext_write32(TaCtx *c, uint32_t ext, const void *d)
{
    uint32_t a = ext & 0x1FFFFFFFu;
    TaDest k;
    if (a >= 0x10000000u && a < 0x10800000u) { ta_write32(c, d); return TA_DEST_TAFIFO; }   /* polygon FIFO, mirrored over 8 MiB */
    else if (a >= 0x10800000u && a < 0x11000000u) { k = TA_DEST_YUV;     c->cur->stats.sink_yuv++; }
    else if (a >= 0x11000000u && a < 0x12000000u) { k = TA_DEST_TEXTURE; c->cur->stats.sink_tex++; }
    else if (a >= 0x04000000u && a < 0x08000000u) { k = TA_DEST_VRAM;    c->cur->stats.sink_vram++; }
    else                                          { k = TA_DEST_UNKNOWN; c->cur->stats.sink_unknown++; }
    if (c->sink) c->sink(c->sink_user, k, ext, (const uint8_t *)d);
    return k;
}
TaDest ta_sq_flush(TaCtx *c, uint32_t sq, const void *d, uint32_t q0, uint32_t q1)
{
    return ta_ext_write32(c, ta_sq_translate(sq, q0, q1), d);
}

/* ------------------------------------------------------------------ dump */
static const char *LN[] = { "opaque", "opaque-mod", "translucent", "trans-mod", "punch-through", "?", "?", "?" };
static const char *DEP[] = { "never", "less", "equal", "lequal", "greater", "nequal", "gequal", "always" };
static const char *CUL[] = { "none", "small", "CCW", "CW" };
static const char *BL[] = { "zero", "one", "other", "inv-other", "src-a", "inv-src-a", "dst-a", "inv-dst-a" };
static const char *PF[] = { "ARGB1555", "RGB565", "ARGB4444", "YUV422", "bump", "pal4", "pal8", "rsvd" };
static const char *CT[] = { "packed", "float", "intensity1", "intensity2" };

void ta_dump_state(const TaState *s, FILE *o)
{
    fprintf(o, "ctl=%08x isp=%08x tsp=%08x tcw=%08x %s list=%s col=%s%s%s%s%s%s clip=%u",
            s->ctl, s->isp, s->tsp, s->tcw, s->is_sprite ? "SPRITE" : "POLY", LN[s->list & 7], CT[s->col_type & 3],
            s->textured ? " tex" : "", s->offset ? " offs" : "", s->gouraud ? " gouraud" : " flat", s->uv16 ? " uv16" : "",
            s->volume ? " VOLUME" : "", s->clip_mode);
    if (s->clip_mode) fprintf(o, "[%d,%d..%d,%d]", s->clip[0], s->clip[1], s->clip[2], s->clip[3]);
    fprintf(o, "\n    depth=%s%s cull=%s blend=%s/%s sel=%u/%u fog=%u clamp=%u usealpha=%u",
            DEP[s->depth_mode], s->z_write_disable ? "(zw off)" : "", CUL[s->cull_mode], BL[s->src_blend], BL[s->dst_blend],
            s->src_select, s->dst_select, s->fog_ctrl, s->clamp_color, s->use_alpha);
    if (s->textured)
        fprintf(o, "\n    tex addr=0x%06x %ux%u %s%s%s shade=%u filter=%u flipUV=%u%u clampUV=%u%u ignoreA=%u mipadj=%u",
                s->tex_addr, s->tex_w, s->tex_h, PF[s->pixel_format], s->vq ? " VQ" : "", s->mip_mapped ? " mip" : "",
                s->shading, s->filter, s->flip_u, s->flip_v, s->clamp_u, s->clamp_v, s->ignore_tex_alpha, s->mip_adjust);
    fputc('\n', o);
}

void ta_dump_frame(const TaFrame *f, FILE *o, int maxv)
{
    const TaStats *t = &f->stats;
    fprintf(o, "TA frame: chunks=%u verts=%u strips=%u sprites=%u tris=%u modtris=%u\n", t->chunks, t->verts, t->strips, t->sprites, t->tris_total, t->modtris);
    fprintf(o, "  params: endlist=%u clip=%u objlist=%u poly=%u sprite=%u vertex=%u\n", t->para[0], t->para[1], t->para[2], t->para[4], t->para[5], t->para[7]);
    fprintf(o, "  list ends:"); for (int i = 0; i < TA_NUM_LISTS; i++) fprintf(o, " %s=%u", LN[i], t->list_end[i]); fputc('\n', o);
    fprintf(o, "  warnings: vtx-no-hdr=%u unsupported=%u forced-strip-close=%u bad-list-end=%u | non-TA sinks: vram=%u yuv=%u tex=%u unk=%u\n",
            t->warn_vertex_no_header, t->warn_unsupported, t->warn_forced_strip_close, t->warn_bad_list_end, t->sink_vram, t->sink_yuv, t->sink_tex, t->sink_unknown);
    for (uint32_t i = 0; i < f->nstrips; i++) {
        const TaStrip *s = &f->strips[i];
        fprintf(o, "strip %u: %u verts%s ", i, s->count, s->closed_by_eos ? "" : " (no EOS)");
        ta_dump_state(&s->st, o);
        for (uint32_t k = 0; k < s->count && (maxv < 0 || (int)k < maxv); k++) {
            const TaVertex *v = &f->verts[s->first + k];
            fprintf(o, "    v%u xyz=(%g,%g,%g) uv=(%g,%g) base=(a%.3f r%.3f g%.3f b%.3f) off=(a%.3f r%.3f g%.3f b%.3f)\n", k, v->x, v->y, v->z, v->u, v->v,
                    v->base[0], v->base[1], v->base[2], v->base[3], v->off[0], v->off[1], v->off[2], v->off[3]);
        }
    }
    for (uint32_t i = 0; i < f->nmods; i++) {
        const TaModTri *m = &f->mods[i];
        fprintf(o, "modtri %u list=%s isp=%08x (%g,%g,%g) (%g,%g,%g) (%g,%g,%g)\n", i, LN[m->list & 7], m->isp,
                m->v[0][0], m->v[0][1], m->v[0][2], m->v[1][0], m->v[1][1], m->v[1][2], m->v[2][0], m->v[2][1], m->v[2][2]);
    }
}

/* ------------------------------------------------------------------ GL batches */
int ta_draw_order(int out[3]) { out[0] = TA_L_OPAQUE; out[1] = TA_L_PUNCH; out[2] = TA_L_TRANS; return 3; }

static int same_state(const TaState *a, const TaState *b)
{
    return a->list == b->list && (a->ctl & 0xFF) == (b->ctl & 0xFF) && a->isp == b->isp && a->tsp == b->tsp && a->tcw == b->tcw &&
           a->clip_mode == b->clip_mode && (!a->clip_mode || !memcmp(a->clip, b->clip, sizeof a->clip));
}
/* Draw-state equivalence for the lists the renderer draws in submission order (opaque, punch-through): two strips whose draw state is equal produce the same GL state for every
 * triangle, so consecutive ones can share one batch / one glDrawArrays with the exact same pixel result (the triangle order is unchanged).  Compared are exactly the fields the
 * renderer reads: list, textured, shadow (stencil receiver), user clip, depth func / depth write, fog control (opaque fog pass) and, for textured strips, the texture word
 * (tcw), the TSP bits that select the decode / sampling (size [5:0], shading [7:6], filter [14:13], clamp/flip [18:15], ignore-texture-alpha [19]).  Bits that are baked into the
 * vertices at build time (gouraud, colour type, offset, UV format, cull mode, use-alpha, shading-dependent vertex alpha, UV rebase flip/clamp) or unused by the Vita path (blend
 * instructions in these lists, mip adjust, super-sample, accumulation-buffer selects, clamp colour) do not matter.  The translucent list keeps the exact same_state() merge: its
 * batches are depth-sorted as units, so merging more would change the sort result. */
#define TSP_DRAW_MASK (0x3Fu | 0xC0u | (3u << 13) | (0xFu << 15) | (1u << 19))
static int same_draw_state(const TaState *a, const TaState *b)
{
    if (a->list != b->list || a->textured != b->textured || a->shadow != b->shadow || a->clip_mode != b->clip_mode) return 0;
    if (a->clip_mode && memcmp(a->clip, b->clip, sizeof a->clip)) return 0;
    if (a->depth_mode != b->depth_mode || a->z_write_disable != b->z_write_disable || a->fog_ctrl != b->fog_ctrl) return 0;
    if (a->textured && (a->tcw != b->tcw || ((a->tsp ^ b->tsp) & TSP_DRAW_MASK))) return 0;
    return 1;
}
static void to_gl(TaGlVertex *o, const TaVertex *v, const float base[4], const float off[4])
{
    o->x = v->x; o->y = v->y; o->z = v->z; o->u = v->u; o->v = v->v;
    o->r = base[1]; o->g = base[2]; o->b = base[3]; o->a = base[0];
    o->or_ = off[1]; o->og = off[2]; o->ob = off[3]; o->oa = off[0];
}

/* growable vertex output */
static int gl_reserve(TaGl *g, uint32_t *cap, uint32_t extra)
{
    if (g->nverts + extra <= *cap) return 0;
    uint32_t nc = *cap ? *cap * 2 : 1024; while (nc < g->nverts + extra) nc *= 2;
    TaGlVertex *nv = (TaGlVertex *)realloc(g->verts, nc * sizeof *nv); if (!nv) return -1;
    g->verts = nv; *cap = nc; g->capverts = nc; return 0;
}
/* clip a convex polygon (<= 8 verts) of screen-linear attribute vectors against one axis-aligned half plane; a[axis] sign*(coord - lim) >= 0 keeps */
typedef struct { float a[13]; } ClipV;   /* x y invW u*invW v*invW r g b a or og ob oa */
static int clip_poly(ClipV *in, int n, ClipV *out, int axis, float lim, int keep_greater)
{
    int m = 0;
    for (int i = 0; i < n; i++) {
        const ClipV *p = &in[i], *q = &in[(i + 1) % n];
        float dp = keep_greater ? p->a[axis] - lim : lim - p->a[axis], dq = keep_greater ? q->a[axis] - lim : lim - q->a[axis];
        int ip = dp >= 0, iq = dq >= 0;
        if (ip) out[m++] = *p;
        if (ip != iq) { float t = dp / (dp - dq); ClipV r; for (int k = 0; k < 13; k++) r.a[k] = p->a[k] + (q->a[k] - p->a[k]) * t; r.a[axis] = lim; out[m++] = r; }
    }
    return m;
}
static void shade_alpha(float *a, const TaState *st)
{
    if (st->textured && st->shading == 1) *a = 1.f;            /* modulate: alpha = texture alpha */
    if (!st->use_alpha) *a = 1.f;                              /* use-alpha off: alpha treated as 1 [DOC] */
}

int ta_build_gl_ex(const TaFrame *f, TaGl *g, const TaBuildOpts *o)
{
    memset(g, 0, sizeof *g);
    return ta_build_gl_reuse(f, g, o);
}
/* Same as ta_build_gl_ex, but g must be zero-initialised once and may then be passed to every later call: its vertex / batch arrays keep their capacity (g->capverts / capbatches). */
int ta_build_gl_reuse(const TaFrame *f, TaGl *g, const TaBuildOpts *o)
{
    TaGlVertex *keep_v = g->verts; uint32_t keep_cv = g->capverts; TaBatch *keep_b = g->batches; uint32_t keep_cb = g->capbatches;
    memset(g, 0, sizeof *g);
    g->verts = keep_v; g->capverts = keep_cv; g->batches = keep_b; g->capbatches = keep_cb;
    uint32_t cap = g->capverts;
    uint32_t need_b = f->nstrips ? f->nstrips : 1;
    if (g->capbatches < need_b) {
        TaBatch *nb = (TaBatch *)realloc(g->batches, need_b * sizeof(TaBatch));
        if (!nb) { ta_gl_free(g); return -1; }
        g->batches = nb; g->capbatches = need_b;
    }
    if (gl_reserve(g, &cap, 3) != 0) { ta_gl_free(g); return -1; }
    for (int l = 0; l < TA_NUM_LISTS; l++) {
        g->list_first[l] = g->nbatches;
        if (l == TA_L_OPAQUE_MOD || l == TA_L_TRANS_MOD) continue;
        for (uint32_t i = 0; i < f->nstrips; i++) {
            const TaStrip *s = &f->strips[i];
            if (s->st.list != l || s->count < 3) continue;
            TaBatch *b = g->nbatches ? &g->batches[g->nbatches - 1] : NULL;
            int merge = b && g->nbatches > g->list_first[l] && ((l == TA_L_TRANS || (o && o->exact_merge)) ? same_state(&b->st, &s->st) : same_draw_state(&b->st, &s->st));
            if (!merge) {
                b = &g->batches[g->nbatches++]; b->st = s->st; b->first = g->nverts; b->count = 0;
            }
            const TaVertex *V = &f->verts[s->first];
            for (uint32_t k = 0; k + 2 < s->count; k++) {
                int idx[3] = { (int)k, (int)k + 1, (int)k + 2 };
                if (k & 1) { int t = idx[0]; idx[0] = idx[1]; idx[1] = t; }   /* keep winding consistent along the strip */
                const TaVertex *pv = &V[k + 2];                               /* provoking vertex for flat shading = last of the triangle */
                TaGlVertex t3[3];
                int ok = 1;
                for (int j = 0; j < 3; j++) {
                    const TaVertex *v = &V[idx[j]];
                    to_gl(&t3[j], v, s->st.gouraud ? v->base : pv->base, s->st.gouraud ? v->off : pv->off);
                    shade_alpha(&t3[j].a, &s->st);
                    if (o && !(isfinite(t3[j].x) && isfinite(t3[j].y) && isfinite(t3[j].z) && t3[j].z > 0.f && isfinite(t3[j].u) && isfinite(t3[j].v))) ok = 0;
                }
                if (!ok) continue;
                if (s->st.textured) {   /* rebase UVs so GLES varyings stay small: wrap is periodic (repeat: 1, mirror: 2), clamp axes untouched */
                    float mu = fminf(t3[0].u, fminf(t3[1].u, t3[2].u)), mv = fminf(t3[0].v, fminf(t3[1].v, t3[2].v));
                    float ku = s->st.clamp_u ? 0.f : floorf(mu / (s->st.flip_u ? 2.f : 1.f)) * (s->st.flip_u ? 2.f : 1.f);
                    float kv = s->st.clamp_v ? 0.f : floorf(mv / (s->st.flip_v ? 2.f : 1.f)) * (s->st.flip_v ? 2.f : 1.f);
                    if (fabsf(mu) < 1e6f && fabsf(mv) < 1e6f) for (int j = 0; j < 3; j++) { t3[j].u -= ku; t3[j].v -= kv; }
                }
                if (o && o->cull && s->st.cull_mode >= 2) {
                    float det = (t3[1].x - t3[0].x) * (t3[2].y - t3[0].y) - (t3[2].x - t3[0].x) * (t3[1].y - t3[0].y);
                    if ((s->st.cull_mode == 2 && det < 0.f) || (s->st.cull_mode == 3 && det > 0.f)) continue;
                }
                int inside = 1;
                if (o && o->clip)
                    for (int j = 0; j < 3; j++)
                        if (t3[j].x < o->clip_x0 || t3[j].x > o->clip_x1 || t3[j].y < o->clip_y0 || t3[j].y > o->clip_y1) inside = 0;
                if (inside) {
                    if (gl_reserve(g, &cap, 3) != 0) { ta_gl_free(g); return -1; }
                    memcpy(&g->verts[g->nverts], t3, sizeof t3); g->nverts += 3; b->count += 3;
                    continue;
                }
                ClipV pa[16], pb[16];
                for (int j = 0; j < 3; j++) {
                    float *a = pa[j].a; const TaGlVertex *t = &t3[j];
                    a[0] = t->x; a[1] = t->y; a[2] = t->z; a[3] = t->u * t->z; a[4] = t->v * t->z;
                    a[5] = t->r * t->z; a[6] = t->g * t->z; a[7] = t->b * t->z; a[8] = t->a * t->z; a[9] = t->or_ * t->z; a[10] = t->og * t->z; a[11] = t->ob * t->z; a[12] = t->oa * t->z;   /* colours interpolate perspective-correctly (like uv): clip them as attr*invW */
                }
                int n = 3;
                n = clip_poly(pa, n, pb, 0, o->clip_x0, 1); if (n < 3) continue;
                n = clip_poly(pb, n, pa, 0, o->clip_x1, 0); if (n < 3) continue;
                n = clip_poly(pa, n, pb, 1, o->clip_y0, 1); if (n < 3) continue;
                n = clip_poly(pb, n, pa, 1, o->clip_y1, 0); if (n < 3) continue;
                if (gl_reserve(g, &cap, 3 * (uint32_t)(n - 2)) != 0) { ta_gl_free(g); return -1; }
                for (int m = 1; m + 1 < n; m++) {
                    const ClipV *tri[3] = { &pa[0], &pa[m], &pa[m + 1] };
                    for (int j = 0; j < 3; j++) {
                        const float *a = tri[j]->a; TaGlVertex *d = &g->verts[g->nverts++];
                        d->x = a[0]; d->y = a[1]; d->z = a[2]; d->u = a[3] / a[2]; d->v = a[4] / a[2];
                        d->r = a[5] / a[2]; d->g = a[6] / a[2]; d->b = a[7] / a[2]; d->a = a[8] / a[2]; d->or_ = a[9] / a[2]; d->og = a[10] / a[2]; d->ob = a[11] / a[2]; d->oa = a[12] / a[2];
                    }
                    b->count += 3;
                }
            }
        }
        g->list_count[l] = g->nbatches - g->list_first[l];
    }
    return 0;
}
int ta_build_gl(const TaFrame *f, TaGl *g) { return ta_build_gl_ex(f, g, NULL); }

static int cmp_f(const void *a, const void *b) { float x = *(const float *)a, y = *(const float *)b; return (x > y) - (x < y); }
/* Reference implementation (exact median via qsort over every vertex): kept for tests / R2_TACHK; the renderer uses ta_gl_depth_cut. */
float ta_gl_depth_cut_ref(const TaGl *g)
{
    if (!g->nverts) return 1.f;
    float *t = (float *)malloc(g->nverts * sizeof(float)); if (!t) return 1.f;
    uint32_t n = 0;
    for (uint32_t i = 0; i < g->nverts; i++) if (g->verts[i].z > 0.f && isfinite(g->verts[i].z)) t[n++] = g->verts[i].z;
    if (!n) { free(t); return 1.f; }
    qsort(t, n, sizeof(float), cmp_f);
    float lim = t[n / 2] * 64.f, cut = t[0];
    for (uint32_t i = 0; i < n; i++) if (t[i] <= lim) cut = t[i];
    free(t);
    return cut;
}
/* Same definition, exact, without qsort and without per-frame allocation.  (The first version estimated the median from 64 evenly spaced vertices; on a dumped intro frame that moved the
 * cut from 0.0442 to 0.0414 and re-rendered 21% of the picture, because vertices above the cut are clamped in ta_gl_make_clip and the depth mapping scales with it - so the median must
 * be exact.)  The valid 1/W values are copied once into a persistent contiguous buffer (capacity kept across frames) while counting a 1024-bucket histogram of the float bit patterns
 * (positive floats sort like their bits); the k-th smallest (k = n/2, i.e. what t[n/2] was after the sort) is then found by two more histogram passes over only the bucket that
 * contains rank k (11 + 11 + 10 bits), then one scan for the largest value <= 64 * median.  Everything after the first pass runs on the compact buffer (4 bytes/vertex). */
float ta_gl_depth_cut(const TaGl *g)
{
    static uint32_t *zb; static uint32_t zcap;
    if (!g->nverts) return 1.f;
    if (zcap < g->nverts) { uint32_t nc = g->nverts + 4096; uint32_t *nb = (uint32_t *)realloc(zb, nc * sizeof *nb); if (!nb) return ta_gl_depth_cut_ref(g); zb = nb; zcap = nc; }
    static uint32_t h1[2048];
    memset(h1, 0, 1024 * sizeof h1[0]);
    uint32_t n = 0;
    for (uint32_t i = 0; i < g->nverts; i++) {
        float z = g->verts[i].z;
        if (z > 0.f && isfinite(z)) { uint32_t u; memcpy(&u, &z, 4); zb[n++] = u; h1[u >> 22]++; }     /* u < 0x7F800000: 9 exponent+mantissa-top bits -> 0..508 */
    }
    if (!n) return 1.f;
    uint32_t k = n / 2, acc = 0, b1 = 0;
    for (; b1 < 1024; b1++) { if (acc + h1[b1] > k) break; acc += h1[b1]; }
    k -= acc;
    memset(h1, 0, 2048 * sizeof h1[0]);
    for (uint32_t i = 0; i < n; i++) if ((zb[i] >> 22) == b1) h1[(zb[i] >> 11) & 0x7FF]++;
    acc = 0; uint32_t b2 = 0;
    for (; b2 < 2048; b2++) { if (acc + h1[b2] > k) break; acc += h1[b2]; }
    k -= acc;
    memset(h1, 0, 2048 * sizeof h1[0]);
    for (uint32_t i = 0; i < n; i++) if ((zb[i] >> 11) == ((b1 << 11) | b2)) h1[zb[i] & 0x7FF]++;
    acc = 0; uint32_t b3 = 0;
    for (; b3 < 2048; b3++) { if (acc + h1[b3] > k) break; acc += h1[b3]; }
    uint32_t mb = (b1 << 22) | (b2 << 11) | b3; float med; memcpy(&med, &mb, 4);
    float lim = med * 64.f, cut = 0.f, mn = 3.4e38f;
    for (uint32_t i = 0; i < n; i++) { float z; memcpy(&z, &zb[i], 4); if (z < mn) mn = z; if (z <= lim && z > cut) cut = z; }
    return cut > 0.f ? cut : mn;
}
void ta_gl_make_clip(const TaGlVertex *in, uint32_t n, float cut, TaClipVertex *out)
{
    float invmax = cut * (0.995f / 0.98f);
    for (uint32_t i = 0; i < n; i++) {
        float iw = in[i].z; if (!(iw > 0.f)) iw = 1e-9f; if (iw > invmax) iw = invmax;
        float W = 1.f / iw, xn = in[i].x * (1.f / 320.f) - 1.f, yn = 1.f - in[i].y * (1.f / 240.f);
        TaClipVertex *o = &out[i];
        o->px = xn * W; o->py = yn * W; o->pz = W;
        o->u = in[i].u; o->v = in[i].v; o->r = in[i].r; o->g = in[i].g; o->b = in[i].b; o->a = in[i].a;
    }
}
void ta_gl_projection(float cut, float m[16])
{
    float s = 0.98f / cut;
    memset(m, 0, 16 * sizeof(float));
    m[0] = 1.f; m[5] = 1.f; m[10] = -1.f; m[14] = 2.f * s; m[11] = 1.f; m[15] = 0.f;
}

/* ------------------------------------------------------------------ texture decode
 * Layout facts (status):
 *  - texture byte address = tcw[20:0]*8 into PVR-order VRAM.  The harness keeps VRAM as the 32-bit-area view and Kamui's loader copies texture
 *    payloads linearly to that array at the surface address, so the array is read LINEARLY here  [PROVEN by m32 byte-compare after 0x8C0D6AC0, texmap.c;
 *    on real hardware the same data arrives through the 64-bit texture area (DMA/SQ) which is linear in PVR order].
 *  - twiddle: Morton, y in the even bits, x in the odd bits; rectangular = square blocks of min(w,h) laid out along the longer axis [DOC; visually confirmed].
 *  - mip chain (square only): smallest level first.  16bpp: level of size s starts at 2*(s*s-1)/3 + 6 bytes (0x30 for 8x8 .. 0xAB0 for 64x64) [PROVEN for 64x64
 *    by decoding the game's VRAM]; 8bpp (S+3) bytes, 4bpp (S+3)/2 bytes.  VQ: 2048-byte codebook, then index levels 1x1,2x2,4x4,... (1,1,4,16,.. bytes).
 *  - VQ codebook entry = 4 texels [(0,0),(0,1),(1,0),(1,1)] as (x,y)  [DOC; same as the original code in ta_render].
 *  - palette 4bpp: index = (tcw[26:21]<<4) + nibble, low nibble = even y; 8bpp: ((tcw[26:25])<<8) + byte; entry format from PAL_RAM_CTRL [DOC].
 *  - YUV422: 32-bit units U Y0 V Y1 (little endian), BT.601 [DOC; linear order assumed].  Bump (fmt 4): unsupported.  */
static uint32_t spread16(uint32_t v) { v = (v | (v << 8)) & 0x00FF00FFu; v = (v | (v << 4)) & 0x0F0F0F0Fu; v = (v | (v << 2)) & 0x33333333u; v = (v | (v << 1)) & 0x55555555u; return v; }
static uint32_t twid(uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    if (w == h) return spread16(y) | (spread16(x) << 1);
    if (w > h)  { uint32_t blk = x / h, xi = x % h; return blk * h * h + (spread16(y) | (spread16(xi) << 1)); }
    { uint32_t blk = y / w, yi = y % w; return blk * w * w + (spread16(yi) | (spread16(x) << 1)); }
}
static uint32_t rgba8(uint32_t r, uint32_t g, uint32_t b, uint32_t a) { return r | (g << 8) | (b << 16) | (a << 24); }
static uint32_t px16(uint32_t p, int fmt)
{
    uint32_t r, g, b, a;
    if (fmt == 0) { a = (p & 0x8000) ? 255 : 0; r = (p >> 10) & 31; g = (p >> 5) & 31; b = p & 31; r = (r << 3) | (r >> 2); g = (g << 3) | (g >> 2); b = (b << 3) | (b >> 2); }
    else if (fmt == 1) { a = 255; r = (p >> 11) & 31; g = (p >> 5) & 63; b = p & 31; r = (r << 3) | (r >> 2); g = (g << 2) | (g >> 4); b = (b << 3) | (b >> 2); }
    else { a = ((p >> 12) & 15) * 17; r = ((p >> 8) & 15) * 17; g = ((p >> 4) & 15) * 17; b = (p & 15) * 17; }
    return rgba8(r, g, b, a);
}
static uint32_t pal_px(const TaTexEnv *e, uint32_t idx)
{
    if (!e || !e->pal) return 0xFF808080u;
    uint32_t w = e->pal[idx & 1023];
    switch (e->pal_ctrl & 3) {
    case 0: return px16(w & 0xFFFF, 0);
    case 1: return px16(w & 0xFFFF, 1);
    case 2: return px16(w & 0xFFFF, 2);
    default: return rgba8((w >> 16) & 255, (w >> 8) & 255, w & 255, w >> 24);
    }
}
static uint32_t rd8(const uint8_t *v, uint32_t n, uint32_t a) { return a < n ? v[a] : 0; }
static uint32_t rd16(const uint8_t *v, uint32_t n, uint32_t a) { return a + 1 < n ? (uint32_t)v[a] | ((uint32_t)v[a + 1] << 8) : 0; }
static uint32_t rd32(const uint8_t *v, uint32_t n, uint32_t a) { return rd16(v, n, a) | (rd16(v, n, a + 2) << 16); }

void ta_tex_size(uint32_t tsp, int *w, int *h) { *w = 8 << ((tsp >> 3) & 7); *h = 8 << (tsp & 7); }
int ta_tex_levels(uint32_t tcw, uint32_t tsp)
{
    if (!(tcw >> 31)) return 1;
    int w, h; ta_tex_size(tsp, &w, &h); int n = 1; while (w > 1) { w >>= 1; n++; } return n;
}

int ta_tex_decode(const uint8_t *vram, uint32_t vn, uint32_t tcw, uint32_t tsp, const TaTexEnv *env, int level, int force_opaque, uint32_t *out)
{
    int W, H; ta_tex_size(tsp, &W, &H);
    int mip = (int)(tcw >> 31), vq = (int)((tcw >> 30) & 1), fmt = (int)((tcw >> 27) & 7), nontw = (int)((tcw >> 26) & 1);
    uint32_t base = (tcw & 0x1FFFFFu) << 3;
    uint32_t w = (uint32_t)W >> level, h = (uint32_t)H >> level;
    if (!w) w = 1;
    if (!h) h = 1;
    if (fmt == 4 || fmt == 7) { for (uint32_t i = 0; i < w * h; i++) out[i] = 0xFF808080u; return -1; }
    if (mip) h = w;                                   /* mip chains are square */
    uint32_t S = (w * w - 1) / 3;                     /* texels in all smaller levels (4^k sums) */
    if (vq && fmt <= 2) {
        uint32_t off = 2048, bw = w > 1 ? w / 2 : 1, bh = h > 1 ? h / 2 : 1;
        if (mip) { uint32_t o = 0; for (uint32_t s = 1; s < w; s <<= 1) o += (s == 1) ? 1 : (s / 2) * (s / 2); off += o; }
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t bidx = twid(x >> 1, y >> 1, bw, bh);
            uint32_t e = rd8(vram, vn, base + off + bidx);
            uint32_t p = rd16(vram, vn, base + e * 8 + (((x & 1) * 2 + (y & 1)) * 2));
            out[y * w + x] = px16(p, fmt);
        }
    } else if (fmt <= 2 || fmt == 3) {
        uint32_t off = mip ? 2 * S + 6 : 0;
        uint32_t stride = w;
        if (nontw && ((tcw >> 25) & 1)) stride = (env ? (env->text_control & 31) : 0) * 32, stride = stride ? stride : w;
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t i = nontw ? y * stride + x : twid(x, y, w, h);
            if (fmt == 3) {
                uint32_t u32 = rd32(vram, vn, base + off + (nontw ? (y * stride + (x & ~1u)) * 2 : (twid(x & ~1u, y, w, h)) * 2));
                int Y = (int)(((x & 1) ? (u32 >> 24) : (u32 >> 8)) & 255), U = (int)(u32 & 255) - 128, Vv = (int)((u32 >> 16) & 255) - 128;
                int R = Y + (int)(1.370705f * Vv), G = Y - (int)(0.698001f * Vv + 0.337633f * U), B = Y + (int)(1.732446f * U);
                R = R < 0 ? 0 : R > 255 ? 255 : R; G = G < 0 ? 0 : G > 255 ? 255 : G; B = B < 0 ? 0 : B > 255 ? 255 : B;
                out[y * w + x] = rgba8((uint32_t)R, (uint32_t)G, (uint32_t)B, 255);
            } else out[y * w + x] = px16(rd16(vram, vn, base + off + i * 2), fmt);
        }
    } else if (fmt == 6) {                             /* 8bpp palette */
        uint32_t off = mip ? S + 3 : 0, pb = ((tcw >> 25) & 3) << 8;
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++)
            out[y * w + x] = pal_px(env, pb + rd8(vram, vn, base + off + (nontw ? y * w + x : twid(x, y, w, h))));
    } else {                                           /* fmt 5: 4bpp palette */
        uint32_t off = mip ? (S + 3) / 2 : 0, pb = ((tcw >> 21) & 63) << 4;
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t i = nontw ? y * w + x : twid(x, y, w, h);
            uint32_t b = rd8(vram, vn, base + off + (i >> 1)), nib = (i & 1) ? (b >> 4) : (b & 15);
            out[y * w + x] = pal_px(env, pb + nib);
        }
    }
    if (force_opaque) for (uint32_t i = 0; i < w * h; i++) out[i] |= 0xFF000000u;
    return 0;
}

void ta_gl_free(TaGl *g) { free(g->verts); free(g->batches); memset(g, 0, sizeof *g); }


/* Reference (original) implementation, kept for the exactness test. */
float ta_fog_alpha_ref(float inv_w, uint32_t fog_density, const uint32_t table[128])
{
    int e8 = (int8_t)(fog_density & 255);
    float den = (float)((fog_density >> 8) & 255) / 128.0f * ldexpf(1.0f, e8);
    float z = inv_w * den;
    if (!(z > 1.0f)) z = 1.0f;
    if (z > 255.99f) z = 255.99f;
    int e = (int)floorf(log2f(z));
    float m = z * 16.0f / ldexpf(1.0f, e) - 16.0f;
    int idx = (int)floorf(m) + e * 16;
    if (idx < 0) idx = 0;
    if (idx > 127) idx = 127;
    float fr = m - floorf(m);
    uint32_t t = table[idx];
    return ((float)((t >> 8) & 255) * (1.0f - fr) + (float)(t & 255) * fr) / 255.0f;
}
/* z in [1, 255.99] is a normal positive float, so e = floor(log2 z) is its exponent field - 127, and m = z*16/2^e - 16 = 16*(significand - 1) is its 23 mantissa bits / 2^19
 * (all steps of the reference are exact in float): floor(m) = top 4 mantissa bits, frac(m) = low 19 bits / 2^19.  Only when log2f() of a value one ulp below a power of two rounds
 * up to the integer does the reference pick e+1 (m slightly negative, idx = 16(e+1) - 1, frac = 1 - tiny): same table index, the weights differ in the last float bits. */
float ta_fog_alpha(float inv_w, uint32_t fog_density, const uint32_t table[128])
{
    static uint32_t s_dens_key = 0x80000000u; static float s_den;       /* density multiplier cache (the density register is constant within a frame) */
    if (fog_density != s_dens_key) { s_dens_key = fog_density; s_den = (float)((fog_density >> 8) & 255) / 128.0f * ldexpf(1.0f, (int8_t)(fog_density & 255)); }
    float z = inv_w * s_den;
    if (!(z > 1.0f)) z = 1.0f;
    if (z > 255.99f) z = 255.99f;
    uint32_t u; memcpy(&u, &z, 4);
    int e = (int)((u >> 23) & 0xFF) - 127;
    int idx = ((int)((u >> 19) & 0xF)) + e * 16;
    if (idx > 127) idx = 127;
    float fr = (float)(u & 0x7FFFFu) * (1.0f / 524288.0f);
    uint32_t t = table[idx];
    return ((float)((t >> 8) & 255) * (1.0f - fr) + (float)(t & 255) * fr) / 255.0f;
}

/* ------------------------------------------------------------------ texture cache support (shared by vita_gl_render.c and the host cross-check in ta_hle.c) */
uint32_t ta_tex_byte_len(uint32_t tcw, uint32_t tsp)
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
/* 4-lane multiplicative hash of n bytes (n multiple of 4 is hashed word-wise, a tail is ignored as before). */
uint32_t ta_hash_bytes(const void *data, uint32_t n)
{
    const uint32_t *p = (const uint32_t *)data;
    uint32_t words = n >> 2, i = 0;
    uint32_t a = 2166136261u, b = 0x9E3779B9u, c = 0x85EBCA6Bu, d = 0xC2B2AE35u;
    for (; i + 4 <= words; i += 4) {
        a = (a ^ p[i]) * 16777619u; b = (b ^ p[i + 1]) * 16777619u; c = (c ^ p[i + 2]) * 16777619u; d = (d ^ p[i + 3]) * 16777619u;
        a ^= a >> 15; b ^= b >> 15; c ^= c >> 15; d ^= d >> 15;
    }
    for (; i < words; i++) { a = (a ^ p[i]) * 16777619u; a ^= a >> 15; }
    return a ^ (b * 3u) ^ (c * 5u) ^ (d * 7u) ^ n;
}
