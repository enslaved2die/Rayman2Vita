#include "cpa_image.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cpa_dat_base(const uint8_t *p, size_t n, CpaDatKind kind, uint32_t *base) {
    size_t off = (kind == CPA_DAT_LEVEL) ? 0x94 : 0x10;
    if (!p || n < off + 4) return 0;
    uint32_t v = (uint32_t)p[off] | ((uint32_t)p[off + 1] << 8) | ((uint32_t)p[off + 2] << 16) | ((uint32_t)p[off + 3] << 24);
    if (v < 0x8C000000u || v >= 0x8D000000u) return 0;
    *base = v;
    return 1;
}

void cpa_image_init(CpaImage *im) { memset(im, 0, sizeof *im); }

int cpa_image_add(CpaImage *im, const uint8_t *p, size_t n, uint32_t base) {
    if (!im || !p || im->nReg >= CPA_MAX_REGIONS) return 0;
    im->reg[im->nReg].base = base; im->reg[im->nReg].p = p; im->reg[im->nReg].n = n;
    im->nReg++;
    return 1;
}

int cpa_image_add_dat(CpaImage *im, CpaDatKind kind, const uint8_t *p, size_t n) {
    uint32_t b;
    return cpa_dat_base(p, n, kind, &b) && cpa_image_add(im, p, n, b);
}

const CpaRegion *cpa_region_of(const CpaImage *im, uint32_t va, size_t len) {
    for (int i = 0; i < im->nReg; i++) {
        const CpaRegion *r = &im->reg[i];
        if (va >= r->base && (uint64_t)(va - r->base) + len <= r->n) return r;
    }
    return NULL;
}

const uint8_t *cpa_ptr(const CpaImage *im, uint32_t va, size_t len) {
    const CpaRegion *r = cpa_region_of(im, va, len);
    return r ? r->p + (va - r->base) : NULL;
}

int cpa_rd8(const CpaImage *im, uint32_t va, uint8_t *o) {
    const uint8_t *q = cpa_ptr(im, va, 1);
    if (!q) return 0;
    *o = q[0];
    return 1;
}
int cpa_rd16(const CpaImage *im, uint32_t va, uint16_t *o) {
    const uint8_t *q = cpa_ptr(im, va, 2);
    if (!q || (va & 1)) return 0;
    *o = (uint16_t)(q[0] | (q[1] << 8));
    return 1;
}
int cpa_rd32(const CpaImage *im, uint32_t va, uint32_t *o) {
    const uint8_t *q = cpa_ptr(im, va, 4);
    if (!q || (va & 3)) return 0;
    *o = (uint32_t)q[0] | ((uint32_t)q[1] << 8) | ((uint32_t)q[2] << 16) | ((uint32_t)q[3] << 24);
    return 1;
}
int cpa_rdf(const CpaImage *im, uint32_t va, float *o) {
    uint32_t u;
    if (!cpa_rd32(im, va, &u)) return 0;
    memcpy(o, &u, 4);
    return isfinite(*o);
}
uint16_t cpa_u16(const CpaImage *im, uint32_t va) { uint16_t v = 0; cpa_rd16(im, va, &v); return v; }
int16_t  cpa_s16(const CpaImage *im, uint32_t va) { return (int16_t)cpa_u16(im, va); }
uint32_t cpa_u32(const CpaImage *im, uint32_t va) { uint32_t v = 0; cpa_rd32(im, va, &v); return v; }
float    cpa_f32(const CpaImage *im, uint32_t va) { float f = 0.f; if (!cpa_rdf(im, va, &f)) f = 0.f; return f; }

int cpa_is_ptr(const CpaImage *im, uint32_t va)   { return va && !(va & 3) && cpa_region_of(im, va, 4) != NULL; }
int cpa_is_ptr16(const CpaImage *im, uint32_t va) { return va && !(va & 1) && cpa_region_of(im, va, 2) != NULL; }

int cpa_read_file(const char *path, uint8_t **buf, size_t *n) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return 0; }
    long sz = ftell(f);
    if (sz < 0 || fseek(f, 0, SEEK_SET) != 0) { fclose(f); return 0; }
    uint8_t *b = (uint8_t *)malloc(sz ? (size_t)sz : 1);
    if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) { free(b); fclose(f); return 0; }
    fclose(f);
    *buf = b; *n = (size_t)sz;
    return 1;
}
