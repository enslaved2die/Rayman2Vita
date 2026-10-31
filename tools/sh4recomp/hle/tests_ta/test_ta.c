/* TA interpreter tests. Build: see Makefile in this directory (make test / make test-real). */
#include "../ta.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)
static uint32_t F(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static int near_(float a, float b) { return fabsf(a - b) < 1e-4f; }

/* Build the game's vertex type 3 packet {ctl,x,y,z,u,v,base,offset} */
static void v3(uint32_t w[8], uint32_t ctl, float x, float y, float z, float u, float v, uint32_t base, uint32_t off)
{ w[0] = ctl; w[1] = F(x); w[2] = F(y); w[3] = F(z); w[4] = F(u); w[5] = F(v); w[6] = base; w[7] = off; }

/* Header words built exactly with the bit placement of Kamui's 0x8C0E0860 (see hw_inventory 5.2). */
static void game_hdr(uint32_t h[8], int list, int clip, int gouraud, int depth, int cull, int zwd, uint32_t tsp, uint32_t tcw, int tex)
{
    memset(h, 0, 32);
    h[0] = ((uint32_t)list << 24) | ((uint32_t)clip << 16) | ((uint32_t)gouraud << 1) | (tex ? 0x808C0108u : 0x808C0100u);
    h[1] = ((uint32_t)depth << 29) | ((uint32_t)cull << 27) | ((uint32_t)zwd << 26) | 1u;
    h[2] = tsp; h[3] = tcw;
}

static void test_game_strip_via_sq(void)
{
    TaCtx c; ta_init(&c);
    uint32_t h[8], v[8];
    /* tsp: src=4(src-a) dst=5(inv-src-a), use alpha, fog none(2), clamp, 64x32 texture (U (tsp[5:3])=3->64, V (tsp[2:0])=2->32), modulate-alpha(3) */
    uint32_t tsp = (4u << 29) | (5u << 26) | (2u << 22) | (1u << 21) | (1u << 20) | (3u << 6) | (3u << 3) | 2u;
    uint32_t tcw = (1u << 27) | 0x1234u;      /* RGB565, addr field 0x1234 -> byte addr 0x91A0 */
    game_hdr(h, TA_L_TRANS, 0, 1, 3, 2, 0, tsp, tcw, 1);
    uint32_t qacr0 = 0x10, qacr1 = 0x10;      /* game writes ptr>>24 = 0x10 -> area 4 -> 0x10000000 */
    CHECK(ta_sq_translate(0xE0000020u, qacr0, qacr1) == 0x10000020u);
    CHECK(ta_sq_flush(&c, 0xE0000000u, h, qacr0, qacr1) == TA_DEST_TAFIFO);
    v3(v, 0xE0000000u, 10, 20, 0.5f, 0.f, 0.f, 0xFF102030u, 0x80010203u); ta_sq_flush(&c, 0xE0000020u, v, qacr0, qacr1);
    v3(v, 0xE0000000u, 110, 20, 0.5f, 1.f, 0.f, 0xFF102030u, 0); ta_sq_flush(&c, 0xE0000000u, v, qacr0, qacr1);
    v3(v, 0xE0000000u, 10, 120, 0.25f, 0.f, 1.f, 0xFF102030u, 0); ta_sq_flush(&c, 0xE0000020u, v, qacr0, qacr1);
    v3(v, 0xF0000000u, 110, 120, 0.25f, 1.f, 1.f, 0x80FFFFFFu, 0); ta_sq_flush(&c, 0xE0000000u, v, qacr0, qacr1);
    uint32_t eol[8] = { 0 }; ta_write32(&c, eol);
    TaFrame *f = ta_take_frame(&c);
    CHECK(f->nstrips == 1 && f->strips[0].count == 4 && f->strips[0].closed_by_eos);
    const TaState *s = &f->strips[0].st;
    CHECK(s->list == TA_L_TRANS && s->textured && s->gouraud && !s->offset && s->group_en && s->strip_len == 3);
    CHECK(s->depth_mode == 3 && s->cull_mode == 2 && !s->z_write_disable);
    CHECK(s->src_blend == 4 && s->dst_blend == 5 && s->fog_ctrl == 2 && s->clamp_color && s->use_alpha && s->shading == 3);
    CHECK(s->tex_w == 64 && s->tex_h == 32 && s->pixel_format == 1 && s->tex_addr == 0x1234u * 8);
    CHECK(near_(f->verts[0].x, 10) && near_(f->verts[3].v, 1.f) && near_(f->verts[2].z, 0.25f));
    CHECK(near_(f->verts[0].base[0], 1.f) && near_(f->verts[0].base[1], 0x10 / 255.f) && near_(f->verts[0].off[0], 0x80 / 255.f));
    CHECK(f->stats.list_end[TA_L_TRANS] == 1 && f->stats.warn_vertex_no_header == 0);
    TaGl g; CHECK(ta_build_gl(f, &g) == 0);
    CHECK(g.nverts == 6 && g.nbatches == 1 && g.batches[0].count == 6);
    CHECK(g.list_count[TA_L_TRANS] == 1 && g.list_count[TA_L_OPAQUE] == 0);
    /* strip A B C D -> (A,B,C) and (C?,...) parity swap on odd triangle: tri1 = (B,C,D) swapped to (C,B,D)? we swap idx0/1 -> (C,B,D) */
    CHECK(near_(g.verts[3].x, 10) && near_(g.verts[3].y, 120));   /* vertex index 2 (C) first in 2nd triangle */
    CHECK(near_(g.verts[4].x, 110) && near_(g.verts[4].y, 20));
    ta_dump_frame(f, stdout, 4);
    ta_gl_free(&g); ta_frame_free(f); ta_destroy(&c);
}

static void test_flat_and_untextured_float(void)
{
    TaCtx c; ta_init(&c);
    uint32_t h[8], v[8];
    game_hdr(h, TA_L_OPAQUE, 0, 0, 3, 0, 0, 0xB0000000u, 0, 0);
    h[0] |= (TA_COL_FLOAT << 4);
    ta_write32(&c, h);
    for (int i = 0; i < 3; i++) {                  /* untextured floating colour = vertex type 1, 32 B */
        v[0] = i == 2 ? 0xF0000000u : 0xE0000000u; v[1] = F(i * 10.f); v[2] = F(0); v[3] = F(1);
        v[4] = F(1.f); v[5] = F(i == 2 ? 0.f : 1.f); v[6] = F(0.5f); v[7] = F(i / 4.f); ta_write32(&c, v);
    }
    TaFrame *f = ta_take_frame(&c);
    CHECK(f->nstrips == 1 && f->strips[0].count == 3 && !f->strips[0].st.gouraud);
    TaGl g; ta_build_gl(f, &g);
    CHECK(g.nverts == 3 && near_(g.verts[0].b, 0.5f) && near_(g.verts[0].r, 0.f) && near_(g.verts[0].g, 0.5f)); /* flat: 3rd vtx colour (r=0) */
    ta_gl_free(&g); ta_frame_free(f); ta_destroy(&c);
}

static void test_float_textured_64B_and_uv16(void)
{
    TaCtx c; ta_init(&c);
    uint32_t h[8], v[16];
    game_hdr(h, TA_L_OPAQUE, 0, 1, 3, 0, 0, 0, 0, 1);
    h[0] |= (TA_COL_FLOAT << 4) | 4;                /* floating colour + offset => vertex type 5 (64 B) */
    ta_write32(&c, h);
    memset(v, 0, sizeof v);
    v[0] = 0xF0000000u; v[1] = F(1); v[2] = F(2); v[3] = F(3); v[4] = F(.25f); v[5] = F(.75f);
    v[8] = F(1); v[9] = F(.1f); v[10] = F(.2f); v[11] = F(.3f); v[12] = F(.5f); v[13] = F(.6f); v[14] = F(.7f); v[15] = F(.8f);
    ta_write32(&c, v); CHECK(c.have_pend); ta_write32(&c, v + 8); CHECK(!c.have_pend);
    /* uv16 textured packed (type 4) */
    game_hdr(h, TA_L_OPAQUE, 0, 1, 3, 0, 0, 0, 0, 1); h[0] |= 1;
    ta_write32(&c, h);
    uint32_t w[8] = { 0xF0000000u, F(0), F(0), F(1), (F(0.5f) & 0xFFFF0000u) | (F(0.25f) >> 16), 0, 0xFFFFFFFFu, 0 };
    ta_write32(&c, w);
    TaFrame *f = ta_take_frame(&c);
    CHECK(f->nstrips == 2 && f->strips[0].count == 1);
    CHECK(near_(f->verts[0].u, .25f) && near_(f->verts[0].base[2], .2f) && near_(f->verts[0].off[3], .8f));
    CHECK(near_(f->verts[1].u, .5f) && near_(f->verts[1].v, .25f));
    ta_frame_free(f); ta_destroy(&c);
}

static void test_sprite_and_userclip(void)
{
    TaCtx c; ta_init(&c);
    uint32_t uc[8] = { 0x20000000u, 0, 0, 0, 1, 2, 3, 4 };     /* tiles x 1..3, y 2..4 */
    ta_write32(&c, uc);
    uint32_t h[8] = { 0xA0000000u | (TA_L_PUNCH << 24) | (1u << 23) | (2u << 16) | 8u, 0x20000000u, 0, 0, 0xFF808080u, 0x00000000u, 0, 0 };
    ta_write32(&c, h);
    uint32_t s[16] = { 0xF0000000u, F(0), F(0), F(1), F(10), F(0), F(1), F(10), F(10), F(1), F(0), F(10), 0,
                       (F(0) & 0xFFFF0000u) | (F(0) >> 16), (F(1) & 0xFFFF0000u) | (F(0) >> 16), (F(1) & 0xFFFF0000u) | (F(1) >> 16) };
    ta_write32(&c, s); ta_write32(&c, s + 8);
    TaFrame *f = ta_take_frame(&c);
    CHECK(f->nstrips == 1 && f->strips[0].count == 4 && f->stats.sprites == 1);
    CHECK(f->strips[0].st.is_sprite && f->strips[0].st.clip_mode == 2);
    CHECK(f->strips[0].st.clip[0] == 32 && f->strips[0].st.clip[1] == 64 && f->strips[0].st.clip[2] == 128 && f->strips[0].st.clip[3] == 160);
    /* A=(0,0) B=(10,0) C=(10,10) D=A+C-B=(0,10); strip order A,B,D,C */
    CHECK(near_(f->verts[2].x, 0) && near_(f->verts[2].y, 10) && near_(f->verts[3].x, 10) && near_(f->verts[3].y, 10));
    CHECK(near_(f->verts[2].v, 1.f) && near_(f->verts[2].u, 0.f));      /* D uv = A+C-B = (0,1) */
    CHECK(near_(f->verts[0].base[1], 0x80 / 255.f));
    ta_frame_free(f); ta_destroy(&c);
}

static void test_intensity_and_edge(void)
{
    TaCtx c; ta_init(&c);
    uint32_t h[16], v[8];
    memset(h, 0, sizeof h);
    h[0] = 0x80800000u | (TA_COL_INTENSITY1 << 4) | 2; h[1] = 3u << 29; h[4] = F(1); h[5] = F(1); h[6] = F(.5f); h[7] = F(0);
    ta_write32(&c, h);
    v[0] = 0xF0000000u; v[1] = F(1); v[2] = F(1); v[3] = F(1); v[4] = v[5] = 0; v[6] = F(.5f); v[7] = 0;
    ta_write32(&c, v);
    /* vertex before any header after frame end */
    TaFrame *f = ta_take_frame(&c);
    CHECK(near_(f->verts[0].base[1], .5f) && near_(f->verts[0].base[2], .25f) && near_(f->verts[0].base[3], 0.f));
    ta_frame_free(f);
    v[0] = 0xE0000000u; ta_write32(&c, v);
    f = ta_take_frame(&c); CHECK(f->stats.warn_vertex_no_header == 1 && f->nverts == 0);
    ta_frame_free(f);
    /* word-wise FIFO */
    uint32_t e[8] = { 0 };
    for (int i = 0; i < 8; i++) ta_fifo_write_word(&c, e[i]);
    f = ta_take_frame(&c); CHECK(f->stats.chunks == 1 && f->stats.para[0] == 1 && f->stats.warn_bad_list_end == 1);
    ta_frame_free(f);
    /* non-TA destination */
    TaDest d = ta_sq_flush(&c, 0xE0000000u, e, 0x04, 0x04);   /* area 1 -> 0x04000000 VRAM */
    CHECK(d == TA_DEST_VRAM);
    ta_destroy(&c);
}

#ifdef TA_REAL
/* Run the game's own strip-head compiler 0x8C0E0860 (recompiled) and feed the head it produces to the TA parser. */
#include "../../runtime.h"
#include <stdlib.h>
static void test_real_compiler(const char *bin)
{
    FILE *fp = fopen(bin, "rb"); if (!fp) { printf("skip real: no %s\n", bin); return; }
    fseek(fp, 0, SEEK_END); long n = ftell(fp); fseek(fp, 0, SEEK_SET);
    uint8_t *img = malloc(n); if (fread(img, 1, n, fp) != (size_t)n) return; fclose(fp);
    sh4_load_image(img, (uint32_t)n, SH4_IMAGE_BASE); free(img);
    static SH4Ctx cx; sh4_ctx_reset(&cx);
    uint32_t ctxa = 0x8CA00000u, heada = 0x8CA01000u;
    uint32_t sc[0x40]; memset(sc, 0, sizeof sc);
    sc[0] = 0x90; sc[1] = TA_L_TRANS; sc[2] = 2; sc[3] = 0; sc[6] = 1; sc[7] = 6; sc[8] = 3; sc[9] = 1;
    sc[20] = 4; sc[21] = 5; sc[22] = 1; sc[23] = 0; sc[24] = 2; sc[25] = 1; sc[26] = 1;
    memcpy(&sh4_ram[ctxa & 0xFFFFFF], sc, sizeof sc);
    cx.r[4] = heada; cx.r[5] = ctxa;
    sh4_call(&cx, 0x8C0E0860u);
    uint32_t h[8]; memcpy(h, &sh4_ram[heada & 0xFFFFFF], 32);
    printf("real 0x8C0E0860 output: %08x %08x %08x (ret r0=%u)\n", h[0], h[1], h[2], cx.r[0]);
    TaState s; ta_decode_header(&s, h, NULL);
    ta_dump_state(&s, stdout);
    CHECK(cx.r[0] == 0);
    CHECK(s.list == TA_L_TRANS && s.group_en && s.gouraud && s.clip_mode == 2 && s.depth_mode == 6 && s.cull_mode == 3 && s.z_write_disable);
    CHECK(s.src_select == 1 && s.dst_select == 0 && s.fog_ctrl == 2 && s.clamp_color && s.use_alpha);
    printf("  blend enums (4,5) -> hw src=%u dst=%u (Kamui enum table, mapping not independently named)\n", s.src_blend, s.dst_blend);
}
#endif


/* ---- software cull / screen clip / GL projection ---- */
static TaFrame *tri_frame(TaCtx *c, uint32_t tsp, uint32_t isp_cull, const float v[3][5])
{
    uint32_t h[8], vv[8];
    game_hdr(h, TA_L_OPAQUE, 0, 1, 4, (int)isp_cull, 0, tsp, (1u << 27) | 0x100u, 1);
    ta_write32(c, h);
    for (int i = 0; i < 3; i++) { v3(vv, 0xE0000000u | (i == 2 ? 0x10000000u : 0), v[i][0], v[i][1], v[i][2], v[i][3], v[i][4], 0xFFFFFFFFu, 0); ta_write32(c, vv); }
    uint32_t eol[8] = { 0 }; ta_write32(c, eol);
    return ta_take_frame(c);
}
static void test_cull_clip_projection(void)
{
    TaCtx c; ta_init(&c);
    uint32_t tsp = (1u << 20) | (3u << 6) | (3u << 3) | 3u;
    TaBuildOpts o = { 1, 1, 0.f, 0.f, 640.f, 480.f };
    /* clockwise on screen (y down): det > 0 -> culled by mode 3, kept by mode 2 */
    float cw[3][5] = { { 100, 100, 0.01f, 0, 0 }, { 200, 100, 0.01f, 1, 0 }, { 100, 200, 0.01f, 0, 1 } };
    TaFrame *f = tri_frame(&c, tsp, 3, cw); TaGl g; CHECK(ta_build_gl_ex(f, &g, &o) == 0); CHECK(g.nverts == 0); ta_gl_free(&g); ta_frame_free(f);
    f = tri_frame(&c, tsp, 2, cw); CHECK(ta_build_gl_ex(f, &g, &o) == 0); CHECK(g.nverts == 3); ta_gl_free(&g); ta_frame_free(f);
    f = tri_frame(&c, tsp, 0, cw); CHECK(ta_build_gl_ex(f, &g, &o) == 0); CHECK(g.nverts == 3); ta_gl_free(&g); ta_frame_free(f);
    /* a huge triangle with varying 1/W: every clipped vertex must carry the perspective-correct u,v of its screen position */
    float big[3][5] = { { -1000, -500, 0.002f, 0, 0 }, { 3000, -500, 0.02f, 1, 0 }, { -1000, 2500, 0.008f, 0, 1 } };
    f = tri_frame(&c, tsp, 0, big); CHECK(ta_build_gl_ex(f, &g, &o) == 0); CHECK(g.nverts >= 6);
    int bad = 0;
    double ax = big[0][0], ay = big[0][1], bx = big[1][0], by = big[1][1], cx = big[2][0], cy = big[2][1];
    double den = (by - cy) * (ax - cx) + (cx - bx) * (ay - cy);
    for (uint32_t i = 0; i < g.nverts; i++) {
        double px = g.verts[i].x, py = g.verts[i].y;
        if (px < -1e-3 || px > 640.001 || py < -1e-3 || py > 480.001) bad++;
        double l0 = ((by - cy) * (px - cx) + (cx - bx) * (py - cy)) / den, l1 = ((cy - ay) * (px - cx) + (ax - cx) * (py - cy)) / den, l2 = 1 - l0 - l1;
        double iw = l0 * big[0][2] + l1 * big[1][2] + l2 * big[2][2];
        double eu = (l0 * big[0][2] * big[0][3] + l1 * big[1][2] * big[1][3] + l2 * big[2][2] * big[2][3]) / iw;
        double ev = (l0 * big[0][2] * big[0][4] + l1 * big[1][2] * big[1][4] + l2 * big[2][2] * big[2][4]) / iw;
        if (fabs(g.verts[i].z - iw) > 1e-5 * iw || fabs(g.verts[i].u - eu) > 1e-3 || fabs(g.verts[i].v - ev) > 1e-3) bad++;
    }
    CHECK(bad == 0);
    /* GL projection: ndc position, window depth = s/W linear, perspective-correct interpolation through clip space */
    float cut = ta_gl_depth_cut(&g), M[16]; ta_gl_projection(cut, M);
    TaClipVertex *cv = (TaClipVertex *)malloc(g.nverts * sizeof *cv); ta_gl_make_clip(g.verts, g.nverts, cut, cv);
    int bad2 = 0;
    for (uint32_t i = 0; i < g.nverts; i++) {
        float in4[4] = { cv[i].px, cv[i].py, cv[i].pz, 1.f }, cl[4];
        for (int r = 0; r < 4; r++) cl[r] = M[r] * in4[0] + M[4 + r] * in4[1] + M[8 + r] * in4[2] + M[12 + r] * in4[3];
        float nx = cl[0] / cl[3], ny = cl[1] / cl[3], nz = cl[2] / cl[3];
        float zwin = (nz + 1.f) * 0.5f, want = 0.98f / cut * g.verts[i].z;
        if (fabsf((nx + 1.f) * 320.f - g.verts[i].x) > 0.01f || fabsf((1.f - ny) * 240.f - g.verts[i].y) > 0.01f || fabsf(zwin - want) > 1e-4f || !(cl[3] > 0.f)) bad2++;
    }
    CHECK(bad2 == 0);
    /* midpoint of the first triangle: GL-style interpolation (weights ~ b_i / w_c,i) equals PVR u/W interpolation */
    {
        const TaGlVertex *a = &g.verts[0], *b = &g.verts[1], *d = &g.verts[2];
        double bw[3] = { 0.2, 0.5, 0.3 };
        double iw[3] = { a->z, b->z, d->z };
        double pvr_u = (bw[0] * iw[0] * a->u + bw[1] * iw[1] * b->u + bw[2] * iw[2] * d->u) / (bw[0] * iw[0] + bw[1] * iw[1] + bw[2] * iw[2]);
        double W[3] = { cv[0].pz, cv[1].pz, cv[2].pz }, lam[3], sl = 0, gl_u = 0;
        for (int i = 0; i < 3; i++) { lam[i] = bw[i] / W[i]; sl += lam[i]; }
        for (int i = 0; i < 3; i++) gl_u += lam[i] / sl * (i == 0 ? a->u : i == 1 ? b->u : d->u);
        CHECK(fabs(gl_u - pvr_u) < 1e-4);
    }
    free(cv); ta_gl_free(&g); ta_frame_free(f); ta_destroy(&c);
}

/* ---- texture decode against an independent encoder ---- */
static uint32_t tw_ref(uint32_t x, uint32_t y, uint32_t w, uint32_t h)   /* bit-by-bit Morton, y = LSB, remaining bits of the long side appended */
{
    uint32_t r = 0, sh = 0, xs = w >> 1, ys = h >> 1;
    while (xs || ys) {
        if (ys) { r |= (y & 1) << sh++; y >>= 1; ys >>= 1; }
        if (xs) { r |= (x & 1) << sh++; x >>= 1; xs >>= 1; }
    }
    return r;
}
static uint32_t rgba565(unsigned p) { unsigned r = (p >> 11) & 31, g = (p >> 5) & 63, b = p & 31; return ((r << 3) | (r >> 2)) | ((((g << 2) | (g >> 4))) << 8) | ((((b << 3) | (b >> 2))) << 16) | 0xFF000000u; }
static void test_texture_decode(void)
{
    static uint8_t vram[1 << 16];
    uint32_t out[64 * 64];
    /* 32x16 RGB565 twiddled rectangle at 0x1000: texel (x,y) = x*31 + y*1024 (distinct) */
    uint32_t tsp = (2u << 3) | 1u;    /* U (tsp[5:3]) = 8<<2 = 32 wide, V (tsp[2:0]) = 8<<1 = 16 tall */
    int w, h; ta_tex_size(tsp, &w, &h); CHECK(w == 32 && h == 16);
    uint32_t tcw = (1u << 27) | (0x1000u >> 3);
    for (uint32_t y = 0; y < 16; y++) for (uint32_t x = 0; x < 32; x++) { uint16_t p = (uint16_t)(x * 31 + y * 1024); memcpy(&vram[0x1000 + tw_ref(x, y, 32, 16) * 2], &p, 2); }
    CHECK(ta_tex_decode(vram, sizeof vram, tcw, tsp, NULL, 0, 0, out) == 0);
    int ok = 1; for (uint32_t y = 0; y < 16; y++) for (uint32_t x = 0; x < 32; x++) if (out[y * 32 + x] != rgba565(x * 31 + y * 1024)) ok = 0;
    CHECK(ok);
    /* tall 16x32: blocks stacked along y */
    tsp = (1u << 3) | 2u; ta_tex_size(tsp, &w, &h); CHECK(w == 16 && h == 32);
    for (uint32_t y = 0; y < 32; y++) for (uint32_t x = 0; x < 16; x++) { uint16_t p = (uint16_t)(x * 63 + y * 2048); memcpy(&vram[0x1000 + tw_ref(x, y, 16, 32) * 2], &p, 2); }
    CHECK(ta_tex_decode(vram, sizeof vram, tcw, tsp, NULL, 0, 0, out) == 0);
    ok = 1; for (uint32_t y = 0; y < 32; y++) for (uint32_t x = 0; x < 16; x++) if (out[y * 16 + x] != rgba565(x * 63 + y * 2048)) ok = 0;
    CHECK(ok);
    /* mip chain 16x16 ARGB4444: levels at 2*(s*s-1)/3+6: 16 -> 0xB0, 8 -> 0x30, 4 -> 0x10 */
    tsp = (1u << 3) | 1u; tcw = (1u << 31) | (2u << 27) | (0x2000u >> 3);
    CHECK(ta_tex_levels(tcw, tsp) == 5);
    memset(vram, 0, sizeof vram);
    for (int lv = 0, s = 16, off = 0xB0; lv < 3; lv++, s >>= 1, off = off == 0xB0 ? 0x30 : 0x10)
        for (int y = 0; y < s; y++) for (int x = 0; x < s; x++) { uint16_t p = (uint16_t)(0xF000 | (lv << 4) | 0x0F); memcpy(&vram[0x2000 + off + tw_ref((uint32_t)x, (uint32_t)y, (uint32_t)s, (uint32_t)s) * 2], &p, 2); }
    for (int lv = 0; lv < 3; lv++) {
        ta_tex_decode(vram, sizeof vram, tcw, tsp, NULL, lv, 0, out);
        uint32_t want = 0xFF000000u | (0xFFu << 16) | ((uint32_t)(lv * 17) << 8) | 0u;
        CHECK(out[0] == want);
    }
    /* VQ 8x8 ARGB1555: codebook entry 5 = 4 distinct texels [(0,0),(0,1),(1,0),(1,1)], all index bytes = 5 */
    tcw = (1u << 30) | (0u << 27) | (0x3000u >> 3); tsp = (0u << 3) | 0u;
    memset(vram, 0, sizeof vram);
    uint16_t blk[4] = { 0x8000 | 31, 0x8000 | (31 << 5), 0x8000 | (31 << 10), 0x0000 };
    memcpy(&vram[0x3000 + 5 * 8], blk, 8);
    for (int i = 0; i < 16; i++) vram[0x3000 + 2048 + i] = 5;
    CHECK(ta_tex_decode(vram, sizeof vram, tcw, tsp, NULL, 0, 0, out) == 0);
    CHECK(out[0] == 0xFFFF0000u);                 /* (x0,y0) = blue */
    CHECK(out[8] == 0xFF00FF00u);                 /* (0,1) = green */
    CHECK(out[1] == 0xFF0000FFu);                 /* (1,0) = red   */
    CHECK((out[9] >> 24) == 0);                   /* (1,1) = transparent */
    CHECK(out[2] == 0xFFFF0000u && out[16] == 0xFFFF0000u);
    /* 4bpp palette */
    uint32_t pal[1024] = { 0 }; pal[0x12 * 16 + 3] = 0xF0F0; pal[0x12 * 16 + 9] = 0xF00F;
    TaTexEnv env = { pal, 2, 0 };
    tcw = (5u << 27) | (0x12u << 21) | (0x4000u >> 3); tsp = (0u << 3) | 0u;   /* 8x8 */
    memset(vram, 0, sizeof vram); for (int i = 0; i < 32; i++) vram[0x4000 + i] = 0x93;      /* texel index even = 3, odd = 9 */
    CHECK(ta_tex_decode(vram, sizeof vram, tcw, tsp, &env, 0, 0, out) == 0);
    CHECK(out[0] == 0xFF00FF00u);                 /* texel t=0 (even) -> low nibble 3 -> 0xF0F0 = opaque green */
    CHECK(out[8] == 0xFFFF0000u);                 /* (x=0,y=1): t=1 (y is the LSB) -> high nibble 9 -> 0xF00F = opaque blue */
    CHECK(ta_tex_decode(vram, sizeof vram, (6u << 27) | (2u << 25), tsp, &env, 0, 0, out) == 0);
}

static void test_fog(void)
{
    uint32_t tab[128];                                    /* the game's real table shape: 0xc7c7 flat, then falling to 0 */
    for (int i = 0; i < 128; i++) tab[i] = 0;
    for (int i = 0; i < 12; i++) tab[i] = 0xc7c7u;
    tab[12] = 0xc7bfu; tab[13] = 0xbfb5u; tab[14] = 0xb5abu;
    uint32_t den = 0xff0a;                                /* mantissa 0xff, exponent 10 -> density ~ 2040 */
    CHECK(fabsf(ta_fog_alpha(1e-6f, den, tab) - 199.0f / 255.0f) < 1e-4f);   /* far: z clamped to 1 -> idx 0 */
    CHECK(ta_fog_alpha(0.5f, den, tab) == 0.0f);          /* near: idx saturates in the zero tail */
    float a = ta_fog_alpha(0.00098f, den, tab);           /* z ~ 2.0 -> e=1, m~0 -> idx 16 region, strictly between */
    CHECK(a >= 0.0f && a <= 199.0f / 255.0f);
}

int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    test_game_strip_via_sq(); test_flat_and_untextured_float(); test_float_textured_64B_and_uv16();
    test_sprite_and_userclip(); test_intensity_and_edge();
    test_cull_clip_projection(); test_texture_decode(); test_fog();
#ifdef TA_REAL
    test_real_compiler(argc > 1 ? argv[1] : "../../../../assets/dc/1ST_READ.BIN");
#endif
    printf(fails ? "TA TESTS FAILED: %d\n" : "TA tests passed\n", fails);
    return fails != 0;
}
