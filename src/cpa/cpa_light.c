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
    return 1;
}

uint32_t cpa_light_read_ram_list(const CpaImage *ram, CpaLight *out, uint32_t max) {
    uint32_t n = 0;
    for (uint32_t i = 0; i < max && i < 64; i++) {
        uint32_t p = cpa_u32(ram, 0x8C2DD4B4u + 4u * i);
        if (!cpa_is_ptr(ram, p)) break;
        if (cpa_light_read(ram, p, &out[n])) n++;
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

int cpa_light_fade_from_ram(const CpaImage *ram, CpaLightFade *f) {
    memset(f, 0, sizeof *f);
    uint32_t flag = cpa_u32(ram, 0x8C140EA4u), base = (flag & 8) ? 0x8C140EA8u : 0x8C140EC0u;
    for (int i = 0; i < 5; i++) f->p[i] = cpa_f32(ram, base + 4u * i);
    f->enabled = f->p[1] > f->p[0];
    return f->enabled;
}
