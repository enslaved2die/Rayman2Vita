/* Host run of the REAL hle/vita_gl_render.c against a counting fake of vitaGL (fakegl/vitaGL.h).  Replays one dumped frame (frame.bin vram.bin pvrregs.bin [pvrfog.bin]) N times,
 * like consecutive identical game frames, and reports per-frame GPU-driver traffic: glDrawArrays calls, state-setting GL calls, texture binds / parameter calls / uploads and the VRAM bytes
 * hashed for texture validation.  Build it against two source trees (before / after) to compare:   see Makefile target test-glcount.
 * usage: test_glcount frame.bin vram.bin pvrregs.bin pvrfog.bin [frames=6] */
#include "vitaGL.h"
uint32_t r2_perf_post_dbg[4];
#include "../vita_gl_render.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* ---- GLC_RASTER=<file>: tiny software rasteriser behind the fake (flat 640x480 buffer, projection from the fake's matrix, depth func / mask / blend factors as set, textures treated as white, alpha test ignored).
 * It exists to compare two draw orders (R2_NO_FOG_DEFER=1 vs default) pixel by pixel: the last frame's 8-bit RGB buffer is written to <file>. ---- */
#define RW 640
#define RH 480
static float *r_col, *r_dep; static int r_on;
static float r_fac(uint32_t f, const float *s, const float *d) { switch (f) { case GL_ZERO: return 0; case GL_ONE: return 1; case GL_SRC_ALPHA: return s[3]; case GL_ONE_MINUS_SRC_ALPHA: return 1 - s[3]; case GL_DST_ALPHA: return d[3]; case GL_ONE_MINUS_DST_ALPHA: return 1 - d[3]; default: return 1; } }
static void r_clear(unsigned bits) { if (bits & GL_COLOR_BUFFER_BIT) for (int i = 0; i < RW * RH; i++) { r_col[i * 4] = fgr.cc[0]; r_col[i * 4 + 1] = fgr.cc[1]; r_col[i * 4 + 2] = fgr.cc[2]; r_col[i * 4 + 3] = 1; } if (bits & GL_DEPTH_BUFFER_BIT) for (int i = 0; i < RW * RH; i++) r_dep[i] = fgr.cd; }
static int r_dtest(uint32_t fn, float z, float d) { switch (fn) { case GL_NEVER: return 0; case GL_LESS: return z < d; case GL_EQUAL: return z == d; case GL_LEQUAL: return z <= d; case GL_GREATER: return z > d; case GL_NOTEQUAL: return z != d; case GL_GEQUAL: return z >= d; default: return 1; } }
static void r_draw(int first, int count)
{
    for (int i = first; i + 2 < first + count; i += 3) {
        float sx[3], sy[3], sz[3], c[3][4];
        for (int k = 0; k < 3; k++) {
            const float *v = (const float *)(fgr.vptr + (size_t)(i + k) * fgr.vstride), *cl = (const float *)(fgr.cptr + (size_t)(i + k) * fgr.cstride);
            const float *m = fgr.proj; float cx = m[0] * v[0] + m[4] * v[1] + m[8] * v[2] + m[12], cy = m[1] * v[0] + m[5] * v[1] + m[9] * v[2] + m[13], cz = m[2] * v[0] + m[6] * v[1] + m[10] * v[2] + m[14], cw = m[3] * v[0] + m[7] * v[1] + m[11] * v[2] + m[15];
            if (cw == 0) cw = 1e-9f;
            sx[k] = (cx / cw * 0.5f + 0.5f) * RW; sy[k] = (cy / cw * 0.5f + 0.5f) * RH; sz[k] = cz / cw * 0.5f + 0.5f; memcpy(c[k], cl, 16);
        }
        float area = (sx[1] - sx[0]) * (sy[2] - sy[0]) - (sx[2] - sx[0]) * (sy[1] - sy[0]);
        if (area == 0) continue;
        int x0 = (int)floorf(fminf(sx[0], fminf(sx[1], sx[2]))), x1 = (int)ceilf(fmaxf(sx[0], fmaxf(sx[1], sx[2]))), y0 = (int)floorf(fminf(sy[0], fminf(sy[1], sy[2]))), y1 = (int)ceilf(fmaxf(sy[0], fmaxf(sy[1], sy[2])));
        if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > RW) x1 = RW; if (y1 > RH) y1 = RH;
        for (int y = y0; y < y1; y++) for (int x = x0; x < x1; x++) {
            float px = x + 0.5f, py = y + 0.5f;
            float w0 = ((sx[1] - px) * (sy[2] - py) - (sx[2] - px) * (sy[1] - py)) / area, w1 = ((sx[2] - px) * (sy[0] - py) - (sx[0] - px) * (sy[2] - py)) / area, w2 = 1 - w0 - w1;
            if (w0 < 0 || w1 < 0 || w2 < 0) continue;
            float z = w0 * sz[0] + w1 * sz[1] + w2 * sz[2]; int o = y * RW + x;
            if (fgr.cap[0] && !r_dtest(fgr.depth_func, z, r_dep[o])) continue;
            float s[4], *d = &r_col[o * 4];
            for (int k = 0; k < 4; k++) s[k] = w0 * c[0][k] + w1 * c[1][k] + w2 * c[2][k];
            if (fgr.cap[1]) { float fs = 0, fd = 0; float sf[4], df[4]; (void)sf; (void)df; fs = r_fac(fgr.bsrc, s, d); fd = r_fac(fgr.bdst, s, d); for (int k = 0; k < 3; k++) { float r = s[k] * fs + d[k] * fd; d[k] = r > 1 ? 1 : r < 0 ? 0 : r; } }
            else for (int k = 0; k < 3; k++) d[k] = s[k] > 1 ? 1 : s[k] < 0 ? 0 : s[k];
            for (int k = 0; k < 3; k++) d[k] = floorf(d[k] * 255.0f + 0.5f) / 255.0f;      /* 8-bit framebuffer */
            if (fgr.depth_mask && fgr.cap[0]) r_dep[o] = z;
        }
    }
}
static void r_write(const char *path)
{
    FILE *f = fopen(path, "wb"); if (!f) return;
    for (int i = 0; i < RW * RH; i++) for (int k = 0; k < 3; k++) fputc((int)(r_col[i * 4 + k] * 255.0f + 0.5f), f);
    fclose(f);
}

uint8_t sh4_ram[SH4_RAM_SIZE];
unsigned long hle_frame_count; int hle_verbose;
uint64_t hle_io_t_us, hle_io_calls, hle_io_bytes; unsigned long sh4_stat_io_rd, sh4_stat_io_wr;      /* (perf.c references) */
void hle_io_note_reset(void) {}                                                     /* (vita_gl_render.c [slow] references) */
size_t hle_io_note_fmt(char *o, size_t c) { return (size_t)snprintf(o, c, "TEST.DAT 1 KB @sector 2"); }
uint32_t sh4_io_read(uint32_t a, int s) { (void)a; (void)s; return 0; }
void sh4_io_write(uint32_t a, int s, uint32_t v) { (void)a; (void)s; (void)v; }
void hle_log(const char *f, ...) { (void)f; }
void hle_hook(uint32_t a, hle_fn f) { (void)a; (void)f; }
void hle_orig(SH4Ctx *c, uint32_t a) { (void)c; (void)a; }
static uint8_t *g_vram; static uint32_t g_pvr[2048];
uint8_t *hle_vram_ptr(void) { return g_vram; }
uint8_t *hle_fbshadow_ptr(void) { static uint8_t fb[8 << 20]; return fb; }
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
static char cap[8][700]; static int ncap;
static void cap_sink(const char *l) { if (ncap < 8) { strncpy(cap[ncap], l, 699); cap[ncap][699] = 0; ncap++; } }
int main(int argc, char **argv)
{
    if (argc < 5) return 2;
    size_t fn, vn, rn, gn; uint8_t *fr = slurp(argv[1], &fn), *vr = slurp(argv[2], &vn), *rg = slurp(argv[3], &rn), *fgb = slurp(argv[4], &gn);
    if (!fr || !vr || !rg || !fgb) return 1;
    const char *raster_out = getenv("GLC_RASTER");
    if (raster_out) { r_col = calloc(RW * RH * 4, 4); r_dep = calloc(RW * RH, 4); fgr_draw_cb = r_draw; fgr_clear_cb = r_clear; r_on = 1; }
    int nf = argc > 5 ? atoi(argv[5]) : 6; const int swaps = getenv("GLC_SWAP") != NULL;
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
    VitaGlPfFrame pf_cold, pf_last; memset(&pf_cold, 0, sizeof pf_cold); memset(&pf_last, 0, sizeof pf_last);
    unsigned long hb_cold = 0, hb_tot = 0;
    for (int k = 0; k < nf; k++) {
        FakeGl b0 = fg;
#ifdef BASE
        unsigned hb0 = s_tex_hash_bytes;
#else
        unsigned long long hb0 = hle_texstats.hash_bytes;
#endif
        vita_gl_render_frame(&f);
        if (k == 0) pf_cold = *vita_gl_pf_frame(); else pf_last = *vita_gl_pf_frame();
        if (swaps) { vita_gl_swap(); usleep(8000); }       /* GLC_SWAP=1: also exercise the swap path so the once-per-second [pf] summary prints (use frames >= 250) */
#ifdef BASE
        unsigned long hb = s_tex_hash_bytes - hb0;
#else
        unsigned long hb = (unsigned long)(hle_texstats.hash_bytes - hb0);
#endif
        FakeGl d; unsigned long *pa = (unsigned long *)&d, *pb = (unsigned long *)&fg, *pc = (unsigned long *)&b0; for (size_t i = 0; i < sizeof d / sizeof(unsigned long); i++) pa[i] = pb[i] - pc[i];
        if (k == 0) { cold = d; hb_cold = hb; } else { unsigned long *pt = (unsigned long *)&tot; for (size_t i = 0; i < sizeof d / sizeof(unsigned long); i++) pt[i] += pa[i]; hb_tot += hb; }
    }
    if (r_on) r_write(raster_out);
    int n = nf > 1 ? nf - 1 : 1;
    printf("frame: %u strips %u verts | cold frame: draws=%lu uploads=%lu | steady frame (avg of %d): draws=%.1f state-calls=%.1f (enable %.1f disable %.1f depthfunc %.1f depthmask %.1f blendfunc %.1f alphafunc %.1f texenv %.1f bind %.1f colorptr %.1f texparam %.1f) clears=%.1f uploads=%.1f hashed=%.1f KB\n",
           ns, nv, cold.draws, cold.teximage, n, (double)tot.draws / n, (double)tot.state_total / n, (double)tot.enables / n, (double)tot.disables / n, (double)tot.depth_func / n, (double)tot.depth_mask / n, (double)tot.blend_func / n,
           (double)tot.alpha_func / n, (double)tot.texenv / n, (double)tot.bind / n, (double)tot.colptr / n, (double)tot.texparam / n, (double)tot.clears / n, (double)tot.teximage / n, hb_tot / 1024.0 / n);
    {   /* the [pf] per-frame work counters (render-side, counted at the call sites) must agree with the independent counting fake: draws = glDrawArrays, state = fake's state-call total, uploads = glTexImage2D */
        const VitaGlPfFrame *p = &pf_last; unsigned long sc = p->st_depth_test + p->st_depth_func + p->st_depth_mask + p->st_blend + p->st_blendfunc + p->st_alpha_test + p->st_alpha_ref + p->st_tex2d + p->st_env + p->st_colptr + p->st_stencil;
        printf("pf counters (last steady frame): draws=%u (fog %u) batches=%u verts=%u | state depth=%u/%u/%u blend=%u blendfunc=%u alpha=%u/%u tex2d=%u env=%u colptr=%u stencil=%u (sum %lu) | binds=%u texparam=%u uploads=%u (%u KB) | fill opaque=%.2f punch=%.2f trans=%.2f fog=%.2f screens | cold: draws=%u uploads=%u (%u KB)\n",
               p->draws, p->fog_draws, p->batches, p->verts, p->st_depth_test, p->st_depth_func, p->st_depth_mask, p->st_blend, p->st_blendfunc, p->st_alpha_test, p->st_alpha_ref, p->st_tex2d, p->st_env, p->st_colptr, p->st_stencil, sc,
               p->tex_bind, p->tex_param, p->tex_up, p->tex_bytes / 1024, p->area_opq, p->area_punch, p->area_trans, p->area_fog, pf_cold.draws, pf_cold.tex_up, pf_cold.tex_bytes / 1024);
        if (nf > 1 && (double)p->draws != (double)tot.draws / n) printf("MISMATCH: pf draws %u vs fake %.1f\n", p->draws, (double)tot.draws / n);
        if (nf > 1 && pf_cold.draws != cold.draws) printf("MISMATCH: pf cold draws %u vs fake %lu\n", pf_cold.draws, cold.draws);
        if (pf_cold.tex_up != cold.teximage) printf("MISMATCH: pf cold uploads %u vs fake %lu\n", pf_cold.tex_up, cold.teximage);
    }
    (void)hb_cold;
    {   /* [slow] hang breakdown: synthetic counters across two hand-offs 350 ms apart; the guest part is completed by pf_end of the job that frame produced */
        extern uint64_t hle_io_t_us, hle_io_calls, hle_io_bytes;
        static RenderJob jb;
        void (*old_sink)(const char *) = r2_perf_sink; r2_perf_sink = cap_sink; s_pf_on = 1; hle_frame_count = 4242;
        pf_slow_begin(1000000);
        g_perf.t_vsleep += 20000; g_perf.t_snd_tick += 5000; g_perf.t_snd_lock += 3000; g_perf.t_prep += 40000; g_perf.t_rt_wait += 2000; hle_io_t_us += 12000; hle_io_calls += 3; hle_io_bytes += 64 * 1024;
        pf_slow_begin(1350000);                          /* 350 ms since the previous hand-off -> pending guest part */
        pf_slow_attach(&jb); pf_slow_take(&jb);
        pf_slow_begin(1366000);                          /* a normal 16 ms frame: nothing pending */
        pf.draws = 77; pf.fog_draws = 5; pf.verts = 1234; s_pf_start = 1355000;
        pf_end(1360000, 0, 300, 1362000);
        r2_perf_sink = old_sink;
        int ok = ncap >= 1 && strstr(cap[0], "[slow] guest frame 4242: total 350.0 ms") && strstr(cap[0], "io 12.0 ms (3 calls, 64 KB; files: TEST.DAT 1 KB @sector 2)") && strstr(cap[0], "vsleep 20.0 ms") &&
                 strstr(cap[0], "sndtick 5.0 ms") && strstr(cap[0], "sndlock 3.0 ms") && strstr(cap[0], "prep(tex decode) 40.0 ms") && strstr(cap[0], "blocked 2.0 ms") && strstr(cap[0], "other(code) 268.0 ms") && strstr(cap[0], "draws 77 (fog 5) verts 1234") && strstr(cap[0], "render cpu 5.0 ms");
        printf("[slow] line test: %s\n  %s\n", ok ? "ok" : "MISMATCH", ncap ? cap[0] : "(no line)");
        if (!ok) return 1;
    }
    return 0;
}
