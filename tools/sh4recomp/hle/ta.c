/* PowerVR2 TA command-stream interpreter. See ta.h for the status legend ([GAME]/[DOC]/[ASSUMED]). */
#include "ta.h"
#include <stdlib.h>
#include <string.h>

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
    s->ignore_tex_alpha = (t >> 19) & 1; s->flip_v = (t >> 18) & 1; s->flip_u = (t >> 17) & 1;
    s->clamp_v = (t >> 16) & 1; s->clamp_u = (t >> 15) & 1; s->filter = (t >> 13) & 3; s->super_sample = (t >> 12) & 1;
    s->mip_adjust = (t >> 8) & 15; s->shading = (t >> 6) & 3;
    s->tex_h = (uint16_t)(8u << ((t >> 3) & 7)); s->tex_w = (uint16_t)(8u << (t & 7));
    s->mip_mapped = k >> 31; s->vq = (k >> 30) & 1; s->pixel_format = (k >> 27) & 7;
    s->non_twiddled = (k >> 26) & 1; s->stride_sel = (k >> 25) & 1; s->pal_sel = (k >> 21) & 0x3F;
    s->tex_addr = (k & 0x1FFFFF) << 3;
    if (s->col_type >= 2 && !s->is_sprite) {
        if (w2) { for (int j = 0; j < 4; j++) { s->face[j] = f32(w2[j]); s->face_off[j] = f32(w2[4 + j]); } }
        else    { for (int j = 0; j < 4; j++) s->face[j] = f32(w[4 + j]); }
    }
}

/* ------------------------------------------------------------------ frame storage */
static TaFrame *frame_new(void) { return (TaFrame *)calloc(1, sizeof(TaFrame)); }
void ta_frame_free(TaFrame *f) { if (!f) return; free(f->verts); free(f->strips); free(f->mods); free(f); }

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
    c->have_pend = 0; c->fifo_n = 0; c->hdr_valid = 0; c->cur_list = -1;
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
        m->ctl = w[0]; m->isp = h->isp; m->list = (uint8_t)c->cur_list; f->stats.modtris++;
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
static void to_gl(TaGlVertex *o, const TaVertex *v, const float base[4], const float off[4])
{
    o->x = v->x; o->y = v->y; o->z = v->z; o->u = v->u; o->v = v->v;
    o->r = base[1]; o->g = base[2]; o->b = base[3]; o->a = base[0];
    o->or_ = off[1]; o->og = off[2]; o->ob = off[3]; o->oa = off[0];
}

int ta_build_gl(const TaFrame *f, TaGl *g)
{
    memset(g, 0, sizeof *g);
    uint32_t ntri = 0;
    for (uint32_t i = 0; i < f->nstrips; i++) if (f->strips[i].count >= 3) ntri += f->strips[i].count - 2;
    g->verts = (TaGlVertex *)malloc((ntri ? ntri : 1) * 3 * sizeof(TaGlVertex));
    g->batches = (TaBatch *)malloc((f->nstrips ? f->nstrips : 1) * sizeof(TaBatch));
    if (!g->verts || !g->batches) { ta_gl_free(g); return -1; }
    for (int l = 0; l < TA_NUM_LISTS; l++) {
        g->list_first[l] = g->nbatches;
        if (l == TA_L_OPAQUE_MOD || l == TA_L_TRANS_MOD) continue;
        for (uint32_t i = 0; i < f->nstrips; i++) {
            const TaStrip *s = &f->strips[i];
            if (s->st.list != l || s->count < 3) continue;
            TaBatch *b = g->nbatches ? &g->batches[g->nbatches - 1] : NULL;
            if (!b || g->nbatches <= g->list_first[l] || !same_state(&b->st, &s->st)) {
                b = &g->batches[g->nbatches++]; b->st = s->st; b->first = g->nverts; b->count = 0;
            }
            const TaVertex *V = &f->verts[s->first];
            for (uint32_t k = 0; k + 2 < s->count; k++) {
                int idx[3] = { (int)k, (int)k + 1, (int)k + 2 };
                if (k & 1) { int t = idx[0]; idx[0] = idx[1]; idx[1] = t; }   /* keep winding consistent along the strip */
                const TaVertex *pv = &V[k + 2];                               /* provoking vertex for flat shading = last of the triangle */
                for (int j = 0; j < 3; j++) {
                    const TaVertex *v = &V[idx[j]];
                    to_gl(&g->verts[g->nverts++], v, s->st.gouraud ? v->base : pv->base, s->st.gouraud ? v->off : pv->off);
                }
                b->count += 3;
            }
        }
        g->list_count[l] = g->nbatches - g->list_first[l];
    }
    return 0;
}
void ta_gl_free(TaGl *g) { free(g->verts); free(g->batches); memset(g, 0, sizeof *g); }
