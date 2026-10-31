/* hle/dbg.c - debug hooks (evidence gathering), enabled by env R2_DBG=1 */
#include "hle_priv.h"
#include <stdlib.h>
static void d_viewports(SH4Ctx *c) {
    uint32_t pr = c->pr;
    uint32_t w = LD32(c->gbr + 0x10);
    fprintf(stderr, "[dbg] f_8c038e14 gbr=%08x *(gbr+0x10)=%08x count@+2e=%d types@%08x ptrs@%08x\n", c->gbr, w, (int)(int16_t)LD16(w + 0x2e), LD32(w + 0x10), LD32(w + 0x14));
    for (int i = 0; i < 12; i++) fprintf(stderr, "   [%d] type=%d ptr=%08x\n", i, (int)(int16_t)LD16(LD32(w + 0x10) + i * 2), LD32(LD32(w + 0x14) + i * 4));
    for (int i = 0; i < 0x40; i += 4) fprintf(stderr, "   +%02x: %08x\n", i, LD32(w + i));
    hle_orig(c, 0x8C038E14); c->pr = pr;
}
/* Kamui render-node queue (4 nodes, stride 0x1c4 at 0x8C2ED8A8): +8 kind, +20 state, +24 next state, +28/32/36 fences */
static void dump_nodes(const char *tag, SH4Ctx *c) {
    fprintf(stderr, "[dbg] %-8s pr=%08x r4=%08x frame=%lu  nodes(state/next/kind/fence28):", tag, c->pr, c->r[4], hle_frame_count);
    for (int i = 0; i < 4; i++) { uint32_t n = 0x8C2ED8A8u + i * 0x1c4; fprintf(stderr, " [%d]%u/%u/%u/%d", i, LD32(n + 20), LD32(n + 24), LD32(n + 8), (int)LD32(n + 28)); }
    fprintf(stderr, "  884=%x 888=%x\n", LD32(0x8C2ED884u), LD32(0x8C2ED888u));
}
static void d_sched(SH4Ctx *c) { uint32_t pr = c->pr; dump_nodes("sched", c); hle_orig(c, 0x8C0D59A0); c->pr = pr; }
static void d_start(SH4Ctx *c) { uint32_t pr = c->pr; dump_nodes("STARTRND", c); hle_orig(c, 0x8C0DE800); c->pr = pr; }
static void d_vbl(SH4Ctx *c) { uint32_t pr = c->pr; dump_nodes("vblank", c); hle_orig(c, 0x8C0D45A6); c->pr = pr; }
static void d_scene(SH4Ctx *c) { uint32_t pr = c->pr; dump_nodes("StartScn", c); hle_orig(c, 0x8C0D485E); c->pr = pr; }
void hle_dbg_init(void) {
    if (!getenv("R2_DBG") && !getenv("R2_DBG_NODES")) return;
    if (getenv("R2_DBG_NODES")) { hle_hook(0x8C0D59A0, d_sched); hle_hook(0x8C0DE800, d_start); hle_hook(0x8C0D45A6, d_vbl); hle_hook(0x8C0D485E, d_scene); }
    hle_hook(0x8C038E14, d_viewports);
}
