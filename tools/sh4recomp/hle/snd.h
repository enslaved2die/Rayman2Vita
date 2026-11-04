/* snd.h - Dreamcast AICA sound system for the recompiled Rayman 2 (hle/snd.c).
 *
 * DESIGN (see re_analysis/dc/notes_sound.md): the game's own sd library (Sega "sd" 1.00.24 + the ACP "Moteur sonore" engine) keeps running
 * as recompiled guest code. What the real console had behind it is emulated here:
 *   - AICA wave RAM (2 MiB) and the AICA register file, visible to the SH-4 guest at 0xA0800000 / 0xA0700000 (hle_mmio_map) and to
 *   - an ARM7 (ARMv4, ARM state) interpreter that runs the REAL MANATEE.DRV sound driver the sd library uploads into wave RAM,
 *   - a 64-channel AICA sample generator (PCM16, PCM8, Yamaha ADPCM; AEG envelope, TL, DISDL/DIPAN, pitch, loop, linear interpolation)
 *     whose output is mixed to 44.1 kHz stereo.
 * The sd library, its mailbox protocol and the bank/stream uploads work unchanged; the only functional guest hook is the stream catch-up tick (below).
 *
 * BACKEND API (thread-safe: the emulated machine is protected by one internal lock; guest ARAM word accesses are lock-free):
 *   Vita / any audio thread: call snd_init(48000) once, then from the sceAudioOut thread loop { snd_mix(buf, 1024); sceAudioOutOutput(port, buf); }.
 *         snd_mix() IS the clock of the emulated AICA/ARM7: it advances the machine by exactly the samples the block needs (REAL TIME), whatever the guest speed.
 *         44100 and 48000 are accepted (48 kHz uses a Catmull-Rom resampler). The guest thread never advances the machine in this mode.
 *   Host (run_game): with no snd_mix() consumer the machine is advanced from guest AICA accesses to the guest clock and the output goes to a WAV:
 *         build_hle/audio.wav (override: env R2_SND_WAV=path, disable: R2_SND_WAV=0).  R2_SND_PULL=<wav> starts a real-time consumer thread
 *         (what the Vita audio thread does) and writes what the player would hear.
 *   Debug env: R2_SND_TRACE=1 (AICA/ARM events), R2_SND_EV=1 (per-voice KEYON/KEYOFF/END + GUEST start/stop commands), R2_SND_VDUMP=<s> (active voice table every s seconds),
 *         R2_SND_RING=1 (stream ring refill log), R2_SND_CALLER=1 (histogram of guest functions touching the AICA), R2_STREAM_CATCHUP=0 (disable the stream catch-up hook),
 *         R2_SND_KEYON_OLD=1 (old KYONEX rule, A/B only).
 *
 * GUEST HOOKS (the only ones): snd.c hooks 0x8C0625B8 (stream tick dispatcher: catch-up ticks) and 0x8C062F60 (chunk counter), plus 0x8C0F06BC/0x8C0F08E4 (log-only taps).
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
/* Flush + close snd_trace.log (Vita: ux0:data/rayman2/snd_trace.log, always on; host: R2_SND_TRACELOG=<file>). Also runs atexit. */
void snd_trace_close(void);

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
    uint64_t arm_bulk;             /* part of arm_instr accounted in bulk (MANATEE delay loop): NOT dispatched one by one, so (arm_instr - arm_bulk) is the real interpreter dispatch count */
    uint64_t arm_idle_skips;
    uint64_t keyon;                /* channel key-on events */
    uint64_t ringcmds;             /* 32-bit commands consumed by the driver from the SH-4 -> ARM ring (write ptr advances) */
    int      active_channels;
    uint32_t peak;                 /* peak |sample| since last call */
    uint32_t undef_instr;          /* undefined ARM instructions executed (should stay 0) */
    uint64_t mix_calls;            /* snd_mix() calls since the previous snd_get_stats() */
    uint32_t arm_us_blk, vox_us_blk; /* estimated us per 1024-frame block spent in timers+ARM7 interpreter / in the 64-voice generator (probe: every 64th sample timed; the rest, mix_us_avg - both, is limiter, staging, resampler, locks) */
    uint32_t tp_n;                   /* number of probed samples behind those two estimates */
    uint32_t mix_us_avg, mix_us_max; /* wall time of one snd_mix() call (microseconds) since the previous snd_get_stats(): audio-thread cost */
    /* music watchdog (guest stream engine vs AICA ring voices), cumulative: see stream_watchdog() in snd.c */
    uint32_t stream_open, stream_stop, stream_pause, stream_resume;   /* guest calls of the stream engine 0x8C06262C / 0x8C0628A8 / 0x8C062960 / 0x8C0629B0 */
    uint32_t stream_holes, stream_hole_ms_max;   /* >= 0.5 s intervals where the guest streams (state 3, not paused, no fade) but a ring voice is not playing; longest, ms */
    uint32_t stream_note_seq;                    /* incremented when stream_note holds a new hole description (print it once per change) */
    uint32_t keyon_ignored;                      /* KYONB-latch decisions: key-ons of finished, still latched channels that were (correctly) not restarted */
    char     stream_note[480];
} SndStats;
void snd_get_stats(SndStats *s);

/* Unit-test hooks (host tests only): direct access to emulated memory, no locking, no guest involvement. */
uint8_t  *snd_test_aram(void);                 /* 2 MiB AICA RAM */
uint32_t *snd_test_regs(void);                 /* AICA register file as 32-bit words, byte offset = index*4 (0x0000..0x7FFF) */
void      snd_test_advance(int frames, int16_t *out);   /* advance + mix with NULL allowed (discard) */
void      snd_test_regwrite(uint32_t byte_off, uint32_t v);   /* guest-style 32-bit register write (triggers key-on etc.) */
void      snd_test_set_nostrm(int v);          /* disable the native music stream source (A/B) */
void      snd_test_strm_stats(uint64_t *maps, uint64_t *stream_samples, uint64_t *ring_samples, uint64_t *silent_samples);
void      snd_test_sh4_aram_wr(uint32_t a, int sz, uint32_t v);   /* replay: a guest ARAM store / register store / G2 DMA, exactly as the SH-4 side issues it */
void      snd_test_sh4_reg_wr(uint32_t a, int sz, uint32_t v);
void      snd_test_dma_to_aram(uint32_t a, const void *p, uint32_t len);
uint64_t  snd_test_samples(void);
uint32_t  snd_test_mon(int ch);                /* ARM-side read of the channel monitor (0x2810) for ch */
void      snd_test_set_pull(int on);
void      snd_test_arm_reset(int run);         /* 1 = release ARM (as the guest clearing ARMRST), 0 = hold */

#ifdef __cplusplus
}
#endif
#endif
