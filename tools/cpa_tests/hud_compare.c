/* hud_compare: native HUD (cpa_hud) vs the oracle's TA stream.
 *   hud_compare CAPDIR [--ram prev|same] [-v] [--scene N]
 * CAPDIR = a ta_capture / ta_levels.sh directory (f<N>/frame.bin = oracle TA scene N, ram_<N>.bin / ram_<N-1>.bin = guest RAM). The oracle HUD = every strip whose vertices all have z (1/w) >= 100
 * (the 2D layer is emitted at z = 512; world geometry never reaches 100: ta_actor 'screenQHud'). Native quads come from cpa_hud_build(ram) with nothing read from the TA stream.
 * A native quad MATCHES an oracle strip when: all 4 vertices agree within 0.1 px (same vertex order), the texture identity agrees (tcw computed from the live surface descriptor of the quad's
 * texture struct, cpa_desc_tcw), u/v within 1e-3, ARGB within 1 level per channel, and the list (0 opaque / 2 translucent) equals cpa_hud_pass. Each oracle strip is used once.
 * Residual causes are reported per class, never folded into the match count. */
#include "../../src/cpa/cpa_hud.h"
#include "../../src/cpa/cpa_tex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { int id; uint32_t tcw, list, tsp; float x[4], y[4], u[4], v[4]; uint32_t argb[4]; int used; } OStrip;

static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = (uint8_t *)malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static uint32_t pack(const float c[4]) { uint32_t o = 0; for (int i = 0; i < 4; i++) { int v = (int)(c[i] * 255.0f + 0.5f); if (v < 0) v = 0; if (v > 255) v = 255; o = (o << 8) | (uint32_t)v; } return o; }

typedef struct {
    uint32_t scenes, oracle, native, matched, nativeFirstTry;
    uint32_t oGeomTexDiff, oGeomOther, oNone, oNoneText, oNoneGlyphless;    /* unmatched oracle strips by cause */
    uint32_t nExtra[5];                                                        /* unmatched native quads by CpaHudKind */
    uint32_t mUvBad, mColBad, mListBad, mListChecked;                          /* among geometry+texture matches */
    uint32_t byKind[5], matchedByKind[5];
    double maxPosErr;
    uint32_t sceneExact, sceneAny;                                             /* scenes whose oracle HUD is matched 100% / that have any HUD */
    CpaHudStats st;
} Tot;

static int tcw_of(const CpaImage *ram, uint32_t texVa, uint32_t *tcw) {
    uint32_t d, w2, w6, w7;
    if (!texVa || !cpa_rd32(ram, texVa, &d) || !cpa_rd32(ram, d + 8, &w2) || !cpa_rd32(ram, d + 24, &w6) || !cpa_rd32(ram, d + 28, &w7)) return 0;
    *tcw = cpa_desc_tcw(w2, w6, w7); return 1;
}

static int run_scene(const char *capdir, long scene, int prev, int verbose, Tot *T) {
    char p[1200]; size_t n = 0, nr = 0;
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); uint8_t *fb = slurp(p, &n); if (!fb || n < 16) { free(fb); return 0; }
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, prev ? scene - 1 : scene); uint8_t *ram = slurp(p, &nr);
    if (!ram || nr != (16u << 20)) { free(fb); free(ram); return 0; }
    uint32_t ns = ((uint32_t *)fb)[1], nv = ((uint32_t *)fb)[2];
    const TaS *S = (const TaS *)(fb + 16); const TaV *V = (const TaV *)(fb + 16 + 32u * ns);
    OStrip *O = (OStrip *)calloc(ns + 1, sizeof *O); uint32_t no = 0;
    for (uint32_t i = 0; i < ns; i++) {
        if (S[i].count != 4 || S[i].first + 4 > nv) continue;
        int hud = 1; for (int k = 0; k < 4; k++) if (V[S[i].first + k].z < 100.0f) hud = 0;
        if (!hud) continue;
        OStrip *o = &O[no++]; o->id = (int)i; o->tcw = S[i].tcw; o->list = S[i].list; o->tsp = S[i].tsp;
        for (int k = 0; k < 4; k++) { const TaV *v = &V[S[i].first + k]; o->x[k] = v->x; o->y[k] = v->y; o->u[k] = v->u; o->v[k] = v->v; o->argb[k] = pack(v->base); }
    }
    CpaImage im; cpa_image_init(&im); cpa_image_add(&im, ram, nr, 0x8C000000u);
    CpaHudFrame F; if (!cpa_hud_build(&F, &im, NULL)) { fprintf(stderr, "scene %ld: hud build failed\n", scene); free(fb); free(ram); free(O); return 0; }
    T->scenes++; T->oracle += no; T->native += F.n;
    T->st.glyphsNoVm += F.st.glyphsNoVm; T->st.unkWobble += F.st.unkWobble; T->st.unkTypewriter += F.st.unkTypewriter; T->st.unkFade += F.st.unkFade; T->st.unkMarkup += F.st.unkMarkup; T->st.gaugeVertical += F.st.gaugeVertical;
    uint32_t matchedHere = 0;
    uint8_t *nused = (uint8_t *)calloc(F.n + 1, 1);
    /* pass 1: full match */
    for (uint32_t qi = 0; qi < F.n; qi++) {
        const CpaHudQuad *q = &F.q[qi]; uint32_t tcw = 0; int have = tcw_of(&im, q->texVa, &tcw); T->byKind[q->kind]++;
        for (uint32_t oi = 0; oi < no; oi++) {
            OStrip *o = &O[oi]; if (o->used) continue;
            double e = 0; for (int k = 0; k < 4; k++) { double dx = fabs(q->x[k] - o->x[k]), dy = fabs(q->y[k] - o->y[k]); if (dx > e) e = dx; if (dy > e) e = dy; }
            if (e > 0.1) continue;
            if (!have || tcw != o->tcw) continue;
            int uvbad = 0, colbad = 0;
            for (int k = 0; k < 4; k++) {
                if (fabs(q->u[k] - o->u[k]) > 1e-3 || fabs(q->v[k] - o->v[k]) > 1e-3) uvbad = 1;
                for (int s = 0; s < 32; s += 8) { int a = (int)((q->argb[k] >> s) & 255), b = (int)((o->argb[k] >> s) & 255); if (abs(a - b) > 1) colbad = 1; }
            }
            uint32_t fl = 0, w, h; int tr = 0, ad = 0; uint32_t minA = 255; for (int k = 0; k < 4; k++) { uint32_t a = q->argb[k] >> 24; if (a < minA) minA = a; }
            cpa_hud_tex_info(&im, q->texVa, &fl, &w, &h); cpa_hud_pass(fl, minA, &tr, &ad);
            int listbad = (o->list == 2) != (tr != 0);
            o->used = 1; nused[qi] = 1; matchedHere++; T->matched++; T->matchedByKind[q->kind]++;
            T->mUvBad += uvbad; T->mColBad += colbad; T->mListChecked++; T->mListBad += listbad; if (e > T->maxPosErr) T->maxPosErr = e;
            if (verbose && (uvbad || colbad || listbad)) printf("  scene %ld quad %u kind %u: uvbad %d colbad %d listbad %d (oracle list %u tr %d flags %x)\n", scene, qi, q->kind, uvbad, colbad, listbad, o->list, tr, fl);
            break;
        }
    }
    /* residual classification */
    for (uint32_t oi = 0; oi < no; oi++) {
        OStrip *o = &O[oi]; if (o->used) continue;
        int geomTex = 0, geomOther = 0;
        for (uint32_t qi = 0; qi < F.n; qi++) {
            if (nused[qi]) continue; const CpaHudQuad *q = &F.q[qi];
            double e = 0; for (int k = 0; k < 4; k++) { double dx = fabs(q->x[k] - o->x[k]), dy = fabs(q->y[k] - o->y[k]); if (dx > e) e = dx; if (dy > e) e = dy; }
            if (e <= 0.1) { uint32_t tcw = 0; if (tcw_of(&im, q->texVa, &tcw) && tcw != o->tcw) geomTex = 1; else geomOther = 1; }
        }
        if (geomTex) T->oGeomTexDiff++; else if (geomOther) T->oGeomOther++; else T->oNone++;
        if (verbose) printf("  scene %ld oracle strip %d unmatched (%s) tcw %08x list %u at x %.2f..%.2f y %.2f..%.2f u %.2f..%.2f\n", scene, o->id, geomTex ? "position ok, texture differs" : geomOther ? "position ok, other" : "no native quad there", o->tcw, o->list, o->x[0], o->x[3], o->y[0], o->y[3], o->u[0], o->u[3]);
    }
    for (uint32_t qi = 0; qi < F.n; qi++) if (!nused[qi]) { T->nExtra[F.q[qi].kind]++; if (verbose) printf("  scene %ld native quad %u (kind %u slot %u ch %u) unmatched\n", scene, qi, F.q[qi].kind, F.q[qi].slot, F.q[qi].ch); }
    if (no) { T->sceneAny++; if (matchedHere == no && matchedHere == F.n) T->sceneExact++; }
    cpa_hud_frame_free(&F); free(nused); free(O); free(fb); free(ram); return 1;
}

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: hud_compare CAPDIR [--ram prev|same] [-v] [--scene N]\n"); return 1; }
    const char *capdir = argv[1]; int prev = 0, verbose = 0; long only = -1;
    for (int i = 2; i < argc; i++) { if (!strcmp(argv[i], "--ram") && i + 1 < argc) prev = !strcmp(argv[++i], "prev"); else if (!strcmp(argv[i], "-v")) verbose = 1; else if (!strcmp(argv[i], "--scene") && i + 1 < argc) only = atol(argv[++i]); }
    DIR *d = opendir(capdir); if (!d) { perror(capdir); return 1; }
    long scenes[256]; int ns = 0; struct dirent *e;
    while ((e = readdir(d)) && ns < 256) if (e->d_name[0] == 'f' && e->d_name[1] >= '0' && e->d_name[1] <= '9') scenes[ns++] = atol(e->d_name + 1);
    closedir(d);
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    Tot T; memset(&T, 0, sizeof T);
    for (int i = 0; i < ns; i++) if (only < 0 || scenes[i] == only) run_scene(capdir, scenes[i], prev, verbose, &T);
    printf("HUD %s ram=%s scenes %u | oracle HUD strips %u native quads %u matched %u (%.2f%% of oracle, %.2f%% of native) | oracle unmatched: position ok/texture differs %u, position ok/other %u, no native quad %u | native unmatched by kind sprite %u gaugeRest %u gaugeBar %u textB %u textA %u | matched with uv-bad %u col-bad %u list-bad %u of %u (max pos err %.4f px) | scenes with HUD %u, fully exact %u | text slots using unmodelled features: wobble %u typewriter %u fade %u markup %u, glyphs without VM %u, vertical gauges %u\n",
           capdir, prev ? "prev" : "same", T.scenes, T.oracle, T.native, T.matched, T.oracle ? 100.0 * T.matched / T.oracle : 100.0, T.native ? 100.0 * T.matched / T.native : 100.0,
           T.oGeomTexDiff, T.oGeomOther, T.oNone, T.nExtra[0], T.nExtra[1], T.nExtra[2], T.nExtra[3], T.nExtra[4], T.mUvBad, T.mColBad, T.mListBad, T.mListChecked, T.maxPosErr, T.sceneAny, T.sceneExact,
           T.st.unkWobble, T.st.unkTypewriter, T.st.unkFade, T.st.unkMarkup, T.st.glyphsNoVm, T.st.gaugeVertical);
    printf("  by kind (matched/native): sprite %u/%u gaugeRest %u/%u gaugeBar %u/%u textB %u/%u textA %u/%u\n", T.matchedByKind[0], T.byKind[0], T.matchedByKind[1], T.byKind[1], T.matchedByKind[2], T.byKind[2], T.matchedByKind[3], T.byKind[3], T.matchedByKind[4], T.byKind[4]);
    return 0;
}
