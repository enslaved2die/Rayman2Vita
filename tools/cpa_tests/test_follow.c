/* test_follow: compares src/cpa/cpa_follow against a camlog.bin written by camlog_run (per-frame oracle log).
 *   test_follow LOG.bin [START END] [RAM_DUMP.bin REL]
 * Record format = camlog_run.c (header 16 B, ids 24 B, camSO 0x80, camMat 0x80, plSO 0x80, plMat 0x80, stack 0x100, camActor 0x800, plActor 0x400).
 * Checks, all on the same log:
 *   1. VERIFIED claim: orientation rows == lookat(C, L) from the oracle's own C and L (max |row component| error and max angle) over ALL frames with a valid camera.
 *   2. Layout claim: cpa_follow_read_ram on a full RAM dump matches the log record of the same frame (when RAM_DUMP REL given).
 *   3. Partial model, driven only by the oracle's Rayman position (frames START..END): max and mean error and first divergence of T, L, C and of the orientation.
 *      Reported twice: free run (never re-synchronised) and re-synchronised every 150 frames. Divergence threshold: position 0.5 world units, orientation 1 degree.
 * Exit status 1 only if check 1 or 2 fails. Model errors are measurements, not failures. */
#include "../../src/cpa/cpa_follow.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define RS (808 + 0x800 + 0x400)
typedef struct { uint32_t fr, rel, inp; float cmat[32], pmat[32], T[3], L[3], Cd[3]; } Rec;

static float f32(const uint8_t *p) { float v; memcpy(&v, p, 4); return v; }
static float dist3(const float *a, const float *b) { float x = a[0] - b[0], y = a[1] - b[1], z = a[2] - b[2]; return sqrtf(x * x + y * y + z * z); }
static int finite3(const float *a) { return isfinite(a[0]) && isfinite(a[1]) && isfinite(a[2]) && fabsf(a[0]) < 1e5f && fabsf(a[1]) < 1e5f && fabsf(a[2]) < 1e5f; }
static float angle_deg(const float *a, const float *b) { float d = a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; if (d > 1.f) d = 1.f; if (d < -1.f) d = -1.f; return acosf(d) * 57.29578f; }

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: test_follow LOG.bin [START END] [RAM.bin REL]\n"); return 2; }
    FILE *f = fopen(argv[1], "rb"); if (!f) { perror(argv[1]); return 2; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc((size_t)sz); if (fread(buf, 1, (size_t)sz, f) != (size_t)sz) return 2; fclose(f);
    int n = (int)(sz / RS);
    Rec *R = calloc((size_t)n, sizeof *R);
    for (int i = 0; i < n; i++) {
        const uint8_t *r = buf + (size_t)i * RS; uint32_t h[4]; memcpy(h, r, 16);
        R[i].fr = h[1]; R[i].rel = h[2]; R[i].inp = h[3];
        for (int k = 0; k < 32; k++) { R[i].cmat[k] = f32(r + 40 + 0x80 + 4 * k); R[i].pmat[k] = f32(r + 40 + 0x180 + 4 * k); }
        for (int k = 0; k < 3; k++) { R[i].T[k] = f32(r + 808 + 0x3c4 + 4 * k); R[i].L[k] = f32(r + 808 + 0x690 + 4 * k); R[i].Cd[k] = f32(r + 808 + 0x680 + 4 * k); }
    }
    int start = argc > 3 ? atoi(argv[2]) : 0, end = argc > 3 ? atoi(argv[3]) : n - 1; if (end > n - 2) end = n - 2;
    int fails = 0;

    /* 1. orientation */
    { double maxc = 0, maxa = 0; int cnt = 0;
      for (int i = 0; i < n; i++) {
          const float *C = R[i].cmat + 22, *L = R[i].L; if (!finite3(C) || !finite3(L) || dist3(C, L) < 1e-3f) continue;
          float rows[9]; if (cpa_follow_rows(C, L, rows)) continue;
          const float *o = R[i].cmat + 4; float oo = 0; for (int k = 0; k < 9; k++) { float d = fabsf(rows[k] - o[k]); if (d > oo) oo = d; }
          if (oo > 0.01f && !(fabsf(o[0]) <= 1.01f)) continue;
          float a = angle_deg(rows, o); if (oo > maxc) maxc = oo; if (a > maxa) maxa = a; cnt++;
      }
      printf("check1 orientation rows==lookat(C,L): %d frames, max row component error %.5f, max R0 angle error %.4f deg\n", cnt, maxc, maxa);
      if (maxa > 0.1) { printf("check1 FAIL\n"); fails++; }
    }

    /* 2. RAM layout */
    if (argc >= 6) {
        int rel = atoi(argv[5]); FILE *rf = fopen(argv[4], "rb");
        if (!rf) { perror(argv[4]); return 2; }
        uint8_t *ram = malloc(16u << 20); if (fread(ram, 1, 16u << 20, rf) != (16u << 20)) return 2; fclose(rf);
        CpaFollowRam ro; int rc = cpa_follow_read_ram(ram, &ro);
        int idx = -1; for (int i = 0; i < n; i++) if ((int)R[i].rel == rel) idx = i;
        if (rc || idx < 0) { printf("check2 FAIL (rc=%d idx=%d)\n", rc, idx); fails++; }
        else {
            float e1 = dist3(ro.camPos, R[idx].cmat + 22), e2 = dist3(ro.playerPos, R[idx].pmat + 22), e3 = dist3(ro.target, R[idx].T), e4 = dist3(ro.aim, R[idx].L), e5 = dist3(ro.camDataPos, R[idx].Cd);
            printf("check2 read_ram vs log rel %d: camPos %.2g player %.2g T %.2g L %.2g C(camData) %.2g  (camSO %08x camActor %08x gain %.3f)\n", rel, e1, e2, e3, e4, e5, ro.camSO, ro.camActor, ro.gain);
            if (e1 + e2 + e3 + e4 + e5 > 1e-3f) { printf("check2 FAIL\n"); fails++; }
        }
        free(ram);
    }

    /* 3. model */
    if (end - start < 10) { printf("window too short (%d..%d)\n", start, end); return fails ? 1 : 0; }
    for (int mode = 0; mode < 2; mode++) {
        int resync = mode ? 150 : 0;
        CpaFollow m; cpa_follow_init(&m, NULL, R[start].T, R[start].L, R[start].cmat + 22);
        double sT = 0, sL = 0, sC = 0, sA = 0; float mT = 0, mL = 0, mC = 0, mA = 0; int first = -1, firstA = -1, firstT = -1, cnt = 0;
        for (int i = start; i <= end; i++) {
            if (resync && (i - start) % resync == 0) cpa_follow_init(&m, NULL, R[i].T, R[i].L, R[i].cmat + 22);
            float eT = dist3(m.T, R[i].T), eL = dist3(m.L, R[i].L), eC = dist3(m.C, R[i].cmat + 22);
            float rows[9], ang = 0; if (!cpa_follow_rows(m.C, m.L, rows)) ang = angle_deg(rows, R[i].cmat + 4);
            sT += eT; sL += eL; sC += eC; sA += ang; cnt++;
            if (eT > mT) mT = eT; if (eL > mL) mL = eL; if (eC > mC) mC = eC; if (ang > mA) mA = ang;
            if (first < 0 && (eC > 0.5f || ang > 1.f)) first = i;
            if (firstA < 0 && ang > 1.f) firstA = i;
            if (firstT < 0 && eT > 0.5f) firstT = i;
            cpa_follow_step(&m, R[i + 1].pmat + 22);
        }
        printf("model %s window %d..%d (%d frames) | T err mean %.3f max %.3f | L err mean %.3f max %.3f | C err mean %.3f max %.3f | orientation mean %.2f max %.2f deg | first divergence (C>0.5 or >1deg): %d, orientation: %d, T: %d\n",
               mode ? "resync150" : "free-run", start, end, cnt, sT / cnt, mT, sL / cnt, mL, sC / cnt, mC, sA / cnt, mA, first, firstA, firstT);
    }
    free(R); free(buf);
    return fails ? 1 : 0;
}
