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
typedef struct { Cnt geo, mat, gm, vmp, tex; uint32_t meshes, meshBad, unreadable; uint32_t animVm, animBad, animLive; } MeshStat;

/* VisualMaterial texture animation (see vm_texture() in src/cpa/cpa_scene.c; rule read from the lifted guest FUN_8c01215c): VM+0x140 count (0 = none),
 * VM+0x148 byte 0, VM+0x138 head node, VM+0x13C current node, nodes {tex, float dur, next}, update does VM+0x4C = current.tex. VM+0x4C is runtime state of that
 * animation, so it is NOT compared byte for byte; instead the exact invariants are asserted: same list (count, head, every node's tex/dur/next) in file and RAM, file
 * state = load state (current == head, VM+0x4C == head tex), RAM +0x13C is a list node and RAM +0x4C == that node's tex. Returns 1 if VM is animated (handled). */
static int anim_vm_check(const CpaImage *A, const CpaImage *B, uint32_t vm, MeshStat *ms) {
    uint32_t cnt = 0; uint8_t b148 = 0;
    if (!cpa_rd32(A, vm + 0x140, &cnt) || !cnt || !cpa_rd8(A, vm + 0x148, &b148) || b148) return 0;
    ms->animVm++;
    uint32_t bad = 0, hd, cur, t4c, bcnt = 0, bhd = 0, bcur = 0, bt4c = 0; uint8_t bb148 = 1;
    int ok = cpa_rd32(A, vm + 0x138, &hd) && cpa_rd32(A, vm + 0x13C, &cur) && cpa_rd32(A, vm + 0x4C, &t4c) &&
             cpa_rd32(B, vm + 0x140, &bcnt) && cpa_rd8(B, vm + 0x148, &bb148) && cpa_rd32(B, vm + 0x138, &bhd) && cpa_rd32(B, vm + 0x13C, &bcur) && cpa_rd32(B, vm + 0x4C, &bt4c);
    if (!ok || cnt > 256 || bcnt != cnt || bb148 || bhd != hd || cur != hd) bad++;
    uint32_t n = hd, headTex = 0, curTexB = 0; int curIn = 0;
    for (uint32_t i = 0; ok && i < cnt && !bad; i++) {
        uint32_t nx = 0, tx = 0;
        if (!cpa_ptr(A, n, 12) || !cpa_ptr(B, n, 12) || memcmp(cpa_ptr(A, n, 12), cpa_ptr(B, n, 12), 12)) { bad++; break; }
        cpa_rd32(A, n, &tx); cpa_rd32(A, n + 8, &nx);
        if (i == 0) headTex = tx;
        if (n == bcur) { curIn = 1; curTexB = tx; }
        if (i + 1 < cnt ? !nx : nx) bad++;
        n = nx;
    }
    if (!bad && (!curIn || t4c != headTex || bt4c != curTexB)) bad++;
    if (!bad && bt4c != headTex) ms->animLive++;
    if (bad) ms->animBad++;
    return 1;
}

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
                if (!anim_vm_check(A, B, vm, ms)) { cmp_range(A, B, vm + 0x4C, 4, &ms->mat, NULL); cmp_range(A, B, vm + 0x4C, 4, &ms->vmp, NULL); }
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
    check("A2 texture-animated VisualMaterials: same frame list in file and RAM, file = load state, RAM frame = a list node and VM+0x4C = its texture",
          W.ipo.animBad == 0 && W.actor.animBad == 0, "animated VM refs ipo=%u actor=%u, bad=%u/%u, live frame != head in RAM: ipo=%u actor=%u",
          W.ipo.animVm, W.actor.animVm, W.ipo.animBad, W.actor.animBad, W.ipo.animLive, W.actor.animLive);
    printf("INFO  native scene animation stats: DAT animMat=%u liveFrameNormalised=%u bad=%u | RAM animMat=%u liveFrameNormalised=%u bad=%u\n",
           sd.nAnimMat, sd.nAnimLiveFrame, sd.nAnimMatBad, sr.nAnimMat, sr.nAnimLiveFrame, sr.nAnimMatBad);
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
    {   /* second texture layer selector (VisualMaterial+0x149) and sprite elements: the DAT image and the guest's loaded copy must agree */
        uint32_t ovBad = 0, ovNz = 0, sprBad = 0;
        if (itemsEq) for (uint32_t i = 0; i < sd.nItems; i++) { ovBad += sd.items[i].overlayMode != sr.items[i].overlayMode; ovNz += sd.items[i].overlayMode != 0; }
        check_rt("A3 overlayMode (VisualMaterial+0x149) identical DAT vs guest RAM, per draw item", itemsEq && ovBad == 0, "items=%u nonzero=%u bad=%u", sd.nItems, ovNz, ovBad);
        {   /* static items only, in order (actor item lists mutate at run time): strict */
            uint32_t i = 0, j = 0, n = 0, bad = 0;
            for (;;) {
                while (i < sd.nItems && sd.items[i].isActor) i++;
                while (j < sr.nItems && sr.items[j].isActor) j++;
                if (i >= sd.nItems || j >= sr.nItems) break;
                bad += sd.items[i].overlayMode != sr.items[j].overlayMode; n++; i++; j++;
            }
            check("A3 overlayMode identical DAT vs guest RAM, static draw items in order", i == sd.nItems && j == sr.nItems && n > 0 && bad == 0, "static items=%u bad=%u", n, bad);
        }
        if (sd.nSprites == sr.nSprites) for (uint32_t i = 0; i < sd.nSprites; i++) {
            const CpaSprite *x = &sd.sprites[i], *y = &sr.sprites[i];
            int sb = x->geoVa != y->geoVa || x->texVa != y->texVa || memcmp(&x->sizeX, &y->sizeX, 8) || memcmp(x->local, y->local, 12) || x->isActor != y->isActor;
            sprBad += sb;
            if (sb && getenv("ORACLE_VERBOSE") && sprBad <= 4) printf("  sprite %u: geo %08X/%08X tex %08X/%08X size %g,%g/%g,%g local %g,%g,%g/%g,%g,%g actor %d/%d\n", i, x->geoVa, y->geoVa, x->texVa, y->texVa,
                   x->sizeX, x->sizeY, y->sizeX, y->sizeY, x->local[0], x->local[1], x->local[2], y->local[0], y->local[1], y->local[2], x->isActor, y->isActor);
        }
        check_rt("A3 sprites (type 3) identical DAT vs guest RAM (count, geometry, texture, size, local vertex)", sd.nSprites == sr.nSprites && sprBad == 0, "sprites DAT=%u RAM=%u bad=%u", sd.nSprites, sr.nSprites, sprBad);
        {   /* sprites live in actor geometries (none in static IPOs, VERIFIED on 3 levels), which the guest re-instantiates at run time (Rodeo_40: RAM sprite geometries sit in heap, outside the DAT image,
             * with animated size): asserted strictly for the non-actor ones only */
            uint32_t nd = 0, nr = 0;
            for (uint32_t i = 0; i < sd.nSprites; i++) nd += !sd.sprites[i].isActor;
            for (uint32_t i = 0; i < sr.nSprites; i++) nr += !sr.sprites[i].isActor;
            check("A3 non-actor sprites: count equal DAT vs guest RAM", nd == nr, "DAT=%u RAM=%u", nd, nr);
        }
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
        /* The guest loader overwrites tex+4 (flags), tex+0x18 (wrap byte) and tex+0x14 from the per-texture PVR header word of the .TEX file (FUN_8c03a502 ->
         * FUN_8c03a680 / FUN_8c03a5dc, lifted code in tools/sh4recomp/gen_fix/recomp_05.c). cpa_tex_table() reproduces that function; assert it EXACTLY for every
         * texture in the DAT table (no masks, no determinism-up-to-bits shortcut). */
        {
            char tp[1100]; uint8_t *texf = NULL; size_t texN = 0; CpaTexInfo *ti = NULL; uint32_t nti = 0;
            snprintf(tp, sizeof tp, "%s/%s/%s.TEX", argv[2], level, level);
            int have = cpa_read_file(tp, &texf, &texN);
            int tok = have && cpa_tex_table(&imgD, texf, texN, &ti, &nti);
            check("A2 .TEX file decodes to exactly one chunk per DAT texture-table entry", tok, "textures=%u file=%zu bytes", nti, texN);
            if (tok) {
                uint32_t fm = 0, wm = 0, pm = 0, b31 = 0, preDiffF = 0, preDiffW = 0;
                for (uint32_t i = 0; i < nti; i++) {
                    uint32_t t = ti[i].structVa; uint8_t wr = 0, wd = 0;
                    uint32_t fr = cpa_u32(&imgR, t + 4), fd = cpa_u32(&imgD, t + 4);
                    cpa_rd8(&imgR, t + 0x18, &wr); cpa_rd8(&imgD, t + 0x18, &wd);
                    fm += fr != ti[i].flags;                         /* RAM +4 == flags(raw) exactly (bit 31 included: must be clear) */
                    wm += wr != ti[i].wrap;
                    pm += cpa_u32(&imgR, t + 0x14) != ti[i].pvrFmt;
                    b31 += !(fd & 0x80000000u) || (fr & 0x80000000u);
                    preDiffF += (fd & 0x7FFFFFFFu) != ti[i].flags; preDiffW += wd != ti[i].wrap;
                }
                check("A2 texture flags (+4) in guest RAM == flags(.TEX PVR header word) exactly, every texture", fm == 0 && nti > 0, "mismatch=%u/%u", fm, nti);
                check("A2 texture wrap byte (+0x18) in guest RAM == wrap(.TEX PVR header word) exactly, every texture", wm == 0 && nti > 0, "mismatch=%u/%u", wm, nti);
                check("A2 texture +0x14 in guest RAM == (PVR header word & 0xFFFF), every texture", pm == 0 && nti > 0, "mismatch=%u/%u", pm, nti);
                check("A2 every DAT texture struct has +4 bit31 set (pre-load) and the RAM one clear", b31 == 0, "violations=%u/%u", b31, nti);
                printf("INFO  DAT (pre-load) struct values differ from the post-load .TEX-derived values: flags %u/%u, wrap %u/%u => cpa_scene_load reads pre-load values; use cpa_scene_apply_tex() for post-load\n",
                       preDiffF, nti, preDiffW, nti);
                /* the native API: apply the post-load table to the DAT scene and require the result equals what the RAM-side struct says, for all items */
                {
                    CpaScene sa; CpaImage ia; memset(&sa, 0, sizeof sa);
                    if (cpa_scene_load_dats(&sa, &ia, fix, fixN, lvl, lvlN)) {
                        uint32_t upd = cpa_scene_apply_tex(&sa, ti, nti), bad = 0;
                        uint32_t outside = 0;
                        for (uint32_t i = 0; i < sa.nItems; i++) if (sa.items[i].texVa) {
                            int inTbl = 0; for (uint32_t q = 0; q < nti; q++) if (ti[q].structVa == sa.items[i].texVa) { inTbl = 1; break; }
                            if (!inTbl) { outside++; if (getenv("ORACLE_VERBOSE")) printf("  item %u texVa 0x%08X not in level texture table (FIX.DAT texture?)\n", i, sa.items[i].texVa); continue; }
                            uint8_t wr = 0; uint32_t fr = cpa_u32(&imgR, sa.items[i].texVa + 4); cpa_rd8(&imgR, sa.items[i].texVa + 0x18, &wr);
                            bad += sa.items[i].texFlags != fr || sa.items[i].texWrapByte != wr || !sa.items[i].texFlagsValid;
                        }
                        check("A2 cpa_scene_apply_tex(): draw-item texFlags/wrap equal guest RAM texture structs", bad == 0, "updated=%u items=%u bad=%u (items with a texture outside the level table: %u)", upd, sa.nItems, bad, outside);
                        cpa_scene_free(&sa);
                    }
                }
            }
            free(ti); free(texf);
        }
        (void)flagBad; (void)wrapBad;
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
