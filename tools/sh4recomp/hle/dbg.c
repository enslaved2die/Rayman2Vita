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
void hle_dbg_init(void) {
    if (!getenv("R2_DBG")) return;
    hle_hook(0x8C038E14, d_viewports);
}
