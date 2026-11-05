/* cpa_ai_scan: see cpa_ai_scan.h. Decode-only; nothing here evaluates a script. */
#include "cpa_ai_scan.h"
#include <stdlib.h>
#include <string.h>

/* ---------- small helpers ---------- */
typedef struct { uint32_t *p; uint32_t n, cap; } U32Vec;
static int vec_push(U32Vec *v, uint32_t x) {
    if (v->n == v->cap) {
        uint32_t nc = v->cap ? v->cap * 2 : 1024;
        uint32_t *q = (uint32_t *)realloc(v->p, nc * sizeof *q);
        if (!q) return 0;
        v->p = q; v->cap = nc;
    }
    v->p[v->n++] = x;
    return 1;
}
static int cmp_u32(const void *a, const void *b) { uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b; return x < y ? -1 : x > y; }
static uint32_t vec_sort_unique(U32Vec *v) {
    if (!v->n) return 0;
    qsort(v->p, v->n, sizeof *v->p, cmp_u32);
    uint32_t w = 1, dup = 0;
    for (uint32_t i = 1; i < v->n; i++) { if (v->p[i] == v->p[w - 1]) dup++; else v->p[w++] = v->p[i]; }
    v->n = w;
    return dup;
}
static int vec_has(const U32Vec *v, uint32_t x) { return v->n && bsearch(&x, v->p, v->n, sizeof *v->p, cmp_u32) != NULL; }

/* open addressing set of non-zero u32 */
typedef struct { uint32_t *t; uint32_t cap, n; } Set;
static int set_grow(Set *s);
static int set_add(Set *s, uint32_t x) {   /* returns 1 if newly added, 0 if present, -1 on OOM */
    if (!s->cap || (s->n + 1) * 2 > s->cap) { if (!set_grow(s)) return -1; }
    uint32_t m = s->cap - 1, h = (x * 2654435761u) & m;
    while (s->t[h]) { if (s->t[h] == x) return 0; h = (h + 1) & m; }
    s->t[h] = x; s->n++;
    return 1;
}
static int set_grow(Set *s) {
    uint32_t nc = s->cap ? s->cap * 2 : 4096, *o = s->t, oc = s->cap;
    uint32_t *t = (uint32_t *)calloc(nc, sizeof *t);
    if (!t) return 0;
    s->t = t; s->cap = nc; s->n = 0;
    for (uint32_t i = 0; i < oc; i++) if (o[i]) set_add(s, o[i]);
    free(o);
    return 1;
}
static void set_free(Set *s) { free(s->t); memset(s, 0, sizeof *s); }

typedef struct { uint32_t va, param; uint8_t depth, type; } Nd;

static int read_node(const CpaImage *im, uint32_t va, Nd *n, CpaAiShape *sh) {
    const uint8_t *p = cpa_ptr(im, va, 12);
    if (!p || (va & 3)) { if (sh) sh->unreadable++; return 0; }
    n->va = va;
    n->param = (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
    n->depth = p[10]; n->type = p[11];
    if (sh) {
        uint32_t h = (uint32_t)p[4] | ((uint32_t)p[5] << 8) | ((uint32_t)p[6] << 16) | ((uint32_t)p[7] << 24);
        if (h != 0x0Du) sh->placeholderNot0d++;
        if (p[8] | p[9]) sh->skipNonzero++;
    }
    return 1;
}

static void opstat(CpaAiOpStat *o, uint16_t ar, const uint64_t cm[4], int parentType) {
    if (!o->n) { o->arMin = o->arMax = ar; } else { if (ar < o->arMin) o->arMin = ar; if (ar > o->arMax) o->arMax = ar; }
    o->n++;
    for (int k = 0; k < 4; k++) o->child[k] |= cm[k];
    if (parentType < 0) o->parentRoot++; else o->parent |= 1ull << parentType;
}

typedef struct { uint16_t ar; uint64_t cm[4]; int32_t par; } Aux;

/* Account one script (flat node list). `closed` = the list ended on its EndMacro. */
static void account(CpaAiHist *h, CpaAiShape *sh, const Nd *n, uint32_t cnt, int closed) {
    if (!cnt) return;
    Aux *a = (Aux *)calloc(cnt, sizeof *a);
    if (!a) return;
    int32_t last[257];
    for (int i = 0; i < 257; i++) last[i] = -1;
    if (n[0].depth != 1) sh->firstDepth++;
    if (!closed) sh->unterminated++;
    for (uint32_t i = 0; i < cnt; i++) {
        unsigned d = n[i].depth;
        a[i].par = -1;
        if (i && d > n[i - 1].depth + 1u) sh->depthJump++;
        if (d == 0 && !(n[i].type == CPA_AI_T_ENDMACRO && i == cnt - 1 && closed)) sh->depth0Early++;
        if (n[i].type == CPA_AI_T_ENDMACRO && d != 0 && i == cnt - 1 && closed) sh->depth0Early++;
        if (d >= 2 && last[d - 1] >= 0) {
            int32_t p = last[d - 1];
            a[i].par = p;
            if (a[p].ar < 4) a[p].cm[a[p].ar] |= 1ull << (n[i].type & 63);
            a[p].ar++;
        }
        if (d <= 255) { last[d] = (int32_t)i; for (unsigned k = d + 1; k <= 256; k++) last[k] = -1; }
        if (d > h->maxDepth) h->maxDepth = d;
    }
    for (uint32_t i = 0; i < cnt; i++) {
        unsigned t = n[i].type, p = n[i].param;
        int pt = a[i].par >= 0 ? n[a[i].par].type : -1;
        h->nNodes++;
        if (t >= CPA_AI_NTYPE) { h->typeBad++; continue; }
        opstat(&h->type[t], a[i].ar, a[i].cm, pt);
        switch (t) {
            case CPA_AI_T_KEYWORD:   if (p < CPA_AI_NKW)   opstat(&h->kw[p],   a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_KEYWORD]++;   if (p > h->oorMax[CPA_AI_C_KEYWORD])   h->oorMax[CPA_AI_C_KEYWORD] = p; } break;
            case CPA_AI_T_COND:      if (p < CPA_AI_NCOND) opstat(&h->cond[p], a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_COND]++;      if (p > h->oorMax[CPA_AI_C_COND])      h->oorMax[CPA_AI_C_COND] = p; } break;
            case CPA_AI_T_OPERATOR:  if (p < CPA_AI_NOP)   opstat(&h->op[p],   a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_OPERATOR]++;  if (p > h->oorMax[CPA_AI_C_OPERATOR])  h->oorMax[CPA_AI_C_OPERATOR] = p; } break;
            case CPA_AI_T_FUNCTION:  if (p < CPA_AI_NFUNC) opstat(&h->func[p], a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_FUNCTION]++;  if (p > h->oorMax[CPA_AI_C_FUNCTION])  h->oorMax[CPA_AI_C_FUNCTION] = p; } break;
            case CPA_AI_T_PROCEDURE: if (p < CPA_AI_NPROC) opstat(&h->proc[p], a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_PROCEDURE]++; if (p > h->oorMax[CPA_AI_C_PROCEDURE]) h->oorMax[CPA_AI_C_PROCEDURE] = p; } break;
            case CPA_AI_T_META:      if (p < CPA_AI_NMETA) opstat(&h->meta[p], a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_META]++;      if (p > h->oorMax[CPA_AI_C_META])      h->oorMax[CPA_AI_C_META] = p; } break;
            case CPA_AI_T_FIELD:     if (p < CPA_AI_NFIELD) opstat(&h->field[p], a[i].ar, a[i].cm, pt); else { h->oor[CPA_AI_C_FIELD]++;    if (p > h->oorMax[CPA_AI_C_FIELD])     h->oorMax[CPA_AI_C_FIELD] = p; } break;
            default: break;
        }
    }
    h->nScripts++;
    free(a);
}

static int region_idx(const CpaImage *im, uint32_t va) {
    const CpaRegion *r = cpa_region_of(im, va, 12);
    if (!r) return 0;
    int i = (int)(r - im->reg);
    return i > 1 ? 1 : i;
}

/* ---------- scan state ---------- */
typedef struct { CpaAiScan *s; const CpaImage *im; Set starts, models, so; U32Vec nodes, startList; } Ctx;

/* read a script from `start` until its EndMacro, account it, remember its nodes. kind: 0 normal, 1 reflex, 2 macro */
static void add_script(Ctx *c, uint32_t start, int kind) {
    CpaAiScan *s = c->s;
    if (!cpa_is_ptr(c->im, start)) { s->cmpRuleBadPtr++; return; }
    int added = set_add(&c->starts, start);
    if (added <= 0) return;
    vec_push(&c->startList, start);
    Nd *buf = NULL; uint32_t n = 0, cap = 0; int closed = 0;
    uint32_t va = start;
    while (n < (1u << 16)) {
        Nd nd;
        if (!read_node(c->im, va, &nd, &s->walkShape)) break;
        if (n == cap) { cap = cap ? cap * 2 : 64; Nd *q = (Nd *)realloc(buf, cap * sizeof *q); if (!q) { free(buf); return; } buf = q; }
        buf[n++] = nd;
        if (nd.type == CPA_AI_T_ENDMACRO && nd.depth == 0) { closed = 1; break; }
        va += 12;
    }
    if (n >= (1u << 16)) s->walkShape.tooLong++;
    int ri = region_idx(c->im, start);
    account(&s->walk[ri], &s->walkShape, buf, n, closed);
    for (uint32_t i = 0; i < n; i++) vec_push(&c->nodes, buf[i].va);
    free(buf);
    if (kind == 0) s->nScriptsNormal++; else if (kind == 1) s->nScriptsReflex++; else s->nScriptsMacro++;
}

static int rd8(const CpaImage *im, uint32_t va, uint8_t *o) { return cpa_rd8(im, va, o); }

static void walk_list(Ctx *c, uint32_t h, int kind, uint32_t *firstOut, uint32_t *countOut) {
    CpaAiScan *s = c->s; const CpaImage *im = c->im;
    uint32_t first = 0, count = 0, dup = 0;
    *firstOut = 0; *countOut = 0;
    if (!cpa_rd32(im, h, &first) || !cpa_rd32(im, h + 4, &count) || !cpa_rd32(im, h + 8, &dup)) { s->badCount++; return; }
    if (dup != first) s->cmpHdrDup++;
    if (dup < first || ((dup - first) & 0xF) || (dup - first) / 0x10 >= (count ? count : 1)) s->cmpHdrInitBad++;
    if (count > 4096) { s->badCount++; return; }
    *firstOut = first; *countOut = count;
    if (kind == 0) s->nNormalLists++; else s->nReflexLists++;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t e = first + 0x10u * i, ra = 0, e4 = 0, e8 = 0; uint8_t nr = 0, f1 = 0, f2 = 0, f3 = 0;
        if (!cpa_rd32(im, e, &ra) || !cpa_rd32(im, e + 4, &e4) || !cpa_rd32(im, e + 8, &e8) || !rd8(im, e + 0xC, &nr) ||
            !rd8(im, e + 0xD, &f1) || !rd8(im, e + 0xE, &f2) || !rd8(im, e + 0xF, &f3)) { s->badCount++; continue; }
        s->nComports++; if (kind) s->nReflexComports++;
        if (e4) { s->cmpE4Nonzero++; if (e4 < first || ((e4 - first) & 0xF) || (e4 - first) / 0x10 >= count) s->cmpE4NotInList++; }
        if (e8 != i) s->cmpIdxMismatch++;
        if (f1 != 0xCD || f2 != 0xCD || f3 != 0xCD) s->cmpFillBad++;
        for (uint32_t r = 0; r < nr; r++) {
            uint32_t sp = 0;
            s->nRuleSlots++;
            if (!cpa_rd32(im, ra + 4u * r, &sp)) { s->cmpRuleBadPtr++; continue; }
            add_script(c, sp, kind);
        }
    }
}

static void walk_macros(Ctx *c, uint32_t h) {
    CpaAiScan *s = c->s; const CpaImage *im = c->im;
    uint32_t first = 0; uint8_t cnt = 0, f1 = 0, f2 = 0, f3 = 0;
    if (!cpa_rd32(im, h, &first) || !rd8(im, h + 4, &cnt) || !rd8(im, h + 5, &f1) || !rd8(im, h + 6, &f2) || !rd8(im, h + 7, &f3)) { s->badCount++; return; }
    if (f1 != 0xCD || f2 != 0xCD || f3 != 0xCD) s->cmpFillBad++;
    s->nMacroLists++;
    for (uint32_t i = 0; i < cnt; i++) {
        uint32_t A = 0, B = 0, sa = 0, sb = 0, e = first + 8u * i;
        if (cpa_rd32(im, e, &A) && cpa_rd32(im, e + 4, &B) && !A && !B) { s->nMacroEmpty++; continue; }
        if (!cpa_rd32(im, e, &A) || !cpa_rd32(im, e + 4, &B) || !cpa_rd32(im, A, &sa) || !cpa_rd32(im, B, &sb)) { s->cmpMacroBadPtr++; continue; }
        s->nMacros++;
        if (sa != sb) s->cmpMacroSlotsDiffer++;
        add_script(c, sa, 2);
    }
}

static int in_list(const CpaImage *im, uint32_t cur, uint32_t first, uint32_t count, uint32_t *idx) {
    if (cur < first || ((cur - first) & 0xF)) return 0;
    uint32_t i = (cur - first) >> 4;
    if (i >= count) return 0;
    *idx = i; (void)im;
    return 1;
}

static void do_actor(Ctx *c, uint32_t so) {
    CpaAiScan *s = c->s; const CpaImage *im = c->im;
    uint32_t actor = 0, brain = 0, mind = 0, ai = 0;
    s->nActors++;
    if (!cpa_rd32(im, so + 4, &actor) || !cpa_is_ptr(im, actor) || !cpa_rd32(im, actor + 0xC, &brain) || !cpa_is_ptr(im, brain) ||
        !cpa_rd32(im, brain, &mind) || !cpa_is_ptr(im, mind)) { s->nActorNoMind++; return; }
    s->nMinds++;
    if (!cpa_rd32(im, mind, &ai) || !cpa_is_ptr(im, ai)) { s->nActorNoModel++; return; }
    uint32_t nH = 0, rH = 0, nFirst = 0, nCount = 0, rFirst = 0, rCount = 0, mH = 0;
    cpa_rd32(im, ai, &nH); cpa_rd32(im, ai + 4, &rH); cpa_rd32(im, ai + 0xC, &mH);
    if (set_add(&c->models, ai) == 1) {
        s->nModels++;
        if (nH && cpa_is_ptr(im, nH)) walk_list(c, nH, 0, &nFirst, &nCount); else if (nH) s->badCount++;
        if (rH && cpa_is_ptr(im, rH)) walk_list(c, rH, 1, &rFirst, &rCount); else if (rH) s->badCount++; else s->nReflexListNull++;
        if (mH && cpa_is_ptr(im, mH)) walk_macros(c, mH); else if (mH) s->badCount++;
    } else {
        if (nH && cpa_is_ptr(im, nH)) { cpa_rd32(im, nH, &nFirst); cpa_rd32(im, nH + 4, &nCount); }
        if (rH && cpa_is_ptr(im, rH)) { cpa_rd32(im, rH, &rFirst); cpa_rd32(im, rH + 4, &rCount); }
    }
    /* Intelligence / Reflex instances of this actor */
    for (int k = 0; k < 2; k++) {
        uint32_t inst = 0, link = 0, cur = 0, hdr = k ? rH : nH, first = k ? rFirst : nFirst, count = k ? rCount : nCount, idx = 0;
        if (!cpa_rd32(im, mind + 4u + 4u * k, &inst) || !inst || !cpa_is_ptr(im, inst)) { s->intelNull++; continue; }
        if (cpa_rd32(im, inst + 0x18, &link) && link == hdr && hdr) { if (k) s->intelReflexLinked++; else s->intelNormalLinked++; }
        else { if (k) s->intelReflexNot++; else s->intelNormalNot++; }
        if (cpa_rd32(im, inst + 8, &cur)) {
            if (in_list(im, cur, first, count, &idx)) { s->intelCurInList++; if (idx == 0) s->intelCurIdx0++; }
            else s->intelCurNotInList++;
        }
    }
}

static void visit_so(Ctx *c, uint32_t so, int depth) {
    CpaAiScan *s = c->s; const CpaImage *im = c->im;
    uint32_t type = 0, cnt = 0, ch = 0;
    if (depth > 64 || c->so.n > 400000) { s->badCount++; return; }
    if (set_add(&c->so, so) != 1) { s->badCount++; return; }   /* cycle / DAG */
    s->nSO++;
    if (cpa_rd32(im, so, &type) && type == 2) do_actor(c, so);
    if (!cpa_rd32(im, so + 0x10, &cnt) || !cnt || !cpa_rd32(im, so + 8, &ch)) return;
    for (uint32_t i = 0; i < cnt && cpa_is_ptr(im, ch); i++) {
        visit_so(c, ch, depth + 1);
        if (!cpa_rd32(im, ch + 0x14, &ch)) break;
    }
}
static void walk_so(Ctx *c, uint32_t root) { visit_so(c, root, 0); }

/* ---------- Table 1 census ---------- */
static void tmp_census(Ctx *c, const uint8_t *tmp, size_t tmpN) {
    CpaAiScan *s = c->s; const CpaImage *im = c->im;
    if (!tmp || tmpN < 16) return;
    uint32_t o1 = (uint32_t)tmp[0] | ((uint32_t)tmp[1] << 8) | ((uint32_t)tmp[2] << 16) | ((uint32_t)tmp[3] << 24);
    uint32_t c1 = (uint32_t)tmp[4] | ((uint32_t)tmp[5] << 8) | ((uint32_t)tmp[6] << 16) | ((uint32_t)tmp[7] << 24);
    if ((uint64_t)o1 + 4ull * c1 > tmpN) return;
    U32Vec v = {0};
    for (uint32_t i = 0; i < c1; i++) {
        const uint8_t *q = tmp + o1 + 4u * i;
        uint32_t va = (uint32_t)q[0] | ((uint32_t)q[1] << 8) | ((uint32_t)q[2] << 16) | ((uint32_t)q[3] << 24);
        s->tmpListed++;
        if (!cpa_ptr(im, va, 12)) { s->tmpOutside++; continue; }
        vec_push(&v, va);
    }
    s->tmpDup = vec_sort_unique(&v);
    /* split into scripts */
    U32Vec tstarts = {0};
    Nd *buf = NULL; uint32_t n = 0, cap = 0;
    uint32_t prev = 0;
    for (uint32_t i = 0; i <= v.n; i++) {
        int flush = 0;
        Nd nd; int ok = 0;
        if (i < v.n) {
            ok = read_node(im, v.p[i], &nd, &s->tmpShape);
            if (n && v.p[i] != prev + 12) flush = 2;      /* run broken mid-script */
        } else if (n) flush = 2;
        if (flush == 2) {
            int ri = region_idx(im, buf[0].va);
            account(&s->tmp[ri], &s->tmpShape, buf, n, 0);
            vec_push(&tstarts, buf[0].va);
            s->tmpScripts++;
            int reached = vec_has(&c->startList, buf[0].va);
            if (reached) { s->tmpScriptsReached++; s->tmpNodesReached += n; } else { s->tmpScriptsOrphan++; s->tmpNodesOrphan += n; if (ri) { s->tmpScriptsOrphanFix++; s->tmpNodesOrphanFix += n; } }
            n = 0;
        }
        if (i == v.n || !ok) continue;
        if (n == cap) { cap = cap ? cap * 2 : 64; Nd *q = (Nd *)realloc(buf, cap * sizeof *q); if (!q) break; buf = q; }
        buf[n++] = nd; prev = v.p[i];
        if (nd.type == CPA_AI_T_ENDMACRO && nd.depth == 0) {
            int ri = region_idx(im, buf[0].va);
            account(&s->tmp[ri], &s->tmpShape, buf, n, 1);
            vec_push(&tstarts, buf[0].va);
            s->tmpScripts++;
            int reached = vec_has(&c->startList, buf[0].va);
            if (reached) { s->tmpScriptsReached++; s->tmpNodesReached += n; } else { s->tmpScriptsOrphan++; s->tmpNodesOrphan += n; if (ri) { s->tmpScriptsOrphanFix++; s->tmpNodesOrphanFix += n; } }
            n = 0;
        }
    }
    vec_sort_unique(&tstarts);
    /* every walk script start must be a Table-1 script start */
    for (uint32_t i = 0; i < c->startList.n; i++) if (!vec_has(&tstarts, c->startList.p[i])) s->walkNotInTmp++;
    free(buf); free(v.p); free(tstarts.p);
}

CpaAiScan *cpa_ai_scan_new(void) { CpaAiScan *s = (CpaAiScan *)calloc(1, sizeof *s); if (s) s->sizeofNode = 12; return s; }
void cpa_ai_scan_free(CpaAiScan *s) { if (!s) return; free(s->walkNodes); free(s->walkStarts); free(s); }

int cpa_ai_scan(CpaAiScan *s, const CpaImage *im, uint32_t rootSoVa, const uint8_t *tmp, size_t tmpN) {
    Ctx c; memset(&c, 0, sizeof c);
    c.s = s; c.im = im;
    walk_so(&c, rootSoVa);
    vec_sort_unique(&c.nodes);
    vec_sort_unique(&c.startList);
    tmp_census(&c, tmp, tmpN);
    free(s->walkNodes); s->walkNodes = c.nodes.p; s->nWalkNodes = c.nodes.n;
    free(s->walkStarts); s->walkStarts = c.startList.p; s->nWalkStarts = c.startList.n;
    set_free(&c.starts); set_free(&c.models); set_free(&c.so);
    return s->nModels > 0;
}

void cpa_ai_runtime_compare(CpaAiRtCmp *o, const CpaImage *dat, const CpaImage *ram, const uint32_t *nodes, uint32_t nNodes) {
    memset(o, 0, sizeof *o);
    uint32_t ok = 0;
    for (int t = 0; t < CPA_AI_NTYPE; t++) {
        uint32_t g = 0;
        if (cpa_rd32(ram, CPA_AI_VA_GPT + 4u * t, &g) && g >= 0x8C010000u && g < 0x8C0C0000u && !(g & 1)) ok++;
        o->gpt[t] = g;
    }
    o->gptValid = ok;
    for (uint32_t i = 0; i < nNodes; i++) {
        Nd a, b; uint32_t rh = 0;
        if (!read_node(dat, nodes[i], &a, NULL) || !read_node(ram, nodes[i], &b, NULL) || !cpa_rd32(ram, nodes[i] + 4, &rh)) { o->unreadable++; continue; }
        o->n++;
        if (a.depth == b.depth && a.type == b.type) o->typeDepthSame++;
        if (a.type < CPA_AI_NTYPE && rh == o->gpt[a.type]) o->handlerIsGpt++; else o->handlerOther++;
        if (a.param == b.param) o->paramSame++; else if (a.type < CPA_AI_NTYPE) o->paramDiff[a.type]++;
        uint16_t sk = 0;
        if (cpa_rd16(ram, nodes[i] + 8, &sk) && sk) o->skipSet++;
    }
}

const char *cpa_ai_class_name(int cls) {
    static const char *n[] = { "keyword", "condition", "operator", "function", "procedure", "meta-action", "field", "node-type" };
    return (cls >= 0 && cls < 8) ? n[cls] : "?";
}

static void merge_stat(CpaAiOpStat *a, const CpaAiOpStat *b) {
    if (!b->n) return;
    if (!a->n) { a->arMin = b->arMin; a->arMax = b->arMax; } else { if (b->arMin < a->arMin) a->arMin = b->arMin; if (b->arMax > a->arMax) a->arMax = b->arMax; }
    a->n += b->n; a->parentRoot += b->parentRoot; a->parent |= b->parent;
    for (int k = 0; k < 4; k++) a->child[k] |= b->child[k];
}
#define MERGE_ARR(f, N) for (int i = 0; i < (N); i++) merge_stat(&a->f[i], &b->f[i])
void cpa_ai_hist_merge(CpaAiHist *a, const CpaAiHist *b) {
    MERGE_ARR(kw, CPA_AI_NKW); MERGE_ARR(cond, CPA_AI_NCOND); MERGE_ARR(op, CPA_AI_NOP); MERGE_ARR(func, CPA_AI_NFUNC);
    MERGE_ARR(proc, CPA_AI_NPROC); MERGE_ARR(meta, CPA_AI_NMETA); MERGE_ARR(field, CPA_AI_NFIELD); MERGE_ARR(type, CPA_AI_NTYPE);
    for (int i = 0; i < CPA_AI_NMAXSLOT; i++) { a->oor[i] += b->oor[i]; if (b->oorMax[i] > a->oorMax[i]) a->oorMax[i] = b->oorMax[i]; }
    a->typeBad += b->typeBad; a->nNodes += b->nNodes; a->nScripts += b->nScripts;
    if (b->maxDepth > a->maxDepth) a->maxDepth = b->maxDepth;
}
