/* Host test for src/cpa/cpa_camera + cpa_drawlist.
 *   test_camera [DCDATA_DIR [CAPDIR]]        defaults: $CPA_DC_DATA, ../../assets/dc/DCDATA ; CAPDIR = build/ta_Learn_10 (from `make -f ta.mk ta-capture`)
 * Without DCDATA/CAPDIR the pure-math tests still run and the oracle tests are reported as SKIPPED (never as passed).
 * Oracle tests: Learn_10, TA scene f1500, camera = guest RAM of ram_1499.bin (hard-coded below, full float precision; re-read from the dump when present and compared).
 * Every check prints expected vs actual; exit code non-zero if any fail. Nothing is adjusted to make numbers pass. */
#include "../../src/cpa/cpa_camera.h"
#include "../../src/cpa/cpa_drawlist.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_pass, g_skip;
static void check(const char *what, int cond) { printf("  [%s] %s\n", cond ? "PASS" : "FAIL", what); cond ? g_pass++ : g_fail++; }
static void checkf(const char *what, double expect, double got, double tol) {
    int ok = fabs(expect - got) <= tol;
    printf("  [%s] %-52s expected %.6f, got %.6f (tol %g)\n", ok ? "PASS" : "FAIL", what, expect, got, tol); ok ? g_pass++ : g_fail++;
}
static void checku(const char *what, unsigned long expect, unsigned long got) {
    int ok = expect == got; printf("  [%s] %-52s expected %lu, got %lu\n", ok ? "PASS" : "FAIL", what, expect, got); ok ? g_pass++ : g_fail++;
}
static void skip(const char *what) { printf("  [SKIP] %s\n", what); g_skip++; }

/* Learn_10 f1500 camera: RAM of ram_1499.bin (scene N is projected with the RAM of guest frame N-1, ta_compare.c). */
static const float K_POS[3] = { 51.6750488f, -86.741394f, -29.9791069f };
static const float K_UP[3]  = { -0.00538349664f, -0.145610765f, 0.989327312f };
static const float K_FWD[3] = { -0.036552269f, -0.988651872f, -0.14571026f };
static const float K_HFOV = 1.20000005f, K_RATIO = 0.75f;

typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;

static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1);
    if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; }
    fclose(f); *n = (size_t)l; return b;
}
static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - 0x8C000000u), 4); return f; }

/* ---------------- pure math ---------------- */
static void test_projection_math(void) {
    printf("projection (synthetic, 4:3 reference):\n");
    CpaCamera c; float pos[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fwd[3] = { 0, 1, 0 };
    cpa_camera_from_rows(&c, pos, up, fwd, 1.2f, 0.75f);
    checkf("left = up x fwd -> -X (facing +Y, Z up, right-handed)", -1.0, c.left[0], 1e-6);
    CpaProj p; cpa_proj_init(&p, &c, 640, 480, CPA_FIT_HORPLUS);
    checkf("fx = 320/tan(0.6)", 320.0 / tan(0.6), p.fx, 1e-3);
    checkf("fy = 240/tan(0.45) (vfov = hfov*ratio as angle)", 240.0 / tan(0.45), p.fy, 1e-3);
    float o[3], X[3] = { 0, 10, 0 };
    check("point ahead projects", cpa_project(&c, &p, X, o));
    checkf("centre sx", 320, o[0], 1e-4); checkf("centre sy", 240, o[1], 1e-4); checkf("z_ta = 1/(4*10)", 0.025, o[2], 1e-7);
    float XL[3] = { -5, 10, 0 };        /* +left axis (=-X here) -> smaller sx */
    cpa_project(&c, &p, XL, o); checkf("left point: sx = 320 - fx*5/10", 320 - p.fx * 0.5, o[0], 1e-3);
    float XU[3] = { 0, 10, 3 };
    cpa_project(&c, &p, XU, o); checkf("up point: sy = 240 - fy*3/10", 240 - p.fy * 0.3, o[1], 1e-3);
    float XB[3] = { 0, 0.1f, 0 };
    check("behind near plane (Zc 0.1 < 0.25) rejected", !cpa_project(&c, &p, XB, o));
    float XN[3] = { 0, 0.25f, 0 };
    check("exactly on near plane accepted", cpa_project(&c, &p, XN, o));
    checkf("z_ta at the near plane = 1.0", 1.0, o[2], 1e-6);
    float ccw[6] = { 0, 0, 0, 10, 10, 0 }, cw[6] = { 0, 0, 10, 0, 0, 10 };
    check("screen_area2 sign (y down): visually CCW is negative (front)", cpa_screen_area2(ccw) < 0);
    check("screen_area2 sign (y down): visually CW is positive (back)", cpa_screen_area2(cw) > 0);
}

static void test_fit(void) {
    printf("aspect / widescreen (DESIGN; identity at 4:3 is the only oracle-backed part):\n");
    CpaCamera c; cpa_camera_from_rows(&c, K_POS, K_UP, K_FWD, K_HFOV, K_RATIO);
    CpaProj a, b, w, pb, st;
    cpa_proj_init(&a, &c, 640, 480, CPA_FIT_HORPLUS);
    checkf("4:3 fx equals oracle model 320/tan(hfov/2)", 320.0 / tan(K_HFOV / 2.0), a.fx, 1e-3);
    checkf("4:3 fy equals oracle model", 240.0 / tan(K_HFOV * K_RATIO / 2.0), a.fy, 1e-3);
    cpa_proj_init(&b, &c, 1280, 960, CPA_FIT_HORPLUS);      /* 4:3, other resolution: pure scale x2 */
    checkf("4:3 at 2x resolution: fx doubles", 2 * a.fx, b.fx, 1e-2); checkf("fy doubles", 2 * a.fy, b.fy, 1e-2);
    cpa_proj_init(&w, &c, 960, 544, CPA_FIT_HORPLUS);
    double sq = (w.fx / 480.0) / (a.fx / 320.0);
    checkf("960x544: x scale vs 4:3 (game measured SQ = 0.7556)", 0.7556, sq, 2e-4);
    checkf("960x544: y focal / half-height unchanged", a.fy / 240.0, w.fy / 272.0, 1e-5);
    /* A point at the 4:3 screen corner keeps its height fraction in wide mode (Hor+ property) */
    float X[3] = { K_POS[0] + 10 * 0.0f, 0, 0 }; (void)X;
    float vx[3] = { 40, -150, -35 }, s43[3], sw[3];
    check("test point in front", cpa_project(&c, &a, vx, s43) && cpa_project(&c, &w, vx, sw));
    checkf("height fraction (sy/H) identical in 4:3 and 16:9", s43[1] / 480.0, sw[1] / 544.0, 1e-5);
    checkf("x offset from centre scales by SQ*(960/640)", (s43[0] - 320.0) / 320.0 * sq, (sw[0] - 480.0) / 480.0, 1e-5);
    double k3 = cpa_wide_k3(K_HFOV, 960.0f / 544.0f);
    printf("  [INFO] exact angle multiplier K3 for 960x544 = %.5f (patched in the oracle HLE: 1.2282; shipped 1.2; difference %.3f%%)\n", k3, 100.0 * (k3 / 1.2282 - 1.0));
    checkf("K3 within 0.2%% of the oracle's 16:9 patch value", 1.2282, k3, 0.0025 * 1.2282);
    checkf("K3 at 4:3 is 1", 1.0, cpa_wide_k3(K_HFOV, 4.0f / 3.0f), 1e-6);
    cpa_proj_init(&pb, &c, 960, 544, CPA_FIT_PILLARBOX43);
    checkf("pillarbox: fx = 4:3 fx * (544/480)", a.fx * 544.0 / 480.0, pb.fx, 1e-2);
    cpa_proj_init(&st, &c, 960, 544, CPA_FIT_STRETCH);
    checkf("stretch: fx/fy ratio distorts vs 4:3 by (960/640)/(544/480)", (a.fx / a.fy) * (1.5 / (544.0 / 480.0)), st.fx / st.fy, 1e-3);
    CpaProj narrow; cpa_proj_init(&narrow, &c, 480, 640, CPA_FIT_HORPLUS);
    checkf("portrait 3:4 keeps horizontal extent (fx/half-width as 4:3)", a.fx / 320.0, narrow.fx / 240.0, 1e-5);
}

static void test_clip(void) {
    printf("near-plane clip (synthetic):\n");
    CpaCamera c; float pos[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fwd[3] = { 0, 1, 0 };
    cpa_camera_from_rows(&c, pos, up, fwd, 1.2f, 0.75f);
    CpaClipVert o[4]; float uv[6] = { 0, 0, 1, 0, 0, 1 };
    float all[9] = { 0, 5, 0, 1, 5, 0, 0, 5, 1 }, none[9] = { 0, -5, 0, 1, -5, 0, 0, -5, 1 };
    checku("fully in front -> 3 vertices", 3, (unsigned long)cpa_clip_tri_near(&c, CPA_NEAR_ZC, all, uv, o));
    checku("fully behind -> 0", 0, (unsigned long)cpa_clip_tri_near(&c, CPA_NEAR_ZC, none, uv, o));
    float one[9] = { 0, 5, 0, 1, -5, 0, 0, -5, 1 };       /* one vertex in front -> triangle */
    checku("one vertex in front -> 3", 3, (unsigned long)cpa_clip_tri_near(&c, CPA_NEAR_ZC, one, uv, o));
    int on = 0; for (int i = 0; i < 3; i++) on += o[i].c[2] == CPA_NEAR_ZC; checku("  of which on the plane", 2, (unsigned long)on);
    float two[9] = { 0, 5, 0, 1, 5, 0, 0, -5, 1 };        /* two in front -> quad */
    int n = cpa_clip_tri_near(&c, CPA_NEAR_ZC, two, uv, o); checku("two vertices in front -> 4", 4, (unsigned long)n);
    /* vertex 2 (0,-5,1) with uv (0,1); vertex 0 (0,5,0) uv(0,0): intersection at Zc=0.25: t=(0.25-5)/(-5-5)=0.475 -> v=0.475 */
    double worst = 0; for (int i = 0; i < n; i++) if (o[i].c[2] == CPA_NEAR_ZC && o[i].uv[1] > 0.1f && o[i].uv[0] < 0.1f) worst = fabs(o[i].uv[1] - 0.475);
    checkf("interpolated v at the plane", 0.0, worst, 1e-6);
}

static void test_stick(void) {
    printf("stick math / orbit camera (DESIGN):\n");
    CpaStickCfg g; cpa_stick_cfg_default(&g);
    float x, y;
    cpa_stick_shape(&g, 0.1f, 0.1f, &x, &y); checkf("inside dead zone -> exactly 0", 0.0, fabs(x) + fabs(y), 0.0);
    cpa_stick_shape(&g, g.deadzone + 1e-4f, 0, &x, &y); check("just outside dead zone is tiny and positive (no jump)", x > 0 && x < 1e-3);
    cpa_stick_shape(&g, 1, 0, &x, &y); checkf("full deflection -> 1", 1.0, x, 1e-6);
    cpa_stick_shape(&g, 1, 1, &x, &y); checkf("square-gate corner clamps to |v|<=1", 1.0, sqrt((double)x * x + (double)y * y), 1e-5);
    checkf("corner keeps direction (45 deg)", x, y, 1e-6);
    cpa_stick_shape(&g, -0.6f, 0, &x, &y); check("sign preserved", x < 0);
    float prev = -1; int mono = 1; for (int i = 0; i <= 100; i++) { cpa_stick_shape(&g, i / 100.0f, 0, &x, &y); if (x < prev) mono = 0; prev = x; }
    check("monotonic in deflection", mono);
    CpaStickCfg lin = g; lin.expo = 1.0f; lin.deadzone = 0.2f; cpa_stick_shape(&lin, 0.6f, 0, &x, &y);
    checkf("linear: (0.6-0.2)/(1-0.2) = 0.5", 0.5, x, 1e-6);

    float t[3] = { 0, 0, 0 };
    CpaOrbitCam o; cpa_orbit_init(&o, t, 10.0f, 0.0f, 0.3f);
    CpaCamera c0, c1; cpa_orbit_to_camera(&o, 1.2f, 0.75f, &c0);
    checkf("eye distance = dist", 10.0, sqrt((double)c0.pos[0]*c0.pos[0] + (double)c0.pos[1]*c0.pos[1] + (double)c0.pos[2]*c0.pos[2]), 1e-4);
    checkf("looks at target: F = -eye/|eye|, F.x", -cos(0.3), c0.fwd[0], 1e-5);
    checkf("up.z > 0 (no roll)", 1.0, c0.up[2] > 0, 0.0);
    /* direction: stick right -> view turns right (F rotates toward -left) */
    o.cfg.smoothTau = 0; cpa_orbit_update(&o, 1, 0, t, 0.1f); cpa_orbit_to_camera(&o, 1.2f, 0.75f, &c1);
    float fl = c1.fwd[0]*c0.left[0] + c1.fwd[1]*c0.left[1] + c1.fwd[2]*c0.left[2];
    check("stick right: new view direction has negative component on old left (turned right)", fl < -1e-3);
    checkf("yaw rate: 2.6 rad/s * 0.1 s", -0.26, o.yaw, 1e-5);
    CpaOrbitCam o2; cpa_orbit_init(&o2, t, 10, 0, 0.3f); o2.cfg.smoothTau = 0;
    cpa_orbit_update(&o2, 0, 1, t, 0.1f); check("stick up (non-inverted): eye drops (look up)", o2.pitch < 0.3f);
    CpaOrbitCam o3; cpa_orbit_init(&o3, t, 10, 0, 0.3f); o3.cfg.smoothTau = 0; o3.cfg.invertY = 1;
    cpa_orbit_update(&o3, 0, 1, t, 0.1f); check("invertY: stick up raises the eye", o3.pitch > 0.3f);
    /* pitch clamp */
    for (int i = 0; i < 300; i++) cpa_orbit_update(&o3, 0, 1, t, 1.0f / 60);
    checkf("pitch clamped at pitchMax", o3.cfg.pitchMax, o3.pitch, 1e-6); checkf("pitch velocity zeroed at the limit", 0.0, o3.pitchVel, 0.0);
    /* yaw wrap */
    CpaOrbitCam o4; cpa_orbit_init(&o4, t, 10, 3.0f, 0.0f); o4.cfg.smoothTau = 0;
    for (int i = 0; i < 60; i++) cpa_orbit_update(&o4, -1, 0, t, 1.0f / 60);
    check("yaw stays in [-pi, pi)", o4.yaw >= -3.14159265f && o4.yaw < 3.14159265f);
    /* smoothing step response: v(t) = target*(1-exp(-t/tau)) at sample times (exact for the update rule) */
    CpaOrbitCam o5; cpa_orbit_init(&o5, t, 10, 0, 0.0f); o5.cfg.smoothTau = 0.1f;
    for (int i = 0; i < 6; i++) cpa_orbit_update(&o5, 1, 0, t, 1.0f / 60);
    checkf("smoothed yaw velocity after 0.1 s (tau 0.1): 2.6*(1-e^-1)", -2.6 * (1.0 - exp(-1.0)), o5.yawVel, 1e-4);
    /* frame-rate independence of the total turn after 1 s of full deflection */
    CpaOrbitCam f60, f30; cpa_orbit_init(&f60, t, 10, 0, 0); cpa_orbit_init(&f30, t, 10, 0, 0);
    for (int i = 0; i < 60; i++) cpa_orbit_update(&f60, 0.5f, 0, t, 1.0f / 60);
    for (int i = 0; i < 30; i++) cpa_orbit_update(&f30, 0.5f, 0, t, 1.0f / 30);
    printf("  [INFO] yaw after 1 s: 60 Hz %.5f, 30 Hz %.5f\n", f60.yaw, f30.yaw);
    checkf("60 Hz vs 30 Hz total yaw within 3%", f60.yaw, f30.yaw, 0.03 * fabs(f60.yaw));
}

static void test_orbit_roundtrip(void) {
    printf("orbit <-> camera hand-over (zero-roll camera):\n");
    CpaCamera c, r; cpa_camera_from_rows(&c, K_POS, K_UP, K_FWD, K_HFOV, K_RATIO);
    CpaOrbitCam o; cpa_orbit_from_camera(&o, &c, 30.0f);
    cpa_orbit_to_camera(&o, K_HFOV, K_RATIO, &r);
    double dp = 0, dr = 0;
    for (int i = 0; i < 3; i++) { dp += fabs(r.pos[i] - c.pos[i]); dr += fabs(r.fwd[i] - c.fwd[i]) + fabs(r.up[i] - c.up[i]) + fabs(r.left[i] - c.left[i]); }
    checkf("position error (sum |d|)", 0.0, dp, 1e-3);
    checkf("basis error (sum |d| over F,U,L)", 0.0, dr, 1e-4);
    CpaProj p; cpa_proj_init(&p, &c, 640, 480, CPA_FIT_HORPLUS);
    float X[3] = { 40, -150, -35 }, a[3], b[3];
    cpa_project(&c, &p, X, a); cpa_project(&r, &p, X, b);
    checkf("same world point projects within 0.01 px (x)", a[0], b[0], 1e-2); checkf("... (y)", a[1], b[1], 1e-2);
}

/* ---------------- drawlist on a synthetic scene ---------------- */
static void test_drawlist_synth(void) {
    printf("drawlist (synthetic scene: order, state, sort):\n");
    CpaScene s; memset(&s, 0, sizeof s);
    enum { NI = 6 };
    float pos[NI * 3 * 3]; float uvs[NI * 3 * 2]; CpaDrawItem it[NI]; memset(it, 0, sizeof it); memset(pos, 0, sizeof pos); memset(uvs, 0, sizeof uvs);
    int8_t cls[NI] = { CPA_ALPHA_BLEND, CPA_ALPHA_OPAQUE, CPA_ALPHA_CUTOUT, CPA_ALPHA_ADDITIVE, CPA_ALPHA_UNKNOWN, CPA_ALPHA_OPAQUE };
    uint8_t ov[NI] = { 0, 2, 0, 3, 0, 0 };
    float depth[NI] = { 5, 1, 1, 50, 20, 1 };               /* world y = depth, camera at origin looking +Y */
    for (int i = 0; i < NI; i++) {
        it[i].firstVert = 3 * i; it[i].vertCount = 3; it[i].texVa = 0x1000u + i; it[i].alphaClass = cls[i]; it[i].overlayMode = ov[i];
        it[i].tileU = 1; it[i].tileV = (uint8_t)(i & 1); it[i].isActor = (i == 5);
        for (int v = 0; v < 3; v++) { pos[(3 * i + v) * 3 + 1] = depth[i]; uvs[(3 * i + v) * 2] = 0.5f; uvs[(3 * i + v) * 2 + 1] = 0.25f; }
    }
    s.pos = pos; s.uv = uvs; s.nVerts = NI * 3; s.items = it; s.nItems = NI;
    CpaSprite sp; memset(&sp, 0, sizeof sp); sp.pos[1] = 10; sp.sizeX = 2; sp.sizeY = 1; sp.alphaClass = CPA_ALPHA_BLEND; sp.tileU = sp.tileV = 1; s.sprites = &sp; s.nSprites = 1;
    CpaDrawList dl; CpaDrawListOpts o; cpa_drawlist_opts_default(&o);
    check("build", cpa_drawlist_build(&dl, &s, &o));
    checku("batches: 5 base (actor excluded) + 2 layer-2", 7, dl.nBatches);
    checku("layer-2 count", 2, dl.nLayer2);
    checku("opaque pass size", 1, dl.passStart[1] - dl.passStart[0]);
    checku("cutout pass size", 1, dl.passStart[2] - dl.passStart[1]);
    checku("translucent pass size (blend, additive, unknown, 2 x L2)", 5, dl.passStart[3] - dl.passStart[2]);
    const CpaBatch *b = dl.batches;
    check("pass sequence non-decreasing", b[0].pass <= b[1].pass && b[1].pass <= b[2].pass);
    check("opaque: one-sided, no blend, item 1", b[0].item == 1 && b[0].cullBack == 1 && b[0].blend == CPA_BLEND_NONE && !b[0].alphaTest);
    check("cutout: alpha test, two-sided (unverified)", b[1].item == 2 && b[1].alphaTest && b[1].cullBack == 0);
    int l2first = -1; for (uint32_t i = dl.passStart[2]; i < dl.passStart[3]; i++) if (b[i].layer) { l2first = (int)i; break; }
    check("scene order of translucent bases kept (items 0,3,4)", b[2].item == 0 && b[3].item == 3 && b[4].item == 4);
    check("layer-2 batches come after all translucent bases", l2first == (int)dl.passStart[2] + 3);
    check("layer-2 of overlayMode 2: UV rule x8, same verts as base, translucent alpha blend, tex unknown",
          b[l2first].item == 1 && b[l2first].uvRule == CPA_UVRULE_OVERLAY && b[l2first].blend == CPA_BLEND_ALPHA && b[l2first].layerTexUnknown && b[l2first].texVa == 0 && b[l2first].firstVert == 3);
    check("layer-2 of overlayMode 3: flipped-V rule", b[l2first + 1].item == 3 && b[l2first + 1].uvRule == CPA_UVRULE_OVERLAY_FLIPV);
    check("layer-2 of an opaque base inherits cullBack=1", b[l2first].cullBack == 1);
    check("additive -> CPA_BLEND_ADD", b[3].blend == CPA_BLEND_ADD);
    check("unknown alpha class -> translucent alpha blend", b[4].blend == CPA_BLEND_ALPHA && b[4].pass == CPA_PASS_TRANSLUCENT);
    check("wrap flags carried (item 0: tileV 0 -> clamp V)", b[2].wrapU == 1 && b[2].wrapV == 0);
    checku("sprites", 1, dl.nSprites); check("sprite pass translucent", dl.sprites[0].pass == CPA_PASS_TRANSLUCENT);
    /* UV rule agrees with cpa_overlay_uv */
    float u2, v2; cpa_overlay_uv(3, 0.5f, 0.25f, &u2, &v2); checkf("overlay mode 3 uv: (8*0.5, 8*(1-0.25))", 6.0, v2, 1e-6); checkf("  u", 4.0, u2, 1e-6);
    /* depth sort */
    CpaCamera cam; float p0[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 }; cpa_camera_from_rows(&cam, p0, up, fw, 1.2f, 0.75f);
    cpa_drawlist_sort_translucent(&dl, &cam);
    b = dl.batches; uint32_t a0 = dl.passStart[2];
    check("sorted back to front: depth 50 (item 3), 20 (item 4), 5 (item 0)", b[a0].item == 3 && b[a0 + 1].item == 3 && b[a0 + 2].item == 4 && b[a0 + 3].item == 0);
    check("... item 3: base before its layer 2", b[a0].layer == 0 && b[a0 + 1].layer == 1);
    check("... item 1 (depth 1) layer-2 last", b[a0 + 4].item == 1 && b[a0 + 4].layer == 1);
    check("opaque pass untouched by the sort", dl.batches[0].item == 1);
    cpa_drawlist_free(&dl);
    o.includeActors = 1; o.includeLayer2 = 0; o.includeSprites = 0; cpa_drawlist_build(&dl, &s, &o);
    checku("with actors, no layer 2: 6 batches", 6, dl.nBatches); checku("no sprites", 0, dl.nSprites); cpa_drawlist_free(&dl);
    /* sprite quad is camera-facing and centred */
    CpaDrawSprite ds = { 0, { 3, 10, 2 }, 2.0f, 1.0f, 0, 0, 0, 0, 1, 1, 0 }; float q[12]; cpa_sprite_quad(&cam, &ds, 0.5f, q);
    checkf("quad TL = pos + left*1 + up*0.5 (x; left = -X here)", 2.0, q[0], 1e-6); checkf("quad TL z", 2.5, q[2], 1e-6); checkf("quad BR x", 4.0, q[9], 1e-6); checkf("quad BR z", 1.5, q[11], 1e-6);
    CpaProj pr; cpa_proj_init(&pr, &cam, 640, 480, CPA_FIT_HORPLUS); float sTL[3], sTR[3];
    cpa_project(&cam, &pr, q, sTL); cpa_project(&cam, &pr, q + 3, sTR); check("TL is left of TR on screen", sTL[0] < sTR[0]);
}

/* ---------------- oracle comparison (Learn_10 f1500) ---------------- */
typedef struct { float sx[3], sy[3], w[3], u[3], v[3]; uint32_t item, tri; } PT;
static const int PERMS[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };

static void test_oracle(const char *dcdata, const char *capdir) {
    printf("oracle comparison (Learn_10 scene f1500):\n");
    char fixp[1100], lvlp[1100], p[1100]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata); snprintf(lvlp, sizeof lvlp, "%s/LEARN_10/LEARN_10.DAT", dcdata);
    uint8_t *fix = NULL, *lvl = NULL; size_t fixN = 0, lvlN = 0;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN)) { skip("Learn_10 DATs not found"); return; }
    snprintf(p, sizeof p, "%s/f1500/frame.bin", capdir); size_t fn; uint8_t *fb = slurp(p, &fn);
    if (!fb) { skip("capture build/ta_Learn_10/f1500/frame.bin not found (run: make -f ta.mk ta-capture ASSETS=...)"); return; }
    CpaImage img; static CpaScene sc;
    if (!cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { check("scene loaded", 0); return; }
    CpaCamera cam; cpa_camera_from_rows(&cam, K_POS, K_UP, K_FWD, K_HFOV, K_RATIO);
    snprintf(p, sizeof p, "%s/ram_1499.bin", capdir); size_t rn; uint8_t *ram = slurp(p, &rn);
    if (ram && rn == (16u << 20)) {
        double d = 0; for (int i = 0; i < 3; i++) d += fabs(rdf(ram, 0x8C00F394u + 4 * i) - K_POS[i]) + fabs(rdf(ram, 0x8C00F308u + 4 * i) - K_UP[i]) + fabs(rdf(ram, 0x8C00F314u + 4 * i) - K_FWD[i]);
        checkf("hard-coded camera == RAM dump ram_1499.bin (sum |d|)", 0.0, d, 0.0);
        float Lr[3] = { rdf(ram, 0x8C00F320u), rdf(ram, 0x8C00F324u), rdf(ram, 0x8C00F328u) };
        printf("  [INFO] RAM L row = (%.5f %.5f %.5f), U x F = (%.5f %.5f %.5f): the RAM row is stale in this snapshot (ta_compare.c says so), we use U x F\n", Lr[0], Lr[1], Lr[2], cam.left[0], cam.left[1], cam.left[2]);
    } else skip("ram_1499.bin not present: camera constants not re-checked against the dump");
    CpaProj pr; cpa_proj_init(&pr, &cam, 640, 480, CPA_FIT_HORPLUS);

    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    check("frame.bin size consistent", 16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) == fn);

    /* native static triangles projected with the NEW camera code; those with a vertex nearer than the near plane are kept apart (clip test) */
    uint32_t nt = sc.nVerts / 3; PT *pt = calloc(nt, sizeof *pt); uint32_t npt = 0, nStatic = 0, nBehind = 0;
    uint8_t *behind = calloc(nt, 1); uint32_t *itemOf = calloc(nt, 4);
    for (uint32_t i = 0; i < sc.nItems; i++) {
        const CpaDrawItem *d = &sc.items[i]; if (d->isActor) continue;
        for (uint32_t k = 0; k < d->vertCount / 3; k++) {
            uint32_t t = d->firstVert / 3 + k; PT q; int ok = 1; nStatic++; itemOf[t] = i;
            for (int j = 0; j < 3 && ok; j++) { float o[3]; if (!cpa_project(&cam, &pr, &sc.pos[(t * 3 + j) * 3], o)) ok = 0; else { q.sx[j] = o[0]; q.sy[j] = o[1]; q.w[j] = o[2]; q.u[j] = sc.uv[(t * 3 + j) * 2]; q.v[j] = sc.uv[(t * 3 + j) * 2 + 1]; } }
            if (!ok) { nBehind++; behind[t] = 1; continue; }
            q.item = i; q.tri = t; pt[npt++] = q;
        }
    }
    printf("  [INFO] native static triangles %u, projected %u, behind near plane %u (ta_compare.c reports 3232 / 1730 / 1502 for this scene)\n", nStatic, npt, nBehind);
    checku("static triangle count", 3232, nStatic); checku("projected (same as ta_compare)", 1730, npt);

    /* batch lookup */
    CpaDrawList dl; CpaDrawListOpts opts; cpa_drawlist_opts_default(&opts); check("drawlist built", cpa_drawlist_build(&dl, &sc, &opts));
    int *bBase = malloc(sc.nItems * sizeof(int)), *bL2 = malloc(sc.nItems * sizeof(int));
    for (uint32_t i = 0; i < sc.nItems; i++) bBase[i] = bL2[i] = -1;
    for (uint32_t i = 0; i < dl.nBatches; i++) { if (dl.batches[i].layer) bL2[dl.batches[i].item] = (int)i; else bBase[dl.batches[i].item] = (int)i; }
    for (int pas = 0; pas < 3; pas++) printf("  [INFO] pass %d: %u batches\n", pas, dl.passStart[pas + 1] - dl.passStart[pas]);

    uint32_t nOr = 0, matched = 0, geomOnly = 0, l0 = 0, l1 = 0, passBad = 0, uvBad = 0, l2NoBatch = 0, l2ListBad = 0, cullViol = 0, opaqueN = 0, opaqueNeg = 0, transN = 0, transPos = 0, extraL2UV = 0;
    double maxErr = 0;
    for (uint32_t i = 0; i < nstrip; i++) {
        const TaS *s = &strips[i]; if (s->sprite) continue;
        for (uint32_t k = 0; k + 2 < s->count; k++) {
            float ox[3], oy[3], oz[3], ou[3], ov[3]; nOr++;
            for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; ox[j] = v->x; oy[j] = v->y; oz[j] = v->z; ou[j] = v->u; ov[j] = v->v; }
            int hit = -1, hp = -1; double herr = 0;
            for (uint32_t a = 0; a < npt && hit < 0; a++) for (int pi = 0; pi < 6 && hit < 0; pi++) {
                int ok = 1; double e = 0;
                for (int j = 0; j < 3 && ok; j++) { int q = PERMS[pi][j];
                    double dx = fabs(pt[a].sx[q] - ox[j]), dy = fabs(pt[a].sy[q] - oy[j]);
                    if (dx > 0.1 || dy > 0.1 || fabs(pt[a].w[q] - oz[j]) / (fabs(oz[j]) + 1e-9) > 2e-3) ok = 0; if (dx > e) e = dx; if (dy > e) e = dy; }
                if (ok) { hit = (int)a; hp = pi; herr = e; }
            }
            if (hit < 0) continue;
            matched++; if (herr > maxErr) maxErr = herr;
            const PT *n = &pt[hit]; int f1 = 1, fo = 1, ff = 1;     /* UV x1, overlay, overlay flipped */
            for (int j = 0; j < 3; j++) { int q = PERMS[hp][j]; float a2, b2;
                if (fabsf(ou[j] - n->u[q]) > 1e-3f || fabsf(ov[j] - n->v[q]) > 1e-3f) f1 = 0;
                cpa_overlay_uv(1, n->u[q], n->v[q], &a2, &b2); if (fabsf(ou[j] - a2) > 1e-3f + 1e-4f * fabsf(a2) || fabsf(ov[j] - b2) > 1e-3f + 1e-4f * fabsf(b2)) fo = 0;
                cpa_overlay_uv(3, n->u[q], n->v[q], &a2, &b2); if (fabsf(ou[j] - a2) > 1e-3f + 1e-4f * fabsf(a2) || fabsf(ov[j] - b2) > 1e-3f + 1e-4f * fabsf(b2)) ff = 0; }
            float sxy[6] = { n->sx[0], n->sy[0], n->sx[1], n->sy[1], n->sx[2], n->sy[2] }; float ar = cpa_screen_area2(sxy);
            int bb = bBase[n->item], bl = bL2[n->item];
            if (f1 && !(fo || ff)) {                             /* a first-layer draw of this polygon */
                l0++;
                if (bb < 0) { passBad++; continue; }
                const CpaBatch *B = &dl.batches[bb];
                unsigned expectList = B->pass == CPA_PASS_OPAQUE ? 0 : B->pass == CPA_PASS_CUTOUT ? 4 : 2;
                if (s->list != expectList) passBad++;
                if (s->list == 0) { opaqueN++; if (ar < 0) opaqueNeg++; if (B->cullBack && ar > 0) cullViol++; }
                if (s->list == 2) { transN++; if (ar > 0) transPos++; if (!B->cullBack) { } }
            } else if (fo || ff) {                               /* a second-layer draw */
                l1++;
                if (bl < 0) { l2NoBatch++; continue; }
                const CpaBatch *B = &dl.batches[bl];
                if (s->list != 2) l2ListBad++;
                if ((B->uvRule == CPA_UVRULE_OVERLAY && !fo) || (B->uvRule == CPA_UVRULE_OVERLAY_FLIPV && !ff)) uvBad++;
                if (fo && ff) extraL2UV++;
            } else geomOnly++;
        }
    }
    printf("  [INFO] oracle triangles %u (non-sprite), geometry-matched to a projected native static triangle %u, max |err| %.4f px\n", nOr, matched, maxErr);
    printf("  [INFO] of the matched: first-layer draws %u, layer-2 draws %u, UV fits neither (HUD/actor UV coincidence) %u\n", l0, l1, geomOnly);
    checku("matched oracle triangles (ta_compare: 67 one-to-one + 27 re-draws share geometry)", 94, matched);
    check("max projection error < 0.01 px (ta_compare: 0.0022)", maxErr < 0.01);
    checku("first-layer draws whose list != drawlist pass", 0, passBad);
    printf("  [INFO] opaque-list matched draws: %u, with negative screen area (front): %u; translucent-list draws with positive area (back-facing, need two-sided): %u of %u\n", opaqueN, opaqueNeg, transPos, transN);
    checku("opaque-list draws that our one-sided cull would have removed", 0, cullViol);
    check("all opaque-list matched draws are front-facing (negative area)", opaqueN > 0 && opaqueNeg == opaqueN);
    checku("layer-2 oracle draws without a layer-2 batch", 0, l2NoBatch);
    checku("layer-2 oracle draws not in the translucent list", 0, l2ListBad);
    checku("layer-2 oracle draws whose UV differs from the batch's UV rule", 0, uvBad);
    check("some layer-2 draws were exercised", l1 > 0);
    (void)extraL2UV;

    /* near-plane clip: projected clip vertices vs oracle vertices lying on the plane (z_ta == 1.0) */
    uint32_t onPlane = 0, onPlaneHit = 0, nClipped = 0;
    for (uint32_t i = 0; i < nstrip; i++) {
        const TaS *s = &strips[i]; if (s->sprite) continue;
        for (uint32_t k = 0; k + 2 < s->count; k++) for (int j = 0; j < 3; j++) {
            const TaV *v = &tv[s->first + k + j]; if (fabsf(v->z - 1.0f) > 1e-3f) continue;
            onPlane++; int found = 0;
            for (uint32_t t = 0; t < nt && !found; t++) if (behind[t]) {
                CpaClipVert cv[4]; int n = cpa_clip_tri_near(&cam, CPA_NEAR_ZC, &sc.pos[t * 9], &sc.uv[t * 6], cv);
                for (int m = 0; m < n && !found; m++) if (cv[m].c[2] == CPA_NEAR_ZC) { float so[3]; cpa_cam_to_screen(&pr, cv[m].c, so); if (fabsf(so[0] - v->x) < 0.1f && fabsf(so[1] - v->y) < 0.1f) found = 1; }
            }
            onPlaneHit += found;
        }
    }
    for (uint32_t t = 0; t < nt; t++) if (behind[t]) { CpaClipVert cv[4]; if (cpa_clip_tri_near(&cam, CPA_NEAR_ZC, &sc.pos[t * 9], &sc.uv[t * 6], cv) >= 3) nClipped++; }
    printf("  [INFO] native triangles with a vertex behind the near plane: %u, of which partly in front (clipped to a polygon): %u\n", nBehind, nClipped);
    printf("  [INFO] oracle vertices on the near plane (z_ta = 1.0): %u, reproduced by our clip within 0.1 px: %u\n", onPlane, onPlaneHit);
    check("near-plane oracle vertices exist in this scene", onPlane > 0);
    check("every near-plane oracle vertex is reproduced by cpa_clip_tri_near", onPlaneHit == onPlane);

    /* sprites of this scene go through the drawlist */
    checku("drawlist sprites == scene sprites (no actors excluded here: all are actor sprites)", 0, dl.nSprites);
    printf("  [INFO] scene sprites %u (actor sprites %u); default drawlist excludes actors\n", sc.nSprites, sc.nSpriteActor);
    cpa_drawlist_free(&dl);
    CpaDrawListOpts oa = opts; oa.includeActors = 1; cpa_drawlist_build(&dl, &sc, &oa);
    checku("with includeActors: sprites == scene sprites", sc.nSprites, dl.nSprites); cpa_drawlist_free(&dl);
    free(bBase); free(bL2); free(pt); free(behind); free(itemOf);
}

int main(int argc, char **argv) {
    test_projection_math(); test_fit(); test_clip(); test_stick(); test_orbit_roundtrip(); test_drawlist_synth();
    const char *dc = argc > 1 ? argv[1] : getenv("CPA_DC_DATA"); const char *cap = argc > 2 ? argv[2] : "build/ta_Learn_10";
    if (!dc) dc = "../../assets/dc/DCDATA";
    test_oracle(dc, cap);
    printf("\n%d passed, %d failed, %d skipped\n", g_pass, g_fail, g_skip);
    return g_fail ? 1 : 0;
}
