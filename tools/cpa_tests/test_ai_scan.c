/* test_ai_scan: run the AI script scanner (src/cpa/cpa_ai_scan.c) over every level DAT of a DCDATA directory, optionally compare with the guest RAM dumps,
 * print a per-level line and an aggregate, and write the machine-readable result used by tools/ai_ledger.py.
 *
 *   test_ai_scan DCDATA [--ram DIR] [--json OUT.json] [--only NAME] [-q]
 *
 * DCDATA  = assets/dc/DCDATA (FIX.DAT plus one NAME/NAME.DAT + NAME.TMP per level).
 * --ram   = directory holding ram_<NAME>.bin (16 MiB guest RAM at 0x8C000000, tools/cpa_tests/Makefile oracle-dump); levels without a dump are skipped there.
 * Exit status 0 only if no shape error, out-of-range id, unknown node type, DAT/TMP disagreement, or RAM mismatch was found. Nothing is hidden: every
 * counter is printed.
 */
#include "../../src/cpa/cpa_ai_scan.h"
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t le32(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }
static int cmpstr(const void *a, const void *b) { return strcmp(*(char *const *)a, *(char *const *)b); }

typedef struct { uint32_t used[2]; } Lv;   /* levels using an id: [0] by Table-1 census, [1] by actor walk */
static struct {
    CpaAiHist tmpAll, walkAll;          /* merged: level regions of every level + FIX once (tmp) / FIX per level (walk, presence only) */
    uint32_t lvTmp[CPA_AI_NMAXSLOT][CPA_AI_NPROC], lvWalk[CPA_AI_NMAXSLOT][CPA_AI_NPROC];
    uint32_t lvlN[CPA_AI_NMAXSLOT][CPA_AI_NPROC], fixN[CPA_AI_NMAXSLOT][CPA_AI_NPROC], walkN[CPA_AI_NMAXSLOT][CPA_AI_NPROC];  /* occurrence sums: tmp level region, tmp FIX (once), walk (all regions, all levels) */
} G;

static const CpaAiOpStat *stat_of(const CpaAiHist *h, int cls, int id) {
    switch (cls) {
        case CPA_AI_C_KEYWORD: return id < CPA_AI_NKW ? &h->kw[id] : NULL;
        case CPA_AI_C_COND: return id < CPA_AI_NCOND ? &h->cond[id] : NULL;
        case CPA_AI_C_OPERATOR: return id < CPA_AI_NOP ? &h->op[id] : NULL;
        case CPA_AI_C_FUNCTION: return id < CPA_AI_NFUNC ? &h->func[id] : NULL;
        case CPA_AI_C_PROCEDURE: return id < CPA_AI_NPROC ? &h->proc[id] : NULL;
        case CPA_AI_C_META: return id < CPA_AI_NMETA ? &h->meta[id] : NULL;
        case CPA_AI_C_FIELD: return id < CPA_AI_NFIELD ? &h->field[id] : NULL;
        case CPA_AI_C_TYPE: return id < CPA_AI_NTYPE ? &h->type[id] : NULL;
    }
    return NULL;
}
static const int CLSN[8] = { CPA_AI_NKW, CPA_AI_NCOND, CPA_AI_NOP, CPA_AI_NFUNC, CPA_AI_NPROC, CPA_AI_NMETA, CPA_AI_NFIELD, CPA_AI_NTYPE };

static uint64_t hist_sig(const CpaAiHist *h) {   /* order-independent fingerprint of the per-id counts */
    uint64_t s = 1469598103934665603ull;
    for (int c = 0; c < 8; c++) for (int i = 0; i < CLSN[c]; i++) { const CpaAiOpStat *o = stat_of(h, c, i); s = (s ^ o->n) * 1099511628211ull; s = (s ^ o->arMin) * 1099511628211ull; s = (s ^ o->arMax) * 1099511628211ull; }
    return s;
}

static int shape_bad(const CpaAiShape *s, int dat) {
    return s->firstDepth + s->depthJump + s->depth0Early + s->unterminated + s->unreadable + s->tooLong + (dat ? s->placeholderNot0d : 0);
}

static void json_class(FILE *f, int cls, int last) {
    fprintf(f, "  \"%s\": [", cpa_ai_class_name(cls));
    int first = 1;
    for (int id = 0; id < CLSN[cls]; id++) {
        const CpaAiOpStat *t = stat_of(&G.tmpAll, cls, id), *w = stat_of(&G.walkAll, cls, id);
        if (!t->n && !w->n) continue;
        fprintf(f, "%s\n    {\"id\":%d,\"lvlN\":%u,\"fixN\":%u,\"walkN\":%u,\"levelsTmp\":%u,\"levelsWalk\":%u,\"arMin\":%u,\"arMax\":%u,\"wArMin\":%u,\"wArMax\":%u,\"child\":[\"%llx\",\"%llx\",\"%llx\",\"%llx\"],\"parent\":\"%llx\",\"root\":%u}",
                first ? "" : ",", id, G.lvlN[cls][id], G.fixN[cls][id], G.walkN[cls][id], G.lvTmp[cls][id], G.lvWalk[cls][id],
                t->n ? t->arMin : 0, t->n ? t->arMax : 0, w->n ? w->arMin : 0, w->n ? w->arMax : 0,
                (unsigned long long)t->child[0], (unsigned long long)t->child[1], (unsigned long long)t->child[2], (unsigned long long)t->child[3],
                (unsigned long long)t->parent, t->parentRoot);
        first = 0;
    }
    fprintf(f, "\n  ]%s\n", last ? "" : ",");
}

int main(int argc, char **argv) {
    const char *dc = NULL, *ramDir = NULL, *jsonPath = NULL, *only = NULL; int quiet = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--ram") && i + 1 < argc) ramDir = argv[++i];
        else if (!strcmp(argv[i], "--json") && i + 1 < argc) jsonPath = argv[++i];
        else if (!strcmp(argv[i], "--only") && i + 1 < argc) only = argv[++i];
        else if (!strcmp(argv[i], "-q")) quiet = 1;
        else if (!dc) dc = argv[i];
    }
    if (!dc) dc = getenv("CPA_DC_DATA");
    if (!dc) { fprintf(stderr, "usage: test_ai_scan DCDATA [--ram DIR] [--json OUT] [--only NAME] [-q]\n"); return 2; }

    char path[1024];
    snprintf(path, sizeof path, "%s/FIX.DAT", dc);
    uint8_t *fix = NULL; size_t fixN = 0;
    if (!cpa_read_file(path, &fix, &fixN)) { fprintf(stderr, "cannot read %s\n", path); return 2; }

    char **names = NULL; int nn = 0;
    DIR *d = opendir(dc);
    if (!d) { fprintf(stderr, "cannot open %s\n", dc); return 2; }
    struct dirent *de;
    while ((de = readdir(d))) {
        if (de->d_name[0] == '.') continue;
        snprintf(path, sizeof path, "%s/%s/%s.DAT", dc, de->d_name, de->d_name);
        FILE *t = fopen(path, "rb");
        if (!t) continue;
        fclose(t);
        names = (char **)realloc(names, (nn + 1) * sizeof *names);
        names[nn++] = strdup(de->d_name);
    }
    closedir(d);
    qsort(names, nn, sizeof *names, cmpstr);

    FILE *jf = jsonPath ? fopen(jsonPath, "w") : NULL;
    if (jf) fprintf(jf, "{\n\"levels\": [\n");
    int fails = 0, nLev = 0, jfirst = 1;
    uint64_t fixSig = 0; int fixSigSet = 0, fixSigDiff = 0;
    uint64_t totTmpNodes = 0, totWalkNodes = 0;
    CpaAiRtCmp ramTot; memset(&ramTot, 0, sizeof ramTot);
    unsigned ramLevels = 0, ramWalkDiffer = 0, ramGptBad = 0;
    uint32_t sum[16]; memset(sum, 0, sizeof sum);
    CpaAiShape wsh, tsh; memset(&wsh, 0, sizeof wsh); memset(&tsh, 0, sizeof tsh);
    CpaAiScan tot; memset(&tot, 0, sizeof tot);

    if (!quiet) printf("%-12s %5s %5s %6s %7s %7s | %7s %6s %7s | %5s %5s %5s\n", "level", "actors", "minds", "models", "walkScr", "walkNod", "tmpScr", "orphan", "orphNod", "shape", "oor", "ramOK");
    for (int li = 0; li < nn; li++) {
        const char *name = names[li];
        if (only && strcmp(only, name)) continue;
        uint8_t *dat = NULL, *tmp = NULL; size_t datN = 0, tmpN = 0;
        snprintf(path, sizeof path, "%s/%s/%s.DAT", dc, name, name);
        if (!cpa_read_file(path, &dat, &datN)) { printf("%s: cannot read DAT\n", name); fails++; continue; }
        snprintf(path, sizeof path, "%s/%s/%s.TMP", dc, name, name);
        if (!cpa_read_file(path, &tmp, &tmpN)) { printf("%s: cannot read TMP\n", name); fails++; free(dat); continue; }
        CpaImage im; cpa_image_init(&im);
        if (!cpa_image_add_dat(&im, CPA_DAT_LEVEL, dat, datN) || !cpa_image_add_dat(&im, CPA_DAT_FIX, fix, fixN) || datN < 0xB0) { printf("%s: bad image\n", name); fails++; free(dat); free(tmp); continue; }
        uint32_t root = le32(dat + 13 * 4);
        CpaAiScan *s = cpa_ai_scan_new();
        int ok = cpa_ai_scan(s, &im, root, tmp, tmpN);
        nLev++;

        /* per-level checks */
        int bad = shape_bad(&s->walkShape, 1) + shape_bad(&s->tmpShape, 1);
        unsigned oor = 0; uint32_t typeBad = 0;
        for (int r = 0; r < 2; r++) { for (int c = 0; c < 7; c++) oor += s->tmp[r].oor[c] + s->walk[r].oor[c]; typeBad += s->tmp[r].typeBad + s->walk[r].typeBad; }
        int cons = s->walkNotInTmp + s->cmpIdxMismatch + s->cmpHdrInitBad + s->cmpFillBad + s->cmpMacroSlotsDiffer + s->cmpMacroBadPtr + s->cmpRuleBadPtr + s->badCount +
                   s->intelNormalNot + s->intelReflexNot + s->nActorNoModel + s->tmpOutside;
        if (!ok || bad || oor || typeBad || cons) { fails++; printf("  [%s] flagged: ok=%d shape=%d oor=%u typeBad=%u cons=%d (walkNotInTmp %u idx %u hdrInit %u fill %u macroSlots %u macroBad %u ruleBad %u badCount %u outside %u noModel %u)\n", name, ok, bad, oor, typeBad, cons, s->walkNotInTmp, s->cmpIdxMismatch, s->cmpHdrInitBad, s->cmpFillBad, s->cmpMacroSlotsDiffer, s->cmpMacroBadPtr, s->cmpRuleBadPtr, s->badCount, s->tmpOutside, s->nActorNoModel); }

        /* FIX region of the Table-1 census must be identical in every level */
        uint64_t fs = hist_sig(&s->tmp[1]);
        if (!fixSigSet) { fixSig = fs; fixSigSet = 1; } else if (fs != fixSig) fixSigDiff++;

        /* RAM comparison */
        int ramState = -1; CpaAiRtCmp rc; memset(&rc, 0, sizeof rc);
        if (ramDir) {
            snprintf(path, sizeof path, "%s/ram_%s.bin", ramDir, name);
            uint8_t *ram = NULL; size_t ramN = 0;
            if (cpa_read_file(path, &ram, &ramN)) {
                CpaImage rim; cpa_image_init(&rim);
                cpa_image_add(&rim, ram, ramN, 0x8C000000u);
                CpaAiScan *rs = cpa_ai_scan_new();
                cpa_ai_scan(rs, &rim, root, NULL, 0);
                cpa_ai_runtime_compare(&rc, &im, &rim, s->walkNodes, s->nWalkNodes);
                int same = 0, superset = 0;
                {   /* in the RAM image everything is region 0, so compare merged histograms */
                    CpaAiHist a, b; memset(&a, 0, sizeof a); memset(&b, 0, sizeof b);
                    cpa_ai_hist_merge(&a, &s->walk[0]); cpa_ai_hist_merge(&a, &s->walk[1]);
                    cpa_ai_hist_merge(&b, &rs->walk[0]); cpa_ai_hist_merge(&b, &rs->walk[1]);
                    same = rs->nWalkNodes == s->nWalkNodes && rs->nScriptsNormal == s->nScriptsNormal && rs->nScriptsReflex == s->nScriptsReflex && rs->nScriptsMacro == s->nScriptsMacro &&
                           rs->nModels == s->nModels && rs->nActors == s->nActors && hist_sig(&a) == hist_sig(&b);
                    /* every node the DAT walk reached must also be reached in RAM (RAM may hold extra, runtime-created actors) */
                    superset = rs->nWalkNodes >= s->nWalkNodes && rs->nActors >= s->nActors;
                    for (uint32_t k = 0; k < s->nWalkStarts && superset; k++) { uint32_t lo = 0, hi = rs->nWalkStarts, x = s->walkStarts[k]; int f = 0; while (lo < hi) { uint32_t m = (lo + hi) / 2; if (rs->walkStarts[m] < x) lo = m + 1; else hi = m; } f = lo < rs->nWalkStarts && rs->walkStarts[lo] == x; if (!f) superset = 0; }
                }
                same = same ? 1 : 0;
                ramState = (rc.n == s->nWalkNodes && rc.typeDepthSame == rc.n && rc.handlerIsGpt == rc.n && rc.gptValid == CPA_AI_NTYPE && superset && !rc.unreadable) ? 1 : 0;
                if (!same) { ramWalkDiffer++; printf("  [%s] RAM walk != DAT walk (RAM superset: %s): actors %u/%u minds %u/%u models %u/%u scripts n%u/%u r%u/%u m%u/%u nodes %u/%u (DAT/RAM)\n", name, superset ? "yes" : "NO", s->nActors, rs->nActors, s->nMinds, rs->nMinds, s->nModels, rs->nModels, s->nScriptsNormal, rs->nScriptsNormal, s->nScriptsReflex, rs->nScriptsReflex, s->nScriptsMacro, rs->nScriptsMacro, s->nWalkNodes, rs->nWalkNodes); }
                if (rc.gptValid != CPA_AI_NTYPE) ramGptBad++;
                ramLevels++;
                ramTot.n += rc.n; ramTot.typeDepthSame += rc.typeDepthSame; ramTot.handlerIsGpt += rc.handlerIsGpt; ramTot.handlerOther += rc.handlerOther;
                ramTot.paramSame += rc.paramSame; ramTot.skipSet += rc.skipSet; ramTot.unreadable += rc.unreadable;
                for (int t = 0; t < CPA_AI_NTYPE; t++) ramTot.paramDiff[t] += rc.paramDiff[t];
                if (ramLevels == 1) memcpy(ramTot.gpt, rc.gpt, sizeof ramTot.gpt);
                if (!ramState) fails++;
                cpa_ai_scan_free(rs); free(ram);
            }
        }

        /* aggregate */
        {
            uint32_t fixSumGuard = 0; (void)fixSumGuard;
            CpaAiHist w; memset(&w, 0, sizeof w);
            cpa_ai_hist_merge(&w, &s->walk[0]); cpa_ai_hist_merge(&w, &s->walk[1]);
            cpa_ai_hist_merge(&G.walkAll, &w);
            cpa_ai_hist_merge(&G.tmpAll, &s->tmp[0]);
            if (nLev == 1) cpa_ai_hist_merge(&G.tmpAll, &s->tmp[1]);
            for (int c = 0; c < 8; c++) for (int id = 0; id < CLSN[c]; id++) {
                const CpaAiOpStat *a = stat_of(&s->tmp[0], c, id), *b = stat_of(&s->tmp[1], c, id), *ww = stat_of(&w, c, id);
                G.lvlN[c][id] += a->n; if (nLev == 1) G.fixN[c][id] += b->n;
                G.walkN[c][id] += ww->n;
                if (a->n || b->n) G.lvTmp[c][id]++;
                if (ww->n) G.lvWalk[c][id]++;
            }
            totTmpNodes += s->tmp[0].nNodes + s->tmp[1].nNodes; totWalkNodes += w.nNodes;
            tot.nActors += s->nActors; tot.nActorNoMind += s->nActorNoMind; tot.nMinds += s->nMinds; tot.nModels += s->nModels; tot.nComports += s->nComports; tot.nReflexComports += s->nReflexComports;
            tot.nMacros += s->nMacros; tot.nMacroEmpty += s->nMacroEmpty; tot.nRuleSlots += s->nRuleSlots; tot.nScriptsNormal += s->nScriptsNormal; tot.nScriptsReflex += s->nScriptsReflex; tot.nScriptsMacro += s->nScriptsMacro;
            tot.tmpScripts += s->tmpScripts; tot.tmpScriptsReached += s->tmpScriptsReached; tot.tmpScriptsOrphan += s->tmpScriptsOrphan; tot.tmpScriptsOrphanFix += s->tmpScriptsOrphanFix;
            tot.tmpNodesReached += s->tmpNodesReached; tot.tmpNodesOrphan += s->tmpNodesOrphan; tot.tmpNodesOrphanFix += s->tmpNodesOrphanFix; tot.nReflexListNull += s->nReflexListNull;
            tot.intelNormalLinked += s->intelNormalLinked; tot.intelNormalNot += s->intelNormalNot; tot.intelReflexLinked += s->intelReflexLinked; tot.intelReflexNot += s->intelReflexNot;
            tot.intelCurInList += s->intelCurInList; tot.intelCurNotInList += s->intelCurNotInList; tot.intelCurIdx0 += s->intelCurIdx0; tot.intelNull += s->intelNull;
            tot.nSO += s->nSO; tot.tmpListed += s->tmpListed; tot.tmpDup += s->tmpDup; tot.nModels += 0;
            wsh.firstDepth += s->walkShape.firstDepth; wsh.depthJump += s->walkShape.depthJump; wsh.depth0Early += s->walkShape.depth0Early; wsh.unterminated += s->walkShape.unterminated;
            wsh.unreadable += s->walkShape.unreadable; wsh.placeholderNot0d += s->walkShape.placeholderNot0d; wsh.skipNonzero += s->walkShape.skipNonzero;
            tsh.firstDepth += s->tmpShape.firstDepth; tsh.depthJump += s->tmpShape.depthJump; tsh.depth0Early += s->tmpShape.depth0Early; tsh.unterminated += s->tmpShape.unterminated;
            tsh.unreadable += s->tmpShape.unreadable; tsh.placeholderNot0d += s->tmpShape.placeholderNot0d; tsh.skipNonzero += s->tmpShape.skipNonzero;
            sum[0] += s->cmpE4Nonzero; sum[1] += s->cmpIdxMismatch; sum[2] += s->cmpHdrDup; sum[3] += s->cmpFillBad; sum[4] += s->cmpMacroSlotsDiffer; sum[5] += s->cmpMacroBadPtr;
            sum[6] += s->cmpRuleBadPtr; sum[7] += s->badCount; sum[8] += s->walkNotInTmp; sum[9] += s->tmpOutside; sum[10] += s->nActorNoModel; sum[11] += s->cmpE4NotInList; sum[12] += s->cmpHdrInitBad;
        }

        if (!quiet)
            printf("%-12s %5u %5u %6u %7u %7u | %7u %6u %7u | %5d %5u %5s\n", name, s->nActors, s->nMinds, s->nModels, s->nScriptsNormal + s->nScriptsReflex + s->nScriptsMacro,
                   s->walk[0].nNodes + s->walk[1].nNodes, s->tmpScripts, s->tmpScriptsOrphan, s->tmpNodesOrphan, bad, oor + typeBad, ramState < 0 ? "-" : ramState ? "ok" : "DIFF");
        if (jf) {
            fprintf(jf, "%s{\"name\":\"%s\",\"actors\":%u,\"actorNoMind\":%u,\"minds\":%u,\"models\":%u,\"comports\":%u,\"reflexComports\":%u,\"macros\":%u,\"scriptsNormal\":%u,\"scriptsReflex\":%u,\"scriptsMacro\":%u,"
                        "\"tmpListed\":%u,\"tmpNodes\":%u,\"tmpNodesLevel\":%u,\"tmpNodesFix\":%u,\"tmpScripts\":%u,\"orphanScripts\":%u,\"orphanNodes\":%u,\"orphanScriptsFix\":%u,\"walkNodes\":%u,"
                        "\"shapeBad\":%d,\"oor\":%u,\"consistency\":%d,\"ram\":%d,\"ramN\":%u,\"ramHandlerGpt\":%u,\"ramParamDiff\":%u,\"ramSkipSet\":%u}",
                    jfirst ? "" : ",\n", name, s->nActors, s->nActorNoMind, s->nMinds, s->nModels, s->nComports, s->nReflexComports, s->nMacros, s->nScriptsNormal, s->nScriptsReflex, s->nScriptsMacro,
                    s->tmpListed, s->tmp[0].nNodes + s->tmp[1].nNodes, s->tmp[0].nNodes, s->tmp[1].nNodes, s->tmpScripts, s->tmpScriptsOrphan, s->tmpNodesOrphan, s->tmpScriptsOrphanFix,
                    s->walk[0].nNodes + s->walk[1].nNodes, bad, oor + typeBad, cons, ramState, rc.n, rc.handlerIsGpt, rc.n - rc.paramSame, rc.skipSet);
            jfirst = 0;
        }
        cpa_ai_scan_free(s); free(dat); free(tmp);
    }

    /* ---- aggregate ---- */
    printf("\n== AGGREGATE over %d level DATs (FIX.DAT census counted once) ==\n", nLev);
    printf("actors %u (no Mind: %u), Minds %u, distinct AIModels per level summed %u, comports %u (reflex %u), macros %u (+%u empty NULL slots), rule slots %u\n", tot.nActors, tot.nActorNoMind, tot.nMinds, tot.nModels, tot.nComports, tot.nReflexComports, tot.nMacros, tot.nMacroEmpty, tot.nRuleSlots);
    printf("scripts reached from actors (unique per level, summed): normal %u reflex %u macro %u; nodes reached %llu\n", tot.nScriptsNormal, tot.nScriptsReflex, tot.nScriptsMacro, (unsigned long long)totWalkNodes);
    printf("Table-1 census: %llu nodes listed (summed over levels, incl. FIX copy each time), scripts %u, reached by the walk %u, orphan %u (%u in FIX), orphan nodes %u (%u in FIX)\n",
           (unsigned long long)totTmpNodes, tot.tmpScripts, tot.tmpScriptsReached, tot.tmpScriptsOrphan, tot.tmpScriptsOrphanFix, tot.tmpNodesOrphan, tot.tmpNodesOrphanFix);
    printf("FIX census identical in every level: %s (%d differing)\n", fixSigDiff ? "NO" : "yes", fixSigDiff);
    printf("shape errors  walk: first %u jump %u depth0 %u unterminated %u unreadable %u placeholder!=0x0D %u skip!=0 %u\n", wsh.firstDepth, wsh.depthJump, wsh.depth0Early, wsh.unterminated, wsh.unreadable, wsh.placeholderNot0d, wsh.skipNonzero);
    printf("shape errors  tmp : first %u jump %u depth0 %u unterminated %u unreadable %u placeholder!=0x0D %u skip!=0 %u\n", tsh.firstDepth, tsh.depthJump, tsh.depth0Early, tsh.unterminated, tsh.unreadable, tsh.placeholderNot0d, tsh.skipNonzero);
    printf("informational (not errors): comport+4 != 0 in %u comports (%u of them point outside the own list); list header +8 != first entry in %u lists\n", sum[0], sum[11], sum[2]);
    printf("structure cross-checks (all expected 0): comport index!=entry %u, list header +8 not an entry of the list %u, 0xCD fill wrong %u, macro slots differ %u, macro bad ptr %u, rule bad ptr %u, bad count/ptr %u, walk start not in Table1 %u, Table1 outside image %u, actor Mind without model %u\n",
           sum[1], sum[12], sum[3], sum[4], sum[5], sum[6], sum[7], sum[8], sum[9], sum[10]);
    printf("Intelligence instances: normal linked-to-model %u / not %u; reflex linked %u / not %u; current comport inside list %u (index 0: %u) / outside %u; instance null %u; reflex list null %u\n",
           tot.intelNormalLinked, tot.intelNormalNot, tot.intelReflexLinked, tot.intelReflexNot, tot.intelCurInList, tot.intelCurIdx0, tot.intelCurNotInList, tot.intelNull, tot.nReflexListNull);
    unsigned typesUsedT = 0, typesUsedW = 0;
    for (int t = 0; t < CPA_AI_NTYPE; t++) { typesUsedT += G.tmpAll.type[t].n > 0; typesUsedW += G.walkAll.type[t].n > 0; }
    printf("node types used (of %d): Table-1 census %u, actor walk %u\n", CPA_AI_NTYPE, typesUsedT, typesUsedW);
    for (int c = 0; c < 7; c++) {
        unsigned ut = 0, uw = 0, any = 0;
        for (int id = 0; id < CLSN[c]; id++) { int t = stat_of(&G.tmpAll, c, id)->n > 0, w = stat_of(&G.walkAll, c, id)->n > 0; ut += t; uw += w; any += t || w; }
        unsigned oorT = G.tmpAll.oor[c], oorW = G.walkAll.oor[c];
        printf("  %-11s table slots %3d | distinct ids used: Table-1 %3u, actor walk %3u (union %3u) | out-of-range ids: %u / %u\n", cpa_ai_class_name(c), CLSN[c], ut, uw, any, oorT, oorW);
    }
    if (ramDir) {
        printf("RAM runtime form: %u levels with a dump; nodes compared %u: type+depth same %u, handler==GPT[type] %u (other %u), param same %u, RAM +8 skip cache set %u, unreadable %u, walk differs from DAT walk in %u levels, GPT invalid in %u dumps\n",
               ramLevels, ramTot.n, ramTot.typeDepthSame, ramTot.handlerIsGpt, ramTot.handlerOther, ramTot.paramSame, ramTot.skipSet, ramTot.unreadable, ramWalkDiffer, ramGptBad);
        printf("  param differs by node type:");
        for (int t = 0; t < CPA_AI_NTYPE; t++) if (ramTot.paramDiff[t]) printf(" type%d=%u", t, ramTot.paramDiff[t]);
        printf("\n");
    }
    printf("RESULT: %s (%d level(s) flagged)\n", fails ? "FAIL" : "PASS", fails);

    if (jf) {
        fprintf(jf, "\n],\n\"aggregate\": {\n  \"levels\": %d, \"fixCensusIdentical\": %d,\n", nLev, fixSigDiff ? 0 : 1);
        fprintf(jf, "  \"actors\": %u, \"actorNoMind\": %u, \"minds\": %u, \"models\": %u, \"comports\": %u, \"macros\": %u, \"scriptsNormal\": %u, \"scriptsReflex\": %u, \"scriptsMacro\": %u,\n",
                tot.nActors, tot.nActorNoMind, tot.nMinds, tot.nModels, tot.nComports, tot.nMacros, tot.nScriptsNormal, tot.nScriptsReflex, tot.nScriptsMacro);
        fprintf(jf, "  \"tmpScripts\": %u, \"tmpScriptsReached\": %u, \"tmpScriptsOrphan\": %u, \"tmpScriptsOrphanFix\": %u, \"tmpNodesOrphan\": %u, \"tmpNodesOrphanFix\": %u,\n",
                tot.tmpScripts, tot.tmpScriptsReached, tot.tmpScriptsOrphan, tot.tmpScriptsOrphanFix, tot.tmpNodesOrphan, tot.tmpNodesOrphanFix);
        fprintf(jf, "  \"shapeTmp\": [%u,%u,%u,%u,%u,%u,%u], \"shapeWalk\": [%u,%u,%u,%u,%u,%u,%u],\n", tsh.firstDepth, tsh.depthJump, tsh.depth0Early, tsh.unterminated, tsh.unreadable, tsh.placeholderNot0d, tsh.skipNonzero,
                wsh.firstDepth, wsh.depthJump, wsh.depth0Early, wsh.unterminated, wsh.unreadable, wsh.placeholderNot0d, wsh.skipNonzero);
        fprintf(jf, "  \"cross\": {\"e4NotInList\":%u,\"hdrInitBad\":%u,\"e4Nonzero\":%u,\"idxMismatch\":%u,\"hdrDup\":%u,\"fillBad\":%u,\"macroSlotsDiffer\":%u,\"macroBadPtr\":%u,\"ruleBadPtr\":%u,\"badCount\":%u,\"walkNotInTmp\":%u,\"tmpOutside\":%u,\"noModel\":%u},\n",
                sum[11], sum[12], sum[0], sum[1], sum[2], sum[3], sum[4], sum[5], sum[6], sum[7], sum[8], sum[9], sum[10]);
        fprintf(jf, "  \"intel\": {\"normalLinked\":%u,\"normalNot\":%u,\"reflexLinked\":%u,\"reflexNot\":%u,\"curInList\":%u,\"curIdx0\":%u,\"curNotInList\":%u,\"null\":%u},\n",
                tot.intelNormalLinked, tot.intelNormalNot, tot.intelReflexLinked, tot.intelReflexNot, tot.intelCurInList, tot.intelCurIdx0, tot.intelCurNotInList, tot.intelNull);
        fprintf(jf, "  \"oor\": {\"tmp\": [");
        for (int c = 0; c < 7; c++) fprintf(jf, "%s%u", c ? "," : "", G.tmpAll.oor[c]);
        fprintf(jf, "], \"walk\": [");
        for (int c = 0; c < 7; c++) fprintf(jf, "%s%u", c ? "," : "", G.walkAll.oor[c]);
        fprintf(jf, "]},\n  \"typeBad\": %u,\n", G.tmpAll.typeBad + G.walkAll.typeBad);
        fprintf(jf, "  \"ram\": {\"levels\":%u,\"n\":%u,\"typeDepthSame\":%u,\"handlerIsGpt\":%u,\"handlerOther\":%u,\"paramSame\":%u,\"skipSet\":%u,\"unreadable\":%u,\"walkDiffers\":%u,\"gptBad\":%u,\"gpt\":[",
                ramLevels, ramTot.n, ramTot.typeDepthSame, ramTot.handlerIsGpt, ramTot.handlerOther, ramTot.paramSame, ramTot.skipSet, ramTot.unreadable, ramWalkDiffer, ramGptBad);
        for (int t = 0; t < CPA_AI_NTYPE; t++) fprintf(jf, "%s%u", t ? "," : "", ramTot.gpt[t]);
        fprintf(jf, "],\"paramDiff\":[");
        for (int t = 0; t < CPA_AI_NTYPE; t++) fprintf(jf, "%s%u", t ? "," : "", ramTot.paramDiff[t]);
        fprintf(jf, "]},\n");
        for (int c = 0; c < 8; c++) json_class(jf, c, c == 7);
        fprintf(jf, "}\n}\n");
        fclose(jf);
    }
    for (int i = 0; i < nn; i++) free(names[i]);
    free(names); free(fix);
    return fails ? 1 : 0;
}
