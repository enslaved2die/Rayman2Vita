/* cpa_image: read-only view of Dreamcast Rayman 2 DAT images (.DAT/.SNA) addressed by runtime VA.
 * Portable C99. No GL / SDK / platform includes. Does not own the buffers it points at.
 *
 * Evidence tags: VERIFIED = checked against real data / decompile (see tools/DC_LEVEL_FORMAT.md,
 * re_analysis/dc/notes_geometry.md); INFERRED = fits the data but not independently confirmed.
 */
#ifndef CPA_IMAGE_H
#define CPA_IMAGE_H

#include <stddef.h>
#include <stdint.h>

#define CPA_MAX_REGIONS 4

typedef struct CpaRegion {
    uint32_t       base;  /* VA of file offset 0 */
    const uint8_t *p;
    size_t         n;
} CpaRegion;

typedef struct CpaImage {
    CpaRegion reg[CPA_MAX_REGIONS];
    int       nReg;
} CpaImage;

/* Which DAT a buffer is. Selects the header word that holds the image base VA. */
typedef enum { CPA_DAT_LEVEL = 0, CPA_DAT_FIX = 1 } CpaDatKind;

/* Header-derived base VA of a DAT image (no hard-coded constants).
 * VERIFIED (DC_LEVEL_FORMAT.md sec 1): level DAT base = header u32 word [37] (file off 0x94) = 0x8C804AE0 for LEARN_10;
 *   verified by 0 parent/count/cycle errors over the 272-node SO tree and by 0x8CCCAD54+295*6 == end of file.
 * VERIFIED (same, sec 1): FIX.DAT base = header u32 word [4] (file off 0x10) = 0x8CCE4B20; the only base in a brute-force
 *   scan that made 11/11 level->FIX matrix pointers valid (272/272 global matrices at run time).
 * Returns 1 on success, 0 if the buffer is too small or the value is not a plausible DC RAM address (0x8C000000..0x8D000000). */
int cpa_dat_base(const uint8_t *p, size_t n, CpaDatKind kind, uint32_t *base);

void cpa_image_init(CpaImage *im);
/* Append a region. Returns 1 on success, 0 if full / null. */
int  cpa_image_add(CpaImage *im, const uint8_t *p, size_t n, uint32_t base);
/* Append a region with header-derived base. */
int  cpa_image_add_dat(CpaImage *im, CpaDatKind kind, const uint8_t *p, size_t n);

/* Region containing [va, va+len), or NULL. Overflow-safe. */
const CpaRegion *cpa_region_of(const CpaImage *im, uint32_t va, size_t len);
/* Host pointer for [va, va+len), or NULL when out of bounds. */
const uint8_t *cpa_ptr(const CpaImage *im, uint32_t va, size_t len);

/* Bounds-checked little-endian reads (SH-4 is little endian). Return 1 on success. 32-bit reads require 4-alignment,
 * 16-bit reads 2-alignment (VERIFIED: index arrays are only 2-byte aligned, all other words 4-aligned). */
int cpa_rd8 (const CpaImage *im, uint32_t va, uint8_t *o);
int cpa_rd16(const CpaImage *im, uint32_t va, uint16_t *o);
int cpa_rd32(const CpaImage *im, uint32_t va, uint32_t *o);
int cpa_rdf (const CpaImage *im, uint32_t va, float *o);   /* fails on NaN/Inf */

/* Reads returning 0 on failure (for fields where 0 is an acceptable "absent"). */
uint16_t cpa_u16(const CpaImage *im, uint32_t va);
int16_t  cpa_s16(const CpaImage *im, uint32_t va);
uint32_t cpa_u32(const CpaImage *im, uint32_t va);
float    cpa_f32(const CpaImage *im, uint32_t va);          /* non-finite -> 0 */

/* A plausible pointer: non-null, aligned, 4 (resp. 2) bytes readable inside some region. */
int cpa_is_ptr (const CpaImage *im, uint32_t va);
int cpa_is_ptr16(const CpaImage *im, uint32_t va);

/* Convenience: read whole file into malloc'd buffer (caller frees). Returns 1 on success. */
int cpa_read_file(const char *path, uint8_t **buf, size_t *n);

#endif
