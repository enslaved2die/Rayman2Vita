/* snd.h - Dreamcast AICA sound system for the recompiled Rayman 2 (hle/snd.c).
 *
 * DESIGN (see re_analysis/dc/notes_sound.md): the game's own sd library (Sega "sd" 1.00.24 + the ACP "Moteur sonore" engine) keeps running
 * as recompiled guest code. What the real console had behind it is emulated here:
 *   - AICA wave RAM (2 MiB) and the AICA register file, visible to the SH-4 guest at 0xA0800000 / 0xA0700000 (hle_mmio_map) and to
 *   - an ARM7 (ARMv4, ARM state) interpreter that runs the REAL MANATEE.DRV sound driver the sd library uploads into wave RAM,
 *   - a 64-channel AICA sample generator (PCM16, PCM8, Yamaha ADPCM; AEG envelope, TL, DISDL/DIPAN, pitch, loop, linear interpolation)
 *     whose output is mixed to 44.1 kHz stereo.
 * No sd call is intercepted; the sd library, its mailbox protocol and the bank/stream uploads work unchanged.
 *
 * BACKEND API (thread-safe: the emulated machine is protected by one internal lock):
 *   Vita: call snd_init(44100) once, then from the sceAudioOut thread loop { snd_mix(buf, 1024); sceAudioOutOutput(port, buf); }
 *         NOTE: snd_mix() is only a CONSUMER of a FIFO; the emulated machine is advanced from the guest thread to the guest clock
 *         (so music stream rings are consumed at the rate the guest refills them, however slow the guest runs). Empty FIFO = silence.
 *         (sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN, 1024, 44100, SCE_AUDIO_OUT_MODE_STEREO)).  snd_mix() returns the next
 *         `frames` samples of the mixed audio.  48000 is also accepted by snd_init
 *         (linear resampling).
 *   Host (run_game): nothing to call. With no snd_mix() consumer the machine is advanced from guest AICA accesses by wall clock
 *         (so the guest sees a live ARM) and the output is written to a WAV: build_hle/audio.wav (override: env R2_SND_WAV=path,
 *         disable: R2_SND_WAV=0).  R2_SND_TRACE=1 prints AICA/ARM events to stderr.
 */
#ifndef SND_H
#define SND_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Allocate/reset the sound system. out_rate = 44100 (native) or 48000. Returns 0 on success. Idempotent. Registers nothing with the guest:
 * the AICA MMIO ranges are mapped from a constructor in snd.c, so the guest can always reach them. */
int  snd_init(int out_rate);
void snd_shutdown(void);

/* Pull `frames` stereo frames (interleaved L,R int16) at the rate given to snd_init(); advances the emulated sound CPU/AICA in real
 * (audio) time. Safe to call from the audio thread while the guest runs on another thread. */
void snd_mix(int16_t *out, int frames);

/* Linear master volume applied after the AICA mix (default 1.0). */
void snd_set_master_volume(float v);

/* Host test mode: append everything the AICA produces to a 16-bit stereo 44.1 kHz WAV (header finalised by snd_wav_close()/atexit).
 * snd_wav_open() is called automatically for build_hle/audio.wav in host builds. */
int  snd_wav_open(const char *path);
void snd_wav_close(void);

/* Diagnostics (cumulative since snd_init). */
typedef struct {
    int      arm_running;          /* ARM7 released from reset by the guest */
    uint64_t samples;              /* AICA sample frames generated */
    uint64_t arm_instr;            /* ARM instructions interpreted (idle loop iterations skipped are not counted) */
    uint64_t arm_idle_skips;
    uint64_t keyon;                /* channel key-on events */
    uint64_t ringcmds;             /* 32-bit commands consumed by the driver from the SH-4 -> ARM ring (write ptr advances) */
    int      active_channels;
    uint32_t peak;                 /* peak |sample| since last call */
    uint32_t undef_instr;          /* undefined ARM instructions executed (should stay 0) */
    uint64_t underruns;            /* pull mode: times the output FIFO ran dry (guest slower than real time -> silence until re-primed) */
    uint64_t overruns;             /* pull mode: frames dropped because the consumer lagged */
    uint32_t fifo_fill;            /* pull mode: frames currently queued */
} SndStats;
void snd_get_stats(SndStats *s);

/* Unit-test hooks (host tests only): direct access to emulated memory, no locking, no guest involvement. */
uint8_t  *snd_test_aram(void);                 /* 2 MiB AICA RAM */
uint32_t *snd_test_regs(void);                 /* AICA register file as 32-bit words, byte offset = index*4 (0x0000..0x7FFF) */
void      snd_test_advance(int frames, int16_t *out);   /* advance + mix with NULL allowed (discard) */
void      snd_test_regwrite(uint32_t byte_off, uint32_t v);   /* guest-style 32-bit register write (triggers key-on etc.) */
void      snd_test_arm_reset(int run);         /* 1 = release ARM (as the guest clearing ARMRST), 0 = hold */

#ifdef __cplusplus
}
#endif
#endif
