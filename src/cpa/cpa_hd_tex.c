/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine & SH-4 Recomp)
 * File: cpa_hd_tex.c
 *
 * HD Texture Replacement / Upscaled Texture Override Hook Implementation
 * ============================================================================ */

#include "cpa_hd_tex.h"
#include "cpa_hd_manifest.h"
#include "cpa_hd_pak.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>
#include <sys/stat.h>

#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
#include <psp2/kernel/clib.h>
#define OS_LOG(...) do { sceClibPrintf(__VA_ARGS__); printf(__VA_ARGS__); } while(0)
#else
#define OS_LOG(...) printf(__VA_ARGS__)
#endif

/* ============================================================================
 * 1. Self-Contained Lightweight Inflate + PNG Decoder
 * ============================================================================ */

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

/* ============================================================================
 * 2. Raw Accelerator Format (.bin)
 * ============================================================================ */

int cpa_hd_tex_save_raw(const char *path, uint32_t w, uint32_t h, const uint32_t *rgba) {
    if (!path || !w || !h || !rgba) return 0;
    FILE *f = fopen(path, "wb");
    if (!f) return 0;

    uint32_t hdr[4];
    hdr[0] = CPA_HD_TEX_MAGIC_RAW;
    hdr[1] = w;
    hdr[2] = h;
    hdr[3] = 0; /* flags/reserved */

    if (fwrite(hdr, sizeof(uint32_t), 4, f) != 4) { fclose(f); return 0; }
    size_t px_count = (size_t)w * h;
    if (fwrite(rgba, sizeof(uint32_t), px_count, f) != px_count) { fclose(f); return 0; }
    fclose(f);
    return 1;
}

/* ============================================================================
 * 2. Hardware Compressed Texture Decoders & Containers (DDS / DXT1 / DXT5)
 * ============================================================================ */

static inline void dxt_unpack_rgb565(uint16_t c, uint8_t *r, uint8_t *g, uint8_t *b) {
    uint8_t r5 = (c >> 11) & 0x1F;
    uint8_t g6 = (c >> 5) & 0x3F;
    uint8_t b5 = c & 0x1F;
    *r = (r5 << 3) | (r5 >> 2);
    *g = (g6 << 2) | (g6 >> 4);
    *b = (b5 << 3) | (b5 >> 2);
}

static void decode_dxt1_block(const uint8_t *block, uint32_t *out_pixels) {
    uint16_t c0 = (uint16_t)(block[0] | (block[1] << 8));
    uint16_t c1 = (uint16_t)(block[2] | (block[3] << 8));
    uint8_t pal_r[4], pal_g[4], pal_b[4], pal_a[4];
    dxt_unpack_rgb565(c0, &pal_r[0], &pal_g[0], &pal_b[0]);
    dxt_unpack_rgb565(c1, &pal_r[1], &pal_g[1], &pal_b[1]);
    pal_a[0] = 255; pal_a[1] = 255; pal_a[2] = 255;
    if (c0 > c1) {
        pal_r[2] = (uint8_t)((2 * pal_r[0] + pal_r[1]) / 3);
        pal_g[2] = (uint8_t)((2 * pal_g[0] + pal_g[1]) / 3);
        pal_b[2] = (uint8_t)((2 * pal_b[0] + pal_b[1]) / 3);
        pal_r[3] = (uint8_t)((pal_r[0] + 2 * pal_r[1]) / 3);
        pal_g[3] = (uint8_t)((pal_g[0] + 2 * pal_g[1]) / 3);
        pal_b[3] = (uint8_t)((pal_b[0] + 2 * pal_b[1]) / 3);
        pal_a[3] = 255;
    } else {
        pal_r[2] = (uint8_t)((pal_r[0] + pal_r[1]) / 2);
        pal_g[2] = (uint8_t)((pal_g[0] + pal_g[1]) / 2);
        pal_b[2] = (uint8_t)((pal_b[0] + pal_b[1]) / 2);
        pal_r[3] = 0; pal_g[3] = 0; pal_b[3] = 0;
        pal_a[3] = 0;
    }

    uint32_t indices = (uint32_t)(block[4] | (block[5] << 8) | (block[6] << 16) | (block[7] << 24));
    for (int i = 0; i < 16; i++) {
        uint8_t idx = (uint8_t)((indices >> (i * 2)) & 0x3);
        out_pixels[i] = ((uint32_t)pal_r[idx]) |
                        (((uint32_t)pal_g[idx]) << 8) |
                        (((uint32_t)pal_b[idx]) << 16) |
                        (((uint32_t)pal_a[idx]) << 24);
    }
}

static void decode_dxt5_block(const uint8_t *block, uint32_t *out_pixels) {
    uint8_t a0 = block[0];
    uint8_t a1 = block[1];
    uint8_t pal_a[8];
    pal_a[0] = a0; pal_a[1] = a1;
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
    for (int i = 0; i < 6; i++) {
        a_indices |= ((uint64_t)block[2 + i]) << (i * 8);
    }

    const uint8_t *cblock = block + 8;
    uint16_t c0 = (uint16_t)(cblock[0] | (cblock[1] << 8));
    uint16_t c1 = (uint16_t)(cblock[2] | (cblock[3] << 8));
    uint8_t pal_r[4], pal_g[4], pal_b[4];
    dxt_unpack_rgb565(c0, &pal_r[0], &pal_g[0], &pal_b[0]);
    dxt_unpack_rgb565(c1, &pal_r[1], &pal_g[1], &pal_b[1]);
    if (c0 > c1) {
        pal_r[2] = (uint8_t)((2 * pal_r[0] + pal_r[1]) / 3);
        pal_g[2] = (uint8_t)((2 * pal_g[0] + pal_g[1]) / 3);
        pal_b[2] = (uint8_t)((2 * pal_b[0] + pal_b[1]) / 3);
        pal_r[3] = (uint8_t)((pal_r[0] + 2 * pal_r[1]) / 3);
        pal_g[3] = (uint8_t)((pal_g[0] + 2 * pal_g[1]) / 3);
        pal_b[3] = (uint8_t)((pal_b[0] + 2 * pal_b[1]) / 3);
    } else {
        pal_r[2] = (uint8_t)((pal_r[0] + pal_r[1]) / 2);
        pal_g[2] = (uint8_t)((pal_g[0] + pal_g[1]) / 2);
        pal_b[2] = (uint8_t)((pal_b[0] + pal_b[1]) / 2);
        pal_r[3] = 0; pal_g[3] = 0; pal_b[3] = 0;
    }

    uint32_t c_indices = (uint32_t)(cblock[4] | (cblock[5] << 8) | (cblock[6] << 16) | (cblock[7] << 24));
    for (int i = 0; i < 16; i++) {
        uint8_t a_idx = (uint8_t)((a_indices >> (i * 3)) & 0x7);
        uint8_t c_idx = (uint8_t)((c_indices >> (i * 2)) & 0x3);
        out_pixels[i] = ((uint32_t)pal_r[c_idx]) |
                        (((uint32_t)pal_g[c_idx]) << 8) |
                        (((uint32_t)pal_b[c_idx]) << 16) |
                        (((uint32_t)pal_a[a_idx]) << 24);
    }
}

int cpa_dxt_decompress(const void *dxt_data, uint32_t w, uint32_t h, CpaHdTexFormat fmt, uint32_t *out_rgba) {
    if (!dxt_data || !out_rgba || !w || !h) return -1;
    uint32_t bw = (w + 3) / 4;
    uint32_t bh = (h + 3) / 4;
    const uint8_t *src = (const uint8_t *)dxt_data;
    size_t block_sz = (fmt == CPA_HD_TEX_FMT_DXT5) ? 16 : 8;

    for (uint32_t by = 0; by < bh; by++) {
        for (uint32_t bx = 0; bx < bw; bx++) {
            uint32_t block_pixels[16];
            if (fmt == CPA_HD_TEX_FMT_DXT5) {
                decode_dxt5_block(src + (by * bw + bx) * block_sz, block_pixels);
            } else {
                decode_dxt1_block(src + (by * bw + bx) * block_sz, block_pixels);
            }

            for (int py = 0; py < 4; py++) {
                for (int px = 0; px < 4; px++) {
                    uint32_t x = bx * 4 + px;
                    uint32_t y = by * 4 + py;
                    if (x < w && y < h) {
                        out_rgba[y * w + x] = block_pixels[py * 4 + px];
                    }
                }
            }
        }
    }
    return 0;
}

/* Reads a little-endian u32 at p (the target is little-endian; see the R2TX/DDS magics). */
static uint32_t le32_at(const uint8_t *p) {
    uint32_t v;
    memcpy(&v, p, sizeof(v));
    return v;
}

bool cpa_dds_load_mem(const uint8_t *buf, size_t sz, CpaHdTexture *out_tex) {
    if (!buf || !out_tex || sz <= 128) return false;
    if (le32_at(buf) != CPA_HD_TEX_MAGIC_DDS) return false;

    uint32_t height = le32_at(buf + 12);
    uint32_t width = le32_at(buf + 16);
    uint32_t mips = le32_at(buf + 28);
    uint32_t fourcc = le32_at(buf + 84);

    CpaHdTexFormat fmt;
    size_t block_bytes;
    if (fourcc == 0x31545844u /* "DXT1" */) {
        fmt = CPA_HD_TEX_FMT_DXT1;
        block_bytes = 8;
    } else if (fourcc == 0x35545844u /* "DXT5" */) {
        fmt = CPA_HD_TEX_FMT_DXT5;
        block_bytes = 16;
    } else {
        return false;
    }
    if (!width || !height || width > 4096 || height > 4096) return false;

    size_t l0_size = (size_t)((width + 3) / 4) * ((height + 3) / 4) * block_bytes;
    size_t payload_sz = sz - 128;
    if (payload_sz < l0_size) return false;

    uint8_t *data = (uint8_t *)malloc(payload_sz);
    if (!data) return false;
    memcpy(data, buf + 128, payload_sz);

    out_tex->data = data;
    out_tex->width = width;
    out_tex->height = height;
    out_tex->data_size = (uint32_t)payload_sz;
    out_tex->format = fmt;
    out_tex->mip_count = (uint8_t)(mips ? mips : 1);
    return true;
}

uint32_t *cpa_hd_tex_load_raw_mem(const uint8_t *buf, size_t sz, uint32_t *out_w, uint32_t *out_h) {
    if (!buf || sz < 16) return NULL;
    if (le32_at(buf) != CPA_HD_TEX_MAGIC_RAW) return NULL;
    uint32_t w = le32_at(buf + 4);
    uint32_t h = le32_at(buf + 8);
    if (!w || !h || w > 4096 || h > 4096) return NULL;

    size_t px_bytes = (size_t)w * h * 4;
    if (sz - 16 < px_bytes) return NULL;
    uint32_t *rgba = (uint32_t *)malloc(px_bytes);
    if (!rgba) return NULL;
    memcpy(rgba, buf + 16, px_bytes);

    if (out_w) *out_w = w;
    if (out_h) *out_h = h;
    return rgba;
}

bool cpa_dds_load_file(const char *path, CpaHdTexture *out_tex) {
    if (!path || !out_tex) return false;
    FILE *f = fopen(path, "rb");
    if (!f) return false;

    uint8_t hdr[128];
    if (fread(hdr, 1, 128, f) != 128) { fclose(f); return false; }

    uint32_t magic = *(const uint32_t *)(hdr);
    if (magic != CPA_HD_TEX_MAGIC_DDS) { fclose(f); return false; }

    uint32_t height = *(const uint32_t *)(hdr + 12);
    uint32_t width  = *(const uint32_t *)(hdr + 16);
    uint32_t mips   = *(const uint32_t *)(hdr + 28);
    uint32_t fourcc = *(const uint32_t *)(hdr + 84);

    CpaHdTexFormat fmt;
    size_t block_bytes = 0;
    if (fourcc == 0x31545844u /* "DXT1" */) {
        fmt = CPA_HD_TEX_FMT_DXT1;
        block_bytes = 8;
    } else if (fourcc == 0x35545844u /* "DXT5" */) {
        fmt = CPA_HD_TEX_FMT_DXT5;
        block_bytes = 16;
    } else {
        fclose(f);
        return false;
    }

    if (!width || !height || width > 4096 || height > 4096) { fclose(f); return false; }

    /* Level 0 size */
    uint32_t bw = (width + 3) / 4;
    uint32_t bh = (height + 3) / 4;
    size_t l0_size = (size_t)bw * bh * block_bytes;

    /* Read remaining payload from file (including mips if present) */
    fseek(f, 0, SEEK_END);
    long total_sz = ftell(f);
    fseek(f, 128, SEEK_SET);

    size_t payload_sz = (total_sz > 128) ? (size_t)(total_sz - 128) : l0_size;
    if (payload_sz < l0_size) { fclose(f); return false; }

    uint8_t *data = (uint8_t *)malloc(payload_sz);
    if (!data) { fclose(f); return false; }

    if (fread(data, 1, payload_sz, f) != payload_sz) {
        free(data);
        fclose(f);
        return false;
    }
    fclose(f);

    out_tex->data = data;
    out_tex->width = width;
    out_tex->height = height;
    out_tex->data_size = (uint32_t)payload_sz;
    out_tex->format = fmt;
    out_tex->mip_count = (uint8_t)(mips ? mips : 1);
    return true;
}

uint32_t *cpa_hd_tex_load_raw_file(const char *path, uint32_t *out_w, uint32_t *out_h) {
    if (!path) return NULL;
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;

    uint32_t hdr[4];
    if (fread(hdr, sizeof(uint32_t), 4, f) != 4) { fclose(f); return NULL; }
    if (hdr[0] != CPA_HD_TEX_MAGIC_RAW) { fclose(f); return NULL; }

    uint32_t w = hdr[1];
    uint32_t h = hdr[2];
    if (!w || !h || w > 4096 || h > 4096) { fclose(f); return NULL; }

    size_t px_count = (size_t)w * h;
    uint32_t *rgba = (uint32_t *)malloc(px_count * sizeof(uint32_t));
    if (!rgba) { fclose(f); return NULL; }

    if (fread(rgba, sizeof(uint32_t), px_count, f) != px_count) {
        free(rgba);
        fclose(f);
        return NULL;
    }
    fclose(f);

    if (out_w) *out_w = w;
    if (out_h) *out_h = h;
    return rgba;
}

/* ============================================================================
 * 3. Bank Mapping & Texture Replacement Lookup
 * ============================================================================ */

/* Probing fallback: 1 keeps the filesystem probing of the pre-Phase-1 loader for banks that
 * have no precomputed <BANK>.hdtab (HD_Texture_Plan.md, Phase 1). Host builds default to 1;
 * Vita builds default to 0 so the game thread never probes. Override with -DCPA_HD_TEX_PROBE_FALLBACK=0|1. */
#ifndef CPA_HD_TEX_PROBE_FALLBACK
#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
#define CPA_HD_TEX_PROBE_FALLBACK 0
#else
#define CPA_HD_TEX_PROBE_FALLBACK 1
#endif
#endif

typedef struct {
    uint32_t va;
    uint32_t chunk_idx;
    char name[128];
    int8_t has_override; /* 0 unchecked, 1 found, -1 not found */
    char resolved_path[256];
    uint8_t fmt;         /* CpaHdTexFormat from the table: 0 RGBA8888, 1 DXT1, 5 DXT5 */
    uint8_t mips;        /* mip levels from the table (1 = base level only) */
    uint16_t w, h;       /* override dimensions from the table */
    uint32_t row;        /* data-row index in <BANK>.hdtab; also the row index in <BANK>.hdpak */
} HdTexMapping;

typedef struct {
    char bank[32];
    HdTexMapping *entries;
    uint32_t count;
    uint32_t capacity;
    bool loaded;
    bool from_table;     /* entries came from <BANK>.hdtab, which is then authoritative */
    bool has_pak;        /* <BANK>.hdpak matched the table and is open in pak */
    uint32_t table_rows; /* number of data rows in <BANK>.hdtab */
    CpaHdPak pak;
} HdBankInfo;

#define MAX_HD_BANKS 128 /* the game has ~82 texture banks; the cap was 32 and overflowed onto bank 0 */
static HdBankInfo s_banks[MAX_HD_BANKS];
static uint32_t s_num_banks = 0;
static char s_current_level[32] = "LEARN_10";
static bool s_enabled = false;
static bool s_initialized = false;

#define MAX_SEARCH_ROOTS 16
static char s_search_roots[MAX_SEARCH_ROOTS][512];
static uint32_t s_num_search_roots = 0;

static void add_search_root_internal(const char *root) {
    if (!root || !root[0] || s_num_search_roots >= MAX_SEARCH_ROOTS) return;
    struct stat st;
    if (stat(root, &st) != 0 || !S_ISDIR(st.st_mode)) return;
    for (uint32_t i = 0; i < s_num_search_roots; i++) {
        if (strcmp(s_search_roots[i], root) == 0) return;
    }
    snprintf(s_search_roots[s_num_search_roots++], sizeof(s_search_roots[0]), "%s", root);
}

void cpa_hd_tex_add_search_root(const char *root) {
    add_search_root_internal(root);
    if (s_num_search_roots > 0) {
        s_enabled = true;
    }
}

void cpa_hd_tex_set_level(const char *level_name) {
    if (level_name && level_name[0]) {
        snprintf(s_current_level, sizeof(s_current_level), "%s", level_name);
    }
}

const char *cpa_hd_tex_get_level(void) {
    return s_current_level;
}

void cpa_hd_tex_enable(bool enable) {
    s_enabled = enable;
}

bool cpa_hd_tex_is_enabled(void) {
    if (!s_initialized) cpa_hd_tex_init();
    return s_enabled;
}

void cpa_hd_tex_init(void) {
    if (s_initialized) return;
    s_initialized = true;

    /* Add search roots based on platform and environment */
    const char *env_root = getenv("R2_TEXTURE_OVERRIDE_PATH");
    if (env_root && env_root[0]) {
        add_search_root_internal(env_root);
    }

#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
    add_search_root_internal("ux0:data/rayman2/textures");
    add_search_root_internal("ux0:data/rayman2/upscaled_textures");
    add_search_root_internal("app0:textures");
#else
    add_search_root_internal("./upscaled_textures");
    add_search_root_internal("./textures");
    add_search_root_internal("../upscaled_textures");
    add_search_root_internal("../textures");
    add_search_root_internal("../../upscaled_textures");
    add_search_root_internal("../../textures");
#endif

    if (s_num_search_roots == 0) {
        s_enabled = false;
        OS_LOG("[cpa_hd_tex] No HD textures folder found. HD texture overrides disabled (0 I/O overhead).\n");
    } else {
        s_enabled = true;
        OS_LOG("[cpa_hd_tex] HD textures enabled (%u root%s, primary: %s)\n",
               s_num_search_roots, s_num_search_roots > 1 ? "s" : "", s_search_roots[0]);
    }
}

static HdBankInfo *get_or_create_bank(const char *bank) {
    if (!bank || !bank[0]) bank = s_current_level;
    for (uint32_t i = 0; i < s_num_banks; i++) {
        if (strcasecmp(s_banks[i].bank, bank) == 0) return &s_banks[i];
    }
    if (s_num_banks >= MAX_HD_BANKS) {
        /* Never alias another bank's entries: a miss simply has no override. */
        OS_LOG("[cpa_hd_tex] bank table full (%d); no overrides for %s\n", (int)MAX_HD_BANKS, bank);
        return NULL;
    }

    HdBankInfo *b = &s_banks[s_num_banks++];
    memset(b, 0, sizeof(*b));
    snprintf(b->bank, sizeof(b->bank), "%s", bank);
    return b;
}

static HdTexMapping *bank_add_entry(HdBankInfo *b, uint32_t va, uint32_t idx, const char *name) {
    if (b->count >= b->capacity) {
        uint32_t cap = b->capacity ? b->capacity * 2 : 64;
        HdTexMapping *grown = (HdTexMapping *)realloc(b->entries, cap * sizeof(HdTexMapping));
        if (!grown) return NULL;
        b->entries = grown;
        b->capacity = cap;
    }
    HdTexMapping *e = &b->entries[b->count++];
    memset(e, 0, sizeof(*e));
    e->va = va;
    e->chunk_idx = idx;
    snprintf(e->name, sizeof(e->name), "%s", name ? name : "");
    e->has_override = 0;
    e->resolved_path[0] = '\0';
    return e;
}

static uint8_t *read_entire_file(const char *path, size_t *out_sz) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }
    uint8_t *buf = (uint8_t *)malloc((size_t)sz + 1);
    if (!buf) { fclose(f); return NULL; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    buf[rd] = 0;
    if (out_sz) *out_sz = rd;
    return buf;
}

#if CPA_HD_TEX_PROBE_FALLBACK
static int parse_bank_log(HdBankInfo *b, const char *log_path) {
    size_t sz = 0;
    uint8_t *data = read_entire_file(log_path, &sz);
    if (!data) return 0;

    char *line = (char *)data;
    uint32_t cur_idx = 0;
    while (line && *line) {
        char *eol = strpbrk(line, "\r\n");
        if (eol) {
            if (*eol == '\r' && *(eol + 1) == '\n') { *eol = 0; eol += 2; }
            else { *eol = 0; eol++; }
        }

        char *arrow = strstr(line, "->");
        char *colon = strchr(line, ':');
        if (arrow && colon && colon < arrow) {
            uint32_t va = (uint32_t)strtoul(line, NULL, 16);
            char *p = colon + 1;
            while (*p == ' ' || *p == '\t') p++;

            char *pvr = NULL;
            for (char *c = p; c < arrow - 3; c++) {
                if (c[0] == '.' &&
                    (c[1] == 'p' || c[1] == 'P') &&
                    (c[2] == 'v' || c[2] == 'V') &&
                    (c[3] == 'r' || c[3] == 'R')) {
                    pvr = c;
                    break;
                }
            }

            if (pvr) {
                size_t path_len = (size_t)(pvr - p);
                if (path_len > 120) path_len = 120;
                char rel[128];
                memcpy(rel, p, path_len);
                rel[path_len] = 0;

                char *slash = strrchr(rel, '/');
                char *bslash = strrchr(rel, '\\');
                char *bname = slash > bslash ? slash : bslash;
                if (bname) bname++; else bname = rel;

                while (*bname == ' ' || *bname == '\t') bname++;
                char *end = bname + strlen(bname) - 1;
                while (end >= bname && (*end == ' ' || *end == '\t')) { *end = 0; end--; }

                for (char *c = bname; *c; c++) {
                    unsigned char uc = (unsigned char)*c;
                    if (*c == ' ' || *c == '\t') *c = '_';
                    else if (uc == 0xe8 || uc == 0xe9 || uc == 0xea || uc == 0xeb) *c = 'e';
                    else if (uc == 0xe0 || uc == 0xe1 || uc == 0xe2 || uc == 0xe3 || uc == 0xe4) *c = 'a';
                    else if (uc == 0xec || uc == 0xed || uc == 0xee || uc == 0xef) *c = 'i';
                    else if (uc == 0xf2 || uc == 0xf3 || uc == 0xf4 || uc == 0xf6) *c = 'o';
                    else if (uc == 0xf9 || uc == 0xfa || uc == 0xfb || uc == 0xfc) *c = 'u';
                    else if (uc == 0xe7) *c = 'c';
                }

                bank_add_entry(b, va, cur_idx++, bname);
            }
        }
        line = eol;
    }

    free(data);
    b->loaded = (b->count > 0);
    return b->loaded;
}
#endif /* CPA_HD_TEX_PROBE_FALLBACK */

/* Loads <root>/<BANK>.hdtab from the first search root that has one (HD_Texture_Plan.md, Phase 1).
 * Rows are "va chunk fmt w h mips relpath", tab-separated; relpath '-' marks a key without override.
 * A bank loaded this way never probes the filesystem per texture. */
static bool load_bank_table(HdBankInfo *b) {
    char path[1024];
    for (uint32_t r = 0; r < s_num_search_roots; r++) {
        snprintf(path, sizeof(path), "%.511s/%.31s.hdtab", s_search_roots[r], b->bank);
        size_t sz = 0;
        uint8_t *data = read_entire_file(path, &sz);
        if (!data) continue;

        uint32_t n_over = 0, n_bad = 0, n_rows = 0;
        char *line = (char *)data;
        while (line && *line) {
            char *eol = strchr(line, '\n');
            if (eol) *eol++ = '\0';
            size_t len = strlen(line);
            if (len && line[len - 1] == '\r') line[--len] = '\0';
            if (line[0] == '\0' || line[0] == '#') { line = eol; continue; }
            uint32_t row = n_rows++;

            char *fld[7];
            int nf = 0;
            char *p = line;
            while (nf < 7) {
                fld[nf++] = p;
                char *tab = strchr(p, '\t');
                if (!tab) break;
                *tab = '\0';
                p = tab + 1;
            }
            HdTexMapping *e = (nf == 7) ? bank_add_entry(b, (uint32_t)strtoul(fld[0], NULL, 16),
                                                         (uint32_t)strtoul(fld[1], NULL, 10), "")
                                        : NULL;
            if (!e) { n_bad++; line = eol; continue; }
            e->row = row;

            if (fld[6][0] == '-' && fld[6][1] == '\0') {
                e->has_override = -1;
            } else {
                int n = snprintf(e->resolved_path, sizeof(e->resolved_path), "%s/%s", s_search_roots[r], fld[6]);
                if (n <= 0 || (size_t)n >= sizeof(e->resolved_path)) {
                    e->resolved_path[0] = '\0';
                    e->has_override = -1;
                    n_bad++;
                } else {
                    e->has_override = 1;
                    e->fmt = (uint8_t)strtoul(fld[2], NULL, 10);
                    e->w = (uint16_t)strtoul(fld[3], NULL, 10);
                    e->h = (uint16_t)strtoul(fld[4], NULL, 10);
                    e->mips = (uint8_t)strtoul(fld[5], NULL, 10);
                    n_over++;
                }
            }
            line = eol;
        }
        free(data);

        /* Optional archive (Phase 5): the shared pool plus this bank's index. Used only if both match this table. */
        char pool_path[1024], pak_path[1024];
        snprintf(pool_path, sizeof(pool_path), "%.511s/HD.hdpool", s_search_roots[r]);
        snprintf(pak_path, sizeof(pak_path), "%.511s/%.31s.hdpak", s_search_roots[r], b->bank);
        if (cpa_hd_pool_open(pool_path) && cpa_hd_pak_open(&b->pak, pak_path, n_rows)) {
            b->has_pak = true;
        }

        b->from_table = true;
        b->table_rows = n_rows;
        b->loaded = true;
        OS_LOG("[cpa_hd_tex] bank %s: %u keys from %s (%u overrides, %u rejected, archive %s)\n",
               b->bank, b->count, path, n_over, n_bad, b->has_pak ? "yes" : "no");
        return true;
    }
    return false;
}

static void ensure_bank_loaded(HdBankInfo *b) {
    if (b->loaded) return;
    if (!cpa_hd_tex_is_enabled() || s_num_search_roots == 0) {
        b->loaded = true;
        return;
    }

    if (load_bank_table(b)) return;

#if CPA_HD_TEX_PROBE_FALLBACK
    /* Build candidate log paths for this bank */
    bool is_fix = (strcasecmp(b->bank, "FIX") == 0);
    char path[1024];

    const char *prefixes[] = {
#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
        "ux0:data/rayman2/DCDATA",
        "ux0:data/rayman2",
        "app0:DCDATA",
#else
        "assets/dc/DCDATA",
        "assets/dc",
        "DCDATA",
        "../../assets/dc/DCDATA",
        "../assets/dc/DCDATA",
#endif
        NULL
    };

    for (int i = 0; prefixes[i]; i++) {
        if (is_fix) {
            snprintf(path, sizeof(path), "%s/TEXTURE_FIX.LOG", prefixes[i]);
            if (parse_bank_log(b, path)) return;
        } else {
            snprintf(path, sizeof(path), "%s/%s/TEXTURE_%s.LOG", prefixes[i], b->bank, b->bank);
            if (parse_bank_log(b, path)) return;
            snprintf(path, sizeof(path), "%s/TEXTURE_%s.LOG", prefixes[i], b->bank);
            if (parse_bank_log(b, path)) return;
        }
    }

    /* Fallback: parse from manifest.csv if available */
    const char *manifest_paths[] = {
        "extracted_textures/manifest.csv",
        "manifest.csv",
        "../extracted_textures/manifest.csv",
        "../../extracted_textures/manifest.csv",
#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
        "ux0:data/rayman2/manifest.csv",
        "ux0:data/rayman2/textures/manifest.csv",
#endif
        NULL
    };

    for (int i = 0; manifest_paths[i]; i++) {
        size_t msz = 0;
        uint8_t *mdata = read_entire_file(manifest_paths[i], &msz);
        if (mdata) {
            char *line = (char *)mdata;
            while (line && *line) {
                char *eol = strpbrk(line, "\r\n");
                if (eol) {
                    if (*eol == '\r' && *(eol + 1) == '\n') { *eol = 0; eol += 2; }
                    else { *eol = 0; eol++; }
                }

                /* CSV: category,bank,index,path,name,width,height,pix_fmt,data_fmt,gbix,struct_va,orig_path */
                if (strncmp(line, "bank,", 5) == 0) {
                    char row_bank[64] = {0}, row_name[128] = {0};
                    uint32_t row_idx = 0, row_va = 0;
                    char *tok = strtok(line + 5, ",");
                    if (tok) snprintf(row_bank, sizeof(row_bank), "%s", tok);
                    tok = strtok(NULL, ",");
                    if (tok) row_idx = (uint32_t)strtoul(tok, NULL, 10);
                    tok = strtok(NULL, ","); /* path */
                    tok = strtok(NULL, ",");
                    if (tok) {
                        snprintf(row_name, sizeof(row_name), "%s", tok);
                        char *dot = strrchr(row_name, '.');
                        if (dot) *dot = 0;
                    }
                    /* skip to struct_va */
                    for (int k = 0; k < 6; k++) tok = strtok(NULL, ",");
                    if (tok) row_va = (uint32_t)strtoul(tok, NULL, 16);

                    if (strcasecmp(row_bank, b->bank) == 0) {
                        bank_add_entry(b, row_va, row_idx, row_name);
                    }
                }
                line = eol;
            }
            free(mdata);
            if (b->count > 0) {
                b->loaded = true;
                return;
            }
        }
    }
#else
    /* No .hdtab for this bank and probing is compiled out: HD overrides are off for it. */
    OS_LOG("[cpa_hd_tex] no %s.hdtab in any search root; HD overrides off for bank %s\n", b->bank, b->bank);
    b->loaded = true;
#endif
}

bool cpa_hd_tex_is_fix_va(uint32_t struct_va) {
    if (!struct_va || !cpa_hd_tex_is_enabled()) return false;
    if (cpa_hd_manifest_is_fix_va(struct_va)) return true;
    HdBankInfo *fix = get_or_create_bank("FIX");
    if (!fix) return false;
    ensure_bank_loaded(fix);
    for (uint32_t i = 0; i < fix->count; i++) {
        if (fix->entries[i].va == struct_va) return true;
    }
    return false;
}

static bool try_load_replacement_ex(const char *file_path, CpaHdTexture *out_tex) {
    if (!file_path || !file_path[0]) return false;

    size_t len = strlen(file_path);
    if (len > 4 && strcasecmp(file_path + len - 4, ".dds") == 0) {
        return cpa_dds_load_file(file_path, out_tex);
    }
    if (len > 4 && (strcasecmp(file_path + len - 4, ".bin") == 0 || strcasecmp(file_path + len - 4, ".raw") == 0)) {
        uint32_t w = 0, h = 0;
        uint32_t *raw = cpa_hd_tex_load_raw_file(file_path, &w, &h);
        if (!raw) return false;
        out_tex->data = raw;
        out_tex->width = w;
        out_tex->height = h;
        out_tex->data_size = w * h * 4;
        out_tex->format = CPA_HD_TEX_FMT_RGBA8888;
        out_tex->mip_count = 1;
        return true;
    }

    uint32_t w = 0, h = 0;
    uint32_t *rgba = cpa_png_load_file(file_path, &w, &h);
    if (!rgba) return false;
    out_tex->data = rgba;
    out_tex->width = w;
    out_tex->height = h;
    out_tex->data_size = w * h * 4;
    out_tex->format = CPA_HD_TEX_FMT_RGBA8888;
    out_tex->mip_count = 1;
    return true;
}

/* Decodes one row's payload from the bank archive (Phase 5). false = caller falls back to the loose file. */
static bool load_from_pak(HdBankInfo *b, uint32_t row, CpaHdTexture *out_tex) {
    size_t sz = 0;
    uint32_t kind = 0;
    uint8_t *buf = cpa_hd_pak_read_row(&b->pak, row, &sz, &kind);
    if (!buf) return false;

    bool ok = false;
    uint32_t w = 0, h = 0;
    uint32_t *px = NULL;
    switch (kind) {
    case CPA_HD_PAK_KIND_DDS:
        ok = cpa_dds_load_mem(buf, sz, out_tex);
        break;
    case CPA_HD_PAK_KIND_RAW:
        px = cpa_hd_tex_load_raw_mem(buf, sz, &w, &h);
        break;
    case CPA_HD_PAK_KIND_PNG:
        px = cpa_png_load_mem(buf, sz, &w, &h);
        break;
    default:
        break;
    }
    if (px) {
        out_tex->data = px;
        out_tex->width = w;
        out_tex->height = h;
        out_tex->data_size = w * h * 4;
        out_tex->format = CPA_HD_TEX_FMT_RGBA8888;
        out_tex->mip_count = 1;
        ok = true;
    }
    free(buf);
    return ok;
}

bool cpa_hd_tex_load_ex(const char *bank, uint32_t struct_va, int chunk_idx,
                        const char *hint_name, CpaHdTexture *out_tex) {
    if (!out_tex) return false;
    memset(out_tex, 0, sizeof(*out_tex));
    if (!cpa_hd_tex_is_enabled() || s_num_search_roots == 0) return false;

    if (struct_va == 0 && chunk_idx < 0 && (!hint_name || !hint_name[0])) {
        return false;
    }

    cpa_hd_tex_init();

    if (!bank || !bank[0]) {
        if (struct_va && cpa_hd_tex_is_fix_va(struct_va)) {
            bank = "FIX";
        } else {
            bank = s_current_level;
        }
    }

    HdBankInfo *b = get_or_create_bank(bank);
    if (!b) return false;
    ensure_bank_loaded(b);

    const char *name = NULL;
    HdTexMapping *mapped_entry = NULL;

    if (struct_va != 0) {
        for (uint32_t i = 0; i < b->count; i++) {
            if (b->entries[i].va == struct_va) {
                mapped_entry = &b->entries[i];
                name = mapped_entry->name;
                break;
            }
        }
    }

    if (!mapped_entry && chunk_idx >= 0) {
        if ((uint32_t)chunk_idx < b->count && b->entries[chunk_idx].chunk_idx == (uint32_t)chunk_idx) {
            mapped_entry = &b->entries[chunk_idx];
            name = mapped_entry->name;
        } else {
            for (uint32_t i = 0; i < b->count; i++) {
                if (b->entries[i].chunk_idx == (uint32_t)chunk_idx) {
                    mapped_entry = &b->entries[i];
                    name = mapped_entry->name;
                    break;
                }
            }
        }
    }

    if (!mapped_entry && hint_name && hint_name[0]) {
        for (uint32_t i = 0; i < b->count; i++) {
            if (strcmp(b->entries[i].name, hint_name) == 0) {
                mapped_entry = &b->entries[i];
                name = mapped_entry->name;
                break;
            }
        }
    }

    /* Check mapped_entry first.
     * - If mapped_entry && mapped_entry->has_override < 0: return false immediately! (0 ms negative cache hit).
     * - If mapped_entry && mapped_entry->has_override > 0 && mapped_entry->resolved_path[0]: return try_load_replacement_ex(mapped_entry->resolved_path, out_tex) immediately! */
    if (mapped_entry) {
        if (mapped_entry->has_override < 0) {
            return false;
        }
        if (mapped_entry->has_override > 0 && mapped_entry->resolved_path[0]) {
            if (b->has_pak && load_from_pak(b, mapped_entry->row, out_tex)) return true;
            return try_load_replacement_ex(mapped_entry->resolved_path, out_tex);
        }
    }

    if (b->from_table) {
        /* Table-backed bank: the .hdtab is authoritative. A key it does not list is a miss,
         * cached as negative so it is never looked up again (HD_Texture_Plan.md, 1.3). */
        if (!mapped_entry) {
            HdTexMapping *neg = bank_add_entry(b, struct_va, (chunk_idx >= 0) ? (uint32_t)chunk_idx : 0, "");
            if (neg) neg->has_override = -1;
        }
        return false;
    }

#if !CPA_HD_TEX_PROBE_FALLBACK
    /* No table for this bank and probing is compiled out. */
    (void)name;
    return false;
#else
    /* If !mapped_entry:
     * - Resolve name using hint_name or cpa_hd_manifest_lookup(bank, struct_va, chunk_idx).
     * - Dynamically insert a cache entry:
     *   bank_add_entry(b, struct_va, (chunk_idx >= 0) ? (uint32_t)chunk_idx : 0, name ? name : "");
     *   mapped_entry = &b->entries[b->count - 1]; */
    if (!mapped_entry) {
        if (hint_name && hint_name[0]) {
            name = hint_name;
        } else if (struct_va != 0 || chunk_idx >= 0) {
            name = cpa_hd_manifest_lookup(bank, struct_va, chunk_idx);
        }

        bank_add_entry(b, struct_va, (chunk_idx >= 0) ? (uint32_t)chunk_idx : 0, name ? name : "");
        mapped_entry = &b->entries[b->count - 1];
    } else if (!name || !name[0]) {
        if (hint_name && hint_name[0]) {
            name = hint_name;
        } else if (struct_va != 0 || chunk_idx >= 0) {
            name = cpa_hd_manifest_lookup(bank, struct_va, chunk_idx);
        }
        if (name && name[0]) {
            snprintf(mapped_entry->name, sizeof(mapped_entry->name), "%s", name);
        }
    }

    /* If !name || !name[0]:
     * - Set mapped_entry->has_override = -1; and return false immediately. */
    if (!name || !name[0]) {
        if (mapped_entry) {
            mapped_entry->has_override = -1;
        }
        return false;
    }

    /* Candidate loop:
     * - Prioritize .dds files first (hardware compressed DXT1/DXT5):
     *   root/bank/name.dds, root/FIX/name.dds, root/name.dds.
     * - If try_load_replacement_ex succeeds:
     *   Set mapped_entry->has_override = 1;
     *   snprintf(mapped_entry->resolved_path, sizeof(mapped_entry->resolved_path), "%s", candidate);
     *   return true;
     * - If no .dds found, try fallback .bin and .png. */
    char candidate[1024];
    bool loaded = false;

    /* 1. Prioritize .dds files first across valid search roots */
    for (uint32_t r = 0; r < s_num_search_roots; r++) {
        const char *root = s_search_roots[r];

        /* root/bank/name.dds */
        snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%.127s.dds", root, b->bank, name);
        if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

        /* root/FIX/name.dds */
        if (strcasecmp(b->bank, "FIX") != 0) {
            snprintf(candidate, sizeof(candidate), "%.255s/FIX/%.127s.dds", root, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;
        }

        /* root/name.dds */
        snprintf(candidate, sizeof(candidate), "%.255s/%.127s.dds", root, name);
        if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;
    }

    /* 2. If no .dds found, try fallback .bin and .png */
    if (!loaded) {
        for (uint32_t r = 0; r < s_num_search_roots; r++) {
            const char *root = s_search_roots[r];

            /* root/bank/name.bin */
            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%.127s.bin", root, b->bank, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            /* root/bank/name.png */
            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%.127s.png", root, b->bank, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            /* root/bank/name.raw */
            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%.127s.raw", root, b->bank, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            /* root/FIX/name fallback */
            if (strcasecmp(b->bank, "FIX") != 0) {
                snprintf(candidate, sizeof(candidate), "%.255s/FIX/%.127s.bin", root, name);
                if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

                snprintf(candidate, sizeof(candidate), "%.255s/FIX/%.127s.png", root, name);
                if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;
            }

            /* root/name fallback */
            snprintf(candidate, sizeof(candidate), "%.255s/%.127s.bin", root, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            snprintf(candidate, sizeof(candidate), "%.255s/%.127s.png", root, name);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;
        }
    }

    /* 3. Fallback numeric chunk index if present */
    if (!loaded && chunk_idx >= 0) {
        for (uint32_t r = 0; r < s_num_search_roots; r++) {
            const char *root = s_search_roots[r];

            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%03d.dds", root, b->bank, chunk_idx);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%03d.bin", root, b->bank, chunk_idx);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;

            snprintf(candidate, sizeof(candidate), "%.255s/%.31s/%03d.png", root, b->bank, chunk_idx);
            if ((loaded = try_load_replacement_ex(candidate, out_tex))) break;
        }
    }

    if (loaded) {
        if (mapped_entry) {
            mapped_entry->has_override = 1;
            snprintf(mapped_entry->resolved_path, sizeof(mapped_entry->resolved_path), "%.255s", candidate);
        }
        const char *fmt_str = (out_tex->format == CPA_HD_TEX_FMT_DXT5) ? "DXT5" :
                              (out_tex->format == CPA_HD_TEX_FMT_DXT1) ? "DXT1" : "RGBA";
        OS_LOG("[HD_TEX] Loaded replacement: %s (%ux%u %s, %u bytes)\n",
               candidate, out_tex->width, out_tex->height, fmt_str, out_tex->data_size);
        return true;
    }

    /* If nothing is loaded after searching valid roots: Set mapped_entry->has_override = -1; and return false. */
    if (mapped_entry) {
        mapped_entry->has_override = -1;
    }
    return false;
#endif
}

uint32_t *cpa_hd_tex_load(const char *bank, uint32_t struct_va, int chunk_idx,
                          const char *hint_name, uint32_t *out_w, uint32_t *out_h) {
    CpaHdTexture tex;
    if (!cpa_hd_tex_load_ex(bank, struct_va, chunk_idx, hint_name, &tex)) {
        return NULL;
    }

    if (out_w) *out_w = tex.width;
    if (out_h) *out_h = tex.height;

    if (tex.format == CPA_HD_TEX_FMT_RGBA8888) {
        return (uint32_t *)tex.data;
    }

    /* Decompress hardware format (DXT1 / DXT5) to 32-bit RGBA for callers expecting raw pixels */
    size_t px_count = (size_t)tex.width * tex.height;
    uint32_t *rgba = (uint32_t *)malloc(px_count * sizeof(uint32_t));
    if (!rgba) {
        free(tex.data);
        return NULL;
    }

    if (cpa_dxt_decompress(tex.data, tex.width, tex.height, tex.format, rgba) != 0) {
        free(rgba);
        free(tex.data);
        return NULL;
    }

    free(tex.data);
    return rgba;
}

uint32_t cpa_hd_tex_bank_row_count(const char *bank) {
    if (!cpa_hd_tex_is_enabled() || s_num_search_roots == 0) return 0;
    HdBankInfo *b = get_or_create_bank(bank);
    if (!b) return 0;
    ensure_bank_loaded(b);
    return b->from_table ? b->table_rows : 0;
}

bool cpa_hd_tex_bank_row(const char *bank, uint32_t row, uint32_t *out_va, int *out_chunk, bool *out_has_override) {
    if (!cpa_hd_tex_is_enabled() || s_num_search_roots == 0) return false;
    HdBankInfo *b = get_or_create_bank(bank);
    if (!b) return false;
    ensure_bank_loaded(b);
    if (!b->from_table || row >= b->table_rows || row >= b->count) return false;
    const HdTexMapping *e = &b->entries[row];
    if (e->row != row) return false; /* malformed rows were skipped; indices no longer line up */
    if (out_va) *out_va = e->va;
    if (out_chunk) *out_chunk = (int)e->chunk_idx;
    if (out_has_override) *out_has_override = (e->has_override > 0);
    return true;
}

void cpa_hd_tex_shutdown(void) {
    for (uint32_t i = 0; i < s_num_banks; i++) {
        free(s_banks[i].entries);
        s_banks[i].entries = NULL;
        s_banks[i].count = 0;
        s_banks[i].capacity = 0;
        s_banks[i].loaded = false;
        s_banks[i].from_table = false;
        cpa_hd_pak_close(&s_banks[i].pak);
        s_banks[i].has_pak = false;
    }
    cpa_hd_pool_close();
    s_num_banks = 0;
    s_num_search_roots = 0;
    s_initialized = false;
}
