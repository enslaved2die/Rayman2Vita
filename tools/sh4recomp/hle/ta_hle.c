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
#include <stdlib.h>
#include <string.h>

static TaCtx tactx;
static uint32_t prev_end[TA_NUM_LISTS];
static unsigned long ta_frames;
static int dumped;
static const int END_BIT[TA_NUM_LISTS] = { 7, 8, 9, 10, 21 };
unsigned long hle_ta_frame_no(void) { return ta_frames; }

static void note_list_ends(void) {
    for (int i = 0; i < TA_NUM_LISTS; i++) {
        uint32_t n = tactx.cur->stats.list_end[i];
        while (prev_end[i] < n) { prev_end[i]++; if (hle_verbose >= 2) hle_log("[ta] list end %d (total this frame %u)", i, prev_end[i]); hle_asic_raise_later(1u << END_BIT[i]); }
    }
}
static void sq_sink(uint32_t phys, const uint8_t d[32]) { ta_ext_write32(&tactx, phys, d); note_list_ends(); }
static void dma_sink(uint32_t dst, const uint8_t *src, uint32_t len) {
    if (hle_verbose >= 2) hle_log("[ta] dma dst=%08x len=%u first=%08x", dst, len, len >= 4 ? *(const uint32_t *)src : 0);
    if (dst >= 0x10000000u && dst < 0x10800000u) { ta_write(&tactx, src, len); note_list_ends(); return; }
    for (uint32_t o = 0; o + 32 <= len; o += 32) ta_ext_write32(&tactx, dst + o, src + o);
}

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
}

static void on_startrender(SH4Ctx *c) {
    (void)c;
    ta_frames++;
    TaFrame *f = ta_take_frame(&tactx);
    memset(prev_end, 0, sizeof prev_end);
    const TaStats *t = &f->stats;
    if (hle_verbose)
        hle_log("[ta] frame %lu: chunks=%u verts=%u strips=%u sprites=%u tris=%u mods=%u ends o/om/t/tm/p=%u/%u/%u/%u/%u warn(nohdr=%u unsup=%u badend=%u) sinks vram=%u yuv=%u tex=%u unk=%u",
                ta_frames, t->chunks, t->verts, t->strips, t->sprites, t->tris_total, t->modtris, t->list_end[0], t->list_end[1], t->list_end[2], t->list_end[3], t->list_end[4],
                t->warn_vertex_no_header, t->warn_unsupported, t->warn_bad_list_end, t->sink_vram, t->sink_yuv, t->sink_tex, t->sink_unknown);
    const char *want = getenv("R2_FRAME");
    int pick = want ? (ta_frames == strtoul(want, 0, 10)) : (!dumped && t->verts > 0);
    if (pick && !dumped) {
        dumped = 1;
        FILE *o = fopen("build_hle/frame_menu.txt", "w");
        if (o) { fprintf(o, "TA frame #%lu (guest frame count %lu)\n", ta_frames, hle_frame_count); ta_dump_frame(f, o, 64); fclose(o); }
        dump_binary(f, ta_frames);
        hle_log("[ta] dumped frame %lu -> build_hle/frame_menu.txt, build_hle/frame.bin, build_hle/vram.bin", ta_frames);
    }
    ta_frame_free(f);
}

void hle_ta_init(void) {
    ta_init(&tactx);
    hle_set_sq_sink(sq_sink);
    hle_set_ta_dma_sink(dma_sink);
    hle_set_startrender_cb(on_startrender);
    hle_texmap_init();
}
