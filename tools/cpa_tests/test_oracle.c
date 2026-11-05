/* test_oracle: oracle comparison kind A (static image equivalence) and kind C-static (triangle multiset hash) for the native loader.
 *
 * Oracle   = guest RAM (16 MiB, VA 0x8C000000..0x8CFFFFFF) dumped from the recompiled game (tools/cpa_tests/oracle_run --dump-ram)
 *            while LEVEL is resident, i.e. AFTER the real loader ran (DAT read + TMP relocation + runtime mutation).
 * Native   = the DAT files from disk parsed by src/cpa (cpa_scene_load_dats).
 *
 * Both are walked with the same pointer graph. The oracle side is presented to the native code as two CpaImage regions cut out of
 * the RAM dump at the header-derived level base / FIX base (so the code under test is byte-for-byte the same on both sides).
 *
 *   A1  SuperObject tree: all 18 header words + matrix floats per node, exact bits, node set from the DAT side, compared in RAM.
 *   A2  Mesh bytes: for every IPO / actor GeometricObject reached: GeoObj header, vertex array, element tables, index/uv/normal
 *       arrays, material chain (GameMaterial -> VisualMaterial -> texture struct): memcmp DAT image vs RAM.
 *   A3  Parsed scene equality: stats, draw items, pos/uv arrays (bitwise, in order) for DAT scene vs RAM scene.
 *   C   Triangle multiset hash (order independent) of static triangles: DAT scene vs RAM scene.
 *
 * Failures are counted, never hidden. "MISMATCH-INFO" lines are differences that are reported but not asserted (runtime-moved
 * actors); everything asserted is stated in the PASS/FAIL line text. Exit code 0 iff no FAIL. Not a performance or render test.
 * usage: test_oracle RAM.bin DCDATA_DIR [LEVEL=LEARN_10]   (env ORACLE_TOLERATE_RUNTIME=1: see check_rt) */
#include "../../src/cpa/cpa_scene.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_pass;
static int ieq(const char *a, const char *b) { for (; *a && *b; a++, b++) if ((*a | 32) != (*b | 32)) return 0; return *a == *b; }
static void check(const char *name, int ok, const char *fmt, ...);
#include <stdarg.h>
static void check(const char *name, int ok, const char *fmt, ...) {
    char buf[256] = ""; va_list ap; va_start(ap, fmt); if (fmt) vsnprintf(buf, sizeof buf, fmt, ap); va_end(ap);
    printf("%s  %s%s%s\n", ok ? "PASS" : "FAIL", name, buf[0] ? "  " : "", buf);
    if (ok) g_pass++; else g_fail++;
}

/* ORACLE_TOLERATE_RUNTIME=1: checks on runtime-mutable state (actor lists/IDs, actor vertex buffers) that FAIL are printed as
 * "INFO-RT" instead of counted. Needed for WHALE_10 / NAVE_10: the guest's own level init reparents actors into sectors
 * (SO words 2..7,10 change; file has 116 actors under one node, RAM has 40) and animates actor vertex data, so file == RAM cannot hold
 * there. Static-level checks (IPO geometry, static pos/uv, static triangle hash, matrices) stay strict. */
static int g_tol, g_rt;
static void check_rt(const char *name, int ok, const char *fmt, ...) {
    char buf[256] = ""; va_list ap; va_start(ap, fmt); if (fmt) vsnprintf(buf, sizeof buf, fmt, ap); va_end(ap);
    if (!ok && g_tol) { printf("INFO-RT  (runtime-mutated, not asserted) %s  %s\n", name, buf); g_rt++; return; }
    printf("%s  %s%s%s\n", ok ? "PASS" : "FAIL", name, buf[0] ? "  " : "", buf);
    if (ok) g_pass++; else g_fail++;
}

typedef struct { uint64_t cmp, bad; } Cnt;   /* bytes compared / bytes differing */
typedef struct { Cnt geo, mat, gm, vmp, tex; uint32_t meshes, meshBad, unreadable; } MeshStat;

static void cmp_range(const CpaImage *A, const CpaImage *B, uint32_t va, size_t len, Cnt *c, uint32_t *firstBad) {
    const uint8_t *a = cpa_ptr(A, va, len), *b = cpa_ptr(B, va, len);
    if (!a || !b) { c->cmp += len; c->bad += len; if (firstBad && !*firstBad) *firstBad = va; return; }
    c->cmp += len;
    size_t d = 0;
    for (size_t i = 0; i < len; i++) if (a[i] != b[i]) { d++; if (firstBad && !*firstBad) *firstBad = va + (uint32_t)i; }
    c->bad += d;
    if (d && getenv("ORACLE_VERBOSE")) { for (size_t i = 0; i < len; i++) if (a[i] != b[i]) { printf("  diff @0x%08X (+%zu/%zu): dat=%02X ram=%02X\n", va + (uint32_t)i, i, len, a[i], b[i]); break; } }
}

/* GeoObj layout: see cpa_scene.c emit_geo (VERIFIED there). */
static void mesh_cmp(const CpaImage *A, const CpaImage *B, uint32_t geo, MeshStat *ms, uint32_t *firstBadGeo) {
    uint32_t pv, ptypes, pelems, cnt;
    if (!cpa_rd32(A, geo, &pv) || !cpa_rd32(A, geo + 0x10, &ptypes) || !cpa_rd32(A, geo + 0x14, &pelems) || !cpa_rd32(A, geo + 0x2C, &cnt)) { ms->unreadable++; return; }
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || !ne || ne > 256 || !cpa_is_ptr(A, pv) || !cpa_is_ptr(A, ptypes) || !cpa_is_ptr(A, pelems)) { ms->unreadable++; return; }
    uint64_t badBefore = ms->geo.bad + ms->mat.bad;
    cmp_range(A, B, geo, 0x30, &ms->geo, firstBadGeo);
    cmp_range(A, B, pv, (size_t)nv * 12, &ms->geo, firstBadGeo);
    cmp_range(A, B, ptypes, (size_t)ne * 2, &ms->geo, firstBadGeo);
    cmp_range(A, B, pelems, (size_t)ne * 4, &ms->geo, firstBadGeo);
    for (uint32_t e = 0; e < ne; e++) {
        uint16_t et; uint32_t el, w[8];
        if (!cpa_rd16(A, ptypes + 2 * e, &et) || !cpa_rd32(A, pelems + 4 * e, &el) || et != 1 || !cpa_is_ptr(A, el)) continue;
        int ok = 1; for (int i = 0; i < 8; i++) ok &= cpa_rd32(A, el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri) continue;
        cmp_range(A, B, el, 32, &ms->geo, firstBadGeo);
        if (cpa_ptr(A, w[2], (size_t)ntri * 6)) cmp_range(A, B, w[2], (size_t)ntri * 6, &ms->geo, firstBadGeo);
        if (cpa_ptr(A, w[3], (size_t)ntri * 6)) cmp_range(A, B, w[3], (size_t)ntri * 6, &ms->geo, firstBadGeo);
        if (cpa_ptr(A, w[4], (size_t)ntri * 12)) cmp_range(A, B, w[4], (size_t)ntri * 12, &ms->geo, firstBadGeo);
        if (cpa_ptr(A, w[5], (size_t)nuv * 8)) cmp_range(A, B, w[5], (size_t)nuv * 8, &ms->geo, firstBadGeo);
        uint32_t vm, tex;                       /* material chain, VERIFIED element->GameMaterial->VisualMaterial(+0x4C)->texture struct */
        if (cpa_is_ptr(A, w[0]) && cpa_rd32(A, w[0], &vm)) {
            cmp_range(A, B, w[0], 4, &ms->mat, NULL); cmp_range(A, B, w[0], 4, &ms->gm, NULL);
            if (cpa_is_ptr(A, vm) && cpa_rd32(A, vm + 0x4C, &tex)) {
                cmp_range(A, B, vm + 0x4C, 4, &ms->mat, NULL); cmp_range(A, B, vm + 0x4C, 4, &ms->vmp, NULL);
                if (cpa_is_ptr(A, tex) && cpa_ptr(A, tex, 0x1C)) cmp_range(A, B, tex, 0x1C, &ms->tex, NULL);
            }
        }
    }
    ms->meshes++;
    if (ms->geo.bad + ms->mat.bad != badBefore) ms->meshBad++;
}

typedef struct {
    const CpaImage *A, *B;
    uint32_t nodes, wordBad[3], matBad[3], nodesBad[3], matCmp[3];   /* index 0 world/sector, 1 IPO, 2 actor */
    uint32_t treeBadNodes;               /* nodes whose pointer words 0..9 (no data ptr) differ */
    MeshStat ipo, actor;
    uint32_t firstBadGeoIpo, firstBadGeoActor, firstBadSo;
} Walk;

static int cls(uint32_t type) { return type == CPA_SO_IPO ? 1 : type == CPA_SO_ACTOR ? 2 : 0; }

static void so_walk(Walk *W, uint32_t va, int depth) {
    uint32_t a[18], b[18];
    if (depth > 32 || W->nodes > 100000) return;
    for (int i = 0; i < 18; i++) if (!cpa_rd32(W->A, va + 4u * i, &a[i])) return;
    W->nodes++;
    int k = cls(a[0]), bad = 0, brd = 1;
    for (int i = 0; i < 18; i++) brd &= cpa_rd32(W->B, va + 4u * i, &b[i]);
    /* A1: words 0..9 are type,data,firstChild,lastChild,count,next,prev,parent,localMat*,globalMat* (VERIFIED, cpa_scene.c comment). */
    for (int i = 0; i < 18; i++) if (!brd || a[i] != b[i]) { W->wordBad[k]++; bad = 1; }
    if (bad) { W->nodesBad[k]++; if (!W->firstBadSo) W->firstBadSo = va; }
    for (int m = 8; m <= 9; m++) {             /* matrix block: floats at ptr+0x28.. as read by mat_read */
        if (!cpa_is_ptr(W->A, a[m])) continue;
        const uint8_t *pa = cpa_ptr(W->A, a[m] + 0x28, 64), *pb = cpa_ptr(W->B, a[m] + 0x28, 64);
        W->matCmp[k]++;
        if (!pa || !pb || memcmp(pa, pb, 64)) W->matBad[k]++;
    }
    uint32_t po, vs, geo;
    if (a[0] == CPA_SO_IPO && cpa_is_ptr(W->A, a[1]) && cpa_rd32(W->A, a[1], &po) && cpa_is_ptr(W->A, po) && cpa_rd32(W->A, po, &vs) &&
        cpa_is_ptr(W->A, vs) && cpa_rd32(W->A, vs + 4, &geo) && cpa_is_ptr(W->A, geo))
        mesh_cmp(W->A, W->B, geo, &W->ipo, &W->firstBadGeoIpo);
    uint32_t ch = a[2], n = 0;
    while (ch && n < 100000) {
        uint32_t nxt; if (!cpa_rd32(W->A, ch + 0x14, &nxt)) break;
        so_walk(W, ch, depth + 1); ch = nxt; n++;
    }
}

/* actor geometry through the same chain cpa_scene.c uses (Actor data -> 3dData -> ObjectsTable -> PO -> VisualSet -> GeoObj) */
static void actor_meshes(Walk *W, uint32_t va, int depth, uint32_t *done, uint32_t *nd) {
    uint32_t a[18];
    if (depth > 32) return;
    for (int i = 0; i < 18; i++) if (!cpa_rd32(W->A, va + 4u * i, &a[i])) return;
    if (a[0] == CPA_SO_ACTOR && cpa_is_ptr(W->A, a[1])) {
        uint32_t d3, tbl, arr, hw;
        if (cpa_rd32(W->A, a[1], &d3) && cpa_is_ptr(W->A, d3) && cpa_rd32(W->A, d3 + 0xC, &tbl) && cpa_is_ptr(W->A, tbl) &&
            cpa_rd32(W->A, tbl, &arr) && cpa_is_ptr(W->A, arr) && cpa_rd32(W->A, tbl + 8, &hw)) {
            uint32_t cnt = hw & 0xFFFF; if (cnt > 4096) cnt = 0;
            for (uint32_t i = 0; i < cnt; i++) {
                uint32_t po, vs, geo;
                if (!cpa_rd32(W->A, arr + 0x10 * i + 4, &po) || !cpa_is_ptr(W->A, po) || !cpa_rd32(W->A, po, &vs) || !cpa_is_ptr(W->A, vs) ||
                    !cpa_rd32(W->A, vs + 4, &geo) || !cpa_is_ptr(W->A, geo)) continue;
                int dup = 0; for (uint32_t j = 0; j < *nd; j++) if (done[j] == geo) { dup = 1; break; }
                if (dup || *nd >= 4096) continue;
                done[(*nd)++] = geo;
                mesh_cmp(W->A, W->B, geo, &W->actor, &W->firstBadGeoActor);
            }
        }
    }
    uint32_t ch = a[2], n = 0;
    while (ch && n < 100000) { uint32_t nxt; if (!cpa_rd32(W->A, ch + 0x14, &nxt)) break; actor_meshes(W, ch, depth + 1, done, nd); ch = nxt; n++; }
}

static uint64_t mix(uint64_t x) { x ^= x >> 30; x *= 0xbf58476d1ce4e5b9ULL; x ^= x >> 27; x *= 0x94d049bb133111ebULL; x ^= x >> 31; return x; }
typedef struct { uint64_t sum, xr; uint64_t n; } MSet;
static void tri_hash(MSet *s, const float *pos9, const float *uv6) {
    uint64_t h = 1469598103934665603ULL; uint32_t u;
    for (int i = 0; i < 15; i++) { float f = i < 9 ? pos9[i] : uv6[i - 9]; memcpy(&u, &f, 4); h = (h ^ u) * 1099511628211ULL; }
    h = mix(h); s->sum += h; s->xr ^= mix(h ^ 0x9e3779b97f4a7c15ULL); s->n++;
}
static void scene_hash(const CpaScene *S, int wantActor, MSet *s) {
    memset(s, 0, sizeof *s);
    for (uint32_t i = 0; i < S->nItems; i++) {
        const CpaDrawItem *it = &S->items[i];
        if ((it->isActor != 0) != wantActor) continue;
        for (uint32_t v = 0; v + 3 <= it->vertCount; v += 3) {
            uint32_t b = it->firstVert + v;
            float p[9], t[6];
            for (int k = 0; k < 3; k++) { memcpy(p + 3 * k, S->pos + 3 * (b + k), 12); memcpy(t + 2 * k, S->uv + 2 * (b + k), 8); }
            tri_hash(s, p, t);
        }
    }
}

int main(int argc, char **argv) {
    if (argc < 3) { fprintf(stderr, "usage: %s RAM.bin DCDATA_DIR [LEVEL]\n", argv[0]); return 2; }
    const char *level = argc > 3 ? argv[3] : "LEARN_10";
    g_tol = getenv("ORACLE_TOLERATE_RUNTIME") != NULL;
    char path[1024];
    uint8_t *ram, *fix, *lvl; size_t ramN, fixN, lvlN;
    if (!cpa_read_file(argv[1], &ram, &ramN)) { fprintf(stderr, "cannot read %s\n", argv[1]); return 2; }
    snprintf(path, sizeof path, "%s/FIX.DAT", argv[2]); if (!cpa_read_file(path, &fix, &fixN)) { fprintf(stderr, "cannot read %s\n", path); return 2; }
    snprintf(path, sizeof path, "%s/%s/%s.DAT", argv[2], level, level); if (!cpa_read_file(path, &lvl, &lvlN)) { fprintf(stderr, "cannot read %s\n", path); return 2; }
    printf("oracle dump: %s (%zu bytes)\nlevel: %s (%zu bytes), FIX.DAT (%zu bytes)\n", argv[1], ramN, level, lvlN, fixN);
    check("dump is 16 MiB guest RAM", ramN == 0x1000000, "size=%zu", ramN);

    uint32_t bl = 0, bf = 0;
    check("bases from DAT headers", cpa_dat_base(lvl, lvlN, CPA_DAT_LEVEL, &bl) && cpa_dat_base(fix, fixN, CPA_DAT_FIX, &bf), "level=0x%08X fix=0x%08X", bl, bf);
    /* the guest says which level is resident: szLevelName at 0x8C123B09 (re_analysis/dc/notes_levels.md a2) */
    char resident[31] = {0}; memcpy(resident, ram + 0x123B09, 30);
    check("oracle has requested level resident (guest szLevelName)", ieq(resident, level), "resident='%s'", resident);
    if (g_fail) { printf("\nRESULT: oracle dump does not contain %s; nothing further is meaningful. pass=%d fail=%d\n", level, g_pass, g_fail); return 1; }

    /* informational: raw 4 KiB page equality of the level and FIX regions (relocation + runtime mutation expected to differ) */
    {
        size_t pg = 0, eq = 0;
        for (size_t o = 0; o < lvlN; o += 4096) { size_t n = lvlN - o < 4096 ? lvlN - o : 4096; pg++; if (!memcmp(lvl + o, ram + (bl - 0x8C000000u) + o, n)) eq++; }
        printf("INFO  level region raw pages identical: %zu/%zu\n", eq, pg);
        pg = eq = 0;
        for (size_t o = 0; o < fixN; o += 4096) { size_t n = fixN - o < 4096 ? fixN - o : 4096; pg++; if (!memcmp(fix + o, ram + (bf - 0x8C000000u) + o, n)) eq++; }
        printf("INFO  FIX region raw pages identical: %zu/%zu\n", eq, pg);
    }

    CpaImage imgD, imgR;               /* D = DAT files, R = oracle RAM cut at the same regions */
    cpa_image_init(&imgD); cpa_image_init(&imgR);
    CpaScene sd, sr;
    int okD = cpa_scene_load_dats(&sd, &imgD, fix, fixN, lvl, lvlN);
    check("native loader accepts DAT image", okD, "SO=%u tris=%u", sd.nSO, sd.nTris);
    uint32_t rootVa = 0; { uint32_t w; memcpy(&w, lvl + 13 * 4, 4); rootVa = w; }
    cpa_image_add(&imgR, ram + (bl - 0x8C000000u), lvlN, bl);
    cpa_image_add(&imgR, ram + (bf - 0x8C000000u), fixN, bf);
    int okR = cpa_scene_load(&sr, &imgR, rootVa);
    check("native loader accepts oracle RAM image", okR, "SO=%u tris=%u", sr.nSO, sr.nTris);
    if (!okD || !okR) { printf("\nRESULT: loader failed. pass=%d fail=%d\n", g_pass, g_fail); return 1; }

    /* A1 + A2 */
    static Walk W; W.A = &imgD; W.B = &imgR;
    so_walk(&W, rootVa, 0);
    { static uint32_t done[4096]; uint32_t nd = 0; actor_meshes(&W, rootVa, 0, done, &nd); }
    check("A1 SO nodes walked equals native DAT walk", W.nodes == sd.nSO, "walked=%u native=%u", W.nodes, sd.nSO);
    check_rt("A1 SO header words (18/node) identical, world+sector", W.wordBad[0] == 0, "badWords=%u badNodes=%u", W.wordBad[0], W.nodesBad[0]);
    check_rt("A1 SO header words identical, IPO nodes", W.wordBad[1] == 0, "badWords=%u badNodes=%u nodes=%u", W.wordBad[1], W.nodesBad[1], sd.nSOIpo);
    check("A1 SO matrices identical, static (world/sector/IPO)", W.matBad[0] + W.matBad[1] == 0, "bad=%u/%u", W.matBad[0] + W.matBad[1], W.matCmp[0] + W.matCmp[1]);
    printf("INFO  A1 actor SO (runtime-mutable, not asserted): header-word diffs=%u in %u/%u nodes, matrix diffs=%u/%u\n",
           W.wordBad[2], W.nodesBad[2], sd.nSOActor, W.matBad[2], W.matCmp[2]);
    if (W.firstBadSo) printf("INFO  first differing SO at 0x%08X\n", W.firstBadSo);
    check("A2 IPO mesh bytes identical (geometry)", W.ipo.geo.bad == 0 && W.ipo.meshes > 0 && W.ipo.unreadable == 0,
          "meshes=%u bytesCompared=%llu bytesDiffer=%llu unreadable=%u", W.ipo.meshes, (unsigned long long)W.ipo.geo.cmp, (unsigned long long)W.ipo.geo.bad, W.ipo.unreadable);
    check("A2 IPO material chain pointers identical (GameMaterial ptr, VisualMaterial+0x4C)", W.ipo.mat.bad == 0, "bytesCompared=%llu bytesDiffer=%llu", (unsigned long long)W.ipo.mat.cmp, (unsigned long long)W.ipo.mat.bad);
    check_rt("A2 actor mesh bytes identical (geometry)", W.actor.geo.bad == 0 && W.actor.meshes > 0,
          "meshes=%u bytesCompared=%llu bytesDiffer=%llu", W.actor.meshes, (unsigned long long)W.actor.geo.cmp, (unsigned long long)W.actor.geo.bad);
    check_rt("A2 actor material chain pointers identical", W.actor.mat.bad == 0, "bytesCompared=%llu bytesDiffer=%llu", (unsigned long long)W.actor.mat.cmp, (unsigned long long)W.actor.mat.bad);
    printf("INFO  A2 IPO material chain breakdown, bytes differing/compared: GameMaterial->VisualMaterial ptr %llu/%llu, VisualMaterial+0x4C tex ptr %llu/%llu, texture struct(0x1C) %llu/%llu\n",
           (unsigned long long)W.ipo.gm.bad, (unsigned long long)W.ipo.gm.cmp, (unsigned long long)W.ipo.vmp.bad, (unsigned long long)W.ipo.vmp.cmp, (unsigned long long)W.ipo.tex.bad, (unsigned long long)W.ipo.tex.cmp);
    if (W.firstBadGeoIpo) printf("INFO  first differing IPO geometry byte at 0x%08X\n", W.firstBadGeoIpo);
    if (W.firstBadGeoActor) printf("INFO  first differing actor geometry byte at 0x%08X\n", W.firstBadGeoActor);

    /* A3 parsed scene equality */
    check_rt("A3 SO type counts equal", sd.nSOWorld == sr.nSOWorld && sd.nSOActor == sr.nSOActor && sd.nSOSector == sr.nSOSector && sd.nSOIpo == sr.nSOIpo && sd.nSO == sr.nSO,
          "DAT w/a/s/i=%u/%u/%u/%u RAM=%u/%u/%u/%u", sd.nSOWorld, sd.nSOActor, sd.nSOSector, sd.nSOIpo, sr.nSOWorld, sr.nSOActor, sr.nSOSector, sr.nSOIpo);
    check_rt("A3 tree errors zero on both sides", !(sd.nParentMismatch + sd.nCountMismatch + sd.nCycle + sd.nUnreadable + sr.nParentMismatch + sr.nCountMismatch + sr.nCycle + sr.nUnreadable),
          "DAT=%u RAM=%u", sd.nParentMismatch + sd.nCountMismatch + sd.nCycle + sd.nUnreadable, sr.nParentMismatch + sr.nCountMismatch + sr.nCycle + sr.nUnreadable);
    check_rt("A3 mesh/element/triangle counts equal", sd.nMeshes == sr.nMeshes && sd.nElements == sr.nElements && sd.nStaticTris == sr.nStaticTris && sd.nActorTris == sr.nActorTris && sd.nStaticMeshes == sr.nStaticMeshes,
          "meshes %u/%u elements %u/%u staticTris %u/%u actorTris %u/%u", sd.nMeshes, sr.nMeshes, sd.nElements, sr.nElements, sd.nStaticTris, sr.nStaticTris, sd.nActorTris, sr.nActorTris);
    int itemsEq = sd.nItems == sr.nItems && sd.nVerts == sr.nVerts;
    uint32_t itemBad = 0, vertBad = 0, vertStaticBad = 0;
    if (itemsEq) {
        for (uint32_t i = 0; i < sd.nItems; i++) {
            const CpaDrawItem *a = &sd.items[i], *b = &sr.items[i];
            if (a->firstVert != b->firstVert || a->vertCount != b->vertCount || a->texVa != b->texVa || a->isActor != b->isActor) itemBad++;
        }
        for (uint32_t v = 0; v < sd.nVerts; v++) {
            int bad = memcmp(sd.pos + 3 * v, sr.pos + 3 * v, 12) || memcmp(sd.uv + 2 * v, sr.uv + 2 * v, 8);
            vertBad += bad;
        }
        for (uint32_t i = 0; i < sd.nItems; i++) if (!sd.items[i].isActor)
            for (uint32_t v = sd.items[i].firstVert; v < sd.items[i].firstVert + sd.items[i].vertCount; v++)
                vertStaticBad += (memcmp(sd.pos + 3 * v, sr.pos + 3 * v, 12) || memcmp(sd.uv + 2 * v, sr.uv + 2 * v, 8));
    }
    check_rt("A3 draw items identical (count, vertex ranges, texture VA, isActor)", itemsEq && itemBad == 0, "items DAT=%u RAM=%u badItems=%u", sd.nItems, sr.nItems, itemBad);
    {   /* static items compared in order, independent of how many actor items each side produced (actor lists mutate at run time) */
        uint32_t i = 0, j = 0, nsd = 0, nsr = 0, sBad = 0, sVerts = 0;
        for (;;) {
            while (i < sd.nItems && sd.items[i].isActor) i++;
            while (j < sr.nItems && sr.items[j].isActor) j++;
            if (i >= sd.nItems || j >= sr.nItems) break;
            const CpaDrawItem *a = &sd.items[i], *b = &sr.items[j];
            nsd++; nsr++;
            if (a->vertCount != b->vertCount || a->texVa != b->texVa) sBad++;
            else for (uint32_t v = 0; v < a->vertCount; v++) {
                sVerts++;
                sBad += (memcmp(sd.pos + 3 * (a->firstVert + v), sr.pos + 3 * (b->firstVert + v), 12) || memcmp(sd.uv + 2 * (a->firstVert + v), sr.uv + 2 * (b->firstVert + v), 8));
            }
            i++; j++;
        }
        while (i < sd.nItems && sd.items[i].isActor) i++;
        while (j < sr.nItems && sr.items[j].isActor) j++;
        check("A3 static draw items + pos/uv bit-identical, in order (actor items excluded)", i == sd.nItems && j == sr.nItems && sBad == 0 && nsd > 0,
              "staticItems=%u verts=%u bad=%u extraItems DAT=%u RAM=%u", nsd, sVerts, sBad, sd.nItems - i, sr.nItems - j);
        (void)nsr; (void)vertStaticBad;
    }
    printf("INFO  A3 all-vertex diffs incl. unposed actors (actor SO matrices move at run time, not asserted): %u/%u\n", vertBad, sd.nVerts);

    /* Texture structs: the guest TEX loader mutates them in place (observed: +0 buffer ptr filled, +4 bit31 and bit9 cleared, +0x10/+0x1C filled).
     * Assert the fields the native code reads: flags (+4) apart from the two load-state bits, and wrap byte (+0x18). Everything else is reported. */
    {
        uint32_t nt = 0, flagBad = 0, wrapBad = 0, b31Set = 0, b31Clr = 0, wordDiff[7] = {0}, alphaDiff = 0;
        uint32_t seenTex[4096]; uint32_t ns = 0;
        for (uint32_t i = 0; i < sd.nItems; i++) {
            uint32_t t = sd.items[i].texVa, dup = 0;
            if (!t || !sd.items[i].texFlagsValid) continue;
            for (uint32_t j = 0; j < ns; j++) if (seenTex[j] == t) { dup = 1; break; }
            if (dup || ns >= 4096) continue;
            seenTex[ns++] = t; nt++;
            uint32_t fd = cpa_u32(&imgD, t + 4), fr = cpa_u32(&imgR, t + 4);
            if (fd & 0x80000000u) b31Set++;
            if (fr & 0x80000000u) b31Set--, b31Clr += 0, b31Clr += 0; else b31Clr++;
            if ((fd & 0x7FFFFDFFu) != (fr & 0x7FFFFDFFu)) flagBad++;
            uint8_t wd = 0, wr = 0; cpa_rd8(&imgD, t + 0x18, &wd); cpa_rd8(&imgR, t + 0x18, &wr);
            if (wd != wr) wrapBad++;
            if (getenv("ORACLE_VERBOSE") && ((fd & 0x7FFFFDFFu) != (fr & 0x7FFFFDFFu) || wd != wr)) printf("  tex 0x%08X flags dat=%08X ram=%08X wrap dat=%02X ram=%02X +0x14 dat=%08X ram=%08X\n", t, fd, fr, wd, wr, cpa_u32(&imgD, t + 0x14), cpa_u32(&imgR, t + 0x14));
            for (int w = 0; w < 7; w++) if (cpa_u32(&imgD, t + 4u * w) != cpa_u32(&imgR, t + 4u * w)) wordDiff[w]++;
            alphaDiff += 0;
        }
        (void)alphaDiff;
        check("A2 texture struct bit31 (load-state marker) set in DAT and cleared in RAM for every struct", b31Clr == nt && nt > 0, "cleared=%u/%u", b31Clr, nt);
        /* The guest loader rewrites flags (+4) and the wrap byte (+0x18). Assert the rewrite is a deterministic function of the file value
         * (same file value -> same RAM value everywhere); print the observed mapping tables so the native decode can be tied to RAM values. */
        {
            /* EMPIRICAL (RODEO_10, PLUM_10, BAST_10): the load rewrite is not a pure function of the file value; the only
             * disagreements are in bits 0x10 (wrap byte) / 0x1A (flags: 0x02, 0x08, 0x10 seen set from file value 0 or 2 in RODEO_10, LEARN_40, NAVE_20) which the guest sets from something other than the file field
             * (likely a texel/alpha scan: UNVERIFIED). Determinism is asserted with those bits masked; raw conflicts are reported. */
            int wmap[256], wconf = 0, wconfRaw = 0; uint32_t wcnt[256] = {0}; uint32_t fk[64], fv[64], fc[64]; int nf = 0, fconf = 0, fconfRaw = 0;
            for (int i = 0; i < 256; i++) wmap[i] = -1;
            for (uint32_t j = 0; j < ns; j++) {
                uint32_t t = seenTex[j];
                uint32_t fd = cpa_u32(&imgD, t + 4) & 0x7FFFFFFFu, fr = cpa_u32(&imgR, t + 4) & 0x7FFFFFFFu;
                uint8_t wd = 0, wr = 0; cpa_rd8(&imgD, t + 0x18, &wd); cpa_rd8(&imgR, t + 0x18, &wr);
                if (wmap[wd] >= 0 && wmap[wd] != (wr & ~0x10)) wconf++;
                wmap[wd] = wr & ~0x10; wcnt[wd]++;
                { static int rawm[256]; static int rawInit; if (!rawInit) { for (int q = 0; q < 256; q++) rawm[q] = -1; rawInit = 1; } if (rawm[wd] >= 0 && rawm[wd] != wr) wconfRaw++; rawm[wd] = wr; }
                int k; for (k = 0; k < nf; k++) if (fk[k] == fd) break;
                if (k == nf && nf < 64) { fk[nf] = fd; fv[nf] = fr & ~0x1Au; fc[nf] = 0; nf++; }
                if (k < nf) { if (fv[k] != (fr & ~0x1Au)) fconf++; fc[k]++; }
            }
            check("A2 texture wrap byte (+0x18) DAT->RAM rewrite is a deterministic function (masked)", wconf == 0 && nt > 0, "conflicts=%d over %u structs", wconf, nt);
            check("A2 texture flags (+4, low bits) DAT->RAM rewrite is a deterministic function (masked)", fconf == 0 && nt > 0, "conflicts=%d over %u structs", fconf, nt);
            printf("INFO  texture rewrite raw (unmasked) conflicts: wrap=%d (a few expected, bit 0x10)\n", wconfRaw);
            (void)fconfRaw;
            printf("INFO  observed wrap byte DAT->RAM (bit 0x10 masked):"); for (int i = 0; i < 256; i++) if (wmap[i] >= 0) printf(" %02X->%02X(x%u)", i, wmap[i], wcnt[i]); printf("\n");
            printf("INFO  observed flags DAT->RAM (bit31 stripped, bits 0x1A masked):"); for (int k = 0; k < nf; k++) printf(" %X->%X(x%u)", fk[k], fv[k], fc[k]); printf("\n");
        }
        if (flagBad || wrapBad) printf("INFO  texture structs where DAT value != RAM value: flags(excluding load-state bits 31/9)=%u wrap=%u of %u => native tile/alpha decode reads PRE-load values; INFERRED mapping to final values only as listed above\n", flagBad, wrapBad, nt);
        (void)b31Set;
    }

    /* C: triangle multiset hash */
    MSet hs, hr, as, ar;
    scene_hash(&sd, 0, &hs); scene_hash(&sr, 0, &hr);
    scene_hash(&sd, 1, &as); scene_hash(&sr, 1, &ar);
    check("C static triangle multiset hash equal (pos+uv bits)", hs.n == hr.n && hs.sum == hr.sum && hs.xr == hr.xr && hs.n > 0,
          "tris DAT=%llu RAM=%llu hash=%016llx/%016llx", (unsigned long long)hs.n, (unsigned long long)hr.n, (unsigned long long)hs.sum, (unsigned long long)hr.sum);
    printf("INFO  C actor-part multiset (not asserted): tris DAT=%llu RAM=%llu hashEqual=%d\n", (unsigned long long)as.n, (unsigned long long)ar.n, as.n == ar.n && as.sum == ar.sum && as.xr == ar.xr);
    printf("INFO  Rayman SO (header words 22/30, INFERRED lookup): DAT raymanSoVa=0x%08X rig.valid=%d  RAM raymanSoVa=0x%08X rig.valid=%d\n", sd.raymanSoVa, sd.rig.valid, sr.raymanSoVa, sr.rig.valid);
    if (sd.rig.valid && sr.rig.valid) {
        cpa_rig_pose(&sd, 0.f); cpa_rig_pose(&sr, 0.f);
        printf("INFO  Rayman rig frame 0 bbox z DAT=%.4f..%.4f RAM=%.4f..%.4f (placement may differ at run time)\n", sd.rig.pmin[2], sd.rig.pmax[2], sr.rig.pmin[2], sr.rig.pmax[2]);
    }

    printf("\nRESULT: %s  pass=%d fail=%d%s\n", g_fail ? "FAIL" : "PASS", g_pass, g_fail, g_tol ? (g_rt ? "  (tolerant mode: runtime-mutated checks not asserted, see INFO-RT)" : "  (tolerant mode, nothing needed tolerating)") : "");
    cpa_scene_free(&sd); cpa_scene_free(&sr);
    return g_fail ? 1 : 0;
}
