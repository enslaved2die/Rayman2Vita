/* Host test for src/cpa: loads LEARN_10 and checks the numbers recorded in tools/DC_LEVEL_FORMAT.md / re_analysis/dc/notes_*.md.
 * Usage: test_scene [DCDATA_DIR]      (default: $CPA_DC_DATA, then ../../assets/dc/DCDATA style fallbacks)
 * DCDATA_DIR must contain FIX.DAT and LEARN_10/LEARN_10.DAT.
 * Every check prints expected vs actual; the process exits non-zero if any fail. Nothing is adjusted to make numbers pass. */
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_anim.h"
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

    printf("Rayman hierarchical pose (cpa_rig_pose == cpa_anim_rig_pose; parents applied):\n");
    {
        CpaAnimTables T; CpaAnimActor A; static CpaAnimRig rg;
        check_true("anim tables + actor open", cpa_anim_tables_from_header(img.reg[0].p, img.reg[0].n, &T) && cpa_anim_actor_open(&A, &img, &T, s.rig.soVa));
        unsigned fr[3] = { s.rig.firstFrame, s.rig.firstFrame + s.rig.nFrames / 2, s.rig.firstFrame + s.rig.nFrames - 1 };
        for (int k = 0; k < 3; k++) {
            char nm[96];
            cpa_rig_pose(&s, (float)fr[k]);
            check_true("cpa_anim_rig_pose ok", cpa_anim_rig_pose(&A, (unsigned)s.rig.anim, fr[k], CPA_ANIM_BEST, s.rig.world, &rg));
            if (k == 0) {
                unsigned np = 0; int slotsWithParent[CPA_ANIM_MAXCH], nsp = 0;
                for (unsigned i = 0; i < rg.pose.nCh; i++) { int p = rg.parentSlot[rg.pose.ch[i].slot]; if (p >= 0) { np++; slotsWithParent[nsp++] = rg.pose.ch[i].slot; } }
                printf("  info: %u of %u channels have a parent; slots:", np, rg.pose.nCh);
                for (int i = 0; i < nsp; i++) printf(" %d", slotsWithParent[i]);
                printf("\n");
                check_true("Wait channels in slots 1,4,5 have parents (notes_anim_parents)", rg.parentSlot[1] >= 0 && rg.parentSlot[4] >= 0 && rg.parentSlot[5] >= 0);
            }
            /* independent re-derivation: every part vertex = lpos * objM[chan] */
            double maxd = 0; uint32_t nv = 0; float lo[CPA_RIG_MAXCH][3], hi[CPA_RIG_MAXCH][3];
            for (int c = 0; c < CPA_RIG_MAXCH; c++) for (int a = 0; a < 3; a++) { lo[c][a] = 1e30f; hi[c][a] = -1e30f; }
            for (uint32_t i = 0; i < s.rig.nPart; i++) {
                const CpaRigPart *r = &s.rig.part[i]; const float *M = rg.objM[r->chan];
                for (uint32_t v = 0; v < r->nTri * 3; v++, nv++) {
                    const float *p = r->lpos + v * 3;
                    for (int a = 0; a < 3; a++) {
                        float w = p[0] * M[a] + p[1] * M[4 + a] + p[2] * M[8 + a] + M[12 + a];
                        double d = fabs((double)w - r->wpos[v * 3 + a]); if (d > maxd) maxd = d;
                        if (w < lo[r->chan][a]) lo[r->chan][a] = w;
                        if (w > hi[r->chan][a]) hi[r->chan][a] = w;
                    }
                }
            }
            snprintf(nm, sizeof nm, "frame %u: wpos == lpos*objM (max |d| %.2e over %u verts)", fr[k], maxd, nv);
            check_true(nm, nv == s.rig.nTris * 3 && maxd < 1e-4);
            if (k == 0) for (unsigned i = 0; i < rg.pose.nCh; i++) {
                int sl = rg.pose.ch[i].slot;
                if (lo[i][2] <= hi[i][2]) printf("  info: frame0 channel %u slot %d parent %d obj %d wrapped %d  world z %.3f .. %.3f (rel. placement)\n",
                    i, sl, rg.parentSlot[sl], rg.pose.ch[i].obj, rg.wrapped[i], lo[i][2] - s.rig.world[14], hi[i][2] - s.rig.world[14]);
            }
            if (k == 0) {   /* guest-RAM-derived world z ranges (notes_pose comparison) of the parented parts, relative to the placement */
                float wz = s.rig.world[14];
                check_true("frame0 slot 1 world z 1.05..1.30", fabsf(lo[1][2] - wz - 1.05f) < 0.01f && fabsf(hi[1][2] - wz - 1.30f) < 0.01f);
                check_true("frame0 slot 4 world z 1.74..2.18", fabsf(lo[4][2] - wz - 1.74f) < 0.01f && fabsf(hi[4][2] - wz - 2.18f) < 0.01f);
                check_true("frame0 slot 5 world z within the head range 1.85..2.11", fabsf(lo[5][2] - wz - 1.85f) < 0.01f && fabsf(hi[5][2] - wz - 2.10f) < 0.01f);
            }
            /* flat composition (the old behaviour) must differ for a channel that has a parent */
            if (k == 0) {
                double diff = 0;
                for (unsigned i = 0; i < rg.pose.nCh; i++) if (rg.parentSlot[rg.pose.ch[i].slot] >= 0) {
                    float m[16], f[16]; cpa_anim_chan_matrix(&rg.pose.ch[i], m); cpa_anim_mat_mul(m, s.rig.world, f);
                    for (int e = 0; e < 16; e++) { double d = fabs((double)f[e] - rg.world[i][e]); if (d > diff) diff = d; }
                }
                printf("  info: max |flat - hierarchical| over channels with parents: %.3f\n", diff);
                check_true("hierarchical differs from flat composition where a parent exists", diff > 1e-3);
            }
        }
    }

    printf("second texture layer (VisualMaterial+0x149 overlayMode) and sprites (element type 3):\n");
    {   /* expected numbers counted independently by a Python walk of the same DAT (IPO -> PO -> VisualSet -> Geo -> type-1 elements -> GameMaterial -> VisualMaterial byte +0x149) */
        uint32_t tri[4] = { 0, 0, 0, 0 }, items[4] = { 0, 0, 0, 0 }, bad = 0;
        for (uint32_t i = 0; i < s.nItems; i++) { if (s.items[i].isActor) continue; if (s.items[i].overlayMode > 3) { bad++; continue; } tri[s.items[i].overlayMode] += s.items[i].vertCount / 3; items[s.items[i].overlayMode]++; }
        check_u("static triangles, overlayMode 0", 2355, tri[0]);
        check_u("static triangles, overlayMode 1", 248, tri[1]);
        check_u("static triangles, overlayMode 2", 426, tri[2]);
        check_u("static triangles, overlayMode 3", 203, tri[3]);
        check_u("overlayMode > 3 (never seen)", 0, bad);
        check_true("items with overlayMode != 0 exist and are distinct items", items[1] + items[2] + items[3] > 0);
        float u2 = 0, v2 = 0;
        check_true("overlay UV mode 1: (8u, 8v)", cpa_overlay_uv(1, 0.25f, 0.5f, &u2, &v2) && u2 == 2.0f && v2 == 4.0f);
        check_true("overlay UV mode 2: (8u, 8v)", cpa_overlay_uv(2, 1.0f, -0.5f, &u2, &v2) && u2 == 8.0f && v2 == -4.0f);
        check_true("overlay UV mode 3: (8u, 8(1-v))", cpa_overlay_uv(3, 0.25f, 0.75f, &u2, &v2) && u2 == 2.0f && v2 == 2.0f);
        check_true("overlay UV mode 0 / unknown: no layer", !cpa_overlay_uv(0, 0, 0, &u2, &v2) && !cpa_overlay_uv(4, 0, 0, &u2, &v2));
        uint32_t okTex = 0, okSize = 0, nonActor = 0, nanPos = 0;
        for (uint32_t i = 0; i < s.nSprites; i++) {
            const CpaSprite *sp = &s.sprites[i];
            okTex += sp->texFlagsValid && sp->texVa != 0;
            okSize += sp->sizeX >= 0.05f && sp->sizeX <= 1.2f && sp->sizeY >= 0.05f && sp->sizeY <= 1.2f;
            nonActor += !sp->isActor;
            for (int k = 0; k < 3; k++) nanPos += !isfinite(sp->pos[k]);
        }
        check_u("sprite elements (type 3)", 45, s.nSprites);
        check_u("sprites in actor geometries", 45, s.nSpriteActor);
        check_u("sprites in static IPOs", 0, nonActor);
        check_u("type-3 elements not matching the layout", 0, s.nSpriteBad);
        check_u("type-3 elements in Rayman's rig (not exported)", 0, s.nSpriteRig);
        check_u("elements skipped (was 45 before type 3 was decoded)", 0, s.nElemSkipped);
        check_u("sprites whose VisualMaterial -> texture struct is filled (bit31)", 45, okTex);
        check_u("sprites with size in [0.05, 1.2]", 45, okSize);
        check_u("sprite non-finite positions", 0, nanPos);
    }

    printf("texture animation (VisualMaterial frame lists) and .TEX post-load state:\n");
    {
        uint32_t withList = 0, headOk = 0, walk = 0;
        for (uint32_t i = 0; i < s.nItems; i++) if (s.items[i].texAnimHead) {
            uint32_t t0 = 0, tl = 0; float d0 = 0;
            withList++;
            headOk += cpa_tex_anim_node(&img, s.items[i].texAnimHead, 0, &t0, &d0) && t0 == s.items[i].texVa;   /* DAT = load state: texVa is the head frame */
            walk += cpa_tex_anim_node(&img, s.items[i].texAnimHead, s.items[i].texAnimCount - 1, &tl, NULL) && !cpa_tex_anim_node(&img, s.items[i].texAnimHead, s.items[i].texAnimCount, &tl, NULL);
        }
        check_u("animated VisualMaterials (distinct)", 11, s.nAnimMat);
        check_u("animated VisualMaterials with a malformed frame list", 0, s.nAnimMatBad);
        check_u("DAT materials whose VM+0x4C was not the head frame (load state)", 0, s.nAnimLiveFrame);
        check_true("draw items with a frame list exist", withList > 0);
        check_u("frame-list items: node 0 texture == item texVa", withList, headOk);
        check_u("frame-list items: list has exactly texAnimCount nodes", withList, walk);
        char texp[1100]; size_t L = strlen(lvlp); uint8_t *texf = NULL; size_t texN = 0; CpaTexInfo *ti = NULL; uint32_t nti = 0;
        snprintf(texp, sizeof texp, "%s", lvlp); if (L > 4) memcpy(texp + L - 4, ".TEX", 4);
        int have = cpa_read_file(texp, &texf, &texN);
        check_true(".TEX read and decoded: exactly one chunk per DAT texture-table entry", have && cpa_tex_table(&img, texf, texN, &ti, &nti));
        if (ti) {
            uint32_t flagDiff = 0, wrapDiff = 0, upd;
            for (uint32_t i = 0; i < nti; i++) {
                flagDiff += (cpa_u32(&img, ti[i].structVa + 4) & 0x7FFFFFFFu) != ti[i].flags;
                uint8_t w = 0; cpa_rd8(&img, ti[i].structVa + 0x18, &w); wrapDiff += w != ti[i].wrap;
            }
            printf("  info: LEARN_10 textures %u; pre-load struct flags differ from post-load for %u, wrap for %u\n", nti, flagDiff, wrapDiff);
            upd = cpa_scene_apply_tex(&s, ti, nti);
            check_true("cpa_scene_apply_tex updates items and keeps them valid", upd > 0 && s.items[0].texFlagsValid);
            uint32_t f; uint8_t w;
            cpa_tex_postload(0x25000202u, &f, &w); check_true("postload(0x25000202) = flags 0x08 wrap 0x04 (Rodeo_40 texture 8: RAM 8/04)", f == 0x08 && w == 0x04);
            cpa_tex_postload(0x3D000202u, &f, &w); check_true("postload(0x3D000202) = flags 0x48 wrap 0x01 (Rodeo_40 texture 18: RAM 48/01)", f == 0x48 && w == 0x01);
            cpa_tex_postload(0x12000200u, &f, &w); check_true("postload(0x12000200) = flags 0x12 wrap 0x10 (Rodeo_40 texture 129: RAM 12/10)", f == 0x12 && w == 0x10);
        }
        free(ti); free(texf);
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
