/* cpa_light: see cpa_light.h for the model, evidence tags and limits. */
#include "cpa_light.h"
#include <math.h>
#include <string.h>

static uint8_t clamp_byte(float f) {          /* guest: ftrc (toward zero), then > 255 -> 255, < 0 -> 0 */
    int32_t i = (f >= 2147483520.0f) ? 0x7FFFFFFF : (f <= -2147483520.0f) ? (int32_t)0x80000000 : (int32_t)f;
    return i > 255 ? 255 : i < 0 ? 0 : (uint8_t)i;
}

int cpa_light_mat_read(const CpaImage *im, uint32_t vm, CpaLightMat *m) {
    memset(m, 0, sizeof *m); m->vm = vm;
    if (!cpa_is_ptr(im, vm) || !cpa_ptr(im, vm, 0x50) || !cpa_rd32(im, vm, &m->flags)) return 0;
    for (int i = 0; i < 4; i++) { m->amb[i] = cpa_f32(im, vm + 8 + 4u * i); m->dif[i] = cpa_f32(im, vm + 0x18 + 4u * i); }
    cpa_rd32(im, vm + 0x4C, &m->tex);
    if (m->tex && cpa_is_ptr(im, m->tex)) { uint32_t f = 0; if (cpa_rd32(im, m->tex + 4, &f)) m->texFlags = f & 0x7FFFFFFFu; }
    m->valid = 1; return 1;
}

void cpa_light_actor_alpha(const CpaImage *im, uint32_t so, float sceneAlpha, CpaLightEnv *e) {
    uint32_t d = cpa_u32(im, so + 4), d2 = cpa_is_ptr(im, d) ? cpa_u32(im, d + 4) : 0, F = cpa_is_ptr(im, d2) ? cpa_u32(im, d2 + 32) : 0;
    float x = 0.0f; int tr = 0;
    if (F & 0x200000u) { x = sceneAlpha * cpa_f32(im, so + 0x38); tr = 1; }
    else if (!(cpa_u32(im, so + 44) & 8u)) { x = cpa_f32(im, so + 0x38); tr = 1; }
    if (!tr) return;
    x *= 0.003921568393707275f;                                   /* 1/255 as the float constant at 0x8C038948 */
    e->objAlpha = x > 1.0f ? 1.0f : x < 0.0f ? 0.0f : x;
    e->drawFlags &= ~8u;
}

float cpa_light_dist_alpha(float fr5, float D, float E, float k) {
    if (D == 0.0f) return 1.0f;
    if (fr5 > D) return 0.0f;
    if (!(fr5 > D - E)) return 1.0f;
    return 1.0f - (fr5 - D + E) * k;
}

void cpa_light_env_default(CpaLightEnv *e) { memset(e, 0, sizeof *e); e->objAlpha = 1.0f; e->drawFlags = 0xFFFFFFFFu; }

/* f_8c038abe + the packer family (f_8c07dc28 / f_8c07d948 ...). Float operations in the guest's order; fmac is fused (the host oracle uses fmaf). */
uint32_t cpa_light_argb(const CpaLightMat *m, const CpaLightEnv *e, const float v[4]) {
    uint32_t S = m->flags & e->drawFlags;
    float fr15 = (S & 8) ? 1.0f : (e->objAlpha > 0.98f ? 0.5f : e->objAlpha * 0.5f);
    if ((m->texFlags & 0x20) && (S & 0x4000000u)) {                       /* additive texture, "constant colour" branch: every channel = fr15 * 510 */
        uint8_t b = clamp_byte(fr15 * 510.0f);
        return CPA_ARGB(b, b, b, b);
    }
    float a[4], d[4], A[4], D[4]; uint8_t o[4];
    for (int c = 0; c < 3; c++) { a[c] = fmaf(m->dif[c], e->G[c], m->amb[c]); d[c] = m->dif[c] + e->brightness; }
    if (S & 8) { a[3] = 1.0f; d[3] = 0.0f; }
    else if (S & 0x4000000u) { a[3] = fr15; d[3] = 0.0f; }
    else { a[3] = fmaf(m->dif[3], e->G[3], m->amb[3]); d[3] = m->dif[3]; }
    for (int c = 0; c < 4; c++) { A[c] = a[c] * 510.0f; D[c] = d[c] * 510.0f; o[c] = clamp_byte(fmaf(D[c], v[c], A[c])); }
    return CPA_ARGB(o[3], o[0], o[1], o[2]);
}

uint32_t cpa_light_rli(const CpaImage *im, uint32_t ipoVa, uint32_t *count) {
    uint32_t rli = 0, info = 0, n = 0, data = 0;
    if (count) *count = 0;
    if (!cpa_is_ptr(im, ipoVa) || !cpa_rd32(im, ipoVa + 4, &rli) || !cpa_is_ptr(im, rli) || !cpa_rd32(im, rli + 4, &info) || !cpa_is_ptr(im, info) ||
        !cpa_rd32(im, info, &n) || !cpa_rd32(im, info + 4, &data) || n == 0 || n > 65535 || !cpa_ptr(im, data, (size_t)n * 8)) return 0;
    if (count) *count = n;
    return data;
}

int cpa_light_rli_entry(const CpaImage *im, uint32_t dataVa, uint32_t i, int16_t raw[4], float v[4]) {
    for (int k = 0; k < 4; k++) {
        uint16_t u; if (!cpa_rd16(im, dataVa + 8u * i + 2u * k, &u)) return 0;
        raw[k] = (int16_t)u; v[k] = (float)raw[k] * 0.00390625f;
    }
    return 1;
}

int cpa_light_read(const CpaImage *im, uint32_t va, CpaLight *L) {
    memset(L, 0, sizeof *L); L->va = va;
    uint32_t t; uint8_t b;
    if (!cpa_is_ptr(im, va) || !cpa_ptr(im, va, 0xA4) || !cpa_rd32(im, va + 4, &t) || t < 1 || t > 5) return 0;
    L->type = (int32_t)t;
    cpa_rd8(im, va + 0x9C, &b); L->enabled = b; cpa_rd8(im, va + 0x9F, &b); L->chanMode = b;
    for (int j = 0; j < 3; j++) { L->axis[j] = cpa_f32(im, va + 0x28 + 4u * (3 * j + 2)); L->pos[j] = cpa_f32(im, va + 0x7C + 4u * j); }   /* column 2 of the row-major 3x3 */
    for (int j = 0; j < 4; j++) L->col[j] = cpa_f32(im, va + 0x8C + 4u * j);
    L->param[0] = cpa_f32(im, va + 8); L->param[1] = cpa_f32(im, va + 0xC);
    cpa_rd8(im, va + 0x9E, &b); L->noFalloff = b;
    return 1;
}

uint32_t cpa_light_read_ram_list(const CpaImage *ram, CpaLight *out, uint32_t max) {
    uint32_t n = 0;
    for (uint32_t i = 0; i < max && i < 64; i++) {
        uint32_t p = cpa_u32(ram, 0x8C2DD4B4u + 4u * i);
        if (!cpa_is_ptr(ram, p)) break;
        int dup = 0; for (uint32_t k = 0; k < n; k++) if (out[k].va == p) dup = 1;      /* the pointer array keeps stale re-pushes of the same light: count each light once */
        if (!dup && cpa_light_read(ram, p, &out[n])) n++;
    }
    return n;
}

static void add_ambient(const CpaLight *L, float G[4]) {
    if (L->chanMode == 1) G[3] += L->col[3];
    else { for (int c = 0; c < 3; c++) G[c] += L->col[c]; if (L->chanMode == 0) G[3] += L->col[3]; }
}

int cpa_light_accum(const CpaLight *L, const float nW[3], float v[4], CpaLightEnv *env) {
    (void)env;
    if (!L->enabled) return 1;
    if (L->type == CPA_LIGHT_AMBIENT) return 1;                            /* object-wide: cpa_light_env_from_list */
    if (L->type == CPA_LIGHT_PARALLEL) {
        float d = -(nW[0] * L->axis[0] + nW[1] * L->axis[1] + nW[2] * L->axis[2]);
        if (d > 0.0f) {                                                   /* guest: contribution only when the dot product has its sign bit set (i.e. the surface faces the light) */
            if (L->chanMode == 1) v[3] += d * L->col[3];
            else { for (int c = 0; c < 3; c++) v[c] += d * L->col[c]; if (L->chanMode == 0) v[3] += d * L->col[3]; }
        }
        return 1;
    }
    return 0;
}

void cpa_light_obj_init(CpaLightObj *o, const float W[16]) {
    memcpy(o->W, W, sizeof o->W); o->ok = 0; o->scale = 1.0f;
    const float *m = W;      /* row-major 3x3 at [0..2],[4..6],[8..10] */
    double a = m[0], b = m[1], c = m[2], d = m[4], e = m[5], f = m[6], g = m[8], h = m[9], i = m[10];
    double det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    memset(o->inv3, 0, sizeof o->inv3); o->inv3[0] = o->inv3[4] = o->inv3[8] = 1.0f;
    { double r1 = m[4]*m[4] + m[5]*m[5] + m[6]*m[6], r2 = m[8]*m[8] + m[9]*m[9] + m[10]*m[10], r0 = a*a + b*b + c*c; double mx = r0 > r1 ? r0 : r1; if (r2 > mx) mx = r2; o->scale = (float)sqrt(mx); }
    if (fabs(det) < 1e-12) return;
    double id = 1.0 / det;
    o->inv3[0] = (float)((e * i - f * h) * id); o->inv3[1] = (float)((c * h - b * i) * id); o->inv3[2] = (float)((b * f - c * e) * id);
    o->inv3[3] = (float)((f * g - d * i) * id); o->inv3[4] = (float)((a * i - c * g) * id); o->inv3[5] = (float)((c * d - a * f) * id);
    o->inv3[6] = (float)((d * h - e * g) * id); o->inv3[7] = (float)((b * g - a * h) * id); o->inv3[8] = (float)((a * e - b * d) * id);
    o->ok = 1;
}

void cpa_light_obj_sphere(CpaLightObj *o, const CpaImage *im, uint32_t geo) {
    float r = cpa_f32(im, geo + 0x34), p[3];
    o->cull = 0; if (!(r != 0.0f)) return;
    for (int a = 0; a < 3; a++) p[a] = cpa_f32(im, geo + 0x38 + 4u * a);
    for (int a = 0; a < 3; a++) o->cW[a] = p[0] * o->W[a] + p[1] * o->W[4 + a] + p[2] * o->W[8 + a] + o->W[12 + a];
    o->rW = r * o->scale; o->cull = 1;
}

static void add_chan(const CpaLight *L, float s, float v[4]) {
    if (L->chanMode == 1) v[3] += s * L->col[3];
    else { for (int c = 0; c < 3; c++) v[c] += s * L->col[c]; if (L->chanMode == 0) v[3] += s * L->col[3]; }
}

int cpa_light_accum_vertex(const CpaLight *L, uint32_t n, const CpaLightObj *o, const float pLocal[3], const float pWorld[3], const float nLocal[3], float v[4]) {
    int unported = 0;
    for (uint32_t i = 0; i < n; i++) {
        const CpaLight *l = &L[i];
        if (!l->enabled) continue;
        if (l->type == CPA_LIGHT_AMBIENT) continue;
        if (l->type == CPA_LIGHT_PARALLEL) {
            /* f_8c07be60 arithmetic (fma order of the guest): a = axis through the object 3x3 with unit rows (INFERRED: row-normalised fits 96.8% vs 92.6% unnormalised / 93.9% single scale on Learn_10;
             * the guest's matrix product is object-matrix x gbr+72 matrix, the latter not modelled), sd = n_local . a, v -= sd * col only when the sign bit of sd is set. */
            float Wn[12]; const float *W = o->W, *x = l->axis;
            for (int r = 0; r < 3; r++) { float ln = sqrtf(W[4*r]*W[4*r] + W[4*r+1]*W[4*r+1] + W[4*r+2]*W[4*r+2]); if (ln < 1e-6f || fabsf(ln - 1.0f) < 2e-4f) ln = 1.0f; for (int k = 0; k < 3; k++) Wn[4*r+k] = W[4*r+k] / ln; }
            float ax = fmaf(x[2], Wn[2], fmaf(x[0], Wn[0], Wn[1] * x[1])), ay = fmaf(x[2], Wn[6], fmaf(x[0], Wn[4], Wn[5] * x[1])), az = fmaf(x[2], Wn[10], fmaf(x[0], Wn[8], Wn[9] * x[1]));
            float sd = fmaf(nLocal[2], az, fmaf(nLocal[1], ay, nLocal[0] * ax));
            if (signbit(sd)) { if (l->chanMode == 1) v[3] -= sd * l->col[3]; else { for (int c = 0; c < 3; c++) v[c] -= sd * l->col[c]; if (l->chanMode == 0) v[3] -= sd * l->col[3]; } }
            continue; }
        if (l->type != CPA_LIGHT_OMNI) { unported++; continue; }
        if (o->cull) { float e[3] = { l->pos[0] - o->cW[0], l->pos[1] - o->cW[1], l->pos[2] - o->cW[2] };
            if (sqrtf(e[0] * e[0] + e[1] * e[1] + e[2] * e[2]) - o->rW > l->param[0]) continue; }
        float dw[3] = { l->pos[0] - pWorld[0], l->pos[1] - pWorld[1], l->pos[2] - pWorld[2] };
        float d2 = dw[0] * dw[0] + dw[1] * dw[1] + dw[2] * dw[2], oo = l->param[0] * l->param[0], cc = l->param[1] * l->param[1], at;
        if (!(oo > d2)) continue;
        if (l->noFalloff) {
            if (cc > d2) at = (d2 == 0.0f) ? 1.0f : o->scale;
            else at = (oo - d2) / (oo - cc) * o->scale;
        } else {
            float t[3] = { l->pos[0] - o->W[12], l->pos[1] - o->W[13], l->pos[2] - o->W[14] }, ll[3], d[3];
            for (int a = 0; a < 3; a++) ll[a] = t[0] * o->inv3[a] + t[1] * o->inv3[3 + a] + t[2] * o->inv3[6 + a];
            for (int a = 0; a < 3; a++) d[a] = pLocal[a] - ll[a];
            float dn = d[0] * nLocal[0] + d[1] * nLocal[1] + d[2] * nLocal[2];
            if (cc > d2 && d2 == 0.0f) at = 1.0f;
            else {
                if (!(dn < 0.0f)) continue;
                at = -dn * o->scale / sqrtf(d2);
                if (!(cc > d2)) at *= (oo - d2) / (oo - cc);
            }
        }
        add_chan(l, at, v);
    }
    return unported;
}

static uint32_t push_unique(const CpaImage *im, CpaLight *out, uint32_t n, uint32_t max, uint32_t lightVa) {
    if (n >= max) return n;
    for (uint32_t k = 0; k < n; k++) if (out[k].va == lightVa) return n;
    return cpa_light_read(im, lightVa, &out[n]) ? n + 1 : n;
}
static uint32_t push_chain(const CpaImage *im, CpaLight *out, uint32_t n, uint32_t max, uint32_t data) {
    uint32_t node = cpa_u32(im, data + 20);
    for (uint32_t k = 0; node && cpa_is_ptr(im, node) && k < 256; k++, node = cpa_u32(im, node + 4)) n = push_unique(im, out, n, max, cpa_u32(im, node));
    return n;
}
uint32_t cpa_light_sector_lights(const CpaImage *im, uint32_t sectorSO, CpaLight *out, uint32_t max) {
    uint32_t n = 0, d = cpa_u32(im, sectorSO + 4);
    if (!cpa_is_ptr(im, d)) return 0;
    n = push_chain(im, out, n, max, d);
    { uint32_t arr = cpa_u32(im, d + 32), cnt = cpa_u32(im, d + 36) & 0xFFFF;
      for (uint32_t i = 0; cpa_is_ptr(im, arr) && i < cnt && i < 64; i++) { uint32_t nso = cpa_u32(im, arr + 8 * i + 4), nd = cpa_is_ptr(im, nso) ? cpa_u32(im, nso + 4) : 0; if (cpa_is_ptr(im, nd)) n = push_chain(im, out, n, max, nd); } }
    { uint32_t arr = cpa_u32(im, d + 12), cnt = cpa_u32(im, d + 16) & 0xFFFF;
      for (uint32_t i = 0; cpa_is_ptr(im, arr) && i < cnt && i < 256; i++) { uint32_t lv = cpa_u32(im, arr + 4 * i); uint8_t fl = 0; if (cpa_is_ptr(im, lv) && cpa_rd8(im, lv + 0x9D, &fl) && (fl & 2)) n = push_unique(im, out, n, max, lv); } }
    return n;
}
uint32_t cpa_light_for_actor(const CpaImage *im, uint32_t so, const CpaLight *in, uint32_t n, CpaLight *out) {
    uint32_t m = 0, flags = cpa_u32(im, so + 48), mat = cpa_u32(im, so + 0x24), sph = cpa_u32(im, so + 0x34);
    float P[3] = { 0, 0, 0 }, R = 0, sc = 1.0f;
    if (flags & 0x20000u) return 0;
    if (cpa_is_ptr(im, mat) && cpa_is_ptr(im, sph)) {
        float M[16]; for (int i = 0; i < 16; i++) M[i] = cpa_f32(im, mat + 0x28 + 4u * i);
        float c0[3] = { cpa_f32(im, sph), cpa_f32(im, sph + 4), cpa_f32(im, sph + 8) };
        for (int a = 0; a < 3; a++) P[a] = c0[0] * M[a] + c0[1] * M[4 + a] + c0[2] * M[8 + a] + M[12 + a];
        if (cpa_u32(im, mat) > 3) { float mx = 0; for (int r = 0; r < 3; r++) { float l2 = M[4*r]*M[4*r] + M[4*r+1]*M[4*r+1] + M[4*r+2]*M[4*r+2]; if (l2 > mx) mx = l2; } sc = sqrtf(mx); }
        R = cpa_f32(im, sph + 12) * sc;
    } else { for (uint32_t i = 0; i < n; i++) out[i] = in[i]; return n; }   /* no sphere: cannot test, keep all */
    for (uint32_t i = 0; i < n; i++) {
        int ok = 1;
        if (in[i].type == CPA_LIGHT_OMNI || in[i].type == CPA_LIGHT_SPOT || in[i].type == CPA_LIGHT_TYPE5) {
            float rng = in[i].type == CPA_LIGHT_TYPE5 ? cpa_f32(im, in[i].va + 0xDC) : in[i].param[0];
            float d[3] = { P[0] - in[i].pos[0], P[1] - in[i].pos[1], P[2] - in[i].pos[2] }, rr = R + rng;
            ok = rr * rr > d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        }
        if (ok) out[m++] = in[i];
    }
    return m;
}

void cpa_light_env_from_list(const CpaLight *L, uint32_t n, CpaLightEnv *env) {
    memset(env->G, 0, sizeof env->G);
    for (uint32_t i = 0; i < n; i++) if (L[i].type == CPA_LIGHT_AMBIENT && L[i].enabled) add_ambient(&L[i], env->G);
}

int cpa_light_fade_alpha(const CpaLightFade *f, float zc, float objAlpha, int drawBit3) {
    const float *p = f->p; int red;
    if (zc < p[0]) red = (int)p[3];
    else if (zc < p[1]) red = (int)fmaf(p[4], zc - p[0], p[3]);
    else if (zc < p[2]) red = (int)fmaf(p[4], p[1] - p[0], p[3]);
    else red = 255;
    int a = 255 - red;
    if (!drawBit3 && 0.98f > objAlpha) { int o = (int)(objAlpha * 255.0f); if (o < a) a = o; }
    return a;
}

uint32_t cpa_light_fade_argb(const CpaLightFade *f, const CpaLightMat *m, uint32_t argb, float zc, float objAlpha) {
    if (!f || !f->enabled || !(m->texFlags & 0x20)) return argb;
    int a = cpa_light_fade_alpha(f, zc, objAlpha, (m->flags & 8) != 0);
    if (a < 0) a = 0; if (a > 255) a = 255;
    return (argb & 0x00FFFFFFu) | ((uint32_t)a << 24);
}

uint32_t cpa_light_fade_argb_env(const CpaLightFade *f, const CpaLightMat *m, const CpaLightEnv *env, uint32_t argb, float zc) {
    if (!f || !f->enabled || !(m->texFlags & 0x20)) return argb;
    int a = cpa_light_fade_alpha(f, zc, env->objAlpha, (m->flags & env->drawFlags & 8) != 0);
    if (a < 0) a = 0; if (a > 255) a = 255;
    return (argb & 0x00FFFFFFu) | ((uint32_t)a << 24);
}

int cpa_light_fade_from_ram(const CpaImage *ram, CpaLightFade *f) {
    memset(f, 0, sizeof *f);
    uint32_t flag = cpa_u32(ram, 0x8C140EA4u), base = (flag & 8) ? 0x8C140EA8u : 0x8C140EC0u;
    for (int i = 0; i < 5; i++) f->p[i] = cpa_f32(ram, base + 4u * i);
    f->enabled = f->p[1] > f->p[0];
    return f->enabled;
}
