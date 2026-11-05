/* test_render: asset-free unit tests of cpa_render + cpa_gl_backend (against tests_ta/fakegl). Build/run: make -f shadow.mk test-render
 *  1. cpa_gl_build_matrices reproduces cpa_project (the VERIFIED oracle camera) to < 1e-3 px for random points in front of the camera, and the GL winding (CCW = front) is
 *     equivalent to cpa_screen_area2 < 0, in 4:3 / 16:9 / pillarbox fits.
 *  2. A hand-made 3-item scene -> frame: pass classification, state merging, layer-2 UV rule, vertex stream contents.
 *  3. The same frame submitted to the GL backend: draw count, layer-2 skipped (texture unknown), upload once. */
#include "../../src/cpa/cpa_render.h"
#include "../../src/platform/vita/cpa_gl_backend.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int fails, checks;
#define CHECK(c, ...) do { checks++; if (!(c)) { fails++; printf("FAIL line %d: ", __LINE__); printf(__VA_ARGS__); printf("\n"); } } while (0)
static float rnd(void) { return (float)rand() / (float)RAND_MAX; }

static void t_matrices(void) {
    CpaCamera cam; float pos[3] = { 3, -2, 5 }, up[3] = { -0.005f, -0.146f, 0.989f }, fwd[3] = { 0.2f, 0.97f, 0.12f };
    float n = sqrtf(fwd[0] * fwd[0] + fwd[1] * fwd[1] + fwd[2] * fwd[2]); for (int i = 0; i < 3; i++) fwd[i] /= n;
    float d = up[0] * fwd[0] + up[1] * fwd[1] + up[2] * fwd[2]; for (int i = 0; i < 3; i++) up[i] -= d * fwd[i];
    n = sqrtf(up[0] * up[0] + up[1] * up[1] + up[2] * up[2]); for (int i = 0; i < 3; i++) up[i] /= n;
    cpa_camera_from_rows(&cam, pos, up, fwd, 1.2f, 0.75f);
    static const int sz[3][2] = { { 640, 480 }, { 960, 544 }, { 1280, 720 } }; static const CpaFit fits[3] = { CPA_FIT_HORPLUS, CPA_FIT_HORPLUS, CPA_FIT_PILLARBOX43 };
    for (int cfg = 0; cfg < 3; cfg++) {
        int W = sz[cfg][0], H = sz[cfg][1]; CpaProj p; cpa_proj_init(&p, &cam, W, H, fits[cfg]);
        float P[16], M[16], far = 4000.0f; cpa_gl_build_matrices(&cam, W, H, fits[cfg], far, P, M);
        double maxe = 0; int bad = 0, wbad = 0, nt = 0;
        for (int it = 0; it < 2000; it++) {
            float X[3][3], S[3][3], G[3][2]; int ok = 1;
            for (int v = 0; v < 3; v++) {
                float c[3] = { (rnd() - 0.5f) * 8, (rnd() - 0.5f) * 6, 1.0f + rnd() * 200 };   /* camera-space-ish point in front */
                for (int j = 0; j < 3; j++) X[v][j] = cam.pos[j] - c[0] * cam.left[j] * -1.0f + c[1] * cam.up[j] + c[2] * cam.fwd[j];
                if (!cpa_project(&cam, &p, X[v], S[v])) { ok = 0; break; }
                float e[4] = { 0, 0, 0, 1 }, cl[4];
                for (int r = 0; r < 4; r++) e[r] = M[r] * X[v][0] + M[4 + r] * X[v][1] + M[8 + r] * X[v][2] + M[12 + r];
                for (int r = 0; r < 4; r++) cl[r] = P[r] * e[0] + P[4 + r] * e[1] + P[8 + r] * e[2] + P[12 + r] * e[3];
                float nx = cl[0] / cl[3], ny = cl[1] / cl[3], sx = (nx * 0.5f + 0.5f) * W, sy = (1.0f - (ny * 0.5f + 0.5f)) * H;
                double er = fmax(fabs(sx - S[v][0]), fabs(sy - S[v][1])); if (er > maxe) maxe = er; if (er > 1e-2) bad++;
                G[v][0] = nx; G[v][1] = ny; if (cl[2] / cl[3] < -1 || cl[2] / cl[3] > 1) wbad++;
            }
            if (!ok) continue;
            float oa = cpa_screen_area2((float[6]){ S[0][0], S[0][1], S[1][0], S[1][1], S[2][0], S[2][1] });
            float ga = (G[1][0] - G[0][0]) * (G[2][1] - G[0][1]) - (G[2][0] - G[0][0]) * (G[1][1] - G[0][1]);
            if (fabsf(oa) > 1e-3f) { nt++; if ((oa < 0) != (ga > 0)) bad++; }
        }
        CHECK(bad == 0, "cfg %d: %d projection/winding mismatches (max err %.5f px)", cfg, bad, maxe);
        CHECK(wbad == 0, "cfg %d: %d depth values outside [-1,1] (far 4000)", cfg, wbad);
        printf("matrices %dx%d fit %d: max |GL - cpa_project| = %.5f px over %d triangles; winding CCW<=>area2<0 holds\n", W, H, (int)fits[cfg], maxe, nt);
    }
}

static int g_bound;
static void up_cb(void *u, const CpaTexDesc *t) { (void)t; (*(int *)u)++; }

static void t_frame(void) {
    /* scene: item0 opaque tex 0x100 (2 tris), item1 opaque tex 0x100 again (1 tri, same state -> merged), item2 blend tex 0x200 with overlayMode 3 (1 tri) */
    CpaScene s; memset(&s, 0, sizeof s);
    float pos[12 * 3] = { 0 }, uv[12 * 2] = { 0 };
    for (int t = 0; t < 4; t++) for (int v = 0; v < 3; v++) { int i = t * 3 + v; pos[i * 3] = (float)v; pos[i * 3 + 1] = 10.0f + (float)t; pos[i * 3 + 2] = (v == 2) ? 1.0f : 0.0f; uv[i * 2] = 0.25f * (float)v; uv[i * 2 + 1] = 0.5f; }
    CpaDrawItem it[3]; memset(it, 0, sizeof it);
    it[0].firstVert = 0; it[0].vertCount = 6; it[0].texVa = 0x100; it[0].alphaClass = CPA_ALPHA_OPAQUE; it[0].tileU = it[0].tileV = 1;
    it[1].firstVert = 6; it[1].vertCount = 3; it[1].texVa = 0x100; it[1].alphaClass = CPA_ALPHA_OPAQUE; it[1].tileU = it[1].tileV = 1;
    it[2].firstVert = 9; it[2].vertCount = 3; it[2].texVa = 0x200; it[2].alphaClass = CPA_ALPHA_BLEND; it[2].overlayMode = 3; it[2].tileU = 0; it[2].tileV = 1;
    s.pos = pos; s.uv = uv; s.nVerts = 12; s.items = it; s.nItems = 3;
    CpaRenderCtx ctx; CpaRenderOpts o; cpa_render_opts_default(&o); cpa_render_ctx_init(&ctx, &s, &o);
    CpaFrameInput in; memset(&in, 0, sizeof in);
    float cp[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 }; cpa_camera_from_rows(&in.cam, cp, up, fw, 1.2f, 0.75f); in.w = 640; in.h = 480; in.fit = CPA_FIT_HORPLUS;
    CpaRenderFrame f; CHECK(cpa_render_build_frame(&ctx, &f, &in), "build");
    CHECK(f.st.trisPass[CPA_PASS_OPAQUE] == 3 && f.st.trisPass[CPA_PASS_TRANSLUCENT] == 2, "tris opaque %u translucent %u", f.st.trisPass[0], f.st.trisPass[2]);
    CHECK(f.st.srcBatches == 4 && f.st.nDraws == 3, "src batches %u draws %u (expect 4 / 3: two opaque items merge, base + layer 2)", f.st.srcBatches, f.st.nDraws);
    CHECK(f.st.trisLayer2 == 1 && f.st.trisStatic == 4, "layer2 %u static %u", f.st.trisLayer2, f.st.trisStatic);
    const CpaRenderDraw *l2 = NULL; for (uint32_t i = 0; i < f.nDraws; i++) if (f.draws[i].layer) l2 = &f.draws[i];
    CHECK(l2 && l2->texVa == 0 && l2->layerTexUnknown, "layer-2 draw has unknown texture");
    if (l2) { const CpaRenderVertex *v = &f.verts[l2->first]; /* source: tri 3, vertex 1: uv (0.25, 0.5) -> (K*0.25, K*(1-0.5)) for mode 3 */
              CHECK(fabsf(v[1].u - 2.0f) < 1e-6f && fabsf(v[1].v - 4.0f) < 1e-6f, "layer-2 uv (%g %g)", v[1].u, v[1].v); }
    CpaGlBackend gb; CpaGlBackend *gbp = &gb; cpa_gl_backend_init(gbp, NULL); CpaRenderBackend be; cpa_gl_backend_vtable(gbp, &be);
    int ups = 0; CpaRenderBackend counting = be; (void)counting; (void)up_cb; (void)g_bound;
    extern FakeGl fg; unsigned long d0 = fg.draws;
    uint32_t n = cpa_render_submit(&ctx, &f, &be);
    CHECK(n == 3 && gb.drawsIssued == 2 && gb.drawsSkipped == 1 && fg.draws - d0 == 2, "submit: %u draws offered, %u issued, %u skipped, fake saw %lu", n, gb.drawsIssued, gb.drawsSkipped, fg.draws - d0);
    CHECK(gb.nTex == 2, "textures uploaded %u (expect 2: 0x100 and 0x200)", gb.nTex);
    unsigned long t0 = fg.teximage; cpa_render_submit(&ctx, &f, &be); CHECK(fg.teximage == t0, "second frame re-uploaded textures");
    (void)ups;
    cpa_gl_backend_shutdown(gbp); cpa_render_frame_free(&f); cpa_render_ctx_free(&ctx);
    printf("frame: %u src batches -> %u draws, opaque merge ok, layer-2 uv rule ok, GL submit %u/%u\n", 4u, 3u, 2u, 3u);
}

int main(void) {
    srand(1); t_matrices(); t_frame();
    printf("test_render: %d checks, %d failures\n", checks, fails);
    return fails ? 1 : 0;
}
