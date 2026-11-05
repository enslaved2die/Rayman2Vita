/* kindb_cmp: kind-B comparison for N2. Reads a kindb_capture record file (per-frame guest actor state) and recomputes every actor pose NATIVELY from the level DAT +
 * FIX.DAT only (static image, no RAM): cpa_anim_rig_pose(animIdx, frame, actor matrix) where (animIdx, frame) and the actor-to-world matrix are the guest's values of that frame.
 * Compared per channel and frame: object index/slot, local 4x4 (rot 3x3 and T), world matrix (== guest channel node global, only when the guest refreshed it: !stale),
 * vertex matrix objM (== guest inner/outer node global, only when fresh).
 *
 *   kindb_cmp REC.bin LEVEL.DAT FIX.DAT [-tol 1e-3] [-csv FILE] [-v SOHEX]
 * Output: per actor ACTOR line (class static/runtime-spawned, frames, anims seen, worst errors, frames within tol, first divergent frame + cause), summary, csv of per-frame max errors.
 * Divergent frame = any compared quantity above tol. Cause is derived from the guest record of that frame (lock byte, anim change, keyframe flags, t). */
#include "../../src/cpa/cpa_anim.h"
#include "kindb_rec.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { uint32_t so; int stat; unsigned frames, cmpFrames, okFrames, evalFail, objBad, slotBad, lockFrames, staleCh, freshCh, nAnims; unsigned anims[16];
    double wRot, wT, wWorld, wObjM; long firstBad; char cause[400]; unsigned firstGuestFrame, lastGuestFrame, badFrames, maxCh, noGlobalFrames; unsigned animChanges, framesJump, stateChanges, minFr, maxFr, parBad, parBadFrames, chainBadCh, chainFixedByPrevG, chainBadParentStale, chainBadAncestorStale, bad2Frames, run, bestRun, bestRunStart, runStart; double wChain; } ActS;
static ActS acts[512]; static unsigned nacts;
static ActS *find(uint32_t so) { for (unsigned i = 0; i < nacts; i++) if (acts[i].so == so) return &acts[i]; if (nacts >= 512) return NULL; ActS *a = &acts[nacts++]; memset(a, 0, sizeof *a); a->so = so; a->firstBad = -1; return a; }
static double mdiff(const float *a, const float *b, int n) { double m = 0; for (int i = 0; i < n; i++) { double d = fabs((double)a[i] - b[i]); if (d > m) m = d; } return m; }

typedef struct { uint32_t so, anim, frame, ref; float G[16]; int haveG; } Prev;
static struct { uint16_t fl; unsigned n, badR, badT; double wR, wT; } fh[256]; static unsigned nfh;
static void fhit(uint16_t fl, double eR, double eT, double tol) { unsigned i; for (i = 0; i < nfh; i++) if (fh[i].fl == fl) break; if (i == nfh) { if (nfh >= 256) return; fh[nfh++].fl = fl; } fh[i].n++; if (eR > tol) fh[i].badR++; if (eT > tol) fh[i].badT++; if (eR > fh[i].wR) fh[i].wR = eR; if (eT > fh[i].wT) fh[i].wT = eT; }
static Prev prev[512];

int main(int argc, char **argv) {
    if (argc < 4) { fprintf(stderr, "usage: kindb_cmp REC.bin LEVEL.DAT FIX.DAT [-tol T] [-from G] [-to G] [-csv FILE] [-v SOHEX]\n"); return 2; }
    double tol = 1e-3; unsigned wFrom = 0, wTo = 0xFFFFFFFFu; const char *csvp = NULL; uint32_t vso = 0;
    for (int i = 4; i < argc; i++) { if (!strcmp(argv[i], "-tol") && i + 1 < argc) tol = atof(argv[++i]); else if (!strcmp(argv[i], "-csv") && i + 1 < argc) csvp = argv[++i]; else if (!strcmp(argv[i], "-from") && i + 1 < argc) wFrom = (unsigned)atoi(argv[++i]); else if (!strcmp(argv[i], "-to") && i + 1 < argc) wTo = (unsigned)atoi(argv[++i]); else if (!strcmp(argv[i], "-v") && i + 1 < argc) vso = (uint32_t)strtoul(argv[++i], NULL, 16); }
    uint8_t *dat, *fix; size_t nd, nf; FILE *rf = fopen(argv[1], "rb");
    if (!rf || !cpa_read_file(argv[2], &dat, &nd) || !cpa_read_file(argv[3], &fix, &nf)) { fprintf(stderr, "cannot read inputs\n"); return 2; }
    char mg[4]; if (fread(mg, 1, 4, rf) != 4 || memcmp(mg, "KBR1", 4)) { fprintf(stderr, "bad record file\n"); return 2; }
    CpaImage im; cpa_image_init(&im); CpaAnimTables T;
    if (!cpa_image_add_dat(&im, CPA_DAT_LEVEL, dat, nd) || !cpa_image_add_dat(&im, CPA_DAT_FIX, fix, nf) || !cpa_anim_tables_from_header(dat, nd, &T)) { fprintf(stderr, "bad DAT\n"); return 2; }
    FILE *csv = csvp ? fopen(csvp, "w") : NULL; if (csv) fprintf(csv, "guest_frame,so,anim,frame,nch,wRot,wT,wWorld,wObjM,status\n");
    unsigned nframes = 0, firstFr = 0, lastFr = 0, gaps = 0; uint32_t h[4];
    while (fread(h, 4, 4, rf) == 4) {
        if (h[0] != 0x424D5246u) { fprintf(stderr, "bad frame magic\n"); return 2; }
        int inwin = h[1] >= wFrom && h[1] <= wTo;
        if (inwin && nframes && h[1] != lastFr + 1) gaps++;
        if (inwin) { if (!nframes) firstFr = h[1]; lastFr = h[1]; nframes++; }
        for (uint32_t ai = 0; ai < h[3]; ai++) {
            KbAct a; static KbCh c[CPA_ANIM_MAXCH];
            if (fread(&a, sizeof a, 1, rf) != 1 || a.nCh > CPA_ANIM_MAXCH || fread(c, sizeof(KbCh), a.nCh, rf) != a.nCh) { fprintf(stderr, "truncated\n"); return 2; }
            if (!inwin) continue;
            ActS *S = find(a.so); if (!S) continue;
            if (!S->frames) { S->firstGuestFrame = h[1]; CpaAnimActor tmp; S->stat = cpa_anim_actor_open(&tmp, &im, &T, a.so); }
            S->frames++; S->lastGuestFrame = h[1]; if (a.nCh > S->maxCh) S->maxCh = a.nCh;
            { int seen = 0; for (unsigned k = 0; k < S->nAnims; k++) if (S->anims[k] == a.animIdx) seen = 1; if (!seen && S->nAnims < 16) S->anims[S->nAnims++] = a.animIdx; }
            unsigned pidx = (unsigned)(S - acts); int animChanged = 0, jump = 0, pgPrevOK = 0; float pgPrev[16];
            if (S->frames > 1) { Prev *p = &prev[pidx]; animChanged = p->anim != a.animIdx || p->ref != a.animRef; jump = !animChanged && a.frame != p->frame + 1 && a.frame != p->frame; if (animChanged) S->animChanges++; if (jump) S->framesJump++; }
            if (S->frames == 1) { S->minFr = S->maxFr = a.frame; } else { if (a.frame < S->minFr) S->minFr = a.frame; if (a.frame > S->maxFr) S->maxFr = a.frame; if (prev[pidx].anim != a.animIdx || prev[pidx].frame != a.frame) S->stateChanges++; }
            pgPrevOK = prev[pidx].haveG; if (pgPrevOK) memcpy(pgPrev, prev[pidx].G, sizeof pgPrev);
            prev[pidx] = (Prev){ a.so, a.animIdx, a.frame, a.animRef, {0}, a.haveG }; memcpy(prev[pidx].G, a.G, sizeof a.G);
            if (!S->stat) { continue; }   /* runtime-spawned: not poseable from DAT data */
            S->cmpFrames++;
            CpaAnimActor A; CpaAnimRig R; static CpaAnimRig Rs; (void)R;
            if (!cpa_anim_actor_open(&A, &im, &T, a.so) || !a.haveG || !cpa_anim_rig_pose(&A, a.animIdx, a.frame, CPA_ANIM_BEST, a.G, &Rs)) {
                S->evalFail++; S->badFrames++; if (S->firstBad < 0) { S->firstBad = h[1]; snprintf(S->cause, sizeof S->cause, "native eval failed for anim %u frame %u (frame outside the record or no actor matrix)", a.animIdx, a.frame); }
                if (csv) fprintf(csv, "%u,%08X,%u,%u,%u,,,,,evalfail\n", h[1], a.so, a.animIdx, a.frame, a.nCh); continue; }
            double fRot = 0, fT = 0, fW = 0, fO = 0; int worstCh = -1; double worstVal = -1; int lockAny = 0, parBadHere = 0;
            for (unsigned k = 0; k < a.nCh; k++) {
                const KbCh *g = &c[k]; const CpaAnimChan *C = NULL; unsigned ci = 0;
                for (ci = 0; ci < Rs.pose.nCh; ci++) if (Rs.pose.ch[ci].slot == g->slot) { C = &Rs.pose.ch[ci]; break; }
                if (g->stale == 2 || !C) { S->noGlobalFrames++; continue; }
                if (g->lock) lockAny = 1;
                if (C->slot < CPA_ANIM_MAXSLOT && Rs.parentSlot[C->slot] != g->parent) { S->parBad++; parBadHere = 1; }
                if ((C->obj < 0 ? 0xFFFF : C->obj) != g->obj) S->objBad++;
                float Ln[16]; cpa_anim_chan_matrix(C, Ln);
                float a9[9], b9[9]; for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { a9[i * 3 + j] = g->L[i * 4 + j]; b9[i * 3 + j] = Ln[i * 4 + j]; }
                double eR = mdiff(a9, b9, 9), eT = mdiff(g->L + 12, Ln + 12, 3), eW = 0, eO = 0;
                if (g->stale) S->staleCh++; else {
                    /* STEP compare: native local x the GUEST's stored parent global (parent channel node global of the same record, else the actor matrix), so a parent the guest did not
                     * refresh this frame (stale) does not leak into the child. Chain compare (full native hierarchy from the actor matrix) kept as wChain. */
                    float Gp[16], Ws[16], Wm[16]; memcpy(Gp, a.G, sizeof Gp);
                    if (g->parent >= 0) for (unsigned q = 0; q < a.nCh; q++) if (c[q].slot == g->parent && c[q].stale != 2) memcpy(Gp, c[q].G, sizeof Gp);
                    cpa_anim_mat_mul(Ln, Gp, Ws); memcpy(Wm, Ws, sizeof Wm);
                    if (Rs.wrapped[ci]) { float mir[3], Mn[16] = { 0 }; cpa_anim_obj_mirror(&A, C->obj, mir); Mn[0] = mir[0]; Mn[5] = mir[1]; Mn[10] = mir[2]; Mn[15] = 1; cpa_anim_mat_mul(Mn, Ws, Wm); }
                    S->freshCh++; eW = mdiff(g->G, Ws, 16); eO = mdiff(g->hasInner ? g->Gi : g->G, Wm, 16);
                    { double ec = mdiff(g->G, Rs.world[ci], 16); if (ec > S->wChain) S->wChain = ec; if (ec > tol) { S->chainBadCh++; { int anc = 0, par = g->parent; for (int d = 0; par >= 0 && d < 16; d++) { int nx = -2; for (unsigned q = 0; q < a.nCh; q++) if (c[q].slot == par) { if (c[q].stale) anc = 1; nx = c[q].parent; } if (nx == -2) { anc = 1; break; } par = nx; } if (anc) S->chainBadAncestorStale++; } if (pgPrevOK) { static CpaAnimRig Rp; if (cpa_anim_rig_pose(&A, a.animIdx, a.frame, CPA_ANIM_BEST, pgPrev, &Rp) && mdiff(g->G, Rp.world[ci], 16) <= tol) S->chainFixedByPrevG++; } } }
                    if (!g->hasInner && Rs.wrapped[ci]) eO = 0; }
                fhit(C->kflags, eR, eT, tol);
                if (eR > fRot) fRot = eR; if (eT > fT) fT = eT; if (eW > fW) fW = eW; if (eO > fO) fO = eO;
                double m = eR > eT ? eR : eT; if (eW > m) m = eW; if (eO > m) m = eO;
                if (m > worstVal) { worstVal = m; worstCh = (int)k; }
                if (vso == a.so && m > tol) printf("  VERBOSE f%u anim %u/%u ch%u slot %u kf %04X t %.3f lock %u stale %u parent guest %d native %d | rot %.2e T %.2e world %.2e objM %.2e\n", h[1], a.animIdx, a.frame, k, g->slot, C->kflags, C->t, g->lock, g->stale, g->parent, Rs.parentSlot[C->slot], eR, eT, eW, eO);
            }
            if (lockAny) S->lockFrames++;
            if (parBadHere) S->parBadFrames++;
            if (fRot > S->wRot) S->wRot = fRot; if (fT > S->wT) S->wT = fT; if (fW > S->wWorld) S->wWorld = fW; if (fO > S->wObjM) S->wObjM = fO;
            double fm = fRot > fT ? fRot : fT; if (fW > fm) fm = fW; if (fO > fm) fm = fO;
            int bad = fm > tol;
            if (bad) S->badFrames++; else S->okFrames++;
            if (fm > 1e-2) S->bad2Frames++;
            if (!bad) { if (!S->run) S->runStart = h[1]; S->run++; if (S->run > S->bestRun) { S->bestRun = S->run; S->bestRunStart = S->runStart; } } else S->run = 0;
            if (bad && S->firstBad < 0) {
                S->firstBad = h[1]; const KbCh *g = &c[worstCh]; const CpaAnimChan *C = NULL; for (unsigned ci = 0; ci < Rs.pose.nCh; ci++) if (Rs.pose.ch[ci].slot == g->slot) C = &Rs.pose.ch[ci];
                snprintf(S->cause, sizeof S->cause, "anim %u frame %u ch%d slot %u key flags %04X t %.3f lock %u; rot %.2e T %.2e world %.2e objM %.2e; anim %s, frame %s; any-lock-in-frame %d; parent mismatch this frame %d",
                         a.animIdx, a.frame, worstCh, g->slot, C ? C->kflags : 0, C ? C->t : 0.0, g->lock, fRot, fT, fW, fO, animChanged ? "CHANGED this frame" : "same as prev", jump ? "jumped" : "advanced/held", lockAny, parBadHere);
            }
            if (csv) fprintf(csv, "%u,%08X,%u,%u,%u,%.3e,%.3e,%.3e,%.3e,%s\n", h[1], a.so, a.animIdx, a.frame, a.nCh, fRot, fT, fW, fO, bad ? "BAD" : "ok");
        }
    }
    printf("RECORD %s: %u consecutive frames (guest %u..%u, %u gaps), %u distinct actors, tol %.0e\n", argv[1], nframes, firstFr, lastFr, gaps, nacts, tol);
    for (unsigned i = 0; i < nacts; i++) {
        ActS *S = &acts[i];
        printf("ACTOR %08X %-14s frames %3u max-ch %2u anims", S->so, S->stat ? "static(DAT d3)" : "RUNTIME-SPAWNED", S->frames, S->maxCh);
        for (unsigned k = 0; k < S->nAnims; k++) printf("%s%u", k ? "," : " ", S->anims[k]);
        printf(" | animChanges %u frameJumps %u stateChanges %u frame range %u..%u", S->animChanges, S->framesJump, S->stateChanges, S->minFr, S->maxFr);
        if (S->stat) printf(" | ok %u/%u evalFail %u lockFrames %u parentMismatch-ch %u (frames %u) | worst rot %.2e T %.2e world(step) %.2e objM(step) %.2e world(full chain from actor G) %.2e [%u ch-samples >tol, %u of them fit with the PREVIOUS frame's actor matrix; %u have a stale/unrecorded ancestor channel in the guest] | frames >1e-2: %u | longest run of consecutive in-tol frames %u (from guest frame %u) | fresh %u stale %u ch-samples objBad %u | first bad guest frame %ld (window frame %ld)\n",
                            S->okFrames, S->cmpFrames, S->evalFail, S->lockFrames, S->parBad, S->parBadFrames, S->wRot, S->wT, S->wWorld, S->wObjM, S->wChain, S->chainBadCh, S->chainFixedByPrevG, S->chainBadAncestorStale, S->bad2Frames, S->bestRun, S->bestRunStart, S->freshCh, S->staleCh, S->objBad, S->firstBad, S->firstBad < 0 ? -1 : S->firstBad - (long)S->firstGuestFrame);
        else printf(" | not poseable from DAT (Actor+0 == 0 or unreadable in the static image)\n");
        if (S->stat && S->firstBad >= 0) printf("      cause@first: %s\n", S->cause);
    }
    printf("KEYFLAGS (all compared channel samples of this record, grouped by key flags H9+0x12; local rot / T errors vs tol)\n");
    for (unsigned i = 0; i < nfh; i++) if (fh[i].badR || fh[i].badT) printf("  flags %04X: samples %u, rot>tol %u (worst %.2e), T>tol %u (worst %.2e)\n", fh[i].fl, fh[i].n, fh[i].badR, fh[i].wR, fh[i].badT, fh[i].wT);
    return 0;
}
