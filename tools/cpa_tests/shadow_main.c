/* shadow_run: native render path in SHADOW MODE against the oracle (docs/NATIVE_ENGINE.md sec. 4 kind C, sec. 6 shadow mode).
 *   shadow_run CAPDIR DCDATA_DIR [--level Learn_10] [--scene N | --all] [--glc PATH_TO_test_glcount] [-v]
 * CAPDIR is a ta_capture directory (f<N>/frame.bin + vram.bin etc., ram_<N-1>.bin), exactly as for ta_compare / ta_actor. Per oracle scene it
 *   1. builds the native frame from guest-RAM-derived inputs (camera, viewport planes, player position, live actors) with cpa_render,
 *   2. cross-checks the library against ta_compare: ta_compare.c is #included (main renamed) and its own do_scene / vis_from_ram are CALLED, so the visibility prediction and the static triangle
 *      pool of the native frame are compared against the code that produced the VERIFIED numbers (no copy of that logic here),
 *   3. matches the native frame's triangles to the oracle TA stream (same projection model, tolerance and vertex-permutation rule as ta_compare) and reports triangle counts / ratios by class,
 *   4. counts the GL cost: native frame through src/platform/vita/cpa_gl_backend.c on the fake vitaGL, versus the REAL vita_gl_render.c (recompiled path) on the same scene via test_glcount.
 * Everything here is host-only measurement; nothing is committed to a Vita build. */
#define main ta_compare_main
#include "ta_compare.c"
#undef main
#include "../../src/cpa/cpa_render.h"
#include "../../src/platform/vita/cpa_gl_backend.h"
#include <fcntl.h>
#include <unistd.h>

typedef struct { float sx[3], sy[3], w[3], cx; uint32_t draw; uint8_t src, layer, pass, cullBack, valid, cand, nearX, used; uint32_t va; } NT;
static int cmp_nt(const void *a, const void *b) { float x = ((const NT *)a)->cx, y = ((const NT *)b)->cx; return x < y ? -1 : x > y; }

typedef struct {
    uint64_t scenes, oracleTris, oracleStrips, oracleSpriteStrips, oList[8];
    uint64_t natSub, natCand, natMatched, natNear, natBack, natOff, natBehind;
    uint64_t natSrc[3], natL2, natCandSrc[3], natCandL2, matchSrc[3], matchL2, matchedTotal;
    uint64_t unNear, unQuad, unHud, unOther;
    uint64_t pvrf[2][256], pvrfAll[2][65536 / 256], fmtOp[2][8], xt[2][3][8], passAgSrc[3], passTotSrc[3], texConfAct, texPairsAct, passAgree, passTot, uvAgree, uvTot, texPairs, texConflicts;
    uint64_t drawsMerged, drawsUnmerged, drawsStatic, drawsActor1, drawsActor2, srcBatches, glDrawsNative, glStateNative, glBindNative, glDrawsRecomp, glStateRecomp, glBindRecomp, nGlc;
    uint64_t visSecOk, visIpoOk, poolOk, poolTot, actGiven, actPosed, actDrawn, actBbox, actUnposed, actDrawn2;
    uint64_t trisActorM1, trisActorM2, trisStatic0, trisAll0;
    uint64_t tcStatic, tcMatched, tcFrag, tcMismatch;
} Agg;

static const CpaTexInfo *g_ti; static uint32_t g_nti;
static int describe_cb(void *u, uint32_t va, CpaTexDesc *d) { (void)u; for (uint32_t i = 0; i < g_nti; i++) if (g_ti[i].structVa == va) { d->width = g_ti[i].width; d->height = g_ti[i].height; d->pvrFmt = g_ti[i].pvrFmt; return 1; } return 0; }
typedef struct { uint64_t draws, states, binds; } GlCost;
static GlCost gl_cost(CpaRenderCtx *ctx, const CpaRenderFrame *f) {
    CpaGlBackend gb; CpaRenderBackend be; CpaGlConfig cfg; cpa_gl_config_default(&cfg); cpa_gl_backend_init(&gb, &cfg); cpa_gl_backend_vtable(&gb, &be);
    cpa_render_ctx_forget_textures(ctx); cpa_render_submit(ctx, f, &be);                        /* cold: uploads */
    unsigned long d0 = fg.draws, s0 = fg.state_total, b0 = fg.bind;
    cpa_render_submit(ctx, f, &be);                                                            /* steady state, like test_glcount's 'steady frame' */
    GlCost c = { fg.draws - d0, fg.state_total - s0, fg.bind - b0 };
    cpa_gl_backend_shutdown(&gb); return c;
}

static int run_glc(const char *glc, const char *capdir, long scene, double *draws, double *states, double *binds) {
    char cmd[2400]; snprintf(cmd, sizeof cmd, "'%s' '%s/f%ld/frame.bin' '%s/f%ld/vram.bin' '%s/f%ld/pvrregs.bin' '%s/f%ld/pvrfog.bin' 3 2>&1", glc, capdir, scene, capdir, scene, capdir, scene, capdir, scene);
    FILE *p = popen(cmd, "r"); if (!p) return 0; char line[4096]; int ok = 0;
    while (fgets(line, sizeof line, p)) { char *s = strstr(line, "steady frame");
        if (s) { double d, st, bi = 0; char *a = strstr(s, "draws="), *b = strstr(s, "state-calls="), *c2 = strstr(s, " bind ");
            if (a && b && sscanf(a, "draws=%lf", &d) == 1 && sscanf(b, "state-calls=%lf", &st) == 1) { if (c2) sscanf(c2, " bind %lf", &bi); *draws = d; *states = st; *binds = bi; ok = 1; } } }
    pclose(p); return ok;
}

static int shadow_scene(CpaRenderCtx *ctx, const CpaScene *sc, const CpaVisTriMap *tm, const uint8_t *lvl, const char *capdir, const char *level, long scene, const char *glc, double tol, double ztol, int verbose, Agg *A) {
    char p[1100]; size_t n; long rs = scene - 1; snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); FILE *t = fopen(p, "rb"); if (t) fclose(t); else rs = scene;
    snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) { fprintf(stderr, "bad %s\n", p); return 2; }
    snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, scene); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) { free(ram); return 2; }
    uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
    if (16 + (size_t)nstrip * 32 + (size_t)nvert * sizeof(TaV) != fn) { free(ram); free(fb); return 2; }
    CpaImage rimg; cpa_image_init(&rimg); cpa_image_add(&rimg, ram, n, RAM_BASE);
    CpaFrameInput in; CpaRenderActor *actors = NULL; uint32_t nUnposed = 0;
    if (!cpa_render_input_from_ram(&in, &actors, &nUnposed, &rimg, sc, &ctx->tables)) { printf("SHADOW %s %ld SKIPPED (no valid camera in RAM)\n", level, scene); free(ram); free(fb); return 1; }

    /* the variants */
    CpaRenderFrame F1, F2, F0, Fu; int ok = 1;
    ctx->opts.actorMode = 1; ctx->opts.sortTranslucent = 1; ctx->opts.mergeOpaque = 1; ok &= cpa_render_build_frame(ctx, &F1, &in);
    ctx->opts.actorMode = 2; ok &= cpa_render_build_frame(ctx, &F2, &in);
    ctx->opts.actorMode = 0; ok &= cpa_render_build_frame(ctx, &F0, &in);
    ctx->opts.actorMode = 1; ctx->opts.sortTranslucent = 0; ctx->opts.mergeOpaque = 0; ok &= cpa_render_build_frame(ctx, &Fu, &in);
    ctx->opts.sortTranslucent = 1; ctx->opts.mergeOpaque = 1;
    if (!ok) { fprintf(stderr, "frame build failed\n"); return 2; }

    /* cross-check 1: visibility == ta_compare's vis_from_ram (same inputs, library function vs the tool's own call) */
    CpaVis V; memset(&V, 0, sizeof V); int vok = vis_from_ram(sc, ram, &V);
    int secOk = vok && F1.st.haveVis && V.sector == F1.st.visSector, ipoOk = vok && F1.st.haveVis && V.nIpos == F1.st.visNIpos;
    if (vok) cpa_vis_free(&V);
    /* cross-check 2: static triangle pool == ta_compare's pool after its own cull (do_scene run quietly; its Stats are read) */
    Stats st; memset(&st, 0, sizeof st);
    fflush(stdout); int sv = dup(1), nul = open("/dev/null", O_WRONLY); dup2(nul, 1); close(nul);
    int rc = do_scene(sc, tm, 1, capdir, level, scene, -1, tol, ztol, 0, &st);
    fflush(stdout); dup2(sv, 1); close(sv);
    uint64_t nStaticAll = 0; for (uint32_t it = 0; it < sc->nItems; it++) if (!sc->items[it].isActor) nStaticAll += sc->items[it].vertCount / 3; uint64_t poolExp = nStaticAll - st.v[V_POOLCULLED], poolGot = F1.st.trisStatic; int poolOk = rc == 0 && st.v[V_HAVE] && poolExp == poolGot;

    /* oracle triangles */
    uint32_t no = 0, nspr = 0; OTri *ot = calloc(nvert + 1, sizeof *ot); uint64_t oList[8] = { 0 };
    for (uint32_t i = 0; i < nstrip; i++) { const TaS *s = &strips[i]; if (s->sprite) { nspr++; continue; }
        for (uint32_t k = 0; k + 2 < s->count; k++) { OTri *o = &ot[no++]; for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; o->sx[j] = v->x; o->sy[j] = v->y; o->z[j] = v->z; o->u[j] = v->u; o->v[j] = v->v; } o->tcw = s->tcw; o->list = s->list; if (s->list < 8) oList[s->list]++; } }

    /* native triangles of F1 projected with the same model as ta_compare (cpa_project at 640x480 HorPlus == oracle, VERIFIED in test_camera) */
    CpaProj prj; cpa_proj_init(&prj, &in.cam, 640, 480, CPA_FIT_HORPLUS);
    uint32_t nn = F1.nVerts / 3; NT *nt = calloc(nn ? nn : 1, sizeof *nt); uint32_t nnt = 0; uint64_t cnt[8] = { 0 };   /* 0 behind 1 near-crossing 2 back 3 off 4 cand */
    uint32_t *triDraw = malloc((nn ? nn : 1) * 4);
    for (uint32_t d = 0; d < F1.nDraws; d++) for (uint32_t k = 0; k < F1.draws[d].count / 3; k++) {
        const CpaRenderDraw *dr = &F1.draws[d]; const CpaRenderVertex *v = &F1.verts[dr->first + 3 * k]; NT *q = &nt[nnt]; memset(q, 0, sizeof *q);
        q->draw = d; q->src = F1.triSource[(dr->first + 3 * k) / 3]; q->layer = dr->layer; q->pass = dr->pass; q->cullBack = dr->cullBack; q->va = dr->texVa;
        triDraw[nnt] = d; int front = 0; float cm[3][3], s3[3][3]; int pr[3];
        for (int j = 0; j < 3; j++) { float X[3] = { v[j].x, v[j].y, v[j].z }; cpa_world_to_cam(&in.cam, X, cm[j]); pr[j] = cm[j][2] >= CPA_NEAR_ZC; front += pr[j]; if (pr[j]) cpa_cam_to_screen(&prj, cm[j], s3[j]); }
        cnt[0] += 0; nnt++;
        if (front == 0) { cnt[0]++; continue; }
        if (front < 3) { q->nearX = 1; q->cand = 1; cnt[1]++; continue; }
        q->valid = 1; for (int j = 0; j < 3; j++) { q->sx[j] = s3[j][0]; q->sy[j] = s3[j][1]; q->w[j] = s3[j][2]; }
        q->cx = (q->sx[0] + q->sx[1] + q->sx[2]) / 3.0f;
        float a2 = cpa_screen_area2((float[6]){ q->sx[0], q->sy[0], q->sx[1], q->sy[1], q->sx[2], q->sy[2] });
        float mnx = fminf(q->sx[0], fminf(q->sx[1], q->sx[2])), mxx = fmaxf(q->sx[0], fmaxf(q->sx[1], q->sx[2])), mny = fminf(q->sy[0], fminf(q->sy[1], q->sy[2])), mxy = fmaxf(q->sy[0], fmaxf(q->sy[1], q->sy[2]));
        if (q->cullBack && a2 > 0) { cnt[2]++; continue; }
        if (mxx < 0 || mnx > 640 || mxy < 0 || mny > 480) { cnt[3]++; continue; }
        q->cand = 1; cnt[4]++;
    }
    /* match oracle -> native (valid ones sorted by cx; same greedy rule as ta_compare) */
    uint32_t nv = 0; NT *sorted = malloc((nnt ? nnt : 1) * sizeof *sorted); for (uint32_t i = 0; i < nnt; i++) if (nt[i].valid) sorted[nv++] = nt[i];
    qsort(sorted, nv, sizeof *sorted, cmp_nt);
    uint64_t mSrc[3] = { 0 }, mL2 = 0, mTot = 0, passAg = 0, passTot = 0, texPairs = 0, texConf = 0, unNear = 0, unQuad = 0, unHud = 0, unOther = 0;
    uint64_t candSrc[3] = { 0 }, candL2 = 0, matchedCand = 0, srcN[3] = { 0 }, l2N = 0;
    struct { uint32_t va, tcw; int src; } tmap[1024]; int ntm = 0; uint64_t texConfAct = 0, texPairsAct = 0, passAgSrc[3] = { 0 }, passTotSrc[3] = { 0 };
    for (uint32_t a = 0; a < no; a++) {
        float ocx = (ot[a].sx[0] + ot[a].sx[1] + ot[a].sx[2]) / 3.0f; int hit = -1, hp = 0;
        uint32_t lo = 0, hi = nv; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (sorted[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
        for (uint32_t m = lo; m < nv && sorted[m].cx <= ocx + (float)tol + 1e-3f && hit < 0; m++) {
            if (sorted[m].used) continue;
            for (int pi = 0; pi < 6 && hit < 0; pi++) { int ok2 = 1;
                for (int j = 0; j < 3 && ok2; j++) { int q = perms[pi][j];
                    if (fabs(sorted[m].sx[q] - ot[a].sx[j]) > tol || fabs(sorted[m].sy[q] - ot[a].sy[j]) > tol || fabs(sorted[m].w[q] - ot[a].z[j]) / (fabs(ot[a].z[j]) + 1e-9) > ztol) ok2 = 0; }
                if (ok2) { hit = (int)m; hp = pi; } }
        }
        if (hit >= 0) {
            NT *q = &sorted[hit]; q->used = 1; mTot++; if (q->layer) mL2++; else mSrc[q->src]++;
            if (verbose && q->src == CPA_SRC_ACTOR) { uint32_t fl = cpa_u32(&rimg, q->va + 4); uint8_t wb = 0; cpa_rd8(&rimg, q->va + 0x18, &wb); static int nd; if (nd++ < 12) printf("  ACTORDBG tex %08x flags %08x wrap %02x -> pass %d; oracle list %u\n", q->va, fl, wb, q->pass, ot[a].list); }
            int expect = ot[a].list == 0 ? CPA_PASS_OPAQUE : ot[a].list == 4 ? CPA_PASS_CUTOUT : CPA_PASS_TRANSLUCENT; passTot++; passAg += (q->pass == expect); passTotSrc[q->src]++; if (q->src == 0 && !q->layer && q->pass == CPA_PASS_OPAQUE && (ot[a].list == 0 || ot[a].list == 2)) { A->fmtOp[ot[a].list == 2][(ot[a].tcw >> 27) & 7]++; for (uint32_t i = 0; i < g_nti; i++) if (g_ti[i].structVa == q->va) { A->pvrf[ot[a].list == 2][g_ti[i].pvrFmt & 0xFF]++; A->pvrfAll[ot[a].list == 2][g_ti[i].pvrFmt]++; } } if (q->src < 2 && !q->layer && ot[a].list < 8) A->xt[q->src][q->pass][ot[a].list]++; passAgSrc[q->src] += (q->pass == expect);
            /* UV: find the draw vertices again */
            const CpaRenderDraw *dr = &F1.draws[q->draw]; (void)dr;
            if (!q->layer && q->va) { int f2 = -1; for (int i = 0; i < ntm; i++) if (tmap[i].va == q->va && tmap[i].src == q->src) { f2 = i; break; }
                if (q->src == CPA_SRC_ACTOR) texPairsAct++;
                if (f2 < 0 && ntm < 1024) { tmap[ntm].va = q->va; tmap[ntm].tcw = ot[a].tcw; tmap[ntm].src = q->src; ntm++; texPairs++; } else if (f2 >= 0) { texPairs++; if (tmap[f2].tcw != ot[a].tcw) { texConf++; if (q->src == CPA_SRC_ACTOR) texConfAct++; } } }
            (void)hp;
        } else {
            int nf = 0; for (int j = 0; j < 3; j++) if (fabsf(ot[a].z[j] - 1.0f) < 2e-3f) nf = 1;
            int eq = fabsf(ot[a].z[0] - ot[a].z[1]) < 1e-4f * ot[a].z[0] && fabsf(ot[a].z[0] - ot[a].z[2]) < 1e-4f * ot[a].z[0], ax = 0;
            for (int a1 = 0; a1 < 3; a1++) for (int b1 = 0; b1 < 3; b1++) if (a1 != b1) { int c2 = 3 - a1 - b1; if (fabsf(ot[a].sy[a1] - ot[a].sy[b1]) < 0.02f && fabsf(ot[a].sx[a1] - ot[a].sx[c2]) < 0.02f) ax = 1; }
            if (nf) unNear++; else if (eq && ax) { unQuad++; if (ot[a].z[0] >= 100.0f) unHud++; } else unOther++;
        }
    }
    for (uint32_t i = 0; i < nnt; i++) { if (nt[i].cand) { if (nt[i].layer) candL2++; else candSrc[nt[i].src]++; } if (nt[i].layer) l2N++; else srcN[nt[i].src]++; }
    for (uint32_t m = 0; m < nv; m++) if (sorted[m].used) matchedCand++;

    /* GL cost: native (3 variants) and recompiled */
    GlCost g1 = gl_cost(ctx, &F1), gu = gl_cost(ctx, &Fu); double rd = 0, rs2 = 0, rb = 0; int haveGlc = glc && run_glc(glc, capdir, scene, &rd, &rs2, &rb);
    printf("SHADOW %s %ld | oracle tris %u (opaque %llu punch %llu trans %llu) strips %u (+%u point-sprite) | native submitted %u [static %llu actor %llu sprite %llu layer2 %llu] draws %u (unmerged order: %u, src batches %u) | on-screen candidates %llu (back %llu off %llu behind %llu near-cross %llu) | matched %llu = oracle %.2f%% (static %llu actor %llu layer2 %llu), native-cand precision %.2f%% | unmatched oracle: near-frag %llu screen-quad %llu (HUD %llu) other %llu | pass agree %llu/%llu (static %llu/%llu actor %llu/%llu) | tex(VA->tcw) conflicts %llu/%llu (actor %llu/%llu) | actors given %u posed %u drawn %u bbox-culled %u unposed(no live anim) %u | ratio native/oracle submitted %.3f candidates %.3f | GL native draws %llu states %llu binds %llu (unmerged %llu draws %llu states)%s\n",
           level, scene, no, (unsigned long long)oList[0], (unsigned long long)oList[4], (unsigned long long)oList[2], nstrip - nspr, nspr,
           nnt, (unsigned long long)srcN[0], (unsigned long long)srcN[1], (unsigned long long)srcN[2], (unsigned long long)l2N, F1.nDraws, Fu.nDraws, F1.st.srcBatches,
           (unsigned long long)(cnt[4] + cnt[1]), (unsigned long long)cnt[2], (unsigned long long)cnt[3], (unsigned long long)cnt[0], (unsigned long long)cnt[1],
           (unsigned long long)mTot, no ? 100.0 * mTot / no : 0.0, (unsigned long long)mSrc[0], (unsigned long long)mSrc[1], (unsigned long long)mL2, (cnt[4] + cnt[1]) ? 100.0 * matchedCand / (cnt[4] + cnt[1]) : 0.0,
           (unsigned long long)unNear, (unsigned long long)unQuad, (unsigned long long)unHud, (unsigned long long)unOther, (unsigned long long)passAg, (unsigned long long)passTot, (unsigned long long)passAgSrc[0], (unsigned long long)passTotSrc[0], (unsigned long long)passAgSrc[1], (unsigned long long)passTotSrc[1], (unsigned long long)texConf, (unsigned long long)texPairs, (unsigned long long)texConfAct, (unsigned long long)texPairsAct,
           F1.st.actorsGiven, F1.st.actorsPosed, F1.st.actorsDrawn, F1.st.actorsBboxCulled, nUnposed, no ? (double)nnt / no : 0.0, no ? (double)(cnt[4] + cnt[1]) / no : 0.0,
           (unsigned long long)g1.draws, (unsigned long long)g1.states, (unsigned long long)g1.binds, (unsigned long long)gu.draws, (unsigned long long)gu.states,
           haveGlc ? "" : " | recompiled-path GL counts unavailable");
    if (haveGlc) printf("SHADOWGL %s %ld | recompiled path (real vita_gl_render.c on the fake GL): draws %.0f state-calls %.0f | native: draws %llu state-calls %llu | oracle TA strips %u\n", level, scene, rd, rs2, (unsigned long long)g1.draws, (unsigned long long)g1.states, nstrip);
    printf("SHADOWCHK %s %ld | vis sector==ta_compare %s, vis IPO count==ta_compare %s | static pool native %llu vs ta_compare (static %u - vis-culled %u) %llu => %s | ta_compare(vis-cull) matched %u clipfrag %u mismatch %u of %u static | actor tris: mode1 %u mode2 %u mode0 %u | layer2 tris %u\n",
           level, scene, secOk ? "yes" : "NO", ipoOk ? "yes" : "NO", (unsigned long long)poolGot, st.staticTotal, st.v[V_POOLCULLED], (unsigned long long)poolExp, poolOk ? "EQUAL" : "DIFFERENT", st.matched, st.frag, st.unmBad + st.unmClip, st.staticTotal, F1.st.trisActor, F2.st.trisActor, F0.st.trisActor, F1.st.trisLayer2);

    A->scenes++; A->oracleTris += no; A->oracleStrips += nstrip - nspr; A->oracleSpriteStrips += nspr; for (int i = 0; i < 8; i++) A->oList[i] += oList[i];
    A->natSub += nnt; A->natCand += cnt[4] + cnt[1]; A->natMatched += matchedCand; A->natNear += cnt[1]; A->natBack += cnt[2]; A->natOff += cnt[3]; A->natBehind += cnt[0];
    for (int i = 0; i < 3; i++) { A->natSrc[i] += srcN[i]; A->natCandSrc[i] += candSrc[i]; A->matchSrc[i] += mSrc[i]; } A->natL2 += l2N; A->natCandL2 += candL2; A->matchL2 += mL2; A->matchedTotal += mTot;
    A->unNear += unNear; A->unQuad += unQuad; A->unHud += unHud; A->unOther += unOther; A->passAgSrc[0] += passAgSrc[0]; A->passAgSrc[1] += passAgSrc[1]; A->passTotSrc[0] += passTotSrc[0]; A->passTotSrc[1] += passTotSrc[1]; A->texConfAct += texConfAct; A->texPairsAct += texPairsAct; A->passAgree += passAg; A->passTot += passTot; A->texPairs += texPairs; A->texConflicts += texConf;
    A->drawsMerged += F1.nDraws; A->drawsUnmerged += Fu.nDraws; A->srcBatches += F1.st.srcBatches; A->glDrawsNative += g1.draws; A->glStateNative += g1.states; A->glBindNative += g1.binds;
    if (haveGlc) { A->glDrawsRecomp += (uint64_t)(rd + 0.5); A->glStateRecomp += (uint64_t)(rs2 + 0.5); A->glBindRecomp += (uint64_t)(rb + 0.5); A->nGlc++; }
    A->visSecOk += secOk; A->visIpoOk += ipoOk; A->poolOk += poolOk; A->poolTot++; A->actGiven += F1.st.actorsGiven; A->actPosed += F1.st.actorsPosed; A->actDrawn += F1.st.actorsDrawn; A->actBbox += F1.st.actorsBboxCulled; A->actUnposed += nUnposed; A->actDrawn2 += F2.st.actorsDrawn;
    A->trisActorM1 += F1.st.trisActor; A->trisActorM2 += F2.st.trisActor; A->trisStatic0 += F0.st.trisStatic; A->trisAll0 += F0.nVerts / 3;
    A->tcStatic += st.staticTotal; A->tcMatched += st.matched; A->tcFrag += st.frag; A->tcMismatch += st.unmBad + st.unmClip;
    (void)verbose; (void)lvl; (void)triDraw;
    free(triDraw); free(sorted); free(nt); free(ot); free(actors); cpa_render_frame_free(&F1); cpa_render_frame_free(&F2); cpa_render_frame_free(&F0); cpa_render_frame_free(&Fu); free(ram); free(fb);
    return 0;
}

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10", *glc = NULL; long scene = -1; double tol = 0.1, ztol = 2e-3; int verbose = 0, all = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) scene = atol(argv[++i]);
        else if (!strcmp(argv[i], "--glc") && i + 1 < argc) glc = argv[++i];
        else if (!strcmp(argv[i], "--post-tex")) continue; else if (!strcmp(argv[i], "--all")) all = 1; else if (!strcmp(argv[i], "-v")) verbose = 1;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage: %s CAPDIR DCDATA_DIR [--level L] [--scene N | --all] [--glc test_glcount]\n", argv[0]); return 2; }
    int postTex = 0; for (int i = 1; i < argc; i++) if (!strcmp(argv[i], "--post-tex")) postTex = 1;
    long scenes[256]; int ns = 0;
    { DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long k; if (sscanf(e->d_name, "f%ld", &k) == 1 && ns < 256) scenes[ns++] = k; } if (d) closedir(d); }
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    if (!all) { if (scene < 0 && ns) scene = scenes[0]; scenes[0] = scene; ns = 1; }
    char fixp[1100], lvlp[1100], up[64]; snprintf(fixp, sizeof fixp, "%s/FIX.DAT", dcdata);
    snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c); snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaScene sc;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN) || !cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { fprintf(stderr, "load failed\n"); return 2; }
    CpaTexInfo *ti = NULL; uint32_t nti = 0;
    { char tp[1100]; snprintf(tp, sizeof tp, "%s/%s/%s.TEX", dcdata, up, up); uint8_t *tex; size_t texN;
        if (cpa_read_file(tp, &tex, &texN)) { if (cpa_tex_table(&sc.img, tex, texN, &ti, &nti)) { if (postTex) printf("post-load texture state applied to %u scene items/sprites (%u textures)\n", cpa_scene_apply_tex(&sc, ti, nti), nti); } else { printf("cpa_tex_table failed, pre-load flags kept\n"); ti = NULL; } free(tex); } }
    g_ti = ti; g_nti = nti;
    CpaRenderCtx ctx; CpaRenderOpts o; cpa_render_opts_default(&o); o.describe = describe_cb; cpa_render_ctx_init(&ctx, &sc, &o);
    CpaVisTriMap tm; int haveTm = cpa_vis_trimap_build(&tm, &sc.img);
    Agg A; memset(&A, 0, sizeof A);
    for (int i = 0; i < ns; i++) shadow_scene(&ctx, &sc, haveTm ? &tm : NULL, lvl, capdir, level, scenes[i], glc, tol, ztol, verbose, &A);
    double s = A.scenes ? 1.0 / (double)A.scenes : 0;
    printf("LEVEL %s scenes %llu | oracle tris %llu (strips %llu) | native submitted %llu = static %llu + actor %llu + sprite %llu + layer2 %llu | native/oracle triangle ratio: submitted %.3f, on-screen candidates %.3f (%llu) | oracle recall %.2f%% (matched %llu; static %llu, actor %llu, layer2 %llu), native-candidate precision %.2f%% | unmatched oracle: near-frag %llu, screen-quad %llu (HUD %llu), other %llu | pass agree %.2f%% (%llu; static %.2f%% actor %.2f%%), tex VA->tcw conflicts %llu/%llu (actor %llu/%llu) | draw calls per scene: oracle strips %.1f, recompiled GL %.1f (state %.1f), native %.1f (state %.1f; binds %.1f), native unmerged order %.1f, native source batches %.1f | consistency: vis sector==ta_compare %llu/%llu, IPO count %llu/%llu, static pool==ta_compare %llu/%llu | actors/scene given %.1f posed %.1f drawn %.1f (vis-filtered %.1f) bbox-culled %.1f unposed %.1f, actor tris mode1 %.0f mode2 %.0f\n",
           level, (unsigned long long)A.scenes, (unsigned long long)A.oracleTris, (unsigned long long)A.oracleStrips, (unsigned long long)A.natSub, (unsigned long long)A.natSrc[0], (unsigned long long)A.natSrc[1], (unsigned long long)A.natSrc[2], (unsigned long long)A.natL2,
           A.oracleTris ? (double)A.natSub / A.oracleTris : 0.0, A.oracleTris ? (double)A.natCand / A.oracleTris : 0.0, (unsigned long long)A.natCand,
           A.oracleTris ? 100.0 * A.matchedTotal / A.oracleTris : 0.0, (unsigned long long)A.matchedTotal, (unsigned long long)A.matchSrc[0], (unsigned long long)A.matchSrc[1], (unsigned long long)A.matchL2, A.natCand ? 100.0 * A.natMatched / A.natCand : 0.0,
           (unsigned long long)A.unNear, (unsigned long long)A.unQuad, (unsigned long long)A.unHud, (unsigned long long)A.unOther, A.passTot ? 100.0 * A.passAgree / A.passTot : 0.0, (unsigned long long)A.passTot, A.passTotSrc[0] ? 100.0 * A.passAgSrc[0] / A.passTotSrc[0] : 0.0, A.passTotSrc[1] ? 100.0 * A.passAgSrc[1] / A.passTotSrc[1] : 0.0, (unsigned long long)A.texConflicts, (unsigned long long)A.texPairs, (unsigned long long)A.texConfAct, (unsigned long long)A.texPairsAct,
           A.oracleStrips * s, A.nGlc ? (double)A.glDrawsRecomp / A.nGlc : 0.0, A.nGlc ? (double)A.glStateRecomp / A.nGlc : 0.0, A.glDrawsNative * s, A.glStateNative * s, A.glBindNative * s, A.drawsUnmerged * s, A.srcBatches * s,
           (unsigned long long)A.visSecOk, (unsigned long long)A.poolTot, (unsigned long long)A.visIpoOk, (unsigned long long)A.poolTot, (unsigned long long)A.poolOk, (unsigned long long)A.poolTot,
           A.actGiven * s, A.actPosed * s, A.actDrawn * s, A.actDrawn2 * s, A.actBbox * s, A.actUnposed * s, A.trisActorM1 * s, A.trisActorM2 * s);
    printf("PASSMATRIX %s (matched, layer-1 only; rows native pass opaque/cutout/translucent, cols oracle list 0 opaque / 2 translucent / 4 punch): static [%llu %llu %llu | %llu %llu %llu | %llu %llu %llu] actor [%llu %llu %llu | %llu %llu %llu | %llu %llu %llu]\n", level,
           (unsigned long long)A.xt[0][0][0], (unsigned long long)A.xt[0][0][2], (unsigned long long)A.xt[0][0][4], (unsigned long long)A.xt[0][1][0], (unsigned long long)A.xt[0][1][2], (unsigned long long)A.xt[0][1][4], (unsigned long long)A.xt[0][2][0], (unsigned long long)A.xt[0][2][2], (unsigned long long)A.xt[0][2][4],
           (unsigned long long)A.xt[1][0][0], (unsigned long long)A.xt[1][0][2], (unsigned long long)A.xt[1][0][4], (unsigned long long)A.xt[1][1][0], (unsigned long long)A.xt[1][1][2], (unsigned long long)A.xt[1][1][4], (unsigned long long)A.xt[1][2][0], (unsigned long long)A.xt[1][2][2], (unsigned long long)A.xt[1][2][4]);
    printf("FMTCHK %s static native-opaque matched, by oracle tcw pixel format (bits 27-29): oracle list0 [", level); for (int i = 0; i < 8; i++) printf("%llu ", (unsigned long long)A.fmtOp[0][i]); printf("] oracle list2 ["); for (int i = 0; i < 8; i++) printf("%llu ", (unsigned long long)A.fmtOp[1][i]); printf("]\n");
    for (int l = 0; l < 2; l++) { printf("PVRFMT %s oracle list%d low-byte pvrFmt histogram:", level, l ? 2 : 0); for (int i = 0; i < 256; i++) if (A.pvrf[l][i]) printf(" %02x:%llu", i, (unsigned long long)A.pvrf[l][i]); printf("\n"); }
    if (haveTm) cpa_vis_trimap_free(&tm);
    cpa_render_ctx_free(&ctx); cpa_scene_free(&sc); free(fix); free(lvl);
    return 0;
}
