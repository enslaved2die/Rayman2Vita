/* texmap.c - hooks on the Kamui texture-surface API so texture uploads are visible on the host.
 *   0x8C0D6A00  int kmCreateTextureSurface-like(desc*)  : allocates VRAM for the surface, writes the VRAM address to desc[7]
 *   0x8C0D6AC0  int kmLoadTexture-like(desc*, src)       : copies src (twiddled/VQ/linear per desc[6]) into the surface in VRAM
 * Both run the original recompiled body (the data path SQ/DMA -> VRAM is modelled by boot.c); the hooks only observe and record
 * (descriptor, return value), they never change the result.  The 32-bit view of VRAM kept by boot.c is converted to the PVR's 64-bit
 * layout by tools/ta_render.py when textures are decoded. */
#include "hle_priv.h"
#include "texmap.h"
#include "ta.h"
#include <string.h>
#include <stdlib.h>

#define MAXTEX 4096
static HleTex tex[MAXTEX]; static unsigned ntex;
static unsigned s_gen_total;
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
    if (rv == 0) { HleTex *t = slot_for(vaddr, gd); snap(t, gd); t->gen++; s_gen_total++; }
}
static void h_load(SH4Ctx *c) {
    uint32_t gd = c->r[4], src = c->r[5], pr = c->pr;
    hle_orig(c, 0x8C0D6AC0); c->pr = pr;
    n_load++;
    uint32_t vaddr = LD32(gd + 0x1C);
    if (hle_verbose >= 2) hle_log("[tex] load desc=%08x src=%08x vram=%08x type=%08x fmt=%08x rv=%u pr=%08x", gd, src, vaddr, LD32(gd), LD32(gd + 24), R(0), pr);
    HleTex *t = slot_for(vaddr, gd); snap(t, gd); t->src = src; t->loaded = 1; t->gen++; s_gen_total++;
#if !defined(__vita__)
    /* Ground truth for the VRAM address model: after the game's own loader ran, is the source payload found linearly at the 32-bit-area
     * offset (m32) or at the 64-bit-area-interleaved location of the same address (m64)?  (count of equal bytes over the surface size) */
    { uint32_t n = LD32(gd + 0x14); const uint8_t *v = hle_vram_ptr(), *s = hle_ptr(src); uint32_t e32 = 0, e64 = 0;
      if (n > 0x400000 || vaddr + n > 0x800000) n = 0;
      for (uint32_t i = 0; i < n; i++) {
          uint32_t a = vaddr + i, o64 = (a & 3) | ((a & 0x7FFFF8) >> 1) | (((a >> 2) & 1) << 22);
          e32 += v[a] == s[i]; e64 += v[o64] == s[i];
      }
      t->m32 = e32; t->m64 = e64; t->nbytes = n; }
#endif
}
/* Snapshot of the PVR state the texture/blend decode needs (layout shared with tools/ta_render.py's pvrregs.bin):
 * out[0..1023] palette RAM (0xA05F9000), then PAL_RAM_CTRL, TEXT_CONTROL, PT_ALPHA_REF, ISP_FEED_CFG, FOG_COL_RAM, FOG_COL_VERT, FOG_DENSITY,
 * FOG_CLAMP_MAX, FOG_CLAMP_MIN, FPU_CULL_VAL, FPU_PARAM_CFG, HALF_OFFSET, FB_R_CTRL, ISP_BACKGND_T, ISP_BACKGND_D, BORDER_COL. */
#if !defined(__vita__)
char hle_dump_dir[256] = "build_hle";
#endif
void hle_ta_pvr_snapshot(uint32_t *out) {
    static const uint32_t regs[13] = { 0xA05F8108u, 0xA05F80E4u, 0xA05F811Cu, 0xA05F8098u, 0xA05F80B0u, 0xA05F80B4u, 0xA05F80B8u, 0xA05F80BCu,
                                       0xA05F80C0u, 0xA05F8078u, 0xA05F807Cu, 0xA05F8080u, 0xA05F8044u };
    memcpy(out, hle_pvr_regs() + 0x400, 1024 * sizeof(uint32_t));       /* palette RAM = words 0x400.. of the flat PVR register file */
    for (unsigned i = 0; i < 13; i++) out[1024 + i] = hle_reg_get(regs[i]);
#if !defined(__vita__)
    { char pp[400]; snprintf(pp, sizeof pp, "%s/pvrfog.bin", hle_dump_dir); FILE *o = fopen(pp, "wb"); if (o) { uint32_t ft[143]; hle_ta_fog_table(ft); float bc[3][4]; uint32_t bi = 0, bt = 0, bk = 0; hle_ta_background(bc, &bi, &bt, &bk);
        ft[128] = bi; ft[129] = bt; ft[130] = bk; for (int n = 0; n < 3; n++) for (int c = 0; c < 4; c++) { uint32_t u; memcpy(&u, &bc[n][c], 4); ft[131 + n * 4 + c] = u; } fwrite(ft, 4, 143, o); fclose(o); } }   /* host debug: fog table + background plane for tools/ta_render.py */
#endif
    out[1037] = hle_reg_get(0xA05F808Cu); out[1038] = hle_reg_get(0xA05F8088u); out[1039] = hle_reg_get(0xA05F8040u);   /* ISP_BACKGND_T, ISP_BACKGND_D, BORDER_COL */
}
/* Fog table: 128 x 16-bit entries at 0xA05F8200 (low half of each register word). */
void hle_ta_fog_table(uint32_t out[128]) { const uint32_t *r = hle_pvr_regs() + 0x80; for (unsigned i = 0; i < 128; i++) out[i] = r[i] & 0xFFFFu; }   /* 0xA05F8200 = flat word 0x80 */
/* Background plane (ISP_BACKGND_T/D): the game's Kamui setup writes a 3-vertex parameter into the 64-bit area at (tag_address<<2), laid out as
 * ISP, TSP, TCW, then 3 x (x, y, z, [skip words], colour) with skip = ISP_BACKGND_T[26:24] [PROVEN on the title/menu frames: 0x8080ff at 3 vertices].
 * Returns 1 and the three vertex colours as float {a,r,g,b} (valid only for untextured planes; textured ones use the colour words only if skip allows). */
static uint32_t v64rd(uint32_t a) { uint32_t o = (a & 3) | ((a & 0x7FFFF8) >> 1) | (((a >> 2) & 1) << 22), x = 0; memcpy(&x, hle_vram_ptr() + o, 4); return x; }
int hle_ta_background(float col[3][4], uint32_t *isp, uint32_t *tsp, uint32_t *tcw) {
    uint32_t bgt = hle_reg_get(0xA05F808Cu), a = ((bgt >> 3) & 0x1FFFFFu) * 4, skip = (bgt >> 24) & 7;
    if (!hle_vram_ptr()) return 0;
    uint32_t i = v64rd(a), t = v64rd(a + 4), k = v64rd(a + 8);
    if (isp) *isp = i; if (tsp) *tsp = t; if (tcw) *tcw = k;
    int any = 0;
    for (int n = 0; n < 3; n++) {   /* vertex = x y z + `skip` words; the first skipped word is the base colour (untextured plane) [PROVEN: skip=1, 4-word vertices, 0x8080ff] */
        uint32_t c = v64rd(a + 12 + 4 * (3 + skip) * n + 12);
        col[n][0] = ((c >> 24) & 255) / 255.f; col[n][1] = ((c >> 16) & 255) / 255.f; col[n][2] = ((c >> 8) & 255) / 255.f; col[n][3] = (c & 255) / 255.f;
        any |= c != 0;
    }
    return any;
}
unsigned hle_texmap_epoch(void) { return s_gen_total; }
unsigned hle_texmap_gen(uint32_t v) { for (unsigned i = 0; i < ntex; i++) if (tex[i].vram == v) return tex[i].gen; return 0; }
const HleTex *hle_texmap_find(uint32_t v) { for (unsigned i = 0; i < ntex; i++) if (tex[i].vram == v) return &tex[i]; return 0; }
unsigned hle_texmap_count(void) { return ntex; }
const HleTex *hle_texmap_at(unsigned i) { return i < ntex ? &tex[i] : 0; }
void hle_texmap_dump(FILE *o) {
    fprintf(o, "texture surfaces: %u (create calls %lu, failed %lu, load calls %lu)\n", ntex, n_create, n_create_fail, n_load);
    for (unsigned i = 0; i < ntex; i++)
        fprintf(o, "  vram=%08x loaded=%d src=%08x m32=%u m64=%u of %u desc: %08x %08x %08x %08x %08x %08x %08x %08x\n", tex[i].vram, tex[i].loaded, tex[i].src, tex[i].m32, tex[i].m64, tex[i].nbytes,
                tex[i].desc[0], tex[i].desc[1], tex[i].desc[2], tex[i].desc[3], tex[i].desc[4], tex[i].desc[5], tex[i].desc[6], tex[i].desc[7]);
}
#if !defined(__vita__)
static void texmap_atexit(void) {   /* host harness: list every surface the game created/loaded (build_hle/texmap.txt) */
    FILE *o = fopen("build_hle/texmap.txt", "w"); if (o) { hle_texmap_dump(o); fclose(o); }
}
#endif
void hle_texmap_init(void) {
#if !defined(__vita__)
    atexit(texmap_atexit);
#endif
    hle_hook(0x8C0D6A00, h_create);
    hle_hook(0x8C0D6AC0, h_load);
}

/* ---- texture-cache validity stamps ------------------------------------------------------------------------------------------------------------------------
 * A decoded texture stays valid as long as (a) the VRAM bytes it was decoded from and (b) for paletted formats the palette entries it uses are unchanged.  The old check hashed the
 * texture bytes once per frame and texture (1-4 MB/frame).  Now: VRAM page epochs (boot.c) answer "was any page of this texture written since the decode" in O(pages); only if
 * a page was written is the content hash computed, and if it still equals the stored hash the stamp is refreshed (a neighbouring texture sharing the 4 KiB page, or an identical
 * rewrite, does not force a re-decode).  Paletted textures compare the palette epoch first and fall back to the hash of the 16/256 entries in use. */
HleTexStats hle_texstats;
static uint32_t tex_hash_range(uint32_t tcw, uint32_t tsp, uint32_t *off_out, uint32_t *len_out)
{
    uint32_t off = (tcw & 0x1FFFFFu) << 3, n = ta_tex_byte_len(tcw, tsp);
    if (off >= (8u << 20)) { n = 0; off = 0; }
    else if (off + n > (8u << 20)) n = (8u << 20) - off;
    *off_out = off; *len_out = n; return n;
}
static uint32_t tex_content_hash(uint32_t tcw, uint32_t tsp)
{
    uint32_t off, n; tex_hash_range(tcw, tsp, &off, &n);
    if (!n) return 0;
    hle_texstats.hash_bytes += n; hle_texstats.hash_calls++;
    return ta_hash_bytes(hle_vram_ptr() + off, n);
}
/* hash of the palette entries a 4bpp/8bpp texture reads + PAL_RAM_CTRL; 0 for other formats */
static uint32_t tex_pal_hash(uint32_t tcw)
{
    int fmt = (int)((tcw >> 27) & 7);
    const uint32_t *pr = hle_pvr_regs(), *pal = pr + 0x400;
    uint32_t h = 2166136261u;
    if (fmt == 5) { uint32_t b = ((tcw >> 21) & 63) << 4; for (uint32_t i = 0; i < 16; i++) { h ^= pal[(b + i) & 1023]; h *= 16777619u; } }
    else if (fmt == 6) { uint32_t b = ((tcw >> 25) & 3) << 8; for (uint32_t i = 0; i < 256; i++) { h ^= pal[(b + i) & 1023]; h *= 16777619u; } }
    else return 0;
    hle_texstats.pal_hashes++;
    return h ^ pr[(0x005F8108u - 0x005F8000u) >> 2];
}
void hle_texstamp_set(HleTexStamp *s, uint32_t tcw, uint32_t tsp)
{
    uint32_t off, n; tex_hash_range(tcw, tsp, &off, &n);
    s->vram_epoch = hle_vram_max_epoch(off, n);
    s->content_hash = tex_content_hash(tcw, tsp);
    s->pal_epoch = hle_pvr_pal_epoch();
    s->pal_hash = tex_pal_hash(tcw);
}
int hle_texstamp_valid(HleTexStamp *s, uint32_t tcw, uint32_t tsp)
{
    int fmt = (int)((tcw >> 27) & 7);
    hle_texstats.checks++;
    if (fmt == 5 || fmt == 6) {
        uint32_t pe = hle_pvr_pal_epoch();
        if (pe != s->pal_epoch) {
            if (tex_pal_hash(tcw) != s->pal_hash) { hle_texstats.invalid++; return 0; }
            s->pal_epoch = pe;
        }
    }
    uint32_t off, n; tex_hash_range(tcw, tsp, &off, &n);
    uint32_t me = hle_vram_max_epoch(off, n);
    if (me == s->vram_epoch) { hle_texstats.epoch_hits++; return 1; }
    if (tex_content_hash(tcw, tsp) != s->content_hash) { hle_texstats.invalid++; return 0; }
    s->vram_epoch = me; hle_texstats.hash_same++;
    return 1;
}
