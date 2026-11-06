/* test_hud: asset-free unit tests of cpa_hud on a synthetic guest RAM image (the pool layouts documented in cpa_hud.h). The numbers in the expectations are the ones measured on the oracle
 * (hud_compare / re_analysis/dc/notes_hud.md): e.g. the ray icon sprite {2, 4.3, 11, 15.225}% alpha 200 -> x 12.8..70.4, y 20.64..73.08, ARGB c8ffffff; the "THE PIRANHAS" glyph pitch 18.56 px.
 *   make -f hud.mk test-hud */
#include "../../src/cpa/cpa_hud.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int fails, checks;
#define CHECK(c, ...) do { checks++; if (!(c)) { fails++; printf("FAIL line %d: ", __LINE__); printf(__VA_ARGS__); printf("\n"); } } while (0)
#define BASE 0x8C000000u
static uint8_t *ram; static CpaImage im;
static void w32(uint32_t va, uint32_t v) { memcpy(ram + (va - BASE), &v, 4); }
static void wf(uint32_t va, float f) { memcpy(ram + (va - BASE), &f, 4); }
static void w16(uint32_t va, uint16_t v) { memcpy(ram + (va - BASE), &v, 2); }
static void reset(void) { memset(ram, 0, 16u << 20); strcpy((char *)ram + (0x8C123B09u - BASE), "Test_10"); }
/* a VisualMaterial at `vm` whose texture struct is `tex` with surface descriptor `desc` (flags, w, h) */
static void mk_vm(uint32_t vm, uint32_t tex, uint32_t desc, uint32_t flags, uint32_t w, uint32_t h) { w32(vm + 0x4C, tex); w32(tex, desc); w32(tex + 4, flags | 0x80000000u); w32(desc + 12, w); w32(desc + 16, h); }
static void sprite(int i, float x1, float y1, float x2, float y2, uint32_t vm, int cnt) { uint32_t s = 0x8C130C74u + 24u * (uint32_t)i; wf(s, x1); wf(s + 4, y1); wf(s + 8, x2); wf(s + 12, y2); w32(s + 16, vm); w32(s + 20, (uint32_t)cnt); }
static void gauge(int i, float x1, float y1, float x2, float y2, uint32_t vmRest, uint32_t vmBar, float fill, int val) {
    uint32_t g = 0x8C130FBCu + 32u * (uint32_t)i; wf(g, x1); wf(g + 4, y1); wf(g + 8, x2); wf(g + 12, y2); w32(g + 16, vmRest); w32(g + 20, vmBar); wf(g + 24, fill); w32(g + 28, (uint32_t)val);
}
static int near(float a, float b, float t) { return fabsf(a - b) <= t; }

/* font table of the guest: [0x8C0BDEA4] -> A, [A] -> B, [B+16] -> P, P: {arr, ., count u16 @+8}, arr[idx*16+4] -> entry -> object chain -> VM. Every index 0..700 gets its own VM (glyph idx i has tex 0x8CB00000 + 0x100 i). */
static void mk_font(void) {
    uint32_t A = 0x8CA00000u, B = 0x8CA00010u, P = 0x8CA00100u, ARR = 0x8CA10000u;
    w32(0x8C0BDEA4u, A); w32(A, B); w32(B + 16, P); w32(P, ARR); w16(P + 8, 700);
    for (uint32_t i = 0; i <= 700; i++) {
        uint32_t e = 0x8CA20000u + i * 0x100u, o = e + 0x10, r4 = e + 0x20, q = e + 0x70, t = 0x8CA60000u + i * 0x10u, u = t + 4, vm = 0x8CB00000u + i * 0x100u;
        w32(ARR + i * 16 + 4, e); w32(e, o); w32(o + 4, r4); w16(r4 + 0x2E, 1); w32(r4 + 16, q); w16(q, 1); w32(r4 + 20, t); w32(t, u); w32(u, vm + 0x80); w32(vm + 0x80, vm);
        mk_vm(vm, 0x8CC00000u + i * 0x40u, 0x8CC10000u + i * 0x20u, 0x08, 64, 64);
    }
}
static uint32_t glyph_vm_of(uint32_t idx) { return 0x8CB00000u + idx * 0x100u; }
static void textB(int i, const char *s, float x, float y, float size, int alpha) {
    uint32_t sl = 0x8C13191Cu + 0x1Cu * (uint32_t)i, sp = 0x8CD00000u + 0x100u * (uint32_t)i;
    strcpy((char *)ram + (sp - BASE), s); w32(sl, sp); wf(sl + 4, x); wf(sl + 8, y); wf(sl + 12, size); ram[sl + 0x10 - BASE] = (uint8_t)alpha;
}
static void textA(int i, const char *s, float x, float y, float size, int alpha, int flags13) {
    uint32_t sl = 0x8C131E94u + 0x41Cu * (uint32_t)i; strcpy((char *)ram + (sl - BASE), s); w32(sl + 0x400, 0x8CE00000u); wf(sl + 0x404, x); wf(sl + 0x408, y); wf(sl + 0x40C, size);
    ram[sl + 0x410 - BASE] = (uint8_t)alpha; ram[sl + 0x413 - BASE] = (uint8_t)flags13;
}

int main(void) {
    ram = (uint8_t *)calloc(1, 16u << 20); cpa_image_init(&im); cpa_image_add(&im, ram, 16u << 20, BASE);
    CpaHudFrame F;

    /* 1. empty RAM -> no HUD, build succeeds */
    reset(); CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 0, "empty pools give no quads"); cpa_hud_frame_free(&F);

    /* 2. sprite pool: oracle numbers (Bast_10 slot 0), alpha, gate, anchor, uv rule for the 64x128 additive portrait */
    reset(); mk_vm(0x8CDD6828u, 0x8CD28830u, 0x8CF036B4u, 0x08, 128, 128); mk_vm(0x8CDD6258u, 0x8CCFB5C8u, 0x8CF037D4u, 0x20, 64, 128);
    sprite(0, 2.0f, 4.3f, 11.0f, 15.225f, 0x8CDD6828u, 200); sprite(2, 86.0f, 3.35f, 96.0f, 14.75f, 0x8CDD6258u, 255); sprite(20, 40.0f, 40.0f, 50.0f, 50.0f, 0x8CDD6828u, 255);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 3, "3 sprites, got %u", F.n);
    if (F.n == 3) {
        const CpaHudQuad *q = &F.q[0];
        CHECK(near(q->x[0], 12.8f, 1e-3f) && near(q->x[3], 70.4f, 1e-3f) && near(q->y[0], 20.64f, 1e-3f) && near(q->y[3], 73.08f, 1e-3f), "ray icon box %.3f..%.3f %.3f..%.3f", q->x[0], q->x[3], q->y[0], q->y[3]);
        CHECK(q->argb[0] == 0xC8FFFFFFu && q->argb[3] == 0xC8FFFFFFu && q->z == 512.0f && q->texVa == 0x8CD28830u && q->anchor == CPA_HUD_LEFT, "colour %08x z %g tex %x anchor %u", q->argb[0], q->z, q->texVa, q->anchor);
        CHECK(q->v[0] == 1.0f && q->v[1] == 0.0f && q->u[0] == 0.0f && q->u[2] == 1.0f && q->x[1] == q->x[0] && q->y[2] == q->y[0], "vertex order A(x1,y1) B(x1,y2) C(x2,y1) D(x2,y2)");
        CHECK(F.q[1].u[2] == 2.0f && F.q[1].anchor == CPA_HUD_RIGHT && F.q[2].anchor == CPA_HUD_CENTER, "portrait u 0..2 (INFERRED rule) and anchors: u1 %g right %u centre %u", F.q[1].u[2], F.q[1].anchor, F.q[2].anchor);
    }
    cpa_hud_frame_free(&F);
    ram[0x12473E] = 1;   /* gate flag set: only slots 15..24 */
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 1 && F.q[0].slot == 20, "gate flag keeps only slot 20 (got %u quads)", F.n); cpa_hud_frame_free(&F);

    /* 3. gauges: Bast_10 health (fill 66.667 % -> bar 12..21.2, rest 21.2..25.8), full gauge has no rest quad, value 0 not drawn, vertical branch */
    reset(); gauge(0, 12.0f, 8.575f, 25.8f, 11.425f, 0x8CDD9520u, 0x8CDD96A0u, 66.6667f, 200);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 2 && F.q[0].kind == CPA_HUD_GAUGE_BAR && F.q[1].kind == CPA_HUD_GAUGE_REST, "gauge gives bar then rest (%u quads)", F.n);
    if (F.n == 2) {
        CHECK(near(F.q[0].x[3], 21.2f * 6.4f, 0.01f) && near(F.q[1].x[0], 135.68f, 0.01f) && near(F.q[1].x[3], 165.12f, 0.01f), "bar end %.3f rest %.3f..%.3f", F.q[0].x[3], F.q[1].x[0], F.q[1].x[3]);
        CHECK(F.q[0].vm == 0x8CDD96A0u && F.q[1].vm == 0x8CDD9520u && F.q[0].argb[0] == 0xC8FFFFFFu, "bar uses VM+0x14, rest VM+0x10");
    }
    cpa_hud_frame_free(&F);
    reset(); gauge(1, 12.0f, 12.375f, 62.6f, 15.225f, 0x8CDD9820u, 0x8CDD99A0u, 100.0f, 255); gauge(2, 10.0f, 48.0f, 11.5f, 55.125f, 0x8CDD9520u, 0x8CDD7BD8u, 50.0f, 0); gauge(3, 10.0f, 48.0f, 11.5f, 56.0f, 0x8CDD9520u, 0x8CDD7BD8u, 50.0f, 255);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 3 && F.q[0].kind == CPA_HUD_GAUGE_BAR && F.st.gaugeVertical == 1, "full gauge: bar only; value 0 skipped; vertical gauge counted (%u quads, %u vertical)", F.n, F.st.gaugeVertical);
    if (F.n == 3) CHECK(near(F.q[1].y[1], 56.0f * 4.8f, 0.01f) && near(F.q[1].y[0], (56.0f - 0.5f * 8.0f) * 4.8f, 0.01f) && F.q[2].kind == CPA_HUD_GAUGE_REST, "vertical bar grows from y2: top %.3f bottom %.3f", F.q[1].y[0], F.q[1].y[1]);
    cpa_hud_frame_free(&F);

    /* 4. text: metrics (size 18 -> pitch 33 W 38 H 49 per mille; size 16 -> 29 34 43), glyph pitch, space, colours, markup */
    reset(); mk_font();
    textB(15, "0;50", 690.0f, 70.0f, 18.0f, 255);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 4, "text B '0;50' gives 4 glyph quads (%u)", F.n);
    if (F.n == 4) {
        CHECK(near(F.q[0].x[0], 441.6f, 0.01f) && near(F.q[0].x[3], 441.6f + 3.8f * 6.4f, 0.01f) && near(F.q[1].x[0], 69.0f * 6.4f + 3.3f * 6.4f, 0.01f), "glyph boxes: x0 %.3f..%.3f next %.3f (oracle 441.6..465.92, 462.72)", F.q[0].x[0], F.q[0].x[3], F.q[1].x[0]);
        CHECK(near(F.q[0].y[0], 34.32f, 0.01f) && near(F.q[0].y[3], 57.84f, 0.01f), "glyph y %.3f..%.3f (oracle 34.32..57.84)", F.q[0].y[0], F.q[0].y[3]);
        CHECK(F.q[0].vm == glyph_vm_of((uint32_t)('0' - 0x20)) && F.q[1].vm == glyph_vm_of((uint32_t)(';' - 0x20)), "glyph index = char - 0x20");
        CHECK(F.q[0].argb[0] == 0xFFFFFFFFu && F.q[0].argb[1] == 0xFF6EBEFFu && F.q[0].gradient == 1, "digit colours: top white, bottom 6EBEFF (%08x %08x)", F.q[0].argb[0], F.q[0].argb[1]);
    }
    cpa_hud_frame_free(&F);
    reset(); mk_font(); textA(0, "/o400:the piranhas are/L:coming", 147.0f, 793.0f, 16.0f, 254, 0);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 14 + 6, "dialogue: 14 glyphs + 6 glyphs, markup invisible (%u)", F.n);
    if (F.n == 20) {
        CHECK(near(F.q[1].x[0] - F.q[0].x[0], 18.56f, 0.01f) && near(F.q[0].x[3] - F.q[0].x[0], 21.76f, 0.01f) && near(F.q[0].y[3] - F.q[0].y[0], 20.64f, 0.01f), "dialogue glyph pitch %.3f width %.3f height %.3f (oracle 18.56 / 21.76 / 20.64)", F.q[1].x[0] - F.q[0].x[0], F.q[0].x[3] - F.q[0].x[0], F.q[0].y[3] - F.q[0].y[0]);
        CHECK(near(F.q[3].x[0] - F.q[2].x[0], 18.56f + 10.88f, 0.01f), "space advances 10.88 px more (got %.3f)", F.q[3].x[0] - F.q[2].x[0]);
        CHECK(near(F.q[14].y[0] - F.q[0].y[0], 0.1f * 4.8f * (float)(int)((float)(int)(16.0f * 3.15f) * 0.95f), 0.01f) && near(F.q[14].x[0], 94.08f, 0.01f), "/L: newline back to x %.3f, y +%.2f", F.q[14].x[0], F.q[14].y[0] - F.q[0].y[0]);
        CHECK(F.q[0].argb[1] == 0xFEFFFF78u, "/o400: colour FFFF78 with alpha 254 (%08x)", F.q[0].argb[1]);
    }
    cpa_hud_frame_free(&F);
    reset(); mk_font(); textA(0, "/e201:/e501:/p2100:", 68.0f, 821.0f, 40.0f, 255, 0);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 0, "unknown /x...: script tags in pool A draw nothing (%u quads)", F.n); cpa_hud_frame_free(&F);
    reset(); mk_font(); textA(0, "hi", 100.0f, 100.0f, 16.0f, 0, 0); textA(1, "hi", 100.0f, 100.0f, 16.0f, 255, 0);
    CHECK(cpa_hud_build(&F, &im, NULL) && F.n == 2 && F.q[0].slot == 1, "alpha 0 slot is not drawn"); cpa_hud_frame_free(&F);

    /* 5. pass rule and re-anchor */
    int tr, ad;
    cpa_hud_pass(0x00, 255, &tr, &ad); CHECK(!tr && !ad, "flags 0 alpha 1: opaque");
    cpa_hud_pass(0x00, 200, &tr, &ad); CHECK(tr && !ad, "flags 0 alpha 200/255: translucent (the 'exception' gauges)");
    cpa_hud_pass(0x08, 255, &tr, &ad); CHECK(tr && !ad, "flags 8: alpha blend");
    cpa_hud_pass(0x20, 255, &tr, &ad); CHECK(tr && ad, "flags 0x20: additive");
    CHECK(near(cpa_hud_reanchor_x(100.0f, CPA_HUD_LEFT, 16.0f / 9.0f), 100.0f, 1e-4f) && near(cpa_hud_reanchor_x(100.0f, CPA_HUD_RIGHT, 16.0f / 9.0f), 100.0f + 213.333f, 0.01f) && near(cpa_hud_reanchor_x(100.0f, CPA_HUD_CENTER, 4.0f / 3.0f), 100.0f, 1e-4f), "re-anchor");

    printf("test_hud: %d checks, %d failures\n", checks, fails);
    free(ram); return fails ? 1 : 0;
}
