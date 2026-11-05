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
int cpa_ai_wr32(CpaAiEnv *e, uint32_t va, uint32_t v) {
    uint8_t *p = ptr(e, va, 4);
    if (!p || (va & 3)) return 0;
    p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24);
    return 1;
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

int cpa_ai_dsg_read(const CpaAiEnv *e, uint32_t so, uint32_t idx, CpaAiVal *o) {
    uint32_t va, t, v, p, q;
    if (!cpa_ai_dsg_find(e, so, idx, &va, &t)) return CPA_AI_E_MEM;
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
    default: return CPA_AI_E_UNSUPPORTED;
    }
}

static int32_t sat_trunc(float f) {   /* f_8c072282: float -> int, saturating (ftrc) */
    if (f != f) return (int32_t)0x80000001;   /* NaN: the comparison chain falls to the negative branch */
    if (f >= 2147483648.0f) return 0x7fffffff;
    if (f <= -2147483648.0f) return (int32_t)0x80000001;
    return (int32_t)f;
}
int cpa_ai_dsg_write(CpaAiEnv *e, uint32_t so, uint32_t idx, const CpaAiVal *v) {
    uint32_t va, t;
    if (!cpa_ai_dsg_find(e, so, idx, &va, &t)) return CPA_AI_E_MEM;
    if (t > 7) return CPA_AI_E_UNSUPPORTED;
    uint8_t *p = ptr(e, va, t == 7 || t == 5 || t == 6 ? 4 : (t >= 3 ? 2 : 1));
    if (!p) return CPA_AI_E_MEM;
    if (t == 7) {   /* setter f_8c072796: float variable takes a float, or an int converted to float */
        float f = v->tag == 8 ? u2f(v->w[0]) : (float)(int32_t)v->w[0];
        uint32_t u = f2u(f); p[0] = (uint8_t)u; p[1] = (uint8_t)(u >> 8); p[2] = (uint8_t)(u >> 16); p[3] = (uint8_t)(u >> 24);
        return 0;
    }
    uint32_t iv = v->tag == 8 ? (uint32_t)sat_trunc(u2f(v->w[0])) : v->w[0];   /* f_8c072282 then plain store */
    if (t <= 2) p[0] = (uint8_t)iv;
    else if (t <= 4) { p[0] = (uint8_t)iv; p[1] = (uint8_t)(iv >> 8); }
    else { p[0] = (uint8_t)iv; p[1] = (uint8_t)(iv >> 8); p[2] = (uint8_t)(iv >> 16); p[3] = (uint8_t)(iv >> 24); }
    return 0;
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
    case 11: case 12: case 13: case 16: case 17: return 1;
    case 0: return param >= 11 && param <= 19;
    case 1: return param <= 9 || (param >= 49 && param <= 53);
    case 3: return param == 0;
    case 2: return param <= 4 || (param >= 13 && param <= 15) || param == 11;
    default: return ref_tag(type) != 0;
    }
}

static float asf(const CpaAiVal *v) { return v->tag == 8 ? u2f(v->w[0]) : (float)(int32_t)v->w[0]; }

static int unsup(CpaAiEnv *e, int type, uint32_t param) { e->unsupType = (uint32_t)type; e->unsupId = param; return CPA_AI_E_UNSUPPORTED; }

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

int cpa_ai_eval(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next) {
    uint32_t param; int depth, type, r;
    static int rec;
    if (!node_hdr(e, node, &param, &depth, &type)) return CPA_AI_E_MEM;
    if (rec > 200) return CPA_AI_E_DEPTH;
    memset(out, 0, sizeof *out);
    switch (type) {
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
        if (param >= 49 && param <= 53) {   /* f_8c028f58: one child; 49 object valid, 50..52 non-null, 53 == -1 */
            rec++; r = cpa_ai_eval(e, c, &a, next); rec--;
            if (r) return r;
            out->tag = 6;
            if (param == 53) out->w[0] = a.w[0] == 0xFFFFFFFFu;
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
        if (param == 0 && a.w[0] == 0) { out->w[0] = 0; *next = cpa_ai_skip(e, n2); rec--; return *next ? 0 : CPA_AI_E_MEM; }   /* And short-circuit */
        if (param == 1 && a.w[0] != 0) { out->w[0] = 1; *next = cpa_ai_skip(e, n2); rec--; return *next ? 0 : CPA_AI_E_MEM; }   /* Or short-circuit */
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
        if (param == 11 && e->allowWrite) {                                                          /* Affect with a DsgVar on the left, scalar types only */
            uint32_t lp, ln; int ld, lt; CpaAiVal v;
            if (!node_hdr(e, node + NODE, &lp, &ld, &lt) || lt != 11) return unsup(e, 2, param);
            ln = node + 2 * NODE;
            rec++; r = cpa_ai_eval(e, ln, &v, next); rec--;
            if (r) return r;
            r = cpa_ai_dsg_write(e, e->selfSo, lp & 0xFF, &v);
            if (r == CPA_AI_E_UNSUPPORTED) return unsup(e, 2, param);
            if (r) return r;
            out->tag = CPA_AI_TAG_VOID;   /* statement: value not used (INFERRED) */
            return 0;
        }
        return unsup(e, 2, param);
    default:
        if (ref_tag(type)) { out->w[0] = param; out->tag = (uint32_t)ref_tag(type); *next = node + NODE; return 0; }
        return unsup(e, type, param);
    }
}
