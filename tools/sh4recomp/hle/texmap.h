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
    uint8_t loaded;       /* kmLoadTexture seen for this surface */
} HleTex;
void hle_texmap_init(void);
const HleTex *hle_texmap_find(uint32_t vram64);      /* exact start-address match or NULL */
unsigned hle_texmap_count(void);
const HleTex *hle_texmap_at(unsigned i);
void hle_texmap_dump(FILE *o);
#endif
