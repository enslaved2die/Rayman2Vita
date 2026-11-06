/* cpa_ai_exec: see cpa_ai_exec.h. Every rule cites the lifted handler it was read from (tools/sh4recomp/gen_fix/recomp_12.c). */
#include "cpa_ai_exec.h"
#include <string.h>

#define NODE 12u

void cpa_ai_env_init(CpaAiEnv *e, uint8_t *mem, size_t n, uint32_t base) {
    memset(e, 0, sizeof *e);
    e->mem = mem; e->n = n; e->base = base;
}

static uint8_t *ptr(const CpaAiEnv *e, uint32_t va, size_t len) {
    if (va < e->base) return NULL;
    size_t o = va - e->base;
    if (o > e->n || len > e->n - o) return NULL;
    return e->mem + o;
}
int cpa_ai_rd32(const CpaAiEnv *e, uint32_t va, uint32_t *o) {
    const uint8_t *p = ptr(e, va, 4);
    if (!p || (va & 3)) return 0;
    *o = (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
    return 1;
}
static int wr(CpaAiEnv *e, uint32_t va, uint32_t v, int len) {   /* little-endian store of len (1/2/4) bytes, logged when the log is on */
    uint8_t *p = ptr(e, va, (size_t)len);
    if (!p || (len > 1 && (va & (uint32_t)(len - 1)))) return 0;
    if (e->wlogOn) {
        if (e->wlogN >= e->wlogCap) { e->wlogOverflow = 1; return 0; }
        uint32_t o = 0; for (int i = 0; i < len; i++) o |= (uint32_t)p[i] << (8 * i);
        e->wlog[e->wlogN].va = va; e->wlog[e->wlogN].old = o; e->wlog[e->wlogN].len = (uint8_t)len; e->wlogN++;
    }
    for (int i = 0; i < len; i++) p[i] = (uint8_t)(v >> (8 * i));
    return 1;
}
int cpa_ai_wr32(CpaAiEnv *e, uint32_t va, uint32_t v) { return wr(e, va, v, 4); }
static int wr8(CpaAiEnv *e, uint32_t va, uint32_t v) { return wr(e, va, v, 1); }
static int wr16(CpaAiEnv *e, uint32_t va, uint32_t v) { return wr(e, va, v, 2); }
void cpa_ai_log_begin(CpaAiEnv *e, CpaAiWr *buf, uint32_t cap) { e->wlog = buf; e->wlogCap = cap; e->wlogN = 0; e->wlogOn = 1; e->wlogOverflow = 0; }
void cpa_ai_log_clear(CpaAiEnv *e) { e->wlogN = 0; e->wlogOverflow = 0; }
void cpa_ai_log_rollback(CpaAiEnv *e) {
    int on = e->wlogOn; e->wlogOn = 0;
    while (e->wlogN) { CpaAiWr *w = &e->wlog[--e->wlogN]; wr(e, w->va, w->old, w->len); }
    e->wlogOn = on; e->wlogOverflow = 0;
}
void cpa_ai_env_dc(CpaAiEnv *e) {
    e->mainActorPtrVa = 0x8C123CF0u; e->gFlag = 0x8C0C7D34u; e->gFrameCtr = 0x8C0C608Cu; e->gOverride = 0x8C0C76FCu;
    e->gStep0 = 0x8C2DD1B0u; e->gStep1 = 0x8C2DD1B1u; e->gFrame = 0x8C2DD1D4u; e->gTrack = 0x8C0C7C88u; e->gCmpClr = 0x8C0C5194u;
}
static int rd8(const CpaAiEnv *e, uint32_t va, uint8_t *o) { const uint8_t *p = ptr(e, va, 1); if (!p) return 0; *o = *p; return 1; }
static int rd16(const CpaAiEnv *e, uint32_t va, uint16_t *o) { const uint8_t *p = ptr(e, va, 2); if (!p || (va & 1)) return 0; *o = (uint16_t)(p[0] | (p[1] << 8)); return 1; }
static float u2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

/* ---------------- DsgVar ---------------- */
static int dsg_model(const CpaAiEnv *e, uint32_t so, uint32_t *model, uint32_t *data) {
    uint32_t actor, brain, mind, dm, p, m;
    if (!cpa_ai_rd32(e, so + 4, &actor) || !cpa_ai_rd32(e, actor + 0xC, &brain) || !cpa_ai_rd32(e, brain, &mind) ||
        !cpa_ai_rd32(e, mind + 0xC, &dm) || !cpa_ai_rd32(e, dm, &p) || !cpa_ai_rd32(e, p, &m) || !cpa_ai_rd32(e, dm + 8, data)) return 0;
    *model = m;
    return 1;
}
int cpa_ai_dsg_find(const CpaAiEnv *e, uint32_t so, uint32_t idx, uint32_t *varVa, uint32_t *typeIdx) {
    uint32_t model, data, arr, off, ty; uint8_t cnt;
    if (!dsg_model(e, so, &model, &data) || !cpa_ai_rd32(e, model + 4, &arr) || !rd8(e, model + 0xC, &cnt) || idx >= cnt) return 0;
    if (!cpa_ai_rd32(e, arr + 16 * idx, &off) || !cpa_ai_rd32(e, arr + 16 * idx + 4, &ty)) return 0;
    *varVa = data + off; *typeIdx = ty;
    return 1;
}
int cpa_ai_dsg_block(const CpaAiEnv *e, uint32_t so, uint32_t *start, uint32_t *size) {
    uint32_t model, data;
    if (!dsg_model(e, so, &model, &data) || !cpa_ai_rd32(e, model + 8, size)) return 0;
    *start = data;
    return 1;
}

static int unsup(CpaAiEnv *e, int type, uint32_t param) { e->unsupType = (uint32_t)type; e->unsupId = param; return CPA_AI_E_UNSUPPORTED; }

/* Storage location of design variable `idx` (array element `index` for the array wrapper types 18..23, f_8c07270e / f_8c0729a8). Type indexes are those of the
 * getter/setter table at guest 0x8C0C7740. Array storage: +0 element type index, +8 elements (4 bytes each, 12 for vectors); no bounds check in the guest. */
static int dsg_loc(const CpaAiEnv *e, uint32_t so, uint32_t idx, uint32_t index, uint32_t *va, uint32_t *t) {
    uint32_t v, ty;
    if (!cpa_ai_dsg_find(e, so, idx, &v, &ty)) return CPA_AI_E_MEM;
    if (ty >= 18 && ty <= 23) {
        uint32_t el;
        if (!cpa_ai_rd32(e, v, &el)) return CPA_AI_E_MEM;
        if (el >= 18) return el > 24 ? CPA_AI_E_MEM : CPA_AI_E_UNSUPPORTED;
        v = v + 8 + (el == 11 ? 12u : 4u) * (index & 0xFFu); ty = el;
    }
    *va = v; *t = ty;
    return 0;
}

static int get_at(const CpaAiEnv *e, uint32_t va, uint32_t t, CpaAiVal *o) {
    uint32_t v, p, q;
    memset(o, 0, sizeof *o);
    switch (t) {   /* getters: table entries at 0x8C0C7740 + 12*t, bodies f_8c07269a ... f_8c07264c */
    case 0: case 1: { uint8_t b; if (!rd8(e, va, &b)) return CPA_AI_E_MEM; o->w[0] = (uint32_t)(int32_t)(int8_t)b; o->tag = 6; return 0; }
    case 2: { uint8_t b; if (!rd8(e, va, &b)) return CPA_AI_E_MEM; o->w[0] = b; o->tag = 6; return 0; }
    case 3: { uint16_t h; if (!rd16(e, va, &h)) return CPA_AI_E_MEM; o->w[0] = (uint32_t)(int32_t)(int16_t)h; o->tag = 6; return 0; }
    case 4: { uint16_t h; if (!rd16(e, va, &h)) return CPA_AI_E_MEM; o->w[0] = h; o->tag = 6; return 0; }
    case 5: case 6: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 6; return 0;
    case 7: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 8; return 0;
    case 8: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0xA; return 0;
    case 9:   /* perso: variable holds a SuperObject*, value = its actor (SO+4) when SO type is 2 */
        if (!cpa_ai_rd32(e, va, &p)) return CPA_AI_E_MEM;
        q = 0;
        if (p) { if (!cpa_ai_rd32(e, p, &v)) return CPA_AI_E_MEM; if (v == 2 && !cpa_ai_rd32(e, p + 4, &q)) return CPA_AI_E_MEM; }
        o->w[0] = q; o->tag = 0xB; return 0;
    case 10: o->w[0] = va; o->tag = 0xC; return 0;
    case 11: for (int i = 0; i < 3; i++) if (!cpa_ai_rd32(e, va + 4u * i, &o->w[i])) return CPA_AI_E_MEM; o->tag = 0x15; return 0;
    case 12: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x22; return 0;
    case 13: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x18; return 0;
    case 14: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x24; return 0;   /* f_8c072678 */
    case 16: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x2B; return 0;   /* f_8c0725fe */
    case 17: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x2C; return 0;   /* f_8c07260a */
    case 24: if (!cpa_ai_rd32(e, va, &v)) return CPA_AI_E_MEM; o->w[0] = v; o->tag = 0x19; return 0;   /* f_8c0725cc */
    default: return CPA_AI_E_UNSUPPORTED;   /* 15 calls f_8c05a3e0; 18..23 handled by dsg_loc */
    }
}

static int32_t sat_trunc(float f) {   /* f_8c072282: float -> int, saturating (ftrc) */
    if (f != f) return (int32_t)0x80000001;   /* NaN: the comparison chain falls to the negative branch */
    if (f >= 2147483648.0f) return 0x7fffffff;
    if (f <= -2147483648.0f) return (int32_t)0x80000001;
    return (int32_t)f;
}
/* Setters (table 0x8C0C7744+4.. : f_8c072888 ...): the value record is read through f_8c072282 (a float-tagged value is converted to int, saturating) for the
 * integer types, f_8c072796 for float. Pointer-like types copy the word; vector copies 3 words; type 9 stores the SuperObject of the actor (f_8c0727ac). */
static int set_at(CpaAiEnv *e, uint32_t va, uint32_t t, const CpaAiVal *v) {
    uint32_t iv = v->tag == 8 ? (uint32_t)sat_trunc(u2f(v->w[0])) : v->w[0];
    uint32_t p, so;
    switch (t) {
    case 0: case 1: case 2: return wr8(e, va, iv) ? 0 : CPA_AI_E_MEM;
    case 3: case 4: return wr16(e, va, iv) ? 0 : CPA_AI_E_MEM;
    case 5: case 6: return wr(e, va, iv, 4) ? 0 : CPA_AI_E_MEM;
    case 7: { float f = v->tag == 8 ? u2f(v->w[0]) : (float)(int32_t)v->w[0]; return wr(e, va, f2u(f), 4) ? 0 : CPA_AI_E_MEM; }
    case 8: case 12: case 13: case 14: case 15: case 16: case 17: case 24: return wr(e, va, v->w[0], 4) ? 0 : CPA_AI_E_MEM;
    case 9:
        so = 0;
        if (v->w[0]) { if (!cpa_ai_rd32(e, v->w[0] + 4, &p) || !cpa_ai_rd32(e, p + 12, &so)) return CPA_AI_E_MEM; }
        return wr(e, va, so, 4) ? 0 : CPA_AI_E_MEM;
    case 11:
        if (v->tag != 0x15) return CPA_AI_E_UNSUPPORTED;   /* the guest would copy stale words of the out buffer */
        for (int i = 0; i < 3; i++) if (!wr(e, va + 4u * i, v->w[i], 4)) return CPA_AI_E_MEM;
        return 0;
    default: return CPA_AI_E_UNSUPPORTED;   /* 10 (clamped string copy), 18..23 (resolved by dsg_loc) */
    }
}

/* Read / write design variable idx (array element `index`) of the actor whose SuperObject is `so`. */
static int dsg_get(const CpaAiEnv *e, uint32_t so, uint32_t idx, uint32_t index, CpaAiVal *o) {
    uint32_t va, t; int r = dsg_loc(e, so, idx, index, &va, &t);
    if (r) return r;
    return get_at(e, va, t, o);
}
static int dsg_set(CpaAiEnv *e, uint32_t so, uint32_t idx, uint32_t index, const CpaAiVal *v) {
    uint32_t va, t; int r = dsg_loc(e, so, idx, index, &va, &t);
    if (r) return r;
    return set_at(e, va, t, v);
}
int cpa_ai_dsg_read(const CpaAiEnv *e, uint32_t so, uint32_t idx, CpaAiVal *o) { return dsg_get(e, so, idx, 0, o); }
int cpa_ai_dsg_write(CpaAiEnv *e, uint32_t so, uint32_t idx, const CpaAiVal *v) {
    uint32_t va, t; int r = dsg_loc(e, so, idx, 0, &va, &t);
    if (r) return r;
    if (t > 7) return CPA_AI_E_UNSUPPORTED;   /* public contract: scalar types 0..7 only */
    return set_at(e, va, t, v);
}

/* ---------------- nodes ---------------- */
static int node_hdr(const CpaAiEnv *e, uint32_t n, uint32_t *param, int *depth, int *type) {
    uint32_t w; uint8_t d, t;
    if (!cpa_ai_rd32(e, n, &w) || !rd8(e, n + 10, &d) || !rd8(e, n + 11, &t)) return 0;
    *param = w; *depth = (int8_t)d; *type = t;
    return 1;
}
uint32_t cpa_ai_skip(const CpaAiEnv *e, uint32_t node) {   /* f_8c072ff8 */
    uint32_t pr; int d, t, d2, t2; uint32_t p = node;
    if (!node_hdr(e, node, &pr, &d, &t)) return 0;
    for (;;) {
        p += NODE;
        if (!node_hdr(e, p, &pr, &d2, &t2)) return 0;
        if (!(d2 > d) || t2 == 8) return p;
    }
}

/* copy-u32-param node types: type -> value tag (classify_gpt_handler in tools/ai_ledger.py, VERIFIED from the lifted bodies) */
static int ref_tag(int type) {
    switch (type) {
    case 14: return 0x19; case 18: return 0x16; case 19: return 0x17; case 20: return 9; case 22: return 0x20; case 23: return 0xB; case 24: return 0x18;
    case 25: return 0x1E; case 26: return 0xA; case 27: return 0x24; case 28: return 0x22; case 29: return 0x16; case 30: return 0x21; case 31: return 0x1D;
    case 32: return 0x26; case 34: return 0x27; case 35: return 0x28; case 36: return 0x2A; case 37: return 0x2B; case 38: return 0x2C;
    }
    return 0;
}

int cpa_ai_supported(int type, uint32_t param) {
    switch (type) {
    case 11: case 12: case 13: case 16: case 17: case 8: return 1;
    case 0: return (param >= 11 && param <= 19) || param <= 5 || param == 8 || param == 9;
    case 1: return param <= 9 || (param >= 49 && param <= 53);
    case 3: return param == 0;
    case 2: return param <= 4 || (param >= 13 && param <= 15) || (param >= 5 && param <= 12) || (param >= 21 && param <= 23) || param == 26;
    case 4: return param == 69 || param == 70 || param == 71 || param == 88 || param == 174 || param == 175;
    default: return ref_tag(type) != 0;
    }
}

static float asf(const CpaAiVal *v) { return v->tag == 8 ? u2f(v->w[0]) : (float)(int32_t)v->w[0]; }

static int cond_compare(CpaAiEnv *e, uint32_t op, uint32_t first, CpaAiVal *out, uint32_t *next) {   /* f_8c028392 */
    CpaAiVal a, b; uint32_t n2; int r;
    if ((r = cpa_ai_eval(e, first, &a, &n2))) return r;
    if ((r = cpa_ai_eval(e, n2, &b, next))) return r;
    int res = 0;
    memset(out, 0, sizeof *out); out->tag = 6;
    if (a.tag == b.tag && a.tag == 0x15) {   /* vectors: only ==, != are defined; every other id yields 0 */
        int eq = u2f(a.w[0]) == u2f(b.w[0]) && u2f(a.w[1]) == u2f(b.w[1]) && u2f(a.w[2]) == u2f(b.w[2]);
        out->w[0] = op == 4 ? eq : op == 5 ? !eq : 0;
        return 0;
    }
    if (a.tag == b.tag && a.tag != 8) {   /* same non-float tag: signed integer compare of the raw word */
        int32_t x = (int32_t)a.w[0], y = (int32_t)b.w[0];
        switch (op) { case 4: res = x == y; break; case 5: res = x != y; break; case 6: res = !(x >= y); break; case 7: res = x > y; break;
                      case 8: res = !(x > y); break; case 9: res = x >= y; break; default: res = 0; }
    } else {    /* float compare, an int operand converted (tags differ, or both float) */
        float x = a.tag == 8 ? u2f(a.w[0]) : (float)(int32_t)a.w[0], y = b.tag == 8 ? u2f(b.w[0]) : (float)(int32_t)b.w[0];
        switch (op) { case 4: res = x == y; break; case 5: res = !(x == y); break; case 6: res = y > x; break; case 7: res = x > y; break;
                      case 8: res = !(x > y); break; case 9: res = !(y > x); break; default: res = 0; }
    }
    out->w[0] = (uint32_t)res;
    return 0;
}

static int op_arith(CpaAiEnv *e, uint32_t node, uint32_t op, CpaAiVal *out, uint32_t *next) {   /* f_8c06fc00 */
    CpaAiVal L, R; uint32_t c1 = node + NODE, n2 = 0; int r;
    memset(&L, 0, sizeof L); memset(&R, 0, sizeof R);
    if (op == 4) { L.tag = 6; n2 = c1; }               /* unary minus = 0 - x */
    else { if ((r = cpa_ai_eval(e, c1, &L, &n2))) return r; }
    if (op == 2 || op == 3) {                          /* left == 0 short-circuits: the right operand is skipped, result = left */
        if (asf(&L) == 0.0f) { *out = L; *next = cpa_ai_skip(e, n2); return *next ? 0 : CPA_AI_E_MEM; }
    }
    if ((r = cpa_ai_eval(e, n2, &R, next))) return r;
    int isf = L.tag == 8 || R.tag == 8;                 /* f_8c0722c2: promote the int side */
    memset(out, 0, sizeof *out);
    if (isf) {
        float a = asf(&L), b = asf(&R), x = 0;
        out->tag = 8;
        switch (op) {
        case 0: x = a + b; break;
        case 1: case 4: x = a - b; break;
        case 2: x = a * b; break;
        case 3: { float ab = b > 0.0f ? b : -b; if (!(ab > 1.17549435e-38f)) { out->tag = 6; out->w[0] = 0; return 0; } x = a / b; break; }
        }
        out->w[0] = f2u(x);
        return 0;
    }
    out->tag = 6;
    int32_t a = (int32_t)L.w[0], b = (int32_t)R.w[0];
    switch (op) {
    case 0: out->w[0] = (uint32_t)a + (uint32_t)b; break;
    case 1: case 4: out->w[0] = (uint32_t)a - (uint32_t)b; break;
    case 2: out->w[0] = (uint32_t)a * (uint32_t)b; break;
    case 3: out->w[0] = b == 0 ? 0 : (b == -1 ? (uint32_t)0 - (uint32_t)a : (uint32_t)(a / b)); break;   /* f_8c067940 signed truncating; b == 0 -> 0 */
    }
    return 0;
}

/* ---------------- statements ---------------- */
#define WCHK(x) do { if (!(x)) return e->wlogOverflow ? CPA_AI_E_LOG : CPA_AI_E_MEM; } while (0)
static uint8_t gbyte(const CpaAiEnv *e, uint32_t va) { uint8_t b = 0; if (va) rd8(e, va, &b); return b; }
static int ntype(const CpaAiEnv *e, uint32_t n) { uint32_t p; int d, t; return node_hdr(e, n, &p, &d, &t) ? t : -1; }
static int ndepth(const CpaAiEnv *e, uint32_t n) { uint32_t p; int d, t; return node_hdr(e, n, &p, &d, &t) ? d : 1000; }

/* f_8c0ac964 (shared by Else and the If family): the node after a subtree, cached as a u16 distance in 12-byte units at holder+8. `a` is the node whose first child
 * starts the skipped region: f_8c072fa2(a+12) walks forward from a+24 while depth >= depth(a+12) and the node is not a terminator. */
static int skip_cached(CpaAiEnv *e, uint32_t a, uint32_t holder, uint32_t *res) {
    uint16_t c16;
    if (!rd16(e, holder + 8, &c16)) return CPA_AI_E_MEM;
    if (c16) { *res = holder + (uint32_t)c16 * NODE; return 0; }
    uint32_t n = a + NODE, p = n + NODE; int thr = ndepth(e, n), d, t; uint32_t pr;
    if (thr == 1000) return CPA_AI_E_MEM;
    for (;;) {
        if (!node_hdr(e, p, &pr, &d, &t)) return CPA_AI_E_MEM;
        if (!(d >= thr) || t == 8) break;
        p += NODE;
    }
    WCHK(wr16(e, holder + 8, (uint32_t)(((int32_t)(p - holder)) / 12) & 0xFFFFu));
    *res = p;
    return 0;
}

static int kw_if(CpaAiEnv *e, uint32_t node, uint32_t param, CpaAiVal *out, uint32_t *next) {   /* f_8c0aca64, keyword slots 0..5 */
    uint32_t child = node + NODE, n14 = child; int r;
    if (!e->allowWrite) return unsup(e, 0, param);   /* writes the skip cache */
    if (param > 5) return unsup(e, 0, param);
    if (param == 0 || param == 1) {
        if ((r = cpa_ai_eval(e, child, out, &n14))) return r;
        if (param == 1) out->w[0] = out->w[0] == 0;
    } else {
        uint32_t mask = param == 2 ? 1 : param == 3 ? 3 : param == 4 ? 7 : 15;
        int8_t m = (int8_t)(mask & (uint32_t)gbyte(e, e->gFrameCtr));
        if (m == 0) { if ((r = cpa_ai_eval(e, child, out, &n14))) return r; }
        else { out->w[0] = 0; if ((r = skip_cached(e, node, child, &n14))) return r; }   /* condition skipped without evaluation */
    }
    if (out->w[0] != 0) *next = n14 + NODE;                          /* true: enter the Then body (the Then node itself is not executed) */
    else {
        uint32_t r14 = n14, p = 0;
        if (ntype(e, r14) != 8 && (r = skip_cached(e, r14, node, &r14))) return r;   /* false: skip the Then body */
        if (ndepth(e, r14) == ndepth(e, node) && ntype(e, r14) == 0 && cpa_ai_rd32(e, r14, &p) && p == 9) r14 += NODE;   /* Else: enter its body */
        *next = r14;
    }
    out->w[0] = 0; out->tag = 0x14;
    return 0;
}

/* perso expression -> SuperObject of that perso (f_8c06ff00): value is an actor pointer a, SO = *(*(a+4)+12) */
static int perso_resolve(CpaAiEnv *e, uint32_t node, uint32_t *so, uint32_t *next) {
    CpaAiVal v; uint32_t n2, sg, s; int r;
    if ((r = cpa_ai_eval(e, node, &v, &n2))) return r;
    if (!v.w[0] || !cpa_ai_rd32(e, v.w[0] + 4, &sg) || !cpa_ai_rd32(e, sg + 12, &s)) return CPA_AI_E_MEM;
    *so = s; *next = n2;
    return 0;
}

/* operator 12 read: perso . DsgVar (f_8c06ffec); operator 26 read: [perso .] DsgVar [ index ] (f_8c06ff98) */
static int op_dot_read(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    uint32_t so, n, p; int r, d, t;
    if ((r = perso_resolve(e, node + NODE, &so, &n))) return r;
    if (!node_hdr(e, n, &p, &d, &t)) return CPA_AI_E_MEM;
    if (t != 11) return unsup(e, 2, 12);   /* Field (9) and nested operator 25 are not decoded */
    if ((r = dsg_get(e, so, p & 0xFF, 0, out))) return r == CPA_AI_E_UNSUPPORTED ? unsup(e, 11, p) : r;
    *next = n + NODE;
    return 0;
}
static int op_array_read(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    uint32_t so = e->selfSo, n = node + NODE, p, pp; int r, d, t;
    if (!node_hdr(e, n, &p, &d, &t)) return CPA_AI_E_MEM;
    if (t == 2) {
        if (p != 12) return unsup(e, 2, 26);
        if ((r = perso_resolve(e, n + NODE, &so, &n))) return r;
    }
    if (!node_hdr(e, n, &p, &d, &t)) return CPA_AI_E_MEM;
    pp = p; n += NODE;
    CpaAiVal iv; uint32_t n2;
    if ((r = cpa_ai_eval(e, n, &iv, &n2))) return r;
    if ((r = dsg_get(e, so, pp & 0xFF, iv.w[0] & 0xFF, out))) return r == CPA_AI_E_UNSUPPORTED ? unsup(e, 11, pp) : r;
    *next = n2;
    return 0;
}

/* assignment family f_8c070182: ops 5 += , 6 -= , 7 *= , 8 /= , 9 ++ , 10 -- , 11 := , 21..23 .X:= .Y:= .Z:= . lhs shapes decoded: DsgVar, perso.DsgVar (op 12),
 * DsgVar[index] (op 26), each optionally wrapped in a component selector (ops 13..15) which is honoured for := only. Field targets (type 9), vector arithmetic
 * (ops 5..10 on a vector variable) and op 27 are reported unsupported. */
static int op_assign(CpaAiEnv *e, uint32_t node, uint32_t op, CpaAiVal *out, uint32_t *next) {
    uint32_t so = e->selfSo, c = node + NODE, p, varidx = 0xFF, index = 0, nxt = 0; int d, t, r, comp = 0, arr = 0;
    CpaAiVal B, LB;
    if (!e->allowWrite) return unsup(e, 2, op);
    if (!node_hdr(e, c, &p, &d, &t)) return CPA_AI_E_MEM;
    if (t == 2) {
        comp = p == 13 ? 1 : p == 14 ? 2 : p == 15 ? 3 : 0;
        if (comp) { c += NODE; if (!node_hdr(e, c, &p, &d, &t)) return CPA_AI_E_MEM; }
        if (t == 2) {
            if (p == 12) {
                if ((r = perso_resolve(e, c + NODE, &so, &c))) return r;
                if (!node_hdr(e, c, &p, &d, &t)) return CPA_AI_E_MEM;
            } else if (p == 26) {   /* f_8c070182 accepts any operator here; only the decoded array operator is accepted */
                CpaAiVal iv; uint32_t ni;
                c += NODE;
                if (!node_hdr(e, c, &p, &d, &t)) return CPA_AI_E_MEM;
                if (t == 2) { if (p != 12) return unsup(e, 2, op); if ((r = perso_resolve(e, c + NODE, &so, &c))) return r; if (!node_hdr(e, c, &p, &d, &t)) return CPA_AI_E_MEM; }
                if (t != 11) return unsup(e, 2, op);
                varidx = p & 0xFF; c += NODE;
                if ((r = cpa_ai_eval(e, c, &iv, &ni))) return r;
                index = (iv.tag == 8 ? (uint32_t)sat_trunc(u2f(iv.w[0])) : iv.w[0]) & 0xFF;
                c = ni; arr = 1;
            } else return unsup(e, 2, op);
        }
    }
    if (!arr) {
        if (t != 11) return unsup(e, 2, op);   /* Field (9) and other targets */
        varidx = p & 0xFF; c += NODE;
    }
    memset(&B, 0, sizeof B); memset(&LB, 0, sizeof LB);
    if (op == 11) {
        if (comp) {
            if ((r = dsg_get(e, so, varidx, index, out))) return r == CPA_AI_E_UNSUPPORTED ? unsup(e, 2, op) : r;
            if ((r = cpa_ai_eval(e, c, &B, &nxt))) return r;
            out->w[comp - 1] = f2u(asf(&B));
        } else if ((r = cpa_ai_eval(e, c, out, &nxt))) return r;
    } else {
        if ((op > 11 && op < 21) || op > 23) return unsup(e, 2, op);
        if ((r = dsg_get(e, so, varidx, index, &LB))) return r == CPA_AI_E_UNSUPPORTED ? unsup(e, 2, op) : r;
        if (op == 9 || op == 10) { if (comp) return unsup(e, 2, op); B.w[0] = 1; B.tag = 6; nxt = c; }
        else { if ((r = cpa_ai_eval(e, c, &B, &nxt))) return r; if (comp && op < 21) return unsup(e, 2, op); }
        if (LB.tag == 0x15) {
            if (op < 21 || B.tag == 0x15 || comp) return unsup(e, 2, op);   /* vector arithmetic (f_8c05e5f4 ...) not decoded */
            *out = LB; out->w[op - 21] = f2u(asf(&B)); out->tag = 0x15;
        } else {
            if (op >= 21) return unsup(e, 2, op);   /* guest writes int 0 back; not reproduced */
            if (B.tag == 0x15) { B.w[0] = 0; B.tag = 8; }
            int isf = LB.tag == 8 || B.tag == 8;   /* f_8c0722c2 */
            memset(out, 0, sizeof *out); out->tag = 6;
            if (isf) {
                float a = u2f(LB.w[0]), b = u2f(B.w[0]);
                if (LB.tag != 8) a = (float)(int32_t)LB.w[0];
                if (B.tag != 8) b = (float)(int32_t)B.w[0];
                switch (op) {
                case 5: case 9: out->w[0] = f2u(a + b); out->tag = 8; break;
                case 6: case 10: out->w[0] = f2u(a - b); out->tag = 8; break;
                case 7: out->w[0] = f2u(a * b); out->tag = 8; break;
                case 8: { float ab = b > 0.0f ? b : -b; if (ab > 1.17549435e-38f) { out->w[0] = f2u(a / b); out->tag = 8; } break; }
                }
            } else {
                int32_t a = (int32_t)LB.w[0], b = (int32_t)B.w[0];
                switch (op) {
                case 5: case 9: out->w[0] = (uint32_t)a + (uint32_t)b; break;
                case 6: case 10: out->w[0] = (uint32_t)a - (uint32_t)b; break;
                case 7: out->w[0] = (uint32_t)a * (uint32_t)b; break;
                case 8: out->w[0] = b == 0 ? 0 : (b == -1 ? (uint32_t)0 - (uint32_t)a : (uint32_t)(a / b)); break;
                }
            }
        }
    }
    if ((r = dsg_set(e, so, varidx, index, out))) return r == CPA_AI_E_UNSUPPORTED ? unsup(e, 2, op) : r;
    *next = nxt;
    out->w[0] = 0; out->tag = 0x14;
    return 0;
}

/* ---- procedures ---- */
static int mind_of(const CpaAiEnv *e, uint32_t so, uint32_t *mind) {   /* *(*(*(so+4)+12)) */
    uint32_t a, b;
    if (!cpa_ai_rd32(e, so + 4, &a) || !cpa_ai_rd32(e, a + 12, &b) || !cpa_ai_rd32(e, b, mind)) return 0;
    return 1;
}
/* f_8c0319be + f_8c0740ca + f_8c071c3c + f_8c0719e2: make `comport` the current comport of the behaviour instance `intel` (a no-op when it already is) */
static int set_comport(CpaAiEnv *e, uint32_t intel, uint32_t comport, uint32_t keep) {
    uint32_t cur, fr, arr, cp4, v;
    if (!cpa_ai_rd32(e, intel + 8, &cur)) return CPA_AI_E_MEM;
    if (cur == comport) return 0;
    WCHK(cpa_ai_wr32(e, intel + 12, cur)); WCHK(cpa_ai_wr32(e, intel + 8, comport));
    if (!cpa_ai_rd32(e, intel + 16, &fr)) return CPA_AI_E_MEM;
    WCHK(wr8(e, fr + 5, 0)); WCHK(wr8(e, fr + 6, 0));
    uint8_t cnt; if (!rd8(e, fr + 4, &cnt)) return CPA_AI_E_MEM;
    for (uint32_t i = 0; (int8_t)cnt > 0 && i < cnt; i++) {   /* frame i: f_8c0719e2(intel, i, 0, 0, 0) */
        if (!cpa_ai_rd32(e, fr, &arr)) return CPA_AI_E_MEM;
        uint32_t f = arr + i * 0x68u;
        WCHK(wr8(e, f + 0x66, gbyte(e, e->gStep1))); WCHK(wr8(e, f + 0x67, gbyte(e, e->gStep0))); WCHK(wr8(e, f + 0x64, 0));
        WCHK(cpa_ai_wr32(e, f + 0x60, 0)); WCHK(wr8(e, f + 0x65, 0));
        for (uint32_t k = 0; k < 0x60; k++) WCHK(wr8(e, f + k, 0));
    }
    if (!cpa_ai_rd32(e, comport + 4, &cp4)) return CPA_AI_E_MEM;
    v = 0; if (cp4 && !cpa_ai_rd32(e, cp4, &v)) return CPA_AI_E_MEM;
    WCHK(cpa_ai_wr32(e, intel + 4, v));
    if ((int8_t)keep == 0) { if (e->gCmpClr) WCHK(cpa_ai_wr32(e, e->gCmpClr, 0)); if (e->gFlag) WCHK(wr8(e, e->gFlag, 8)); }   /* f_8c072f52(8) */
    return 0;
}
static int32_t shad(int32_t v, int32_t sh) { return sh >= 0 ? (int32_t)((uint32_t)v << (sh & 31)) : ((sh & 31) == 0 ? (v >> 31) : (v >> ((~sh & 31) + 1))); }

static int do_proc(CpaAiEnv *e, uint32_t node, uint32_t id, uint32_t *next) {
    uint32_t c = node + NODE, mind, n2, so; CpaAiVal a, b; int r;
    switch (id) {
    case 69: case 70: {   /* f_8c031ae0 / f_8c031b18: ChangeMyComport / ChangeMyComportReflex (names INFERRED) */
        uint8_t m10; uint32_t inst;
        if (!mind_of(e, e->selfSo, &mind)) return CPA_AI_E_MEM;
        if ((r = cpa_ai_eval(e, c, &a, &n2))) return r;
        if (!rd8(e, mind + 0x10, &m10) || !cpa_ai_rd32(e, mind + (id == 69 ? 4u : 8u), &inst)) return CPA_AI_E_MEM;
        if ((r = set_comport(e, inst, a.w[0], id == 69 ? (m10 == 0) : m10))) return r;
        if (id == 69) { WCHK(cpa_ai_wr32(e, mind + 28, 0)); WCHK(cpa_ai_wr32(e, mind + 20, 0)); } else { WCHK(cpa_ai_wr32(e, mind + 32, 0)); WCHK(cpa_ai_wr32(e, mind + 24, 0)); }
        *next = n2; return 0; }
    case 71: {            /* f_8c031b4c: ChangeMyComportAndMyReflex(normal, reflex) */
        uint32_t n3, i1, i2;
        if (!mind_of(e, e->selfSo, &mind)) return CPA_AI_E_MEM;
        if ((r = cpa_ai_eval(e, c, &a, &n2))) return r;
        if ((r = cpa_ai_eval(e, n2, &b, &n3))) return r;
        if (!cpa_ai_rd32(e, mind + 4, &i1) || !cpa_ai_rd32(e, mind + 8, &i2)) return CPA_AI_E_MEM;
        if ((r = set_comport(e, i1, a.w[0], 0))) return r;
        if ((r = set_comport(e, i2, b.w[0], 0))) return r;
        WCHK(cpa_ai_wr32(e, mind + 28, 0)); WCHK(cpa_ai_wr32(e, mind + 20, 0)); WCHK(cpa_ai_wr32(e, mind + 32, 0)); WCHK(cpa_ai_wr32(e, mind + 24, 0));
        *next = n3; return 0; }
    case 88: {            /* group handler f_8c0301e0, id 88: arg -> single-step byte, step latch := 1 (the name SetActionReturn in the ledger is WEAK and contradicted by the code) */
        if ((r = cpa_ai_eval(e, c, &a, &n2))) return r;
        if (e->gStep0) WCHK(wr8(e, e->gStep0, a.w[0]));
        if (e->gStep1) WCHK(wr8(e, e->gStep1, 1));
        *next = n2; return 0; }
    case 174: case 175: { /* f_8c0296e0: ChangeOneCustomBit(bit, value) / ChangeCustomBits(mask, value) on the StandardGame custom-bit word (+0x20) of the target perso */
        uint32_t act, sg, bits, ov = 0, nb;
        so = e->selfSo;
        if (e->gOverride) { if (!cpa_ai_rd32(e, e->gOverride, &ov)) return CPA_AI_E_MEM; if (ov) { so = ov; WCHK(cpa_ai_wr32(e, e->gOverride, 0)); } }
        if (!cpa_ai_rd32(e, so + 4, &act) || !cpa_ai_rd32(e, act + 4, &sg) || !cpa_ai_rd32(e, sg + 32, &bits)) return CPA_AI_E_MEM;
        if ((r = cpa_ai_eval(e, c, &a, &n2))) return r;
        if ((r = cpa_ai_eval(e, n2, &b, &nb))) return r;
        if (id == 174) { uint32_t m = (uint32_t)shad(1, (int32_t)a.w[0] - 1); bits = b.w[0] ? (bits | m) : (bits & ~m); }
        else { uint32_t m = a.w[0]; bits = (bits & ~m) | (b.w[0] & m); }
        WCHK(cpa_ai_wr32(e, sg + 32, bits));
        *next = nb; return 0; }
    }
    return unsup(e, 4, id);
}

/* statement runner f_8c073266 (+ f_8c07320a single-step filter) */
int cpa_ai_run(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    if (!e->allowWrite) return unsup(e, 100, 0);
    for (int guard = 0; guard < 1000000; guard++) {
        int d = ndepth(e, node), r; uint32_t nx, flags;
        if (d == 1000) return CPA_AI_E_MEM;
        if ((r = cpa_ai_eval(e, node, out, &nx))) return r;
        flags = out->w[0];
        /* f_8c07320a(out, next, depth) */
        if (!e->gStep0 || (gbyte(e, e->gStep0) & 0x20) == 0x20) { /* returns flags unchanged */ }
        else if (gbyte(e, e->gStep1) == 0) {
            if ((flags & 4) != 4 || ndepth(e, nx) == d) flags = (flags & 0x1C) | (uint32_t)(int32_t)(int8_t)gbyte(e, e->gStep0);
            WCHK(wr8(e, e->gStep0, 0x20)); WCHK(wr8(e, e->gStep1, 1));
        } else WCHK(wr8(e, e->gStep1, 0));
        uint32_t f = flags & 0xFF;
        if (f & 0x18) { out->w[0] = f; out->tag = 0x14; *next = nx; return 0; }
        if (f & 4) return unsup(e, 100, f);   /* f_8c071aa6 frame bookkeeping not decoded */
        if (f & 1) return unsup(e, 100, f);   /* f_8c071ae2 */
        if (ntype(e, nx) == 8) f = 0x10;
        else if (!(f & 2)) {
            if (gbyte(e, e->gTrack)) { uint32_t fr; if (!cpa_ai_rd32(e, e->gFrame, &fr)) return CPA_AI_E_MEM; WCHK(cpa_ai_wr32(e, fr + 4, nx)); }
            node = nx; continue;
        }
        out->w[0] = f & 0xFF; out->tag = 0x14; *next = nx; return 0;
    }
    return CPA_AI_E_DEPTH;
}

static int eval_impl(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    uint32_t param; int depth, type, r;
    static int rec;
    if (!node_hdr(e, node, &param, &depth, &type)) return CPA_AI_E_MEM;
    if (rec > 200) return CPA_AI_E_DEPTH;
    if (!(type == 0 && param == 9)) memset(out, 0, sizeof *out);   /* Else (f_8c0ac9e6) leaves the out record untouched */
    switch (type) {
    case 8: out->w[0] = 0x10; out->tag = 0x14; *next = node; return 0;                              /* ScriptEnd: f_8c072dcc, does not advance */
    case 4: {                                                                                        /* Procedure dispatcher f_8c072f5e */
        uint32_t nx = 0;
        if (!e->allowWrite || !cpa_ai_supported(4, param)) return unsup(e, 4, param);
        if (e->gFlag) WCHK(wr8(e, e->gFlag, 0));
        rec++; r = do_proc(e, node, param, &nx); rec--;
        if (r) return r;
        memset(out, 0, sizeof *out);
        out->w[0] = (uint32_t)gbyte(e, e->gFlag) & 0xFFFFFFFBu; out->tag = 0x14; *next = nx; return 0; }
    case 12: out->w[0] = param; out->tag = 6; *next = node + NODE; return 0;                       /* Constant: f_8c072c2c */
    case 13: out->w[0] = param; out->tag = 8; *next = node + NODE; return 0;                       /* Real: f_8c072c80 */
    case 17: out->w[0] = param & 0xFFFFu; out->tag = 0x1A; *next = node + NODE; return 0;          /* Mask: f_8c072d92 (u16 param) */
    case 11:                                                                                         /* DsgVarRef: f_8c072c00 */
        if ((r = cpa_ai_dsg_read(e, e->selfSo, param & 0xFF, out))) { if (r == CPA_AI_E_UNSUPPORTED) return unsup(e, 11, param); return r; }
        *next = node + NODE; return 0;
    case 16: {                                                                                       /* Vector: f_8c072c8e, three children converted to float */
        uint32_t c = node + NODE, n2; CpaAiVal v;
        for (int i = 0; i < 3; i++) {
            rec++; r = cpa_ai_eval(e, c, &v, &n2); rec--;
            if (r) return r;
            out->w[i] = f2u(asf(&v)); c = n2;
        }
        out->tag = 0x15; *next = c; return 0; }
    case 0:                                                                                          /* KeyWord values: handlers 0x8C0AC8E0..0x8C0AC958 */
        if (!cpa_ai_supported(0, param)) return unsup(e, 0, param);
        if (param <= 5) { rec++; r = kw_if(e, node, param, out, next); rec--; return r; }
        if (param == 8) {   /* Then: tail call of the runner on the body */
            rec++; r = cpa_ai_run(e, node + NODE, out, next); rec--; return r;
        }
        if (param == 9) {   /* Else reached by fall-through: skip its body (f_8c0ac9e6 -> f_8c0ac964(node, node)) */
            if (!e->allowWrite) return unsup(e, 0, param);
            return skip_cached(e, node, node, next);
        }
        *next = node + NODE;
        switch (param) {
        case 11: { uint32_t t = 0, a = 0; if (cpa_ai_rd32(e, e->selfSo, &t) && t == 2) cpa_ai_rd32(e, e->selfSo + 4, &a); out->w[0] = (t == 2) ? a : 0; out->tag = 0xB; return 0; }   /* Me */
        case 12: { uint32_t so = 0, t = 0, a = 0; if (e->mainActorPtrVa) cpa_ai_rd32(e, e->mainActorPtrVa, &so);
                   if (so && cpa_ai_rd32(e, so, &t) && t == 2) cpa_ai_rd32(e, so + 4, &a);
                   out->w[0] = (so && t == 2) ? a : 0; out->tag = 0xB; return 0; }                                                              /* MainActor */
        case 13: out->w[0] = 0; out->tag = 0xB; return 0;
        case 14: out->w[0] = 0; out->tag = 0x19; return 0;
        case 15: out->w[0] = 0; out->tag = 0xA; return 0;
        case 16: out->w[0] = 0xFFFFFFFFu; out->tag = 0x24; return 0;
        case 17: out->w[0] = 0; out->tag = 0x2B; return 0;
        case 18: out->w[0] = 0; out->tag = 0x2C; return 0;
        case 19: out->w[0] = 0; out->tag = 0x18; return 0;
        }
        return unsup(e, 0, param);
    case 1: {                                                                                        /* Condition 0..9 */
        uint32_t c = node + NODE, n2; CpaAiVal a, b;
        if (param >= 4 && param <= 9) { rec++; r = cond_compare(e, param, c, out, next); rec--; return r; }
        if (param >= 49 && param <= 53) {   /* f_8c028f58: one child; 49 object valid, 50..52 non-null, 53 != -1 */
            rec++; r = cpa_ai_eval(e, c, &a, next); rec--;
            if (r) return r;
            out->tag = 6;
            if (param == 53) out->w[0] = a.w[0] != 0xFFFFFFFFu;   /* f_8c028f94: T = (v == -1), then xor 1 */
            else if (param != 49) out->w[0] = a.w[0] != 0;
            else {   /* v != 0 && *(v+4) != 0 && !(byte[*(v+4)+0x25] & 1) */
                uint32_t y = 0; uint8_t fl = 0; out->w[0] = 0;
                if (a.w[0]) {
                    if (!cpa_ai_rd32(e, a.w[0] + 4, &y)) return CPA_AI_E_MEM;
                    if (y) { if (!rd8(e, y + 0x25, &fl)) return CPA_AI_E_MEM; out->w[0] = !(fl & 1); }
                }
            }
            return 0;
        }
        if (param > 3) return unsup(e, 1, param);
        rec++;
        r = cpa_ai_eval(e, c, &a, &n2);
        if (r) { rec--; return r; }
        out->tag = 6;
        if (param == 2) { out->w[0] = a.w[0] == 0; *next = n2; rec--; return 0; }                    /* Not */
        if ((param == 0 && a.w[0] == 0) || (param == 1 && a.w[0] != 0)) {   /* And / Or short-circuit: f_8c028580 skips the right operand through a u16 cache at n2+8 (f_8c02854c) */
            uint16_t c16; rec--;
            if (!e->allowWrite) return unsup(e, 1, param);
            out->w[0] = param == 1;
            if (!rd16(e, n2 + 8, &c16)) return CPA_AI_E_MEM;
            if (c16) { *next = n2 + (uint32_t)c16 * NODE; return 0; }
            { uint32_t pr, p = n2; int d0 = ndepth(e, n2), d, t; uint32_t cnt = 1;
              for (;;) { p += NODE; if (!node_hdr(e, p, &pr, &d, &t)) return CPA_AI_E_MEM; if (!(d >= d0) || t == 8) break; cnt++; }
              WCHK(wr16(e, n2 + 8, cnt)); *next = p; }
            return 0;
        }
        r = cpa_ai_eval(e, n2, &b, next);
        rec--;
        if (r) return r;
        out->w[0] = param == 3 ? ((a.w[0] ^ b.w[0]) != 0) : (b.w[0] != 0);   /* dispatcher f_8c072eae normalises every condition result to 0/1 */
        return 0; }
    case 3:                                                                                          /* Function 0: position of the running perso, f_8c06bea0 */
        if (param == 0) {
            uint32_t m, o;
            if (!cpa_ai_rd32(e, e->selfSo + 36, &m)) return CPA_AI_E_MEM;
            for (int i = 0; i < 3; i++) { if (!cpa_ai_rd32(e, m + 0x58 + 4u * i, &o)) return CPA_AI_E_MEM; out->w[i] = o; }
            out->tag = 0x15; *next = node + NODE; return 0;
        }
        return unsup(e, 3, param);
    case 2:                                                                                          /* Operator */
        if (param <= 4) { rec++; r = op_arith(e, node, param, out, next); rec--; return r; }
        if (param >= 13 && param <= 15) {                                                            /* .X .Y .Z: f_8c070076 */
            CpaAiVal v; rec++; r = cpa_ai_eval(e, node + NODE, &v, next); rec--;
            if (r) return r;
            *out = v;
            if (v.tag == 0x15) { out->w[0] = v.w[param - 13]; out->w[1] = out->w[2] = 0; out->tag = 8; }
            return 0;
        }
        if (param == 12) { rec++; r = op_dot_read(e, node, out, next); rec--; return r; }
        if (param == 26) { rec++; r = op_array_read(e, node, out, next); rec--; return r; }
        if ((param >= 5 && param <= 11) || (param >= 21 && param <= 23)) { rec++; r = op_assign(e, node, param, out, next); rec--; return r; }
        return unsup(e, 2, param);
    default:
        if (ref_tag(type)) { out->w[0] = param; out->tag = (uint32_t)ref_tag(type); *next = node + NODE; return 0; }
        return unsup(e, type, param);
    }
}

int cpa_ai_eval(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    int r = eval_impl(e, node, out, next);
    if (!r && e->wlogOverflow) r = CPA_AI_E_LOG;
    return r;
}
