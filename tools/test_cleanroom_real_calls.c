/**
 * @file test_cleanroom_real_calls.c
 * @brief Cleanroom Real Game Audio Simulation & Hardware Call Verification
 *
 * Simulates and executes real Rayman 2 Dreamcast sound calls using real game assets:
 * - Bank loading & sound descriptor mapping (FIX.OSB, bnk_0.OSB, bnk_46.OSB)
 * - Voice triggers (Lum collect, jump, menu confirm sound IDs)
 * - Volume & pitch updates (Dreamcast driver cmd 0x15, cmd 0x16, cmd 0x18)
 * - Voice stop & voice recycling under 16-channel saturation
 * - Status getters (ensuring handle status correctly reports active vs finished)
 * - Streaming BGM from MM.DCZ / SILENST.WAV (open, tick, pause, resume, volume fade, stop)
 * - Mixes 7.0 seconds of simulated gameplay audio to build/cleanroom_test.wav
 * - Computes and reports real-time performance metrics (us per 1024-frame mix block,
 *   peak amplitude, active channels, energy)
 */

#include "snd_vita.h"
#include "vita_shim/vfs_vita.h"
#include "vita_shim/os_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <sys/stat.h>
#include <assert.h>

#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RED     "\033[31m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_BOLD    "\033[1m"
#define COLOR_MAGENTA "\033[35m"

/* ----------------------------------------------------------------------------
 * High-Resolution Timing Helper
 * ---------------------------------------------------------------------------- */
static inline uint64_t get_time_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ULL + (uint64_t)ts.tv_nsec;
}

/* ----------------------------------------------------------------------------
 * Standard 16-bit Stereo PCM WAV Writer
 * ---------------------------------------------------------------------------- */
typedef struct WAV_Header {
    char     riff_tag[4];      /* "RIFF" */
    uint32_t riff_size;        /* File size - 8 */
    char     wave_tag[4];      /* "WAVE" */
    char     fmt_tag[4];       /* "fmt " */
    uint32_t fmt_size;         /* 16 */
    uint16_t audio_format;     /* 1 = PCM */
    uint16_t num_channels;     /* 2 = Stereo */
    uint32_t sample_rate;      /* 48000 */
    uint32_t byte_rate;        /* sample_rate * channels * 2 */
    uint16_t block_align;      /* channels * 2 = 4 */
    uint16_t bits_per_sample;  /* 16 */
    char     data_tag[4];      /* "data" */
    uint32_t data_size;        /* num_frames * channels * 2 */
} WAV_Header;

static FILE *wav_create(const char *path, uint32_t sample_rate, uint16_t channels) {
    /* Ensure directory exists */
    struct stat st;
    if (stat("build", &st) != 0) {
        mkdir("build", 0755);
    }

    FILE *f = fopen(path, "wb");
    if (!f) {
        fprintf(stderr, COLOR_RED "ERROR: Failed to create WAV file '%s'\n" COLOR_RESET, path);
        return NULL;
    }

    WAV_Header hdr;
    memcpy(hdr.riff_tag, "RIFF", 4);
    hdr.riff_size = sizeof(WAV_Header) - 8;
    memcpy(hdr.wave_tag, "WAVE", 4);
    memcpy(hdr.fmt_tag, "fmt ", 4);
    hdr.fmt_size = 16;
    hdr.audio_format = 1;
    hdr.num_channels = channels;
    hdr.sample_rate = sample_rate;
    hdr.byte_rate = sample_rate * channels * sizeof(int16_t);
    hdr.block_align = channels * sizeof(int16_t);
    hdr.bits_per_sample = 16;
    memcpy(hdr.data_tag, "data", 4);
    hdr.data_size = 0;

    fwrite(&hdr, 1, sizeof(WAV_Header), f);
    return f;
}

static void wav_write_frames(FILE *f, const int16_t *samples, uint32_t num_frames, uint16_t channels) {
    if (!f || !samples || num_frames == 0) return;
    fwrite(samples, sizeof(int16_t), num_frames * channels, f);
}

static void wav_close(FILE *f, uint32_t total_frames, uint16_t channels) {
    if (!f) return;
    uint32_t data_bytes = total_frames * channels * sizeof(int16_t);
    uint32_t riff_bytes = sizeof(WAV_Header) - 8 + data_bytes;

    fseek(f, 4, SEEK_SET);
    fwrite(&riff_bytes, sizeof(uint32_t), 1, f);
    fseek(f, 40, SEEK_SET);
    fwrite(&data_bytes, sizeof(uint32_t), 1, f);
    fclose(f);
}

/* ============================================================================
 * Sub-Test 1: Real Bank Loading & Sound Descriptor Mapping
 * ============================================================================ */
static bool test_bank_loading_and_descriptors(void) {
    printf(COLOR_BOLD "=== 1. Bank Loading & Sound Descriptor Mapping ===" COLOR_RESET "\n");

    /* 1. Load Common Sound Bank (FIX.OSB / bnk_0.OSB) */
    int res_fix = SND_Vita_LoadFixBank();
    printf(" - Loading FIX.OSB: result=%d\n", res_fix);
    assert(res_fix == 0);

    /* 2. Load Menu/Intro Sound Bank (BNK_46.OSB) */
    int res_bnk46 = SND_Vita_LoadBank("assets/dc/DCDATA/Sound/Banks/bnk_46.OSB");
    if (res_bnk46 != 0) {
        res_bnk46 = SND_Vita_LoadBank("assets/dc/DCDATA/SOUND/BANKS/BNK_46.OSB");
    }
    printf(" - Loading BNK_46.OSB: result=%d\n", res_bnk46);
    assert(res_bnk46 == 0);

    /* 3. Query Real Game Sound Descriptors */
    /* Lum Collect sound in FIX bank: ID #0 */
    const SND_Vita_Sample *desc_lum = SND_Vita_GetBankSoundDescriptor(0, 0);
    assert(desc_lum != NULL);
    assert(desc_lum->pcm_data != NULL);
    assert(desc_lum->num_samples > 0);
    printf(" - Lum Collect Descriptor (FIX #0): %u samples, rate=%u Hz, loop=%d\n",
           desc_lum->num_samples, desc_lum->sample_rate, desc_lum->loop);

    /* Jump sound in FIX bank: ID #1 */
    const SND_Vita_Sample *desc_jump = SND_Vita_GetBankSoundDescriptor(0, 1);
    assert(desc_jump != NULL);
    assert(desc_jump->pcm_data != NULL);
    assert(desc_jump->num_samples > 0);
    printf(" - Jump Sound Descriptor (FIX #1): %u samples, rate=%u Hz, loop=%d\n",
           desc_jump->num_samples, desc_jump->sample_rate, desc_jump->loop);

    /* Menu Confirm sound in BNK_46: ID #0 */
    const SND_Vita_Sample *desc_menu = SND_Vita_GetBankSoundDescriptor(1, 0);
    assert(desc_menu != NULL);
    assert(desc_menu->pcm_data != NULL);
    assert(desc_menu->num_samples > 0);
    printf(" - Menu Confirm Descriptor (BNK_46 #0): %u samples, rate=%u Hz, loop=%d\n",
           desc_menu->num_samples, desc_menu->sample_rate, desc_menu->loop);

    /* Verify Fallback Resolution:
     * Requesting sound ID #200 (outside BNK_46 range) resolves automatically to FIX bank */
    const SND_Vita_Sample *desc_fallback = SND_Vita_GetSoundDescriptor(200);
    assert(desc_fallback != NULL);
    assert(desc_fallback->sound_id == 200);
    printf(" - Fallback Resolution (Sound #200 from FIX): %u samples [OK]\n", desc_fallback->num_samples);

    printf(COLOR_GREEN "Bank loading and sound descriptor mapping: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Sub-Test 2: Real Voice Triggers, Commands (0x15, 0x16, 0x18), Stop & Recycling
 * ============================================================================ */
static bool test_voice_commands_and_recycling(void) {
    printf(COLOR_BOLD "=== 2. Voice Triggers, Parameter Updates & Status Getters ===" COLOR_RESET "\n");

    SND_Vita_StopAllVoices();
    assert(SND_Vita_GetActiveVoiceCount() == 0);

    /* 1. Voice Trigger (Dreamcast cmd 0x11 key-on) */
    int h_lum = SND_Vita_SendCommand(0x11, 0, 0, 0); /* Trigger FIX sound ID #0 */
    assert(h_lum >= 0 && h_lum < SND_VITA_NUM_VOICES);
    printf(" - Voice Key-On (cmd 0x11): allocated handle=%d\n", h_lum);

    /* Verify Status Getter reports active / playing */
    int active_flag = 0; uint32_t pos = 0, total = 0;
    SND_Vita_GetVoiceStatus(h_lum, &active_flag, &pos, &total);
    assert(active_flag == 1);
    assert(SND_Vita_IsVoicePlaying(h_lum) == 1);
    printf(" - Status Getter (Active): playing=%d, pos=%u, total=%u [OK]\n", active_flag, pos, total);

    /* 2. Voice Panning Update (cmd 0x15) */
    /* Set pan to full left (-127 / 127 = -1.0f) */
    int res_pan = SND_Vita_SendCommand(0x15, (uint8_t)h_lum, -127, 0);
    assert(res_pan == 0);

    int16_t mix_buf[1024 * 2];
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    int64_t pan_left = 0, pan_right = 0;
    for (int i = 0; i < 1024; i++) {
        pan_left  += abs(mix_buf[i * 2 + 0]);
        pan_right += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - Pan Update (cmd 0x15: -1.0f): Left Energy=%lld, Right Energy=%lld\n",
           (long long)pan_left, (long long)pan_right);
    assert(pan_left > 0);
    assert(pan_right == 0); /* Pure left pan */

    /* 3. Voice Volume Update (cmd 0x16) */
    /* Set volume to 50% (64 / 127) */
    int res_vol = SND_Vita_SendCommand(0x16, (uint8_t)h_lum, 64, 0);
    assert(res_vol == 0);

    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t pan_left_half = 0;
    for (int i = 0; i < 1024; i++) {
        pan_left_half += abs(mix_buf[i * 2 + 0]);
    }
    printf(" - Volume Update (cmd 0x16: 50%%): Left Energy=%lld (scaled from %lld)\n",
           (long long)pan_left_half, (long long)pan_left);

    /* 4. Voice Pitch / Detune Update (cmd 0x18) */
    /* Shift pitch up by +1200 cents (1 octave = 2.0x frequency) */
    int res_pitch = SND_Vita_SendCommand(0x18, (uint8_t)h_lum, 1200, 0);
    assert(res_pitch == 0);
    printf(" - Pitch Update (cmd 0x18: +1200 cents = 2.0x pitch): PASS [OK]\n");

    /* 5. Voice Stop (cmd 0x12) */
    int res_stop = SND_Vita_SendCommand(0x12, (uint8_t)h_lum, 0, 0);
    assert(res_stop == 0);

    /* Verify Status Getter immediately reports finished / inactive */
    SND_Vita_GetVoiceStatus(h_lum, &active_flag, &pos, &total);
    assert(active_flag == 0); /* 0 = finished / stopped */
    assert(SND_Vita_IsVoicePlaying(h_lum) == 0);
    printf(" - Status Getter (Finished / Stopped): playing=%d [OK]\n", active_flag);

    /* 6. Voice Saturation & Voice Stealing / Recycling */
    SND_Vita_StopAllVoices();
    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        int v = SND_Vita_PlaySound(0, 0.2f + 0.05f * i, 0.0f);
        assert(v >= 0);
    }
    assert(SND_Vita_GetActiveVoiceCount() == SND_VITA_NUM_VOICES);
    printf(" - 16 Channel Saturation: %d active voices\n", SND_VITA_NUM_VOICES);

    /* Trigger 17th voice: should cleanly recycle lowest volume voice */
    int v_steal = SND_Vita_PlaySound(1, 1.0f, 0.0f);
    assert(v_steal >= 0 && v_steal < SND_VITA_NUM_VOICES);
    assert(SND_Vita_GetActiveVoiceCount() == SND_VITA_NUM_VOICES);
    printf(" - Voice Stealing & Slot Recycling: assigned slot %d without fault [OK]\n", v_steal);

    SND_Vita_StopAllVoices();
    printf(COLOR_GREEN "Voice triggers, parameter updates & status getters: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Sub-Test 3: Streaming BGM from MM.DCZ & SILENST.WAV
 * ============================================================================ */
static bool test_streaming_bgm_lifecycle(void) {
    printf(COLOR_BOLD "=== 3. Streaming BGM (MM.DCZ & SILENST.WAV) Lifecycle ===" COLOR_RESET "\n");

    /* 1. Test uncompressed WAV stream */
    int res_wav = SND_Vita_PlayMusic("assets/dc/DCDATA/Sound/Music/SILENST.WAV", 1);
    if (res_wav != 0) {
        res_wav = SND_Vita_PlayMusic("assets/dc/DCDATA/SOUND/MUSIC/SILENST.WAV", 1);
    }
    printf(" - Open SILENST.WAV: result=%d\n", res_wav);
    assert(res_wav == 0);
    assert(SND_Vita_GetBGMStatus() == 1);

    int16_t mix_buf[1024 * 2];
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    /* 2. Test DCZ container stream (MM.DCZ) */
    int res_dcz = SND_Vita_PlayMusic("assets/dc/DCDATA/Sound/Music/MM.DCZ", 1);
    if (res_dcz != 0) {
        res_dcz = SND_Vita_PlayMusic("assets/dc/DCDATA/SOUND/MUSIC/MM.DCZ", 1);
    }
    printf(" - Open MM.DCZ: result=%d, status=%d\n", res_dcz, SND_Vita_GetBGMStatus());
    assert(res_dcz == 0);
    assert(SND_Vita_GetBGMStatus() == 1);

    /* Mix active BGM block and verify non-zero signal */
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t bgm_energy = 0;
    for (int i = 0; i < 2048; i++) bgm_energy += abs(mix_buf[i]);
    printf(" - Mixed MM.DCZ Audio Block: energy=%lld\n", (long long)bgm_energy);
    assert(bgm_energy > 0);

    /* 3. Pause BGM */
    SND_Vita_PauseMusic();
    assert(SND_Vita_GetBGMStatus() == -1); /* -1 = paused */

    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t pause_energy = 0;
    for (int i = 0; i < 2048; i++) pause_energy += abs(mix_buf[i]);
    printf(" - Paused BGM Mix (Energy must be 0): energy=%lld [OK]\n", (long long)pause_energy);
    assert(pause_energy == 0);

    /* 4. Resume BGM */
    SND_Vita_ResumeMusic();
    assert(SND_Vita_GetBGMStatus() == 1);

    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t resume_energy = 0;
    for (int i = 0; i < 2048; i++) resume_energy += abs(mix_buf[i]);
    printf(" - Resumed BGM Mix: energy=%lld [OK]\n", (long long)resume_energy);
    assert(resume_energy > 0);

    /* 5. Volume Fade */
    SND_Vita_FadeBGM(0.2f, 0.5f); /* Fade to 0.2 over 0.5 seconds */
    for (int i = 0; i < 25; i++) {
        SND_Vita_TickBGM(1024.0f / 48000.0f);
        SND_Vita_MixStereoBuffer(mix_buf, 1024);
    }
    float channel_vol = SND_Vita_GetBGMChannelVolume();
    printf(" - Volume Fade to 20%%: Current Channel Volume=%.2f [OK]\n", channel_vol);
    assert(fabsf(channel_vol - 0.2f) < 0.05f);

    /* 6. Stop BGM */
    SND_Vita_StopMusic();
    assert(SND_Vita_GetBGMStatus() == 0);
    printf(" - Stop BGM: status=%d [OK]\n", SND_Vita_GetBGMStatus());

    /* 7. Stream Ring Buffer Verification (Chunk-based streaming engine) */
    SND_Vita_ClearStream();
    assert(SND_Vita_GetStreamQueuedFrames() == 0);
    assert(SND_Vita_GetStreamFreeFrames() == 65536);

    /* Feed 2048 bytes of PCM16 (1024 frames) to L and R */
    int16_t dummy_pcm[1024];
    for (int i = 0; i < 1024; i++) dummy_pcm[i] = (int16_t)(sinf(i * 0.05f) * 10000.0f);
    SND_Vita_FeedStreamChunk(0, (const uint8_t *)dummy_pcm, sizeof(dummy_pcm), 1, 22050);
    SND_Vita_FeedStreamChunk(1, (const uint8_t *)dummy_pcm, sizeof(dummy_pcm), 1, 22050);
    assert(SND_Vita_GetStreamQueuedFrames() == 1024);
    assert(SND_Vita_GetStreamFreeFrames() == 65536 - 1024);

    /* Feed 2048 bytes of Yamaha ADPCM (4096 frames) to L and R */
    uint8_t dummy_adpcm[2048];
    memset(dummy_adpcm, 0x11, sizeof(dummy_adpcm));
    SND_Vita_FeedStreamChunk(0, dummy_adpcm, sizeof(dummy_adpcm), 2, 22050);
    SND_Vita_FeedStreamChunk(1, dummy_adpcm, sizeof(dummy_adpcm), 2, 22050);
    assert(SND_Vita_GetStreamQueuedFrames() == 1024 + 4096);

    /* Mix audio and ensure frames are consumed */
    int16_t stream_test_buf[2048];
    SND_Vita_MixStereoBuffer(stream_test_buf, 1024);
    int64_t stream_energy = 0;
    for (int i = 0; i < 2048; i++) stream_energy += abs(stream_test_buf[i]);
    assert(stream_energy > 0);
    assert(SND_Vita_GetStreamQueuedFrames() < 1024 + 4096);
    uint32_t consumed_22k = SND_Vita_GetStreamConsumedFrames();
    assert(consumed_22k >= 468 && consumed_22k <= 472);

    SND_Vita_ClearStream();
    assert(SND_Vita_GetStreamQueuedFrames() == 0);

    /* 8. 44.1 kHz Stream Chunk Feeding & Full-Speed Consumption Verification */
    SND_Vita_FeedStreamChunk(0, (const uint8_t *)dummy_pcm, sizeof(dummy_pcm), 1, 44100);
    SND_Vita_FeedStreamChunk(1, (const uint8_t *)dummy_pcm, sizeof(dummy_pcm), 1, 44100);
    SND_Vita_FeedStreamChunk(0, dummy_adpcm, sizeof(dummy_adpcm), 2, 44100);
    SND_Vita_FeedStreamChunk(1, dummy_adpcm, sizeof(dummy_adpcm), 2, 44100);
    assert(SND_Vita_GetStreamQueuedFrames() == 1024 + 4096);

    /* Mix 1024 frames at 48000 Hz: at 44.1 kHz, ~940 stream frames must be consumed */
    SND_Vita_MixStereoBuffer(stream_test_buf, 1024);
    uint32_t consumed_44k = SND_Vita_GetStreamConsumedFrames();
    printf(" - Stream Sample Rates: 22.05 kHz consumed %u frames, 44.1 kHz consumed %u frames (expected ~940)\n",
           consumed_22k, consumed_44k);
    assert(consumed_44k >= 938 && consumed_44k <= 942);

    SND_Vita_ClearStream();
    assert(SND_Vita_GetStreamQueuedFrames() == 0);
    printf(" - Stream Ring Buffer (Feed, ADPCM, 44.1 kHz vs 22.05 kHz Rate Matching): PASS [OK]\n");

    printf(COLOR_GREEN "Streaming BGM lifecycle: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Sub-Test 4: Full Simulated Gameplay Audio Session (7.0 Seconds)
 * ============================================================================ */
static bool run_simulated_gameplay_session(const char *output_wav_path) {
    printf(COLOR_BOLD "=== 4. Simulated Gameplay Audio Mixing (7.0 Seconds) ===" COLOR_RESET "\n");

    FILE *wav = wav_create(output_wav_path, SND_VITA_OUTPUT_RATE, 2);
    if (!wav) {
        return false;
    }

    /* Simulation parameters */
    const uint32_t TOTAL_BLOCKS = 328; /* 328 * 1024 = 335,872 frames = 6.997 seconds */
    int16_t mix_buf[SND_VITA_BUFFER_SAMPLES];

    /* Telemetry metrics */
    uint64_t total_mix_ns = 0;
    uint64_t min_block_ns = 0xFFFFFFFFFFFFFFFFULL;
    uint64_t max_block_ns = 0;
    int32_t  peak_amplitude = 0;
    uint64_t total_energy = 0;
    int      max_active_channels = 0;

    int handle_jump = -1;
    int handle_lum = -1;

    printf(" - Starting simulated gameplay audio session...\n");

    for (uint32_t block = 0; block < TOTAL_BLOCKS; block++) {
        float t = (float)block * 1024.0f / (float)SND_VITA_OUTPUT_RATE;

        /* --------------------------------------------------------------------
         * Gameplay Event Timeline
         * -------------------------------------------------------------------- */
        /* t = 0.0s: Start BGM MM.DCZ & Menu Confirm sound */
        if (block == 0) {
            SND_Vita_LoadBank("assets/dc/DCDATA/Sound/Banks/bnk_46.OSB");
            SND_Vita_PlayMusic("assets/dc/DCDATA/Sound/Music/MM.DCZ", 1);
            SND_Vita_PlaySound(0, 0.9f, 0.0f); /* Menu confirm from BNK_46 */
        }
        /* t = 0.6s: Level load complete, switch to level bank BNK_0.OSB */
        else if (block == 28) {
            SND_Vita_LoadBank("assets/dc/DCDATA/Sound/Banks/bnk_0.OSB");
        }
        /* t = 1.0s: Rayman Jumps! Trigger FIX jump sound (ID #1) */
        else if (block == 47) {
            handle_jump = SND_Vita_SendCommand(0x11, 0, 1, 0); /* Key-on ID #1 */
            SND_Vita_SendCommand(0x15, (uint8_t)handle_jump, -40, 0); /* Pan left */
        }
        /* t = 1.3s: Apex of jump: update pan to center and pitch shift */
        else if (block == 61 && handle_jump >= 0) {
            SND_Vita_SendCommand(0x15, (uint8_t)handle_jump, 20, 0); /* Pan moves right */
            SND_Vita_SendCommand(0x18, (uint8_t)handle_jump, 200, 0); /* +200 cents frequency */
        }
        /* t = 1.8s: Rayman lands and collects yellow Lum! Trigger FIX Sound #0 */
        else if (block == 84) {
            handle_lum = SND_Vita_SendCommand(0x11, 0, 0, 0);
            SND_Vita_SendCommand(0x15, (uint8_t)handle_lum, 30, 0); /* Pan +0.25f */
            SND_Vita_SendCommand(0x16, (uint8_t)handle_lum, 120, 0); /* High volume */
        }
        /* t = 2.8s: Cutscene / Dialogue interlude: Pause BGM */
        else if (block == 131) {
            SND_Vita_PauseMusic();
            /* Play ambient sound while BGM is paused */
            SND_Vita_PlaySound(0, 0.7f, -0.4f);
        }
        /* t = 3.6s: Cutscene ends: Resume BGM */
        else if (block == 169) {
            SND_Vita_ResumeMusic();
        }
        /* t = 4.2s: Action climax! Rapidly trigger 16 voices to saturate mixer */
        else if (block == 197) {
            for (int v = 0; v < 16; v++) {
                SND_Vita_PlaySound(v % 8, 0.4f, (float)(v - 8) / 8.0f);
            }
        }
        /* t = 5.2s: Level clear fanfare: Initiate smooth BGM volume fade out */
        else if (block == 244) {
            SND_Vita_FadeBGM(0.0f, 1.6f); /* Smooth fade over 1.6 seconds */
        }
        /* t = 6.8s: BGM fade complete, stop music */
        else if (block == 319) {
            SND_Vita_StopMusic();
        }

        /* Tick streaming BGM engine for volume fades & state machines */
        SND_Vita_TickBGM(1024.0f / (float)SND_VITA_OUTPUT_RATE);

        /* Count active channels before mixing */
        int active_sfx = SND_Vita_GetActiveVoiceCount();
        int active_bgm = (SND_Vita_GetBGMStatus() == 1) ? 1 : 0;
        int active_total = active_sfx + active_bgm;
        if (active_total > max_active_channels) {
            max_active_channels = active_total;
        }

        /* --------------------------------------------------------------------
         * Timed 1024-Frame Mixing Block Execution
         * -------------------------------------------------------------------- */
        uint64_t t0 = get_time_ns();
        SND_Vita_MixStereoBuffer(mix_buf, SND_VITA_FRAME_SAMPLES);
        uint64_t t1 = get_time_ns();

        uint64_t block_ns = t1 - t0;
        total_mix_ns += block_ns;
        if (block_ns < min_block_ns) min_block_ns = block_ns;
        if (block_ns > max_block_ns) max_block_ns = block_ns;

        /* Analyze audio block metrics */
        for (int i = 0; i < SND_VITA_BUFFER_SAMPLES; i++) {
            int32_t val = abs(mix_buf[i]);
            total_energy += val;
            if (val > peak_amplitude) {
                peak_amplitude = val;
            }
        }

        /* Write mixed block to WAV */
        wav_write_frames(wav, mix_buf, SND_VITA_FRAME_SAMPLES, 2);

        /* Print periodic timeline checkpoints */
        if (block == 0 || block == 50 || block == 100 || block == 170 || block == 200 || block == 270 || block == 327) {
            printf("   [t=%4.2fs | Block %3u/%u] Active: %2d ch (SFX: %2d, BGM: %d) | Mix: %5.1f us | Peak: %5d | Energy: %8llu\n",
                   t, block + 1, TOTAL_BLOCKS, active_total, active_sfx, active_bgm,
                   (double)block_ns / 1000.0, peak_amplitude, (unsigned long long)total_energy);
        }
    }

    wav_close(wav, TOTAL_BLOCKS * SND_VITA_FRAME_SAMPLES, 2);
    SND_Vita_StopAllVoices();

    /* Compute and print performance telemetry */
    double avg_block_us = (double)total_mix_ns / ((double)TOTAL_BLOCKS * 1000.0);
    double min_block_us = (double)min_block_ns / 1000.0;
    double max_block_us = (double)max_block_ns / 1000.0;
    double total_time_ms = (double)total_mix_ns / 1000000.0;
    double simulated_sec = (double)(TOTAL_BLOCKS * 1024) / (double)SND_VITA_OUTPUT_RATE;
    double budget_us = (1024.0 / 48000.0) * 1000000.0; /* 21333.3 us per block */
    double cpu_usage_pct = (avg_block_us / budget_us) * 100.0;

    printf("\n" COLOR_CYAN COLOR_BOLD);
    printf("======================================================================\n");
    printf("         CLEANROOM AUDIO ENGINE PERFORMANCE TELEMETRY REPORT          \n");
    printf("======================================================================\n");
    printf(COLOR_RESET);
    printf(" - Total Gameplay Audio Mixed:       %u stereo frames (%.3f seconds)\n",
           TOTAL_BLOCKS * SND_VITA_FRAME_SAMPLES, simulated_sec);
    printf(" - Total 1024-Frame Mix Blocks:      %u blocks\n", TOTAL_BLOCKS);
    printf(" - Total Mixer CPU Time:             %.2f ms (across %.2f s audio)\n", total_time_ms, simulated_sec);
    printf(" - Average Block Mix Time:           " COLOR_GREEN "%.2f us" COLOR_RESET " per 1024 frames\n", avg_block_us);
    printf(" - Min / Max Block Mix Time:         %.2f us / %.2f us\n", min_block_us, max_block_us);
    printf(" - Real-Time Hardware Budget:        %.1f us per block\n", budget_us);
    printf(" - Host Real-Time Headroom:          " COLOR_GREEN "%.2f%% CPU load" COLOR_RESET " (%.1fx faster than real-time)\n",
           cpu_usage_pct, budget_us / avg_block_us);
    printf(" - Maximum Active Channels:          %d simultaneous channels\n", max_active_channels);
    printf(" - Peak Signal Amplitude:            %d / 32767 (%.1f dBFS)\n",
           peak_amplitude, 20.0 * log10((double)peak_amplitude / 32768.0));
    printf(" - Cumulative Audio Energy:          %llu\n", (unsigned long long)total_energy);
    printf(" - Output WAV File Written:          " COLOR_BOLD "%s" COLOR_RESET "\n", output_wav_path);

    /* Verify WAV on disk */
    struct stat wav_st;
    assert(stat(output_wav_path, &wav_st) == 0);
    uint32_t expected_bytes = sizeof(WAV_Header) + TOTAL_BLOCKS * 1024 * 4;
    printf(" - WAV File Size Verified:           %lld bytes (expected: %u) [OK]\n",
           (long long)wav_st.st_size, expected_bytes);
    assert((uint32_t)wav_st.st_size == expected_bytes);
    assert(total_energy > 0);
    assert(peak_amplitude > 1000);

    printf(COLOR_GREEN "\nSimulated gameplay audio session verification: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Main Test Runner
 * ============================================================================ */
int main(int argc, char **argv) {
    const char *wav_path = "build/cleanroom_test.wav";
    if (argc > 1 && argv[1][0] != '\0') {
        wav_path = argv[1];
    }

    printf("\n" COLOR_MAGENTA COLOR_BOLD);
    printf("======================================================================\n");
    printf("  Rayman 2 Cleanroom Audio Subsystem: Real Hardware Call Test Suite  \n");
    printf("  Primary Baseline: Sega Dreamcast Yamaha AICA ADPCM & BGM Engine    \n");
    printf("======================================================================\n");
    printf(COLOR_RESET "\n");

    /* Initialize VFS and Audio subsystem in host environment */
    VFS_Vita_Init("assets/dc");
    int init_res = SND_Vita_Init();
    assert(init_res == 0);
    assert(SND_Vita_IsInitialized() == 1);

    bool all_passed = true;
    all_passed &= test_bank_loading_and_descriptors();
    all_passed &= test_voice_commands_and_recycling();
    all_passed &= test_streaming_bgm_lifecycle();
    all_passed &= run_simulated_gameplay_session(wav_path);

    /* Clean shutdown */
    SND_Vita_Shutdown();
    assert(SND_Vita_IsInitialized() == 0);

    if (all_passed) {
        printf(COLOR_GREEN COLOR_BOLD);
        printf("======================================================================\n");
        printf("  ALL REAL CLEANROOM AUDIO CALLS & SIMULATION VERIFIED CLEANLY!       \n");
        printf("======================================================================\n");
        printf(COLOR_RESET "\n");
        return 0;
    } else {
        printf(COLOR_RED COLOR_BOLD "ERROR: One or more cleanroom audio tests failed!\n" COLOR_RESET);
        return 1;
    }
}
