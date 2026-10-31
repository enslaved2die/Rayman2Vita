/* CPU cost of the emulated sound CPU + AICA with the real driver idle (no channels): cc -O1 -I. -Ihle -o tests_snd/bench tests_snd/bench.c hle/snd.c -lm -lpthread */
#include "../hle/snd.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../runtime.h"
uint8_t sh4_ram[SH4_RAM_SIZE];
uint64_t hle_time_us(void) { return 0; }
void hle_mmio_map(uint32_t a, uint32_t b, void *r, void *w) { (void)a; (void)b; (void)r; (void)w; }
void hle_mmio_watch(uint32_t a, uint32_t b, void *c) { (void)a; (void)b; (void)c; }
uint32_t hle_reg_get(uint32_t a) { (void)a; return 0; }
void hle_reg_set(uint32_t a, uint32_t v) { (void)a; (void)v; }
void hle_asic_raise_later(uint32_t m) { (void)m; }
int main(void) {
    snd_init(44100);
    FILE *f = fopen("../../assets/dc/DCDATA/Sound/DRIVERS/MANATEE.DRV", "rb"); if (!f) return 2;
    static uint8_t b[40000]; size_t n = fread(b, 1, sizeof b, f); fclose(f);
    memcpy(snd_test_aram(), b + 0x20, n - 0x20); snd_test_regwrite(0x2C00, 0); snd_test_arm_reset(1);
    clock_t t = clock(); snd_test_advance(44100 * 20, NULL); double s = (double)(clock() - t) / CLOCKS_PER_SEC;
    SndStats st; snd_get_stats(&st);
    printf("20 s of idle driver: %.3f s CPU (%.2f%% of realtime) arm_instr=%llu idle_skips=%llu\n", s, s / 20 * 100, (unsigned long long)st.arm_instr, (unsigned long long)st.arm_idle_skips);
    return 0;
}
