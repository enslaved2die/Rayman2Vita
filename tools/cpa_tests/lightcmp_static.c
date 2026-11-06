/* lightcmp_static: compares the per-vertex colour the native engine computes for STATIC level geometry (CpaScene.col from cpa_light: RLI + VisualMaterial, plus the additive-fade
 * of cpa_light_fade_*) with the colour of the same vertex in the oracle TA stream (f<N>/frame.bin, base colour = the guest's vertex ARGB).
 *   lightcmp_static CAPDIR DCDATA_DIR --level Learn_10 [--tol PX] [--ztol REL] [-v]
 * CAPDIR = a ta_capture directory (build/ta2_<LEVEL>/ : f<N>/frame.bin + ram_<N-1>.bin). Camera model, projection, pixel centre and the tolerances are those of ta_compare.c (VERIFIED there);
 * a native vertex and an oracle vertex are paired iff x, y agree within --tol px and 1/w within --ztol (relative) - no colour or UV is used for the pairing. Native vertices are all
 * draw vertices of non-actor items of the scene; the scene is loaded from the DAT (+ FIX.DAT) and the post-load texture flags of the level .TEX are applied (cpa_scene_apply_tex), as the
 * running game has them. Several native vertices can share a position (different materials of one IPO, duplicate polygons): an oracle vertex counts as reproduced if ANY paired native
 * vertex gives its colour, and it is reported separately whether ALL paired native vertices agree with each other (then the pairing is unambiguous).
 * Excluded and counted apart: second-layer (bump) draws, recognised as base RGB = 0 with a non-zero offset colour (their colours are not lit vertex colours, see notes_lighting.md).
 * Per level the output line is  LIGHTSTATIC <level> scenes N oracle-verts ... ; the exit code is 0. */
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_light.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>

#define RAM_BASE 0x8C000000u
#define NEAR_ZC 0.25
typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - RAM_BASE), 4); return f; }
typedef struct { double fx, fy, C[3], U[3], F[3], L[3]; } Cam;
typedef struct { float sx, sy, w; double zc; uint32_t vert; } NV;
static int cmp_nv(const void *a, const void *b) { float x = ((const NV *)a)->sx, y = ((const NV *)b)->sx; return x < y ? -1 : x > y; }
static uint32_t pack_f(const float c[4]) { uint32_t v = 0; for (int i = 0; i < 4; i++) { int b = (int)lroundf(c[i] * 255.f); if (b < 0) b = 0; if (b > 255) b = 255; v = v << 8 | (uint32_t)b; } return v; }

typedef struct {
    uint32_t oracle, layer2, matched, exactAny, exactOn, exactOff, exactRgb, exactAlpha, unambiguous, unambExact, unmatched, fadeApplied, fadeExact, nonOpaqueAlpha;
    uint32_t errHist[5];    /* max per-channel error of the best candidate: 0, 1, 2-3, 4-15, >=16 */
    uint32_t perChanErr[4][2]; /* [channel A,R,G,B][ <=1 , total ] over matched */
    int maxErr;
} Tot;

static int do_scene(const CpaScene *sc, const char *capdir, long scene, double tol, double ztol, int verbose, Tot *tot) {
    char p[1100]; size_t n; long rs = scene - 1;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); FILE *t = fopen(p, "rb"); if (t) fclose(t); else rs = scene;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) { fprintf(stderr, "bad %s\n", p); return 2; }
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) { fprintf(stderr, "cannot read %s\n", p); return 2; }
    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    if (16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) != fn) { fprintf(stderr, "frame.bin size mismatch\n"); return 2; }
    Cam cam; float hfov = rdf(ram, 0x8C00F300), asp = rdf(ram, 0x8C00F304);
    for (int i = 0; i < 3; i++) { cam.U[i] = rdf(ram, 0x8C00F308 + 4 * i); cam.F[i] = rdf(ram, 0x8C00F314 + 4 * i); cam.C[i] = rdf(ram, 0x8C00F394 + 4 * i); }
    cam.L[0] = cam.U[1]*cam.F[2] - cam.U[2]*cam.F[1]; cam.L[1] = cam.U[2]*cam.F[0] - cam.U[0]*cam.F[2]; cam.L[2] = cam.U[0]*cam.F[1] - cam.U[1]*cam.F[0];
    cam.fx = 320.0 / tan(hfov / 2.0); cam.fy = 240.0 / tan(hfov * asp / 2.0);
    if (!isfinite(hfov) || hfov < 0.1f || hfov > 3.0f) { printf("scene %ld: no valid camera\n", scene); free(ram); free(fb); return 1; }
    CpaImage ri; cpa_image_init(&ri); cpa_image_add(&ri, ram, n, RAM_BASE);
    CpaLightFade fade; cpa_light_fade_from_ram(&ri, &fade);
    /* native vertices */
    NV *nv = malloc(sizeof(NV) * (sc->nVerts + 1)); uint32_t nn = 0;
    for (uint32_t it = 0; it < sc->nItems; it++) { const CpaDrawItem *d = &sc->items[it]; if (d->isActor) continue;
        for (uint32_t k = 0; k < d->vertCount; k++) { uint32_t vi = d->firstVert + k; const float *P = &sc->pos[vi * 3];
            double r[3] = { P[0] - cam.C[0], P[1] - cam.C[1], P[2] - cam.C[2] }; double zc = cam.F[0]*r[0] + cam.F[1]*r[1] + cam.F[2]*r[2]; if (zc < NEAR_ZC) continue;
            NV *q = &nv[nn++]; q->sx = (float)(320.0 - cam.fx * (cam.L[0]*r[0] + cam.L[1]*r[1] + cam.L[2]*r[2]) / zc); q->sy = (float)(240.0 - cam.fy * (cam.U[0]*r[0] + cam.U[1]*r[1] + cam.U[2]*r[2]) / zc);
            q->w = (float)(1.0 / (4.0 * zc)); q->zc = zc; q->vert = vi; } }
    qsort(nv, nn, sizeof *nv, cmp_nv);
    uint8_t *done = calloc(nvert + 1, 1);
    for (uint32_t s = 0; s < nstrip; s++) { const TaS *st = &strips[s]; if (st->sprite) continue;
        for (uint32_t k = 0; k < st->count; k++) {
            uint32_t oi = st->first + k; if (done[oi]) continue; done[oi] = 1; const TaV *o = &tv[oi];
            uint32_t ob = pack_f(o->base), oo = pack_f(o->off);
            tot->oracle++;
            if ((ob & 0x00FFFFFFu) == 0 && (oo & 0x00FFFFFFu) != 0) { tot->layer2++; continue; }
            uint32_t lo = 0, hi = nn; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (nv[m].sx < o->x - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
            int ncand = 0, anyExact = 0, anyOn = 0, anyOff = 0, anyRgb = 0, anyA = 0, allSame = 1, bestErr = 255, bestChan[4] = { 255, 255, 255, 255 }, usedFade = 0; uint32_t first = 0, bestCol = 0;
            for (uint32_t m = lo; m < nn && nv[m].sx <= o->x + (float)tol + 1e-3f; m++) {
                if (fabsf(nv[m].sy - o->y) > tol || fabs(nv[m].w - o->z) / (fabs(o->z) + 1e-9) > ztol) continue;
                uint32_t vi = nv[m].vert, cu = sc->col[vi], mi = sc->vtxMat[vi], cf = cu;     /* cu: unfaded, cf: with the additive distance fade of the RAM block (cpa_light_fade_*) */
                if (mi < sc->nLmat && fade.enabled && (sc->lmat[mi].texFlags & 0x20)) cf = cpa_light_fade_argb(&fade, &sc->lmat[mi], cu, (float)nv[m].zc, 1.0f);
                if (cf == ob) anyOn = 1;
                if (cu == ob) anyOff = 1;
                for (int pass = 0; pass < 2; pass++) {
                    uint32_t c = pass ? cf : cu; if (pass && cf == cu) break;
                    if (!pass || cf != cu) { if (!ncand && !pass) first = c; else if (!pass && c != first) allSame = 0; }
                    int ch[4] = { (int)(c >> 24), (int)(c >> 16 & 255), (int)(c >> 8 & 255), (int)(c & 255) }, oc[4] = { (int)(ob >> 24), (int)(ob >> 16 & 255), (int)(ob >> 8 & 255), (int)(ob & 255) }, me = 0;
                    for (int j = 0; j < 4; j++) { int e = abs(ch[j] - oc[j]); if (e > me) me = e; }
                    if (c == ob) { anyExact = 1; if (pass) usedFade = 1; }
                    if ((c & 0x00FFFFFFu) == (ob & 0x00FFFFFFu)) anyRgb = 1;
                    if ((c >> 24) == (ob >> 24)) anyA = 1;
                    if (me < bestErr) { bestErr = me; bestCol = c; for (int j = 0; j < 4; j++) bestChan[j] = abs(ch[j] - oc[j]); }
                }
                ncand++;
            }
            if (!ncand) { tot->unmatched++; continue; }
            tot->matched++; tot->exactAny += anyExact; tot->exactOn += anyOn; tot->exactOff += anyOff; tot->exactRgb += anyRgb; tot->exactAlpha += anyA; if (allSame) { tot->unambiguous++; tot->unambExact += (first == ob); }
            if ((ob >> 24) != 255) tot->nonOpaqueAlpha++;
            if (usedFade) { tot->fadeApplied++; tot->fadeExact++; }
            tot->errHist[bestErr == 0 ? 0 : bestErr == 1 ? 1 : bestErr <= 3 ? 2 : bestErr <= 15 ? 3 : 4]++; if (bestErr > tot->maxErr) tot->maxErr = bestErr;
            for (int j = 0; j < 4; j++) { tot->perChanErr[j][1]++; if (bestChan[j] <= 1) tot->perChanErr[j][0]++; }
            if (verbose && !anyExact) printf("  MISS scene %ld oracle vertex %u: oracle %08X best native %08X (maxerr %d) cands %d  xy (%.2f,%.2f)\n", scene, oi, ob, bestCol, bestErr, ncand, o->x, o->y);
        } }
    free(done); free(nv); free(ram); free(fb);
    return 0;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; double tol = 0.05, ztol = 2e-3; int verbose = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--tol") && i + 1 < argc) tol = atof(argv[++i]);
        else if (!strcmp(argv[i], "--ztol") && i + 1 < argc) ztol = atof(argv[++i]);
        else if (!strcmp(argv[i], "-v")) verbose = 1;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--tol px] [--ztol rel] [-v]\n", argv[0]); return 2; }
    long scenes[256]; int ns = 0;
    { DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long k; if (sscanf(e->d_name, "f%ld", &k) == 1 && ns < 256) scenes[ns++] = k; } if (d) closedir(d); }
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    char fixp[1100], lvlp[1100], texp[1100], up[64]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata);
    snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c);
    snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up); snprintf(texp, sizeof texp, "%s/%s/%s.TEX", dcdata, up, up);
    uint8_t *fix, *lvl, *tex = NULL; size_t fixN, lvlN, texN = 0; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN) || !cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "load failed\n"); return 2; }
    if (cpa_read_file(texp, &tex, &texN)) { CpaTexInfo *ti; uint32_t nti; if (cpa_tex_table(&img, tex, texN, &ti, &nti)) { cpa_scene_apply_tex(&sc, ti, nti); free(ti); } }
    Tot tot; memset(&tot, 0, sizeof tot);
    for (int i = 0; i < ns; i++) do_scene(&sc, capdir, scenes[i], tol, ztol, verbose, &tot);
    uint32_t m = tot.matched ? tot.matched : 1;
    printf("LIGHTSTATIC %s scenes %d oracle-verts %u (second-layer/bump %u excluded) matched-to-static %u unmatched %u | ARGB exact: fade as the RAM block says %u (%.3f%%), no fade %u (%.3f%%), either %u (%.3f%%) | RGB exact %u (%.3f%%) alpha exact %u (%.3f%%) | unambiguous pairings %u, of which exact %u | max channel error of best candidate: 0:%u 1:%u 2-3:%u 4-15:%u >=16:%u (overall max %d) | per-channel within 1 (A R G B): %.3f%% %.3f%% %.3f%% %.3f%% | non-opaque oracle alpha %u, fade applied in %u exact pairs\n",
           level, ns, tot.oracle, tot.layer2, tot.matched, tot.unmatched, tot.exactOn, 100.0 * tot.exactOn / m, tot.exactOff, 100.0 * tot.exactOff / m, tot.exactAny, 100.0 * tot.exactAny / m, tot.exactRgb, 100.0 * tot.exactRgb / m, tot.exactAlpha, 100.0 * tot.exactAlpha / m,
           tot.unambiguous, tot.unambExact, tot.errHist[0], tot.errHist[1], tot.errHist[2], tot.errHist[3], tot.errHist[4], tot.maxErr,
           100.0 * tot.perChanErr[0][0] / m, 100.0 * tot.perChanErr[1][0] / m, 100.0 * tot.perChanErr[2][0] / m, 100.0 * tot.perChanErr[3][0] / m, tot.nonOpaqueAlpha, tot.fadeApplied);
    cpa_scene_free(&sc); free(fix); free(lvl); free(tex);
    return 0;
}
