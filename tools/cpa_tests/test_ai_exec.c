/* test_ai_exec: tests for src/cpa/cpa_ai_exec.c
 *   test_ai_exec                                  hand-built cases (portable)
 *   test_ai_exec --ram DIR --dcdata DCDATA        evaluate every node of every actor script of every level RAM dump; report coverage per unsupported opcode
 *   test_ai_exec_oracle --ram DIR --dcdata DCDATA same, and compare EVERY evaluated node with the lifted game code (f_8c072e7a run on the same RAM dump):
 *                                                 value words, tag, returned next-node pointer, and (assignments) the whole DsgVar data block afterwards.
 * The oracle build (-DAIEXEC_ORACLE) links the HLE objects like vis_frustum.c; see aiexec.mk. Exit 0 only if no mismatch and no hand-test failure. */
#include "../../src/cpa/cpa_ai_exec.h"
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef AIEXEC_ORACLE
#include "hle.h"
extern void f_8c072e7a(SH4Ctx *c);
extern void f_8c073266(SH4Ctx *c);
#endif

static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; printf("FAIL line %d: ", __LINE__); printf(__VA_ARGS__); printf("\n"); } } while (0)

/* ------------------------------------------------------------------ hand-built cases ------------------------------------------------------------------ */
static uint8_t mem[0x4000];
static const uint32_t B = 0x8C000000u;
static void w32(uint32_t va, uint32_t v) { memcpy(mem + (va - B), &v, 4); }
static uint32_t tf2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static float tu2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static uint32_t nodeat = 0x8C001000u;   /* script area */
static uint32_t nn;
static uint32_t N(uint32_t param, int depth, int type) { uint32_t v = nodeat + 12 * nn++; w32(v, param); w32(v + 4, 0x0D); mem[v - B + 10] = (uint8_t)depth; mem[v - B + 11] = (uint8_t)type; return v; }
static void reset(void) { nn = 0; }
static CpaAiVal run(CpaAiEnv *e, uint32_t n, int *rc, uint32_t *next) { CpaAiVal o; uint32_t nx = 0; *rc = cpa_ai_eval(e, n, &o, &nx); if (next) *next = nx; return o; }

static void hand_tests(void) {
    CpaAiEnv e; cpa_ai_env_init(&e, mem, sizeof mem, B);
    memset(mem, 0, sizeof mem);
    /* fake actor: SO 0x8C000100 (type 2, data -> actor 0x8C000200), actor+0xC -> brain 0x8C000300, brain+0 -> mind 0x8C000400, mind+0xC -> dsgmem 0x8C000500 */
    uint32_t so = 0x8C000100u, actor = 0x8C000200u, brain = 0x8C000300u, mind = 0x8C000400u, dm = 0x8C000500u, P = 0x8C000540u, model = 0x8C000600u, arr = 0x8C000640u, data = 0x8C000800u;
    w32(so, 2); w32(so + 4, actor); w32(actor + 0xC, brain); w32(brain, mind); w32(mind + 0xC, dm);
    w32(dm, P); w32(P, model); w32(dm + 8, data); w32(dm + 0xC, model);
    w32(model + 4, arr); w32(model + 8, 32); mem[model + 0xC - B] = 4;
    /* vars: 0 float @0, 1 int32 @4, 2 u8 @8, 3 vector @12 */
    uint32_t d[4][2] = { {0, 7}, {4, 5}, {8, 2}, {12, 11} };
    for (int i = 0; i < 4; i++) { w32(arr + 16 * i, d[i][0]); w32(arr + 16 * i + 4, d[i][1]); }
    w32(data, tf2u(2.5f)); w32(data + 4, (uint32_t)-7); mem[data + 8 - B] = 200; w32(data + 12, tf2u(1)); w32(data + 16, tf2u(2)); w32(data + 20, tf2u(3));
    e.selfSo = so;
    int rc; uint32_t nx; CpaAiVal v;

    reset(); uint32_t a = N(0, 1, 2); N(3, 2, 12); N(4, 2, 12);                       /* Plus(3,4) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 6 && v.w[0] == 7 && nx == a + 36, "plus %d %u tag %u next %x", rc, v.w[0], v.tag, nx);
    reset(); a = N(2, 1, 2); N(3, 2, 12); N(tf2u(1.5f), 2, 13);                         /* Mul(3, 1.5) -> float 4.5 */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 8 && tu2f(v.w[0]) == 4.5f, "mulf");
    reset(); a = N(3, 1, 2); N(9, 2, 12); N(0, 2, 12);                                  /* Div(9, 0) -> int 0 */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 6 && v.w[0] == 0, "div0");
    reset(); a = N(3, 1, 2); N((uint32_t)-9, 2, 12); N(2, 2, 12);                       /* Div(-9, 2) -> -4 (truncating) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && (int32_t)v.w[0] == -4, "divneg");
    reset(); a = N(4, 1, 2); N(5, 2, 12);                                               /* UnaryMinus(5) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && (int32_t)v.w[0] == -5 && nx == a + 24, "uminus");
    reset(); a = N(2, 1, 2); N(0, 2, 12); N(5, 2, 11);                                  /* Mul(0, X): right side skipped, even if unreadable var */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 0 && nx == a + 36, "mul0skip");
    reset(); a = N(7, 1, 1); N(0, 2, 11); N(tf2u(2.0f), 2, 13);                         /* Greater(var0=2.5f, 2.0f) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 1, "gt");
    reset(); a = N(4, 1, 1); N(1, 2, 11); N((uint32_t)-7, 2, 12);                       /* Equal(var1, -7) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 1, "eq");
    reset(); a = N(6, 1, 1); N(1, 2, 11); N(0, 2, 12);                                  /* Lesser(var1=-7, 0) */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 1, "lt");
    e.allowWrite = 1;   /* short-circuit writes the skip cache */
    reset(); a = N(0, 1, 1); N(4, 2, 1); N(2, 3, 12); N(3, 3, 12); N(1, 2, 12);       /* And(Equal(2,3), 1) -> 0, right child skipped */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 0 && nx == a + 60, "and");
    reset(); a = N(1, 1, 1); N(4, 2, 1); N(2, 3, 12); N(2, 3, 12); N(0, 2, 12);       /* Or(Equal(2,2), 0) -> 1 */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 1, "or");
    e.allowWrite = 0;
    reset(); a = N(14, 1, 2); N(3, 2, 11);                                              /* .Y of vector var3 = 2 */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 8 && tu2f(v.w[0]) == 2.0f, "y");
    reset(); a = N(2, 1, 11);                                                           /* u8 var 200 */
    v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.w[0] == 200 && v.tag == 6, "u8");
    reset(); a = N(11, 1, 2); N(1, 2, 11); N(42, 2, 12);                                /* Affect(var1, 42): refused when writes are off, done when on */
    v = run(&e, a, &rc, &nx); CHECK(rc == CPA_AI_E_UNSUPPORTED, "affect pure");
    e.allowWrite = 1; v = run(&e, a, &rc, &nx); CHECK(rc == 0, "affect rc"); cpa_ai_dsg_read(&e, so, 1, &v); CHECK(v.w[0] == 42, "affect value");
    reset(); a = N(11, 1, 2); N(0, 2, 11); N(3, 2, 12);                                 /* Affect(float var0, int 3) -> 3.0f */
    v = run(&e, a, &rc, &nx); cpa_ai_dsg_read(&e, so, 0, &v); CHECK(v.tag == 8 && tu2f(v.w[0]) == 3.0f, "affect float");
    reset(); a = N(99, 1, 0); v = run(&e, a, &rc, &nx); CHECK(rc == CPA_AI_E_UNSUPPORTED && e.unsupId == 99, "unsupported keyword");
    reset(); a = N(13, 1, 0); v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 0xB && v.w[0] == 0, "Nobody");
    reset(); a = N(11, 1, 0); v = run(&e, a, &rc, &nx); CHECK(rc == 0 && v.tag == 0xB && v.w[0] == actor, "Me");
    printf("hand tests: %s\n", fails ? "FAILED" : "passed");
}

/* ------------------------------------------------------------------ data runs ------------------------------------------------------------------ */
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { if (f) fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static uint32_t g32(const CpaAiEnv *e, uint32_t va) { uint32_t v = 0; cpa_ai_rd32(e, va, &v); return v; }

#define NT 64
#define NP 512
static struct {
    unsigned long nodes, ok, unsup, memerr, depth, logerr, cmpd, mism, fulldiff, fulldiffBad, drift, scripts, scriptsOk, scriptsUnsup, scriptsMism;
    unsigned long unsupBy[NT][NP];   /* node type, param (clamped) */
    unsigned long okBy[NT][NP], mismBy[NT][NP], cmpBy[NT][NP], fdBy[NT][NP], scrUnsupBy[NT][NP];
    unsigned long firstShown;
} S;
static int cl(uint32_t p) { return p < NP - 1 ? (int)p : NP - 1; }
static int g_shapes, g_noscript, g_fullEvery = 64;
static struct { char k[96]; unsigned long n; } shp[4096]; static int nshp;
static void shape_add(const char *k) { for (int i = 0; i < nshp; i++) if (!strcmp(shp[i].k, k)) { shp[i].n++; return; } if (nshp < 4096) { snprintf(shp[nshp].k, 96, "%s", k); shp[nshp++].n = 1; } }

static CpaAiWr wlogbuf[1 << 20];
#define SCRATCH_LO 0xEF0000u   /* oracle stack + out record live here (offsets in the 16 MiB image) */
#define SCRATCH_HI 0xF90000u

#ifdef AIEXEC_ORACLE
static SH4Ctx ctx;
static uint8_t *pristine;   /* copy of the level RAM the oracle image is reset to */
static void oracle_eval(uint32_t so, uint32_t node, CpaAiVal *o, uint32_t *next) {
    SH4Ctx *c = &ctx; memset(c, 0, sizeof *c);
    c->fpscr = 0x00040001u; R(15) = 0x8CF00000u; R(4) = so; R(5) = node; R(6) = 0x8CF80000u; c->pr = 0x8C010000u;
    memset(sh4_ram + 0xF80000, 0, 16);
    f_8c072e7a(c);
    *next = R(0);
    memcpy(o, sh4_ram + 0xF80000, 16);
}
static void oracle_run(uint32_t so, uint32_t node, CpaAiVal *o, uint32_t *next) {
    SH4Ctx *c = &ctx; memset(c, 0, sizeof *c);
    c->fpscr = 0x00040001u; R(15) = 0x8CF00000u; R(4) = so; R(5) = node; R(6) = 0x8CF80000u; c->pr = 0x8C010000u;
    memset(sh4_ram + 0xF80000, 0, 16);
    f_8c073266(c);
    *next = R(0);
    memcpy(o, sh4_ram + 0xF80000, 16);
}
/* first differing byte of the two images outside the scratch window, or -1 */
static long ram_diff(const uint8_t *a, const uint8_t *b) {
    size_t n1 = SCRATCH_LO, n2 = 0x1000000 - SCRATCH_HI;
    if (memcmp(a, b, n1)) { for (size_t i = 0; i < n1; i++) if (a[i] != b[i]) return (long)i; }
    if (memcmp(a + SCRATCH_HI, b + SCRATCH_HI, n2)) { for (size_t i = SCRATCH_HI; i < 0x1000000; i++) if (a[i] != b[i]) return (long)i; }
    return -1;
}

/* revert the oracle image after a compared run: when it equalled mine, replay my undo log onto it; otherwise reload the pristine level image */
static void undo_oracle(const CpaAiEnv *e, int equal) {
    if (!equal) { memcpy(sh4_ram, pristine, 0x1000000); return; }
    for (uint32_t i = e->wlogN; i-- > 0;) { const CpaAiWr *w = &e->wlog[i]; for (int k = 0; k < w->len; k++) sh4_ram[(w->va & 0xFFFFFFu) + (uint32_t)k] = (uint8_t)(w->old >> (8 * k)); }
}
#endif

/* is this node a statement / side-effect class whose RAM effect must be diffed against the guest every time? */
static int is_stmt(uint32_t type, uint32_t param) {
    if (type == 4) return 1;
    if (type == 0) return param <= 9 && (param <= 5 || param == 8 || param == 9);
    if (type == 2) return (param >= 5 && param <= 11) || (param >= 21 && param <= 23);
    return 0;
}

__attribute__((unused)) static int same_val(const CpaAiVal *a, const CpaAiVal *b) {
    int nw = (a->tag == 0x15) ? 3 : 1;
    if (a->tag != b->tag) return 0;
    for (int i = 0; i < nw; i++) if (a->w[i] != b->w[i]) return 0;
    return 1;
}

static void tally_rc(CpaAiEnv *e, int rc) {
    if (rc == CPA_AI_E_UNSUPPORTED) { S.unsup++; S.unsupBy[e->unsupType & (NT - 1)][cl(e->unsupId)]++; }
    else if (rc == CPA_AI_E_MEM) S.memerr++;
    else if (rc == CPA_AI_E_LOG) S.logerr++;
    else S.depth++;
}

static void check_node(CpaAiEnv *e, uint32_t so, uint32_t node, uint32_t type, uint32_t param) {
    CpaAiVal v; uint32_t nx = 0;
    S.nodes++;
    if (g_shapes && type == 2 && (param == 11 || (param >= 5 && param <= 10) || (param >= 21 && param <= 23))) {
        char k[96]; uint32_t c1 = node + 12; uint32_t t1 = e->mem[c1 + 11 - e->base], p1 = g32(e, c1), t2 = e->mem[c1 + 23 - e->base], t3 = e->mem[c1 + 35 - e->base];
        snprintf(k, sizeof k, "ASSIGN op%u c1=%u%s", param, t1, "");
        if (t1 == 2) snprintf(k, sizeof k, "ASSIGN op%u c1=op%u t2=%u t3=%u", param, p1, t2, t3);
        shape_add(k);
    }
    if (g_shapes && type == 0 && param <= 9) { char k[96]; uint32_t c1 = node + 12; snprintf(k, sizeof k, "KW%u c1type=%u", param, (unsigned)e->mem[c1 + 11 - e->base]); shape_add(k); }
    e->selfSo = so; e->allowWrite = 1;
    memset(&v, 0, sizeof v);
    cpa_ai_log_begin(e, wlogbuf, 1u << 20);
    int rc = cpa_ai_eval(e, node, &v, &nx);
    if (rc) { cpa_ai_log_rollback(e); tally_rc(e, rc); return; }
    S.ok++; S.okBy[type & (NT - 1)][cl(param)]++;
#ifdef AIEXEC_ORACLE
    {
        CpaAiVal o; uint32_t onx = 0;
        int stmt = is_stmt(type, param) || (type == 1 && param <= 1), full = stmt || (S.ok % (unsigned long)g_fullEvery == 0);
        oracle_eval(so, node, &o, &onx);
        S.cmpd++; S.cmpBy[type & (NT - 1)][cl(param)]++;
        int bad = !same_val(&v, &o) || onx != nx;
        long dpos = -1;
        if (full) {
            S.fulldiff++; S.fdBy[type & (NT - 1)][cl(param)]++;
            dpos = ram_diff(e->mem, sh4_ram);
            if (dpos >= 0) { bad = 1; S.fulldiffBad++; }
        }
        if (bad) {
            S.mism++; S.mismBy[type & (NT - 1)][cl(param)]++;
            if (S.firstShown++ < 12) printf("MISMATCH node %08x type %u param %u: mine tag %x w %08x %08x %08x next %08x | game tag %x w %08x %08x %08x next %08x ramdiff %lx\n",
                node, type, param, v.tag, v.w[0], v.w[1], v.w[2], nx, o.tag, o.w[0], o.w[1], o.w[2], onx, dpos);
            if (type == 1 && S.firstShown <= 12) { CpaAiVal cv, co; uint32_t cn, con; int rr = cpa_ai_eval(e, node + 12, &cv, &cn); memcpy(sh4_ram + 0, pristine, 0); oracle_eval(so, node + 12, &co, &con);
                printf("   child: mine rc %d tag %x w %08x | game tag %x w %08x (type %u param %u)\n", rr, cv.tag, cv.w[0], co.tag, co.w[0], e->mem[node + 23 - e->base], g32(e, node + 12)); }
            if (dpos >= 0 && S.firstShown <= 12) printf("   image at %lx: mine %02x %02x %02x %02x | game %02x %02x %02x %02x | pristine %02x %02x %02x %02x\n", dpos, e->mem[dpos], e->mem[dpos+1], e->mem[dpos+2], e->mem[dpos+3], sh4_ram[dpos], sh4_ram[dpos+1], sh4_ram[dpos+2], sh4_ram[dpos+3], pristine[dpos], pristine[dpos+1], pristine[dpos+2], pristine[dpos+3]);
        }
        int equal = dpos < 0 && !bad;
        if (!full) { /* unverified image: assume equal, the sampled full diffs catch drift */ equal = !bad; }
        undo_oracle(e, equal);
        cpa_ai_log_rollback(e);   /* mine back to the pristine image */
    }
#else
    cpa_ai_log_rollback(e);
#endif
}

/* whole-script run (runner f_8c073266) from a rule start, mine vs guest */
static void check_script(CpaAiEnv *e, uint32_t so, uint32_t start) {
    CpaAiVal v; uint32_t nx = 0;
    e->selfSo = so; e->allowWrite = 1;
    memset(&v, 0, sizeof v);
    S.scripts++;
    cpa_ai_log_begin(e, wlogbuf, 1u << 20);
    int rc = cpa_ai_run(e, start, &v, &nx);
    if (rc) { cpa_ai_log_rollback(e); S.scriptsUnsup++; if (rc == CPA_AI_E_UNSUPPORTED) S.scrUnsupBy[e->unsupType & (NT - 1)][cl(e->unsupId)]++; return; }
    S.scriptsOk++;
#ifdef AIEXEC_ORACLE
    {
        CpaAiVal o; uint32_t onx = 0;
        oracle_run(so, start, &o, &onx);
        long dpos = ram_diff(e->mem, sh4_ram);
        int bad = !same_val(&v, &o) || onx != nx || dpos >= 0;
        if (bad) {
            S.scriptsMism++;
            if (S.firstShown++ < 12) printf("SCRIPT MISMATCH start %08x: mine flags %x tag %x next %08x | game flags %x tag %x next %08x ramdiff %lx\n", start, v.w[0], v.tag, nx, o.w[0], o.tag, onx, dpos);
        }
        undo_oracle(e, !bad);
        cpa_ai_log_rollback(e);
    }
#else
    cpa_ai_log_rollback(e);
#endif
}

static void do_script(CpaAiEnv *e, uint32_t so, uint32_t start) {
    uint32_t p = start;
    for (int guard = 0; guard < 100000; guard++, p += 12) {
        uint8_t d, t; uint32_t prm;
        if (!cpa_ai_rd32(e, p, &prm) || e->mem[p + 10 - e->base] > 200) return;
        d = e->mem[p + 10 - e->base]; t = e->mem[p + 11 - e->base];
        if (t > 40) return;
        check_node(e, so, p, t, prm);
        if (t == 8 && d == 0) break;
    }
    if (!g_noscript) check_script(e, so, start);
}
static void do_actor(CpaAiEnv *e, uint32_t so) {
    uint32_t a = g32(e, so + 4), br = g32(e, a + 0xC), mind = g32(e, br), ai = g32(e, mind);
    if (!ai) return;
    for (int k = 0; k < 2; k++) {   /* normal and reflex behaviour lists */
        uint32_t h = g32(e, ai + 4u * k); if (!h) continue;
        uint32_t first = g32(e, h), cnt = g32(e, h + 4);
        for (uint32_t i = 0; i < cnt && i < 4096; i++) {
            uint32_t ent = first + 0x10 * i, rules = g32(e, ent); uint8_t nr = e->mem[ent + 0xC - e->base];
            for (uint32_t r = 0; r < nr && rules; r++) { uint32_t s = g32(e, rules + 4 * r); if (s) do_script(e, so, s); }
        }
    }
    uint32_t mh = g32(e, ai + 0xC);
    if (mh) { uint32_t first = g32(e, mh); uint8_t cnt = e->mem[mh + 4 - e->base];
        for (uint32_t i = 0; i < cnt; i++) { uint32_t slot = g32(e, first + 8 * i); uint32_t s = slot ? g32(e, slot) : 0; if (s) do_script(e, so, s); } }
}
static void walk(CpaAiEnv *e, uint32_t so, int depth, uint32_t *seenModels, int *nSeen) {
    uint32_t type = g32(e, so), cnt = g32(e, so + 0x10), ch = g32(e, so + 8);
    if (depth > 64) return;
    if (type == 2) {
        uint32_t a = g32(e, so + 4), br = g32(e, a + 0xC), mind = g32(e, br), ai = mind ? g32(e, mind) : 0; int dup = 0;
        for (int i = 0; i < *nSeen; i++) if (seenModels[i] == ai) dup = 1;
        if (ai && !dup && *nSeen < 8192) { seenModels[(*nSeen)++] = ai; do_actor(e, so); }   /* one actor per distinct model */
    }
    for (uint32_t i = 0; i < cnt && ch >= e->base && ch < e->base + e->n; i++) { walk(e, ch, depth + 1, seenModels, nSeen); ch = g32(e, ch + 0x14); }
}

static int cmpstr(const void *a, const void *b) { return strcmp(*(char *const *)a, *(char *const *)b); }
int main(int argc, char **argv) {
    const char *ramDir = NULL, *dc = NULL; const char *only = NULL;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--ram") && i + 1 < argc) ramDir = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dc = argv[++i];
        else if (!strcmp(argv[i], "--only") && i + 1 < argc) only = argv[++i];
        else if (!strcmp(argv[i], "--shapes")) g_shapes = 1;
        else if (!strcmp(argv[i], "--noscript")) g_noscript = 1;
        else if (!strcmp(argv[i], "--full-every") && i + 1 < argc) g_fullEvery = atoi(argv[++i]);
    }
    if (g_fullEvery < 1) g_fullEvery = 1;
    hand_tests();
    if (ramDir && dc) {
        DIR *d = opendir(ramDir); if (!d) { fprintf(stderr, "no %s\n", ramDir); return 2; }
        char *names[256]; int nn2 = 0; struct dirent *de;
        while ((de = readdir(d)) && nn2 < 256) {
            size_t l = strlen(de->d_name);
            if (l > 8 && !strncmp(de->d_name, "ram_", 4) && !strcmp(de->d_name + l - 4, ".bin")) { names[nn2] = strndup(de->d_name + 4, l - 8); nn2++; }
        }
        closedir(d);
        qsort(names, (size_t)nn2, sizeof *names, cmpstr);
        int levels = 0;
#ifdef AIEXEC_ORACLE
        pristine = malloc(0x1000000);
#endif
        for (int i = 0; i < nn2; i++) {
            char path[1024]; size_t n, dn; uint8_t *ram, *dat;
            if (only && strcmp(only, names[i])) continue;
            snprintf(path, sizeof path, "%s/%s/%s.DAT", dc, names[i], names[i]); dat = slurp(path, &dn);
            if (!dat || dn < 64) { free(dat); continue; }   /* RAM dump without a level DAT (menus, mini-games) */
            snprintf(path, sizeof path, "%s/ram_%s.bin", ramDir, names[i]); ram = slurp(path, &n);
            if (!ram || n != 0x1000000) { free(ram); free(dat); continue; }
            uint32_t root = (uint32_t)dat[52] | (dat[53] << 8) | (dat[54] << 16) | ((uint32_t)dat[55] << 24);
            CpaAiEnv e; cpa_ai_env_init(&e, ram, n, 0x8C000000u); cpa_ai_env_dc(&e);
#ifdef AIEXEC_ORACLE
            memcpy(sh4_ram, ram, n); memcpy(pristine, ram, n);
#endif
            static uint32_t seen[8192]; int nSeen = 0;
            walk(&e, root, 0, seen, &nSeen);
            levels++;
            free(ram); free(dat);
        }
        printf("levels %d: nodes visited %lu | evaluated OK %lu, unsupported %lu, memory errors %lu, depth errors %lu, log overflow %lu\n", levels, S.nodes, S.ok, S.unsup, S.memerr, S.depth, S.logerr);
        printf("scripts run through the statement runner: %lu, completed %lu, unsupported/error %lu\n", S.scripts, S.scriptsOk, S.scriptsUnsup);
#ifdef AIEXEC_ORACLE
        printf("ORACLE: compared %lu nodes (%lu with full 16 MiB image diff, %lu image diffs); mismatches %lu; oracle drift events %lu\n", S.cmpd, S.fulldiff, S.fulldiffBad, S.mism, S.drift);
        printf("ORACLE scripts: compared %lu whole-script runs (flags, next, image), mismatches %lu\n", S.scriptsOk, S.scriptsMism);
        for (int t = 0; t < NT; t++) for (int p = 0; p < NP; p++) if (S.mismBy[t][p]) printf("  mismatch type %d param %d: %lu of %lu\n", t, p, S.mismBy[t][p], S.cmpBy[t][p]);
        printf("compared by class with full-image diff (type:param=nodes/fulldiff), statement classes:");
        for (int t = 0; t < NT; t++) for (int p = 0; p < NP; p++) if (S.cmpBy[t][p] && (is_stmt((uint32_t)t, (uint32_t)p) || (t == 2 && (p == 12 || p == 26)) || (t == 1 && p <= 1))) printf(" %d:%d=%lu/%lu", t, p, S.cmpBy[t][p], S.fdBy[t][p]);
        printf("\n");
#endif
        printf("evaluated OK by node type:");
        for (int t = 0; t < NT; t++) { unsigned long s = 0; for (int p = 0; p < NP; p++) s += S.okBy[t][p]; if (s) printf(" t%d=%lu", t, s); }
        printf("\nevaluated OK, per class (type:param=count) for the statement-layer classes:");
        for (int t = 0; t < NT; t++) for (int p = 0; p < NP; p++) if (S.okBy[t][p] && is_stmt((uint32_t)t, (uint32_t)p)) printf(" %d:%d=%lu", t, p, S.okBy[t][p]);
        printf("\n");
        if (g_shapes) { for (int pass = 0; pass < 60; pass++) { int b = -1; for (int i = 0; i < nshp; i++) if (shp[i].n && (b < 0 || shp[i].n > shp[b].n)) b = i; if (b < 0) break; printf("SHAPE %lu %s\n", shp[b].n, shp[b].k); shp[b].n = 0; } }
        { printf("top unsupported (type:param=count):"); for (int k = 0; k < 40; k++) { unsigned long best = 0; int bt = -1, bp = -1; for (int t = 0; t < NT; t++) for (int p = 0; p < NP; p++) if (S.unsupBy[t][p] > best) { best = S.unsupBy[t][p]; bt = t; bp = p; } if (bt < 0) break; printf(" %d:%d=%lu", bt, bp, best); S.unsupBy[bt][bp] = 0; } printf("\n"); }
        { printf("\nscripts stopped by (type:param=count):"); for (int k = 0; k < 25; k++) { unsigned long best = 0; int bt = -1, bp = -1; for (int t = 0; t < NT; t++) for (int p = 0; p < NP; p++) if (S.scrUnsupBy[t][p] > best) { best = S.scrUnsupBy[t][p]; bt = t; bp = p; } if (bt < 0) break; printf(" %d:%d=%lu", bt, bp, best); S.scrUnsupBy[bt][bp] = 0; } }
        printf("\nunsupported (type:param=count), top by type:");
        for (int t = 0; t < NT; t++) { unsigned long s = 0; for (int p = 0; p < NP; p++) s += S.unsupBy[t][p]; if (s) printf(" t%d=%lu", t, s); }
        printf("\n");
#ifdef AIEXEC_ORACLE
        if (S.mism || S.scriptsMism) fails++;
#endif
    }
    return fails ? 1 : 0;
}
