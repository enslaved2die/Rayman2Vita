/* vita_main.c - PS Vita entry point for recompiled Dreamcast Rayman 2 HLE runtime. */
#include <psp2/ctrl.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/display.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/clib.h>
#include <malloc.h>

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

#include "hle.h"
#include "io.h"
#include "pad.h"
#include "ta.h"
#include "vita_gl_render.h"
#include "snd.h"
#include <psp2/audioout.h>
#include <psp2/io/fcntl.h>

/* Memory budget (retail Vita user space is ~256 MB for a plain app): static BSS is ~26 MB (sh4_ram 16 + vram 8 + waveram 2) on top of the
 * 9.6 MB image, vitaGL takes its own memblocks (8 MB legacy pool + 16 MB RAM threshold + textures in CDRAM). The newlib heap only holds the
 * 0.9 MB boot image, the 4 MB texture decode buffer, TA frame vertex arrays and the io index (a few hundred KB): 96 MB is ample and measured
 * peak is logged ([vita] heap ...). 256 MB (as before) risks a failed sceKernelAllocMemBlock for vitaGL/stack on real hardware. */
int _newlib_heap_size_user = 96 * 1024 * 1024;

/* The recompiled SH-4 functions are plain C functions that call each other (guest call = host call), so host stack depth follows guest call
 * depth with potentially large frames. The default Vita main-thread stack is only 256 KB; run the whole game in a thread with a big stack. */
#define GAME_STACK_SIZE (8 * 1024 * 1024)

static SH4Ctx ctx;

/* [vita] messages go to hle_log (stderr -> Vita3K console) AND to ux0:data/rayman2/rayman2.log (flushed per line: survives a crash,
 * works on real hardware where stderr goes nowhere). */
static SceUID s_logfd = -1;
static void vita_log(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void vita_log(const char *fmt, ...) {
    char buf[512]; va_list ap; va_start(ap, fmt); vsnprintf(buf, sizeof buf, fmt, ap); va_end(ap);
    hle_log("%s", buf);
    sceClibPrintf("%s\n", buf);
    if (s_logfd < 0) s_logfd = sceIoOpen("ux0:data/rayman2/rayman2.log", SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0777);
    if (s_logfd >= 0) { size_t n = strlen(buf); buf[n] = '\n'; sceIoWrite(s_logfd, buf, n + 1); }   /* direct sceIo: unbuffered, survives a crash */
}

/* Update controller state from PS Vita hardware to Dreamcast Maple pad */
/* 16:9 (the game's own wide mode, see ta_hle.c): default on; -DR2_VITA_WIDE=0 builds with the 4:3 pillarbox default; SELECT toggles at run time. */
#ifndef R2_VITA_WIDE
#define R2_VITA_WIDE 1
#endif
static void vita_update_input(void) {
#ifdef R2_VITA_AUTOTEST   /* unattended menu drive: START at frame 100, A at 320 (6 frames each) */
    { uint32_t b = 0; if (hle_frame_count >= 100 && hle_frame_count < 106) b = PAD_START; else if (hle_frame_count >= 320 && hle_frame_count < 326) b = PAD_A;
      pad_set_state(b, NULL); return; }
#endif
    SceCtrlData pad;
    memset(&pad, 0, sizeof(pad));
    int count = sceCtrlPeekBufferPositive(0, &pad, 1);
    if (count <= 0) return;

    { static unsigned prev_sel; unsigned sel = pad.buttons & SCE_CTRL_SELECT;
      if (sel && !prev_sel) { hle_ta_wide_set(!hle_ta_wide_pref()); vita_log("[vita] 16:9 mode %s", hle_ta_wide_pref() ? "on" : "off (4:3)"); }
      prev_sel = sel; }

    uint32_t dc_buttons = 0;
    if (pad.buttons & SCE_CTRL_CROSS)    dc_buttons |= PAD_A;
    if (pad.buttons & SCE_CTRL_CIRCLE)   dc_buttons |= PAD_B;
    if (pad.buttons & SCE_CTRL_SQUARE)   dc_buttons |= PAD_X;
    if (pad.buttons & SCE_CTRL_TRIANGLE) dc_buttons |= PAD_Y;
    if (pad.buttons & SCE_CTRL_START)    dc_buttons |= PAD_START;
    if (pad.buttons & SCE_CTRL_UP)       dc_buttons |= PAD_UP;
    if (pad.buttons & SCE_CTRL_DOWN)     dc_buttons |= PAD_DOWN;
    if (pad.buttons & SCE_CTRL_LEFT)     dc_buttons |= PAD_LEFT;
    if (pad.buttons & SCE_CTRL_RIGHT)    dc_buttons |= PAD_RIGHT;

    PadAnalog dc_analog;
    dc_analog.lt = (pad.buttons & SCE_CTRL_LTRIGGER) ? 255 : 0;
    dc_analog.rt = (pad.buttons & SCE_CTRL_RTRIGGER) ? 255 : 0;
    dc_analog.joyx = pad.lx;
    dc_analog.joyy = pad.ly;
    dc_analog.joy2x = pad.rx;
    dc_analog.joy2y = pad.ry;

    pad_set_state(dc_buttons, &dc_analog);
}

static void vita_input_callback(SH4Ctx *c) {
    (void)c;
    vita_update_input();
}

static uint64_t acc_render, acc_swap, acc_ta, acc_ta_n;
#ifdef R2_VITA_PROFILE
/* make -f Makefile.vita PROFILE=1: hot-spot split via the linker (-Wl,--wrap): time spent in the GL submit and in the swap (vsync wait) per frame. */
extern void __real_vita_gl_render_frame(const TaFrame *frame);
extern void __real_vita_gl_swap(void);
extern TaDest __real_ta_ext_write32(TaCtx *c, uint32_t ext_addr, const void *data32);
TaDest __wrap_ta_ext_write32(TaCtx *c, uint32_t ext_addr, const void *data32) {
    uint64_t t = sceKernelGetProcessTimeWide(); TaDest d = __real_ta_ext_write32(c, ext_addr, data32); acc_ta += sceKernelGetProcessTimeWide() - t; acc_ta_n++; return d; }
void __wrap_vita_gl_render_frame(const TaFrame *frame) { uint64_t t = sceKernelGetProcessTimeWide(); __real_vita_gl_render_frame(frame); acc_render += sceKernelGetProcessTimeWide() - t; }
void __wrap_vita_gl_swap(void) { uint64_t t = sceKernelGetProcessTimeWide(); __real_vita_gl_swap(); acc_swap += sceKernelGetProcessTimeWide() - t; }

#endif

/* frame timing: begin->end = guest scene build + TA parse inside kmBegin..kmRender; frame-to-frame = full period (vsynced render included) */
static uint64_t t_begin, t_last_end, acc_build, acc_period; static unsigned acc_n;
static void vita_frame_begin(SH4Ctx *c) { vita_update_input(); (void)c; t_begin = sceKernelGetProcessTimeWide(); }
static void vita_frame_end(SH4Ctx *c) {
    (void)c;
    uint64_t now = sceKernelGetProcessTimeWide();
    acc_build += now - t_begin; if (t_last_end) acc_period += now - t_last_end; t_last_end = now;
    if (++acc_n == 300) {
        struct mallinfo mi = mallinfo();
        vita_log("[vita] frames %lu: avg period %.2f ms (%.1f fps), begin->end %.2f ms, gl_render_frame %.2f ms, gl_swap %.2f ms, TA SQ parse %.2f ms (%llu writes/frame, timer overhead included), heap in use %d KB (arena %d KB), io lookups %lu (%lu misses, answered from the in-memory index)",
                hle_frame_count, acc_period / 299000.0, 299000000.0 / (acc_period ? acc_period : 1), acc_build / 300000.0,
                acc_render / 300000.0, acc_swap / 300000.0, acc_ta / 300000.0, (unsigned long long)(acc_ta_n / 300), mi.uordblks >> 10, mi.arena >> 10, hle_io_lookups, hle_io_misses);
        acc_n = 0; acc_build = acc_period = acc_render = acc_swap = acc_ta = acc_ta_n = 0;
    }
}

static int dir_exists(const char *path) {
    DIR *d = opendir(path);
    if (!d) return 0;
    closedir(d);
    return 1;
}

/* Quiet by default (verbose 1 logs every file probe, every frame and every sprintf: hundreds of lines/s); build with
 * EXTRA_CFLAGS=-DR2_VITA_VERBOSE=1 (or 2) to get the old behaviour. */
#ifndef R2_VITA_VERBOSE
#define R2_VITA_VERBOSE 0
#endif

static int audio_thread(SceSize args, void *argp);
static int game_main(void) {
    hle_verbose = R2_VITA_VERBOSE;

    /* 1. Set controller sampling mode */
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);

    /* 2. Initialize vitaGL hardware rendering context */
    hle_ta_wide_set(R2_VITA_WIDE);
    vita_gl_render_init();

    /* 3. Determine binary image path */
    const char *candidate_bins[] = {
        "app0:1ST_READ.BIN",
        "ux0:data/rayman2/1ST_READ.BIN",
        "ux0:data/rayman2/assets/dc/1ST_READ.BIN",
        NULL
    };

    const char *bin_path = NULL;
    FILE *f = NULL;
    for (int i = 0; candidate_bins[i]; i++) {
        f = fopen(candidate_bins[i], "rb");
        if (f) {
            bin_path = candidate_bins[i];
            break;
        }
    }

    if (!f) {
        vita_log("[vita] ERROR: 1ST_READ.BIN not found in app0: or ux0:data/rayman2");
        sceKernelExitProcess(1);
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t *buf = (uint8_t *)malloc((size_t)len);
    if (!buf) {
        fclose(f);
        vita_log("[vita] ERROR: Failed to allocate %ld bytes for image", len);
        sceKernelExitProcess(1);
        return 1;
    }

    if (fread(buf, 1, (size_t)len, f) != (size_t)len) {
        free(buf);
        fclose(f);
        vita_log("[vita] ERROR: Failed to read %ld bytes from %s", len, bin_path);
        sceKernelExitProcess(1);
        return 1;
    }
    fclose(f);
    vita_log("[vita] Loaded %s (%ld bytes)", bin_path, len);

    /* 4. Determine data root directory */
    const char *data_root = "ux0:data/rayman2";
    if (!dir_exists("ux0:data/rayman2/DCDATA")) {
        vita_log("[vita] ux0:data/rayman2/DCDATA missing, falling back to %s", data_root);
        data_root = "app0:";
    } else {
        vita_log("[vita] Using data root %s", data_root);
    }

    snd_init(48000);   /* the MAIN port only accepts 48 kHz (Vita3K rejects 44.1 kHz with INVALID_SAMPLE_FREQ); snd.c resamples */
    { SceUID at = sceKernelCreateThread("rayman2_audio", audio_thread, 0x10000100 - 20, 64 * 1024, 0, 0, NULL);
      if (at >= 0) sceKernelStartThread(at, 0, NULL); else vita_log("[vita] audio thread create failed 0x%08x", at); }

    /* 5. Hook input update into VBlank and frame boundary callbacks */
    hle_set_vblank_cb(vita_input_callback);
    hle_set_frame_callbacks(vita_frame_begin, vita_frame_end);
    vita_update_input();

    /* 6. Initialize HLE boot environment and start recompiled main */
    hle_boot_init(&ctx, buf, (uint32_t)len, data_root);

    int rc = hle_run_main(&ctx);
    vita_log("[vita] hle_run_main exited with code %d (stop reason: %s)", rc, hle_stop_reason());

    free(buf);
    return rc;
}

/* Audio thread: snd_mix() is the clock of the emulated AICA/ARM7; sceAudioOutOutput blocks at the hardware rate. */
static int audio_thread(SceSize args, void *argp) {
    (void)args; (void)argp;
    int port = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN, 1024, 48000, SCE_AUDIO_OUT_MODE_STEREO);
    if (port < 0) { vita_log("[vita] audio: sceAudioOutOpenPort failed 0x%08x", port); return 0; }
    static int16_t buf[1024 * 2];
    unsigned long blocks = 0; int peak = 0, gpeak = 0;
    uint64_t last = sceKernelGetProcessTimeWide();
    vita_log("[vita] audio thread running (port %d)", port);
    for (;;) {
        snd_mix(buf, 1024);
        for (int i = 0; i < 2048; i++) { int v = buf[i] < 0 ? -buf[i] : buf[i]; if (v > peak) peak = v; }
        sceAudioOutOutput(port, buf);
        blocks++;
        uint64_t now = sceKernelGetProcessTimeWide();
        if (now - last >= 5000000) {
            SndStats st; snd_get_stats(&st);
            if (peak > gpeak) gpeak = peak;
            vita_log("[vita] audio: frame %lu, %lu blocks, peak %d (global %d), arm_running %d, ringcmds %llu, keyon %llu, active ch %d, undef %u",
                     hle_frame_count, blocks, peak, gpeak, st.arm_running, (unsigned long long)st.ringcmds, (unsigned long long)st.keyon, st.active_channels, st.undef_instr);
            peak = 0; last = now;
        }
    }
    return 0;
}

static int game_thread(SceSize args, void *argp) {
    (void)args; (void)argp;
    int rc = game_main();
    sceKernelExitProcess(rc);
    return rc;
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
#ifdef R2_NO_GAME_THREAD   /* diagnostic: run on the main thread */
    return game_thread(0, NULL);
#endif
    SceUID th = sceKernelCreateThread("rayman2_game", game_thread, 0x10000100, GAME_STACK_SIZE, 0, 0, NULL);
    if (th < 0) {
        vita_log("[vita] sceKernelCreateThread(%d KB stack) failed: 0x%08x", GAME_STACK_SIZE >> 10, th);
        return game_main();
    }
    sceKernelStartThread(th, 0, NULL);
    sceKernelWaitThreadEnd(th, NULL, NULL);
    sceKernelExitProcess(0);
    return 0;
}
