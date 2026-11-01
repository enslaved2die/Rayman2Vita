/* Host run of the REAL hle/vita_gl_render.c against a counting fake of vitaGL (fakegl/vitaGL.h).  Replays one dumped frame (frame.bin vram.bin pvrregs.bin [pvrfog.bin]) N times,
 * like consecutive identical game frames, and reports per-frame GPU-driver traffic: glDrawArrays calls, state-setting GL calls, texture binds / parameter calls / uploads and the VRAM bytes
 * hashed for texture validation.  Build it against two source trees (before / after) to compare:   see Makefile target test-glcount.
 * usage: test_glcount frame.bin vram.bin pvrregs.bin pvrfog.bin [frames=6] */
#include "vitaGL.h"
#include "../vita_gl_render.c"
#include <stdio.h>
#include <stdlib.h>

uint8_t sh4_ram[SH4_RAM_SIZE];
unsigned long hle_frame_count; int hle_verbose;
uint64_t hle_io_t_us, hle_io_calls, hle_io_bytes; unsigned long sh4_stat_io_rd, sh4_stat_io_wr;      /* (perf.c references) */
uint32_t sh4_io_read(uint32_t a, int s) { (void)a; (void)s; return 0; }
void sh4_io_write(uint32_t a, int s, uint32_t v) { (void)a; (void)s; (void)v; }
void hle_log(const char *f, ...) { (void)f; }
void hle_hook(uint32_t a, hle_fn f) { (void)a; (void)f; }
void hle_orig(SH4Ctx *c, uint32_t a) { (void)c; (void)a; }
static uint8_t *g_vram; static uint32_t g_pvr[2048];
uint8_t *hle_vram_ptr(void) { return g_vram; }
const uint32_t *hle_pvr_regs(void) { return g_pvr; }
uint32_t hle_pvr_pal_epoch(void) { return 1; }
uint32_t hle_pvr_fog_epoch(void) { return 1; }
uint32_t hle_vram_max_epoch(uint32_t off, uint32_t len) { (void)off; (void)len; return 1; }       /* no VRAM writes between replayed frames */
uint32_t hle_reg_get(uint32_t a) { return g_pvr[((a & 0x1FFFFFFFu) - 0x5F8000u) >> 2]; }
void hle_reg_set(uint32_t a, uint32_t v) { (void)a; (void)v; }
int hle_ta_wide_active(void) { return 1; }
int hle_ta_wide_pref(void) { return 1; }
float hle_ta_wide_k(void) { return 1.2f; }
int hle_ta_background(float col[3][4], uint32_t *isp, uint32_t *tsp, uint32_t *tcw) { for (int i = 0; i < 3; i++) { col[i][0] = 1; col[i][1] = 0.5f; col[i][2] = 0.5f; col[i][3] = 1; } *isp = *tsp = *tcw = 0; return 1; }
void hle_ta_pvr_snapshot(uint32_t *out) { memcpy(out, g_pvr + 0x400, 4096); static const uint32_t r[13] = { 0xA05F8108u, 0xA05F80E4u, 0xA05F811Cu, 0xA05F8098u, 0xA05F80B0u, 0xA05F80B4u, 0xA05F80B8u, 0xA05F80BCu, 0xA05F80C0u, 0xA05F8078u, 0xA05F807Cu, 0xA05F8080u, 0xA05F8044u };
    for (int i = 0; i < 13; i++) out[1024 + i] = hle_reg_get(r[i]); out[1037] = hle_reg_get(0xA05F808Cu); out[1038] = hle_reg_get(0xA05F8088u); out[1039] = hle_reg_get(0xA05F8040u); }
void hle_ta_fog_table(uint32_t out[128]) { for (int i = 0; i < 128; i++) out[i] = g_pvr[0x80 + i] & 0xFFFF; }
#ifdef BASE
uint32_t hle_texmap_epoch(void) { return 0; }
#endif

static uint8_t *slurp(const char *p, size_t *n) { FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); *n = (size_t)ftell(f); fseek(f, 0, SEEK_SET); uint8_t *b = malloc(*n); if (fread(b, 1, *n, f) != *n) { free(b); b = NULL; } fclose(f); return b; }
int main(int argc, char **argv)
{
    if (argc < 5) return 2;
    size_t fn, vn, rn, gn; uint8_t *fr = slurp(argv[1], &fn), *vr = slurp(argv[2], &vn), *rg = slurp(argv[3], &rn), *fgb = slurp(argv[4], &gn);
    if (!fr || !vr || !rg || !fgb) return 1;
    int nf = argc > 5 ? atoi(argv[5]) : 6;
    g_vram = vr;
    const uint32_t *r = (const uint32_t *)rg, *ft = (const uint32_t *)fgb;
    memcpy(g_pvr + 0x400, r, 4096);
    static const uint32_t ra[13] = { 0x108, 0x0E4, 0x11C, 0x098, 0x0B0, 0x0B4, 0x0B8, 0x0BC, 0x0C0, 0x078, 0x07C, 0x080, 0x044 };
    for (int i = 0; i < 13; i++) g_pvr[ra[i] >> 2] = r[1024 + i];
    g_pvr[0x08C >> 2] = r[1037]; g_pvr[0x088 >> 2] = r[1038]; g_pvr[0x040 >> 2] = r[1039];
    for (int i = 0; i < 128; i++) g_pvr[0x80 + i] = ft[i];
    uint32_t ns, nv; memcpy(&ns, fr + 4, 4); memcpy(&nv, fr + 8, 4);
    TaFrame f; memset(&f, 0, sizeof f);
    f.strips = calloc(ns ? ns : 1, sizeof(TaStrip)); f.nstrips = ns;
    for (uint32_t i = 0; i < ns; i++) {
        uint32_t q[8]; memcpy(q, fr + 16 + 32 * i, 32); uint32_t w[8] = { q[0], q[1], q[2], q[3], 0, 0, 0, 0 };
        ta_decode_header(&f.strips[i].st, w, NULL); f.strips[i].st.is_sprite = (int)q[6]; f.strips[i].st.list = (uint8_t)q[7]; f.strips[i].first = q[4]; f.strips[i].count = q[5];
    }
    f.verts = malloc(nv * sizeof(TaVertex)); memcpy(f.verts, fr + 16 + 32 * ns, nv * sizeof(TaVertex)); f.nverts = nv;
    FakeGl cold, tot; memset(&tot, 0, sizeof tot);
    unsigned long hb_cold = 0, hb_tot = 0;
    for (int k = 0; k < nf; k++) {
        FakeGl b0 = fg;
#ifdef BASE
        unsigned hb0 = s_tex_hash_bytes;
#else
        unsigned long long hb0 = hle_texstats.hash_bytes;
#endif
        vita_gl_render_frame(&f);
#ifdef BASE
        unsigned long hb = s_tex_hash_bytes - hb0;
#else
        unsigned long hb = (unsigned long)(hle_texstats.hash_bytes - hb0);
#endif
        FakeGl d; unsigned long *pa = (unsigned long *)&d, *pb = (unsigned long *)&fg, *pc = (unsigned long *)&b0; for (size_t i = 0; i < sizeof d / sizeof(unsigned long); i++) pa[i] = pb[i] - pc[i];
        if (k == 0) { cold = d; hb_cold = hb; } else { unsigned long *pt = (unsigned long *)&tot; for (size_t i = 0; i < sizeof d / sizeof(unsigned long); i++) pt[i] += pa[i]; hb_tot += hb; }
    }
    int n = nf > 1 ? nf - 1 : 1;
    printf("frame: %u strips %u verts | cold frame: draws=%lu uploads=%lu | steady frame (avg of %d): draws=%.1f state-calls=%.1f (enable %.1f disable %.1f depthfunc %.1f depthmask %.1f blendfunc %.1f alphafunc %.1f texenv %.1f bind %.1f colorptr %.1f texparam %.1f) clears=%.1f uploads=%.1f hashed=%.1f KB\n",
           ns, nv, cold.draws, cold.teximage, n, (double)tot.draws / n, (double)tot.state_total / n, (double)tot.enables / n, (double)tot.disables / n, (double)tot.depth_func / n, (double)tot.depth_mask / n, (double)tot.blend_func / n,
           (double)tot.alpha_func / n, (double)tot.texenv / n, (double)tot.bind / n, (double)tot.colptr / n, (double)tot.texparam / n, (double)tot.clears / n, (double)tot.teximage / n, hb_tot / 1024.0 / n);
    (void)hb_cold;
    return 0;
}
