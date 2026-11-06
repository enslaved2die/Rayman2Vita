/* nativecut.c - "pure native" mode: no-op hooks over the guest's own rendering work (draw traversal / vertex transform / TA vertex push / HUD quad primitive) while the
 * native renderer (native_hook.c) produces the frame.  Compiled into both the host harnesses and the Vita build; every hook falls through to the original body unless its bit
 * is set in hle_native_cut (set by native_hook.c on the Vita when the NATIVE_GFX file exists and a native frame is valid; host tests: env R2_NATIVE_CUT=<mask>).
 *   bit 0 (1): f_8c05f4a0   world draw (called once per frame from the per-frame render f_8c04b7e0): sector list -> f_8c05f026 -> f_8c09a060 -> f_8c0ab4c6 (IPO/SO draw) + actor draws
 *   bit 1 (2): f_8c07fc1a   the single 2D quad primitive of the HUD (the pool-walking callers still run, so the pools' bookkeeping is unchanged; cpa_hud reads the pools)
 *   bit 7 (128): f_8c038bec the GLI object display shared by the IPO draw and the actor draw (matrix setup + mesh submit); the traversal around it keeps running
 *   bit 2 (4): host test: run the original world draw and report the guest clock reads inside it
 *   bit 4 (16): host test: every 100th world-draw call print the total guest clock reads so far
 * See re_analysis/dc/notes_native_cut.md for what each cut was checked against. */
#include "hle.h"
#include "hle_priv.h"
#include "enter.h"
#include "runtime.h"
#include <stdlib.h>
#include <stdio.h>

volatile uint32_t hle_native_cut;
volatile uint32_t hle_native_cut_calls[8];      /* diagnostics: how many times each cut swallowed a call */
uint64_t hle_det_reads;                         /* host R2_DET_CLOCK: number of guest clock reads so far (test aid) */

#define VA_DISTFADE_D 0x8C0C85E8u               /* distance-fade block D (float): the draw's per-object visibility test (f_8c0847f2 / f_8c08480e) writes it per object and leaves 0 behind */

static void h_cut_world(SH4Ctx *c) {
    uint32_t m = hle_native_cut;
#if !defined(__vita__)
    if (m & 4u) {                               /* measure: run the original, report guest clock reads inside it */
        uint64_t r0 = hle_det_reads; hle_orig(c, 0x8C05F4A0);
        static unsigned long n; if (n++ % 50 == 0) fprintf(stderr, "[cut-measure] f_8c05f4a0 call %lu: %llu clock reads inside\n", n - 1, (unsigned long long)(hle_det_reads - r0));
        return;
    }
    if (m & 64u) {                              /* bisect aid: run the original, then put the listed guest ranges (R2_CUT_RESTORE=file of "lo hi" hex lines) back to their pre-draw bytes = "the draw did not write there" */
        static struct { uint32_t lo, hi; uint8_t *save; } rg[4096]; static int nrg = -1;
        if (nrg < 0) { nrg = 0; const char *fn = getenv("R2_CUT_RESTORE"); FILE *f = fn ? fopen(fn, "r") : NULL; unsigned lo, hi;
            while (f && nrg < 4096 && fscanf(f, "%x %x", &lo, &hi) == 2) { rg[nrg].lo = lo; rg[nrg].hi = hi; rg[nrg].save = (uint8_t *)malloc(hi - lo); nrg++; } if (f) fclose(f); }
        for (int i = 0; i < nrg; i++) memcpy(rg[i].save, hle_ptr(rg[i].lo), rg[i].hi - rg[i].lo);
        hle_orig(c, 0x8C05F4A0);
        for (int i = 0; i < nrg; i++) memcpy(hle_ptr(rg[i].lo), rg[i].save, rg[i].hi - rg[i].lo);
        return;
    }
    if (m & 32u) { hle_orig(c, 0x8C05F4A0); for (int i = 0; i < (int)(m >> 8); i++) (void)hle_time_us(); return; }      /* timing-noise control: original draw + (mask >> 8) extra clock reads */
    if (m & 16u) { static unsigned long n; if (n++ % 100 == 0) fprintf(stderr, "[cut-measure] world call %lu: total clock reads %llu\n", n - 1, (unsigned long long)hle_det_reads); }
#endif
    if (!(m & 1u)) { hle_orig(c, 0x8C05F4A0); return; }
    hle_native_cut_calls[0]++;
    ST32(VA_DISTFADE_D, 0);                     /* what the skipped draw leaves behind (cpa_light_dist_alpha reads it) */
}
static void h_cut_objdisp(SH4Ctx *c) {         /* f_8c038bec(r4 = ?, r5 = object, r6 = flags): the GLI object display (matrix setup + mesh submit loop) called by the IPO draw f_8c0ab4c6 and the actor draw f_8c05f7a0 */
    if (!(hle_native_cut & 128u)) { hle_orig(c, 0x8C038BEC); return; }
    hle_native_cut_calls[2]++;
}
static void h_cut_hudquad(SH4Ctx *c) {
    if (!(hle_native_cut & 2u)) { hle_orig(c, 0x8C07FC1A); return; }
    hle_native_cut_calls[1]++;
}

void hle_nativecut_init(void) {
#if !defined(__vita__)
    { const char *e = getenv("R2_NATIVE_CUT"); if (e && *e) hle_native_cut = (uint32_t)strtoul(e, NULL, 0); }
#endif
    hle_hook(0x8C05F4A0, h_cut_world);
    hle_hook(0x8C07FC1A, h_cut_hudquad);
    hle_hook(0x8C038BEC, h_cut_objdisp);
}
