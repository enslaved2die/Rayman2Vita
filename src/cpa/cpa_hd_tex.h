/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine & SH-4 Recomp)
 * File: cpa_hd_tex.h
 *
 * HD Texture Replacement / Upscaled Texture Override Hook
 * Supports loading upscaled PNG textures or raw RGBA (.bin) replacements from:
 *   - Vita: ux0:data/rayman2/textures/<bank>/<name>.png
 *   - Host: ./upscaled_textures/<bank>/<name>.png
 * Gracefully falls back to standard Dreamcast PVR decode if not found.
 * ============================================================================ */

#ifndef CPA_HD_TEX_H
#define CPA_HD_TEX_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CPA_HD_TEX_MAGIC_RAW 0x58543252u /* "R2TX" little-endian */
#define CPA_HD_TEX_MAGIC_DDS 0x20534444u /* "DDS " little-endian */

/* ----------------------------------------------------------------------------
 * 1. Texture Format & Container Types
 * ---------------------------------------------------------------------------- */

typedef enum {
    CPA_HD_TEX_FMT_RGBA8888 = 0, /* Uncompressed 32-bit RGBA (8:8:8:8) */
    CPA_HD_TEX_FMT_DXT1     = 1, /* Hardware UBC1 / DXT1 / BC1 (8 bytes per 4x4 block) */
    CPA_HD_TEX_FMT_DXT5     = 5  /* Hardware UBC3 / DXT5 / BC3 (16 bytes per 4x4 block) */
} CpaHdTexFormat;

typedef struct {
    void          *data;         /* Pixel buffer or compressed DXT block buffer (caller frees) */
    uint32_t       width;        /* Texture width in pixels */
    uint32_t       height;       /* Texture height in pixels */
    uint32_t       data_size;    /* Total byte size of data */
    CpaHdTexFormat format;       /* CPA_HD_TEX_FMT_* */
    uint8_t        mip_count;    /* Number of mip levels (1 for base level only) */
} CpaHdTexture;

/* ----------------------------------------------------------------------------
 * 2. Lightweight Portable PNG Decoder API
 * ---------------------------------------------------------------------------- */

/**
 * @brief Decodes a PNG image from memory into 32-bit RGBA8888 (R in low byte).
 * @param data Raw PNG file bytes in memory.
 * @param sz Size of data in bytes.
 * @param out_w Output pointer receiving width in pixels.
 * @param out_h Output pointer receiving height in pixels.
 * @return Newly allocated 32-bit RGBA pixel buffer (caller frees), or NULL on failure.
 */
uint32_t *cpa_png_load_mem(const uint8_t *data, size_t sz, uint32_t *out_w, uint32_t *out_h);

/**
 * @brief Reads and decodes a PNG file from disk into 32-bit RGBA8888.
 * @param path Path to the .png file.
 * @param out_w Output pointer receiving width in pixels.
 * @param out_h Output pointer receiving height in pixels.
 * @return Newly allocated 32-bit RGBA pixel buffer (caller frees), or NULL on failure.
 */
uint32_t *cpa_png_load_file(const char *path, uint32_t *out_w, uint32_t *out_h);

/* ----------------------------------------------------------------------------
 * 2. Raw Binary Fast Accelerator Format (.bin)
 * ---------------------------------------------------------------------------- */

/**
 * @brief Saves an uncompressed 32-bit RGBA buffer with R2TX header for instant zero-CPU loading on Vita.
 */
int cpa_hd_tex_save_raw(const char *path, uint32_t w, uint32_t h, const uint32_t *rgba);

/**
 * @brief Loads a raw .bin replacement file with R2TX header.
 */
uint32_t *cpa_hd_tex_load_raw_file(const char *path, uint32_t *out_w, uint32_t *out_h);

/* ----------------------------------------------------------------------------
 * 3. HD Texture Override Hook System
 * ---------------------------------------------------------------------------- */

/**
 * @brief Initializes the HD texture replacement subsystem.
 */
void cpa_hd_tex_init(void);

/**
 * @brief Sets the active level bank name (e.g. "LEARN_30", "LEARN_10", "MENU").
 */
void cpa_hd_tex_set_level(const char *level_name);

/**
 * @brief Returns the active level bank name (defaults to "LEARN_10" if unset).
 */
const char *cpa_hd_tex_get_level(void);

/**
 * @brief Configures whether HD texture replacement is enabled (enabled by default).
 */
void cpa_hd_tex_enable(bool enable);
bool cpa_hd_tex_is_enabled(void);

/**
 * @brief Adds a custom search directory root for HD replacement textures.
 */
void cpa_hd_tex_add_search_root(const char *root);

/**
 * @brief Checks if a struct VA belongs to the FIX bank.
 */
bool cpa_hd_tex_is_fix_va(uint32_t struct_va);

/**
 * @brief Decompresses DXT1 or DXT5 block data into newly allocated 32-bit RGBA8888.
 * Used for host validation and CPU fallbacks.
 */
int cpa_dxt_decompress(const void *dxt_data, uint32_t w, uint32_t h, CpaHdTexFormat fmt, uint32_t *out_rgba);

/**
 * @brief Loads a hardware-compressed DDS file (.dds) with DXT1 or DXT5 format.
 */
bool cpa_dds_load_file(const char *path, CpaHdTexture *out_tex);

/**
 * @brief Parses a DDS image already in memory (same rules as cpa_dds_load_file).
 *        Copies the payload into a new buffer; the caller frees out_tex->data.
 */
bool cpa_dds_load_mem(const uint8_t *buf, size_t sz, CpaHdTexture *out_tex);

/**
 * @brief Parses an R2TX raw image in memory. Returns newly allocated RGBA8888 pixels (caller frees).
 */
uint32_t *cpa_hd_tex_load_raw_mem(const uint8_t *buf, size_t sz, uint32_t *out_w, uint32_t *out_h);

/**
 * @brief Master HD texture override query with direct hardware compressed texture support.
 * Checks on disk in priority order:
 *   1. .dds (Hardware-compressed DXT1 / DXT5 - zero CPU decompression overhead)
 *   2. .bin (Fast raw R2TX container)
 *   3. .png (Portable PNG fallback)
 *
 * @param bank Bank name (e.g. "FIX" or "LEARN_30"). If NULL, active level is assumed.
 * @param struct_va Dreamcast texture structure VA (0 if unknown).
 * @param chunk_idx Chunk index within bank (-1 if unknown).
 * @param hint_name Optional filename hint (without extension, or NULL).
 * @param out_tex Output structure receiving texture buffer and format metadata.
 * @return true on hit (caller frees out_tex->data), false if not found.
 */
bool cpa_hd_tex_load_ex(const char *bank, uint32_t struct_va, int chunk_idx,
                        const char *hint_name, CpaHdTexture *out_tex);

/**
 * @brief Master HD texture override query (legacy/convenience wrapper).
 * Always returns 32-bit RGBA8888 pixels. If the disk replacement is DXT1 or DXT5,
 * it is decompressed on the fly so callers expecting raw pixels work seamlessly.
 *
 * @param bank Bank name (e.g. "FIX" or "LEARN_30"). If NULL, active level is assumed.
 * @param struct_va Dreamcast texture structure VA (0 if unknown).
 * @param chunk_idx Chunk index within bank (-1 if unknown).
 * @param hint_name Optional filename hint (without extension, or NULL).
 * @param out_w Output pointer receiving replacement width.
 * @param out_h Output pointer receiving replacement height.
 * @return Newly allocated 32-bit RGBA pixel buffer on hit (caller frees), or NULL if not found.
 */
uint32_t *cpa_hd_tex_load(const char *bank, uint32_t struct_va, int chunk_idx,
                          const char *hint_name, uint32_t *out_w, uint32_t *out_h);

/**
 * @brief Frees all cached bank metadata, name maps, and negative lookup caches.
 */
void cpa_hd_tex_shutdown(void);

/**
 * @brief Number of data rows in the bank's <BANK>.hdtab (0 if the bank has no table).
 *        Loads the bank on first use: not thread-safe, call from the loader's owner thread only.
 */
uint32_t cpa_hd_tex_bank_row_count(const char *bank);

/**
 * @brief Describes table row `row` of a bank (same owner-thread rule as above).
 * @return false if the row does not exist.
 */
bool cpa_hd_tex_bank_row(const char *bank, uint32_t row, uint32_t *out_va, int *out_chunk, bool *out_has_override);

#ifdef __cplusplus
}
#endif

#endif /* CPA_HD_TEX_H */
