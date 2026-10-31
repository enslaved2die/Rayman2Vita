/* texmap.h - host-side texture table keyed by PVR VRAM address (filled by the kmCreateTextureSurface / kmLoadTexture hooks). */
#ifndef HLE_TEXMAP_H
#define HLE_TEXMAP_H
#include <stdint.h>
#include <stdio.h>
typedef struct HleTex {
    uint32_t vram;        /* byte address in the PVR 64-bit address space (= value tcw[20:0] << 3 selects) */
    uint32_t desc[8];     /* copy of the 0x20-byte Kamui surface descriptor at the time of the call */
    uint32_t guest_desc;  /* guest address of the descriptor */
    uint32_t src;         /* kmLoadTexture source data pointer (guest) */
    uint32_t m32, m64, nbytes;  /* host debug: bytes of the source payload found linearly (m32) / via 64-bit-area interleave (m64) after kmLoadTexture */
    uint32_t gen;               /* bumped on every create/load of this surface (texture cache invalidation) */
    uint8_t loaded;       /* kmLoadTexture seen for this surface */
} HleTex;
void hle_texmap_init(void);
const HleTex *hle_texmap_find(uint32_t vram64);      /* exact start-address match or NULL */
unsigned hle_texmap_count(void);
const HleTex *hle_texmap_at(unsigned i);
void hle_texmap_dump(FILE *o);
unsigned hle_texmap_gen(uint32_t vram64);            /* generation of the surface starting exactly at vram64 (0 if unknown) */
unsigned hle_texmap_epoch(void);                     /* total create/load count: changes whenever any surface changed */
void hle_ta_pvr_snapshot(uint32_t *out);             /* 1040 words: palette RAM + selected PVR registers, see texmap.c */
void hle_ta_fog_table(uint32_t out[128]);            /* 128 fog table entries (16 bit) */
int hle_ta_background(float col[3][4], uint32_t *isp, uint32_t *tsp, uint32_t *tcw);   /* ISP_BACKGND plane vertex colours (a,r,g,b) */
#endif
