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
    CHECK(l2 && l2->texVa == CPA_TEXVA_BUMP && l2->layerTexUnknown && l2->wrapU == CPA_WRAP_REPEAT, "layer-2 draw uses the substitute bump texture (mode 3 -> non-mip)");
    if (l2) { const CpaRenderVertex *v = &f.verts[l2->first]; /* source: tri 3, vertex 1: uv (0.25, 0.5) -> (K*0.25, K*(1-0.5)) for mode 3 */
              CHECK(fabsf(v[1].u - 2.0f) < 1e-6f && fabsf(v[1].v - 4.0f) < 1e-6f, "layer-2 uv (%g %g)", v[1].u, v[1].v); }
    CpaGlBackend gb; CpaGlBackend *gbp = &gb; cpa_gl_backend_init(gbp, NULL); CpaRenderBackend be; cpa_gl_backend_vtable(gbp, &be);
    int ups = 0; CpaRenderBackend counting = be; (void)counting; (void)up_cb; (void)g_bound;
    extern FakeGl fg; unsigned long d0 = fg.draws;
    uint32_t n = cpa_render_submit(&ctx, &f, &be);
    CHECK(n == 3 && gb.drawsIssued == 3 && gb.drawsSkipped == 0 && gb.drawsLayer2 == 1 && fg.draws - d0 == 3, "submit: %u draws offered, %u issued, %u skipped, %u layer-2, fake saw %lu", n, gb.drawsIssued, gb.drawsSkipped, gb.drawsLayer2, fg.draws - d0);
    CHECK(gb.nTex == 3 && gb.nPlaceholder == 3 && gb.nUploaded == 0, "textures uploaded %u (expect 3: 0x100, 0x200, bump; all placeholders without a provider: %u)", gb.nTex, gb.nPlaceholder);
    unsigned long t0 = fg.teximage; cpa_render_submit(&ctx, &f, &be); CHECK(fg.teximage == t0, "second frame re-uploaded textures");
    (void)ups;
    cpa_gl_backend_shutdown(gbp); cpa_render_frame_free(&f); cpa_render_ctx_free(&ctx);
    printf("frame: %u src batches -> %u draws, opaque merge ok, layer-2 uv rule ok, GL submit %u/%u\n", 4u, 3u, 3u, 3u);
}

/* tex.flags list rule through the builder: 5 items with flags 0 / 0x08 / 0x12 / 0x20 / 0x48 (the shipped post-load values) + one item with the pre-load style 0x04 (no 0x2A bit -> opaque) */
static void t_flagrule(void) {
    static const uint32_t fl[6] = { 0x00, 0x08, 0x12, 0x20, 0x48, 0x04 };
    static const uint8_t expPass[6] = { CPA_PASS_OPAQUE, CPA_PASS_TRANSLUCENT, CPA_PASS_TRANSLUCENT, CPA_PASS_TRANSLUCENT, CPA_PASS_TRANSLUCENT, CPA_PASS_OPAQUE };
    static const uint8_t expBlend[6] = { CPA_BLEND_NONE, CPA_BLEND_ALPHA, CPA_BLEND_ALPHA, CPA_BLEND_ADD, CPA_BLEND_ALPHA, CPA_BLEND_NONE };
    CpaScene s; memset(&s, 0, sizeof s);
    float pos[18 * 3] = { 0 }, uv[18 * 2] = { 0 };
    for (int t = 0; t < 6; t++) for (int v = 0; v < 3; v++) { int i = t * 3 + v; pos[i * 3] = (float)v; pos[i * 3 + 1] = 10.0f + (float)t; pos[i * 3 + 2] = (v == 2) ? 1.0f : 0.0f; }
    CpaDrawItem it[6]; memset(it, 0, sizeof it);
    for (int k = 0; k < 6; k++) { it[k].firstVert = (uint32_t)k * 3; it[k].vertCount = 3; it[k].texVa = 0x100 + 0x10 * (uint32_t)k; it[k].texFlags = fl[k]; it[k].texFlagsValid = 1; it[k].alphaClass = CPA_ALPHA_UNKNOWN; it[k].tileU = it[k].tileV = 1; }
    s.pos = pos; s.uv = uv; s.nVerts = 18; s.items = it; s.nItems = 6;
    for (int rule = 1; rule >= 0; rule--) {
        CpaRenderCtx ctx; CpaRenderOpts o; cpa_render_opts_default(&o); o.flagRule = rule; cpa_render_ctx_init(&ctx, &s, &o);
        CpaFrameInput in; memset(&in, 0, sizeof in);
        float cp[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 }; cpa_camera_from_rows(&in.cam, cp, up, fw, 1.2f, 0.75f); in.w = 640; in.h = 480; in.fit = CPA_FIT_HORPLUS;
        CpaRenderFrame f; CHECK(cpa_render_build_frame(&ctx, &f, &in), "build");
        int bad = 0;
        for (uint32_t d = 0; d < f.nDraws; d++) { int k = (int)((f.draws[d].texVa - 0x100) / 0x10); if (k < 0 || k > 5) { bad++; continue; }
            if (rule) { if (f.draws[d].pass != expPass[k] || f.draws[d].blend != expBlend[k]) bad++; if ((f.draws[d].pass == CPA_PASS_OPAQUE) != (f.draws[d].cullBack == 1)) bad++; }
            else if (k == 5 && f.draws[d].pass != CPA_PASS_TRANSLUCENT) bad++; /* old behaviour: unknown flags -> translucent */ }
        CHECK(bad == 0, "flag rule %d: %d wrong draws", rule, bad);
        CHECK(rule ? f.st.passByFlags == 6 : f.st.passByFlags == 0, "passByFlags %u", f.st.passByFlags);
        cpa_render_frame_free(&f); cpa_render_ctx_free(&ctx);
    }
    printf("flag rule: 0x00 opaque, 0x08/0x12/0x48 alpha blend, 0x20 additive, 0x04 (no 0x2A bit) opaque; rule off keeps the drawlist classes\n");
}

/* wrap byte decode + substitute bump texture content + store lookups, asset free */
static void t_store(void) {
    uint8_t u, v;
    /* measured against the oracle TSP bits (00, 01, 02, 04, 10, 18); 08 and 24 are INFERRED */
    static const struct { uint8_t wb, u, v; } tab[] = { { 0x00, CPA_WRAP_CLAMP, CPA_WRAP_CLAMP }, { 0x01, CPA_WRAP_REPEAT, CPA_WRAP_REPEAT }, { 0x02, CPA_WRAP_MIRROR, CPA_WRAP_MIRROR },
        { 0x04, CPA_WRAP_REPEAT, CPA_WRAP_CLAMP }, { 0x10, CPA_WRAP_CLAMP, CPA_WRAP_REPEAT }, { 0x18, CPA_WRAP_MIRROR, CPA_WRAP_REPEAT }, { 0x08, CPA_WRAP_MIRROR, CPA_WRAP_REPEAT }, { 0x24, CPA_WRAP_REPEAT, CPA_WRAP_MIRROR } };
    for (unsigned i = 0; i < sizeof tab / sizeof *tab; i++) { cpa_tex_wrap_modes(tab[i].wb, &u, &v); CHECK(u == tab[i].u && v == tab[i].v, "wrap byte %02x -> %u %u", tab[i].wb, u, v); }
    CpaTexStore st; memset(&st, 0, sizeof st);
    const uint32_t *b0 = cpa_texstore_pixels(&st, CPA_TEXVA_BUMP_MIP), *b1 = cpa_texstore_pixels(&st, CPA_TEXVA_BUMP);
    CHECK(b0 && b1 && b0 != b1, "bump substitutes decode");
    if (b0 && b1) {
        unsigned white = 0, sum0 = 0, sum1 = 0, differ = 0;
        for (int i = 0; i < 64 * 64; i++) { white += (b0[i] & 0xFFFFFF) == 0xFFFFFF && (b1[i] & 0xFFFFFF) == 0xFFFFFF; sum0 += b0[i] >> 24; sum1 += b1[i] >> 24; differ += b0[i] != b1[i]; }
        CHECK(white == 64 * 64, "bump texels are white (alpha carries the intensity)");
        CHECK(sum0 / 4096 > 8 && sum0 / 4096 < 200 && sum1 / 4096 > 8 && sum1 / 4096 < 200 && differ > 3000, "bump alpha mean %u / %u, differing texels %u", sum0 / 4096, sum1 / 4096, differ);
        printf("bump substitute: 64x64 white, mean alpha mip %u/255, non-mip %u/255\n", sum0 / 4096, sum1 / 4096);
    }
    CpaTexDesc d; memset(&d, 0, sizeof d);
    CHECK(cpa_texstore_describe(&st, CPA_TEXVA_BUMP_MIP, &d) && d.width == 64 && d.mip && d.substitute && d.rgba, "describe bump mip");
    CHECK(!cpa_texstore_describe(&st, 0x8C123456, &d), "unknown VA is not described");
    cpa_texstore_free(&st);
}


/* per-vertex colours through the builder and the GL backend (asset free): scene colours reach CpaRenderVertex, layer 2 is white, the additive fade changes only alpha, useLighting = 0 gives
 * white, the backend binds the colour array on base draws and not on layer-2 draws. The numbers of the colours themselves are checked in test_light / lightcmp_static. */
static void t_colors(void) {
    CpaScene s; memset(&s, 0, sizeof s);
    float pos[9 * 3] = { 0 }, uv[9 * 2] = { 0 };
    for (int t = 0; t < 3; t++) for (int v = 0; v < 3; v++) { int i = t * 3 + v; pos[i * 3] = (float)v; pos[i * 3 + 1] = 10.0f + 40.0f * (float)t; pos[i * 3 + 2] = (v == 2) ? 1.0f : 0.0f; }
    CpaDrawItem it[3]; memset(it, 0, sizeof it);
    for (int k = 0; k < 3; k++) { it[k].firstVert = (uint32_t)k * 3; it[k].vertCount = 3; it[k].texVa = 0x100 + 0x100 * (uint32_t)k; it[k].texFlagsValid = 1; it[k].tileU = it[k].tileV = 1; }
    it[0].texFlags = 0; it[1].texFlags = 0x20; it[2].texFlags = 0; it[2].overlayMode = 1;       /* opaque / additive / opaque with a layer-2 pass */
    uint32_t col[9], mat[9]; CpaLightMat lm[2]; memset(lm, 0, sizeof lm);
    lm[0].valid = 1; lm[0].flags = 0x4ddc07ffu; lm[1] = lm[0]; lm[1].texFlags = 0x20;
    for (int i = 0; i < 9; i++) { col[i] = CPA_ARGB(255, 10 + i, 20 + i, 30 + i); mat[i] = (i >= 3 && i < 6) ? 1u : 0u; }
    s.pos = pos; s.uv = uv; s.nVerts = 9; s.items = it; s.nItems = 3; s.col = col; s.vtxMat = mat; s.lmat = lm; s.nLmat = 2;
    CpaRenderCtx ctx; CpaRenderOpts o; cpa_render_opts_default(&o); cpa_render_ctx_init(&ctx, &s, &o);
    CpaFrameInput in; memset(&in, 0, sizeof in);
    float cp[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 }; cpa_camera_from_rows(&in.cam, cp, up, fw, 1.2f, 0.75f); in.w = 640; in.h = 480; in.fit = CPA_FIT_HORPLUS;
    in.fade.enabled = 1; in.fade.p[0] = 0; in.fade.p[1] = 100; in.fade.p[2] = 50000; in.fade.p[3] = 0; in.fade.p[4] = 2.0f;      /* reduction 2*z: the additive triangle at depth 50 -> alpha 255-100 = 155 */
    CpaRenderFrame f; CHECK(cpa_render_build_frame(&ctx, &f, &in), "build");
    int plain = 0, faded = 0, l2white = 0, l2n = 0;
    for (uint32_t d = 0; d < f.nDraws; d++) { const CpaRenderDraw *dr = &f.draws[d];
        for (uint32_t v = 0; v < dr->count; v++) { const CpaRenderVertex *vx = &f.verts[dr->first + v];
            if (dr->layer) { l2n++; l2white += vx->r == 255 && vx->g == 255 && vx->b == 255 && vx->a == 255; continue; }
            if (dr->blend == CPA_BLEND_ADD) { faded += vx->a == 155 && vx->r >= 13 && vx->r <= 15; }
            else plain += vx->a == 255 && vx->g == vx->r + 10 && vx->b == vx->r + 20; } }
    CHECK(plain == 6 && faded == 3, "base colours reach the vertex stream: %d plain, %d faded additive (expect 6 / 3)", plain, faded);
    CHECK(l2n == 3 && l2white == 3, "layer-2 vertices are opaque white (%d/%d)", l2white, l2n);
    CHECK(sizeof(CpaRenderVertex) == 24, "vertex size %zu", sizeof(CpaRenderVertex));
    { CpaDrawList dl; int okd = cpa_drawlist_build(&dl, &s, NULL); const uint32_t *c0 = okd && dl.nBatches ? cpa_batch_colors(&dl, &dl.batches[0]) : NULL;
      CHECK(okd && dl.nBatches > 0 && c0 && c0 == s.col + dl.batches[0].firstVert && c0[0] == s.col[dl.batches[0].firstVert], "cpa_batch_colors points into CpaScene.col"); if (okd) cpa_drawlist_free(&dl); }
    extern FakeGl fg; CpaGlBackend gb; cpa_gl_backend_init(&gb, NULL); CpaRenderBackend be; cpa_gl_backend_vtable(&gb, &be);
    unsigned long c0 = fg.colptr; cpa_render_submit(&ctx, &f, &be);
    CHECK(fg.colptr - c0 == 1, "one glColorPointer per frame (%lu)", fg.colptr - c0);
    CHECK(gb.drawsLayer2 == 1 && gb.drawsIssued == f.nDraws, "all %u draws issued, layer 2 %u", f.nDraws, gb.drawsLayer2);
    CHECK(fgr.cs_bits & (1u << (GL_COLOR_ARRAY & 7)), "the last (base, additive) draw leaves the colour array enabled after the layer-2 draw switched it off");
    cpa_gl_backend_shutdown(&gb); cpa_render_frame_free(&f); cpa_render_ctx_free(&ctx);
    /* lighting off: everything white, as before */
    { CpaRenderOpts o2 = o; o2.useLighting = 0; CpaRenderCtx c2; cpa_render_ctx_init(&c2, &s, &o2); CpaRenderFrame f2; CHECK(cpa_render_build_frame(&c2, &f2, &in), "build");
      int nw = 0; for (uint32_t v = 0; v < f2.nVerts; v++) nw += f2.verts[v].r == 255 && f2.verts[v].g == 255 && f2.verts[v].b == 255 && f2.verts[v].a == 255;
      CHECK(nw == (int)f2.nVerts, "useLighting = 0 -> all white (%d/%u)", nw, f2.nVerts); cpa_render_frame_free(&f2); cpa_render_ctx_free(&c2); }
    printf("colours: scene ARGB -> vertex stream, additive fade alpha, layer 2 white, colour array on base draws only\n");
}


/* lit sprite colour (CpaSprite.col from cpa_sprites_light) reaches the vertex stream; unlit (white) when lighting is off */
static void t_sprite_color(void) {
    CpaScene s; memset(&s, 0, sizeof s);
    CpaSprite sp; memset(&sp, 0, sizeof sp); sp.pos[0] = 0; sp.pos[1] = 50; sp.pos[2] = 0; sp.sizeX = sp.sizeY = 2.0f; sp.texVa = 0x100; sp.texFlagsValid = 1; sp.tileU = sp.tileV = 1; sp.alphaClass = CPA_ALPHA_BLEND; sp.col = 0x80402010u;
    s.sprites = &sp; s.nSprites = 1;
    CpaRenderOpts o; cpa_render_opts_default(&o); CpaRenderCtx ctx; cpa_render_ctx_init(&ctx, &s, &o);
    CpaFrameInput in; memset(&in, 0, sizeof in);
    float cp[3] = { 0, 0, 0 }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 }; cpa_camera_from_rows(&in.cam, cp, up, fw, 1.2f, 0.75f); in.w = 640; in.h = 480; in.fit = CPA_FIT_HORPLUS;
    CpaRenderFrame f; CHECK(cpa_render_build_frame(&ctx, &f, &in), "build");
    int ok = 0; for (uint32_t v = 0; v < f.nVerts; v++) ok += f.verts[v].a == 0x80 && f.verts[v].r == 0x40 && f.verts[v].g == 0x20 && f.verts[v].b == 0x10;
    CHECK(f.nVerts == 6 && ok == 6, "sprite quad carries CpaSprite.col (%d/%u)", ok, f.nVerts);
    cpa_render_frame_free(&f);
    CpaRenderOpts o2 = o; o2.useLighting = 0; CpaRenderCtx c2; cpa_render_ctx_init(&c2, &s, &o2); CpaRenderFrame f2; CHECK(cpa_render_build_frame(&c2, &f2, &in), "build");
    int w = 0; for (uint32_t v = 0; v < f2.nVerts; v++) w += f2.verts[v].r == 255 && f2.verts[v].a == 255;
    CHECK(w == (int)f2.nVerts && f2.nVerts == 6, "sprite colour ignored when lighting is off (%d)", w);
    cpa_render_frame_free(&f2); cpa_render_ctx_free(&c2); cpa_render_ctx_free(&ctx);
    printf("sprite colours: CpaSprite.col -> vertex stream (white with lighting off)\n");
}

int main(void) {
    srand(1); t_matrices(); t_frame(); t_flagrule(); t_store(); t_colors(); t_sprite_color();
    printf("test_render: %d checks, %d failures\n", checks, fails);
    return fails ? 1 : 0;
}
