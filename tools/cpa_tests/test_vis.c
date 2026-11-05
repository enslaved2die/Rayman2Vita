/* Host test for src/cpa/cpa_vis (+ the cull option of cpa_drawlist).
 *   test_vis [DCDATA_DIR]       default: $CPA_DC_DATA, ../../assets/dc/DCDATA
 * Part 1 (always runs): synthetic level image built in memory (sectors, neighbour lists, IPOs with boxes / flags / matrices / one-triangle geometry) with hand-computed expectations for the frustum planes, the box test,
 *   the sector lookup, the neighbour rule, the SO flag rules, the IPO set, the triangle->IPO map, the cull masks and the culled draw list.
 * Part 2 (needs DCDATA): LEARN_10 consistency checks of the triangle->IPO map and the culled draw list (the predictor vs the game is checked by tools/cpa_tests/vis_predict.c, vis.mk vis-eval: 1433/1433 IPOs).
 * Nothing is adjusted to make numbers pass; the exit code is non-zero if any check fails. */
#include "../../src/cpa/cpa_vis.h"
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_drawlist.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_pass, g_skip;
static void check(const char *what, int cond) { printf("  [%s] %s\n", cond ? "PASS" : "FAIL", what); cond ? g_pass++ : g_fail++; }
static void checku(const char *what, unsigned long expect, unsigned long got) { int ok = expect == got; printf("  [%s] %-60s expected %lu, got %lu\n", ok ? "PASS" : "FAIL", what, expect, got); ok ? g_pass++ : g_fail++; }
static void checkf(const char *what, double expect, double got, double tol) { int ok = fabs(expect - got) <= tol; printf("  [%s] %-60s expected %.6f, got %.6f (tol %g)\n", ok ? "PASS" : "FAIL", what, expect, got, tol); ok ? g_pass++ : g_fail++; }

/* ---------------- synthetic image ---------------- */
#define BASE 0x8C100000u
#define IMG_N 0x8000u
static uint8_t g_buf[IMG_N];
static uint32_t g_top = 0x200;                          /* bump pointer (offset); 0..0x200 = header words */
static uint32_t VA(uint32_t off) { return BASE + off; }
static void put32(uint32_t off, uint32_t v) { memcpy(g_buf + off, &v, 4); }
static void putf(uint32_t off, float v) { memcpy(g_buf + off, &v, 4); }
static uint32_t alloc(uint32_t n) { uint32_t o = g_top; g_top += (n + 15u) & ~15u; return o; }
static uint32_t off_of(uint32_t va) { return va - BASE; }

typedef struct { float mn[3], mx[3]; } Box;
static uint32_t mk_box(const Box *b) { uint32_t o = alloc(24); for (int i = 0; i < 3; i++) { putf(o + 4u * i, b->mn[i]); putf(o + 12u + 4u * i, b->mx[i]); } return VA(o); }
static uint32_t mk_matrix(int type, const float t[3]) {       /* 0x68 bytes: type @+0, 16 floats @+0x28 (identity + translation row) */
    uint32_t o = alloc(0x70); put32(o, (uint32_t)type);
    static const float id[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
    for (int i = 0; i < 16; i++) putf(o + 0x28 + 4u * i, id[i]);
    if (t) for (int i = 0; i < 3; i++) putf(o + 0x28 + 48u + 4u * i, t[i]);
    return VA(o);
}
/* SuperObject 0x48 bytes: +0 type +4 data +8 first +C last +10 count +14 next +18 prev +1C parent +20 local +24 global +2C f2c +30 f30 +34 bv */
static uint32_t mk_so(uint32_t type, uint32_t data, uint32_t f2c, uint32_t f30, uint32_t bv, uint32_t glob) {
    uint32_t o = alloc(0x48); put32(o, type); put32(o + 4, data); put32(o + 0x24, glob); put32(o + 0x2C, f2c); put32(o + 0x30, f30); put32(o + 0x34, bv); return VA(o);
}
static void link_child(uint32_t parent, uint32_t child) {
    uint32_t po = off_of(parent), co = off_of(child), last; memcpy(&last, g_buf + po + 0xC, 4);
    put32(co + 0x1C, parent);
    if (!last) put32(po + 8, child); else { put32(off_of(last) + 0x14, child); put32(co + 0x18, last); }
    put32(po + 0xC, child); uint32_t n; memcpy(&n, g_buf + po + 0x10, 4); put32(po + 0x10, n + 1);
}
/* sector data (0x80 bytes): +0x20 neighbour array, +0x24 count, +0x48 min, +0x54 max, +0x60 far, +0x64 group byte, +0x67 priority */
static uint32_t mk_sector(const Box *b, uint8_t grp, int8_t prio) {
    uint32_t d = alloc(0x80);
    for (int i = 0; i < 3; i++) { putf(d + 0x48 + 4u * i, b->mn[i]); putf(d + 0x54 + 4u * i, b->mx[i]); }
    g_buf[d + 0x64] = grp; g_buf[d + 0x67] = (uint8_t)prio;
    return mk_so(CPA_SO_SECTOR, VA(d), 0xFFFFFFFFu, 0, mk_box(b), 0);
}
static void set_neighbours(uint32_t sector, const uint32_t *ns, const uint8_t *kinds, uint32_t n) {
    uint32_t d = off_of(sector); uint32_t data; memcpy(&data, g_buf + d + 4, 4); uint32_t o = alloc(8 * (n ? n : 1)), dof = off_of(data);
    for (uint32_t i = 0; i < n; i++) { g_buf[o + 8 * i + 2] = kinds[i]; put32(o + 8 * i + 4, ns[i]); }
    put32(dof + 0x20, VA(o)); put32(dof + 0x24, n);
}
/* IPO with one-triangle-per-call geometry: vertex table of 3 floats*3 at pv, count 3 at geo+0x2C. bv = box (stored local, world = box + translation of the global matrix if its type != 1). */
static uint32_t mk_ipo(const Box *b, const float v[9], uint32_t f2c, uint32_t f30, uint32_t glob) {
    uint32_t pv = alloc(36); for (int i = 0; i < 9; i++) putf(pv + 4u * i, v[i]);
    uint32_t geo = alloc(0x40); put32(geo, VA(pv)); put32(geo + 0x2C, 3);
    uint32_t vs = alloc(16); put32(vs + 4, VA(geo));
    uint32_t po = alloc(16); put32(po, VA(vs));
    uint32_t data = alloc(16); put32(data, VA(po));
    return mk_so(CPA_SO_IPO, VA(data), f2c, f30, mk_box(b), glob);
}
static int in_list(const uint32_t *a, uint32_t n, uint32_t v) { for (uint32_t i = 0; i < n; i++) if (a[i] == v) return 1; return 0; }

typedef struct { uint32_t A, B, C, D, father, a1, a2, a2c, a3, a4, a4c, a5, b1, c1; float v_a1[9], v_a2c[9], v_a3[9], v_b1[9], v_c1[9]; } Syn;
static Syn S;

static void tri9(float o[9], float x, float y, float z) { float t[9] = { x, y, z, x + 1, y, z, x, y + 1, z }; memcpy(o, t, sizeof t); }

static void build_synthetic(CpaImage *im) {
    memset(g_buf, 0, sizeof g_buf); g_top = 0x200;
    const Box bA = { { 0, -50, -50 }, { 10, 50, 50 } }, bB = { { 10, -50, -50 }, { 20, 50, 50 } }, bC = { { 20, -50, -50 }, { 30, 50, 50 } }, bD = { { 100, -50, -50 }, { 110, 50, 50 } };
    S.father = mk_so(CPA_SO_WORLD, 0, 0xFFFFFFFFu, 0, 0, 0);
    S.A = mk_sector(&bA, 0, 0); S.B = mk_sector(&bB, 0, 0); S.C = mk_sector(&bC, 0, 0); S.D = mk_sector(&bD, 0, 0);
    link_child(S.father, S.A); link_child(S.father, S.B); link_child(S.father, S.C); link_child(S.father, S.D);
    { uint32_t n[2] = { S.B, S.D }; uint8_t k[2] = { 0, 2 }; set_neighbours(S.A, n, k, 2); }      /* A -> B (kind 0), D (kind 2: skipped) */
    { uint32_t n[2] = { S.A, S.C }; uint8_t k[2] = { 1, 0 }; set_neighbours(S.B, n, k, 2); }      /* B -> A, C : A -> B -> C is NOT transitive */
    { uint32_t n[1] = { S.B }; uint8_t k[1] = { 0 }; set_neighbours(S.C, n, k, 1); }
    /* IPOs (boxes in world space for matrix-less IPOs). Camera in the tests: pos (-5,0,0), looking +X, up +Z, hfov 1.2, ratio 0.75. */
    Box b1 = { { 2, -1, -1 }, { 4, 1, 1 } };      tri9(S.v_a1, 3, 0, 0);   S.a1 = mk_ipo(&b1, S.v_a1, 0xFFFFFFFFu, 0, 0);
    Box b2 = { { 6, -1, -1 }, { 8, 1, 1 } };      { float v[9]; tri9(v, 7, 0, 0.5f); S.a2 =mk_ipo(&b2, v, 0xFFFFFFFFu, 2, 0); }       /* flag +0x30 & 2: never drawn, still traversed */
    /* a2c: child of a2 whose box is stored LOCAL at y=40 (outside the frustum) and moved into view by its type-2 global matrix translation (7,-40,0) */
    { Box bl = { { -1, 39, -1 }, { 1, 41, 1 } }; float t[3] = { 7, -40, 0 }; uint32_t gm = mk_matrix(2, t); float v[9]; tri9(v, 0, 40, 0); S.a2c = mk_ipo(&bl, v, 0xFFFFFFFFu, 0, gm);
      /* expected world positions of a2c's triangle = the loader's expression v*M + T */
      for (int j = 0; j < 3; j++) { float p[3]; for (int c = 0; c < 3; c++) p[c] = v[3*j] * (c == 0) + v[3*j+1] * (c == 1) + v[3*j+2] * (c == 2) + t[c]; memcpy(&S.v_a2c[3*j], p, 12); } }
    Box b3 = { { 3, 40, -1 }, { 5, 45, 1 } };     tri9(S.v_a3, 4, 41, 0);  S.a3 = mk_ipo(&b3, S.v_a3, 0xFFFFFFFFu, 0, 0);           /* outside the frustum */
    { Box b4 = { { 3, 40, -1 }, { 5, 45, 1 } }; float v[9]; tri9(v, 4, 42, 0); S.a4 = mk_ipo(&b4, v, 0xFFFFFFFFu, 0x200, 0); }     /* rejected but flag 0x200: traversed */
    { Box b4c = { { 3, -1, -1 }, { 5, 1, 1 } }; float v[9]; tri9(v, 4, 0, 0.5f); S.a4c = mk_ipo(&b4c, v, 0xFFFFFFFFu, 0, 0); }
    { Box b5 = { { 3, -1, -1 }, { 5, 1, 1 } }; float v[9]; tri9(v, 4, 0.2f, 0.7f); S.a5 = mk_ipo(&b5, v, 0x00400000u, 0, 0); }       /* f2c lacks bit 0x800000: not drawn */
    Box bb1 = { { 12, -1, -1 }, { 14, 1, 1 } };   tri9(S.v_b1, 13, 0, 0);  S.b1 = mk_ipo(&bb1, S.v_b1, 0xFFFFFFFFu, 0, 0);
    Box bc1 = { { 22, -1, -1 }, { 24, 1, 1 } };   tri9(S.v_c1, 23, 0, 0);  S.c1 = mk_ipo(&bc1, S.v_c1, 0xFFFFFFFFu, 0, 0);
    link_child(S.A, S.a1); link_child(S.A, S.a2); link_child(S.a2, S.a2c); link_child(S.A, S.a3); link_child(S.A, S.a4); link_child(S.a4, S.a4c); link_child(S.A, S.a5);
    link_child(S.B, S.b1); link_child(S.C, S.c1);
    put32(13 * 4, S.father); put32(16 * 4, S.father);      /* level header words 13 (root) and 16 (father sector) */
    cpa_image_init(im); cpa_image_add(im, g_buf, IMG_N, BASE);
}

static void synth_camera(CpaCamera *cam) { float pos[3] = { -5, 0, 0 }, up[3] = { 0, 0, 1 }, fwd[3] = { 1, 0, 0 }; cpa_camera_from_rows(cam, pos, up, fwd, 1.2f, 0.75f); }

static void test_frustum(void) {
    printf("frustum (synthetic camera pos (-5,0,0), fwd +X, up +Z, hfov 1.2, vertical half angle 0.45):\n");
    CpaCamera cam; synth_camera(&cam); CpaVisFrustum f; cpa_vis_frustum_from_camera(&f, &cam, 0.6f, 0.45f, 0.45f);
    /* left row L = up x fwd = +Y; left plane world normal = -vx*L + vz*F with (vx,vz) = (-cos h, -sin h) -> (-sin h, +cos h, 0) */
    checkf("left plane normal x = -sin(0.6)", -sin(0.6), f.n[0][0], 1e-6); checkf("left plane normal y = +cos(0.6)", cos(0.6), f.n[0][1], 1e-6);
    checkf("right plane normal y = -cos(0.6)", -cos(0.6), f.n[1][1], 1e-6);
    checkf("up plane normal z = +cos(0.45)", cos(0.45), f.n[2][2], 1e-6); checkf("up plane normal x = -sin(0.45)", -sin(0.45), f.n[2][0], 1e-6);
    checkf("down plane normal z = -cos(0.45)", -cos(0.45), f.n[3][2], 1e-6);
    checkf("near plane normal = -F", -1.0, f.n[4][0], 1e-6); checkf("near plane d = -0.25", -0.25, f.d[4], 1e-6);
    /* the numbers stored in the game's viewport struct for hfov 1.2 / ratio 0.75 (Learn_10 ram_2600): (-0.8253, 0, -0.5646), (0.8253, 0, -0.5646), (0, 0.9004, -0.435), (0, -0.9004, -0.435) */
    { float side[4][4] = { { -0.8253f, 0, -0.5646f, 0 }, { 0.8253f, 0, -0.5646f, 0 }, { 0, 0.9004f, -0.435f, 0 }, { 0, -0.9004f, -0.435f, 0 } }, up[3] = { 0, 0, 1 }, fw[3] = { 1, 0, 0 }; CpaVisFrustum g;
      cpa_vis_frustum_from_planes(&g, cam.pos, up, fw, side, 0.25f);
      double md = 0; for (int k = 0; k < 4; k++) for (int i = 0; i < 3; i++) md = fmax(md, fabs(g.n[k][i] - f.n[k][i]));
      checkf("planes derived from the camera == the game's stored numbers (max |dn|)", 0.0, md, 2e-4); }
    struct { float mn[3], mx[3]; int exp; const char *what; } T[] = {
        { { 5, -0.1f, -0.1f },   { 5.1f, 0.1f, 0.1f },  1, "point ahead on the axis" },
        { { 5, 9.9f, -0.1f },    { 5.1f, 10.1f, 0.1f }, 0, "y = 10 at depth 10: 45 deg > 0.6 rad horizontal" },
        { { 5, 5.9f, -0.1f },    { 5.1f, 6.1f, 0.1f },  1, "y = 6 at depth 10: 0.54 rad < 0.6" },
        { { 5, -0.1f, 4.9f },    { 5.1f, 0.1f, 5.1f },  0, "z = 5 at depth 10: 0.4636 rad > 0.45 vertical" },
        { { 5, -0.1f, 4.4f },    { 5.1f, 0.1f, 4.6f },  1, "z = 4.5 at depth 10: 0.4228 rad < 0.45" },
        { { -9, -1, -1 },        { -6, 1, 1 },          0, "entirely behind the camera" },
        { { -4.9f, -0.01f, -0.01f }, { -4.8f, 0.01f, 0.01f }, 0, "0.1 ahead: closer than the near plane 0.25" },
        { { -5.5f, -1, -1 },     { -4, 1, 1 },          1, "straddles the near plane" },
        { { 5, 4, -1 },          { 5, 30, 1 },          1, "box crossing the left plane (one corner inside)" },
        { { 5, 11, -1 },         { 6, 30, 1 },          0, "box completely outside the left plane" },
    };
    for (size_t i = 0; i < sizeof T / sizeof *T; i++) check(T[i].what, cpa_vis_box_test(&f, T[i].mn, T[i].mx) == T[i].exp);
}

static void test_find_sector(const CpaImage *im) {
    printf("sector lookup (lifted f_8c09458c rule):\n");
    float p5[3] = { 5, 0, 0 }, p10[3] = { 10, 0, 0 }, p25[3] = { 25, 0, 0 }, pfar[3] = { 500, 0, 0 };
    check("level father read from header word 16", cpa_vis_level_father(im) == S.father);
    check("point in A only -> A", cpa_vis_find_sector(im, S.father, p5) == S.A);
    check("point in C -> C", cpa_vis_find_sector(im, S.father, p25) == S.C);
    check("boundary point in A and B, equal priority and distance -> first child (A)", cpa_vis_find_sector(im, S.father, p10) == S.A);
    check("outside every sector -> last child of the father (D)", cpa_vis_find_sector(im, S.father, pfar) == S.D);
    { uint32_t dB = 0; memcpy(&dB, g_buf + off_of(S.B) + 4, 4); g_buf[off_of(dB) + 0x67] = 5;
      check("boundary point, B has priority 5 -> B", cpa_vis_find_sector(im, S.father, p10) == S.B);
      g_buf[off_of(dB) + 0x67] = 0; }
    { uint32_t dA = 0; memcpy(&dA, g_buf + off_of(S.A) + 4, 4); g_buf[off_of(dA) + 0x64] = 1;
      check("group 1 (byte 0x64 != 0) loses to group 0: boundary point with A in group 1 -> B", cpa_vis_find_sector(im, S.father, p10) == S.B);
      check("group 1 wins when it is the only group containing the point", cpa_vis_find_sector(im, S.father, p5) == S.A);
      g_buf[off_of(dA) + 0x64] = 0; }
    { uint32_t dB = 0, dA = 0; memcpy(&dB, g_buf + off_of(S.B) + 4, 4); memcpy(&dA, g_buf + off_of(S.A) + 4, 4);
      putf(off_of(dA) + 0x54, 12.0f); putf(off_of(dB) + 0x48, 8.0f);          /* overlap x 8..12; centres A 6, B 14 */
      float p9[3] = { 9, 0, 0 }, p11[3] = { 11, 0, 0 };
      check("overlap, equal priority: nearer box centre wins (x=9 -> A)", cpa_vis_find_sector(im, S.father, p9) == S.A);
      check("overlap, equal priority: nearer box centre wins (x=11 -> B)", cpa_vis_find_sector(im, S.father, p11) == S.B);
      putf(off_of(dA) + 0x54, 10.0f); putf(off_of(dB) + 0x48, 10.0f); }
}

static void expect_ipos(const char *what, const CpaVis *v, const uint32_t *ex, uint32_t nex) {
    int ok = v->nIpos == nex; for (uint32_t i = 0; i < nex; i++) ok &= cpa_vis_ipo_visible(v, ex[i]);
    printf("  [%s] %s (got %u IPOs)\n", ok ? "PASS" : "FAIL", what, v->nIpos); ok ? g_pass++ : g_fail++;
}

static void test_predict(const CpaImage *im) {
    printf("predictor on the synthetic level (camera (-5,0,0) -> +X):\n");
    CpaCamera cam; synth_camera(&cam); CpaVisFrustum fr; cpa_vis_frustum_from_camera(&fr, &cam, 0.6f, 0.45f, 0.45f);
    CpaVisInput in; memset(&in, 0, sizeof in); in.sector = S.A; in.frustum = &fr;
    CpaVisOpts o; cpa_vis_opts_default(&o); CpaVis v;
    check("predict (sector A) succeeds", cpa_vis_predict(&v, im, &in, &o));
    check("considered sectors = {A, B}: neighbour of a neighbour (C) and kind-2 neighbour (D) excluded", v.nSectors == 2 && v.sectors[0] == S.A && v.sectors[1] == S.B);
    { uint32_t ex[] = { S.a1, S.a2c, S.a4c, S.b1 };
      expect_ipos("IPO set = {a1, a2c (type-2 matrix translation moves it into view), a4c (parent a4 traversed via flag 0x200), b1}", &v, ex, 4); }
    check("a2 (flag 0x30&2) not drawn although accepted", !cpa_vis_ipo_visible(&v, S.a2));
    check("a3 (box outside the frustum) not drawn", !cpa_vis_ipo_visible(&v, S.a3));
    check("a4 (rejected, flag 0x200) not drawn itself", !cpa_vis_ipo_visible(&v, S.a4));
    check("a5 (f2c without 0x800000) not drawn", !cpa_vis_ipo_visible(&v, S.a5));
    check("c1 (sector C is a neighbour of a neighbour) not drawn", !cpa_vis_ipo_visible(&v, S.c1));
    check("sectors A and B are in the drawn list (f_8c0ab4c6 is also called for sectors)", in_list(v.drawn, v.nDrawn, S.A) && in_list(v.drawn, v.nDrawn, S.B));
    check("a2, a4 are in the visited list (traversal continues into their children)", in_list(v.visited, v.nVisited, S.a2) && in_list(v.visited, v.nVisited, S.a4));
    cpa_vis_free(&v);

    o.allowKind2 = 1; cpa_vis_predict(&v, im, &in, &o);
    check("allowKind2: D joins the sector list", v.nSectors == 3 && v.sectors[2] == S.D); cpa_vis_free(&v); o.allowKind2 = 0;
    o.ignoreNeighbours = 1; cpa_vis_predict(&v, im, &in, &o);
    { uint32_t ex[] = { S.a1, S.a2c, S.a4c }; expect_ipos("ignoreNeighbours: only sector A's IPOs", &v, ex, 3); } cpa_vis_free(&v); o.ignoreNeighbours = 0;
    o.ignoreFrustum = 1; cpa_vis_predict(&v, im, &in, &o);
    check("ignoreFrustum: a3 (outside the frustum) is drawn", cpa_vis_ipo_visible(&v, S.a3)); cpa_vis_free(&v); o.ignoreFrustum = 0;
    o.ignoreFlags = 1; cpa_vis_predict(&v, im, &in, &o);
    check("ignoreFlags: a2 is drawn, a5 is drawn (flags not applied), a4c still not reached through a4", cpa_vis_ipo_visible(&v, S.a2) && cpa_vis_ipo_visible(&v, S.a5) && !cpa_vis_ipo_visible(&v, S.a4c)); cpa_vis_free(&v); o.ignoreFlags = 0;
    o.mask = 0x00000000u; cpa_vis_predict(&v, im, &in, &o);
    checku("draw mask without bit 0x800000: nothing is drawn", 0, v.nDrawn); cpa_vis_free(&v); o.mask = 0xFFFFFFFFu;

    /* current sector from the player position instead of the sector pointer */
    CpaVisInput in2; memset(&in2, 0, sizeof in2); in2.hasPos = 1; in2.frustum = &fr; in2.pos[0] = 15; cpa_vis_predict(&v, im, &in2, &o);
    check("sector derived from position x=15 -> B; sector list {B, A, C}", v.sector == S.B && v.nSectors == 3 && v.sectors[1] == S.A && v.sectors[2] == S.C);
    check("with B as current sector, C's IPO c1 is considered but out of range of the frustum? (x=23 is in view) -> drawn", cpa_vis_ipo_visible(&v, S.c1)); cpa_vis_free(&v);
    check("no sector and no position -> failure", !cpa_vis_predict(&v, im, &(CpaVisInput){ .frustum = &fr }, &o));
    check("missing frustum -> failure unless ignoreFrustum", !cpa_vis_predict(&v, im, &(CpaVisInput){ .sector = S.A }, &o));
}

static void test_cull_and_drawlist(const CpaImage *im) {
    printf("triangle map, cull masks and culled draw list (synthetic scene: item0 = tris [a1, a3, b1, c1, a2c], item1 translucent overlayMode 1 = [a1], actor item):\n");
    CpaVisTriMap tm; check("trimap build", cpa_vis_trimap_build(&tm, im));
    float all[5 * 9]; memcpy(all, S.v_a1, 36); memcpy(all + 9, S.v_a3, 36); memcpy(all + 18, S.v_b1, 36); memcpy(all + 27, S.v_c1, 36); memcpy(all + 36, S.v_a2c, 36);
    float vt[9 + 9 + 9]; memcpy(vt, S.v_a1, 36); memcpy(vt + 9, all + 9, 0); /* placeholder to keep the arrays obviously initialised */
    { uint32_t ipo[4], sec[4]; uint32_t n = cpa_vis_trimap_owners(&tm, S.v_a1, ipo, sec, 4);
      check("owner of a1's triangle = {a1} in sector A", n == 1 && ipo[0] == S.a1 && sec[0] == S.A);
      n = cpa_vis_trimap_owners(&tm, S.v_a2c, ipo, sec, 4); check("owner of a2c's triangle (positions through the type-2 matrix) = {a2c}", n == 1 && ipo[0] == S.a2c);
      float bogus[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; checku("unknown triangle has no owner", 0, cpa_vis_trimap_owners(&tm, bogus, ipo, sec, 4)); }
    CpaScene sc; memset(&sc, 0, sizeof sc); sc.img = *im;
    uint32_t nv = 5 * 3 + 3 + 3;      /* item0 5 tris, item1 1 tri (a1 again), item2 actor 1 tri */
    sc.pos = calloc(nv * 3, 4); sc.uv = calloc(nv * 2, 4); sc.nVerts = nv;
    memcpy(sc.pos, all, sizeof all); memcpy(sc.pos + 45, S.v_a1, 36); { float actor[9] = { 50, 50, 50, 51, 50, 50, 50, 51, 50 }; memcpy(sc.pos + 54, actor, 36); }
    sc.items = calloc(3, sizeof *sc.items); sc.nItems = 3;
    sc.items[0].firstVert = 0; sc.items[0].vertCount = 15; sc.items[0].texVa = 0x1000; sc.items[0].alphaClass = CPA_ALPHA_OPAQUE;
    sc.items[1].firstVert = 15; sc.items[1].vertCount = 3; sc.items[1].texVa = 0x2000; sc.items[1].alphaClass = CPA_ALPHA_BLEND; sc.items[1].overlayMode = 1;
    sc.items[2].firstVert = 18; sc.items[2].vertCount = 3; sc.items[2].texVa = 0x3000; sc.items[2].isActor = 1;
    sc.nVerts = 21;
    sc.sprites = calloc(3, sizeof *sc.sprites); sc.nSprites = 3; sc.sprites[0].soVa = S.a1; sc.sprites[1].soVa = S.a3; sc.sprites[2].soVa = S.a3; sc.sprites[2].isActor = 1;

    CpaCamera cam; synth_camera(&cam); CpaVisFrustum fr; cpa_vis_frustum_from_camera(&fr, &cam, 0.6f, 0.45f, 0.45f);
    CpaVisInput in; memset(&in, 0, sizeof in); in.sector = S.A; in.frustum = &fr; CpaVis v; cpa_vis_predict(&v, im, &in, NULL);
    CpaVisCull c; check("cull build", cpa_vis_cull_build(&c, &v, &tm, &sc));
    check("keep a1, b1, a2c; cull a3, c1 (item0 tris 0..4 = 1,0,1,0,1)", c.tri[0] == 1 && c.tri[1] == 0 && c.tri[2] == 1 && c.tri[3] == 0 && c.tri[4] == 1);
    check("item1's triangle (a1) kept; actor triangle always kept", c.tri[5] == 1 && c.tri[6] == 1);
    checku("2 triangles culled", 2, c.nTriCulled); checku("0 triangles without owner", 0, c.nTriUnowned);
    check("sprite of a1 kept, sprite of a3 culled, actor sprite kept", c.sprite[0] == 1 && c.sprite[1] == 0 && c.sprite[2] == 1 && c.nSpriteCulled == 1);

    CpaDrawList d0, d1, d2; CpaDrawListOpts op; cpa_drawlist_opts_default(&op);
    check("no cull: build", cpa_drawlist_build(&d0, &sc, &op));
    checku("no cull: 1 batch for item0 + base and layer-2 for item1 = 3", 3, d0.nBatches);
    checku("no cull: 2 sprites (actor sprite excluded)", 2, d0.nSprites);
    { CpaVisCull keepAll; memset(&keepAll, 0, sizeof keepAll); uint8_t ones[8]; memset(ones, 1, sizeof ones); uint8_t sones[4] = { 1, 1, 1, 1 };
      keepAll.tri = ones; keepAll.nTri = 7; keepAll.sprite = sones; keepAll.nSprite = 3; op.cull = &keepAll;
      cpa_drawlist_build(&d1, &sc, &op);
      int same = d1.nBatches == d0.nBatches && d1.nSprites == d0.nSprites; for (uint32_t i = 0; same && i < d0.nBatches; i++) same = d0.batches[i].firstVert == d1.batches[i].firstVert && d0.batches[i].vertCount == d1.batches[i].vertCount && d0.batches[i].pass == d1.batches[i].pass && d0.batches[i].layer == d1.batches[i].layer;
      check("all-ones cull mask gives exactly the uncull list", same); }
    op.cull = &c; check("cull: build", cpa_drawlist_build(&d2, &sc, &op));
    /* item0 -> runs [tri0], [tri2], [tri4] = 3 batches (opaque); item1 -> 1 base (translucent) + 1 layer-2; total 5 */
    checku("culled list: item0 split into 3 runs + item1 base + layer 2 = 5 batches", 5, d2.nBatches);
    { uint32_t vsum = 0, nOp = d2.passStart[1] - d2.passStart[0]; for (uint32_t i = d2.passStart[0]; i < d2.passStart[1]; i++) vsum += d2.batches[i].vertCount;
      checku("opaque pass: 3 batches of 3 vertices", 3, nOp); checku("opaque pass vertices", 9, vsum);
      check("opaque batches start at triangles 0, 2, 4 (verts 0, 6, 12)", d2.batches[0].firstVert == 0 && d2.batches[1].firstVert == 6 && d2.batches[2].firstVert == 12); }
    checku("sprites: a1's and none of a3's", 1, d2.nSprites);
    cpa_drawlist_free(&d0); cpa_drawlist_free(&d1); cpa_drawlist_free(&d2);
    cpa_vis_cull_free(&c); cpa_vis_free(&v); cpa_vis_trimap_free(&tm); free(sc.pos); free(sc.uv); free(sc.items); free(sc.sprites);
    (void)vt;
}

/* ---------------- LEARN_10 ---------------- */
static void test_real(const char *dcdata) {
    printf("LEARN_10 (real level data):\n");
    char fixp[1100], lvlp[1100]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata); snprintf(lvlp, sizeof lvlp, "%s/LEARN_10/LEARN_10.DAT", dcdata);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN) || !cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { printf("  [SKIP] cannot load %s\n", lvlp); g_skip++; return; }
    CpaVisTriMap tm; check("trimap build", cpa_vis_trimap_build(&tm, &img));
    CpaVis v; CpaVisCull c;
    /* Learn_10 f1500 camera and player position region: camera of tools/cpa_tests/test_camera.c (the game keeps the player a few units ahead of it) */
    static const float POS[3] = { 51.6750488f, -86.741394f, -29.9791069f }, UP[3] = { -0.00538349664f, -0.145610765f, 0.989327312f }, FWD[3] = { -0.036552269f, -0.988651872f, -0.14571026f };
    CpaCamera cam; cpa_camera_from_rows(&cam, POS, UP, FWD, 1.2f, 0.75f); CpaVisFrustum fr; cpa_vis_frustum_from_camera(&fr, &cam, 0.6f, 0.45f, 0.45f);
    float pp[3] = { POS[0] + 8 * FWD[0], POS[1] + 8 * FWD[1], POS[2] - 2 }; CpaVisInput in; memset(&in, 0, sizeof in); in.hasPos = 1; memcpy(in.pos, pp, 12); in.frustum = &fr;
    check("predict from position", cpa_vis_predict(&v, &img, &in, NULL));
    printf("  info: sector %08x, %u sectors considered, %u SOs drawn, %u IPOs of %u in the level\n", v.sector, v.nSectors, v.nDrawn, v.nIpos, sc.nIpo);
    check("a sector was found and at least one IPO is predicted visible", v.sector != 0 && v.nIpos > 0);
    check("fewer IPOs predicted than the level has", v.nIpos < sc.nIpo);
    check("cull build", cpa_vis_cull_build(&c, &v, &tm, &sc));
    uint32_t nStatic = sc.nStaticTris; double owned = nStatic ? 100.0 * (nStatic - c.nTriUnowned) / nStatic : 0;
    printf("  info: static triangles %u, with an IPO owner %.2f%%, culled %u (%.1f%%), sprites culled %u of %u\n", nStatic, owned, c.nTriCulled, nStatic ? 100.0 * c.nTriCulled / nStatic : 0.0, c.nSpriteCulled, sc.nSprites);
    check("every static triangle has an IPO owner (bit-exact world positions)", c.nTriUnowned == 0);
    check("culling removes some but not all static triangles", c.nTriCulled > 0 && c.nTriCulled < nStatic);
    CpaDrawList d0, d1; CpaDrawListOpts op; cpa_drawlist_opts_default(&op); cpa_drawlist_build(&d0, &sc, &op); op.cull = &c; cpa_drawlist_build(&d1, &sc, &op);
    uint32_t v0 = 0, v1 = 0; for (uint32_t i = 0; i < d0.nBatches; i++) if (!d0.batches[i].layer) v0 += d0.batches[i].vertCount; for (uint32_t i = 0; i < d1.nBatches; i++) if (!d1.batches[i].layer) v1 += d1.batches[i].vertCount;
    checku("culled list vertices (base layer) = uncull - 3 * culled triangles", v0 - 3u * c.nTriCulled, v1);
    check("culled list has no more sprites than the full one", d1.nSprites <= d0.nSprites);
    cpa_drawlist_free(&d0); cpa_drawlist_free(&d1); cpa_vis_cull_free(&c); cpa_vis_free(&v); cpa_vis_trimap_free(&tm); cpa_scene_free(&sc); free(fix); free(lvl);
}

int main(int argc, char **argv) {
    const char *dcdata = argc > 1 ? argv[1] : getenv("CPA_DC_DATA"); if (!dcdata) dcdata = "../../assets/dc/DCDATA";
    CpaImage im; build_synthetic(&im);
    test_frustum(); test_find_sector(&im); test_predict(&im); test_cull_and_drawlist(&im);
    { char p[1100]; snprintf(p, sizeof p, "%s/FIX.DAT", dcdata); FILE *f = fopen(p, "rb"); if (f) { fclose(f); test_real(dcdata); } else { printf("LEARN_10: [SKIP] no DCDATA at %s\n", dcdata); g_skip++; } }
    printf("\nvis tests: %d passed, %d failed, %d skipped\n", g_pass, g_fail, g_skip);
    return g_fail ? 1 : 0;
}
