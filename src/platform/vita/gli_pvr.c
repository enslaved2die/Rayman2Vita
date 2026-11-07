/**
 * @file gli_pvr.c
 * @brief Dreamcast PowerVR (PVR) Texture Container, Codebook & Twiddle Decoder Implementation
 */

#include "gli_pvr.h"
#include "gli_vitagl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
#include <vitaGL.h>
#include "vita_shim/os_vita.h"
#include "vita_shim/vfs_vita.h"
#define PVR_MALLOC(sz) CPA_malloc_aligned32(sz)
#define PVR_FREE(ptr)  CPA_free_aligned(ptr)
#else
#define PVR_MALLOC(sz) malloc(sz)
#define PVR_FREE(ptr)  free(ptr)
#define OS_Vita_LogPrintf printf
#define OS_Vita_LogWarn   printf
#define OS_Vita_LogError  printf
void *CPA_LoadFile(const char *path, size_t *out_sz) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    size_t sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    void *buf = malloc(sz);
    if (buf) {
        if (fread(buf, 1, sz, f) != sz) {
            free(buf);
            fclose(f);
            return NULL;
        }
    }
    fclose(f);
    if (out_sz) *out_sz = sz;
    return buf;
}
#define CPA_free free
#endif

/* Global 256-entry RGBA8888 palette for paletted Dreamcast textures */
static uint32_t s_pvr_palette[256];
static bool s_pvr_palette_initialized = false;

/* ----------------------------------------------------------------------------
 * Header Parsing
 * ---------------------------------------------------------------------------- */

bool PVR_fn_bParseHeader(const void *pData, size_t ulSize, PVR_Header *pOutHdr) {
    if (!pData || ulSize < 16 || !pOutHdr) {
        return false;
    }

    memset(pOutHdr, 0, sizeof(PVR_Header));
    const uint8_t *pBytes = (const uint8_t *)pData;
    size_t pvrt_offset = 0;

    /* Check for GBIX chunk at offset 0 */
    uint32_t magic0 = (uint32_t)pBytes[0] | ((uint32_t)pBytes[1] << 8) |
                      ((uint32_t)pBytes[2] << 16) | ((uint32_t)pBytes[3] << 24);

    if (magic0 == PVR_MAGIC_GBIX) {
        if (ulSize < 32) {
            return false;
        }
        uint32_t gbix_payload_sz = (uint32_t)pBytes[4] | ((uint32_t)pBytes[5] << 8) |
                                   ((uint32_t)pBytes[6] << 16) | ((uint32_t)pBytes[7] << 24);
        pOutHdr->bHasGBIX = true;
        pOutHdr->uGlobalIndex = (uint32_t)pBytes[8] | ((uint32_t)pBytes[9] << 8) |
                                ((uint32_t)pBytes[10] << 16) | ((uint32_t)pBytes[11] << 24);
        pvrt_offset = 8 + (size_t)gbix_payload_sz;
    } else if (magic0 == PVR_MAGIC_PVRT) {
        pvrt_offset = 0;
    } else {
        /* Search first 64 bytes for PVRT chunk */
        bool found = false;
        for (size_t i = 0; i + 16 <= ulSize && i < 64; i++) {
            uint32_t m = (uint32_t)pBytes[i] | ((uint32_t)pBytes[i + 1] << 8) |
                         ((uint32_t)pBytes[i + 2] << 16) | ((uint32_t)pBytes[i + 3] << 24);
            if (m == PVR_MAGIC_PVRT) {
                pvrt_offset = i;
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    if (pvrt_offset + 16 > ulSize) {
        return false;
    }

    /* Verify PVRT magic */
    uint32_t pvrt_magic = (uint32_t)pBytes[pvrt_offset] | ((uint32_t)pBytes[pvrt_offset + 1] << 8) |
                          ((uint32_t)pBytes[pvrt_offset + 2] << 16) | ((uint32_t)pBytes[pvrt_offset + 3] << 24);
    if (pvrt_magic != PVR_MAGIC_PVRT) {
        return false;
    }

    uint32_t data_sz = (uint32_t)pBytes[pvrt_offset + 4] | ((uint32_t)pBytes[pvrt_offset + 5] << 8) |
                       ((uint32_t)pBytes[pvrt_offset + 6] << 16) | ((uint32_t)pBytes[pvrt_offset + 7] << 24);

    pOutHdr->ePixelFormat = (PVR_PixelFormat)pBytes[pvrt_offset + 8];
    pOutHdr->eDataFormat  = (PVR_DataFormat)pBytes[pvrt_offset + 9];
    pOutHdr->uWidth       = (uint16_t)pBytes[pvrt_offset + 12] | ((uint16_t)pBytes[pvrt_offset + 13] << 8);
    pOutHdr->uHeight      = (uint16_t)pBytes[pvrt_offset + 14] | ((uint16_t)pBytes[pvrt_offset + 15] << 8);

    /* PVRT payload size field counts bytes after the 8-byte PVRT header (so data_sz - 8 is pixel data size) */
    pOutHdr->uDataSize    = (data_sz >= 8) ? (data_sz - 8) : (uint32_t)(ulSize - (pvrt_offset + 16));
    pOutHdr->pData        = pBytes + pvrt_offset + 16;

    /* Sanity clamp to buffer boundaries */
    if (pvrt_offset + 16 + pOutHdr->uDataSize > ulSize) {
        pOutHdr->uDataSize = (uint32_t)(ulSize - (pvrt_offset + 16));
    }

    return (pOutHdr->uWidth > 0 && pOutHdr->uHeight > 0);
}

/* ----------------------------------------------------------------------------
 * Twiddle Bit-Interleaving (Morton Z-Order Curve)
 * ---------------------------------------------------------------------------- */

static inline uint32_t pvr_morton_spread(uint32_t val) {
    val = (val | (val << 8)) & 0x00FF00FFUL;
    val = (val | (val << 4)) & 0x0F0F0F0FUL;
    val = (val | (val << 2)) & 0x33333333UL;
    val = (val | (val << 1)) & 0x55555555UL;
    return val;
}

uint32_t PVR_fn_uTwiddleIndex(uint32_t x, uint32_t y) {
    return (pvr_morton_spread(y) << 0) | (pvr_morton_spread(x) << 1);
}

uint32_t PVR_fn_uTwiddleRectIndex(uint32_t x, uint32_t y, uint32_t w, uint32_t h) {
    if (w == h) {
        return PVR_fn_uTwiddleIndex(x, y);
    }
    if (w > h) {
        uint32_t min_dim = h;
        uint32_t block_idx = x / min_dim;
        uint32_t in_x = x % min_dim;
        return (block_idx * min_dim * min_dim) + PVR_fn_uTwiddleIndex(in_x, y);
    } else {
        uint32_t min_dim = w;
        uint32_t block_idx = y / min_dim;
        uint32_t in_y = y % min_dim;
        return (block_idx * min_dim * min_dim) + PVR_fn_uTwiddleIndex(x, in_y);
    }
}

/* ----------------------------------------------------------------------------
 * Pixel Color Conversion
 * ---------------------------------------------------------------------------- */

uint32_t PVR_fn_uConvertARGB1555toRGBA8888(uint16_t uPixel) {
    uint32_t a = (uPixel & 0x8000) ? 0xFF : 0x00;
    uint32_t r = (uPixel >> 10) & 0x1F;
    uint32_t g = (uPixel >> 5) & 0x1F;
    uint32_t b = uPixel & 0x1F;

    r = (r << 3) | (r >> 2);
    g = (g << 3) | (g >> 2);
    b = (b << 3) | (b >> 2);

    return (a << 24) | (b << 16) | (g << 8) | r;
}

uint32_t PVR_fn_uConvertRGB565toRGBA8888(uint16_t uPixel) {
    uint32_t r = (uPixel >> 11) & 0x1F;
    uint32_t g = (uPixel >> 5) & 0x3F;
    uint32_t b = uPixel & 0x1F;

    r = (r << 3) | (r >> 2);
    g = (g << 2) | (g >> 4);
    b = (b << 3) | (b >> 2);

    return 0xFF000000UL | (b << 16) | (g << 8) | r;
}

uint32_t PVR_fn_uConvertARGB4444toRGBA8888(uint16_t uPixel) {
    uint32_t a = (uPixel >> 12) & 0x0F;
    uint32_t r = (uPixel >> 8) & 0x0F;
    uint32_t g = (uPixel >> 4) & 0x0F;
    uint32_t b = uPixel & 0x0F;

    a = (a << 4) | a;
    r = (r << 4) | r;
    g = (g << 4) | g;
    b = (b << 4) | b;

    return (a << 24) | (b << 16) | (g << 8) | r;
}

static void pvr_init_default_palette(void) {
    if (s_pvr_palette_initialized) return;
    for (uint32_t i = 0; i < 256; i++) {
        /* Standard grayscale fallback if uninitialized */
        s_pvr_palette[i] = 0xFF000000UL | (i << 16) | (i << 8) | i;
    }
    s_pvr_palette_initialized = true;
}

void PVR_fn_vSetPalette(const void *pPaletteData, uint32_t uEntries, uint32_t ePalFormat) {
    if (!pPaletteData || uEntries == 0) return;
    if (uEntries > 256) uEntries = 256;

    const uint16_t *p16 = (const uint16_t *)pPaletteData;
    const uint32_t *p32 = (const uint32_t *)pPaletteData;

    for (uint32_t i = 0; i < uEntries; i++) {
        switch (ePalFormat) {
            case PVR_PIXEL_ARGB1555:
                s_pvr_palette[i] = PVR_fn_uConvertARGB1555toRGBA8888(p16[i]);
                break;
            case PVR_PIXEL_RGB565:
                s_pvr_palette[i] = PVR_fn_uConvertRGB565toRGBA8888(p16[i]);
                break;
            case PVR_PIXEL_ARGB4444:
                s_pvr_palette[i] = PVR_fn_uConvertARGB4444toRGBA8888(p16[i]);
                break;
            default:
                s_pvr_palette[i] = p32[i];
                break;
        }
    }
    s_pvr_palette_initialized = true;
}

const uint32_t *PVR_fn_pGetActivePalette(void) {
    if (!s_pvr_palette_initialized) {
        pvr_init_default_palette();
    }
    return s_pvr_palette;
}

uint32_t PVR_fn_uConvertPaletted4toRGBA8888(uint8_t uIndex, const uint32_t *pPalette) {
    const uint32_t *pal = pPalette ? pPalette : PVR_fn_pGetActivePalette();
    return pal[uIndex & 0x0F];
}

uint32_t PVR_fn_uConvertPaletted8toRGBA8888(uint8_t uIndex, const uint32_t *pPalette) {
    const uint32_t *pal = pPalette ? pPalette : PVR_fn_pGetActivePalette();
    return pal[uIndex];
}

static inline uint32_t pvr_convert_16bit(uint16_t raw, PVR_PixelFormat fmt) {
    switch (fmt) {
        case PVR_PIXEL_ARGB1555: return PVR_fn_uConvertARGB1555toRGBA8888(raw);
        case PVR_PIXEL_RGB565:   return PVR_fn_uConvertRGB565toRGBA8888(raw);
        case PVR_PIXEL_ARGB4444: return PVR_fn_uConvertARGB4444toRGBA8888(raw);
        default:                 return PVR_fn_uConvertARGB1555toRGBA8888(raw);
    }
}

/* ----------------------------------------------------------------------------
 * Format Decoders
 * ---------------------------------------------------------------------------- */

bool PVR_fn_bDecodeTwiddled(const PVR_Header *pHdr, uint32_t *pOutRGBA) {
    if (!pHdr || !pHdr->pData || !pOutRGBA) {
        return false;
    }

    uint32_t w = pHdr->uWidth;
    uint32_t h = pHdr->uHeight;
    size_t full_level_bytes = (size_t)w * h * 2;

    /* In mipmapped streams, the highest resolution level is stored at the tail */
    const uint8_t *src_bytes = pHdr->pData;
    if (pHdr->uDataSize >= full_level_bytes) {
        src_bytes = (pHdr->pData + pHdr->uDataSize) - full_level_bytes;
    }
    const uint16_t *src16 = (const uint16_t *)src_bytes;

    for (uint32_t y = 0; y < h; y++) {
        for (uint32_t x = 0; x < w; x++) {
            uint32_t tw_idx = PVR_fn_uTwiddleRectIndex(x, y, w, h);
            uint16_t raw = src16[tw_idx];
            pOutRGBA[y * w + x] = pvr_convert_16bit(raw, pHdr->ePixelFormat);
        }
    }

    return true;
}

bool PVR_fn_bDecodeVQ(const PVR_Header *pHdr, uint32_t *pOutRGBA) {
    if (!pHdr || !pHdr->pData || !pOutRGBA || pHdr->uDataSize < 2048) {
        return false;
    }

    uint32_t w = pHdr->uWidth;
    uint32_t h = pHdr->uHeight;
    uint32_t bx_count = (w + 1) / 2;
    uint32_t by_count = (h + 1) / 2;
    size_t index_bytes = (size_t)bx_count * by_count;

    /* Codebook occupies first 2048 bytes (256 entries x 4 16-bit words) */
    const uint16_t *pCodebook = (const uint16_t *)pHdr->pData;

    /* The index table for full resolution is at the end of the payload */
    if (pHdr->uDataSize < 2048 + index_bytes) {
        return false;
    }
    const uint8_t *pIndices = (pHdr->pData + pHdr->uDataSize) - index_bytes;

    for (uint32_t by = 0; by < by_count; by++) {
        for (uint32_t bx = 0; bx < bx_count; bx++) {
            uint32_t tw_idx = PVR_fn_uTwiddleRectIndex(bx, by, bx_count, by_count);
            uint8_t entry = pIndices[tw_idx];
            const uint16_t *block = &pCodebook[entry * 4];

            /* Texels in 2x2 block in PowerVR Morton order:
             * block[0]: (x=0, y=0)
             * block[1]: (x=0, y=1)
             * block[2]: (x=1, y=0)
             * block[3]: (x=1, y=1)
             */
            uint32_t x0 = bx * 2;
            uint32_t y0 = by * 2;
            uint32_t x1 = x0 + 1;
            uint32_t y1 = y0 + 1;

            if (x0 < w && y0 < h) pOutRGBA[y0 * w + x0] = pvr_convert_16bit(block[0], pHdr->ePixelFormat);
            if (x0 < w && y1 < h) pOutRGBA[y1 * w + x0] = pvr_convert_16bit(block[1], pHdr->ePixelFormat);
            if (x1 < w && y0 < h) pOutRGBA[y0 * w + x1] = pvr_convert_16bit(block[2], pHdr->ePixelFormat);
            if (x1 < w && y1 < h) pOutRGBA[y1 * w + x1] = pvr_convert_16bit(block[3], pHdr->ePixelFormat);
        }
    }

    return true;
}

bool PVR_fn_bDecodePaletted(const PVR_Header *pHdr, const uint32_t *pPalette, uint32_t *pOutRGBA) {
    if (!pHdr || !pHdr->pData || !pOutRGBA) {
        return false;
    }

    uint32_t w = pHdr->uWidth;
    uint32_t h = pHdr->uHeight;
    const uint32_t *pal = pPalette ? pPalette : PVR_fn_pGetActivePalette();

    if (pHdr->ePixelFormat == PVR_PIXEL_PAL8BPP) {
        size_t full_bytes = (size_t)w * h;
        if (pHdr->uDataSize < full_bytes) return false;
        const uint8_t *src = (pHdr->pData + pHdr->uDataSize) - full_bytes;

        for (uint32_t y = 0; y < h; y++) {
            for (uint32_t x = 0; x < w; x++) {
                uint32_t tw_idx = PVR_fn_uTwiddleRectIndex(x, y, w, h);
                uint8_t pal_idx = src[tw_idx];
                pOutRGBA[y * w + x] = pal[pal_idx];
            }
        }
        return true;
    } else if (pHdr->ePixelFormat == PVR_PIXEL_PAL4BPP) {
        size_t full_bytes = ((size_t)w * h + 1) / 2;
        if (pHdr->uDataSize < full_bytes) return false;
        const uint8_t *src = (pHdr->pData + pHdr->uDataSize) - full_bytes;

        for (uint32_t y = 0; y < h; y++) {
            for (uint32_t x = 0; x < w; x++) {
                uint32_t tw_idx = PVR_fn_uTwiddleRectIndex(x, y, w, h);
                uint8_t byte_val = src[tw_idx >> 1];
                uint8_t pal_idx = (tw_idx & 1) ? (byte_val >> 4) : (byte_val & 0x0F);
                pOutRGBA[y * w + x] = pal[pal_idx & 0x0F];
            }
        }
        return true;
    }

    return false;
}

static bool pvr_decode_linear(const PVR_Header *pHdr, uint32_t *pOutRGBA) {
    uint32_t w = pHdr->uWidth;
    uint32_t h = pHdr->uHeight;
    const uint16_t *src16 = (const uint16_t *)pHdr->pData;
    for (uint32_t i = 0; i < w * h; i++) {
        pOutRGBA[i] = pvr_convert_16bit(src16[i], pHdr->ePixelFormat);
    }
    return true;
}

uint32_t *PVR_fn_p_stLoadTexture(const void *pData, size_t ulSize, uint32_t *pOutWidth, uint32_t *pOutHeight, uint32_t **ppOutRGBA) {
    if (!pData || ulSize < 16) {
        return NULL;
    }

    PVR_Header hdr;
    if (!PVR_fn_bParseHeader(pData, ulSize, &hdr)) {
        return NULL;
    }

    size_t pixel_count = (size_t)hdr.uWidth * hdr.uHeight;
    uint32_t *pRGBA = (uint32_t *)PVR_MALLOC(pixel_count * sizeof(uint32_t));
    if (!pRGBA) {
        return NULL;
    }

    bool success = false;
    switch (hdr.eDataFormat) {
        case PVR_DATA_TWIDDLED:
        case PVR_DATA_TWIDDLED_MIPMAP:
        case PVR_DATA_RECTANGLE_TWIDDLED:
            success = PVR_fn_bDecodeTwiddled(&hdr, pRGBA);
            break;

        case PVR_DATA_VQ:
        case PVR_DATA_VQ_MIPMAP:
        case PVR_DATA_SMALL_VQ:
        case PVR_DATA_SMALL_VQ_MIPMAP:
            success = PVR_fn_bDecodeVQ(&hdr, pRGBA);
            break;

        case PVR_DATA_PAL8_TWIDDLED:
        case PVR_DATA_PAL8_TWIDDLED_MM:
        case PVR_DATA_PAL4_TWIDDLED:
        case PVR_DATA_PAL4_TWIDDLED_MM:
            success = PVR_fn_bDecodePaletted(&hdr, NULL, pRGBA);
            break;

        case PVR_DATA_RECTANGLE:
        case PVR_DATA_SQUARE_RAW:
            success = pvr_decode_linear(&hdr, pRGBA);
            break;

        default:
            /* Fallback to twiddled */
            success = PVR_fn_bDecodeTwiddled(&hdr, pRGBA);
            break;
    }

    if (!success) {
        PVR_FREE(pRGBA);
        return NULL;
    }

    if (pOutWidth)  *pOutWidth  = hdr.uWidth;
    if (pOutHeight) *pOutHeight = hdr.uHeight;
    if (ppOutRGBA)  *ppOutRGBA  = pRGBA;

    return pRGBA;
}

void PVR_fn_vFreeTexture(uint32_t *pRGBA) {
    if (pRGBA) {
        PVR_FREE(pRGBA);
    }
}

/* ----------------------------------------------------------------------------
 * Container Streaming (.TEX Bank LZSS Decompression)
 * ---------------------------------------------------------------------------- */

size_t PVR_fn_uDecompressLZSS(const uint8_t *pSrc, size_t ulSrcSize, uint8_t *pDst, size_t ulDstCapacity) {
    if (!pSrc || ulSrcSize == 0 || !pDst || ulDstCapacity == 0) {
        return 0;
    }

    size_t src_pos = 0;
    size_t dst_pos = 0;

    while (src_pos < ulSrcSize && dst_pos < ulDstCapacity) {
        uint8_t tag = pSrc[src_pos];
        if ((tag & 1) == 0) {
            src_pos++;
            if (tag == 0) {
                /* 4 literal bytes */
                if (src_pos + 4 > ulSrcSize || dst_pos + 4 > ulDstCapacity) {
                    break;
                }
                memcpy(pDst + dst_pos, pSrc + src_pos, 4);
                src_pos += 4;
                dst_pos += 4;
            } else {
                /* (tag >> 2) literal bytes */
                uint32_t count = (uint32_t)(tag >> 2);
                if (src_pos + count > ulSrcSize || dst_pos + count > ulDstCapacity) {
                    break;
                }
                memcpy(pDst + dst_pos, pSrc + src_pos, count);
                src_pos += count;
                dst_pos += count;
            }
        } else {
            /* Match copy (32-bit token) */
            if (src_pos + 4 > ulSrcSize) {
                break;
            }
            uint32_t val = (uint32_t)pSrc[src_pos] |
                           ((uint32_t)pSrc[src_pos + 1] << 8) |
                           ((uint32_t)pSrc[src_pos + 2] << 16) |
                           ((uint32_t)pSrc[src_pos + 3] << 24);
            src_pos += 4;

            uint32_t length = (val >> 24) & 0xFF;
            uint32_t offset = (val & 0x00FFFFFEUL) >> 1;

            if (offset == 0 || offset > dst_pos) {
                break; /* Invalid back reference */
            }
            if (dst_pos + length > ulDstCapacity) {
                length = (uint32_t)(ulDstCapacity - dst_pos);
            }

            for (uint32_t i = 0; i < length; i++) {
                pDst[dst_pos] = pDst[dst_pos - offset];
                dst_pos++;
            }
        }
    }

    return dst_pos;
}

bool PVR_fn_bLoadTexBank(const void *pTexData, size_t ulTexSize, PVR_TextureBank *pOutBank) {
    if (!pTexData || ulTexSize < 8 || !pOutBank) {
        return false;
    }

    memset(pOutBank, 0, sizeof(PVR_TextureBank));
    const uint8_t *pData = (const uint8_t *)pTexData;

    /* Check if archive is LZSS compressed (begins with "LZSS" magic) */
    uint32_t magic = (uint32_t)pData[0] | ((uint32_t)pData[1] << 8) |
                     ((uint32_t)pData[2] << 16) | ((uint32_t)pData[3] << 24);

    size_t capacity = 64;
    pOutBank->ppTextureBuffers = (uint8_t **)malloc(capacity * sizeof(uint8_t *));
    pOutBank->pTextureSizes    = (size_t *)malloc(capacity * sizeof(size_t));
    if (!pOutBank->ppTextureBuffers || !pOutBank->pTextureSizes) {
        PVR_fn_vFreeTexBank(pOutBank);
        return false;
    }

    /* Scratch buffer for decompressing individual PVR textures (up to 2MB) */
    size_t scratch_cap = 2 * 1024 * 1024;
    uint8_t *pScratch = (uint8_t *)malloc(scratch_cap);
    if (!pScratch) {
        PVR_fn_vFreeTexBank(pOutBank);
        return false;
    }

    if (magic == PVR_MAGIC_LZSS) {
        size_t pos = 4;
        while (pos + 4 <= ulTexSize) {
            uint32_t chunk_sz = (uint32_t)pData[pos] | ((uint32_t)pData[pos + 1] << 8) |
                                ((uint32_t)pData[pos + 2] << 16) | ((uint32_t)pData[pos + 3] << 24);

            if (chunk_sz <= 4 || pos + chunk_sz > ulTexSize) {
                break;
            }

            const uint8_t *chunk_data = pData + pos + 4;
            size_t chunk_data_len = chunk_sz - 4;

            size_t decomp_len = PVR_fn_uDecompressLZSS(chunk_data, chunk_data_len, pScratch, scratch_cap);
            if (decomp_len >= 16) {
                /* Store decompressed PVR */
                if (pOutBank->uTextureCount >= capacity) {
                    capacity *= 2;
                    uint8_t **new_bufs = (uint8_t **)realloc(pOutBank->ppTextureBuffers, capacity * sizeof(uint8_t *));
                    size_t *new_sizes = (size_t *)realloc(pOutBank->pTextureSizes, capacity * sizeof(size_t));
                    if (!new_bufs || !new_sizes) {
                        free(pScratch);
                        PVR_fn_vFreeTexBank(pOutBank);
                        return false;
                    }
                    pOutBank->ppTextureBuffers = new_bufs;
                    pOutBank->pTextureSizes = new_sizes;
                }

                uint8_t *tex_copy = (uint8_t *)malloc(decomp_len);
                if (tex_copy) {
                    memcpy(tex_copy, pScratch, decomp_len);
                    pOutBank->ppTextureBuffers[pOutBank->uTextureCount] = tex_copy;
                    pOutBank->pTextureSizes[pOutBank->uTextureCount] = decomp_len;
                    pOutBank->uTextureCount++;
                }
            }

            pos += chunk_sz;
        }
    } else {
        /* Uncompressed texture stream */
        size_t pos = 0;
        while (pos + 16 <= ulTexSize) {
            PVR_Header h;
            if (!PVR_fn_bParseHeader(pData + pos, ulTexSize - pos, &h)) {
                break;
            }
            size_t total_pvr_sz = (size_t)(h.pData - (pData + pos)) + h.uDataSize;
            if (total_pvr_sz == 0 || pos + total_pvr_sz > ulTexSize) {
                break;
            }

            if (pOutBank->uTextureCount >= capacity) {
                capacity *= 2;
                pOutBank->ppTextureBuffers = (uint8_t **)realloc(pOutBank->ppTextureBuffers, capacity * sizeof(uint8_t *));
                pOutBank->pTextureSizes = (size_t *)realloc(pOutBank->pTextureSizes, capacity * sizeof(size_t));
            }

            uint8_t *tex_copy = (uint8_t *)malloc(total_pvr_sz);
            if (tex_copy) {
                memcpy(tex_copy, pData + pos, total_pvr_sz);
                pOutBank->ppTextureBuffers[pOutBank->uTextureCount] = tex_copy;
                pOutBank->pTextureSizes[pOutBank->uTextureCount] = total_pvr_sz;
                pOutBank->uTextureCount++;
            }
            pos += total_pvr_sz;
        }
    }

    free(pScratch);
    return (pOutBank->uTextureCount > 0);
}

void PVR_fn_vFreeTexBank(PVR_TextureBank *pBank) {
    if (!pBank) return;
    if (pBank->ppTextureBuffers) {
        for (uint32_t i = 0; i < pBank->uTextureCount; i++) {
            if (pBank->ppTextureBuffers[i]) {
                free(pBank->ppTextureBuffers[i]);
            }
        }
        free(pBank->ppTextureBuffers);
        pBank->ppTextureBuffers = NULL;
    }
    if (pBank->pTextureSizes) {
        free(pBank->pTextureSizes);
        pBank->pTextureSizes = NULL;
    }
    pBank->uTextureCount = 0;
}

/* ----------------------------------------------------------------------------
 * Container Streaming (.CNT OpenSpace Archive Reader)
 * ---------------------------------------------------------------------------- */

bool CNT_fn_bOpen(const void *pData, size_t ulSize, CNT_Archive *pOutArchive) {
    if (!pData || ulSize < 12 || !pOutArchive) {
        return false;
    }

    memset(pOutArchive, 0, sizeof(CNT_Archive));
    const uint8_t *pBytes = (const uint8_t *)pData;

    pOutArchive->pRawData     = pBytes;
    pOutArchive->uArchiveSize = ulSize;

    uint32_t num_dirs  = (uint32_t)pBytes[0] | ((uint32_t)pBytes[1] << 8) |
                         ((uint32_t)pBytes[2] << 16) | ((uint32_t)pBytes[3] << 24);
    uint32_t num_files = (uint32_t)pBytes[4] | ((uint32_t)pBytes[5] << 8) |
                         ((uint32_t)pBytes[6] << 16) | ((uint32_t)pBytes[7] << 24);

    pOutArchive->uDirectoryCount = num_dirs;
    pOutArchive->uFileCount      = num_files;
    pOutArchive->bIsXor          = pBytes[8];
    pOutArchive->bIsChecksum     = pBytes[9];
    pOutArchive->uXorKey         = pBytes[10];

    size_t pos = 11;

    /* Parse directories */
    if (num_dirs > 0) {
        pOutArchive->pDirectories = (CNT_DirectoryEntry *)calloc(num_dirs, sizeof(CNT_DirectoryEntry));
        if (!pOutArchive->pDirectories) {
            CNT_fn_vClose(pOutArchive);
            return false;
        }

        for (uint32_t i = 0; i < num_dirs; i++) {
            if (pos + 4 > ulSize) {
                CNT_fn_vClose(pOutArchive);
                return false;
            }
            uint32_t dir_len = (uint32_t)pBytes[pos] | ((uint32_t)pBytes[pos + 1] << 8) |
                               ((uint32_t)pBytes[pos + 2] << 16) | ((uint32_t)pBytes[pos + 3] << 24);
            pos += 4;

            if (pos + dir_len > ulSize) {
                CNT_fn_vClose(pOutArchive);
                return false;
            }

            size_t copy_len = (dir_len < 127) ? dir_len : 127;
            for (size_t c = 0; c < copy_len; c++) {
                uint8_t ch = pBytes[pos + c];
                if (pOutArchive->bIsXor) {
                    ch ^= pOutArchive->uXorKey;
                }
                pOutArchive->pDirectories[i].szDirName[c] = (char)ch;
            }
            pOutArchive->pDirectories[i].szDirName[copy_len] = '\0';
            pos += dir_len;
        }
    }

    /* Directory checksum byte */
    if (pos < ulSize) {
        pOutArchive->uDirectoryChecksum = pBytes[pos++];
    }

    /* Parse files */
    if (num_files > 0) {
        pOutArchive->pFiles = (CNT_FileEntry *)calloc(num_files, sizeof(CNT_FileEntry));
        if (!pOutArchive->pFiles) {
            CNT_fn_vClose(pOutArchive);
            return false;
        }

        for (uint32_t i = 0; i < num_files; i++) {
            if (pos + 8 > ulSize) {
                CNT_fn_vClose(pOutArchive);
                return false;
            }
            int32_t dir_idx = (int32_t)((uint32_t)pBytes[pos] | ((uint32_t)pBytes[pos + 1] << 8) |
                                        ((uint32_t)pBytes[pos + 2] << 16) | ((uint32_t)pBytes[pos + 3] << 24));
            uint32_t fn_len = (uint32_t)pBytes[pos + 4] | ((uint32_t)pBytes[pos + 5] << 8) |
                              ((uint32_t)pBytes[pos + 6] << 16) | ((uint32_t)pBytes[pos + 7] << 24);
            pos += 8;

            if (pos + fn_len + 16 > ulSize) {
                CNT_fn_vClose(pOutArchive);
                return false;
            }

            pOutArchive->pFiles[i].iDirectoryIndex = dir_idx;
            size_t copy_len = (fn_len < 127) ? fn_len : 127;
            for (size_t c = 0; c < copy_len; c++) {
                uint8_t ch = pBytes[pos + c];
                if (pOutArchive->bIsXor) {
                    ch ^= pOutArchive->uXorKey;
                }
                pOutArchive->pFiles[i].szFileName[c] = (char)ch;
            }
            pOutArchive->pFiles[i].szFileName[copy_len] = '\0';
            pos += fn_len;

            pOutArchive->pFiles[i].uFileXorKey = (uint32_t)pBytes[pos] | ((uint32_t)pBytes[pos + 1] << 8) |
                                                 ((uint32_t)pBytes[pos + 2] << 16) | ((uint32_t)pBytes[pos + 3] << 24);
            pOutArchive->pFiles[i].uChecksum   = (uint32_t)pBytes[pos + 4] | ((uint32_t)pBytes[pos + 5] << 8) |
                                                 ((uint32_t)pBytes[pos + 6] << 16) | ((uint32_t)pBytes[pos + 7] << 24);
            pOutArchive->pFiles[i].uFileOffset = (uint32_t)pBytes[pos + 8] | ((uint32_t)pBytes[pos + 9] << 8) |
                                                 ((uint32_t)pBytes[pos + 10] << 16) | ((uint32_t)pBytes[pos + 11] << 24);
            pOutArchive->pFiles[i].uFileSize   = (uint32_t)pBytes[pos + 12] | ((uint32_t)pBytes[pos + 13] << 8) |
                                                 ((uint32_t)pBytes[pos + 14] << 16) | ((uint32_t)pBytes[pos + 15] << 24);
            pos += 16;

            /* Compute canonical full path */
            if (dir_idx >= 0 && (uint32_t)dir_idx < num_dirs && pOutArchive->pDirectories) {
                snprintf(pOutArchive->pFiles[i].szFullPath, sizeof(pOutArchive->pFiles[i].szFullPath),
                         "%s/%s", pOutArchive->pDirectories[dir_idx].szDirName, pOutArchive->pFiles[i].szFileName);
            } else {
                snprintf(pOutArchive->pFiles[i].szFullPath, sizeof(pOutArchive->pFiles[i].szFullPath),
                         "%s", pOutArchive->pFiles[i].szFileName);
            }

            /* Normalize slashes in full path */
            for (char *p = pOutArchive->pFiles[i].szFullPath; *p; p++) {
                if (*p == '\\') *p = '/';
            }
        }
    }

    return true;
}

static int cnt_path_match(const char *a, const char *b) {
    while (*a && *b) {
        char ca = (*a == '\\') ? '/' : (char)tolower((unsigned char)*a);
        char cb = (*b == '\\') ? '/' : (char)tolower((unsigned char)*b);
        if (ca != cb) return 0;
        a++;
        b++;
    }
    return (*a == '\0' && *b == '\0');
}

const CNT_FileEntry *CNT_fn_pFindFile(const CNT_Archive *pArchive, const char *szPath) {
    if (!pArchive || !pArchive->pFiles || !szPath) {
        return NULL;
    }

    /* Strip leading slashes */
    while (*szPath == '/' || *szPath == '\\') szPath++;

    /* First pass: exact full path match */
    for (uint32_t i = 0; i < pArchive->uFileCount; i++) {
        if (cnt_path_match(pArchive->pFiles[i].szFullPath, szPath)) {
            return &pArchive->pFiles[i];
        }
    }

    /* Second pass: match filename only if szPath has no directory separators */
    const char *slash = strpbrk(szPath, "/\\");
    if (!slash) {
        for (uint32_t i = 0; i < pArchive->uFileCount; i++) {
            if (cnt_path_match(pArchive->pFiles[i].szFileName, szPath)) {
                return &pArchive->pFiles[i];
            }
        }
    }

    return NULL;
}

const uint8_t *CNT_fn_pGetFileData(const CNT_Archive *pArchive, const CNT_FileEntry *pEntry, size_t *pOutSize) {
    if (!pArchive || !pArchive->pRawData || !pEntry) {
        return NULL;
    }
    if ((size_t)pEntry->uFileOffset + pEntry->uFileSize > pArchive->uArchiveSize) {
        return NULL;
    }
    if (pOutSize) {
        *pOutSize = pEntry->uFileSize;
    }
    return pArchive->pRawData + pEntry->uFileOffset;
}

void CNT_fn_vClose(CNT_Archive *pArchive) {
    if (!pArchive) return;
    if (pArchive->pDirectories) {
        free(pArchive->pDirectories);
        pArchive->pDirectories = NULL;
    }
    if (pArchive->pFiles) {
        free(pArchive->pFiles);
        pArchive->pFiles = NULL;
    }
    pArchive->uDirectoryCount = 0;
    pArchive->uFileCount = 0;
    pArchive->pRawData = NULL;
    pArchive->uArchiveSize = 0;
}

/* ----------------------------------------------------------------------------
 * OpenGL / VitaGL Texture Bank Integration
 * ---------------------------------------------------------------------------- */

bool PVR_fn_pDecodeTexture(const void *pData, size_t ulSize, uint32_t *pOutWidth, uint32_t *pOutHeight, uint32_t **ppOutRGBA) {
    if (!pData || ulSize < 16) {
        return false;
    }
    return (PVR_fn_p_stLoadTexture(pData, ulSize, pOutWidth, pOutHeight, ppOutRGBA) != NULL);
}

static GLuint s_aLevelTextures[R2_PVR_MAX_TEXTURES];
static uint32_t s_aTextureVAs[R2_PVR_MAX_TEXTURES];
static uint8_t  s_aTexAlphaMode[R2_PVR_MAX_TEXTURES];   /* 0 opaque, 1 cutout (texel alpha only 0/255), 2 translucent (intermediate alpha present) */
static uint32_t s_uNumLevelTextures = 0;
static uint32_t s_uNumFixTextures = 0;

static bool pvr_strcase_contains(const char *haystack, const char *needle) {
    if (!haystack || !needle) return false;
    size_t hlen = strlen(haystack);
    size_t nlen = strlen(needle);
    if (nlen > hlen) return false;
    for (size_t i = 0; i <= hlen - nlen; i++) {
        if (strncasecmp(haystack + i, needle, nlen) == 0) {
            return true;
        }
    }
    return false;
}

static void pvr_parse_texture_log(const char *log_path, uint32_t start_idx) {
    size_t sz = 0;
    char *txt = (char*)CPA_LoadFile(log_path, &sz);
    if (!txt) {
        char dc_path[256];
        snprintf(dc_path, sizeof(dc_path), "DCDATA/%s", log_path);
        txt = (char*)CPA_LoadFile(dc_path, &sz);
    }
    if (!txt) return;

    char *line = txt;
    char *end = txt + sz;
    uint32_t cur_idx = start_idx;

    while (line < end && cur_idx < R2_PVR_MAX_TEXTURES) {
        char *eol = line;
        while (eol < end && *eol != '\r' && *eol != '\n') {
            eol++;
        }
        *eol = '\0';

        while (*line == ' ' || *line == '\t') line++;
        if (line[0] == '0' && (line[1] == 'x' || line[1] == 'X')) {
            uint32_t va = (uint32_t)strtoul(line, NULL, 16);
            if (va != 0) {
                s_aTextureVAs[cur_idx++] = va;
            }
        }

        line = eol + 1;
        while (line < end && (*line == '\r' || *line == '\n')) {
            line++;
        }
    }

    CPA_free(txt);
}

void R2_PVR_RegisterTextureVA(uint32_t ulTextureIndex, uint32_t ulDreamcastVA) {
    if (ulTextureIndex < R2_PVR_MAX_TEXTURES) {
        s_aTextureVAs[ulTextureIndex] = ulDreamcastVA;
    }
}

bool PVR_fn_bLoadLevelTextures(const char *szTexFileName) {
    if (!szTexFileName || !szTexFileName[0]) {
        return false;
    }

    char base[64] = {0};
    const char *last_slash = strrchr(szTexFileName, '/');
    const char *last_bslash = strrchr(szTexFileName, '\\');
    const char *fname = szTexFileName;
    if (last_slash && last_slash + 1 > fname) fname = last_slash + 1;
    if (last_bslash && last_bslash + 1 > fname) fname = last_bslash + 1;
    size_t flen = strlen(fname);
    if (flen > 4 && strcasecmp(fname + flen - 4, ".TEX") == 0) flen -= 4;
    if (flen >= sizeof(base)) flen = sizeof(base) - 1;
    memcpy(base, fname, flen);
    base[flen] = '\0';

    size_t sz = 0;
    void *pData = CPA_LoadFile(szTexFileName, &sz);
    if (!pData) {
        char dc_path[256];
        snprintf(dc_path, sizeof(dc_path), "DCDATA/%s", szTexFileName);
        pData = CPA_LoadFile(dc_path, &sz);
    }
    if (!pData && !strchr(szTexFileName, '/')) {
        char dc_path[256];
        snprintf(dc_path, sizeof(dc_path), "%s/%s.TEX", base, base);
        pData = CPA_LoadFile(dc_path, &sz);
        if (!pData) {
            snprintf(dc_path, sizeof(dc_path), "DCDATA/%s/%s.TEX", base, base);
            pData = CPA_LoadFile(dc_path, &sz);
        }
    }
    if (!pData) {
        OS_Vita_LogWarn("PVR_fn_bLoadLevelTextures: Texture bank '%s' not found", szTexFileName);
        return false;
    }

    PVR_TextureBank bank;
    if (!PVR_fn_bLoadTexBank(pData, sz, &bank)) {
        OS_Vita_LogError("PVR_fn_bLoadLevelTextures: Failed to parse .TEX bank '%s'", szTexFileName);
        CPA_free(pData);
        return false;
    }

    bool is_fix = pvr_strcase_contains(szTexFileName, "FIX");

    /* If loading a new level bank and previous level textures exist, free only previous level textures */
    if (!is_fix && s_uNumLevelTextures > s_uNumFixTextures) {
        for (uint32_t i = s_uNumFixTextures; i < s_uNumLevelTextures; i++) {
            if (s_aLevelTextures[i] != 0) {
                glDeleteTextures(1, &s_aLevelTextures[i]);
                s_aLevelTextures[i] = 0;
            }
            s_aTextureVAs[i] = 0;
        }
        s_uNumLevelTextures = s_uNumFixTextures;
    }

    uint32_t uploaded = 0;
    for (uint32_t i = 0; i < bank.uTextureCount && s_uNumLevelTextures < R2_PVR_MAX_TEXTURES; i++) {
        uint32_t w = 0, h = 0;
        uint32_t *rgba = NULL;
        if (PVR_fn_pDecodeTexture(bank.ppTextureBuffers[i], bank.pTextureSizes[i], &w, &h, &rgba)) {
            GLuint tex = 0;
            glGenTextures(1, &tex);
            glBindTexture(GL_TEXTURE_2D, tex);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
            {   /* alpha classification from the decoded texel data (evidence for alpha-test vs blend) */
                uint32_t nTexel = w * h, n0 = 0, nMid = 0;
                for (uint32_t t = 0; t < nTexel; t++) {
                    uint32_t a = rgba[t] >> 24;
                    if (a == 0) n0++; else if (a != 255) nMid++;
                }
                s_aTexAlphaMode[s_uNumLevelTextures] = nMid ? 2 : (n0 ? 1 : 0);
            }
            s_aLevelTextures[s_uNumLevelTextures++] = tex;
            uploaded++;
            PVR_fn_vFreeTexture(rgba);
        }
    }

    if (is_fix) {
        s_uNumFixTextures = s_uNumLevelTextures;
        pvr_parse_texture_log("TEXTURE_FIX.LOG", 0);
    } else {
        char log_name[256];
        snprintf(log_name, sizeof(log_name), "%s/TEXTURE_%s.LOG", base, base);
        pvr_parse_texture_log(log_name, s_uNumFixTextures);
        if (s_aTextureVAs[s_uNumFixTextures] == 0) {
            snprintf(log_name, sizeof(log_name), "TEXTURE_%s.LOG", base);
            pvr_parse_texture_log(log_name, s_uNumFixTextures);
        }
    }

    OS_Vita_LogPrintf("[RAYMAN2 VITA] PVR_fn_bLoadLevelTextures: Uploaded %u/%u textures from '%s' (Total GL: %u)\n",
                      uploaded, bank.uTextureCount, szTexFileName, s_uNumLevelTextures);

    PVR_fn_vFreeTexBank(&bank);
    CPA_free(pData);
    return (uploaded > 0);
}

GLuint R2_PVR_GetTextureGLByVA(uint32_t ulVA) {
    if (!ulVA) return 0;
    for (uint32_t i = 0; i < s_uNumLevelTextures; i++) {
        if (s_aTextureVAs[i] == ulVA) return s_aLevelTextures[i];
    }
    return 0;
}

int R2_PVR_GetTextureAlphaModeByVA(uint32_t ulVA) {
    if (!ulVA) return 0;
    for (uint32_t i = 0; i < s_uNumLevelTextures; i++)
        if (s_aTextureVAs[i] == ulVA) return s_aTexAlphaMode[i];
    return 0;
}

GLuint R2_PVR_GetTextureGL(uint32_t ulIndex) {
    if (ulIndex < s_uNumLevelTextures) {
        return s_aLevelTextures[ulIndex];
    }
    return 0;
}

GLuint R2_PVR_ResolveTexture(void *pMaterial, uint32_t ulFlags) {
    /* 1. Authentic Dreamcast Level Texture Index encoded in ulFlags:
     * When (ulFlags & 0xFFFF0000) == 0xFFFF0000, the lower 16 bits encode
     * the direct index into the level's .TEX bank (offset by s_uNumFixTextures).
     */
    if ((ulFlags & 0xFFFF0000U) == 0xFFFF0000U) {
        uint32_t lvlTexIdx = (uint32_t)(ulFlags & 0x0000FFFFU);
        if (s_uNumLevelTextures > s_uNumFixTextures) {
            uint32_t numLvlTex = s_uNumLevelTextures - s_uNumFixTextures;
            if (lvlTexIdx < numLvlTex) {
                GLuint tex = s_aLevelTextures[s_uNumFixTextures + lvlTexIdx];
                if (tex != 0) return tex;
            }
        }
    }

    /* 2. Direct Integer Index */
    if (pMaterial != NULL) {
        uintptr_t uMat = (uintptr_t)pMaterial;
        if (uMat < 1024) {
            if (s_uNumLevelTextures > s_uNumFixTextures && uMat < (s_uNumLevelTextures - s_uNumFixTextures)) {
                GLuint tex = s_aLevelTextures[s_uNumFixTextures + uMat];
                if (tex != 0) return tex;
            }
            if (uMat < s_uNumLevelTextures) {
                GLuint tex = s_aLevelTextures[uMat];
                if (tex != 0) return tex;
            }
        } else {
            /* 3. Dreamcast VA Lookup (Direct or via Material Channel) */
            uint32_t target_va = (uint32_t)uMat;

            for (uint32_t i = 0; i < s_uNumLevelTextures; i++) {
                if (s_aTextureVAs[i] != 0 && s_aTextureVAs[i] == target_va) {
                    if (s_aLevelTextures[i] != 0) return s_aLevelTextures[i];
                }
            }

            /* Resolve material pointer against heap buffer to inspect Material struct */
            const void *pResolved = GLI_VITA_pResolveVA(pMaterial);
            if (pResolved) {
                const uint32_t *pdw = (const uint32_t*)pResolved;
                /* In OpenSpace material: +0x08 is pChannel pointer */
                uint32_t chan_va = pdw[2]; /* +0x08 */
                if (chan_va >= 0x8C000000U) {
                    const void *pChanResolved = GLI_VITA_pResolveVA((const void*)(uintptr_t)chan_va);
                    if (pChanResolved) {
                        uint32_t tex_va = *(const uint32_t*)pChanResolved; /* +0x00 is texture VA */
                        for (uint32_t i = 0; i < s_uNumLevelTextures; i++) {
                            if (s_aTextureVAs[i] != 0 && s_aTextureVAs[i] == tex_va) {
                                if (s_aLevelTextures[i] != 0) return s_aLevelTextures[i];
                            }
                        }
                    }
                }
            }
        }
    }

    /* 4. Upper flag bits fallback ((ulFlags >> 16) & 0x03FF) */
    uint32_t flagTexIdx = (ulFlags >> 16) & 0x03FF;
    if (flagTexIdx > 0 && flagTexIdx < s_uNumLevelTextures) {
        GLuint tex = s_aLevelTextures[flagTexIdx];
        if (tex != 0) return tex;
    }

    /* 5. Fallback: level texture 0 or fix texture 0 */
    if (s_uNumLevelTextures > s_uNumFixTextures && s_aLevelTextures[s_uNumFixTextures] != 0) {
        return s_aLevelTextures[s_uNumFixTextures];
    }
    if (s_uNumLevelTextures > 0 && s_aLevelTextures[0] != 0) {
        return s_aLevelTextures[0];
    }

    return 0;
}

uint32_t PVR_fn_uGetNumLoadedTextures(void) {
    return s_uNumLevelTextures;
}

void PVR_fn_vResetLevelTextures(void) {
    for (uint32_t i = s_uNumFixTextures; i < s_uNumLevelTextures; i++) {
        if (s_aLevelTextures[i] != 0) {
            glDeleteTextures(1, &s_aLevelTextures[i]);
            s_aLevelTextures[i] = 0;
        }
        s_aTextureVAs[i] = 0;
    }
    s_uNumLevelTextures = s_uNumFixTextures;
}

void PVR_fn_vResetAllTextures(void) {
    for (uint32_t i = 0; i < s_uNumLevelTextures; i++) {
        if (s_aLevelTextures[i] != 0) {
            glDeleteTextures(1, &s_aLevelTextures[i]);
            s_aLevelTextures[i] = 0;
        }
        s_aTextureVAs[i] = 0;
    }
    s_uNumLevelTextures = 0;
    s_uNumFixTextures = 0;
}
