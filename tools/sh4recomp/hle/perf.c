/* perf.c - report side of perf.h */
#include "perf.h"
#include <stdio.h>
#include <string.h>
#pragma GCC diagnostic ignored "-Waddress"
R2Perf g_perf;
extern unsigned long sh4_stat_io_rd, sh4_stat_io_wr;      /* runtime.c: guest loads / stores outside RAM and outside the store-queue window */
static unsigned long s_srd0, s_swr0;
extern uint64_t hle_io_t_us __attribute__((weak)), hle_io_calls __attribute__((weak)), hle_io_bytes __attribute__((weak));      /* hle/io.c (absent in some unit-test links) */
static uint64_t s_io_t0, s_io_c0, s_io_b0;
static uint64_t s_aud_us0, s_aud_blk0, s_ai0, s_ab0, s_as0; static int s_hdr; static uint64_t s_wall0;
__attribute__((weak)) const char r2_variant_name[] = "host", r2_variant_flags[] = "";     /* the Vita build overrides these from build_dir/variant.c (Makefile.vita) */
void (*r2_perf_sink)(const char *line);
static void emit_to(void (*sink)(const char *), const char *s) {
    char ln[600];
    while (*s) {
        size_t n = strcspn(s, "\n"); if (n >= sizeof ln) n = sizeof ln - 1;
        memcpy(ln, s, n); ln[n] = 0;
        if (sink) sink(ln); else if (r2_perf_sink) r2_perf_sink(ln); else { fputs(ln, stderr); fputc('\n', stderr); }
        s += n; if (*s == '\n') s++;
    }
}
void r2_perf_format(const R2Perf *pp, unsigned long guest_frame, void (*sink)(const char *)) {
    R2Perf p = *pp; unsigned n = p.frames ? p.frames : 1; char b[2600]; int o = 0;
    uint64_t now = p.t_snap; double wall = s_wall0 ? (now - s_wall0) / 1e6 : 0; s_wall0 = now;
    if (!s_hdr) {
        s_hdr = 1;
        o += snprintf(b + o, sizeof b - o, "# variant: %s | %s\n", r2_variant_name, r2_variant_flags);
        o += snprintf(b + o, sizeof b - o,
            "# Rayman 2 Vita perf block (in rayman2.log). One block per %d frames. All times are per-frame averages in ms unless noted.\n"
            "#  guest   = end of previous swap -> start of GL submit: game logic + software transform + TA store-queue parse (the SH-4 code, on the game thread)\n"
            "#  ta      = part of guest spent parsing TA data (SQ writes: extrapolated from 1-in-32 probes; DMA: exact)\n"
            "#  build   = TA strip -> GL batch conversion (cull, clip, depth cut, clip-space vertices)\n"
            "#  texdec  = PVR texture decode + glTexImage2D (only when a texture is new / changed)\n"
            "#  submit  = rest of vita_gl_render_frame: GL state + glDrawArrays CPU time\n"
            "#  swap    = vglSwapBuffers: waiting for the GPU / vsync (large = GPU or vsync bound; ~0 = CPU bound)\n"
            "#  period  = full frame time (swap return to swap return); fps = 1000/period\n"
            "#  area    = sum of triangle areas in units of the 640x480 screen (overdraw estimate); fog = extra opaque fog pass\n"
            "#  guest split (ms/frame, all INSIDE guest): io = file IO on the game thread; vsleep = idle wait for the next 60 Hz vblank; sndtick = stream catch-up dispatcher; sndlock = waiting for the AICA lock;\n"
            "#    code = guest - io - vsleep - sndtick - sndlock = the recompiled SH-4 code itself (incl. TA parse). slow rd/wr = guest loads/stores per frame that are neither RAM nor store-queue (MMIO: TMU/SPG/ASIC/AICA/G2...)\n#\n", R2_PERF_FRAMES);
    }
    double ta_ms = (p.t_ta_dma + (p.ta_sq_probes ? (double)p.t_ta_sq_probe * ((double)p.ta_sq_n / p.ta_sq_probes) : 0.0)) / 1000.0 / n;
    double guest = p.t_guest / 1000.0 / n, build = p.t_build / 1000.0 / n, texd = p.t_texdec / 1000.0 / n, rend = p.t_render / 1000.0 / n, swap = p.t_swap / 1000.0 / n, per = p.t_period / 1000.0 / n;
    double submit = rend - build - texd; if (submit < 0) submit = 0;
    o += snprintf(b + o, sizeof b - o, "[perf] ---- guest frame %lu: window of %u rendered frames, %.2f s wall | variant %s ----\n", guest_frame, p.frames, wall, r2_variant_name);
    o += snprintf(b + o, sizeof b - o, "[perf] period %.2f ms (%.1f fps, max %.1f ms) = guest %.2f (ta %.2f) + build %.2f + texdec %.2f + submit %.2f + swap %.2f + other %.2f\n",
                  per, per > 0 ? 1000.0 / per : 0.0, p.max_period_us / 1000.0, guest, ta_ms, build, texd, submit, swap, per - guest - rend - swap);
    o += snprintf(b + o, sizeof b - o, "[perf] frames over 16.7 ms: %u/%u, over 33.4 ms: %u, over 50 ms: %u\n", p.over17, p.frames, p.over34, p.over50);
    o += snprintf(b + o, sizeof b - o, "[perf] per frame: strips %.0f tris %.0f batches %.0f draws %.0f (+%.0f fog) verts %.0f | gl state calls %.0f (+%.0f skipped) | tex binds %.0f uploads %.2f (%.1f KB) | SQ writes %.0f\n",
                  (double)p.strips / n, (double)p.tris / n, (double)p.batches / n, (double)p.draws / n, (double)p.fog_draws / n, (double)p.verts / n, (double)p.state_calls / n, (double)p.state_skipped / n,
                  (double)p.tex_binds / n, (double)p.tex_uploads / n, (double)p.tex_bytes / n / 1024.0, (double)p.ta_sq_n / n);
    o += snprintf(b + o, sizeof b - o, "[perf] overdraw (screens/frame): opaque %.2f punch %.2f translucent %.2f | opaque fog pass %.2f | total fill %.2f screens (= %.1f Mpixel/s at 960x544 if rendered at full resolution)\n",
                  p.area[0] / n, p.area[1] / n, p.area[2] / n, p.area[3] / n, (p.area[0] + p.area[1] + p.area[2] + p.area[3]) / n,
                  (p.area[0] + p.area[1] + p.area[2] + p.area[3]) / n * 960.0 * 544.0 * (per > 0 ? 1000.0 / per : 0.0) / 1e6);
    if (p.t_prep || p.t_rt_wait || p.t_rt_idle || p.t_parse)
        o += snprintf(b + o, sizeof b - o, "[perf] render thread (own core): guest hand-off cost: prep %.2f ms (texture check/decode + PVR snapshot) + blocked %.2f ms (renderer behind) | render thread idle %.2f ms, busy %.2f ms per frame (parse %.2f + build %.2f + upload %.2f + submit %.2f + swap %.2f; swap included)\n",
                      p.t_prep / 1000.0 / n, p.t_rt_wait / 1000.0 / n, p.t_rt_idle / 1000.0 / n, (p.t_render + p.t_swap + p.t_parse) / 1000.0 / n, p.t_parse / 1000.0 / n, build, texd, submit, swap);
    {   uint64_t io_t = &hle_io_t_us ? hle_io_t_us - s_io_t0 : 0, io_c = &hle_io_calls ? hle_io_calls - s_io_c0 : 0, io_b = &hle_io_bytes ? hle_io_bytes - s_io_b0 : 0;
        if (&hle_io_t_us) { s_io_t0 = hle_io_t_us; s_io_c0 = hle_io_calls; s_io_b0 = hle_io_bytes; }
        double io = io_t / 1000.0 / n, vs = p.t_vsleep / 1000.0 / n, st = p.t_snd_tick / 1000.0 / n, sl = p.t_snd_lock / 1000.0 / n, code = guest - io - vs - st - sl;
        o += snprintf(b + o, sizeof b - o, "[perf] guest split: io %.2f (%.1f calls, %.0f KB) + vsleep %.2f (%.1f/frame) + sndtick %.2f (%.1f) + sndlock %.2f (%.2f) + code %.2f ms | slow rd %.0f wr %.0f per frame\n",
                      io, (double)io_c / n, (double)io_b / n / 1024.0, vs, (double)p.vsleep_n / n, st, (double)p.snd_tick_n / n, sl, (double)p.snd_lock_n / n, code, (double)(sh4_stat_io_rd - s_srd0) / n, (double)(sh4_stat_io_wr - s_swr0) / n); s_srd0 = sh4_stat_io_rd; s_swr0 = sh4_stat_io_wr; }
    {   /* ARM7 cost per interpreted instruction: block time from the 5 s probe, instruction count from the cumulative counters over this window */
        uint64_t ai = p.aud_arm_instr - s_ai0, ab = p.aud_arm_bulk - s_ab0, as = p.aud_samples - s_as0; s_ai0 = p.aud_arm_instr; s_ab0 = p.aud_arm_bulk; s_as0 = p.aud_samples;
        double per_blk = (double)as / (1024.0 * 44100.0 / 48000.0);     /* blocks in the window = AICA samples / 940.8 */
        double disp = (ai > ab) ? (double)(ai - ab) : 0.0, per_s = per_blk > 0 ? disp / per_blk : 0.0;
        o += snprintf(b + o, sizeof b - o, "[perf] arm7: %.0f dispatched instr/block (+%.0f bulk-skipped), %.1f instr/AICA sample -> %.1f ns/dispatched instr (= %.0f cycles at 444 MHz) from the 5 s arm7 probe\n",
                      per_s, per_blk > 0 ? (double)ab / per_blk : 0.0, as ? disp / (double)as : 0.0, per_s > 0 ? p.aud_arm_us * 1000.0 / per_s : 0.0, per_s > 0 ? p.aud_arm_us * 1000.0 / per_s * 0.444 : 0.0); }
    { uint64_t blk = p.aud_blocks - s_aud_blk0, us = p.aud_us_tot - s_aud_us0; s_aud_blk0 = p.aud_blocks; s_aud_us0 = p.aud_us_tot;
      o += snprintf(b + o, sizeof b - o, "[perf] audio thread (own core): %.2f ms/block avg over this window (max %.2f; budget 21.33) = %.0f%% of a core | est. split/block (latest 5 s probe): arm7 %.2f voices %.2f rest %.2f ms\n",
                    blk ? us / 1000.0 / blk : 0.0, p.aud_max_us / 1000.0, blk ? us / 21333.0 / blk * 100.0 : 0.0, p.aud_arm_us / 1000.0, p.aud_vox_us / 1000.0,
                    p.aud_avg_us > p.aud_arm_us + p.aud_vox_us ? (p.aud_avg_us - p.aud_arm_us - p.aud_vox_us) / 1000.0 : 0.0); }
    emit_to(sink, b);
}
void (*r2_perf_post)(const R2Perf *snap, unsigned long guest_frame);
/* Cheap part (caller's thread): copy the window out of g_perf and reset it.  The text formatting (a dozen snprintf with doubles) and the writing happen in r2_perf_format(), on the caller's thread
 * unless r2_perf_post is set, in which case the snapshot is handed to that function (vita_main.c: wait-free mailbox to the log writer thread) and the render thread never formats or writes. */
void r2_perf_report(unsigned long guest_frame) {
    R2Perf snap = g_perf; snap.t_snap = r2_now_us();
    uint64_t at = g_perf.aud_us_tot, ab = g_perf.aud_blocks, ai = g_perf.aud_arm_instr, abk = g_perf.aud_arm_bulk, asm_ = g_perf.aud_samples; uint32_t aa = g_perf.aud_arm_us, av = g_perf.aud_vox_us, aavg = g_perf.aud_avg_us, amax = g_perf.aud_max_us;
    memset(&g_perf, 0, sizeof g_perf);
    g_perf.aud_us_tot = at; g_perf.aud_blocks = ab; g_perf.aud_arm_us = aa; g_perf.aud_vox_us = av; g_perf.aud_avg_us = aavg; g_perf.aud_max_us = amax; g_perf.aud_arm_instr = ai; g_perf.aud_arm_bulk = abk; g_perf.aud_samples = asm_;
    if (r2_perf_post) r2_perf_post(&snap, guest_frame); else r2_perf_format(&snap, guest_frame, NULL);
}
