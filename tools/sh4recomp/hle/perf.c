/* perf.c - report side of perf.h */
#include "perf.h"
#include <stdio.h>
#include <string.h>
R2Perf g_perf;
static uint64_t s_aud_us0, s_aud_blk0; static int s_hdr; static uint64_t s_wall0;
void (*r2_perf_sink)(const char *line);
static void emit(const char *s) {
    char ln[600];
    while (*s) {
        size_t n = strcspn(s, "\n"); if (n >= sizeof ln) n = sizeof ln - 1;
        memcpy(ln, s, n); ln[n] = 0;
        if (r2_perf_sink) r2_perf_sink(ln); else { fputs(ln, stderr); fputc('\n', stderr); }
        s += n; if (*s == '\n') s++;
    }
}
void r2_perf_report(unsigned long guest_frame) {
    R2Perf p = g_perf; unsigned n = p.frames ? p.frames : 1; char b[2600]; int o = 0;
    uint64_t now = r2_now_us(); double wall = s_wall0 ? (now - s_wall0) / 1e6 : 0; s_wall0 = now;
    if (!s_hdr) {
        s_hdr = 1;
        o += snprintf(b + o, sizeof b - o,
            "# Rayman 2 Vita perf block (in rayman2.log). One block per %d frames. All times are per-frame averages in ms unless noted.\n"
            "#  guest   = end of previous swap -> start of GL submit: game logic + software transform + TA store-queue parse (the SH-4 code, on the game thread)\n"
            "#  ta      = part of guest spent parsing TA data (SQ writes: extrapolated from 1-in-32 probes; DMA: exact)\n"
            "#  build   = TA strip -> GL batch conversion (cull, clip, depth cut, clip-space vertices)\n"
            "#  texdec  = PVR texture decode + glTexImage2D (only when a texture is new / changed)\n"
            "#  submit  = rest of vita_gl_render_frame: GL state + glDrawArrays CPU time\n"
            "#  swap    = vglSwapBuffers: waiting for the GPU / vsync (large = GPU or vsync bound; ~0 = CPU bound)\n"
            "#  period  = full frame time (swap return to swap return); fps = 1000/period\n"
            "#  area    = sum of triangle areas in units of the 640x480 screen (overdraw estimate); fog = extra opaque fog pass\n#\n", R2_PERF_FRAMES);
    }
    double ta_ms = (p.t_ta_dma + (p.ta_sq_probes ? (double)p.t_ta_sq_probe * ((double)p.ta_sq_n / p.ta_sq_probes) : 0.0)) / 1000.0 / n;
    double guest = p.t_guest / 1000.0 / n, build = p.t_build / 1000.0 / n, texd = p.t_texdec / 1000.0 / n, rend = p.t_render / 1000.0 / n, swap = p.t_swap / 1000.0 / n, per = p.t_period / 1000.0 / n;
    double submit = rend - build - texd; if (submit < 0) submit = 0;
    o += snprintf(b + o, sizeof b - o, "[perf] ---- guest frame %lu: window of %u rendered frames, %.2f s wall ----\n", guest_frame, p.frames, wall);
    o += snprintf(b + o, sizeof b - o, "[perf] period %.2f ms (%.1f fps, max %.1f ms) = guest %.2f (ta %.2f) + build %.2f + texdec %.2f + submit %.2f + swap %.2f + other %.2f\n",
                  per, per > 0 ? 1000.0 / per : 0.0, p.max_period_us / 1000.0, guest, ta_ms, build, texd, submit, swap, per - guest - rend - swap);
    o += snprintf(b + o, sizeof b - o, "[perf] frames over 16.7 ms: %u/%u, over 33.4 ms: %u, over 50 ms: %u\n", p.over17, p.frames, p.over34, p.over50);
    o += snprintf(b + o, sizeof b - o, "[perf] per frame: strips %.0f tris %.0f batches %.0f draws %.0f (+%.0f fog) verts %.0f | gl state calls %.0f (+%.0f skipped) | tex binds %.0f uploads %.2f (%.1f KB) | SQ writes %.0f\n",
                  (double)p.strips / n, (double)p.tris / n, (double)p.batches / n, (double)p.draws / n, (double)p.fog_draws / n, (double)p.verts / n, (double)p.state_calls / n, (double)p.state_skipped / n,
                  (double)p.tex_binds / n, (double)p.tex_uploads / n, (double)p.tex_bytes / n / 1024.0, (double)p.ta_sq_n / n);
    o += snprintf(b + o, sizeof b - o, "[perf] overdraw (screens/frame): opaque %.2f punch %.2f translucent %.2f | opaque fog pass %.2f | total fill %.2f screens (= %.1f Mpixel/s at 960x544 if rendered at full resolution)\n",
                  p.area[0] / n, p.area[1] / n, p.area[2] / n, p.area[3] / n, (p.area[0] + p.area[1] + p.area[2] + p.area[3]) / n,
                  (p.area[0] + p.area[1] + p.area[2] + p.area[3]) / n * 960.0 * 544.0 * (per > 0 ? 1000.0 / per : 0.0) / 1e6);
    { uint64_t blk = p.aud_blocks - s_aud_blk0, us = p.aud_us_tot - s_aud_us0; s_aud_blk0 = p.aud_blocks; s_aud_us0 = p.aud_us_tot;
      o += snprintf(b + o, sizeof b - o, "[perf] audio thread (own core): %.2f ms/block avg over this window (max %.2f; budget 21.33) = %.0f%% of a core | est. split/block (latest 5 s probe): arm7 %.2f voices %.2f rest %.2f ms\n",
                    blk ? us / 1000.0 / blk : 0.0, p.aud_max_us / 1000.0, blk ? us / 21333.0 / blk * 100.0 : 0.0, p.aud_arm_us / 1000.0, p.aud_vox_us / 1000.0,
                    p.aud_avg_us > p.aud_arm_us + p.aud_vox_us ? (p.aud_avg_us - p.aud_arm_us - p.aud_vox_us) / 1000.0 : 0.0); }
    emit(b);
    unsigned keep_ta = 0; (void)keep_ta;
    /* reset the window but keep the audio totals (monotonic) */
    uint64_t at = g_perf.aud_us_tot, ab = g_perf.aud_blocks; uint32_t aa = g_perf.aud_arm_us, av = g_perf.aud_vox_us, aavg = g_perf.aud_avg_us, amax = g_perf.aud_max_us;
    memset(&g_perf, 0, sizeof g_perf);
    g_perf.aud_us_tot = at; g_perf.aud_blocks = ab; g_perf.aud_arm_us = aa; g_perf.aud_vox_us = av; g_perf.aud_avg_us = aavg; g_perf.aud_max_us = amax;
}
