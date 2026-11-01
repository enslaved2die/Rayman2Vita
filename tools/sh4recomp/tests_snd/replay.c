/* Bit-exact engine regression: replay a recorded guest trace (R2_SND_REC) into an engine and dump the PCM.
 * Build (engine = hle/snd.c or the frozen reference tests_snd/snd_ref.c):
 *   cc -O2 -DSND_TEST -std=gnu11 -I. -Ihle -o tests_snd/replay_new tests_snd/replay.c hle/snd.c -lm -lpthread
 *   cc -O2 -DSND_TEST -std=gnu11 -I. -Ihle -o tests_snd/replay_ref tests_snd/replay.c tests_snd/snd_ref.c -lm -lpthread
 * Run:   replay_X <trace.rec> <mode> <out.pcm>    mode 44 = exact-stamp replay through advance (44.1 kHz), 48 = through snd_mix(1024) at 48 kHz (what the Vita runs)
 * Compare: cmp out_ref.pcm out_new.pcm  (identical files = bit-exact).  Prints wall time per 1024-frame block. */
#include "../hle/snd.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../hle/hle.h"
uint8_t sh4_ram[SH4_RAM_SIZE];
uint64_t hle_time_us(void) { return 0; }
void hle_mmio_map(uint32_t lo, uint32_t hi, hle_mmio_rd rd, hle_mmio_wr wr) { (void)lo; (void)hi; (void)rd; (void)wr; }
void hle_mmio_watch(uint32_t lo, uint32_t hi, hle_mmio_wr cb) { (void)lo; (void)hi; (void)cb; }
uint32_t hle_reg_get(uint32_t a) { (void)a; return 0; }
void hle_reg_set(uint32_t a, uint32_t v) { (void)a; (void)v; }
void hle_asic_raise_later(uint32_t m) { (void)m; }
unsigned long hle_frame_count; uint32_t hle_ring[256][2]; uint32_t hle_ring_pos;
typedef struct { uint64_t t; uint32_t k, a, v; uint8_t *blob; } Ent;
static Ent *E; static size_t nE;
static double now(void) { struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return ts.tv_sec + ts.tv_nsec * 1e-9; }
static void apply(const Ent *e) {
    switch (e->k & 0xFF) {
    case 0: snd_test_sh4_aram_wr(e->a, (int)(e->k >> 8), e->v); break;
    case 1: snd_test_sh4_reg_wr(e->a, (int)(e->k >> 8), e->v); break;
    case 2: snd_test_dma_to_aram(e->a, e->blob, e->v); break;
    }
}
int main(int argc, char **argv) {
    if (argc < 4) { fprintf(stderr, "usage: replay <trace> <44|48> <out.pcm> [max_seconds]\n"); return 1; }
    FILE *f = fopen(argv[1], "rb"); if (!f) { perror(argv[1]); return 1; }
    char hd[8]; if (fread(hd, 1, 8, f) != 8 || memcmp(hd, "SREC0001", 8)) { fprintf(stderr, "bad trace\n"); return 1; }
    size_t cap = 1 << 20; E = malloc(cap * sizeof *E);
    for (;;) {
        Ent e; memset(&e, 0, sizeof e);
        if (fread(&e.t, 8, 1, f) != 1 || fread(&e.k, 4, 1, f) != 1 || fread(&e.a, 4, 1, f) != 1 || fread(&e.v, 4, 1, f) != 1) break;
        if ((e.k & 0xFF) == 2) { e.blob = malloc(e.v); if (fread(e.blob, 1, e.v, f) != e.v) break; }
        if (nE == cap) { cap *= 2; E = realloc(E, cap * sizeof *E); }
        E[nE++] = e;
    }
    fclose(f);
    int mode = atoi(argv[2]); double maxs = argc > 4 ? atof(argv[4]) : 1e9;
    uint64_t tend = nE ? E[nE - 1].t + 44100 : 44100; if ((double)tend > maxs * 44100.0) tend = (uint64_t)(maxs * 44100.0);
    FILE *o = strcmp(argv[3], "-") ? fopen(argv[3], "wb") : NULL; if (strcmp(argv[3], "-") && !o) return 1;
    hle_frame_count = 1;   /* lets hle/hprof.c (R2_PROF=1-2) sample only the replay loop */
    snd_test_set_pull(1);
    size_t i = 0; double t0 = now(); unsigned long blocks = 0; unsigned long long hash = 1469598103934665603ull;
    if (mode == 44) {
        snd_init(44100);
        static int16_t buf[2 * 512]; uint64_t cur = 0;
        while (cur < tend) {
            uint64_t next = i < nE ? E[i].t : tend; if (next > tend) next = tend;
            while (cur < next) { int c = next - cur > 512 ? 512 : (int)(next - cur); snd_test_advance(c, buf); if (o) fwrite(buf, 4, c, o); if (o) for (int j = 0; j < c * 2; j++) hash = (hash ^ (uint16_t)buf[j]) * 1099511628211ull; cur += c; blocks++; }
            while (i < nE && E[i].t <= cur) apply(&E[i++]);
            if (cur >= tend) break;
        }
    } else {
        snd_init(48000);
        static int16_t buf[2 * 1024];
        while (snd_test_samples() < tend) {
            while (i < nE && E[i].t <= snd_test_samples()) apply(&E[i++]);
            snd_mix(buf, 1024); if (o) fwrite(buf, 4, 1024, o); if (o) for (int j = 0; j < 2048; j++) hash = (hash ^ (uint16_t)buf[j]) * 1099511628211ull; blocks++;
        }
    }
    double dt = now() - t0; if (o) fclose(o);
    SndStats st; snd_get_stats(&st);
    printf("mode %d: %lu blocks, %.3f s wall, %.1f us/block, fnv=%016llx, samples=%llu keyon=%llu arm_instr=%llu idle_skips=%llu\n", mode, blocks, dt, dt / blocks * 1e6, hash, (unsigned long long)st.samples, (unsigned long long)st.keyon, (unsigned long long)st.arm_instr, (unsigned long long)st.arm_idle_skips);
    return 0;
}
