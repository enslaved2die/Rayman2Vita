/* bench_ta.c - micro-benchmark + bit-exactness check of the TA parse (ta_write32) and the frame build (ta_build_gl_reuse + depth cut + make_clip)
 * against the previous implementation (ta_ref.c = ta.c as of commit e16fd70, all public symbols renamed ref_*, see Makefile target `bench`).
 * usage: bench_ta dumpdir...   (each dir: frame.bin from R2_FRAMES / R2_FRAME dumps, tastream.bin = raw 32-byte TA packets of that frame)
 * Prints per dump: vertices, ns/vertex for parse and for build (ref vs new, host), speed-up, and EQUAL / DIFFERENT for every output array. */
#include "../ta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* reference implementation (old layouts of TaCtx / TaGl: opaque buffers big enough) */
typedef struct { TaGlVertex *verts; uint32_t nverts; TaBatch *batches; uint32_t nbatches; uint32_t capverts, capbatches; uint32_t list_first[TA_NUM_LISTS], list_count[TA_NUM_LISTS]; } RefGl;
void ref_ta_init(TaCtx *c); void ref_ta_write(TaCtx *c, const void *p, size_t n); TaFrame *ref_ta_take_frame(TaCtx *c); void ref_ta_frame_free(TaFrame *f);
int ref_ta_build_gl_reuse(const TaFrame *f, RefGl *out, const TaBuildOpts *o); float ref_ta_gl_depth_cut(const RefGl *g);
void ref_ta_gl_make_clip(const TaGlVertex *in, uint32_t n, float cut, TaClipVertex *out); void ref_ta_gl_free(RefGl *g);

static double now(void) { struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return t.tv_sec + t.tv_nsec * 1e-9; }
static uint8_t *slurp(const char *p, size_t *n) { FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); *n = (size_t)ftell(f); fseek(f, 0, SEEK_SET); uint8_t *b = malloc(*n ? *n : 1); if (fread(b, 1, *n, f) != *n) { free(b); b = NULL; } fclose(f); return b; }
static int frame_eq(const TaFrame *a, const TaFrame *b)
{
    if (a->nverts != b->nverts || a->nstrips != b->nstrips || a->nmods != b->nmods) return 0;
    if (memcmp(a->verts, b->verts, a->nverts * sizeof(TaVertex))) return 0;
    if (memcmp(a->mods, b->mods, a->nmods * sizeof(TaModTri))) return 0;
    if (memcmp(&a->stats, &b->stats, sizeof a->stats)) return 0;
    for (uint32_t i = 0; i < a->nstrips; i++) {
        const TaStrip *x = &a->strips[i], *y = &b->strips[i];
        if (x->first != y->first || x->count != y->count || x->closed_by_eos != y->closed_by_eos || memcmp(&x->st, &y->st, sizeof x->st)) return 0;
    }
    return 1;
}
int main(int argc, char **argv)
{
    double tot_cap = 0, tot_pr = 0, tot_pn = 0, tot_br = 0, tot_bn = 0; int fails = 0, nd = 0;
    printf("%-34s %7s %7s | %8s %8s %6s | %8s %8s %6s | %s\n", "dump", "strips", "verts", "parse ref", "new", "x", "build ref", "new", "x", "equality (ns per input vertex)");
    for (int ai = 1; ai < argc; ai++) {
        char p[600]; size_t fn = 0, sn = 0;
        snprintf(p, sizeof p, "%s/frame.bin", argv[ai]); uint8_t *fr = slurp(p, &fn);
        snprintf(p, sizeof p, "%s/tastream.bin", argv[ai]); uint8_t *ts = slurp(p, &sn);
        if (!fr || !ts) { fprintf(stderr, "skip %s\n", argv[ai]); continue; }
        nd++;
        /* ---- parse ---- */
        static char refbuf[8192] __attribute__((aligned(16)));
        TaCtx cn; TaCtx *cr = (TaCtx *)refbuf;
        ta_init(&cn); ref_ta_init(cr);
        ta_write(&cn, ts, sn); ref_ta_write(cr, ts, sn);
        TaFrame *fn_ = ta_take_frame(&cn), *fr_ = ref_ta_take_frame(cr);
        int peq = frame_eq(fn_, fr_);
        uint32_t pverts = fn_->nverts;
        int reps = 1; double t0, dr, dn;
        for (;;) { t0 = now(); for (int i = 0; i < reps; i++) { ref_ta_write(cr, ts, sn); ref_ta_frame_free(ref_ta_take_frame(cr)); } dr = now() - t0; if (dr > 0.25) break; reps *= 2; }
        t0 = now(); for (int i = 0; i < reps; i++) { ta_write(&cn, ts, sn); ta_frame_free(ta_take_frame(&cn)); } dn = now() - t0;
        double pr = dr / reps * 1e9 / (pverts ? pverts : 1), pn = dn / reps * 1e9 / (pverts ? pverts : 1);
        /* ---- deferred parse: capture framing vs the parser ---- */
        int ceq_ok = 1; double cap_ns = 0, tr0 = 0; uint32_t npk = (uint32_t)(sn / 32);
        {
            TaCap cp; ta_init(&cn); ta_cap_init(&cp);
            uint32_t eol[TA_NUM_LISTS] = { 0 };
            ta_cap_write(&cp, ts, sn, eol);
            TaRaw *raw = ta_cap_take(&cp);
            TaCtx pc; ta_init(&pc); TaFrame *fd = ta_parse_raw(&pc, raw);
            TaFrame *fdirect = (ta_init(&cn), ta_write(&cn, ts, sn), ta_take_frame(&cn));
            ceq_ok = frame_eq(fd, fdirect) && raw->chunks == fdirect->stats.chunks && !memcmp(eol, fdirect->stats.list_end, sizeof eol);
            /* every texture of a strip with >= 3 vertices must be in the captured header list */
            for (uint32_t i = 0; ceq_ok && i < fdirect->nstrips; i++) {
                const TaStrip *st = &fdirect->strips[i]; if (!st->st.textured || st->count < 3 || st->st.list == TA_L_OPAQUE_MOD || st->st.list == TA_L_TRANS_MOD) continue;
                int found = 0; for (uint32_t k = 0; k < raw->ntex; k++) if (raw->tex[k][0] == st->st.tcw && raw->tex[k][1] == st->st.tsp) { found = 1; break; }
                if (!found) ceq_ok = 0;
            }
            ta_frame_free(fd); ta_frame_free(fdirect); ta_raw_free(raw);
            int rp = 1; double t1;
            for (;;) { t0 = now(); for (int i = 0; i < rp; i++) { uint32_t e2[TA_NUM_LISTS] = { 0 }; ta_cap_write(&cp, ts, sn, e2); ta_raw_free(ta_cap_take(&cp)); } t1 = now() - t0; if (t1 > 0.15) break; rp *= 2; }
            cap_ns = t1 / rp * 1e9 / (npk ? npk : 1); tr0 = pn;
        }
        /* ---- build ---- */
        uint32_t ns, nv; memcpy(&ns, fr + 4, 4); memcpy(&nv, fr + 8, 4);
        TaFrame f; memset(&f, 0, sizeof f);
        f.strips = calloc(ns ? ns : 1, sizeof(TaStrip)); f.nstrips = ns;
        for (uint32_t i = 0; i < ns; i++) {
            uint32_t r[8]; memcpy(r, fr + 16 + 32 * i, 32); uint32_t w[8] = { r[0], r[1], r[2], r[3], 0, 0, 0, 0 };
            ta_decode_header(&f.strips[i].st, w, NULL); f.strips[i].st.is_sprite = (int)r[6]; f.strips[i].st.list = (uint8_t)r[7]; f.strips[i].first = r[4]; f.strips[i].count = r[5];
        }
        f.verts = malloc(nv * sizeof(TaVertex)); memcpy(f.verts, fr + 16 + 32 * ns, nv * sizeof(TaVertex)); f.nverts = nv;
        TaBuildOpts o = { 1, 1, -2.f, -2.f, 642.f, 482.f, 0 };
        TaGl gn; RefGl gr; memset(&gn, 0, sizeof gn); memset(&gr, 0, sizeof gr);
        TaClipVertex *cvn = NULL, *cvr = NULL; float cutn = 0, cutr = 0;
#define BUILD_NEW() do { ta_build_gl_reuse(&f, &gn, &o); cutn = ta_gl_depth_cut(&gn); if (!cvn) cvn = malloc((gn.nverts + 8192) * sizeof *cvn); ta_gl_make_clip(gn.verts, gn.nverts, cutn, cvn); } while (0)
#define BUILD_REF() do { ref_ta_build_gl_reuse(&f, &gr, &o); cutr = ref_ta_gl_depth_cut(&gr); if (!cvr) cvr = malloc((gr.nverts + 8192) * sizeof *cvr); ref_ta_gl_make_clip(gr.verts, gr.nverts, cutr, cvr); } while (0)
        BUILD_NEW(); BUILD_REF();
        int beq = gn.nverts == gr.nverts && gn.nbatches == gr.nbatches && !memcmp(gn.verts, gr.verts, gn.nverts * sizeof(TaGlVertex)) && !memcmp(gn.list_first, gr.list_first, sizeof gn.list_first) && !memcmp(gn.list_count, gr.list_count, sizeof gn.list_count);
        for (uint32_t i = 0; beq && i < gn.nbatches; i++) beq = !memcmp(&gn.batches[i], &gr.batches[i], sizeof(TaBatch)) || (gn.batches[i].first == gr.batches[i].first && gn.batches[i].count == gr.batches[i].count && !memcmp(&gn.batches[i].st, &gr.batches[i].st, sizeof(TaState)));
        if (!beq && getenv("BENCH_VERBOSE")) {
            printf("  nverts %u/%u nbatches %u/%u\n", gn.nverts, gr.nverts, gn.nbatches, gr.nbatches);
            for (uint32_t i = 0; i < gn.nverts && i < gr.nverts; i++) if (memcmp(&gn.verts[i], &gr.verts[i], sizeof(TaGlVertex))) { const float *a = (const float *)&gn.verts[i], *b = (const float *)&gr.verts[i]; printf("  first diff vertex %u:", i); for (int k = 0; k < 13; k++) printf(" %g/%g", a[k], b[k]); printf("\n"); break; }
        }
        int ceq = !memcmp(&cutn, &cutr, 4) && !memcmp(cvn, cvr, gn.nverts * sizeof *cvn);
        reps = 1;
        for (;;) { t0 = now(); for (int i = 0; i < reps; i++) BUILD_REF(); dr = now() - t0; if (dr > 0.25) break; reps *= 2; }
        t0 = now(); for (int i = 0; i < reps; i++) BUILD_NEW(); dn = now() - t0;
        double br = dr / reps * 1e9 / (nv ? nv : 1), bn = dn / reps * 1e9 / (nv ? nv : 1);
        if (getenv("BENCH_SPLIT")) {   /* build / depth cut / make_clip separately (ns per input vertex) */
            double a0, a1, a2, r0, r1, r2; int n = reps;
            t0 = now(); for (int i = 0; i < n; i++) ref_ta_build_gl_reuse(&f, &gr, &o); r0 = (now() - t0) / n * 1e9 / nv;
            t0 = now(); for (int i = 0; i < n; i++) cutr = ref_ta_gl_depth_cut(&gr); r1 = (now() - t0) / n * 1e9 / nv;
            t0 = now(); for (int i = 0; i < n; i++) ref_ta_gl_make_clip(gr.verts, gr.nverts, cutr, cvr); r2 = (now() - t0) / n * 1e9 / nv;
            t0 = now(); for (int i = 0; i < n; i++) ta_build_gl_reuse(&f, &gn, &o); a0 = (now() - t0) / n * 1e9 / nv;
            t0 = now(); for (int i = 0; i < n; i++) cutn = ta_gl_depth_cut(&gn); a1 = (now() - t0) / n * 1e9 / nv;
            t0 = now(); for (int i = 0; i < n; i++) ta_gl_make_clip(gn.verts, gn.nverts, cutn, cvn); a2 = (now() - t0) / n * 1e9 / nv;
            printf("  split ns/vertex: build %.1f -> %.1f | depth cut %.1f -> %.1f | make_clip %.1f -> %.1f\n", r0, a0, r1, a1, r2, a2);
        }
        const char *nm = strrchr(argv[ai], '/'); nm = nm ? nm + 1 : argv[ai];
        printf("%-34s %7u %7u | %8.1f %8.1f %5.2fx | %8.1f %8.1f %5.2fx | parse %s build %s cut+clip %s (out verts %u)\n", nm, ns, nv, pr, pn, pr / pn, br, bn, br / bn, peq ? "EQUAL" : "DIFFERENT", beq ? "EQUAL" : "DIFFERENT", ceq ? "EQUAL" : "DIFFERENT", gn.nverts);
        if (!peq || !beq || !ceq) fails++;
        printf("  deferred parse: capture %.1f ns/packet vs inline parse %.1f ns/vertex (%u packets, %u vertices): framing/EOL/texture-list/parse_raw %s\n", cap_ns, tr0, npk, pverts, ceq_ok ? "EQUAL" : "DIFFERENT");
        if (!ceq_ok) fails++;
        tot_cap += cap_ns; tot_pr += pr; tot_pn += pn; tot_br += br; tot_bn += bn;
        ta_frame_free(fn_); ref_ta_frame_free(fr_); free(fr); free(ts); free(f.strips); free(f.verts); ta_gl_free(&gn); ref_ta_gl_free(&gr); free(cvn); free(cvr);
    }
    if (nd) printf("MEAN over %d dumps: parse %.1f -> %.1f ns/vertex (%.2fx), build+cut+clip %.1f -> %.1f ns/vertex (%.2fx); %d dump(s) with differences\n", nd, tot_pr / nd, tot_pn / nd, tot_pr / tot_pn, tot_br / nd, tot_bn / nd, tot_br / tot_bn, fails);
    return fails != 0;
}
