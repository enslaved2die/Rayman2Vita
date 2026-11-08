/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine)
 * File: cpa_hd_pak.h
 *
 * HD texture archives (HD_Texture_Plan.md, Phase 5), with duplicates removed.
 *
 * The Dreamcast data stores a texture again in every level that uses it (CD
 * seek cost), so the same override image appears in many banks. The packer
 * therefore keeps each unique payload once, in a shared pool, and each bank
 * only holds an index into it:
 *
 *   <root>/HD.hdpool   pool of unique payloads (shared by every bank)
 *   <root>/<BANK>.hdpak index of that bank's rows (one entry per .hdtab row)
 *
 * Payloads are stored verbatim (the original .dds / .bin / .png bytes), so the
 * decoders are shared with the loose-file path.
 *
 * Pool layout (little-endian):
 *   header   : u32 magic 'R2PL', u32 version (1), u32 payloadCount, u32 reserved (0)
 *   payloads : concatenated
 *
 * Bank index layout (little-endian):
 *   header   : u32 magic 'R2PK', u32 version (2), u32 rowCount, u32 poolBytes
 *   index    : rowCount x { u32 offset, u32 size, u32 kind }   (row i = .hdtab row i)
 *   offset is absolute from the start of HD.hdpool; kind: 0 DDS, 1 raw R2TX, 2 PNG;
 *   size 0 means the row has no payload.
 *
 * An index is used only if its rowCount equals the .hdtab row count, its
 * poolBytes equals the size of the opened pool, and every payload lies inside
 * the pool. Anything else rejects the archive, and the loose files are used.
 * ============================================================================ */

#ifndef CPA_HD_PAK_H
#define CPA_HD_PAK_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CPA_HD_PAK_MAGIC      0x4B503252u /* "R2PK" little-endian: bank index */
#define CPA_HD_PAK_VERSION    2u
#define CPA_HD_POOL_MAGIC     0x4C503252u /* "R2PL" little-endian: shared pool */
#define CPA_HD_POOL_VERSION   1u

typedef enum {
    CPA_HD_PAK_KIND_DDS = 0,
    CPA_HD_PAK_KIND_RAW = 1,
    CPA_HD_PAK_KIND_PNG = 2
} CpaHdPakKind;

typedef struct {
    uint32_t offset;
    uint32_t size;
    uint32_t kind;
} CpaHdPakRow;

typedef struct {
    uint32_t rows;
    CpaHdPakRow *index;
} CpaHdPak;

/**
 * @brief Opens the shared pool (idempotent for the same path). The pool stays open
 *        until cpa_hd_pool_close(). Fails on a bad header or a short file.
 */
bool cpa_hd_pool_open(const char *path);

/** @brief Closes the shared pool. Safe if it is not open. */
void cpa_hd_pool_close(void);

/**
 * @brief Reads a bank index and validates it against the open pool (see the layout
 *        comment). Fails (returns false, leaves p empty) on any mismatch.
 */
bool cpa_hd_pak_open(CpaHdPak *p, const char *path, uint32_t expect_rows);

/** @brief Frees the index. The shared pool is not closed. Safe on an empty archive. */
void cpa_hd_pak_close(CpaHdPak *p);

/**
 * @brief Reads one row's payload from the pool into a newly allocated buffer (caller frees).
 * @return NULL if the row has no payload or the read fails.
 */
uint8_t *cpa_hd_pak_read_row(CpaHdPak *p, uint32_t row, size_t *out_size, uint32_t *out_kind);

#ifdef __cplusplus
}
#endif

#endif /* CPA_HD_PAK_H */
