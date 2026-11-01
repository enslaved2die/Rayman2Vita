/* Offline unit tests for hle/snd.c (ARM7 + AICA) on REAL game data. Build/run: tests_snd/run.sh  (uses assets/dc/DCDATA/Sound).
 *  T1  boot the real MANATEE.DRV on the ARM7 interpreter: no undefined instructions, driver init + timer interrupts + idle loop reached.
 *  T2  AICA ADPCM: play a real sample from BNK_0.OSB through the channel generator at native rate and compare sample-for-sample with an
 *      independent reference decoder; write wav + print waveform statistics / spectrum.
 *  T3  PCM16 + pitch/loop/pan path: synthetic sine in wave RAM, check frequency, loop and pan gains.                                      */
#include "../hle/snd.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

/* --- stubs for the parts of hle.h snd.c uses --- */
#include "../hle/hle.h"
/* --- stubs for the parts of hle.h / io.h that snd.c uses --- */
uint8_t sh4_ram[SH4_RAM_SIZE];
uint64_t hle_time_us(void) { return 0; }
hle_mmio_rd g_stub_rd[8]; hle_mmio_wr g_stub_wr[8]; uint32_t g_stub_lo[8]; int g_stub_n;
void hle_mmio_map(uint32_t lo, uint32_t hi, hle_mmio_rd rd, hle_mmio_wr wr) { (void)hi; if (g_stub_n < 8) { g_stub_lo[g_stub_n] = lo; g_stub_rd[g_stub_n] = rd; g_stub_wr[g_stub_n] = wr; g_stub_n++; } }
void hle_mmio_watch(uint32_t lo, uint32_t hi, hle_mmio_wr cb) { (void)lo; (void)hi; (void)cb; }
uint32_t hle_reg_get(uint32_t a) { (void)a; return 0; }
void hle_reg_set(uint32_t a, uint32_t v) { (void)a; (void)v; }
void hle_asic_raise_later(uint32_t m) { (void)m; }
unsigned long hle_frame_count; uint32_t hle_ring[256][2]; uint32_t hle_ring_pos;


static const char *ROOT = "../../assets/dc/DCDATA/Sound";
static int fails;
#define CHECK(c, ...) do { if (!(c)) { printf("  FAIL: " __VA_ARGS__); printf("\n"); fails++; } else { printf("  ok:   " __VA_ARGS__); printf("\n"); } } while (0)

static uint8_t *slurp(const char *rel, size_t *n) {
    char p[512]; snprintf(p, sizeof p, "%s/%s", ROOT, rel); FILE *f = fopen(p, "rb"); if (!f) { perror(p); exit(2); }
    fseek(f, 0, SEEK_END); *n = ftell(f); fseek(f, 0, SEEK_SET); uint8_t *b = malloc(*n); if (fread(b, 1, *n, f) != *n) exit(2); fclose(f); return b;
}
static void wr16(FILE *f, const int16_t *s, int n) { fwrite(s, 2, n, f); }
static void write_wav(const char *path, const int16_t *st, int frames) {
    FILE *f = fopen(path, "wb"); if (!f) return; uint32_t v; uint16_t h;
    fwrite("RIFF", 1, 4, f); v = 36 + frames * 4; fwrite(&v, 4, 1, f); fwrite("WAVEfmt ", 1, 8, f); v = 16; fwrite(&v, 4, 1, f); h = 1; fwrite(&h, 2, 1, f); h = 2; fwrite(&h, 2, 1, f);
    v = 44100; fwrite(&v, 4, 1, f); v = 44100 * 4; fwrite(&v, 4, 1, f); h = 4; fwrite(&h, 2, 1, f); h = 16; fwrite(&h, 2, 1, f); fwrite("data", 1, 4, f); v = frames * 4; fwrite(&v, 4, 1, f);
    wr16(f, st, frames * 2); fclose(f);
}
/* independent reference: Yamaha ADPCM, low nibble first (ffmpeg adpcm_yamaha) */
static void ref_adpcm(const uint8_t *src, int n, int16_t *dst) {
    static const int dq[16] = {1, 3, 5, 7, 9, 11, 13, 15, -1, -3, -5, -7, -9, -11, -13, -15}; static const int sc[8] = {230, 230, 230, 230, 307, 409, 512, 614};
    int p = 0, st = 127;
    for (int i = 0; i < n; i++) {
        int nib = (i & 1) ? src[i >> 1] >> 4 : src[i >> 1] & 15;
        p += (st * dq[nib]) / 8; if (p > 32767) p = 32767; if (p < -32768) p = -32768; dst[i] = (int16_t)p;
        st = (st * sc[nib & 7]) >> 8; if (st < 127) st = 127; if (st > 24576) st = 24576;
    }
}
static void chreg(int ch, int off, uint32_t v) { snd_test_regs()[(ch * 0x80 + off) >> 2] = v; }
static void keyon(int ch) { uint32_t r = snd_test_regs()[(ch * 0x80) >> 2]; snd_test_regwrite(ch * 0x80, (r & ~0x4000u) | 0x8000); snd_test_regs()[(ch * 0x80) >> 2] = r; snd_test_regwrite(ch * 0x80, r | 0x4000 | 0x8000); }   /* key off first: a latched-on channel is not restarted */

static void t1(void) {
    printf("T1 real MANATEE.DRV on the ARM7 interpreter\n");
    size_t n; uint8_t *drv = slurp("DRIVERS/MANATEE.DRV", &n);
    memcpy(snd_test_aram(), drv + 0x20, n - 0x20);          /* what sdDrvInit uploads */
    snd_test_regs()[0x2C00 / 4] = 0; snd_test_arm_reset(1);
    snd_test_advance(44100 / 2, NULL);                      /* 0.5 s */
    SndStats s; snd_get_stats(&s);
    CHECK(s.undef_instr == 0, "no undefined ARM instruction (undef=%u)", s.undef_instr);
    CHECK(s.arm_instr > 10000, "driver executed (%llu ARM instructions)", (unsigned long long)s.arm_instr);
    CHECK(s.arm_idle_skips > 1000, "driver reached its idle main loop (%llu idle skips)", (unsigned long long)s.arm_idle_skips);
    uint32_t *r = snd_test_regs(); int ok = 1; for (int c = 0; c < 64; c++) if (r[(c * 0x80) >> 2] & 0x4000) ok = 0;
    CHECK(ok, "driver parked all 64 channels (KYONB clear)");
    CHECK((r[0x2800 / 4] & 15) == 15, "driver set master volume to 15 (MVOL=0x%x)", r[0x2800 / 4] & 15);
    uint32_t *ram32 = (uint32_t *)snd_test_aram();
    printf("  info: driver tick counters  [0x13418]=%u [0x1341c]=%u  (FIQ timer ticks, 0x13418 counts 4 ms frames)\n", ram32[0x13418 / 4], ram32[0x1341c / 4]);
    CHECK(ram32[0x13418 / 4] > 50, "driver 4 ms frame counter advancing (%u after 0.5 s)", ram32[0x13418 / 4]);
    free(drv);
}

static void t2(void) {
    printf("T2 AICA ADPCM sample from BNK_0.OSB through the channel generator\n");
    size_t n; uint8_t *osb = slurp("BANKS/BNK_0.OSB", &n);
    const uint32_t sa = 0x71480, off = 308376, len = 16281;        /* sample played by the game in Menu: found at OSB+0x4B498, 16281 samples */
    memcpy(snd_test_aram() + sa, osb + off, (len + 1) / 2 + 8);
    memset(snd_test_regs(), 0, 0x2000 * 4);
    snd_test_regs()[0x2800 / 4] = 0xF;                              /* MVOL 15 */
    chreg(0, 0, ((sa >> 16) & 0x7F) | (2 << 7));                    /* PCMS=ADPCM, no loop */
    chreg(0, 4, sa & 0xFFFF); chreg(0, 8, 0); chreg(0, 0xC, len);
    chreg(0, 0x10, 31);                                             /* AR=31 (instant), D1R=D2R=0 */
    chreg(0, 0x14, 31);                                             /* RR=31 */
    chreg(0, 0x18, 0);                                              /* FNS=0 OCT=0 -> 44.1 kHz native */
    chreg(0, 0x24, 0xF << 8); chreg(0, 0x28, 0);                    /* DISDL=15 DIPAN=0 TL=0 */
    keyon(0);
    int frames = len + 200; int16_t *out = calloc(frames, 4); snd_test_advance(frames, out);
    int16_t *ref = malloc(len * 2); ref_adpcm(snd_test_aram() + sa, len, ref);
    int bad = 0, maxd = 0; for (uint32_t i = 0; i < len; i++) { int d = abs(out[2 * i] - ref[i]); if (d > maxd) maxd = d; if (out[2 * i] != ref[i] || out[2 * i + 1] != ref[i]) bad++; }
    CHECK(bad == 0, "mixer output == reference ADPCM decode for all %u samples (mismatches %d, max diff %d)", len, bad, maxd);
    int tail = 0; for (uint32_t i = len + 4; i < (uint32_t)frames; i++) if (out[2 * i]) tail++;
    CHECK(tail == 0, "channel stops at LEA (non-zero samples after end: %d)", tail);
    double sum = 0, sq = 0; int pk = 0; for (uint32_t i = 0; i < len; i++) { sum += ref[i]; sq += (double)ref[i] * ref[i]; if (abs(ref[i]) > pk) pk = abs(ref[i]); }
    printf("  stats: n=%u mean=%.1f rms=%.0f peak=%d\n", len, sum / len, sqrt(sq / len), pk);
    /* crude spectrum: energy in octave bands (decoded rate is whatever the sample was recorded at; game plays it at 11025 Hz) */
    double band[8] = {0}; int N = 4096; for (int k = 1; k < N / 2; k += 1) { double re = 0, im = 0; (void)re; (void)im; }
    for (int b = 0; b < 8; b++) {
        double f0 = 150.0 * pow(2, b), e = 0; int cnt = 0;
        for (double f = f0; f < f0 * 2 && f < 22050; f += f0 / 8) { double w = 2 * M_PI * f / 44100.0, re = 0, im = 0; for (int i = 0; i < 4096; i++) { double x = ref[i + 2000] * (0.5 - 0.5 * cos(2 * M_PI * i / 4095)); re += x * cos(w * i); im += x * sin(w * i); } e += (re * re + im * im); cnt++; }
        band[b] = cnt ? sqrt(e / cnt) / 4096 : 0; printf("  spectrum %6.0f-%6.0f Hz (@44.1k): %8.1f\n", f0, f0 * 2, band[b]);
    }
    write_wav("tests_snd/t2_adpcm.wav", out, frames);
    printf("  wrote tests_snd/t2_adpcm.wav\n");
    /* same sample at the game's pitch (OCT=-2 -> 11025 Hz): output length must be 4x */
    memset(snd_test_regs() + (0 >> 2), 0, 0x80); chreg(0, 0, ((sa >> 16) & 0x7F) | (2 << 7)); chreg(0, 4, sa & 0xFFFF); chreg(0, 0xC, len); chreg(0, 0x10, 31); chreg(0, 0x14, 31);
    chreg(0, 0x18, (0xE << 11)); chreg(0, 0x24, 0xF << 8); keyon(0);
    int f2 = len * 4 + 2000; int16_t *o2 = calloc(f2, 4); snd_test_advance(f2, o2);
    int last = 0; for (int i = 0; i < f2; i++) if (o2[2 * i]) last = i;
    CHECK(abs(last - (int)len * 4) < 8, "OCT=-2 plays %u samples in ~%d output frames (last non-zero frame %d)", len, len * 4, last);
    write_wav("tests_snd/t2_adpcm_11k.wav", o2, f2);
    free(out); free(ref); free(o2); free(osb);
}

static void t3(void) {
    printf("T3 PCM16 loop/pitch/pan\n");
    memset(snd_test_regs(), 0, 0x2000 * 4); snd_test_regs()[0x2800 / 4] = 0xF;
    int16_t *w = (int16_t *)(snd_test_aram() + 0x1000); for (int i = 0; i < 441; i++) w[i] = (int16_t)(16000 * sin(2 * M_PI * i / 441.0));   /* 100 Hz cycle at 44.1k */
    chreg(0, 0, (0 << 7) | (1 << 9)); chreg(0, 4, 0x1000); chreg(0, 8, 0); chreg(0, 0xC, 441); chreg(0, 0x10, 31); chreg(0, 0x14, 31);
    chreg(0, 0x18, 1 << 11);                                        /* OCT=+1 -> 200 Hz */
    chreg(0, 0x24, (0xF << 8) | 0x1F);                              /* DISDL 15, DIPAN=0x1F: left (right muted) */
    keyon(0);
    int frames = 44100; int16_t *o = calloc(frames, 4); snd_test_advance(frames, o);
    int zc = 0; for (int i = 1; i < frames; i++) if ((o[2 * i - 2] < 0) != (o[2 * i] < 0)) zc++;
    double fr = zc / 2.0; double pl = 0, pr = 0; for (int i = 0; i < frames; i++) { pl += abs(o[2 * i]); pr += abs(o[2 * i + 1]); }
    CHECK(fabs(fr - 200.0) < 3.0, "looped PCM16 at OCT+1 -> %.1f Hz (expect 200)", fr);
    CHECK(pr == 0 && pl > 1e6, "DIPAN=0x1F pans left (L=%.0f R=%.0f)", pl, pr);
    free(o);
}


/* ---- T4: pull mode runs the machine in real (audio) time, independent of the guest clock; 48 kHz resampler ---- */
static void t4(void) {
    printf("T4 pull mode (snd_mix) at 48 kHz: tone frequency/continuity\n");
    snd_init(48000);
    memset(snd_test_regs(), 0, 0x2000 * 4); snd_test_regs()[0x2800 / 4] = 0xF;
    int16_t *w = (int16_t *)(snd_test_aram() + 0x1000); for (int i = 0; i < 441; i++) w[i] = (int16_t)(16000 * sin(2 * M_PI * i / 441.0));
    chreg(0, 0, (1 << 9)); chreg(0, 4, 0x1000); chreg(0, 8, 0); chreg(0, 0xC, 441); chreg(0, 0x10, 31); chreg(0, 0x14, 31); chreg(0, 0x18, 1 << 11); chreg(0, 0x24, 0xF << 8);
    keyon(0);
    int n = 48000 * 2; int16_t *o = calloc(n, 4); for (int i = 0; i < n; i += 1024) snd_mix(o + 2 * i, (n - i) < 1024 ? n - i : 1024);
    int zc = 0; for (int i = 1; i < n; i++) if ((o[2 * i - 2] < 0) != (o[2 * i] < 0)) zc++;
    double fr = zc / 2.0 / 2.0; int maxd = 0; for (int i = 1; i < n; i++) { int d = abs(o[2 * i] - o[2 * i - 2]); if (d > maxd) maxd = d; }
    CHECK(fabs(fr - 200.0) < 1.5, "snd_mix 48 kHz: looped tone %.2f Hz (expect 200)", fr);
    CHECK(maxd < 2400, "no discontinuities across mix blocks (max step %d, sine step max ~2100)", maxd);
    SndStats s; snd_get_stats(&s); CHECK(s.samples >= (uint64_t)(2 * 44100 * 0.99), "machine advanced in audio time (%llu AICA samples for 2 s)", (unsigned long long)s.samples);
    free(o);
}


/* ---- T6: KYONEX semantics: a finished voice whose KYONB is still latched ON must not restart when another voice is keyed on ---- */
static void t6(void) {
    printf("T6 KYONEX edge semantics\n");
    memset(snd_test_regs(), 0, 0x2000 * 4); snd_test_regs()[0x2800 / 4] = 0xF;
    int16_t *w = (int16_t *)(snd_test_aram() + 0x1000); for (int i = 0; i < 441; i++) w[i] = (int16_t)(12000 * sin(2 * M_PI * i / 441.0));
    for (int c = 0; c < 2; c++) { chreg(c, 0, 0); chreg(c, 4, 0x1000); chreg(c, 8, 0); chreg(c, 0xC, c ? 441 : 100); chreg(c, 0x10, 31); chreg(c, 0x14, 31); chreg(c, 0x18, 0); chreg(c, 0x24, 0xF << 8); }
    chreg(1, 0, 1 << 9);                                            /* ch1 loops, ch0 one-shot (100 samples) */
    keyon(0); snd_test_advance(2000, NULL);
    SndStats s; snd_get_stats(&s); CHECK(s.active_channels == 0, "one-shot finished (active %d)", s.active_channels);
    snd_test_regwrite(1 * 0x80, snd_test_regs()[0x80 >> 2] | 0x4000 | 0x8000);        /* key on ch1 only; ch0 still has KYONB=1 latched */
    snd_test_advance(2000, NULL); snd_get_stats(&s);
    CHECK(s.active_channels == 1, "finished ch0 not restarted by KYONEX for ch1 (active %d, expect 1)", s.active_channels);
    keyon(0); snd_test_advance(50, NULL); snd_get_stats(&s);
    CHECK(s.active_channels == 2, "explicit key-off + key-on restarts ch0 (active %d, expect 2)", s.active_channels);
}

/* ---- T7: the sd command block (0x13200..0x1330F) is written word by word by the guest while the audio thread runs the ARM7: the AICA must not advance inside a block write ---- */
#include <pthread.h>
#include <unistd.h>
static void *t7_mix(void *arg) { static int16_t b[512 * 2]; (void)arg; snd_mix(b, 512); return 0; }
static void t7(void) {
    printf("T7 command-block write is atomic w.r.t. the audio thread\n");
    snd_init(44100); snd_mix(0, 0);                                  /* pull mode on */
    uint64_t s0 = snd_test_samples(); pthread_t th;
    snd_test_sh4_aram_wr(0x13200, 4, 0x00050011);                    /* first word of the block: the guest now owns the AICA */
    pthread_create(&th, 0, t7_mix, 0); usleep(80 * 1000);
    CHECK(snd_test_samples() == s0, "audio thread waits while the guest is inside the block (advanced %llu samples)", (unsigned long long)(snd_test_samples() - s0));
    for (uint32_t o = 0x13204; o <= 0x1330C; o += 4) snd_test_sh4_aram_wr(o, 4, 0x42);
    pthread_join(th, 0);
    CHECK(snd_test_samples() - s0 >= 512, "audio thread proceeds after the last word (advanced %llu samples)", (unsigned long long)(snd_test_samples() - s0));
    uint32_t w0; memcpy(&w0, snd_test_aram() + 0x13200, 4); CHECK(w0 == 0x00050011, "block content stored (%08x)", w0);
    snd_test_sh4_aram_wr(0x13200, 4, 0x00050011);                    /* an interrupted block (never finished) must not deadlock: any store elsewhere releases the lock */
    snd_test_sh4_aram_wr(0x14000, 4, 1); snd_mix(0, 0);
    uint64_t s1 = snd_test_samples(); static int16_t b[256 * 2]; snd_mix(b, 256); CHECK(snd_test_samples() - s1 >= 256, "interrupted block releases the AICA lock");
}
int main(void) {
    snd_init(44100);
    t1(); t2(); t3(); t4(); t6(); t7();
    printf("%s (%d failure%s)\n", fails ? "FAILED" : "ALL PASSED", fails, fails == 1 ? "" : "s");
    return fails ? 1 : 0;
}
