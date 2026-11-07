/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port
 * File: tools/bake_compressed_textures.c
 *
 * Fast Multi-Threaded Texture Baker: PNG -> Hardware Compressed DDS (DXT1/DXT5)
 * ============================================================================ */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>

#include "cpa_hd_tex.h"

/* ----------------------------------------------------------------------------
 * Lightweight PNG / Deflate Decoder (for host tool)
 * ---------------------------------------------------------------------------- */

typedef struct {
    const uint8_t *src;
    size_t src_len;
    size_t src_pos;
    uint32_t bit_buf;
    int bit_count;
} BitStream;

static inline uint32_t get_bits(BitStream *bs, int n) {
    while (bs->bit_count < n) {
        if (bs->src_pos >= bs->src_len) return 0;
        bs->bit_buf |= ((uint32_t)bs->src[bs->src_pos++]) << bs->bit_count;
        bs->bit_count += 8;
    }
    uint32_t val = bs->bit_buf & ((1u << n) - 1u);
    bs->bit_buf >>= n;
    bs->bit_count -= n;
    return val;
}

typedef struct {
    uint16_t counts[16];
    uint16_t symbols[288];
} HuffmanTable;

static int build_huffman(HuffmanTable *ht, const uint8_t *lens, int n) {
    memset(ht->counts, 0, sizeof(ht->counts));
    for (int i = 0; i < n; i++) {
        if (lens[i] > 15) return -1;
        ht->counts[lens[i]]++;
    }
    ht->counts[0] = 0;

    uint16_t offsets[16];
    offsets[1] = 0;
    for (int i = 1; i < 15; i++) {
        offsets[i + 1] = offsets[i] + ht->counts[i];
    }

    for (int i = 0; i < n; i++) {
        if (lens[i] != 0) {
            ht->symbols[offsets[lens[i]]++] = (uint16_t)i;
        }
    }
    return 0;
}

static int decode_symbol(BitStream *bs, const HuffmanTable *ht) {
    int code = 0;
    int first = 0;
    int index = 0;
    for (int len = 1; len <= 15; len++) {
        code |= (int)get_bits(bs, 1);
        int count = ht->counts[len];
        if (code - count < first) {
            return ht->symbols[index + (code - first)];
        }
        index += count;
        first += count;
        first <<= 1;
        code <<= 1;
    }
    return -1;
}

static const uint16_t k_len_base[29] = {
    3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31,
    35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258
};
static const uint8_t k_len_extra[29] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
    3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0
};
static const uint16_t k_dist_base[30] = {
    1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,
    257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577
};
static const uint8_t k_dist_extra[30] = {
    0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6,
    7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13
};
static const uint8_t k_clen_order[19] = {
    16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15
};

static int inflate_block_data(BitStream *bs, const HuffmanTable *lt, const HuffmanTable *dt,
                              uint8_t *out, size_t out_cap, size_t *out_len) {
    size_t pos = *out_len;
    while (1) {
        int sym = decode_symbol(bs, lt);
        if (sym < 0 || sym > 285) return -1;
        if (sym == 256) break;

        if (sym < 256) {
            if (pos >= out_cap) return -2;
            out[pos++] = (uint8_t)sym;
        } else {
            sym -= 257;
            uint32_t len = k_len_base[sym] + get_bits(bs, k_len_extra[sym]);
            int dsym = decode_symbol(bs, dt);
            if (dsym < 0 || dsym >= 30) return -3;
            uint32_t dist = k_dist_base[dsym] + get_bits(bs, k_dist_extra[dsym]);
            if (dist > pos || pos + len > out_cap) return -4;
            for (uint32_t k = 0; k < len; k++) {
                out[pos] = out[pos - dist];
                pos++;
            }
        }
    }
    *out_len = pos;
    return 0;
}

static int decompress_deflate(const uint8_t *src, size_t src_len, uint8_t *out, size_t out_cap, size_t *out_len) {
    if (src_len < 2) return -1;
    BitStream bs = { src + 2, src_len - 2, 0, 0, 0 };
    *out_len = 0;

    int bfinal = 0;
    while (!bfinal) {
        bfinal = (int)get_bits(&bs, 1);
        int btype = (int)get_bits(&bs, 2);

        if (btype == 0) {
            bs.bit_buf = 0;
            bs.bit_count = 0;
            if (bs.src_pos + 4 > bs.src_len) return -1;
            uint16_t len = (uint16_t)(bs.src[bs.src_pos] | (bs.src[bs.src_pos + 1] << 8));
            bs.src_pos += 4;
            if (bs.src_pos + len > bs.src_len || *out_len + len > out_cap) return -1;
            memcpy(out + *out_len, bs.src + bs.src_pos, len);
            bs.src_pos += len;
            *out_len += len;
        } else if (btype == 1) {
            uint8_t llens[288];
            for (int i = 0; i <= 143; i++) llens[i] = 8;
            for (int i = 144; i <= 255; i++) llens[i] = 9;
            for (int i = 256; i <= 279; i++) llens[i] = 7;
            for (int i = 280; i <= 287; i++) llens[i] = 8;
            HuffmanTable lt, dt;
            build_huffman(&lt, llens, 288);
            uint8_t dlens[32];
            for (int i = 0; i < 32; i++) dlens[i] = 5;
            build_huffman(&dt, dlens, 32);
            if (inflate_block_data(&bs, &lt, &dt, out, out_cap, out_len) != 0) return -1;
        } else if (btype == 2) {
            int hlit = (int)get_bits(&bs, 5) + 257;
            int hdist = (int)get_bits(&bs, 5) + 1;
            int hclen = (int)get_bits(&bs, 4) + 4;
            uint8_t clens[19] = { 0 };
            for (int i = 0; i < hclen; i++) clens[k_clen_order[i]] = (uint8_t)get_bits(&bs, 3);
            HuffmanTable ct;
            build_huffman(&ct, clens, 19);

            uint8_t lens[320];
            int n_lens = hlit + hdist;
            int cur = 0;
            while (cur < n_lens) {
                int sym = decode_symbol(&bs, &ct);
                if (sym < 0) return -1;
                if (sym < 16) {
                    lens[cur++] = (uint8_t)sym;
                } else if (sym == 16) {
                    if (cur == 0) return -1;
                    int repeat = (int)get_bits(&bs, 2) + 3;
                    uint8_t prev = lens[cur - 1];
                    while (repeat-- > 0 && cur < n_lens) lens[cur++] = prev;
                } else if (sym == 17) {
                    int repeat = (int)get_bits(&bs, 3) + 3;
                    while (repeat-- > 0 && cur < n_lens) lens[cur++] = 0;
                } else if (sym == 18) {
                    int repeat = (int)get_bits(&bs, 7) + 11;
                    while (repeat-- > 0 && cur < n_lens) lens[cur++] = 0;
                }
            }
            HuffmanTable lt, dt;
            build_huffman(&lt, lens, hlit);
            build_huffman(&dt, lens + hlit, hdist);
            if (inflate_block_data(&bs, &lt, &dt, out, out_cap, out_len) != 0) return -1;
        } else {
            return -1;
        }
    }
    return 0;
}

static inline uint8_t paeth(int a, int b, int c) {
    int p = a + b - c;
    int pa = p > a ? p - a : a - p;
    int pb = p > b ? p - b : b - p;
    int pc = p > c ? p - c : c - p;
    if (pa <= pb && pa <= pc) return (uint8_t)a;
    if (pb <= pc) return (uint8_t)b;
    return (uint8_t)c;
}

uint32_t *cpa_png_load_mem(const uint8_t *data, size_t sz, uint32_t *out_w, uint32_t *out_h) {
    if (!data || sz < 29 || memcmp(data, "\x89PNG\r\n\x1a\n", 8) != 0) return NULL;

    size_t pos = 8;
    uint32_t w = 0, h = 0;
    uint8_t bit_depth = 0, color_type = 0, interlace = 0;

    uint8_t *idat_buf = NULL;
    size_t idat_cap = 0, idat_len = 0;

    while (pos + 8 <= sz) {
        uint32_t chunk_len = ((uint32_t)data[pos] << 24) | ((uint32_t)data[pos + 1] << 16) |
                             ((uint32_t)data[pos + 2] << 8) | (uint32_t)data[pos + 3];
        const uint8_t *chunk_type = data + pos + 4;
        pos += 8;
        if (pos + chunk_len + 4 > sz) break;

        if (memcmp(chunk_type, "IHDR", 4) == 0 && chunk_len >= 13) {
            w = ((uint32_t)data[pos] << 24) | ((uint32_t)data[pos + 1] << 16) |
                ((uint32_t)data[pos + 2] << 8) | (uint32_t)data[pos + 3];
            h = ((uint32_t)data[pos + 4] << 24) | ((uint32_t)data[pos + 5] << 16) |
                ((uint32_t)data[pos + 6] << 8) | (uint32_t)data[pos + 7];
            bit_depth = data[pos + 8];
            color_type = data[pos + 9];
            uint8_t comp = data[pos + 10];
            uint8_t filter = data[pos + 11];
            if (comp != 0 || filter != 0) return NULL;
            interlace = data[pos + 12];
        } else if (memcmp(chunk_type, "IDAT", 4) == 0) {
            if (idat_len + chunk_len > idat_cap) {
                idat_cap = (idat_len + chunk_len + 4096) * 2;
                idat_buf = (uint8_t *)realloc(idat_buf, idat_cap);
                if (!idat_buf) return NULL;
            }
            memcpy(idat_buf + idat_len, data + pos, chunk_len);
            idat_len += chunk_len;
        } else if (memcmp(chunk_type, "IEND", 4) == 0) {
            break;
        }
        pos += chunk_len + 4;
    }

    if (w == 0 || h == 0 || bit_depth != 8 || (color_type != 6 && color_type != 2) || interlace != 0 || !idat_buf) {
        free(idat_buf);
        return NULL;
    }

    int bpp = (color_type == 6) ? 4 : 3;
    size_t line_bytes = 1 + (size_t)w * bpp;
    size_t raw_sz = line_bytes * h;
    uint8_t *raw_buf = (uint8_t *)malloc(raw_sz);
    if (!raw_buf) { free(idat_buf); return NULL; }

    size_t decomp_len = 0;
    if (decompress_deflate(idat_buf, idat_len, raw_buf, raw_sz, &decomp_len) != 0 || decomp_len != raw_sz) {
        free(idat_buf);
        free(raw_buf);
        return NULL;
    }
    free(idat_buf);

    uint32_t *out_rgba = (uint32_t *)malloc((size_t)w * h * sizeof(uint32_t));
    if (!out_rgba) { free(raw_buf); return NULL; }

    uint8_t *prev_row = (uint8_t *)calloc(1, (size_t)w * bpp);
    uint8_t *curr_row = (uint8_t *)malloc((size_t)w * bpp);
    if (!prev_row || !curr_row) {
        free(prev_row); free(curr_row); free(raw_buf); free(out_rgba);
        return NULL;
    }

    for (uint32_t y = 0; y < h; y++) {
        const uint8_t *scan = raw_buf + y * line_bytes;
        uint8_t ftype = scan[0];
        const uint8_t *in_px = scan + 1;

        for (uint32_t x = 0; x < w * bpp; x++) {
            uint8_t a = (x >= (uint32_t)bpp) ? curr_row[x - bpp] : 0;
            uint8_t b = prev_row[x];
            uint8_t c = (x >= (uint32_t)bpp) ? prev_row[x - bpp] : 0;
            uint8_t val = in_px[x];
            switch (ftype) {
                case 0: curr_row[x] = val; break;
                case 1: curr_row[x] = (uint8_t)(val + a); break;
                case 2: curr_row[x] = (uint8_t)(val + b); break;
                case 3: curr_row[x] = (uint8_t)(val + ((a + b) >> 1)); break;
                case 4: curr_row[x] = (uint8_t)(val + paeth(a, b, c)); break;
                default: curr_row[x] = val; break;
            }
        }

        uint32_t *dst = out_rgba + y * w;
        if (color_type == 6) {
            for (uint32_t x = 0; x < w; x++) {
                uint8_t r = curr_row[x * 4];
                uint8_t g = curr_row[x * 4 + 1];
                uint8_t b = curr_row[x * 4 + 2];
                uint8_t a = curr_row[x * 4 + 3];
                dst[x] = (uint32_t)r | ((uint32_t)g << 8) | ((uint32_t)b << 16) | ((uint32_t)a << 24);
            }
        } else {
            for (uint32_t x = 0; x < w; x++) {
                uint8_t r = curr_row[x * 3];
                uint8_t g = curr_row[x * 3 + 1];
                uint8_t b = curr_row[x * 3 + 2];
                dst[x] = (uint32_t)r | ((uint32_t)g << 8) | ((uint32_t)b << 16) | 0xFF000000u;
            }
        }
        memcpy(prev_row, curr_row, (size_t)w * bpp);
    }

    free(curr_row);
    free(prev_row);
    free(raw_buf);

    if (out_w) *out_w = w;
    if (out_h) *out_h = h;
    return out_rgba;
}

uint32_t *cpa_png_load_file(const char *path, uint32_t *out_w, uint32_t *out_h) {
    if (!path) return NULL;
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }

    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
    if (!buf) { fclose(f); return NULL; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    if (rd != (size_t)sz) { free(buf); return NULL; }

    uint32_t *rgba = cpa_png_load_mem(buf, (size_t)sz, out_w, out_h);
    free(buf);
    return rgba;
}

/* ----------------------------------------------------------------------------
 * 1. DDS File Format Definitions
 * ---------------------------------------------------------------------------- */

#pragma pack(push, 1)
typedef struct {
    uint32_t dwMagic;              /* 'DDS ' = 0x20534444 */
    uint32_t dwSize;               /* 124 */
    uint32_t dwFlags;              /* DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH | DDSD_PIXELFORMAT | DDSD_LINEARSIZE */
    uint32_t dwHeight;             /* Height in pixels */
    uint32_t dwWidth;              /* Width in pixels */
    uint32_t dwPitchOrLinearSize;  /* Total size of level 0 */
    uint32_t dwDepth;              /* 0 */
    uint32_t dwMipMapCount;        /* Mipmap count (1 if no mipmaps) */
    uint32_t dwReserved1[11];
    /* DDS_PIXELFORMAT */
    uint32_t dwPfSize;             /* 32 */
    uint32_t dwPfFlags;            /* DDPF_FOURCC = 0x4 */
    uint32_t dwFourCC;             /* 'DXT1' = 0x31545844 or 'DXT5' = 0x35545844 */
    uint32_t dwRGBBitCount;        /* 0 */
    uint32_t dwRBitMask;           /* 0 */
    uint32_t dwGBitMask;           /* 0 */
    uint32_t dwBBitMask;           /* 0 */
    uint32_t dwABitMask;           /* 0 */
    /* DDS_CAPS */
    uint32_t dwCaps;               /* DDSCAPS_TEXTURE = 0x1000 */
    uint32_t dwCaps2;              /* 0 */
    uint32_t dwCaps3;              /* 0 */
    uint32_t dwCaps4;              /* 0 */
    uint32_t dwReserved2;          /* 0 */
} DdsHeader;
#pragma pack(pop)

#define DDS_MAGIC               0x20534444u /* "DDS " */
#define DDS_FOURCC_DXT1         0x31545844u /* "DXT1" */
#define DDS_FOURCC_DXT5         0x35545844u /* "DXT5" */

#define DDSD_CAPS               0x00000001u
#define DDSD_HEIGHT             0x00000002u
#define DDSD_WIDTH              0x00000004u
#define DDSD_PIXELFORMAT        0x00001000u
#define DDSD_MIPMAPCOUNT        0x00020000u
#define DDSD_LINEARSIZE         0x00080000u

#define DDPF_FOURCC             0x00000004u
#define DDSCAPS_TEXTURE         0x00001000u
#define DDSCAPS_MIPMAP          0x00400000u
#define DDSCAPS_COMPLEX         0x00000008u

/* ----------------------------------------------------------------------------
 * 2. High-Performance DXT1 / DXT5 Encoder
 * ---------------------------------------------------------------------------- */

static inline uint16_t pack_rgb565(uint8_t r, uint8_t g, uint8_t b) {
    return (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
}

static inline void unpack_rgb565(uint16_t c, uint8_t *r, uint8_t *g, uint8_t *b) {
    uint8_t r5 = (c >> 11) & 0x1F;
    uint8_t g6 = (c >> 5) & 0x3F;
    uint8_t b5 = c & 0x1F;
    *r = (r5 << 3) | (r5 >> 2);
    *g = (g6 << 2) | (g6 >> 4);
    *b = (b5 << 3) | (b5 >> 2);
}

static inline int color_dist_sq(uint8_t r1, uint8_t g1, uint8_t b1,
                                uint8_t r2, uint8_t g2, uint8_t b2) {
    int dr = (int)r1 - (int)r2;
    int dg = (int)g1 - (int)g2;
    int db = (int)b1 - (int)b2;
    return dr * dr * 3 + dg * dg * 4 + db * db * 2;
}

static void encode_dxt1_block(const uint32_t *pixels, uint8_t *out_block) {
    uint8_t min_r = 255, min_g = 255, min_b = 255;
    uint8_t max_r = 0,   max_g = 0,   max_b = 0;

    for (int i = 0; i < 16; i++) {
        uint32_t p = pixels[i];
        uint8_t r = p & 0xFF;
        uint8_t g = (p >> 8) & 0xFF;
        uint8_t b = (p >> 16) & 0xFF;
        if (r < min_r) min_r = r;
        if (r > max_r) max_r = r;
        if (g < min_g) min_g = g;
        if (g > max_g) max_g = g;
        if (b < min_b) min_b = b;
        if (b > max_b) max_b = b;
    }

    uint8_t inset_r = (max_r - min_r) >> 4;
    uint8_t inset_g = (max_g - min_g) >> 4;
    uint8_t inset_b = (max_b - min_b) >> 4;

    uint8_t c0_r = (max_r >= inset_r) ? max_r - inset_r : 0;
    uint8_t c0_g = (max_g >= inset_g) ? max_g - inset_g : 0;
    uint8_t c0_b = (max_b >= inset_b) ? max_b - inset_b : 0;

    uint8_t c1_r = (min_r + inset_r <= 255) ? min_r + inset_r : 255;
    uint8_t c1_g = (min_g + inset_g <= 255) ? min_g + inset_g : 255;
    uint8_t c1_b = (min_b + inset_b <= 255) ? min_b + inset_b : 255;

    uint16_t c0 = pack_rgb565(c0_r, c0_g, c0_b);
    uint16_t c1 = pack_rgb565(c1_r, c1_g, c1_b);

    if (c0 < c1) {
        uint16_t tmp = c0; c0 = c1; c1 = tmp;
    } else if (c0 == c1) {
        if (c0 < 0xFFFF) c0++;
        else if (c1 > 0) c1--;
    }

    out_block[0] = (uint8_t)(c0 & 0xFF);
    out_block[1] = (uint8_t)(c0 >> 8);
    out_block[2] = (uint8_t)(c1 & 0xFF);
    out_block[3] = (uint8_t)(c1 >> 8);

    uint8_t pal_r[4], pal_g[4], pal_b[4];
    unpack_rgb565(c0, &pal_r[0], &pal_g[0], &pal_b[0]);
    unpack_rgb565(c1, &pal_r[1], &pal_g[1], &pal_b[1]);
    pal_r[2] = (uint8_t)((2 * pal_r[0] + pal_r[1]) / 3);
    pal_g[2] = (uint8_t)((2 * pal_g[0] + pal_g[1]) / 3);
    pal_b[2] = (uint8_t)((2 * pal_b[0] + pal_b[1]) / 3);
    pal_r[3] = (uint8_t)((pal_r[0] + 2 * pal_r[1]) / 3);
    pal_g[3] = (uint8_t)((pal_g[0] + 2 * pal_g[1]) / 3);
    pal_b[3] = (uint8_t)((pal_b[0] + 2 * pal_b[1]) / 3);

    uint32_t indices = 0;
    for (int i = 0; i < 16; i++) {
        uint32_t p = pixels[i];
        uint8_t pr = p & 0xFF;
        uint8_t pg = (p >> 8) & 0xFF;
        uint8_t pb = (p >> 16) & 0xFF;

        int best_idx = 0;
        int min_d = color_dist_sq(pr, pg, pb, pal_r[0], pal_g[0], pal_b[0]);

        for (int k = 1; k < 4; k++) {
            int d = color_dist_sq(pr, pg, pb, pal_r[k], pal_g[k], pal_b[k]);
            if (d < min_d) {
                min_d = d;
                best_idx = k;
            }
        }
        indices |= ((uint32_t)best_idx) << (i * 2);
    }

    out_block[4] = (uint8_t)(indices & 0xFF);
    out_block[5] = (uint8_t)((indices >> 8) & 0xFF);
    out_block[6] = (uint8_t)((indices >> 16) & 0xFF);
    out_block[7] = (uint8_t)((indices >> 24) & 0xFF);
}

static void encode_dxt5_block(const uint32_t *pixels, uint8_t *out_block) {
    uint8_t min_a = 255, max_a = 0;
    for (int i = 0; i < 16; i++) {
        uint8_t a = (pixels[i] >> 24) & 0xFF;
        if (a < min_a) min_a = a;
        if (a > max_a) max_a = a;
    }

    uint8_t a0 = max_a;
    uint8_t a1 = min_a;
    out_block[0] = a0;
    out_block[1] = a1;

    uint8_t pal_a[8];
    pal_a[0] = a0;
    pal_a[1] = a1;
    if (a0 > a1) {
        for (int i = 1; i <= 6; i++) {
            pal_a[1 + i] = (uint8_t)(((7 - i) * a0 + i * a1) / 7);
        }
    } else {
        pal_a[2] = (uint8_t)((4 * a0 + 1 * a1) / 5);
        pal_a[3] = (uint8_t)((3 * a0 + 2 * a1) / 5);
        pal_a[4] = (uint8_t)((2 * a0 + 3 * a1) / 5);
        pal_a[5] = (uint8_t)((1 * a0 + 4 * a1) / 5);
        pal_a[6] = 0;
        pal_a[7] = 255;
    }

    uint64_t a_indices = 0;
    for (int i = 0; i < 16; i++) {
        uint8_t a = (pixels[i] >> 24) & 0xFF;
        int best_idx = 0;
        int min_d = abs((int)a - (int)pal_a[0]);
        for (int k = 1; k < 8; k++) {
            int d = abs((int)a - (int)pal_a[k]);
            if (d < min_d) {
                min_d = d;
                best_idx = k;
            }
        }
        a_indices |= ((uint64_t)best_idx) << (i * 3);
    }

    for (int i = 0; i < 6; i++) {
        out_block[2 + i] = (uint8_t)((a_indices >> (i * 8)) & 0xFF);
    }

    encode_dxt1_block(pixels, out_block + 8);
}

/* ----------------------------------------------------------------------------
 * 3. Texture Compression Pipeline
 * ---------------------------------------------------------------------------- */

static void downsample_2x2(const uint32_t *src, uint32_t sw, uint32_t sh,
                           uint32_t *dst, uint32_t dw, uint32_t dh) {
    for (uint32_t dy = 0; dy < dh; dy++) {
        uint32_t sy0 = dy * 2;
        uint32_t sy1 = (sy0 + 1 < sh) ? sy0 + 1 : sy0;
        for (uint32_t dx = 0; dx < dw; dx++) {
            uint32_t sx0 = dx * 2;
            uint32_t sx1 = (sx0 + 1 < sw) ? sx0 + 1 : sx0;

            uint32_t p00 = src[sy0 * sw + sx0];
            uint32_t p01 = src[sy0 * sw + sx1];
            uint32_t p10 = src[sy1 * sw + sx0];
            uint32_t p11 = src[sy1 * sw + sx1];

            uint32_t r = ((p00 & 0xFF) + (p01 & 0xFF) + (p10 & 0xFF) + (p11 & 0xFF) + 2) >> 2;
            uint32_t g = (((p00 >> 8) & 0xFF) + ((p01 >> 8) & 0xFF) + ((p10 >> 8) & 0xFF) + ((p11 >> 8) & 0xFF) + 2) >> 2;
            uint32_t b = (((p00 >> 16) & 0xFF) + ((p01 >> 16) & 0xFF) + ((p10 >> 16) & 0xFF) + ((p11 >> 16) & 0xFF) + 2) >> 2;
            uint32_t a = (((p00 >> 24) & 0xFF) + ((p01 >> 24) & 0xFF) + ((p10 >> 24) & 0xFF) + ((p11 >> 24) & 0xFF) + 2) >> 2;

            dst[dy * dw + dx] = (r & 0xFF) | ((g & 0xFF) << 8) | ((b & 0xFF) << 16) | ((a & 0xFF) << 24);
        }
    }
}

static size_t compress_image_level(const uint32_t *pixels, uint32_t w, uint32_t h,
                                  bool is_dxt5, uint8_t *out_data) {
    uint32_t bw = (w + 3) / 4;
    uint32_t bh = (h + 3) / 4;
    size_t block_bytes = is_dxt5 ? 16 : 8;
    size_t total_bytes = (size_t)bw * bh * block_bytes;

    if (!out_data) return total_bytes;

    for (uint32_t by = 0; by < bh; by++) {
        for (uint32_t bx = 0; bx < bw; bx++) {
            uint32_t block[16];
            for (int py = 0; py < 4; py++) {
                for (int px = 0; px < 4; px++) {
                    uint32_t x = bx * 4 + px;
                    uint32_t y = by * 4 + py;
                    if (x < w && y < h) {
                        block[py * 4 + px] = pixels[y * w + x];
                    } else {
                        block[py * 4 + px] = 0;
                    }
                }
            }

            uint8_t *dst = out_data + (by * bw + bx) * block_bytes;
            if (is_dxt5) {
                encode_dxt5_block(block, dst);
            } else {
                encode_dxt1_block(block, dst);
            }
        }
    }

    return total_bytes;
}

int bake_png_to_dds(const char *in_png_path, const char *out_dds_path,
                    bool force_dxt5, bool generate_mipmaps) {
    uint32_t w = 0, h = 0;
    uint32_t *pixels = cpa_png_load_file(in_png_path, &w, &h);
    if (!pixels) return -1;

    /* Detect alpha requirement */
    bool has_alpha = force_dxt5;
    if (!has_alpha) {
        size_t npx = (size_t)w * h;
        for (size_t i = 0; i < npx; i++) {
            if ((pixels[i] >> 24) != 255) {
                has_alpha = true;
                break;
            }
        }
    }

    bool is_dxt5 = has_alpha;
    uint32_t four_cc = is_dxt5 ? DDS_FOURCC_DXT5 : DDS_FOURCC_DXT1;

    /* Calculate mip levels */
    uint32_t mip_count = 1;
    if (generate_mipmaps && (w > 16 || h > 16)) {
        uint32_t cur_w = w, cur_h = h;
        while (cur_w > 1 || cur_h > 1) {
            mip_count++;
            cur_w = (cur_w > 1) ? cur_w / 2 : 1;
            cur_h = (cur_h > 1) ? cur_h / 2 : 1;
        }
    }

    /* Build DDS Header */
    DdsHeader hdr;
    memset(&hdr, 0, sizeof(hdr));
    hdr.dwMagic = DDS_MAGIC;
    hdr.dwSize = 124;
    hdr.dwFlags = DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH | DDSD_PIXELFORMAT | DDSD_LINEARSIZE;
    if (mip_count > 1) hdr.dwFlags |= DDSD_MIPMAPCOUNT;
    hdr.dwHeight = h;
    hdr.dwWidth = w;
    hdr.dwPitchOrLinearSize = (uint32_t)compress_image_level(NULL, w, h, is_dxt5, NULL);
    hdr.dwMipMapCount = mip_count;

    hdr.dwPfSize = 32;
    hdr.dwPfFlags = DDPF_FOURCC;
    hdr.dwFourCC = four_cc;

    hdr.dwCaps = DDSCAPS_TEXTURE;
    if (mip_count > 1) hdr.dwCaps |= (DDSCAPS_MIPMAP | DDSCAPS_COMPLEX);

    /* Ensure output directory exists */
    char dir_buf[1024];
    strncpy(dir_buf, out_dds_path, sizeof(dir_buf) - 1);
    char *slash = strrchr(dir_buf, '/');
    if (slash) {
        *slash = '\0';
        char tmp[1024];
        snprintf(tmp, sizeof(tmp), "mkdir -p \"%s\"", dir_buf);
        (void)system(tmp);
    }

    FILE *f = fopen(out_dds_path, "wb");
    if (!f) {
        free(pixels);
        return -2;
    }

    fwrite(&hdr, 1, sizeof(hdr), f);

    /* Write level 0 */
    size_t l0_size = hdr.dwPitchOrLinearSize;
    uint8_t *comp_buf = (uint8_t *)malloc(l0_size);
    if (!comp_buf) {
        fclose(f);
        free(pixels);
        return -3;
    }

    compress_image_level(pixels, w, h, is_dxt5, comp_buf);
    fwrite(comp_buf, 1, l0_size, f);

    /* Generate and write subsequent mip levels if requested */
    if (mip_count > 1) {
        uint32_t cur_w = w, cur_h = h;
        uint32_t *cur_src = pixels;
        bool src_allocated = false;

        for (uint32_t m = 1; m < mip_count; m++) {
            uint32_t next_w = (cur_w > 1) ? cur_w / 2 : 1;
            uint32_t next_h = (cur_h > 1) ? cur_h / 2 : 1;

            uint32_t *next_pixels = (uint32_t *)malloc((size_t)next_w * next_h * sizeof(uint32_t));
            if (!next_pixels) break;

            downsample_2x2(cur_src, cur_w, cur_h, next_pixels, next_w, next_h);

            size_t mip_sz = compress_image_level(next_pixels, next_w, next_h, is_dxt5, comp_buf);
            fwrite(comp_buf, 1, mip_sz, f);

            if (src_allocated) free(cur_src);
            cur_src = next_pixels;
            src_allocated = true;
            cur_w = next_w;
            cur_h = next_h;
        }

        if (src_allocated) free(cur_src);
    }

    free(comp_buf);
    free(pixels);
    fclose(f);
    return 0;
}

/* ----------------------------------------------------------------------------
 * 4. Multi-Threaded Batch Processor
 * ---------------------------------------------------------------------------- */

typedef struct {
    char in_path[1024];
    char out_path[1024];
} TaskItem;

typedef struct {
    TaskItem *tasks;
    size_t count;
    size_t next_idx;
    pthread_mutex_t lock;
    bool force;
    bool force_dxt5;
    bool mipmaps;
    size_t completed;
    size_t skipped;
    size_t failed;
} WorkQueue;

static void *worker_thread(void *arg) {
    WorkQueue *q = (WorkQueue *)arg;

    while (1) {
        size_t idx = 0;
        pthread_mutex_lock(&q->lock);
        if (q->next_idx >= q->count) {
            pthread_mutex_unlock(&q->lock);
            break;
        }
        idx = q->next_idx++;
        pthread_mutex_unlock(&q->lock);

        TaskItem *t = &q->tasks[idx];

        if (!q->force) {
            struct stat st_in, st_out;
            if (stat(t->in_path, &st_in) == 0 && stat(t->out_path, &st_out) == 0) {
                if (st_out.st_mtime >= st_in.st_mtime && st_out.st_size > (off_t)sizeof(DdsHeader)) {
                    pthread_mutex_lock(&q->lock);
                    q->skipped++;
                    pthread_mutex_unlock(&q->lock);
                    continue;
                }
            }
        }

        int rc = bake_png_to_dds(t->in_path, t->out_path, q->force_dxt5, q->mipmaps);
        pthread_mutex_lock(&q->lock);
        if (rc == 0) {
            q->completed++;
            if ((q->completed + q->skipped) % 500 == 0 || q->completed + q->skipped == q->count) {
                printf("[BAKE] Processed %zu/%zu textures (Baked: %zu, Skipped: %zu)...\n",
                       q->completed + q->skipped, q->count, q->completed, q->skipped);
            }
        } else {
            q->failed++;
            fprintf(stderr, "[ERROR] Failed baking: %s (rc=%d)\n", t->in_path, rc);
        }
        pthread_mutex_unlock(&q->lock);
    }

    return NULL;
}

static void scan_dir_recursive(const char *in_root, const char *out_root,
                               const char *sub, TaskItem **tasks, size_t *count, size_t *cap) {
    char current_in[1024];
    if (sub && sub[0]) snprintf(current_in, sizeof(current_in), "%s/%s", in_root, sub);
    else snprintf(current_in, sizeof(current_in), "%s", in_root);

    DIR *d = opendir(current_in);
    if (!d) return;

    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) continue;

        char rel[1024];
        if (sub && sub[0]) snprintf(rel, sizeof(rel), "%s/%s", sub, ent->d_name);
        else snprintf(rel, sizeof(rel), "%s", ent->d_name);

        char full_in[1024];
        snprintf(full_in, sizeof(full_in), "%s/%s", in_root, rel);

        struct stat st;
        if (stat(full_in, &st) != 0) continue;

        if (S_ISDIR(st.st_mode)) {
            scan_dir_recursive(in_root, out_root, rel, tasks, count, cap);
        } else if (S_ISREG(st.st_mode)) {
            size_t len = strlen(ent->d_name);
            if (len > 4 && strcasecmp(ent->d_name + len - 4, ".png") == 0) {
                if (*count >= *cap) {
                    *cap = (*cap == 0) ? 1024 : (*cap * 2);
                    *tasks = (TaskItem *)realloc(*tasks, *cap * sizeof(TaskItem));
                }

                TaskItem *t = &(*tasks)[*count];
                strncpy(t->in_path, full_in, sizeof(t->in_path) - 1);

                char out_rel[1024];
                strncpy(out_rel, rel, sizeof(out_rel) - 1);
                out_rel[strlen(out_rel) - 4] = '\0'; /* drop .png */

                snprintf(t->out_path, sizeof(t->out_path), "%s/%s.dds", out_root, out_rel);
                (*count)++;
            }
        }
    }
    closedir(d);
}

int main(int argc, char **argv) {
    printf("======================================================================\n");
    printf("  Rayman 2 PS Vita Hardware Texture Baker (PNG -> DXT1/DXT5 DDS)      \n");
    printf("======================================================================\n");

    const char *in_dir = NULL;
    const char *out_dir = NULL;
    bool force = false;
    bool force_dxt5 = false;
    bool mipmaps = false;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--force") == 0) {
            force = true;
        } else if (strcmp(argv[i], "--dxt5") == 0) {
            force_dxt5 = true;
        } else if (strcmp(argv[i], "--mipmaps") == 0) {
            mipmaps = true;
        } else if (argv[i][0] == '-') {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            return 1;
        } else if (!in_dir) {
            in_dir = argv[i];
        } else if (!out_dir) {
            out_dir = argv[i];
        }
    }

    if (!in_dir) in_dir = "upscaled_textures";
    if (!out_dir) out_dir = in_dir;

    printf("Input Directory:  %s\n", in_dir);
    printf("Output Directory: %s\n", out_dir);
    printf("Mode:             %s (Auto: DXT1 for opaque, DXT5 for alpha)\n",
           force_dxt5 ? "DXT5 Forced" : "Smart DXT1 / DXT5");
    printf("Mipmaps:          %s\n", mipmaps ? "Enabled" : "Base Level (No Mipmaps)");
    printf("Overwrite:        %s\n", force ? "Yes (Forced)" : "Incremental (Skip up-to-date)");

    TaskItem *tasks = NULL;
    size_t count = 0, cap = 0;
    scan_dir_recursive(in_dir, out_dir, "", &tasks, &count, &cap);

    printf("Discovered %zu PNG textures to process.\n", count);
    if (count == 0) {
        printf("Nothing to bake.\n");
        return 0;
    }

    int num_threads = (int)sysconf(_SC_NPROCESSORS_ONLN);
    if (num_threads < 1) num_threads = 4;
    printf("Running with %d worker threads...\n", num_threads);

    WorkQueue q;
    q.tasks = tasks;
    q.count = count;
    q.next_idx = 0;
    pthread_mutex_init(&q.lock, NULL);
    q.force = force;
    q.force_dxt5 = force_dxt5;
    q.mipmaps = mipmaps;
    q.completed = 0;
    q.skipped = 0;
    q.failed = 0;

    pthread_t *threads = (pthread_t *)malloc(num_threads * sizeof(pthread_t));
    for (int i = 0; i < num_threads; i++) {
        pthread_create(&threads[i], NULL, worker_thread, &q);
    }

    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("\nBake Summary:\n");
    printf(" - Total Textures:   %zu\n", count);
    printf(" - Newly Baked:      %zu\n", q.completed);
    printf(" - Skipped (Cached): %zu\n", q.skipped);
    printf(" - Failed:           %zu\n", q.failed);
    printf("======================================================================\n");

    free(threads);
    free(tasks);
    pthread_mutex_destroy(&q.lock);
    return (q.failed == 0) ? 0 : 1;
}
