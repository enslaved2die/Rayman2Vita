/* texmap.c - hooks on the Kamui texture-surface API so texture uploads are visible on the host.
 *   0x8C0D6A00  int kmCreateTextureSurface-like(desc*)  : allocates VRAM for the surface, writes the VRAM address to desc[7]
 *   0x8C0D6AC0  int kmLoadTexture-like(desc*, src)       : copies src (twiddled/VQ/linear per desc[6]) into the surface in VRAM
 * Both run the original recompiled body (the data path SQ/DMA -> VRAM is modelled by boot.c); the hooks only observe and record
 * (descriptor, return value), they never change the result.  The 32-bit view of VRAM kept by boot.c is converted to the PVR's 64-bit
 * layout by tools/ta_render.py when textures are decoded. */
#include "hle_priv.h"
#include "texmap.h"
#include <string.h>

#define MAXTEX 4096
static HleTex tex[MAXTEX]; static unsigned ntex;
static unsigned long n_create, n_load, n_create_fail;

static HleTex *slot_for(uint32_t vram, uint32_t gd) {
    for (unsigned i = 0; i < ntex; i++) if (tex[i].vram == vram) return &tex[i];
    if (ntex >= MAXTEX) return &tex[MAXTEX - 1];
    memset(&tex[ntex], 0, sizeof tex[0]); tex[ntex].vram = vram; tex[ntex].guest_desc = gd; return &tex[ntex++];
}
static void snap(HleTex *t, uint32_t gd) { for (int i = 0; i < 8; i++) t->desc[i] = LD32(gd + 4 * i); t->guest_desc = gd; }

static void h_create(SH4Ctx *c) {
    uint32_t gd = c->r[4], pr = c->pr;
    hle_orig(c, 0x8C0D6A00); c->pr = pr;
    n_create++;
    int rv = (int)R(0);
    if (rv != 0) n_create_fail++;
    uint32_t vaddr = LD32(gd + 0x1C);
    if (hle_verbose >= 2 || (hle_verbose && rv != 0))
        hle_log("[tex] create desc=%08x -> rv=%d vram=%08x  desc: %08x %08x %08x %08x %08x %08x %08x %08x pr=%08x", gd, rv, vaddr,
                LD32(gd), LD32(gd + 4), LD32(gd + 8), LD32(gd + 12), LD32(gd + 16), LD32(gd + 20), LD32(gd + 24), LD32(gd + 28), pr);
    if (rv == 0) { HleTex *t = slot_for(vaddr, gd); snap(t, gd); }
}
static void h_load(SH4Ctx *c) {
    uint32_t gd = c->r[4], src = c->r[5], pr = c->pr;
    hle_orig(c, 0x8C0D6AC0); c->pr = pr;
    n_load++;
    uint32_t vaddr = LD32(gd + 0x1C);
    if (hle_verbose >= 2) hle_log("[tex] load desc=%08x src=%08x vram=%08x type=%08x fmt=%08x rv=%u pr=%08x", gd, src, vaddr, LD32(gd), LD32(gd + 24), R(0), pr);
    HleTex *t = slot_for(vaddr, gd); snap(t, gd); t->src = src; t->loaded = 1;
}
const HleTex *hle_texmap_find(uint32_t v) { for (unsigned i = 0; i < ntex; i++) if (tex[i].vram == v) return &tex[i]; return 0; }
unsigned hle_texmap_count(void) { return ntex; }
const HleTex *hle_texmap_at(unsigned i) { return i < ntex ? &tex[i] : 0; }
void hle_texmap_dump(FILE *o) {
    fprintf(o, "texture surfaces: %u (create calls %lu, failed %lu, load calls %lu)\n", ntex, n_create, n_create_fail, n_load);
    for (unsigned i = 0; i < ntex; i++)
        fprintf(o, "  vram=%08x loaded=%d src=%08x desc: %08x %08x %08x %08x %08x %08x %08x %08x\n", tex[i].vram, tex[i].loaded, tex[i].src,
                tex[i].desc[0], tex[i].desc[1], tex[i].desc[2], tex[i].desc[3], tex[i].desc[4], tex[i].desc[5], tex[i].desc[6], tex[i].desc[7]);
}
void hle_texmap_init(void) {
    hle_hook(0x8C0D6A00, h_create);
    hle_hook(0x8C0D6AC0, h_load);
}
