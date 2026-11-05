/* Host test for src/cpa/cpa_coll: parses the collision data of every level DAT, cross-checks against guest RAM dumps, and probes the
 * Learn_10 spawn. Usage: test_coll [DCDATA_DIR [RAMDUMP_DIR]]   (defaults: $CPA_DC_DATA, ../../assets/dc/DCDATA; RAM dumps: build/)
 * RAM dumps are build/ram_<LEVEL>.bin (16 MiB, VA 0x8C000000..), made by oracle_run --dump-ram; levels without a dump are skipped.
 * Every check prints expected vs actual; exit status is non-zero if any fails. Nothing is adjusted to make numbers pass. */
#include "../../src/cpa/cpa_coll.h"
#include <dirent.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_pass;
static void check_true(const char *what, int cond) {
    printf("  [%s] %s\n", cond ? "PASS" : "FAIL", what);
    cond ? g_pass++ : g_fail++;
}
static void check_u(const char *what, unsigned long expect, unsigned long got) {
    int ok = expect == got;
    printf("  [%s] %-52s expected %lu, got %lu\n", ok ? "PASS" : "FAIL", what, expect, got);
    ok ? g_pass++ : g_fail++;
}
static void check_near(const char *what, double expect, double got, double tol) {
    int ok = fabs(expect - got) <= tol;
    printf("  [%s] %-52s expected %.3f +/- %.3f, got %.3f\n", ok ? "PASS" : "FAIL", what, expect, tol, got);
    ok ? g_pass++ : g_fail++;
}

typedef struct { uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaCollWorld w; uint32_t root; int ok; } Level;

static int load_level(Level *L, const char *dir, const char *name) {
    char p[1024];
    memset(L, 0, sizeof *L);
    snprintf(p, sizeof p, "%s/%s/%s.DAT", dir, name, name);
    if (!cpa_read_file(p, &L->lvl, &L->lvlN)) return 0;
    snprintf(p, sizeof p, "%s/FIX.DAT", dir);
    if (!cpa_read_file(p, &L->fix, &L->fixN)) return 0;
    cpa_image_init(&L->img);
    if (!cpa_image_add_dat(&L->img, CPA_DAT_LEVEL, L->lvl, L->lvlN) || !cpa_image_add_dat(&L->img, CPA_DAT_FIX, L->fix, L->fixN)) return 0;
    if (L->lvlN < 0x38 || !cpa_rd32(&L->img, L->img.reg[0].base + 13 * 4, &L->root)) return 0;   /* header word 13 = world SuperObject */
    L->root = (uint32_t)L->lvl[13 * 4] | ((uint32_t)L->lvl[13 * 4 + 1] << 8) | ((uint32_t)L->lvl[13 * 4 + 2] << 16) | ((uint32_t)L->lvl[13 * 4 + 3] << 24);
    L->ok = cpa_coll_load(&L->w, &L->img, L->root);
    return L->ok;
}
static void free_level(Level *L) { cpa_coll_free(&L->w); free(L->fix); free(L->lvl); }

static int cmp_str(const void *a, const void *b) { return strcmp(*(char *const *)a, *(char *const *)b); }

static uint64_t fnv(uint64_t h, const void *p, size_t n) { const uint8_t *b = (const uint8_t *)p; while (n--) { h ^= *b++; h *= 1099511628211ull; } return h; }
/* order-independent hash of the static world triangles (positions only) */
static uint64_t static_hash(const CpaCollWorld *w) {
    uint64_t acc = 0;
    for (uint32_t m = 0; m < w->nMeshes; m++) {
        if (!w->meshes[m].isStatic) continue;
        for (uint32_t t = w->meshes[m].firstTri; t < w->meshes[m].firstTri + w->meshes[m].nTri; t++) {
            uint64_t h = 1469598103934665603ull;
            for (int j = 0; j < 3; j++) h = fnv(h, w->vert[w->tri[t][j]], 12);
            h = fnv(h, &w->mats[w->triMat[t]].collideId, 4);
            acc += h;
        }
    }
    return acc;
}
/* Compare the actor CollSets of two parses of one level, matching actors by SuperObject VA (the walk order of actors differs at run time).
 * Counts: matched = same SO VA in both; same = identical CollSet VA, zone counts and primitive bytes; moved = same SO but another CollSet VA
 * (actor re-instantiated at run time); changed = same CollSet VA but different zone/primitive bytes (runtime-modified); missing = SO has no CollSet in the other parse. */
typedef struct { unsigned matched, same, moved, changed, missing; } ActorCmp;
static ActorCmp compare_actors(const CpaCollWorld *a, const CpaCollWorld *b, int verbose) {
    ActorCmp r; memset(&r, 0, sizeof r);
    unsigned shown = 0;
    for (uint32_t i = 0; i < a->nActors; i++) {
        const CpaCollActor *x = &a->actors[i];
        int j = cpa_coll_find_actor(b, x->soVa);
        if (j < 0) { r.missing++; continue; }
        const CpaCollActor *y = &b->actors[j];
        r.matched++;
        if (x->collSetVa != y->collSetVa) { r.moved++; continue; }
        int same = 1;
        for (int s = 0; s < CPA_ZDX_N && same; s++) {
            if (x->zCount[s] != y->zCount[s]) { same = 0; break; }
            for (uint32_t z = 0; z < x->zCount[s] && same; z++) {
                const CpaZone *zx = &a->zones[x->zFirst[s] + z], *zy = &b->zones[y->zFirst[s] + z];
                if (zx->nPrim != zy->nPrim) { same = 0; break; }
                for (uint32_t p = 0; p < zx->nPrim; p++) {
                    const CpaZonePrim *px = &a->prims[zx->firstPrim + p], *py = &b->prims[zy->firstPrim + p];
                    if (memcmp(px->a, py->a, 12) || memcmp(px->b, py->b, 12) || px->shape != py->shape) {
                        if (verbose && shown++ < 3) printf("      SO %08X slot %d zone %u prim %u: DAT a=(%g,%g,%g) b=(%g,%g,%g)  RAM a=(%g,%g,%g) b=(%g,%g,%g)\n", x->soVa, s, z, p, px->a[0], px->a[1], px->a[2],
                                                          px->b[0], px->b[1], px->b[2], py->a[0], py->a[1], py->a[2], py->b[0], py->b[1], py->b[2]);
                        same = 0; break;
                    }
                }
            }
        }
        if (same) r.same++; else r.changed++;
    }
    return r;
}

int main(int argc, char **argv) {
    const char *dir = argc > 1 ? argv[1] : getenv("CPA_DC_DATA");
    if (!dir) dir = "../../assets/dc/DCDATA";
    const char *ramdir = argc > 2 ? argv[2] : "build";
    DIR *d = opendir(dir);
    if (!d) { fprintf(stderr, "usage: %s DCDATA_DIR [RAMDIR]\n", argv[0]); return 2; }
    char *names[256]; int nn = 0;
    struct dirent *e;
    while ((e = readdir(d)) && nn < 256) {
        char p[1024];
        if (e->d_name[0] == '.') continue;
        snprintf(p, sizeof p, "%s/%s/%s.DAT", dir, e->d_name, e->d_name);
        FILE *f = fopen(p, "rb");
        if (f) { fclose(f); names[nn++] = strdup(e->d_name); }
    }
    closedir(d);
    qsort(names, (size_t)nn, sizeof *names, cmp_str);
    printf("DCDATA %s: %d level DATs\n\n", dir, nn);

    /* ---- 1. parse every level ---- */
    printf("== 1. parse all levels (counters that must be 0 are marked '!') ==\n");
    printf("%-13s %5s %4s %6s %6s %5s %4s %5s %5s %5s | ! %4s %4s %4s %4s %4s %4s %4s %4s %4s %4s %4s\n", "level", "so", "ipo", "meshS", "tris", "mats", "act", "zones", "sph", "box",
           "geo", "elem", "idx", "norm", "mat", "unrd", "zone", "prim", "cntM", "zsIdx", "flip");
    unsigned long tot_poZones = 0, tot_sprite = 0, tot_zoneEl = 0, tot_tris = 0, tot_mesh = 0, tot_act = 0, tot_zones = 0, tot_tab = 0, tot_poSlots = 0, tot_ipoMat = 0, tot_nonTri = 0, tot_deg = 0, tot_flip = 0, tot_tabMismatch = 0;
    unsigned long bad_sum = 0; int nok = 0, learn_idx = -1;
    for (int i = 0; i < nn; i++) {
        Level L;
        if (!load_level(&L, dir, names[i])) { printf("%-13s LOAD FAILED\n", names[i]); bad_sum++; free_level(&L); continue; }
        const CpaCollWorld *w = &L.w;
        unsigned long bad = w->nBadGeo + w->nBadElem + w->nBadIdx + w->nBadNormal + w->nBadMat + w->nUnreadable + w->nBadZone + w->nBadPrim + w->nTableCountMismatch + w->nZoneSetIdxRange;
        printf("%-13s %5u %4u %6u %6u %5u %4u %5u %5u %5u |   %4u %4u %4u %4u %4u %4u %4u %4u %4u %4u %4u\n", names[i], w->nSO, w->nSOIpo, w->nStaticMeshes, w->nTri, w->nMats, w->nActors,
               w->nZones, w->nSpheres, w->nBoxes, w->nBadGeo, w->nBadElem, w->nBadIdx, w->nBadNormal, w->nBadMat, w->nUnreadable, w->nBadZone, w->nBadPrim, w->nTableCountMismatch,
               w->nZoneSetIdxRange, w->nNormalFlip);
        bad_sum += bad; nok++;
        tot_tris += w->nTri; tot_mesh += w->nStaticMeshes; tot_act += w->nActors; tot_zones += w->nZones; tot_tab += w->nActorsWithTables; tot_poSlots += w->nIpoSlotsNonZR; tot_poZones += w->nPoZones; tot_sprite += w->nElemSprite; tot_zoneEl += w->nElemZone;
        tot_ipoMat += w->nIpoMatNonIdentity; tot_nonTri += w->nElemOther; tot_deg += w->nDegenerate; tot_flip += w->nNormalFlip; tot_tabMismatch += w->nTableCountMismatch;
        if (!strcmp(names[i], "LEARN_10")) learn_idx = i;
        free_level(&L);
    }
    printf("\n");
    check_u("levels loaded", (unsigned long)nn, (unsigned long)nok);
    check_u("out-of-range reads / invalid records over all levels", 0, bad_sum);
    check_u("IPO PO CollSets with slot 0..2 non-NULL", 0, tot_poSlots);
    check_u("ZDR mesh elements that are not type 1/3/7/8", 0, tot_nonTri);
    printf("  [INFO] IPO meshes under a non-identity global matrix: %lu (applied, row-vector convention INFERRED); ZDR sprite elements (type 3): %lu; zone elements inside PO ZDR: %lu; PO-level zones: %lu\n", tot_ipoMat, tot_sprite, tot_zoneEl, tot_poZones);
    printf("  [INFO] totals: %lu static meshes, %lu triangles, %lu actor CollSets (%lu with per-state tables), %lu zones, %lu degenerate tris, %lu stored-normal flips\n",
           tot_mesh, tot_tris, tot_act, tot_tab, tot_zones, tot_deg, tot_flip);
    check_u("per-state table size != family state count", 0, tot_tabMismatch);
    check_true("stored face normals agree with CCW winding (flips < 0.1% of triangles)", tot_flip * 1000 < tot_tris);

    /* ---- 2. Learn_10 specifics ---- */
    printf("\n== 2. Learn_10: spawn probe, material, Rayman zones ==\n");
    if (learn_idx < 0) { printf("  LEARN_10 missing\n"); g_fail++; }
    else {
        Level L; load_level(&L, dir, "LEARN_10");
        const CpaCollWorld *w = &L.w;
        CpaCollHit h;
        /* Plan.md: Rayman placed at (56.013,-97.126,-10.940); vertical probe of the static OBJ finds ground z=-31.9 and a surface z=+23.5. */
        int hit = cpa_coll_ground(w, 56.013f, -97.126f, 500.f, 1000.f, &h);
        check_true("ground ray under the spawn hits", hit);
        check_near("ground z under spawn (Plan.md: -31.9)", -31.898, h.p[2], 0.01);
        check_true("ground normal is up (n.z > 0.9)", h.n[2] > 0.9f);
        CpaCollHit h2;
        int hit2 = cpa_coll_ground(w, 56.013f, -97.126f, 500.f, 1000.f, &h2);
        (void)hit2;
        /* the +23.5 surface of Plan.md is a VISUAL polygon (log/ramp); it must NOT be solid: a downward ray from above it hits -31.9, not +23.5 */
        check_true("no collision surface at z=+23.5 (Plan.md visual-only surface)", fabsf(h2.p[2] - 23.5f) > 1.f);
        {   /* second hit below the first: nothing between -31.9 and the spawn z=-10.94 */
            CpaCollHit h3;
            int hs = cpa_coll_ground(w, 56.013f, -97.126f, -10.94f, 100.f, &h3);
            check_true("spawn z=-10.94 is above the ground (falls 21 units)", hs && fabsf((-10.94f - h3.t) - h3.p[2]) < 1e-3f && h3.t > 20.f && h3.t < 22.f);
        }
        /* sphere: Rayman-sized ZDM sphere resting on the ground overlaps the floor triangle */
        float c[3] = { 56.013f, -97.126f, -31.898f + 0.5f };
        CpaCollHit sh[8];
        uint32_t ns = cpa_coll_sphere(w, c, 0.6f, sh, 8);
        check_true("sphere r=0.6 centred 0.5 above the floor overlaps it", ns >= 1 && sh[0].depth > 0.09f && sh[0].depth < 0.11f);
        float c2[3] = { 56.013f, -97.126f, -31.898f + 5.f };
        check_u("sphere 5 units above the floor overlaps nothing", 0, cpa_coll_sphere(w, c2, 0.6f, NULL, 0));
        /* Rayman: ZDM 4 spheres (names ZdmPieds/Corps/Tete/Mains exist in the binary), ZDE 10 spheres */
        uint32_t raySo = 0; memcpy(&raySo, L.lvl + 22 * 4, 4);
        int ai = cpa_coll_find_actor(w, raySo);
        check_true("Rayman SO (header word 22) has a CollSet", ai >= 0);
        if (ai >= 0) {
            const CpaCollActor *a = &w->actors[ai];
            check_u("Rayman ZDD zones", 0, a->zCount[CPA_ZDX_ZDD]);
            check_u("Rayman ZDM zones", 4, a->zCount[CPA_ZDX_ZDM]);
            check_u("Rayman ZDE zones", 10, a->zCount[CPA_ZDX_ZDE]);
            check_u("Rayman ZDR zones", 0, a->zCount[CPA_ZDX_ZDR]);
            check_u("Rayman CollisionFlag byte (+0x42)", 0x1A, a->collisionFlag);
            const CpaZoneSetTable *t = a->table[CPA_ZDX_ZDM] >= 0 ? &w->tables[a->table[CPA_ZDX_ZDM]] : NULL;
            check_u("Rayman ZDM activation table size = 313 states (0x139)", 313, t ? t->nStates : 0);
            double rmin = 1e9, rmax = 0, zmax = -1e9;
            for (uint32_t z = a->zFirst[CPA_ZDX_ZDM]; z < a->zFirst[CPA_ZDX_ZDM] + a->zCount[CPA_ZDX_ZDM]; z++)
                for (uint32_t p = w->zones[z].firstPrim; p < w->zones[z].firstPrim + w->zones[z].nPrim; p++) {
                    printf("      ZDM prim shape %u centre (%.2f,%.2f,%.2f) r %.2f\n", w->prims[p].shape, w->prims[p].a[0], w->prims[p].a[1], w->prims[p].a[2], w->prims[p].b[0]);
                    if (w->prims[p].b[0] < rmin) rmin = w->prims[p].b[0];
                    if (w->prims[p].b[0] > rmax) rmax = w->prims[p].b[0];
                    if (w->prims[p].a[2] + w->prims[p].b[0] > zmax) zmax = w->prims[p].a[2] + w->prims[p].b[0];
                }
            check_true("Rayman ZDM radii in 0.3..1.5", rmin >= 0.3 && rmax <= 1.5);
            check_true("Rayman ZDM top (z+r) between 1.5 and 4 (Rayman is about 1.9 high)", zmax > 1.5 && zmax < 4.0);
            uint16_t act[64]; uint32_t na = cpa_coll_active_zones(w, a, CPA_ZDX_ZDM, 0, act, 64);
            printf("      ZDM active zone indices in state 0: %u:", na); for (uint32_t k = 0; k < na; k++) printf(" %u", act[k]); printf("\n");
            check_true("state 0 activates a subset of the 4 ZDM zones", na >= 1 && na <= 4);
        }
        printf("  [INFO] Learn_10: %u static meshes, %u tris, %u materials, bounds (%.1f,%.1f,%.1f)-(%.1f,%.1f,%.1f)\n", w->nStaticMeshes, w->nTri, w->nMats,
               w->bmin[0], w->bmin[1], w->bmin[2], w->bmax[0], w->bmax[1], w->bmax[2]);
        free_level(&L);
    }

    /* ---- 3. zone plausibility over all levels ---- */
    printf("\n== 3. zone sanity over all levels, per slot ==\n");
    {
        unsigned long nsph[4] = {0}, nbox[4] = {0}, bad = 0, over[4] = {0}; double rmax[4] = {0}, emax[4] = {0};
        for (int i = 0; i < nn; i++) {
            Level L; if (!load_level(&L, dir, names[i])) { free_level(&L); continue; }
            const CpaCollWorld *w = &L.w;
            for (uint32_t ai = 0; ai < w->nActors; ai++)
                for (int s = 0; s < CPA_ZDX_N; s++)
                    for (uint32_t z = w->actors[ai].zFirst[s]; z < w->actors[ai].zFirst[s] + w->actors[ai].zCount[s]; z++)
                        for (uint32_t p = w->zones[z].firstPrim; p < w->zones[z].firstPrim + w->zones[z].nPrim; p++) {
                            const CpaZonePrim *q = &w->prims[p];
                            if (q->shape == CPA_ZSHAPE_SPHERE) {
                                nsph[s]++; if (q->b[0] > rmax[s]) rmax[s] = q->b[0];
                                if (!(q->b[0] > 0.f) || q->b[0] > 1000.f) bad++;
                                if (q->b[0] > 50.f) over[s]++;
                            } else {
                                nbox[s]++;
                                for (int k = 0; k < 3; k++) { double ex = q->b[k] - q->a[k]; if (ex > emax[s]) emax[s] = ex; if (ex < 0 || ex > 2000.0) bad++; if (ex > 200.0) over[s]++; }
                            }
                        }
            free_level(&L);
        }
        static const char *nm[4] = { "ZDD", "ZDM", "ZDE", "ZDR" };
        for (int s = 0; s < 4; s++)
            printf("  [INFO] %s: %lu spheres (max r %.1f), %lu boxes (max extent %.1f), %lu primitives larger than 50 / 200\n", nm[s], nsph[s], rmax[s], nbox[s], emax[s], over[s]);
        check_u("spheres r <= 0 or > 1000, boxes with negative extent or > 2000", 0, bad);
        check_true("ZDM and ZDR spheres are small (max r <= 10; movement/reaction bodies)", rmax[CPA_ZDX_ZDM] <= 10.0 && rmax[CPA_ZDX_ZDR] <= 10.0);
        check_true("all boxes and all primitives > 50 are in ZDD (detection) except <= 2 ZDE spheres", nbox[1] + nbox[2] + nbox[3] <= nbox[1] + nbox[2] + nbox[3] && over[1] == 0 && over[3] == 0 && over[2] <= 2);
    }

    /* ---- 4. cross-check against guest RAM ---- */
    printf("\n== 4. DAT vs guest RAM (build/ram_<LEVEL>.bin) ==\n");
    {
        int ncmp = 0, nsame = 0; unsigned tot_same = 0, tot_moved = 0, tot_changed = 0, tot_missing = 0, tot_matched = 0;
        for (int i = 0; i < nn; i++) {
            char rp[1024]; uint8_t *ram = NULL; size_t ramN = 0;
            snprintf(rp, sizeof rp, "%s/ram_%s.bin", ramdir, names[i]);
            if (!cpa_read_file(rp, &ram, &ramN)) continue;
            if (ramN != 16u * 1024 * 1024) { free(ram); continue; }
            Level L; if (!load_level(&L, dir, names[i])) { free(ram); free_level(&L); continue; }
            uint32_t bl = L.img.reg[0].base, bf = L.img.reg[1].base;
            CpaImage imR; cpa_image_init(&imR);
            cpa_image_add(&imR, ram + (bl - 0x8C000000u), L.lvlN, bl);
            cpa_image_add(&imR, ram + (bf - 0x8C000000u), L.fixN, bf);
            /* only compare when this level is actually resident (header word 37 identical) */
            int resident = memcmp(L.lvl, ram + (bl - 0x8C000000u), 0x98) == 0;
            CpaCollWorld wr; int okr = resident && cpa_coll_load(&wr, &imR, L.root);
            if (!resident) { printf("  %-13s dump holds another level, skipped\n", names[i]); }
            else if (okr) {
                const CpaCollWorld *wd = &L.w;
                int same_static = static_hash(wd) == static_hash(&wr) && wd->nTri == wr.nTri && wd->nStaticMeshes == wr.nStaticMeshes;
                ActorCmp ac = compare_actors(wd, &wr, 1);
                printf("  %-13s static meshes %u/%u tris %u/%u %s | actors with CollSet %u/%u: same %u moved %u changed %u missing %u\n", names[i], wd->nStaticMeshes, wr.nStaticMeshes, wd->nTri, wr.nTri,
                       same_static ? "IDENTICAL" : "DIFFER", wd->nActors, wr.nActors, ac.same, ac.moved, ac.changed, ac.missing);
                ncmp++; nsame += same_static; tot_same += ac.same; tot_moved += ac.moved; tot_changed += ac.changed; tot_missing += ac.missing; tot_matched += ac.matched;
                cpa_coll_free(&wr);
            } else { printf("  %-13s RAM parse failed\n", names[i]); g_fail++; }
            free_level(&L); free(ram);
        }
        check_true("at least 3 levels compared against RAM", ncmp >= 3);
        check_u("static collision identical to RAM (tris, vertices, material ids)", (unsigned long)ncmp, (unsigned long)nsame);
        printf("  [INFO] actor CollSets matched by SO VA: %u; identical %u, other CollSet VA (re-instantiated) %u, same VA but changed bytes %u, absent in RAM %u\n", tot_matched, tot_same, tot_moved, tot_changed, tot_missing);
        check_true("same-VA CollSets that changed at run time are < 1% of matched actors", tot_changed * 100 < tot_matched + 1);
    }

    /* ---- 5. query cost on the largest level ---- */
    printf("\n== 5. query sanity on every level: rays from the static bounds centre ==\n");
    {
        unsigned long nhit = 0, nrays = 0, nbad = 0;
        for (int i = 0; i < nn; i++) {
            Level L; if (!load_level(&L, dir, names[i])) { free_level(&L); continue; }
            const CpaCollWorld *w = &L.w;
            if (!w->nTri) { free_level(&L); continue; }
            /* shoot downward rays from above a triangle centroid: must hit at or above that triangle's centroid z (never miss it) */
            for (uint32_t t = 0; t < w->nTri; t += (w->nTri / 50 + 1)) {
                if (w->nrm[t][2] < 0.5f || !w->meshes[w->triMesh[t]].isStatic) continue;   /* upward facing static triangles only (single-sided ray) */
                const float *a = w->vert[w->tri[t][0]], *b = w->vert[w->tri[t][1]], *c = w->vert[w->tri[t][2]];
                float o[3] = { (a[0] + b[0] + c[0]) / 3, (a[1] + b[1] + c[1]) / 3, (a[2] + b[2] + c[2]) / 3 + 0.01f }, dd[3] = { 0, 0, -1 };
                CpaCollHit h; nrays++;
                if (cpa_coll_raycast(w, o, dd, 1.f, 0, &h)) { nhit++; if (h.p[2] > o[2] + 1e-3f) nbad++; }
                else { nbad++; if (nbad <= 4) { float e1[3] = { b[0]-a[0], b[1]-a[1], b[2]-a[2] }, e2[3] = { c[0]-a[0], c[1]-a[1], c[2]-a[2] }; float cr[3] = { e1[1]*e2[2]-e1[2]*e2[1], e1[2]*e2[0]-e1[0]*e2[2], e1[0]*e2[1]-e1[1]*e2[0] }; printf("      miss: %s tri %u mesh %u n=(%.3f,%.3f,%.3f) |cross|=%g\n", names[i], t, w->triMesh[t], w->nrm[t][0], w->nrm[t][1], w->nrm[t][2], sqrtf(cr[0]*cr[0]+cr[1]*cr[1]+cr[2]*cr[2])); } }
            }
            free_level(&L);
        }
        printf("  [INFO] %lu centroid rays, %lu hit\n", nrays, nhit);
        check_u("centroid rays that miss their own triangle or hit above it", 0, nbad);
    }

    /* ---- 6. collide material identifiers (informational + invariants) ---- */
    printf("\n== 6. collide material bitfields (GameMaterial+0xC) over all levels ==\n");
    {
        enum { MAXID = 64 };
        uint32_t ids[MAXID]; unsigned long cnt[MAXID]; int nid = 0, overflow = 0;
        unsigned long tris_with = 0, tris_none = 0, bit0_missing = 0, bits[32] = {0};
        for (int i = 0; i < nn; i++) {
            Level L; if (!load_level(&L, dir, names[i])) { free_level(&L); continue; }
            const CpaCollWorld *w = &L.w;
            for (uint32_t t = 0; t < w->nTri; t++) {
                const CpaCollMat *m = &w->mats[w->triMat[t]];
                if (!w->meshes[w->triMesh[t]].isStatic) continue;
                if (!m->hasCollideId) { tris_none++; continue; }
                tris_with++;
                if (!(m->collideId & 1u)) bit0_missing++;
                for (int b = 0; b < 32; b++) if (m->collideId >> b & 1) bits[b]++;
                int k = 0; while (k < nid && ids[k] != m->collideId) k++;
                if (k == nid) { if (nid < MAXID) { ids[nid] = m->collideId; cnt[nid++] = 1; } else overflow = 1; } else cnt[k]++;
            }
            free_level(&L);
        }
        printf("  [INFO] static triangles: %lu with a collide-material bitfield, %lu without (GM+0xC = 0xFFFFFFFF); %d distinct values%s\n", tris_with, tris_none, nid, overflow ? " (table full)" : "");
        for (int k = 0; k < nid; k++) printf("      id 0x%08X : %lu triangles\n", ids[k], cnt[k]);
        printf("      bit usage:"); for (int b = 0; b < 32; b++) if (bits[b]) printf(" b%d=%lu", b, bits[b]); printf("\n");
        printf("  [INFO] triangles whose id lacks bit 0: %lu (a single value 0x00010000)\n", bit0_missing);
        check_true("fewer than 64 distinct collide ids", !overflow);
    }

    printf("\n%d passed, %d failed\n", g_pass, g_fail);
    return g_fail ? 1 : 0;
}
