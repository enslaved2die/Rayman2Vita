#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Complete minimal self-contained Inflate + PNG decoder */

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
        if (sym == 256) break; /* End of block */

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
    /* Skip zlib header CMF and FLG */
    BitStream bs = { src + 2, src_len - 2, 0, 0, 0 };
    *out_len = 0;

    int bfinal = 0;
    while (!bfinal) {
        bfinal = (int)get_bits(&bs, 1);
        int btype = (int)get_bits(&bs, 2);

        if (btype == 0) { /* Uncompressed */
            bs.bit_buf = 0;
            bs.bit_count = 0;
            if (bs.src_pos + 4 > bs.src_len) return -1;
            uint16_t len = (uint16_t)(bs.src[bs.src_pos] | (bs.src[bs.src_pos + 1] << 8));
            bs.src_pos += 4;
            if (bs.src_pos + len > bs.src_len || *out_len + len > out_cap) return -1;
            memcpy(out + *out_len, bs.src + bs.src_pos, len);
            bs.src_pos += len;
            *out_len += len;
        } else if (btype == 1) { /* Fixed Huffman */
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
        } else if (btype == 2) { /* Dynamic Huffman */
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
            return -1; /* Reserved/error */
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

uint32_t *test_load_png(const uint8_t *file_data, size_t file_len, uint32_t *out_w, uint32_t *out_h) {
    if (file_len < 29 || memcmp(file_data, "\x89PNG\r\n\x1a\n", 8) != 0) return NULL;

    size_t pos = 8;
    uint32_t w = 0, h = 0;
    uint8_t bit_depth = 0, color_type = 0, comp = 0, filter = 0, interlace = 0;

    /* Collect IDAT chunks */
    uint8_t *idat_buf = NULL;
    size_t idat_cap = 0, idat_len = 0;

    while (pos + 8 <= file_len) {
        uint32_t chunk_len = ((uint32_t)file_data[pos] << 24) | ((uint32_t)file_data[pos + 1] << 16) |
                             ((uint32_t)file_data[pos + 2] << 8) | (uint32_t)file_data[pos + 3];
        const uint8_t *chunk_type = file_data + pos + 4;
        pos += 8;
        if (pos + chunk_len + 4 > file_len) break;

        if (memcmp(chunk_type, "IHDR", 4) == 0 && chunk_len >= 13) {
            w = ((uint32_t)file_data[pos] << 24) | ((uint32_t)file_data[pos + 1] << 16) |
                ((uint32_t)file_data[pos + 2] << 8) | (uint32_t)file_data[pos + 3];
            h = ((uint32_t)file_data[pos + 4] << 24) | ((uint32_t)file_data[pos + 5] << 16) |
                ((uint32_t)file_data[pos + 6] << 8) | (uint32_t)file_data[pos + 7];
            bit_depth = file_data[pos + 8];
            color_type = file_data[pos + 9];
            comp = file_data[pos + 10];
            filter = file_data[pos + 11];
            interlace = file_data[pos + 12];
        } else if (memcmp(chunk_type, "IDAT", 4) == 0) {
            if (idat_len + chunk_len > idat_cap) {
                idat_cap = (idat_len + chunk_len + 4096) * 2;
                idat_buf = (uint8_t *)realloc(idat_buf, idat_cap);
            }
            memcpy(idat_buf + idat_len, file_data + pos, chunk_len);
            idat_len += chunk_len;
        } else if (memcmp(chunk_type, "IEND", 4) == 0) {
            break;
        }
        pos += chunk_len + 4; /* skip CRC */
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

    *out_w = w;
    *out_h = h;
    return out_rgba;
}

int main(int argc, char **argv) {
    const char *test_path = (argc > 1) ? argv[1] : "upscaled_textures/FIX/ago_eclab2_aaa.png";
    FILE *f = fopen(test_path, "rb");
    if (!f) {
        printf("Could not open %s\n", test_path);
        return 1;
    }
    fseek(f, 0, SEEK_END);
    size_t sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *buf = (uint8_t *)malloc(sz);
    fread(buf, 1, sz, f);
    fclose(f);

    uint32_t w = 0, h = 0;
    uint32_t *rgba = test_load_png(buf, sz, &w, &h);
    if (!rgba) {
        printf("FAILED to decode PNG %s\n", test_path);
        return 1;
    }
    printf("SUCCESS! Decoded %s: %ux%u pixels. First pixel RGBA: 0x%08X\n", test_path, w, h, rgba[0]);
    free(rgba);
    free(buf);
    return 0;
}
