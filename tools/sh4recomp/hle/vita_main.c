/* vita_main.c - PS Vita entry point for recompiled Dreamcast Rayman 2 HLE runtime. */
#include <psp2/ctrl.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/display.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

#include "hle.h"
#include "pad.h"
#include "ta.h"
#include "vita_gl_render.h"

int _newlib_heap_size_user = 256 * 1024 * 1024;

static SH4Ctx ctx;

/* Update controller state from PS Vita hardware to Dreamcast Maple pad */
static void vita_update_input(void) {
    SceCtrlData pad;
    memset(&pad, 0, sizeof(pad));
    int count = sceCtrlPeekBufferPositive(0, &pad, 1);
    if (count <= 0) return;

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

static int dir_has_contents(const char *path) {
    DIR *d = opendir(path);
    if (!d) return 0;
    struct dirent *ent;
    int count = 0;
    while ((ent = readdir(d))) {
        if (strcmp(ent->d_name, ".") != 0 && strcmp(ent->d_name, "..") != 0) {
            count++;
            break;
        }
    }
    closedir(d);
    return count > 0;
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    /* 1. Set controller sampling mode */
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);

    /* 2. Initialize vitaGL hardware rendering context */
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
        hle_log("[vita] ERROR: 1ST_READ.BIN not found in app0: or ux0:data/rayman2\n");
        sceKernelExitProcess(1);
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t *buf = (uint8_t *)malloc((size_t)len);
    if (!buf) {
        fclose(f);
        hle_log("[vita] ERROR: Failed to allocate %ld bytes for image\n", len);
        sceKernelExitProcess(1);
        return 1;
    }

    if (fread(buf, 1, (size_t)len, f) != (size_t)len) {
        free(buf);
        fclose(f);
        hle_log("[vita] ERROR: Failed to read %ld bytes from %s\n", len, bin_path);
        sceKernelExitProcess(1);
        return 1;
    }
    fclose(f);
    hle_log("[vita] Loaded %s (%ld bytes)\n", bin_path, len);

    /* 4. Determine data root directory */
    const char *data_root = "ux0:data/rayman2";
    if (!dir_has_contents(data_root)) {
        hle_log("[vita] %s not populated, falling back to app0:\n", data_root);
        data_root = "app0:";
    } else {
        hle_log("[vita] Using data root %s\n", data_root);
    }

    /* 5. Hook input update into VBlank and frame boundary callbacks */
    hle_set_vblank_cb(vita_input_callback);
    hle_set_frame_callbacks(vita_input_callback, NULL);
    vita_update_input();

    /* 6. Initialize HLE boot environment and start recompiled main */
    hle_boot_init(&ctx, buf, (uint32_t)len, data_root);

    int rc = hle_run_main(&ctx);
    hle_log("[vita] hle_run_main exited with code %d\n", rc);

    free(buf);
    sceKernelExitProcess(rc);
    return rc;
}
