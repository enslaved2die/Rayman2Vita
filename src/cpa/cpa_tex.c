/* cpa_tex.c - native PVR texture decoding. See cpa_tex.h for provenance and tags. */
#include "cpa_tex.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

static uint32_t le32(const uint8_t *p) { return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24); }
static uint32_t le16(const uint8_t *p) { return (uint32_t)p[0] | ((uint32_t)p[1] << 8); }

/* ------------------------------------------------------------------------------------------------------------------------------ pixels */
static uint32_t rgba(uint32_t r, uint32_t g, uint32_t b, uint32_t a) { return r | (g << 8) | (b << 16) | (a << 24); }

static uint32_t bump_px(uint32_t p, const float *k, int mip) {
    /* PVR2 bump texel: bits 15:8 = S (elevation), 7:0 = R (azimuth). The hardware combines it with per-polygon offset-colour coefficients; without a polygon the
     * oracle uses fixed constants measured on the game's bump strips (K1 = 16/255 for mip textures else 0, K2 = 59/255, K3 = 18/255, Q = 80/255). INFERRED. */
    float K1 = mip ? 16.0f / 255.0f : 0.0f, K2 = 59.0f / 255.0f, K3 = 18.0f / 255.0f, Q = 80.0f / 255.0f;
    if (k) { K1 = k[0]; K2 = k[1]; K3 = k[2]; Q = k[3]; }
    float s = (float)((p >> 8) & 0xFF) * (3.14159265f * 0.5f / 255.0f), r = (float)(p & 0xFF) * (6.28318531f / 255.0f);
    float a = K1 + K2 * sinf(s) + K3 * cosf(s) * cosf(r - 6.28318531f * Q);
    int ia = (int)(a * 255.0f + 0.5f);
    if (ia < 0) ia = 0; else if (ia > 255) ia = 255;
    return rgba(255, 255, 255, (uint32_t)ia);
}

uint32_t cpa_pvr_px16(uint32_t fmt, uint32_t p) {
    uint32_t r, g, b, a;
    switch (fmt) {
    case CPA_PVR_ARGB1555:
        a = (p & 0x8000) ? 255 : 0; r = (p >> 10) & 31; g = (p >> 5) & 31; b = p & 31;
        return rgba((r << 3) | (r >> 2), (g << 3) | (g >> 2), (b << 3) | (b >> 2), a);
    case CPA_PVR_RGB565:
        r = (p >> 11) & 31; g = (p >> 5) & 63; b = p & 31;
        return rgba((r << 3) | (r >> 2), (g << 2) | (g >> 4), (b << 3) | (b >> 2), 255);
    case CPA_PVR_ARGB4444:
        return rgba(((p >> 8) & 15) * 17, ((p >> 4) & 15) * 17, (p & 15) * 17, ((p >> 12) & 15) * 17);
    default:
        return 0xFF808080u;
    }
}

/* ------------------------------------------------------------------------------------------------------------------------------ twiddle */
static uint32_t spread16(uint32_t v) { v = (v | (v << 8)) & 0x00FF00FFu; v = (v | (v << 4)) & 0x0F0F0F0Fu; v = (v | (v << 2)) & 0x33333333u; v = (v | (v << 1)) & 0x55555555u; return v; }
/* Morton index: y in the even bits, x in the odd bits. A rectangle is a row/column of min(w,h)-sized twiddled squares laid out along the longer axis. */
static uint32_t twid(uint32_t x, uint32_t y, uint32_t w, uint32_t h) {
    if (w == h) return spread16(y) | (spread16(x) << 1);
    if (w > h) { uint32_t blk = x / h, xi = x % h; return blk * h * h + (spread16(y) | (spread16(xi) << 1)); }
    { uint32_t blk = y / w, yi = y % w; return blk * w * w + (spread16(yi) | (spread16(x) << 1)); }
}

/* ------------------------------------------------------------------------------------------------------------------------------ container */
int cpa_pvr_parse(const uint8_t *b, size_t n, CpaPvrInfo *in) {
    memset(in, 0, sizeof *in);
    uint32_t off = 0;
    if (n >= 8 && !memcmp(b, "GBIX", 4)) { uint32_t l = le32(b + 4); if (l > 64 || 8 + (size_t)l > n) return 0; off = 8 + l; }
    if (n < (size_t)off + 16 || memcmp(b + off, "PVRT", 4)) return 0;
    in->pvrtOff = off; in->dataOff = off + 16; in->dataLen = (uint32_t)(n - in->dataOff);
    in->raw = le32(b + off + 8);
    in->pixFmt = (uint8_t)(in->raw & 0xFF); in->dataFmt = (uint8_t)((in->raw >> 8) & 0xFF);
    in->w = (uint16_t)le16(b + off + 12); in->h = (uint16_t)le16(b + off + 14);
    if (!in->w || !in->h || in->w > 4096 || in->h > 4096) return 0;
    in->supported = 1; in->nLevels = 1;
    switch (in->dataFmt) {
    case CPA_PVRD_TWIDDLED: in->twiddled = 1; break;
    case CPA_PVRD_TWIDDLED_MIP: case CPA_PVRD_TWIDDLED_MIP_ALT: in->twiddled = 1; in->mip = 1; break;
    case CPA_PVRD_VQ: in->vq = 1; in->twiddled = 1; break;
    case CPA_PVRD_VQ_MIP: in->vq = 1; in->twiddled = 1; in->mip = 1; break;
    case CPA_PVRD_PAL4: in->twiddled = 1; in->pal = 4; break;
    case CPA_PVRD_PAL4_MIP: in->twiddled = 1; in->pal = 4; in->mip = 1; break;
    case CPA_PVRD_PAL8: in->twiddled = 1; in->pal = 8; break;
    case CPA_PVRD_PAL8_MIP: in->twiddled = 1; in->pal = 8; in->mip = 1; break;
    case CPA_PVRD_RECT: break;
    case CPA_PVRD_STRIDE: in->stride = 1; break;
    case CPA_PVRD_RECT_TWIDDLED: in->twiddled = 1; break;
    default: in->supported = 0; return 0;      /* small VQ (0x10, 0x11) and anything unknown: not decoded */
    }
    if (in->pixFmt > CPA_PVR_PAL8) { in->supported = 0; return 0; }
    if (in->mip) { if (in->w != in->h) { in->supported = 0; return 0; } in->nLevels = 1; for (uint32_t s = in->w; s > 1; s >>= 1) in->nLevels++; }
    in->verified = (in->pixFmt <= CPA_PVR_ARGB4444) && (in->dataFmt == CPA_PVRD_TWIDDLED || in->dataFmt == CPA_PVRD_TWIDDLED_MIP || in->dataFmt == CPA_PVRD_VQ_MIP || in->dataFmt == CPA_PVRD_RECT_TWIDDLED);
    {   /* bytes the layout needs for the whole chain (level 0 is last in memory) */
        uint32_t W = in->w, H = in->h, bits = in->pal ? in->pal : 16, nel = W * H;
        if (in->vq) {
            uint32_t idx = (W > 1 ? W / 2 : 1) * (H > 1 ? H / 2 : 1), before = 0;
            if (in->mip) for (uint32_t s = 1; s < W; s <<= 1) before += (s == 1) ? 1u : (s / 2) * (s / 2);
            in->needLen = 2048 + before + idx;
        } else if (in->mip) {
            /* 16 bpp: the FILE has one pad texel before the 1x1 level (VERIFIED: kmLoadTexture copies the data to texture memory at +4, where the 1x1 level sits at +6 = 3 texels);
             * palette mips keep the texture-memory layout of 3 pad texels (UNVERIFIED, no such chunk ships) */
            in->needLen = (uint32_t)(((uint64_t)((in->pal ? 3u : 1u) + (nel - 1) / 3 + nel) * bits + 7) / 8);
        } else in->needLen = (uint32_t)(((uint64_t)nel * bits + 7) / 8);
    }
    return 1;
}

int cpa_pvr_level_size(const CpaPvrInfo *in, uint32_t level, uint32_t *w, uint32_t *h) {
    if (!in->supported || level >= in->nLevels) return 0;
    uint32_t W = in->w >> level, H = in->mip ? W : (uint32_t)(in->h >> level);
    if (!W) W = 1;
    if (!H) H = 1;
    *w = W; *h = H;
    return 1;
}

/* ------------------------------------------------------------------------------------------------------------------------------ decode */
int cpa_pvr_decode(const CpaPvrInfo *in, const uint8_t *blk, size_t n, const CpaPvrOpts *opt, uint32_t level, uint32_t *out) {
    uint32_t w, h;
    if (!in->supported) return -1;
    if (!cpa_pvr_level_size(in, level, &w, &h)) return -3;
    if ((size_t)in->dataOff > n || in->needLen > n - in->dataOff) return -2;
    const uint8_t *d = blk + in->dataOff;
    uint32_t pf = in->pixFmt;
    if (in->vq) {
        uint32_t off = 2048, bw = w > 1 ? w / 2 : 1, bh = h > 1 ? h / 2 : 1;
        if (in->mip) for (uint32_t s = 1; s < w; s <<= 1) off += (s == 1) ? 1u : (s / 2) * (s / 2);
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t e = d[off + twid(x >> 1, y >> 1, bw, bh)];
            /* codebook entry = 4 texels (2 bytes each) in the order (x,y) = (0,0), (0,1), (1,0), (1,1) */
            uint32_t p = le16(d + e * 8 + (((x & 1) * 2 + (y & 1)) * 2));
            out[y * w + x] = pf == CPA_PVR_BUMP ? bump_px(p, opt ? opt->bumpK : NULL, in->mip) : cpa_pvr_px16(pf, p);
        }
        return 0;
    }
    if (in->pal) {
        const uint32_t *pal = opt ? opt->pal : NULL;
        uint32_t S = (w * w - 1) / 3, off = 0;
        if (in->mip) off = in->pal == 8 ? S + 3 : (S + 3) / 2;
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t i = in->twiddled ? twid(x, y, w, h) : y * w + x, idx;
            if (in->pal == 8) idx = d[off + i];
            else { uint32_t bb = d[off + (i >> 1)]; idx = (i & 1) ? (bb >> 4) : (bb & 15); }
            out[y * w + x] = pal ? pal[idx] : 0xFF808080u;
        }
        return 0;
    }
    {
        uint32_t S = (w * w - 1) / 3, off = in->mip ? 2 * S + 2 : 0, stride = w;   /* file layout: 1 pad texel, then levels 1x1, 2x2, ... (texture memory has 3 pad texels: the guest loader inserts 4 bytes) */
        if (in->stride) { stride = opt ? opt->strideTexels : 0; if (!stride) stride = w; }
        if (pf == CPA_PVR_YUV422) {
            for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
                uint32_t pos = in->twiddled ? twid(x & ~1u, y, w, h) * 2 : (y * stride + (x & ~1u)) * 2;
                uint32_t u32 = le32(d + off + pos);
                int Y = (int)(((x & 1) ? (u32 >> 24) : (u32 >> 8)) & 255), U = (int)(u32 & 255) - 128, V = (int)((u32 >> 16) & 255) - 128;
                int R = Y + (int)(1.370705f * V), G = Y - (int)(0.698001f * V + 0.337633f * U), B = Y + (int)(1.732446f * U);
                R = R < 0 ? 0 : R > 255 ? 255 : R; G = G < 0 ? 0 : G > 255 ? 255 : G; B = B < 0 ? 0 : B > 255 ? 255 : B;
                out[y * w + x] = rgba((uint32_t)R, (uint32_t)G, (uint32_t)B, 255);
            }
            return 0;
        }
        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
            uint32_t i = in->twiddled ? twid(x, y, w, h) : y * stride + x;
            uint32_t p = le16(d + off + i * 2);
            out[y * w + x] = pf == CPA_PVR_BUMP ? bump_px(p, opt ? opt->bumpK : NULL, in->mip) : cpa_pvr_px16(pf, p);
        }
    }
    return 0;
}

void cpa_tex_bleed(uint32_t *o, uint32_t w, uint32_t h) {
    uint32_t n = w * h, nt = 0;
    for (uint32_t i = 0; i < n; i++) nt += (o[i] >> 24) == 0;
    if (!nt || nt == n) return;
    uint32_t *c = (uint32_t *)malloc((size_t)n * 4);   /* read the original alphas/colours only (the oracle writes in place but only reads texels with alpha != 0, which are never modified) */
    if (!c) return;
    memcpy(c, o, (size_t)n * 4);
    for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
        if (c[y * w + x] >> 24) continue;
        uint32_t sr = 0, sg = 0, sb = 0, k = 0;
        for (int dy = -1; dy <= 1; dy++) for (int dx = -1; dx <= 1; dx++) {
            int xx = (int)x + dx, yy = (int)y + dy;
            if ((dx | dy) == 0 || xx < 0 || yy < 0 || xx >= (int)w || yy >= (int)h) continue;
            uint32_t p = c[(uint32_t)yy * w + (uint32_t)xx];
            if (!(p >> 24)) continue;
            sr += p & 255; sg += (p >> 8) & 255; sb += (p >> 16) & 255; k++;
        }
        if (k) o[y * w + x] = (sr / k) | ((sg / k) << 8) | ((sb / k) << 16);
    }
    free(c);
}

/* ------------------------------------------------------------------------------------------------------------------------------ .TEX bank */
/* One chunk (guest FUN_8c039f80): control byte c: 0 -> 4 literals; even -> c>>2 literals; odd -> u32 LE starting at c: len = bits 31..24, dist = bits 23..1, forward byte copy. */
static uint8_t *lzss_chunk(const uint8_t *p, size_t n, size_t *pos, size_t *outN) {
    size_t cap = 0, len = 0, st = *pos, end;
    uint8_t *o = NULL;
    if (st + 4 > n) return NULL;
    end = st + le32(p + st);
    if (end > n || end < st + 4) return NULL;
    size_t q = st + 4;
    while (q < end) {
        uint8_t c = p[q++]; size_t cnt, dist = 0; int copy = 0;
        if (c & 1) {
            uint32_t v;
            if (q - 1 + 4 > end) { free(o); return NULL; }
            v = le32(p + q - 1); q += 3;
            cnt = v >> 24; dist = (v & 0xFFFFFEu) >> 1; copy = 1;
            if (!dist || dist > len) { free(o); return NULL; }
        } else if (c == 0) cnt = 4;
        else cnt = c >> 2;
        if (!copy && q + cnt > end) { free(o); return NULL; }
        if (len + cnt > cap) {
            size_t nc = cap ? cap * 2 : 4096;
            while (nc < len + cnt) nc *= 2;
            if (nc > ((size_t)16 << 20)) { free(o); return NULL; }
            uint8_t *t = (uint8_t *)realloc(o, nc);
            if (!t) { free(o); return NULL; }
            o = t; cap = nc;
        }
        if (copy) { for (size_t i = 0; i < cnt; i++) { o[len] = o[len - dist]; len++; } }
        else { memcpy(o + len, p + q, cnt); len += cnt; q += cnt; }
    }
    if (q != end) { free(o); return NULL; }
    if (!o) o = (uint8_t *)malloc(1);
    *pos = end; *outN = len;
    return o;
}

int cpa_texbank_load(const uint8_t *f, size_t n, CpaTexBank *out) {
    size_t pos = 4, cap = 0;
    int ok = 1;
    out->c = NULL; out->n = 0;
    if (n < 8 || memcmp(f, "LZSS", 4)) return 0;
    while (pos < n) {
        size_t bn = 0;
        uint8_t *b = lzss_chunk(f, n, &pos, &bn);
        if (!b) { ok = 0; break; }
        if (out->n == cap) {
            size_t nc = cap ? cap * 2 : 64;
            CpaTexChunk *t = (CpaTexChunk *)realloc(out->c, nc * sizeof *t);
            if (!t) { free(b); ok = 0; break; }
            out->c = t; cap = nc;
        }
        CpaTexChunk *c = &out->c[out->n++];
        memset(c, 0, sizeof *c);
        c->blk = b; c->len = bn;
        if (!cpa_pvr_parse(b, bn, &c->info)) ok = 0;
    }
    return ok;
}
void cpa_texbank_free(CpaTexBank *b) {
    for (uint32_t i = 0; i < b->n; i++) free(b->c[i].blk);
    free(b->c); b->c = NULL; b->n = 0;
}
int cpa_texbank_set_vas(CpaTexBank *b, const uint32_t *vas, uint32_t n) {
    if (n != b->n) return 0;
    for (uint32_t i = 0; i < n; i++) b->c[i].structVa = vas[i];
    return 1;
}
const CpaTexChunk *cpa_texbank_find(const CpaTexBank *b, uint32_t va) {
    for (uint32_t i = 0; i < b->n; i++) if (b->c[i].structVa == va) return &b->c[i];
    return NULL;
}
int cpa_texbank_decode(const CpaTexBank *b, uint32_t i, const CpaPvrOpts *opt, uint32_t level, uint32_t *out) {
    if (i >= b->n) return -3;
    return cpa_pvr_decode(&b->c[i].info, b->c[i].blk, b->c[i].len, opt, level, out);
}

uint32_t cpa_tex_fix_table(const uint8_t *fix, size_t n, uint32_t *vas, uint32_t cap) {
    if (n < 0xA0) return 0;
    uint32_t cnt = le32(fix + 0x94), tva = le32(fix + 0x98);
    if (!cnt || cnt > 4096 || cnt > cap || (size_t)cnt * 4 + 0xA0 > n || (tva >> 24) != 0x8C) return 0;
    const uint8_t *t = fix + n - (size_t)cnt * 4;
    for (uint32_t i = 0; i < cnt; i++) { vas[i] = le32(t + 4 * i); if ((vas[i] >> 24) != 0x8C) return 0; }
    return cnt;
}
