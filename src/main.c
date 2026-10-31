/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: main.c
 *
 * PlayStation Vita Entry Point
 * Phase 4: Engine boot and Dreamcast level load (PARTIAL; see Plan.md "Honest status")
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "cpa_engine.h"

#if defined(__vita__)
#include <psp2/kernel/processmgr.h>
#endif

int main(int argc, char *argv[]) {
    int max_frames = 0; /* Default: 0 = interactive infinite 3D gameplay */

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--test") == 0) {
            max_frames = 120;
        } else if (strncmp(argv[i], "--shot=", 7) == 0) {
            /* single-token form so it survives Vita3K's -Z app-args (e.g. --shot=60 also runs 90 ticks) */
            int n = atoi(argv[i] + 7);
            GAM_fn_vSetScreenshotFrame(n);
            max_frames = n + 30;
        } else if (strcmp(argv[i], "--shot") == 0 && i + 1 < argc) {
            GAM_fn_vSetScreenshotFrame(atoi(argv[++i]));
        } else if (strcmp(argv[i], "--rayman-cam") == 0) {
            GAM_fn_vSetDebugFlags(1, 0);   /* start the free-fly camera in front of Rayman */
        } else if (strncmp(argv[i], "--rayman-view=", 14) == 0) {
            float d = 6.f, h = 2.5f; int ro = 0;   /* --rayman-view=DIST,HEIGHT,RIGONLY (single token for Vita3K -Z) */
            sscanf(argv[i] + 14, "%f,%f,%d", &d, &h, &ro);
            GAM_fn_vSetRaymanView(d, h, ro);
        } else if (strcmp(argv[i], "--show-unposed") == 0) {
            GAM_fn_vSetDebugFlags(0, 1);   /* draw the unposed (placeholder) actor pile */
        } else if (strncmp(argv[i], "--frames=", 9) == 0) {
            max_frames = atoi(argv[i] + 9);
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
        }
    }

    /* 1. Initialize CPA Engine Subsystems, VFS, Memory, FIX.DAT & LEARN_10 */
    GAM_fn_vInitEngine();

    /* 2. Execute 60 FPS Game Loop (0 = interactive loop, > 0 = fixed test frames) */
    GAM_fn_vEngineMainLoop(max_frames);

    /* 3. Clean Engine Shutdown */
    GAM_fn_vShutdown();

#if defined(__vita__)
    sceKernelExitProcess(0);
#endif

    return 0;
}
