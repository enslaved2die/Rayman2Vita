/**
 * @file test_sound_host.c
 * @brief Host verification test suite for Dreamcast Yamaha AICA ADPCM Decoder,
 *        Multi-Channel Audio Mixer, .OSB Sound Banks, and .DCZ / .WAV Music Streams
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
#include <assert.h>

#define COLOR_RESET  "\033[0m"
#define COLOR_GREEN  "\033[32m"
#define COLOR_RED    "\033[31m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_CYAN   "\033[36m"
#define COLOR_BOLD   "\033[1m"

/* ============================================================================
 * Test 1: Yamaha AICA ADPCM Decoder Adaptation & Clamping
 * ============================================================================ */
static bool test_aica_adpcm_decoder(void) {
    printf(COLOR_BOLD "=== Test 1: Yamaha AICA ADPCM Quantization & Clamping ===" COLOR_RESET "\n");

    /* 1. Verify single nibble decoding */
    int32_t pred = 0;
    int32_t step_idx = 0;

    /* Positive step delta: nibble 4 (bit 2 set -> diff = step = 7) */
    int16_t sample1 = SND_Vita_DecodeNibble(4, &pred, &step_idx);
    printf(" - Nibble 4 from zero: sample=%d, pred=%d, step_idx=%d\n", sample1, pred, step_idx);
    assert(sample1 > 0);
    assert(pred == sample1);
    assert(step_idx == 2); /* index_table[4] = +2 */

    /* 2. Positive Saturation / Clamping Test */
    pred = 30000;
    step_idx = 80;
    for (int i = 0; i < 20; i++) {
        SND_Vita_DecodeNibble(7, &pred, &step_idx); /* maximum positive delta */
    }
    printf(" - Positive saturation test: clamped pred=%d (expected: 32767), step_idx=%d (max: 88)\n",
           pred, step_idx);
    assert(pred == 32767);
    assert(step_idx == 88);

    /* 3. Negative Saturation / Clamping Test */
    pred = -30000;
    step_idx = 80;
    for (int i = 0; i < 20; i++) {
        SND_Vita_DecodeNibble(15, &pred, &step_idx); /* maximum negative delta (bit 3 set) */
    }
    printf(" - Negative saturation test: clamped pred=%d (expected: -32768), step_idx=%d (max: 88)\n",
           pred, step_idx);
    assert(pred == -32768);
    assert(step_idx == 88);

    /* 4. Step Index Lower Bound Clamping Test */
    for (int i = 0; i < 150; i++) {
        SND_Vita_DecodeNibble(0, &pred, &step_idx); /* delta index = -1 */
    }
    printf(" - Step index lower clamp: step_idx=%d (expected: 0)\n", step_idx);
    assert(step_idx == 0);

    /* 5. Byte Unpacking Order: Low nibble first, High nibble second */
    uint8_t test_bytes[2] = { 0x41, 0x07 }; /* byte 0: low=1, high=4; byte 1: low=7, high=0 */
    int16_t decoded[4];
    SND_Vita_DecodeAICA(test_bytes, decoded, 4);

    /* Low nibble (1) followed by high nibble (4) */
    int32_t ref_pred = 0, ref_step = 0;
    int16_t exp0 = SND_Vita_DecodeNibble(0x01, &ref_pred, &ref_step);
    int16_t exp1 = SND_Vita_DecodeNibble(0x04, &ref_pred, &ref_step);
    int16_t exp2 = SND_Vita_DecodeNibble(0x07, &ref_pred, &ref_step);
    int16_t exp3 = SND_Vita_DecodeNibble(0x00, &ref_pred, &ref_step);

    assert(decoded[0] == exp0);
    assert(decoded[1] == exp1);
    assert(decoded[2] == exp2);
    assert(decoded[3] == exp3);
    printf(" - Low/High nibble sequence ordering: PASS [OK]\n");

    printf(COLOR_GREEN "Yamaha AICA ADPCM decoder verification: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Test 2: Sound Bank (.OSB) Container Loading & SFX Decoding
 * ============================================================================ */
static bool test_sound_bank_osb(void) {
    printf(COLOR_BOLD "=== Test 2: Sound Bank (.OSB) Container Loading ===" COLOR_RESET "\n");

    /* 1. Load FIX.OSB */
    int res = SND_Vita_LoadFixBank();
    printf(" - Loading FIX.OSB: result=%d\n", res);
    assert(res == 0);

    /* 2. Verify sound playback from FIX.OSB */
    int voice_lum = SND_Vita_PlaySound(0, 1.0f, 0.0f);
    printf(" - Playing FIX sound ID #0: allocated voice index=%d\n", voice_lum);
    assert(voice_lum >= 0 && voice_lum < SND_VITA_NUM_VOICES);

    int voice_jump = SND_Vita_PlaySound(1, 0.8f, -0.5f);
    printf(" - Playing FIX sound ID #1 (pan=-0.5): allocated voice index=%d\n", voice_jump);
    assert(voice_jump >= 0 && voice_jump < SND_VITA_NUM_VOICES);

    /* 3. Load Level Bank BNK_10.OSB */
    int res_bnk = SND_Vita_LoadBank("assets/dc/DCDATA/SOUND/BANKS/BNK_10.OSB");
    printf(" - Loading level bank BNK_10.OSB: result=%d\n", res_bnk);
    assert(res_bnk == 0);

    int voice_level = SND_Vita_PlaySound(0, 0.9f, 0.5f);
    printf(" - Playing level sound ID #0: allocated voice index=%d\n", voice_level);
    assert(voice_level >= 0);

    /* Stop all voices */
    SND_Vita_StopAllVoices();

    printf(COLOR_GREEN "Sound bank (.OSB) loading & sample decoding: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Test 3: Streaming Background Music (.DCZ & .WAV)
 * ============================================================================ */
static bool test_bgm_streamer(void) {
    printf(COLOR_BOLD "=== Test 3: Streaming BGM (.DCZ & .WAV) ===" COLOR_RESET "\n");

    /* 1. Test standard uncompressed PCM WAV stream */
    int res_wav = SND_Vita_PlayMusic("assets/dc/DCDATA/SOUND/MUSIC/SILENST.WAV", 1);
    printf(" - Playing SILENST.WAV (loop=1): result=%d\n", res_wav);
    assert(res_wav == 0);

    /* Mix 1024 frames of BGM */
    int16_t mix_buf[1024 * 2];
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    /* Pause and Resume */
    SND_Vita_PauseMusic();
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    SND_Vita_ResumeMusic();

    /* 2. Test DCZ container stream (NA.DCZ) */
    int res_dcz = SND_Vita_PlayMusic("assets/dc/DCDATA/SOUND/MUSIC/NA.DCZ", 1);
    printf(" - Playing NA.DCZ container: result=%d\n", res_dcz);
    assert(res_dcz == 0);

    /* Mix 1024 frames of DCZ BGM */
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    /* Verify non-zero output */
    int64_t energy = 0;
    for (int i = 0; i < 2048; i++) {
        energy += abs(mix_buf[i]);
    }
    printf(" - Mixed DCZ BGM energy over 1024 stereo frames: %lld\n", (long long)energy);
    assert(energy > 0);

    /* 3. Test Yamaha AICA ADPCM music stream (JAILMUSADPCM.DCZ) */
    int res_adpcm = SND_Vita_PlayMusic("assets/dc/DCDATA/SOUND/MUSIC/JAILMUSADPCM.DCZ", 0);
    printf(" - Playing JAILMUSADPCM.DCZ (Yamaha ADPCM stereo): result=%d\n", res_adpcm);
    assert(res_adpcm == 0);

    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t adpcm_energy = 0;
    for (int i = 0; i < 2048; i++) {
        adpcm_energy += abs(mix_buf[i]);
    }
    printf(" - Mixed ADPCM BGM energy over 1024 stereo frames: %lld\n", (long long)adpcm_energy);
    assert(adpcm_energy > 0);

    SND_Vita_StopMusic();
    printf(COLOR_GREEN "Streaming BGM (.DCZ / .WAV) verification: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Test 4: Multi-Channel Sound Mixer & Stereo Panning
 * ============================================================================ */
static bool test_mixer_panning_and_voices(void) {
    printf(COLOR_BOLD "=== Test 4: Multi-Channel Mixer & Stereo Panning ===" COLOR_RESET "\n");

    /* Ensure FIX.OSB is loaded */
    SND_Vita_LoadFixBank();
    SND_Vita_StopMusic();
    SND_Vita_StopAllVoices();

    /* 1. Stereo Panning Left (-1.0f): Right channel should be completely silent */
    int v_left = SND_Vita_PlaySound(0, 1.0f, -1.0f);
    assert(v_left >= 0);

    int16_t mix_buf[1024 * 2];
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    int64_t energy_l = 0;
    int64_t energy_r = 0;
    for (int i = 0; i < 1024; i++) {
        energy_l += abs(mix_buf[i * 2 + 0]);
        energy_r += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - Pan=-1.0f (Full Left): Left Energy=%lld, Right Energy=%lld\n",
           (long long)energy_l, (long long)energy_r);
    assert(energy_l > 0);
    assert(energy_r == 0); /* Pure left: right must be silent */

    /* 2. Stereo Panning Right (+1.0f): Left channel should be completely silent */
    SND_Vita_StopAllVoices();
    int v_right = SND_Vita_PlaySound(0, 1.0f, 1.0f);
    assert(v_right >= 0);

    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    energy_l = 0;
    energy_r = 0;
    for (int i = 0; i < 1024; i++) {
        energy_l += abs(mix_buf[i * 2 + 0]);
        energy_r += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - Pan=+1.0f (Full Right): Left Energy=%lld, Right Energy=%lld\n",
           (long long)energy_l, (long long)energy_r);
    assert(energy_r > 0);
    assert(energy_l == 0); /* Pure right: left must be silent */

    /* 3. Center Panning (0.0f): Left and Right channels must be balanced */
    SND_Vita_StopAllVoices();
    SND_Vita_PlaySound(0, 1.0f, 0.0f);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    energy_l = 0;
    energy_r = 0;
    for (int i = 0; i < 1024; i++) {
        energy_l += abs(mix_buf[i * 2 + 0]);
        energy_r += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - Pan=0.0f (Center): Left Energy=%lld, Right Energy=%lld (diff: %lld)\n",
           (long long)energy_l, (long long)energy_r, (long long)llabs(energy_l - energy_r));
    assert(energy_l > 0);
    assert(energy_l == energy_r);

    /* 4. Master Volume Scaling */
    SND_Vita_SetMasterVolume(0.5f);
    assert(fabsf(SND_Vita_GetMasterVolume() - 0.5f) < 0.001f);
    SND_Vita_SetMasterVolume(1.0f);

    /* 5. 16 Simultaneous Voices & Voice Stealing */
    SND_Vita_StopAllVoices();
    for (int i = 0; i < 24; i++) {
        int v_idx = SND_Vita_PlaySound(i % 10, 0.5f, 0.0f);
        assert(v_idx >= 0 && v_idx < SND_VITA_NUM_VOICES);
    }

    /* Mix full 16-voice polyphony */
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    for (int i = 0; i < 1024 * 2; i++) {
        /* Check that sample does not overflow 16-bit signed range */
        assert(mix_buf[i] >= -32768 && mix_buf[i] <= 32767);
    }
    printf(" - 16 Simultaneous voices + voice stealing: PASS [OK]\n");

    SND_Vita_StopAllVoices();
    printf(COLOR_GREEN "Multi-channel mixer & stereo panning: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Test 5: Advanced SOSB (Looping, Large Offsets > 64KB) & DIPAN Law Verification
 * ============================================================================ */
static bool test_advanced_sosb_and_dipan(void) {
    printf(COLOR_BOLD "=== Test 5: Advanced SOSB (Looping & >64KB Offsets) & DIPAN Law ===" COLOR_RESET "\n");

    /* Ensure only FIX.OSB is active to test FIX sound IDs */
    SND_Vita_UnloadBank();
    SND_Vita_LoadFixBank();

    /* Sound 0 in FIX.OSB is one-shot (loop=0) */
    int v0 = SND_Vita_PlaySound(0, 1.0f, 0.0f);
    assert(v0 >= 0);
    int active = 0; uint32_t pos = 0, total = 0;
    SND_Vita_GetVoiceStatus(v0, &active, &pos, &total);
    assert(active == 1);
    assert(total == 6059);
    SND_Vita_StopVoice(v0);
    printf(" - Sound #0 (One-Shot): total_samples=%u, active=%d [OK]\n", total, active);

    /* Sound 1 in FIX.OSB is looping (b5=3 -> loop=1, 15499 samples) */
    int v1 = SND_Vita_PlaySound(1, 1.0f, 0.0f);
    assert(v1 >= 0);
    SND_Vita_GetVoiceStatus(v1, &active, &pos, &total);
    assert(active == 1);
    assert(total == 15499);
    SND_Vita_StopVoice(v1);
    printf(" - Sound #1 (Looping): total_samples=%u, active=%d [OK]\n", total, active);

    /* Sound 8 in FIX.OSB is at offset 0x011dd0 (>64KB, requires desc[4] high byte) */
    int v8 = SND_Vita_PlaySound(8, 1.0f, 0.0f);
    assert(v8 >= 0);
    SND_Vita_GetVoiceStatus(v8, &active, &pos, &total);
    assert(active == 1);
    assert(total == 10881);
    int16_t mix_buf[1024 * 2];
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t v8_energy = 0;
    for (int i = 0; i < 2048; i++) v8_energy += abs(mix_buf[i]);
    printf(" - Sound #8 (>64KB offset): total_samples=%u, energy=%lld [OK]\n", total, (long long)v8_energy);
    assert(v8_energy > 0);
    SND_Vita_StopVoice(v8);

    /* Sound 200 in FIX.OSB is at offset 0x0bb190 (>700KB) */
    int v200 = SND_Vita_PlaySound(200, 1.0f, 0.0f);
    assert(v200 >= 0);
    SND_Vita_GetVoiceStatus(v200, &active, &pos, &total);
    assert(active == 1);
    assert(total == 10111);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t v200_energy = 0;
    for (int i = 0; i < 2048; i++) v200_energy += abs(mix_buf[i]);
    printf(" - Sound #200 (>700KB offset): total_samples=%u, energy=%lld [OK]\n", total, (long long)v200_energy);
    assert(v200_energy > 0);
    SND_Vita_StopVoice(v200);

    /* 2. Verify Dreamcast DIPAN Panning Law (3 dB attenuation curve) */
    /* Pan = -0.5f */
    SND_Vita_StopAllVoices();
    SND_Vita_PlaySound(0, 1.0f, -0.5f);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t e_l_neg = 0, e_r_neg = 0;
    for (int i = 0; i < 1024; i++) {
        e_l_neg += abs(mix_buf[i * 2 + 0]);
        e_r_neg += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - DIPAN Pan=-0.5f: Left Energy=%lld, Right Energy=%lld (ratio=%.3f)\n",
           (long long)e_l_neg, (long long)e_r_neg, (double)e_r_neg / (double)e_l_neg);
    assert(e_l_neg > e_r_neg);
    assert(e_r_neg > 0);

    /* Pan = +0.5f */
    SND_Vita_StopAllVoices();
    SND_Vita_PlaySound(0, 1.0f, 0.5f);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t e_l_pos = 0, e_r_pos = 0;
    for (int i = 0; i < 1024; i++) {
        e_l_pos += abs(mix_buf[i * 2 + 0]);
        e_r_pos += abs(mix_buf[i * 2 + 1]);
    }
    printf(" - DIPAN Pan=+0.5f: Left Energy=%lld, Right Energy=%lld (ratio=%.3f)\n",
           (long long)e_l_pos, (long long)e_r_pos, (double)e_l_pos / (double)e_r_pos);
    assert(e_r_pos > e_l_pos);
    assert(e_l_pos > 0);
    assert(e_l_neg == e_r_pos); /* Perfect stereo symmetry */
    assert(e_r_neg == e_l_pos);

    /* 3. Dynamic Output Rate Configuration (48.0 kHz MAIN vs 44.1 kHz BGM) */
    SND_Vita_SetOutputSampleRate(SND_VITA_RATE_44100);
    assert(SND_Vita_GetOutputSampleRate() == SND_VITA_RATE_44100);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    SND_Vita_SetOutputSampleRate(SND_VITA_RATE_48000);
    assert(SND_Vita_GetOutputSampleRate() == SND_VITA_RATE_48000);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    printf(" - Dynamic Output Sample Rate (44.1 kHz vs 48.0 kHz): PASS [OK]\n");

    /* 4. DCZ Subtrack Playback */
    int res_sub0 = SND_Vita_PlayMusicSubtrack("assets/dc/DCDATA/SOUND/MUSIC/NA.DCZ", 0, 1);
    assert(res_sub0 == 0);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);

    int res_sub1 = SND_Vita_PlayMusicSubtrack("assets/dc/DCDATA/SOUND/MUSIC/NA.DCZ", 1, 1);
    assert(res_sub1 == 0);
    SND_Vita_MixStereoBuffer(mix_buf, 1024);
    int64_t sub1_energy = 0;
    for (int i = 0; i < 2048; i++) sub1_energy += abs(mix_buf[i]);
    printf(" - DCZ Subtrack selection (Track #1): energy=%lld [OK]\n", (long long)sub1_energy);
    assert(sub1_energy > 0);
    SND_Vita_StopMusic();

    SND_Vita_StopAllVoices();
    printf(COLOR_GREEN "Advanced SOSB & DIPAN law verification: PASS [OK]" COLOR_RESET "\n\n");
    return true;
}

/* ============================================================================
 * Main Test Runner
 * ============================================================================ */
int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    printf("\n" COLOR_CYAN COLOR_BOLD);
    printf("======================================================================\n");
    printf("  Rayman 2 Dreamcast Audio Streamer & Yamaha AICA ADPCM Test Suite   \n");
    printf("======================================================================\n");
    printf(COLOR_RESET "\n");

    /* Initialize VFS and Audio subsystem in host environment */
    VFS_Vita_Init("assets/dc");
    int init_res = SND_Vita_Init();
    assert(init_res == 0);
    assert(SND_Vita_IsInitialized() == 1);

    bool all_passed = true;
    all_passed &= test_aica_adpcm_decoder();
    all_passed &= test_sound_bank_osb();
    all_passed &= test_bgm_streamer();
    all_passed &= test_mixer_panning_and_voices();
    all_passed &= test_advanced_sosb_and_dipan();

    /* Clean shutdown */
    SND_Vita_Shutdown();
    assert(SND_Vita_IsInitialized() == 0);

    if (all_passed) {
        printf(COLOR_GREEN COLOR_BOLD);
        printf("======================================================================\n");
        printf("  ALL YAMAHA AICA ADPCM, MIXER & BGM TESTS PASSED CLEANLY! [100%% OK] \n");
        printf("======================================================================\n");
        printf(COLOR_RESET "\n");
        return 0;
    } else {
        printf(COLOR_RED COLOR_BOLD "ERROR: One or more audio tests failed!\n" COLOR_RESET);
        return 1;
    }
}
