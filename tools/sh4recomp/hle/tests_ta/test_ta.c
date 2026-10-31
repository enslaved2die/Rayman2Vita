/* TA interpreter tests. Build: see Makefile in this directory (make test / make test-real). */
#include "../ta.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
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
    /* tsp: src=4(src-a) dst=5(inv-src-a), use alpha, fog none(2), clamp, 64x32 texture (U=3->64, V=2->32), modulate-alpha(3) */
    uint32_t tsp = (4u << 29) | (5u << 26) | (2u << 22) | (1u << 21) | (1u << 20) | (3u << 6) | (2u << 3) | 3u;
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

int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    test_game_strip_via_sq(); test_flat_and_untextured_float(); test_float_textured_64B_and_uv16();
    test_sprite_and_userclip(); test_intensity_and_edge();
#ifdef TA_REAL
    test_real_compiler(argc > 1 ? argv[1] : "../../../../assets/dc/1ST_READ.BIN");
#endif
    printf(fails ? "TA TESTS FAILED: %d\n" : "TA tests passed\n", fails);
    return fails != 0;
}
