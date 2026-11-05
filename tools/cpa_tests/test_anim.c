/* test_anim: oracle comparison of the generic actor animation module (src/cpa/cpa_anim.c) against the guest's own live state.
 *
 *   test_anim RAM.bin LEVEL.DAT [-v] [-t] [-e N]
 *
 * RAM.bin = 16 MiB guest RAM dump taken at a guest frame boundary of the RUNNING game (tools/cpa_tests/ta_capture --out DIR writes ram_<n>.bin).
 * LEVEL.DAT supplies only the 40-byte header (H0..H9 table addresses, root SuperObject); everything else is read from the RAM dump through the same
 * CpaImage reader the native loader uses.
 *
 * For every actor SuperObject (type 2) in the RAM tree that has a live animation state, the test
 *   1. reads the guest's current (animation index, frame) from 3dData+0xAC (AnimRef+0x18, +0x18 u16),
 *   2. evaluates the native pose cpa_anim_eval(animIdx, frame),
 *   3. compares channel by channel with what the guest wrote: object index/slot (S channel records), local matrix of the channel SuperObject
 *      (SO+0x20 -> 4x4 at +0x28 and the 3x3 at +4), global matrix (SO+0x24) through cpa_anim_compose with the guest's own parent table, and the
 *      transformed vertices of the displayed GeometricObject.
 * Nothing is asserted silently: the summary prints counts per tolerance bucket and the worst deviation.
 *   -v  per channel line      -t  topology/flags table (slot, parent slot, H4 flags, key flags)      -e N  mode passed to cpa_anim_eval (default CPA_ANIM_BEST)
 */
#include "../../src/cpa/cpa_anim.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t le32(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }

typedef struct {
    unsigned actors, withState, skipped, evalFail, skipNoOpen, skipNoChan, skipNoCur, chGlobalStale;
    unsigned e3Keys, e3Bad, e3KeysT, e3BadT, interp, interpBad, parFlagBoth, parFlagNone, parOnly, flagOnly, ch, chObjOk, chSlotOk, chLocalRot[4], chLocalT[4], chRot3x3[4], chGlobal[4], chLocked, chNoNode;
    double worstRot, worstT, worstG, worstV;
    unsigned vertCh, vertBuckets[4];
} Stat;
static const double TOL[3] = { 1e-4, 1e-3, 1e-2 };
static unsigned bucket(double e) { return e < TOL[0] ? 0 : e < TOL[1] ? 1 : e < TOL[2] ? 2 : 3; }

static double mdiff(const float *a, const float *b, int n) { double m = 0; for (int i = 0; i < n; i++) { double d = fabs((double)a[i] - b[i]); if (d > m) m = d; } return m; }

static uint32_t g_pso; static int g_panim, g_pframe, g_p;
static int g_v, g_t, g_ease = CPA_ANIM_BEST, g_d;
static Stat S;

static void do_actor(const CpaImage *im, const CpaAnimTables *T, uint32_t so, FILE *out) {
    CpaAnimActor A; CpaAnimCur cur; CpaAnimPose P;
    S.actors++;
    if (!cpa_anim_actor_open(&A, im, T, so)) { S.skipped++; S.skipNoOpen++; return; }
    if (!A.chanList) { S.skipped++; S.skipNoChan++; return; }
    if (!cpa_anim_cur(&A, &cur)) { S.skipped++; S.skipNoCur++; return; }
    S.withState++;
    if (!cpa_anim_eval(&A, cur.animIdx, cur.frame, g_ease, &P)) {
        S.evalFail++; fprintf(out, "  actor %08X anim %u frame %u: eval failed (frame outside record or bad index)\n", so, cur.animIdx, cur.frame); return;
    }
    int16_t par[CPA_ANIM_MAXSLOT]; cpa_anim_read_parents(&A, par);
    float actorG[16] = { 0 }, world[CPA_ANIM_MAXCH][16];
    int haveG = cpa_anim_read_matrix(im, cpa_u32(im, so + 0x24), actorG);
    int composed = haveG && cpa_anim_compose(&P, par, actorG, world);
    fprintf(out, "actor %08X anim %u frame %u (rec frames %u..%u, %u ch, fps %u)\n", so, cur.animIdx, cur.frame, P.info.firstFrame, P.info.firstFrame + P.info.nFrames - 1, P.nCh, cur.fps);
    for (unsigned c = 0; c < P.nCh; c++) {
        const CpaAnimChan *C = &P.ch[c];
        S.ch++;
        { int hasPar = C->slot < CPA_ANIM_MAXSLOT && par[C->slot] >= 0, fl = (C->h4flags & 0x800) != 0; if (hasPar && fl) S.parFlagBoth++; else if (!hasPar && !fl) S.parFlagNone++; else if (hasPar) S.parOnly++; else S.flagOnly++; }
        uint32_t rec = cur.chanRecs + 6 * c;
        int gobj = (int)cpa_u16(im, rec); uint8_t gslot = 0; cpa_rd8(im, rec + 3, &gslot);
        int objOk = gobj == (C->obj < 0 ? 0xFFFF : C->obj), slotOk = gslot == C->slot;
        S.chObjOk += objOk; S.chSlotOk += slotOk;
        if (C->slot >= A.nChanList) { S.chNoNode++; continue; }
        uint32_t ent = A.chanList + 0x14u * C->slot, node = cpa_u32(im, ent);
        uint8_t lock = 0; cpa_rd8(im, ent + 0x10, &lock);
        if (lock) S.chLocked++;
        if (!cpa_is_ptr(im, node)) { S.chNoNode++; continue; }
        float L[16], Ln[16], R3[9]; double eR = -1, eT = -1, e3 = -1, eG = -1;
        cpa_anim_chan_matrix(C, Ln);
        if (cpa_anim_read_matrix(im, cpa_u32(im, node + 0x20), L)) {
            float a[9], b[9];
            for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { a[i * 3 + j] = L[i * 4 + j]; b[i * 3 + j] = Ln[i * 4 + j]; }
            eR = mdiff(a, b, 9); eT = mdiff(L + 12, Ln + 12, 3);
            { int nz = C->ease[3] != 0; if (nz) { S.e3Keys++; if (eR > 1e-4 || eT > 1e-4) S.e3Bad++; if (C->t > 0) { S.e3KeysT++; if (eR > 1e-4 || eT > 1e-4) S.e3BadT++; } }
              if (C->t > 0) { S.interp++; if (eR > 1e-4 || eT > 1e-4) S.interpBad++; } }
            S.chLocalRot[bucket(eR)]++; S.chLocalT[bucket(eT)]++;
            if (eR > S.worstRot) S.worstRot = eR;
            if (eT > S.worstT) S.worstT = eT;
            if (cpa_anim_read_matrix3(im, cpa_u32(im, node + 0x20), R3)) { e3 = mdiff(R3, C->rot, 9); S.chRot3x3[bucket(e3)]++; }
        }
        float G[16];
        int stale = 0;
        if (composed && cpa_anim_read_matrix(im, cpa_u32(im, node + 0x24), G)) {
            /* The guest only refreshes node globals it needs (drawn / moved). A node global is FRESH iff it equals the guest's own chain
             * local * global(parent SuperObject) (all stored guest values, nothing native); otherwise it is stale and not compared. */
            float PG[16], Gc[16];
            stale = 1;
            if (cpa_anim_read_matrix(im, cpa_u32(im, cpa_u32(im, node + 0x1C) + 0x24), PG)) { cpa_anim_mat_mul(L, PG, Gc); stale = mdiff(G, Gc, 16) > 1e-3; }
            if (stale) S.chGlobalStale++;
            else { eG = mdiff(G, world[c], 16); S.chGlobal[bucket(eG)]++; if (eG > S.worstG) S.worstG = eG; }
        }
        /* vertex check: displayed geometry through the guest global of the node that owns the PO (inner node if the channel has a mirror wrapper) */
        double eV = -1;
        if (composed && C->obj >= 0) {
            uint32_t inner = cpa_u32(im, ent + 4), gn = cpa_is_ptr(im, inner) ? inner : node;
            uint32_t geo = cpa_anim_obj_geo(&A, C->obj); unsigned nv = 0;
            const float *V = geo ? cpa_anim_geo_verts(im, geo, &nv) : NULL;
            float Gg[16], mir[3];
            if (V && cpa_anim_read_matrix(im, cpa_u32(im, gn + 0x24), Gg) && !stale) {
                int wrapped = cpa_is_ptr(im, inner);
                cpa_anim_obj_mirror(&A, C->obj, mir);
                float Mn[16] = { 0 }; Mn[0] = wrapped ? mir[0] : 1; Mn[5] = wrapped ? mir[1] : 1; Mn[10] = wrapped ? mir[2] : 1; Mn[15] = 1;
                float W[16]; cpa_anim_mat_mul(Mn, world[c], W);
                double m = 0;
                for (unsigned v = 0; v < nv; v++) {
                    float a[3], b[3];
                    for (int j = 0; j < 3; j++) {
                        a[j] = V[v * 3] * Gg[j] + V[v * 3 + 1] * Gg[4 + j] + V[v * 3 + 2] * Gg[8 + j] + Gg[12 + j];
                        b[j] = V[v * 3] * W[j] + V[v * 3 + 1] * W[4 + j] + V[v * 3 + 2] * W[8 + j] + W[12 + j];
                    }
                    double d = mdiff(a, b, 3); if (d > m) m = d;
                }
                eV = m; S.vertCh++; S.vertBuckets[bucket(m)]++; if (m > S.worstV) S.worstV = m;
            }
        }
        if (g_d && (eR > 3e-4 || eT > 3e-4)) {
            fprintf(out, "    DBG eR %.1e eT %.1e ch%u kf %u->%u flags %04X -> %04X t %.4f ease [%d %d %d %d] -> [%d %d %d %d] q %.4f %.4f %.4f %.4f\n", eR, eT, c, C->kframe, C->nframe, C->kflags, C->nflags, C->t,
                    (int16_t)C->ease[0], (int16_t)C->ease[1], (int16_t)C->ease[2], (int16_t)C->ease[3], (int16_t)C->nease[0], (int16_t)C->nease[1], (int16_t)C->nease[2], (int16_t)C->nease[3], C->q[0], C->q[1], C->q[2], C->q[3]);
            fprintf(out, "      key %08X cachedT %.4f %.4f %.4f len %.4f dirIdx %u\n", C->keyVa, cpa_f32(im, C->keyVa), cpa_f32(im, C->keyVa + 4), cpa_f32(im, C->keyVa + 8), cpa_f32(im, C->keyVa + 12), cpa_u16(im, C->keyVa + 0x1A));
            { float qa[4], qb2[4]; for (int i = 0; i < 4; i++) { qa[i] = cpa_s16(im, T->H[2] + 8u * cpa_u16(im, C->keyVa + 0x14) + 2u * i) / 32767.0f; qb2[i] = cpa_s16(im, T->H[2] + 8u * cpa_u16(im, C->keyVa + 0x24 + 0x14) + 2u * i) / 32767.0f; }
              fprintf(out, "      qcur %.6f %.6f %.6f %.6f qnext %.6f %.6f %.6f %.6f theta %d\n", qa[0], qa[1], qa[2], qa[3], qb2[0], qb2[1], qb2[2], qb2[3], (int)(int16_t)C->ease[0]); }
            fprintf(out, "      guest rot %.6f %.6f %.6f / %.6f %.6f %.6f / %.6f %.6f %.6f  T %.4f %.4f %.4f\n      nat   rot %.6f %.6f %.6f / %.6f %.6f %.6f / %.6f %.6f %.6f  T %.4f %.4f %.4f\n",
                    L[0], L[1], L[2], L[4], L[5], L[6], L[8], L[9], L[10], L[12], L[13], L[14], Ln[0], Ln[1], Ln[2], Ln[4], Ln[5], Ln[6], Ln[8], Ln[9], Ln[10], Ln[12], Ln[13], Ln[14]);
        }
        if (g_v || g_t)
            fprintf(out, "  ch%-2u slot %-3u par %-3d obj %-3d (guest %-5d) h4f %04X kf %04X t %.3f | local rot %.2e T %.2e rot3 %.2e | global %.2e | verts %.2e%s%s\n",
                    c, C->slot, par[C->slot], C->obj, gobj, C->h4flags, C->kflags, C->t, eR, eT, e3, eG, eV, objOk ? "" : " OBJ!", lock ? " LOCK" : "");
    }
}

static void walk(const CpaImage *im, const CpaAnimTables *T, uint32_t va, int depth, FILE *out, unsigned *n) {
    if (depth > 40 || (*n)++ > 20000) return;
    uint32_t type, ch;
    if (!cpa_rd32(im, va, &type)) return;
    if (type == 2) do_actor(im, T, va, out);
    ch = cpa_u32(im, va + 8);
    for (unsigned k = 0; ch && k < 20000 && cpa_is_ptr(im, ch); k++) { walk(im, T, ch, depth + 1, out, n); ch = cpa_u32(im, ch + 0x14); }
}

/* test_anim -S FIX.DAT LEVEL.DAT SOHEX ANIM FRAME: static path, no guest RAM at all (DAT images only): prints the same channel table as -p (parent column is -1: no runtime tree). */
static int static_main(char **argv) {
    uint8_t *fix = NULL, *lvl = NULL; size_t nf = 0, nl = 0; CpaImage im; CpaAnimTables T; CpaAnimActor A; CpaAnimPose P;
    if (!cpa_read_file(argv[2], &fix, &nf) || !cpa_read_file(argv[3], &lvl, &nl)) return 2;
    cpa_image_init(&im);
    if (!cpa_image_add_dat(&im, CPA_DAT_LEVEL, lvl, nl) || !cpa_image_add_dat(&im, CPA_DAT_FIX, fix, nf) || !cpa_anim_tables_from_header(lvl, nl, &T)) return 2;
    uint32_t so = (uint32_t)strtoul(argv[4], NULL, 16); int an = atoi(argv[5]), fr = atoi(argv[6]);
    if (!cpa_anim_actor_open(&A, &im, &T, so) || !cpa_anim_eval(&A, (unsigned)an, (unsigned)fr, g_ease, &P)) { fprintf(stderr, "static open/eval failed\n"); return 1; }
    printf("STATIC actor %08X anim %d frame %d: %u channels, %u objects, runtime chanlist %s\n", so, an, fr, P.nCh, A.nObj, A.chanList ? "present" : "absent");
    for (unsigned c = 0; c < P.nCh; c++) printf("  ch%-2u slot %-3u par %-3d obj %-3d h4f %04X kf %04X T % .4f % .4f % .4f\n", c, P.ch[c].slot, -1, P.ch[c].obj, P.ch[c].h4flags, P.ch[c].kflags, P.ch[c].T[0], P.ch[c].T[1], P.ch[c].T[2]);
    return 0;
}

int main(int argc, char **argv) {
    if (argc >= 7 && !strcmp(argv[1], "-S")) return static_main(argv);
    if (argc < 3) { fprintf(stderr, "usage: test_anim RAM.bin LEVEL.DAT [-v] [-t] [-e N]\n"); return 2; }
    uint8_t *ram = NULL, *dat = NULL; size_t nram = 0, ndat = 0;
    if (!cpa_read_file(argv[1], &ram, &nram) || !cpa_read_file(argv[2], &dat, &ndat) || nram != 0x1000000 || ndat < 0x98) { fprintf(stderr, "cannot read inputs (RAM must be 16 MiB)\n"); return 2; }
    for (int i = 3; i < argc; i++) { if (!strcmp(argv[i], "-v")) g_v = 1; else if (!strcmp(argv[i], "-t")) g_t = 1; else if (!strcmp(argv[i], "-p") && i + 3 < argc) { g_p = 1; g_pso = (uint32_t)strtoul(argv[++i], NULL, 16); g_panim = atoi(argv[++i]); g_pframe = atoi(argv[++i]); } else if (!strcmp(argv[i], "-d")) g_d = 1; else if (!strcmp(argv[i], "-e") && i + 1 < argc) g_ease = atoi(argv[++i]); }
    CpaImage im; cpa_image_init(&im); cpa_image_add(&im, ram, nram, 0x8C000000u);
    CpaAnimTables T;
    if (!cpa_anim_tables_from_header(dat, ndat, &T)) { fprintf(stderr, "bad header\n"); return 2; }
    if (g_p) {   /* -p SO ANIM FRAME: evaluate any animation of any actor (not necessarily the current one) and list channels with the guest's parent table */
        CpaAnimActor A; CpaAnimPose P; int16_t par[CPA_ANIM_MAXSLOT];
        if (!cpa_anim_actor_open(&A, &im, &T, g_pso) || !cpa_anim_eval(&A, (unsigned)g_panim, (unsigned)g_pframe, g_ease, &P)) { fprintf(stderr, "open/eval failed\n"); return 1; }
        cpa_anim_read_parents(&A, par);
        printf("actor %08X anim %d frame %d: %u channels, %u objects in ObjectsTable\n", g_pso, g_panim, g_pframe, P.nCh, A.nObj);
        for (unsigned c = 0; c < P.nCh; c++) printf("  ch%-2u slot %-3u par %-3d obj %-3d h4f %04X kf %04X T % .4f % .4f % .4f\n", c, P.ch[c].slot, par[P.ch[c].slot], P.ch[c].obj, P.ch[c].h4flags, P.ch[c].kflags, P.ch[c].T[0], P.ch[c].T[1], P.ch[c].T[2]);
        {   /* actor-space bbox of each part, with the guest's parent table (hier) and with every channel treated as a child of the actor (flat) */
            float I[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 }, wh[CPA_ANIM_MAXCH][16], wf[CPA_ANIM_MAXCH][16];
            int16_t none[CPA_ANIM_MAXSLOT]; for (int i = 0; i < CPA_ANIM_MAXSLOT; i++) none[i] = -1;
            int okh = cpa_anim_compose(&P, par, I, wh), okf = cpa_anim_compose(&P, none, I, wf);
            for (unsigned c = 0; okh && okf && c < P.nCh; c++) {
                uint32_t geo = cpa_anim_obj_geo(&A, P.ch[c].obj); unsigned nv = 0; const float *V = geo ? cpa_anim_geo_verts(&im, geo, &nv) : NULL;
                float mir[3], Mn[16] = { 0 }, W[2][16]; int wr = cpa_is_ptr(&im, cpa_u32(&im, A.chanList + 0x14u * P.ch[c].slot + 4));
                if (!V) continue;
                cpa_anim_obj_mirror(&A, P.ch[c].obj, mir);
                Mn[0] = wr ? mir[0] : 1; Mn[5] = wr ? mir[1] : 1; Mn[10] = wr ? mir[2] : 1; Mn[15] = 1;
                cpa_anim_mat_mul(Mn, wh[c], W[0]); cpa_anim_mat_mul(Mn, wf[c], W[1]);
                for (int k = 0; k < 2; k++) {
                    float lo[3] = { 1e30f, 1e30f, 1e30f }, hi[3] = { -1e30f, -1e30f, -1e30f };
                    for (unsigned v = 0; v < nv; v++) for (int j = 0; j < 3; j++) {
                        float x = V[v * 3] * W[k][j] + V[v * 3 + 1] * W[k][4 + j] + V[v * 3 + 2] * W[k][8 + j] + W[k][12 + j];
                        if (x < lo[j]) lo[j] = x; if (x > hi[j]) hi[j] = x;
                    }
                    printf("  ch%u obj %d %s bbox (% .3f % .3f % .3f)..(% .3f % .3f % .3f)\n", c, P.ch[c].obj, k ? "flat" : "hier", lo[0], lo[1], lo[2], hi[0], hi[1], hi[2]);
                }
            }
        }
        return 0;
    }
    unsigned n = 0;
    walk(&im, &T, le32(dat + 13 * 4), 0, stdout, &n);
    printf("SUMMARY %s: actors %u, with live state %u, skipped %u (open failed %u, no channel list %u, no cur state %u), eval-failed %u\n", argv[1], S.actors, S.withState, S.skipped, S.skipNoOpen, S.skipNoChan, S.skipNoCur, S.evalFail);
    printf("  channel globals not equal to the guest's own local*parent chain (stale, not compared): %u\n", S.chGlobalStale);
    printf("  interpolated channels (t > 0): %u, of which >1e-4 off: %u; keys with nonzero s16@+0x22: %u (>1e-4 off %u), of those interpolated: %u (>1e-4 off %u)\n", S.interp, S.interpBad, S.e3Keys, S.e3Bad, S.e3KeysT, S.e3BadT);
    printf("  parent topology vs H4 flag 0x800: parent && flag %u, neither %u, parent without flag %u, flag without parent %u\n", S.parFlagBoth, S.parFlagNone, S.parOnly, S.flagOnly);
    printf("  channels %u: obj index equal to guest record %u, slot equal %u, no node %u, lock byte set %u\n", S.ch, S.chObjOk, S.chSlotOk, S.chNoNode, S.chLocked);
    printf("  local rot  max-abs buckets <1e-4 %u, <1e-3 %u, <1e-2 %u, worse %u (worst %.3e)\n", S.chLocalRot[0], S.chLocalRot[1], S.chLocalRot[2], S.chLocalRot[3], S.worstRot);
    printf("  local T    max-abs buckets <1e-4 %u, <1e-3 %u, <1e-2 %u, worse %u (worst %.3e)\n", S.chLocalT[0], S.chLocalT[1], S.chLocalT[2], S.chLocalT[3], S.worstT);
    printf("  rot3x3 copy buckets        <1e-4 %u, <1e-3 %u, <1e-2 %u, worse %u\n", S.chRot3x3[0], S.chRot3x3[1], S.chRot3x3[2], S.chRot3x3[3]);
    printf("  global 4x4 buckets         <1e-4 %u, <1e-3 %u, <1e-2 %u, worse %u (worst %.3e)\n", S.chGlobal[0], S.chGlobal[1], S.chGlobal[2], S.chGlobal[3], S.worstG);
    printf("  vertices (all verts of the displayed geometry, world space) per channel: <1e-4 %u, <1e-3 %u, <1e-2 %u, worse %u of %u (worst %.3e)\n", S.vertBuckets[0], S.vertBuckets[1], S.vertBuckets[2], S.vertBuckets[3], S.vertCh, S.worstV);
    free(ram); free(dat);
    return 0;
}
