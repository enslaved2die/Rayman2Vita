/* perf.h - cheap always-on per-frame timing breakdown (compile switch R2_PERF, default 1; -DR2_PERF=0 removes it).
 * Collected on the guest/game thread (and the audio thread for its own fields), reported every R2_PERF_FRAMES (120) frames by r2_perf_report() to
 * ux0:data/rayman2/rayman2.log (Vita, via r2_perf_sink = vita_log) / stderr (host).  Overhead budget < 0.2 ms/frame: ~10 clock reads per frame plus one probe pair per 32 TA store-queue
 * writes (sceKernelGetProcessTimeWide is one cheap SVC; host: clock_gettime). */
#ifndef R2_PERF_H
#define R2_PERF_H
#include <stdint.h>
#ifndef R2_PERF
#define R2_PERF 1
#endif
#ifndef R2_PERF_FRAMES
#define R2_PERF_FRAMES 300
#endif
#if defined(__vita__)
#include <psp2/kernel/processmgr.h>
static inline uint64_t r2_now_us(void) { return sceKernelGetProcessTimeWide(); }
#else
#include <time.h>
static inline uint64_t r2_now_us(void) { struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)ts.tv_nsec / 1000; }
#endif

typedef struct R2Perf {
    /* timeline (guest thread), microseconds since the last report */
    uint64_t t_guest;        /* end of previous swap -> start of render submit: guest game logic + software transform + TA store-queue parse (everything the SH-4 code does) */
    uint64_t t_build;        /* ta_build_gl_reuse + depth cut + clip-space conversion (TA batch build) */
    uint64_t t_texdec;       /* PVR texture decode (VQ / twiddle / palette) + glTexImage2D uploads */
    uint64_t t_render;       /* whole vita_gl_render_frame (build + texture decode + GL submit) */
    uint64_t t_swap;         /* vglSwapBuffers: GPU wait + vsync block */
    uint64_t t_period;       /* swap return -> next swap return (total frame period) */
    uint64_t t_ta_dma;       /* time inside TA DMA parses (ch2 DMA into the TA), measured exactly */
    uint64_t t_ta_sq_probe;  /* time of the probed store-queue TA writes (every 32nd) */
    uint32_t ta_sq_n, ta_sq_probes;   /* SQ writes and probed ones */
    uint32_t frames, over17, over34, over50; uint32_t max_period_us;
    /* GL counters (sum over reported frames) */
    uint64_t draws, fog_draws, verts, state_calls, state_skipped, batches, tex_binds, tex_uploads, tex_bytes, strips, tris;
    double   area[4];        /* screen-area units: sum of triangle areas / (640*480): [0] opaque [1] punch-through [2] translucent [3] opaque fog re-draw */
    /* audio thread (written there): totals since start, latest split from snd_get_stats */
    volatile uint64_t aud_us_tot, aud_blocks; volatile uint32_t aud_us_max_win;
    volatile uint32_t aud_arm_us, aud_vox_us, aud_avg_us, aud_max_us;
    volatile uint64_t aud_arm_instr, aud_arm_bulk, aud_samples;   /* cumulative ARM7 instructions (total / of which bulk-skipped delay loop) and AICA samples, set by the audio thread from snd_get_stats */
    /* guest-thread breakdown of what the "guest" column is made of (microseconds / counts since the last report) */
    uint64_t t_vsleep, vsleep_n;            /* nanosleep() in deliver_vblank: the guest waiting for the next 60 Hz vblank (boot.c). Counted INSIDE "guest" but is idle time */
    uint64_t t_snd_tick, snd_tick_n;        /* stream catch-up dispatcher (snd.c sf_disp): up to 8 stream chunk feeds incl. their file reads per sound tick */
    uint64_t t_snd_lock, snd_lock_n;        /* guest thread waiting for the AICA lock held by the audio thread (snd.c) */
    /* render thread (R2_RENDER_THREAD): written by the guest thread: prep = texture validation/decode + PVR state snapshot at hand-off, rt_wait = blocked at hand-off because the renderer is behind (back-pressure);
     * written by the render thread: rt_idle = waiting for a job */
    uint64_t t_snap;         /* time of the snapshot (set by r2_perf_report) */
    uint64_t t_prep, t_rt_wait, t_rt_idle, t_parse;   /* t_parse: render thread parsing the captured TA packets (deferred parse) */
} R2Perf;
extern R2Perf g_perf;
extern void (*r2_perf_sink)(const char *line);   /* Vita: set by vita_main.c to its rayman2.log writer (one call per line); host: stderr */
void r2_perf_report(unsigned long guest_frame);
void r2_perf_format(const R2Perf *snap, unsigned long guest_frame, void (*sink)(const char *line));   /* formats one window (any thread; sink NULL = r2_perf_sink / stderr) */
extern void (*r2_perf_post)(const R2Perf *snap, unsigned long guest_frame);   /* if set, r2_perf_report hands the snapshot here instead of formatting inline */   /* prints + resets the window; call after a frame is complete */
#endif
