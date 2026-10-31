/* Decodes every texture level used by a dumped frame (build_hle/frame.bin + vram.bin [+ pvrregs.bin]) with ta_tex_decode and prints one FNV-1a hash per level,
 * so the output can be diffed against `python3 tools/ta_render.py --hashes` (the Python and C decoders must agree bit for bit).
 * usage: test_tex frame.bin vram.bin [pvrregs.bin] */
#include "../ta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static uint8_t *slurp(const char *p, size_t *n) { FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); *n = (size_t)ftell(f); fseek(f, 0, SEEK_SET); uint8_t *b = malloc(*n); if (fread(b, 1, *n, f) != *n) { free(b); b = NULL; } fclose(f); return b; }
int main(int argc, char **argv)
{
    if (argc < 3) return 2;
    size_t fn, vn, rn = 0; uint8_t *fr = slurp(argv[1], &fn), *vr = slurp(argv[2], &vn), *rg = argc > 3 ? slurp(argv[3], &rn) : NULL;
    if (!fr || !vr) return 1;
    TaTexEnv env = { 0, 0, 0 };
    if (rg && rn >= 4160) { env.pal = (const uint32_t *)rg; env.pal_ctrl = ((const uint32_t *)rg)[1024]; env.text_control = ((const uint32_t *)rg)[1025]; }
    uint32_t ns; memcpy(&ns, fr + 4, 4);
    uint32_t seen[4096][2]; int nseen = 0;
    uint32_t *buf = malloc(1024 * 1024 * 4);
    for (uint32_t i = 0; i < ns; i++) {
        uint32_t r[8]; memcpy(r, fr + 16 + 32 * i, 32);
        uint32_t ctl = r[0], tsp = r[2], tcw = r[3];
        if (!((ctl >> 3) & 1)) continue;
        int dup = 0; for (int k = 0; k < nseen; k++) if (seen[k][0] == tcw && seen[k][1] == tsp) dup = 1;
        if (dup || nseen >= 4096) continue;
        seen[nseen][0] = tcw; seen[nseen][1] = tsp; nseen++;
        int nl = ta_tex_levels(tcw, tsp), w, h; ta_tex_size(tsp, &w, &h);
        for (int l = 0; l < nl; l++) {
            int rc = ta_tex_decode(vr, (uint32_t)vn, tcw, tsp, &env, l, (tsp >> 19) & 1, buf);
            uint32_t lw = (uint32_t)w >> l, lh = (uint32_t)h >> l; if (!lw) lw = 1; if (!lh) lh = 1; if (tcw >> 31) lh = lw;
            uint32_t hsh = 2166136261u; for (uint32_t k = 0; k < lw * lh; k++) for (int b = 0; b < 4; b++) { hsh ^= (buf[k] >> (8 * b)) & 255; hsh *= 16777619u; }
            printf("%08x %08x L%d %ux%u rc=%d %08x\n", tcw, tsp, l, lw, lh, rc, hsh);
        }
    }
    return 0;
}
