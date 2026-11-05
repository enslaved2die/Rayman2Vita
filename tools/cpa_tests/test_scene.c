/* Host test for src/cpa: loads LEARN_10 and checks the numbers recorded in tools/DC_LEVEL_FORMAT.md / re_analysis/dc/notes_*.md.
 * Usage: test_scene [DCDATA_DIR]      (default: $CPA_DC_DATA, then ../../assets/dc/DCDATA style fallbacks)
 * DCDATA_DIR must contain FIX.DAT and LEARN_10/LEARN_10.DAT.
 * Every check prints expected vs actual; the process exits non-zero if any fail. Nothing is adjusted to make numbers pass. */
#include "../../src/cpa/cpa_scene.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_pass;
static void check_u(const char *what, unsigned long expect, unsigned long got) {
    int ok = expect == got;
    printf("  [%s] %-44s expected %lu, got %lu\n", ok ? "PASS" : "FAIL", what, expect, got);
    ok ? g_pass++ : g_fail++;
}
static void check_true(const char *what, int cond) {
    printf("  [%s] %s\n", cond ? "PASS" : "FAIL", what);
    cond ? g_pass++ : g_fail++;
}

static int try_dir(const char *dir, char *fix, char *lvl, size_t n) {
    snprintf(fix, n, "%s/FIX.DAT", dir);
    snprintf(lvl, n, "%s/LEARN_10/LEARN_10.DAT", dir);
    FILE *f = fopen(lvl, "rb"), *g = fopen(fix, "rb");
    int ok = f && g;
    if (f) fclose(f);
    if (g) fclose(g);
    return ok;
}

int main(int argc, char **argv) {
    char fixp[1024], lvlp[1024];
    const char *cands[4] = { argc > 1 ? argv[1] : NULL, getenv("CPA_DC_DATA"), "../../assets/dc/DCDATA", "assets/dc/DCDATA" };
    int found = 0;
    for (int i = 0; i < 4 && !found; i++) if (cands[i]) found = try_dir(cands[i], fixp, lvlp, sizeof fixp);
    if (!found) { fprintf(stderr, "usage: %s DCDATA_DIR  (or set CPA_DC_DATA); needs FIX.DAT and LEARN_10/LEARN_10.DAT\n", argv[0]); return 2; }

    uint8_t *fix = NULL, *lvl = NULL; size_t fixN = 0, lvlN = 0;
    if (!cpa_read_file(fixp, &fix, &fixN) || !cpa_read_file(lvlp, &lvl, &lvlN)) { fprintf(stderr, "read failed\n"); return 2; }
    printf("FIX   %s (%zu bytes)\nLEARN %s (%zu bytes)\n", fixp, fixN, lvlp, lvlN);

    uint32_t bl = 0, bf = 0;
    printf("image bases (header-derived):\n");
    check_true("level base from header word 37", cpa_dat_base(lvl, lvlN, CPA_DAT_LEVEL, &bl));
    check_true("fix base from header word 4", cpa_dat_base(fix, fixN, CPA_DAT_FIX, &bf));
    check_u("level base 0x8C804AE0", 0x8C804AE0ul, bl);
    check_u("fix base 0x8CCE4B20", 0x8CCE4B20ul, bf);

    CpaImage img; CpaScene s;
    int ok = cpa_scene_load_dats(&s, &img, fix, fixN, lvl, lvlN);
    check_true("scene loaded", ok);
    if (!ok) { printf("load failed\n"); return 1; }

    printf("SuperObject tree:\n");
    check_u("SuperObjects total", 272, s.nSO);
    check_u("type 1 world", 4, s.nSOWorld);
    check_u("type 2 actor", 110, s.nSOActor);
    check_u("type 4 sector", 25, s.nSOSector);
    check_u("type 0x20 IPO", 133, s.nSOIpo);
    check_u("other types", 0, s.nSOOther);
    check_u("parent mismatches", 0, s.nParentMismatch);
    check_u("child-count mismatches", 0, s.nCountMismatch);
    check_u("cycles", 0, s.nCycle);
    check_u("unreadable nodes", 0, s.nUnreadable);

    printf("static geometry:\n");
    check_u("IPOs with a mesh", 133, s.nIpoMesh);
    check_u("static meshes", 133, s.nStaticMeshes);
    check_u("static triangles", 3232, s.nStaticTris);

    printf("actor geometry (unposed pile, excludes Rayman rig):\n");
    check_u("unique actor GeometricObjects", 183, s.nActorGeos);
    check_u("actor triangles", 4817, s.nActorTris);

    printf("Rayman rig:\n");
    check_u("rig SuperObject VA 0x8CBB07D0", 0x8CBB07D0ul, s.raymanSoVa);
    check_true("rig valid", s.rig.valid);
    check_u("rig triangles", 675, s.rig.nTris);
    check_u("rig channels (Wait anim)", 9, s.rig.nCh);
    cpa_rig_pose(&s, (float)s.rig.firstFrame);
    printf("  info: rig frames %u firstFrame %u parts %u placement %d fps %.1f (fromData %d)\n",
           s.rig.nFrames, s.rig.firstFrame, s.rig.nPart, s.rig.placement, s.rig.fps, s.rig.fpsFromData);
    printf("  info: frame0 pose bbox min (%.3f %.3f %.3f) max (%.3f %.3f %.3f)\n",
           s.rig.pmin[0], s.rig.pmin[1], s.rig.pmin[2], s.rig.pmax[0], s.rig.pmax[1], s.rig.pmax[2]);
    {   /* notes_pose.md: Wait f0 stands on z~0: feet z -0.003..0.33, head to ~1.93 (INFERRED plausibility) */
        float wz = s.rig.world[14];   /* placement translation (row 3); the pose is relative to it */
        float lo = s.rig.pmin[2] - wz, hi = s.rig.pmax[2] - wz;
        printf("  info: z relative to placement: %.3f .. %.3f\n", lo, hi);
        check_true("frame0 pose z rel. to placement plausible (feet ~0, head ~1.9)", lo > -0.5f && lo < 0.5f && hi > 1.5f && hi < 2.5f);
    }

    printf("draw list consistency:\n");
    {
        uint32_t sum = 0, bad = 0;
        for (uint32_t i = 0; i < s.nItems; i++) {
            sum += s.items[i].vertCount;
            if (s.items[i].firstVert + s.items[i].vertCount > s.nVerts) bad++;
        }
        check_u("sum item verts == 3*(static+actor tris)", 3ul * (s.nStaticTris + s.nActorTris), sum);
        check_u("items out of range", 0, bad);
        check_u("nVerts == sum", sum, s.nVerts);
    }
    {
        uint32_t nan = 0;
        for (uint32_t i = 0; i < s.nVerts * 3; i++) if (!isfinite(s.pos[i])) nan++;
        check_u("non-finite positions", 0, nan);
    }
    printf("  info: bbox static min (%.3f %.3f %.3f) max (%.3f %.3f %.3f)\n", s.bmin[0], s.bmin[1], s.bmin[2], s.bmax[0], s.bmax[1], s.bmax[2]);
    printf("  info: expected (DC_LEVEL_FORMAT.md) min (-525.019 -298.649 -133.503) max (315.546 371.472 203.169)\n");
    printf("  info: meshes %u elements %u skipped %u | items %u | distinct tex %u (flag-unclear %u, wrap-unclear %u)\n",
           s.nMeshes, s.nElements, s.nElemSkipped, s.nItems, s.nTexDistinct, s.nTexFlagUnclear, s.nTexWrapUnclear);
    printf("  info: actors %u noTable %u tblEntries %u nullPo %u badChain %u dupGeo %u\n",
           s.nActors, s.nActorNoTable, s.nActorTblEntries, s.nActorNullPo, s.nActorBadChain, s.nActorDupGeo);

    cpa_scene_free(&s);
    free(fix); free(lvl);
    printf("\n%d passed, %d failed\n", g_pass, g_fail);
    return g_fail ? 1 : 0;
}
