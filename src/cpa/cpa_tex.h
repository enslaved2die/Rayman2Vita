/* cpa_tex: native PVR texture decoding for the clean-room CPA engine. Portable C99, no GL, no dependency on the other cpa_* files.
 *
 * Input  = one decompressed .TEX chunk (a PVR file: optional "GBIX" block, "PVRT", size, {pixel fmt u8, data fmt u8, u16 flags}, {w u16, h u16}, texel data).
 * Output = RGBA8888 as uint32_t with R in the LOW byte (memory order R,G,B,A), one image per mip level.
 *
 * Provenance / tags (details: re_analysis/dc/notes_tex_decode.md):
 *   VERIFIED  = compared byte-exact against the oracle (the recompiled game): tools/cpa_tests/test_tex.c decodes the .TEX chunks natively and compares them with
 *               the texture memory the guest's own kmLoadTexture filled (decoded by the oracle's TA texture decoder from the guest descriptor's tcw/tsp).
 *   INFERRED  = fits the data / the PVR documentation but has no oracle texture to compare with.
 *   UNKNOWN   = not decoded.
 * Formats the game ships (VERIFIED by histogram of all 9654 chunks of all 78 levels + FIX): pixel fmt 0/1/2 (ARGB1555/RGB565/ARGB4444), data fmt 1 (twiddled, square or
 * rectangular), 2 (twiddled + mipmaps), 4 (VQ + mipmaps), 0xD (twiddled rectangle). Everything else below (palettes, linear, stride, YUV, bump, small VQ) is implemented from the
 * public PVR documentation, is UNVERIFIED against the game (no such chunk exists) and is flagged in CpaPvrInfo.verified = 0. */
#ifndef CPA_TEX_H
#define CPA_TEX_H

#include <stddef.h>
#include <stdint.h>

/* PVR pixel formats (byte 0 of the PVRT format word). */
enum { CPA_PVR_ARGB1555 = 0, CPA_PVR_RGB565 = 1, CPA_PVR_ARGB4444 = 2, CPA_PVR_YUV422 = 3, CPA_PVR_BUMP = 4, CPA_PVR_PAL4 = 5, CPA_PVR_PAL8 = 6 };
/* PVR data formats (byte 1). Names follow the public PVR documentation; only 1, 2, 4, 0xD occur in the game. */
enum { CPA_PVRD_TWIDDLED = 1, CPA_PVRD_TWIDDLED_MIP = 2, CPA_PVRD_VQ = 3, CPA_PVRD_VQ_MIP = 4, CPA_PVRD_PAL4 = 5, CPA_PVRD_PAL4_MIP = 6, CPA_PVRD_PAL8 = 7,
       CPA_PVRD_PAL8_MIP = 8, CPA_PVRD_RECT = 9, CPA_PVRD_STRIDE = 0xB, CPA_PVRD_RECT_TWIDDLED = 0xD, CPA_PVRD_SMALL_VQ = 0x10, CPA_PVRD_SMALL_VQ_MIP = 0x11,
       CPA_PVRD_TWIDDLED_MIP_ALT = 0x12 };

typedef struct CpaPvrInfo {
    uint32_t raw;            /* PVRT format word (CpaTexInfo.raw): low u16 = pixFmt | dataFmt << 8; the upper half carries the wrap/blend bits (see notes_texrewrite.md) */
    uint8_t  pixFmt, dataFmt;
    uint8_t  mip, vq, twiddled, stride, pal;   /* pal = 0, 4 or 8 (bits per index) */
    uint8_t  verified;       /* 1 = the (pixFmt,dataFmt) combination occurs in the game and was byte-compared against the oracle */
    uint8_t  supported;      /* 0 = unknown data format or truncated block: cannot be decoded */
    uint16_t w, h;           /* level 0 size (VERIFIED == the guest surface descriptor desc[3], desc[4] for all 9654 level + 280 FIX textures) */
    uint32_t nLevels;        /* 1 without mip; log2(w)+1 with mip (mip chains are square, down to 1x1) */
    uint32_t pvrtOff;        /* offset of "PVRT" in the block (16 with the 16-byte GBIX preamble the game files use, 0 without) */
    uint32_t dataOff;        /* offset of the texel data (= pvrtOff + 16; the guest hands block+0x20 to kmLoadTexture; VERIFIED the same location) */
    uint32_t dataLen;        /* bytes from dataOff to the end of the block */
    uint32_t needLen;        /* bytes the layout needs (sanity: VERIFIED <= dataLen for every shipped texture) */
} CpaPvrInfo;

/* Decoder options. pal: 16/256 entries of RGBA8888 for palette formats (external, the PVR file does not carry it). strideTexels: row length in texels for dataFmt 0xB
 * (hardware: TEXT_CONTROL stride * 32). bumpK: optional {K1,K2,K3,Q} for bump maps (NULL = the oracle's fixed constants). All NULL/0 for the game's formats. */
typedef struct CpaPvrOpts { const uint32_t *pal; uint32_t strideTexels; const float *bumpK; } CpaPvrOpts;

/* Parse the container header of a decompressed block. Returns 1 if a PVRT header was found and the layout is known (info->supported), else 0 (info is still filled as far as possible). */
int  cpa_pvr_parse(const uint8_t *blk, size_t n, CpaPvrInfo *info);
/* Size of mip level `level` (0 = full size). Returns 0 if level >= nLevels. */
int  cpa_pvr_level_size(const CpaPvrInfo *info, uint32_t level, uint32_t *w, uint32_t *h);
/* Decode one level into out[w*h] (w,h from cpa_pvr_level_size). Returns 0 on success, -1 unsupported, -2 truncated data, -3 bad level/arguments. */
int  cpa_pvr_decode(const CpaPvrInfo *info, const uint8_t *blk, size_t n, const CpaPvrOpts *opt, uint32_t level, uint32_t *out);

/* Single texel converters (R in the low byte). 16-bit formats replicate the high bits into the low bits (5 -> (v<<3)|(v>>2)); ARGB4444 is v*17. */
uint32_t cpa_pvr_px16(uint32_t pixFmt, uint32_t p);
/* Optional filtering helper (same algorithm as the oracle's host decode, so outputs compare byte-exact): every fully transparent texel gets the mean RGB of its non-transparent
 * 8-neighbours (alpha stays 0), so bilinear/mip filtering does not bleed black into sprite edges. Opaque textures are unchanged. */
void cpa_tex_bleed(uint32_t *rgba, uint32_t w, uint32_t h);

/* ---- .TEX bank: all chunks of a .TEX file, decoded (LZSS), parsed, with the texture-struct VA of each ---------------------------------------------------------------
 * Same container as cpa_scene.h (FUN_8c039f80): "LZSS", then per texture {u32 size counted from the size field; payload}. The caller attaches the structure VAs
 * (level: CpaTexInfo.structVa from cpa_tex_table(); FIX: cpa_tex_fix_table()). */
typedef struct CpaTexChunk { uint8_t *blk; size_t len; CpaPvrInfo info; uint32_t structVa; } CpaTexChunk;
typedef struct CpaTexBank { CpaTexChunk *c; uint32_t n; } CpaTexBank;
/* Returns 1 iff every chunk decompressed and carries a PVRT header; the bank is filled with as many chunks as were readable (free it either way). */
int  cpa_texbank_load(const uint8_t *texFile, size_t texN, CpaTexBank *out);
void cpa_texbank_free(CpaTexBank *b);
/* Attach struct VAs (n must equal bank->n). */
int  cpa_texbank_set_vas(CpaTexBank *b, const uint32_t *vas, uint32_t n);
/* Chunk for a texture struct VA, or NULL. */
const CpaTexChunk *cpa_texbank_find(const CpaTexBank *b, uint32_t structVa);
/* Decode level of chunk i. */
int  cpa_texbank_decode(const CpaTexBank *b, uint32_t i, const CpaPvrOpts *opt, uint32_t level, uint32_t *out);

/* FIX texture table. VERIFIED (280/280): FIX.DAT header word at 0x94 = texture count (0x118), word at 0x98 = VA of the u32[count] table of texture-struct VAs, and that table is
 * the LAST count*4 bytes of the file; entry i belongs to FIX.TEX chunk i (the order is also the order of DCDATA/TEXTURE_FIX.LOG). Returns count (0 on failure); vas[] must hold `cap`. */
uint32_t cpa_tex_fix_table(const uint8_t *fixDat, size_t n, uint32_t *vas, uint32_t cap);

/* ---- Kamui surface descriptor <-> TA texture control words ---------------------------------------------------------------------------------------------------------
 * The guest creates one 0x20-byte surface descriptor per texture (texture struct +0 points to it). VERIFIED against all 9654+ textures of 5 levels: desc[3]=w, desc[4]=h,
 * desc[2] = pixFmt << 27, desc[6] bit31 = mip, bit30 = VQ, desc[6] & 0x3F = TSP texture size field ((log2(w)-3) << 3 | (log2(h)-3)), desc[7] = byte address in texture memory.
 * The TA texture control word used by the draw calls is then tcw = (desc6 & 0xC0000000) | desc2 | (desc7 >> 3), tsp size bits = desc6 & 0x3F (twiddled, non-stride). */
static inline uint32_t cpa_desc_tcw(uint32_t desc2, uint32_t desc6, uint32_t desc7) { return (desc6 & 0xC0000000u) | desc2 | (desc7 >> 3); }
static inline uint32_t cpa_desc_tsp_size(uint32_t desc6) { return desc6 & 0x3Fu; }

#endif
