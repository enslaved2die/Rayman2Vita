/* ta_hle.c - glue between the harness (boot.c: store queues, ch2 DMA, STARTRENDER) and the portable TA interpreter (ta.c).
 *
 *  - SQ flushes whose physical destination is not system RAM/VRAM (boot.c handles those itself) arrive in sq_sink() -> ta_ext_write32.
 *  - ch2 DMA to 0x10000000.. (Kamui flushes its RAM-side vertex buffers this way at kmRender) arrives in dma_sink().
 *  - Every end-of-list packet the parser sees raises the matching ASIC list-end interrupt (hle_asic_raise_later) - replaces the heuristic
 *    "all-zero 32-byte packet" fallback in boot.c, which is only active while no sink is registered.
 *  - STARTRENDER (PVR 0xA05F8014) closes the frame: ta_take_frame().  Frames are logged; the first frame that contains geometry
 *    (or the one selected by R2_FRAME=n) is dumped as text (build_hle/frame_menu.txt) and as binary (build_hle/frame.bin + build_hle/vram.bin)
 *    for tools/ta_render.py.
 */
#include "hle_priv.h"
#include "ta.h"
#include "texmap.h"
#if defined(__vita__)
#include "vita_gl_render.h"
#endif
#include <stdlib.h>
#include <string.h>

static TaCtx tactx;
static uint32_t prev_end[TA_NUM_LISTS];
static unsigned long ta_frames;
static int dumped;
static const int END_BIT[TA_NUM_LISTS] = { 7, 8, 9, 10, 21 };
unsigned long hle_ta_frame_no(void) { return ta_frames; }

/* ---- 16:9 mode -------------------------------------------------------------------------------------------------------------------------------
 * The game has its own "RESOLUTION: MODE 16/9" video option (text ids 399/400 of the LNG files).  Evidence (decompiled.c FUN_8c03703a / FUN_8c037134, lifted gen_fix/recomp_05.c):
 *   byte 0x8C0C52DC = wide flag; FUN_8c037134 compares it with the viewport's applied state (vp+0xF0) every frame and calls FUN_8c03703a(vp, flag==1), which stores two floats
 *   into globals: [0x8C0C52E0] = K3 (shipped 1.2) and [0x8C0C52E4] = SQ (shipped 0.8333); both are 1.0 in 4:3 mode.  Their literals live in the code's constant pool at 0x8C0370EC / 0x8C0370F0.
 *     K3 (3D): multiplies the camera's horizontal half-FOV ANGLE (vp+0x78 path).  Measured on matched vertices of the same strips (menu frame 500, wide vs 4:3), the 3D x scale about x=320
 *             is  fx'/fx = tan(t0)/tan(K3*t0)  with t0 = 0.6 rad:  K3=1.2 -> 0.781 (measured 0.7806), K3=4/3 -> 0.664 (measured 0.6644), y scale unchanged.  K3 is an ANGLE factor, not a tan factor.
 *     SQ (2D): multiplied into the x of every screen-space 2D layout routine (HUD, menu, font, sprites; ~20 pool references, e.g. around 0x8C026040): x' = 320 + (x-320)*SQ.
 *   The option itself is the word 0x8C2D0F44 (set by FUN_8C04C31E, the options-menu setter; 0 = 4:3, 1 = 16:9).
 * The renderer maps the 640x480 screen space onto the whole 960x544 display: x*1.5, y*1.1333.  Square pixels need the guest-side x scale to be (544/480)/(960/640) = 0.7556 of the 4:3 one:
 *   2D: SQ = 0.7556 (patched, exact);  3D: tan(K3*t0) = tan(t0)/0.7556  ->  K3 = 1.2282 (patched; the shipped 1.2/0.8333 pair leaves 3D 3.3% too wide and 2D 10% too wide on 16:9).
 * Controls: env R2_WIDE=0 starts in 4:3 (default 1), R2_WIDE_K3 / R2_WIDE_SQ override the two factors (1.2 / 0.8333 = shipped), hle_ta_wide_set() flips at run time. */
static int wide_pref = 1, wide_last = -1, wide_patched;
static float wide_k = 1.2282f, wide_sq = 0.755556f;
#define WIDE_FLAG_ADDR   0x8C0C52DCu
#define WIDE_OPTION_ADDR 0x8C2D0F44u
#define WIDE_POOL_K      0x8C0370ECu      /* float 1.2    (3D horizontal FOV angle factor) */
#define WIDE_POOL_SQ     0x8C0370F0u      /* float 0.8333 (2D x squeeze) */
void hle_ta_wide_set(int on) { wide_pref = on ? 1 : 0; }
int  hle_ta_wide_pref(void) { return wide_pref; }
int  hle_ta_wide_active(void) { return *hle_ptr(WIDE_FLAG_ADDR) == 1; }
float hle_ta_wide_k(void) { return wide_k; }
static void wide_tick(void) {
    if (!wide_patched) {
        wide_patched = 1;
        const char *e = getenv("R2_WIDE"); if (e && *e) wide_pref = atoi(e) != 0;
        e = getenv("R2_WIDE_K3"); if (e && *e) { float k = (float)atof(e); if (k >= 1.0f && k <= 2.0f) wide_k = k; }
        e = getenv("R2_WIDE_SQ"); if (e && *e) { float k = (float)atof(e); if (k >= 0.3f && k <= 1.0f) wide_sq = k; }
        uint32_t a, b; float kf = wide_k, sq = wide_sq;
        memcpy(&a, hle_ptr(WIDE_POOL_K), 4); memcpy(&b, hle_ptr(WIDE_POOL_SQ), 4);
        if (a == 0x3F999999u && b == 0x3F555555u) { memcpy(hle_ptr(WIDE_POOL_K), &kf, 4); memcpy(hle_ptr(WIDE_POOL_SQ), &sq, 4); }
        else hle_log("[ta] wide: constant pool not as expected (%08x %08x), k left unpatched", a, b);
    }
    uint8_t *flag = hle_ptr(WIDE_FLAG_ADDR);
    if (wide_pref != wide_last || (wide_pref && *flag != 1)) {
        wide_last = wide_pref; *flag = (uint8_t)wide_pref;
        uint32_t o = (uint32_t)wide_pref; memcpy(hle_ptr(WIDE_OPTION_ADDR), &o, 4);
    }
}

static void note_list_ends(void) {
    for (int i = 0; i < TA_NUM_LISTS; i++) {
        uint32_t n = tactx.cur->stats.list_end[i];
        while (prev_end[i] < n) { prev_end[i]++; if (hle_verbose >= 2) hle_log("[ta] list end %d (total this frame %u)", i, prev_end[i]); hle_asic_raise_later(1u << END_BIT[i]); }
    }
}
static void sq_sink(uint32_t phys, const uint8_t d[32]) {
    if (hle_verbose >= 2 && phys >= 0x10000000u && phys < 0x10800000u) { uint32_t w0; memcpy(&w0, d, 4); hle_log("[ta] sq flush phys=%08x w0=%08x", phys, w0); }
    ta_ext_write32(&tactx, phys, d); note_list_ends(); }
static void dma_sink(uint32_t dst, const uint8_t *src, uint32_t len) {
    if (hle_verbose >= 2) hle_log("[ta] dma dst=%08x len=%u first=%08x", dst, len, len >= 4 ? *(const uint32_t *)src : 0);
    if (dst >= 0x10000000u && dst < 0x10800000u) { ta_write(&tactx, src, len); note_list_ends(); return; }
    for (uint32_t o = 0; o + 32 <= len; o += 32) ta_ext_write32(&tactx, dst + o, src + o);
}

#if !defined(__vita__)
static void dump_binary(const TaFrame *f, unsigned long no) {
    FILE *o = fopen("build_hle/frame.bin", "wb"); if (!o) return;
    uint32_t hdr[4] = { 0x31465452u /* 'RTF1' */, f->nstrips, f->nverts, (uint32_t)no };
    fwrite(hdr, 4, 4, o);
    for (uint32_t i = 0; i < f->nstrips; i++) {
        const TaStrip *s = &f->strips[i];
        uint32_t r[8] = { s->st.ctl, s->st.isp, s->st.tsp, s->st.tcw, s->first, s->count, s->st.is_sprite, s->st.list };
        fwrite(r, 4, 8, o);
    }
    fwrite(f->verts, sizeof(TaVertex), f->nverts, o);
    fclose(o);
    o = fopen("build_hle/vram.bin", "wb"); if (o) { fwrite(hle_vram_ptr(), 1, 8u << 20, o); fclose(o); }
    o = fopen("build_hle/frame_mods.bin", "wb");   /* modifier-volume triangles: u32 n, u32 shad_scale, then n x { 9 floats, ctl, isp, list, vol } */
    if (o) { uint32_t h2[2] = { f->nmods, f->shad_scale }; fwrite(h2, 4, 2, o);
        for (uint32_t i = 0; i < f->nmods; i++) { const TaModTri *m = &f->mods[i]; fwrite(m->v, 4, 9, o); uint32_t q[4] = { m->ctl, m->isp, m->list, m->vol }; fwrite(q, 4, 4, o); } fclose(o); }
    o = fopen("build_hle/pvrregs.bin", "wb");     /* palette RAM (1024 words) + PVR registers the texture/blend path reads (tools/ta_render.py) */
    if (o) { uint32_t pr[1024 + 16] = { 0 }; hle_ta_pvr_snapshot(pr); fwrite(pr, 4, 1024 + 16, o); fclose(o); }
}
#endif

/* Scene queue. On hardware the TA keeps each scene's object lists in VRAM parameter memory; TA_LIST_INIT (written by kmStartScene/kmBeginScene)
 * starts a new scene's TA stream, while STARTRENDER renders the oldest *completed* scene. Kamui may delay STARTRENDER of scene N (its target
 * framebuffer is still being displayed until the next VBlank flip) while the game already feeds scene N+1 into the TA. Splitting frames at
 * STARTRENDER only would merge both scenes and lose N+1's list headers (its end-of-list then raises no interrupt and Kamui stalls forever). */
#define SCENEQ 8
static TaFrame *sceneq[SCENEQ]; static int sceneq_n;
static void on_listinit(SH4Ctx *c) {
    (void)c;
    if (tactx.cur->stats.chunks == 0) return;                 /* empty (kmStartScene + kmBeginScene both re-init) */
    TaFrame *f = ta_take_frame(&tactx);
    memset(prev_end, 0, sizeof prev_end);
    if (sceneq_n == SCENEQ) { ta_frame_free(sceneq[0]); memmove(sceneq, sceneq + 1, (SCENEQ - 1) * sizeof sceneq[0]); sceneq_n--; hle_log("[ta] scene queue overflow: oldest dropped"); }
    sceneq[sceneq_n++] = f;
    if (hle_verbose >= 2) hle_log("[ta] LIST_INIT: scene closed with %u chunks (queued %d)", f->stats.chunks, sceneq_n);
}
static void on_startrender(SH4Ctx *c) {
    (void)c;
    ta_frames++;
    wide_tick();
    TaFrame *f;
    if (sceneq_n) { f = sceneq[0]; memmove(sceneq, sceneq + 1, (--sceneq_n) * sizeof sceneq[0]); }
    else { f = ta_take_frame(&tactx); memset(prev_end, 0, sizeof prev_end); }
    f->shad_scale = hle_reg_get(0xA05F8074u);
    const TaStats *t = &f->stats;
    if (hle_verbose)
        hle_log("[ta] frame %lu: chunks=%u verts=%u strips=%u sprites=%u tris=%u mods=%u ends o/om/t/tm/p=%u/%u/%u/%u/%u warn(nohdr=%u unsup=%u badend=%u) sinks vram=%u yuv=%u tex=%u unk=%u",
                ta_frames, t->chunks, t->verts, t->strips, t->sprites, t->tris_total, t->modtris, t->list_end[0], t->list_end[1], t->list_end[2], t->list_end[3], t->list_end[4],
                t->warn_vertex_no_header, t->warn_unsupported, t->warn_bad_list_end, t->sink_vram, t->sink_yuv, t->sink_tex, t->sink_unknown);
#if !defined(__vita__)
    const char *want = getenv("R2_FRAME");
    int pick = want ? (!strcmp(want, "mod") ? (t->modtris > 0) : (!strcmp(want, "spr") ? (t->sprites > 0) : (ta_frames == strtoul(want, 0, 10)))) : (!dumped && t->verts > 0);   /* R2_FRAME=mod / spr: first frame with modifier-volume triangles / sprites */
    if (pick && !dumped) {
        dumped = 1;
        FILE *o = fopen("build_hle/frame_menu.txt", "w");
        if (o) { fprintf(o, "TA frame #%lu (guest frame count %lu)\n", ta_frames, hle_frame_count); ta_dump_frame(f, o, 64); fclose(o); }
        dump_binary(f, ta_frames);
        hle_log("[ta] dumped frame %lu -> build_hle/frame_menu.txt, build_hle/frame.bin, build_hle/vram.bin", ta_frames);
    }
#endif
#if defined(__vita__)
    vita_gl_render_frame(f);
    vita_gl_swap();
#endif
    ta_frame_free(f);
}

void hle_ta_init(void) {
    ta_init(&tactx);
    hle_set_sq_sink(sq_sink);
    hle_set_ta_dma_sink(dma_sink);
    hle_set_startrender_cb(on_startrender);
    hle_set_listinit_cb(on_listinit);
    hle_texmap_init();
}
