/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: snd_vita.c
 *
 * PlayStation Vita Audio Subsystem & Yamaha AICA ADPCM Decoder
 * - Yamaha AICA 4-bit ADPCM Decoder (89-entry step table, 16-entry index table)
 * - Multi-Channel Audio Mixer: 1 Streaming BGM Channel + 16 SFX Voices
 * - Dedicated Real-Time Audio Worker Thread (sceAudioOut @ 48.0 kHz or 44.1 kHz 16-bit Stereo)
 * - Sound Bank (.OSB) Loader for FIX.OSB & Level Sound Banks with loop point extraction
 * - Streaming Background Music Loader (.DCZ archive container and .WAV RIFF streams)
 * - Dreamcast Yamaha AICA DIPAN stereo panning law (3 dB step attenuation curve)
 * - ARM NEON SIMD vectorization for mixing, saturation clamping, and frame interleaving
 * - Thread-safe synchronization between main game thread and audio worker thread
 *
 * Primary Port Baseline: Sega Dreamcast Yamaha AICA Sound Architecture
 * Secondary Guidance:    PC DirectSound retail implementation
 * ============================================================================ */

#include "snd_vita.h"
#include "vita_shim/vfs_vita.h"
#include "vita_shim/os_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#if defined(__ARM_NEON) || defined(__ARM_NEON__)
#include <arm_neon.h>
#endif

#if defined(__vita__)
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/clib.h>
#include <psp2/audioout.h>
#else
#include <pthread.h>
#endif

/* ----------------------------------------------------------------------------
 * Weak Compatibility Shims (Active when os_vita.c / vfs_vita.c are not linked)
 * ---------------------------------------------------------------------------- */
__attribute__((weak)) void *CPA_malloc(size_t size) {
    return malloc(size);
}

__attribute__((weak)) void *CPA_calloc(size_t num, size_t size) {
    return calloc(num, size);
}

__attribute__((weak)) void CPA_free(void *ptr) {
    free(ptr);
}

static void snd_log_internal(const char *prefix, const char *fmt, va_list ap) {
    char buf[512];
    vsnprintf(buf, sizeof(buf), fmt, ap);
#if defined(__vita__)
    sceClibPrintf("%s %s\n", prefix, buf);
#else
    fprintf(stderr, "%s %s\n", prefix, buf);
#endif
}

__attribute__((weak)) void OS_Vita_LogInfo(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    snd_log_internal("[SND][INFO]", fmt, ap);
    va_end(ap);
}

__attribute__((weak)) void OS_Vita_LogWarn(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    snd_log_internal("[SND][WARN]", fmt, ap);
    va_end(ap);
}

__attribute__((weak)) void OS_Vita_LogError(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    snd_log_internal("[SND][ERROR]", fmt, ap);
    va_end(ap);
}

/* Fallback weak symbol when recomp io.c is not linked */
__attribute__((weak)) int hle_io_resolve(const char *dir, const char *name, char *out, size_t cap) {
    (void)dir; (void)name; (void)out; (void)cap;
    return -1;
}

__attribute__((weak)) void *CPA_LoadFile(const char *filename, size_t *out_size) {
    if (!filename) return NULL;
    char resolved[1024];
    FILE *f = NULL;

    if (hle_io_resolve(NULL, filename, resolved, sizeof(resolved)) == 0) {
        f = fopen(resolved, "rb");
    }

    if (!f) {
        f = fopen(filename, "rb");
    }
#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
    if (!f) {
        snprintf(resolved, sizeof(resolved), "ux0:data/rayman2/%s", filename);
        f = fopen(resolved, "rb");
    }
    if (!f) {
        snprintf(resolved, sizeof(resolved), "app0:%s", filename);
        f = fopen(resolved, "rb");
    }
#endif

    if (!f) return NULL;

    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) {
        fclose(f);
        return NULL;
    }

    void *buf = malloc((size_t)sz);
    if (!buf) {
        fclose(f);
        return NULL;
    }

    if (fread(buf, 1, (size_t)sz, f) != (size_t)sz) {
        free(buf);
        fclose(f);
        return NULL;
    }

    fclose(f);
    if (out_size) *out_size = (size_t)sz;
    return buf;
}

/* ----------------------------------------------------------------------------
 * 1. Yamaha AICA ADPCM Adaptation & Quantization Tables
 * ---------------------------------------------------------------------------- */
static const int16_t s_aica_step_table[89] = {
    7,     8,     9,     10,    11,    12,    13,    14,    16,    17,
    19,    21,    23,    25,    28,    31,    34,    37,    41,    45,
    50,    55,    60,    66,    73,    80,    88,    97,    107,   118,
    130,   143,   157,   173,   190,   209,   230,   253,   279,   307,
    337,   371,   408,   449,   494,   544,   598,   658,   724,   796,
    876,   963,   1060,  1166,  1282,  1411,  1552,  1707,  1878,  2066,
    2272,  2499,  2749,  3024,  3327,  3660,  4026,  4428,  4871,  5358,
    5894,  6484,  7132,  7845,  8630,  9493,  10442, 11487, 12635, 13899,
    15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767
};

static const int8_t s_aica_index_table[16] = {
    -1, -1, -1, -1, 2, 4, 6, 8,
    -1, -1, -1, -1, 2, 4, 6, 8
};

/* ----------------------------------------------------------------------------
 * 2. Dreamcast Yamaha AICA DIPAN Attenuation Law (3 dB per step, 15 = Mute)
 * ---------------------------------------------------------------------------- */
static const float s_dipan_table[16] = {
    1.00000000f, /*  0:  0 dB */
    0.70794578f, /*  1: -3 dB */
    0.50118723f, /*  2: -6 dB */
    0.35481339f, /*  3: -9 dB */
    0.25118864f, /*  4: -12 dB */
    0.17782794f, /*  5: -15 dB */
    0.12589254f, /*  6: -18 dB */
    0.08912509f, /*  7: -21 dB */
    0.06309573f, /*  8: -24 dB */
    0.04466836f, /*  9: -27 dB */
    0.03162278f, /* 10: -30 dB */
    0.02238721f, /* 11: -33 dB */
    0.01584893f, /* 12: -36 dB */
    0.01122018f, /* 13: -39 dB */
    0.00794328f, /* 14: -42 dB */
    0.00000000f  /* 15: -inf dB (Mute) */
};

/* ----------------------------------------------------------------------------
 * 3. Audio Subsystem Global State & Mutex
 * ---------------------------------------------------------------------------- */
static volatile int         g_bAudioInitialized = 0;
static volatile int         g_bAudioShutdown    = 0;
static uint32_t            g_nOutputSampleRate = SND_VITA_OUTPUT_RATE;

#if defined(__vita__)
static SceUID               g_hAudioThread      = -1;
static SceUID               g_hAudioMutex       = -1;
#else
static pthread_mutex_t      g_hAudioMutex;
static int                  g_bMutexInitialized = 0;
#endif

/* Forward declarations of internal locked helpers */
static void SND_StopMusic_Locked(void);
static void SND_StopAllVoices_Locked(void);

/* Master & Bus Volumes */
static float                g_fMasterVolume     = 1.0f;
static float                g_fBGMVolume        = 1.0f;
static float                g_fSFXVolume        = 1.0f;

/* Voices and Channels */
static SND_Vita_Voice       g_voices[SND_VITA_NUM_VOICES];
static SND_Vita_BGM         g_bgm;

/* Sound Banks */
static SND_Vita_Bank        g_fix_bank;
static SND_Vita_Bank        g_level_bank;

/* ----------------------------------------------------------------------------
 * 4. Synchronization Primitives
 * ---------------------------------------------------------------------------- */
void SND_Vita_Lock(void) {
#if defined(__vita__)
    if (g_hAudioMutex >= 0) {
        sceKernelLockMutex(g_hAudioMutex, 1, NULL);
    }
#else
    if (!g_bMutexInitialized) {
        pthread_mutexattr_t attr;
        pthread_mutexattr_init(&attr);
        pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
        pthread_mutex_init(&g_hAudioMutex, &attr);
        pthread_mutexattr_destroy(&attr);
        g_bMutexInitialized = 1;
    }
    pthread_mutex_lock(&g_hAudioMutex);
#endif
}

void SND_Vita_Unlock(void) {
#if defined(__vita__)
    if (g_hAudioMutex >= 0) {
        sceKernelUnlockMutex(g_hAudioMutex, 1);
    }
#else
    if (g_bMutexInitialized) {
        pthread_mutex_unlock(&g_hAudioMutex);
    }
#endif
}

uint32_t SND_Vita_GetOutputSampleRate(void) {
    return g_nOutputSampleRate;
}

void SND_Vita_SetOutputSampleRate(uint32_t rate) {
    SND_Vita_Lock();
    if (rate == SND_VITA_RATE_44100 || rate == SND_VITA_RATE_48000) {
        g_nOutputSampleRate = rate;
    } else {
        g_nOutputSampleRate = SND_VITA_RATE_48000;
    }

    /* Recalculate rate steps for BGM */
    if (g_bgm.sample_rate > 0) {
        g_bgm.rate_step = (uint32_t)(((uint64_t)g_bgm.sample_rate << 16) / g_nOutputSampleRate);
    }

    /* Recalculate rate steps for all active voices */
    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].rate_step > 0) {
            /* Derive voice's original sample rate from old step */
            /* rate_step = (sample_rate << 16) / old_rate */
            /* We will re-read sample_rate from loaded banks where possible */
            const SND_Vita_Sample *s = SND_Vita_GetBankSound(&g_level_bank, g_voices[i].sound_id);
            if (!s) s = SND_Vita_GetBankSound(&g_fix_bank, g_voices[i].sound_id);
            if (s && s->sample_rate > 0) {
                g_voices[i].rate_step = (uint32_t)(((uint64_t)s->sample_rate << 16) / g_nOutputSampleRate);
            }
        }
    }
    SND_Vita_Unlock();
}

/* ----------------------------------------------------------------------------
 * 5. Panning Gain Helper (Dreamcast DIPAN Model)
 * ---------------------------------------------------------------------------- */
static inline void SND_CalculatePanGains(float pan, float vol, float *out_gain_l, float *out_gain_r) {
    if (vol <= 0.0f) {
        *out_gain_l = 0.0f;
        *out_gain_r = 0.0f;
        return;
    }

    if (pan <= -1.0f) {
        *out_gain_l = vol;
        *out_gain_r = 0.0f;
        return;
    }
    if (pan >= 1.0f) {
        *out_gain_l = 0.0f;
        *out_gain_r = vol;
        return;
    }
    if (pan == 0.0f) {
        *out_gain_l = vol;
        *out_gain_r = vol;
        return;
    }

    if (pan < 0.0f) {
        int idx = (int)roundf(-pan * 15.0f);
        if (idx < 0) idx = 0;
        else if (idx > 15) idx = 15;
        *out_gain_l = vol;
        *out_gain_r = vol * s_dipan_table[idx];
    } else {
        int idx = (int)roundf(pan * 15.0f);
        if (idx < 0) idx = 0;
        else if (idx > 15) idx = 15;
        *out_gain_r = vol;
        *out_gain_l = vol * s_dipan_table[idx];
    }
}

/* ----------------------------------------------------------------------------
 * 6. Yamaha AICA ADPCM Decoder Implementation
 * ---------------------------------------------------------------------------- */

int16_t SND_Vita_DecodeNibble(uint8_t nibble, int32_t *pPredictor, int32_t *pStepIndex) {
    if (!pPredictor || !pStepIndex) return 0;

    int32_t step_idx = *pStepIndex;
    if (step_idx < 0) step_idx = 0;
    else if (step_idx > 88) step_idx = 88;

    int32_t step = s_aica_step_table[step_idx];
    int32_t diff = step >> 3;
    if (nibble & 1) diff += (step >> 2);
    if (nibble & 2) diff += (step >> 1);
    if (nibble & 4) diff += step;

    int32_t pred = *pPredictor;
    if (nibble & 8) {
        pred -= diff;
    } else {
        pred += diff;
    }

    /* Clamp predictor to 16-bit signed range [-32768, 32767] */
    if (pred > 32767) pred = 32767;
    else if (pred < -32768) pred = -32768;
    *pPredictor = pred;

    /* Update step index with adaptation delta and clamp to [0, 88] */
    step_idx += s_aica_index_table[nibble & 0x0F];
    if (step_idx < 0) step_idx = 0;
    else if (step_idx > 88) step_idx = 88;
    *pStepIndex = step_idx;

    return (int16_t)pred;
}

void SND_Vita_DecodeAICA(const uint8_t *src, int16_t *dst, uint32_t num_samples) {
    if (!src || !dst || num_samples == 0) return;

    int32_t predictor = 0;
    int32_t step_index = 0;
    uint32_t out_idx = 0;
    uint32_t src_idx = 0;

    while (out_idx < num_samples) {
        uint8_t byte = src[src_idx++];
        /* Sample 1: Low nibble */
        dst[out_idx++] = SND_Vita_DecodeNibble(byte & 0x0F, &predictor, &step_index);
        if (out_idx >= num_samples) break;

        /* Sample 2: High nibble */
        dst[out_idx++] = SND_Vita_DecodeNibble((byte >> 4) & 0x0F, &predictor, &step_index);
    }
}

void SND_Vita_DecodeAICA_Stereo(const uint8_t *src, int16_t *dst, uint32_t num_frames) {
    if (!src || !dst || num_frames == 0) return;

    int32_t pred_l = 0, step_l = 0;
    int32_t pred_r = 0, step_r = 0;
    uint32_t frame_idx = 0;
    uint32_t src_idx = 0;

    /* Block align 2 bytes: Byte 0 = Left (2 samples), Byte 1 = Right (2 samples) */
    while (frame_idx < num_frames) {
        uint8_t byte_l = src[src_idx++];
        uint8_t byte_r = src[src_idx++];

        /* Frame 0 */
        dst[frame_idx * 2 + 0] = SND_Vita_DecodeNibble(byte_l & 0x0F, &pred_l, &step_l);
        dst[frame_idx * 2 + 1] = SND_Vita_DecodeNibble(byte_r & 0x0F, &pred_r, &step_r);
        frame_idx++;
        if (frame_idx >= num_frames) break;

        /* Frame 1 */
        dst[frame_idx * 2 + 0] = SND_Vita_DecodeNibble((byte_l >> 4) & 0x0F, &pred_l, &step_l);
        dst[frame_idx * 2 + 1] = SND_Vita_DecodeNibble((byte_r >> 4) & 0x0F, &pred_r, &step_r);
        frame_idx++;
    }
}

/* ----------------------------------------------------------------------------
 * 7. Helper File Loader (VFS + Storage Fallback)
 * ---------------------------------------------------------------------------- */
static uint8_t *SND_LoadFileBuffer(const char *path, size_t *pOutSize) {
    if (!path) return NULL;

    /* 1. Try VFS load */
    size_t sz = 0;
    void *buf = CPA_LoadFile(path, &sz);
    if (buf && sz > 0) {
        if (pOutSize) *pOutSize = sz;
        return (uint8_t *)buf;
    }

    /* 2. Direct storage load fallback */
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;

    fseek(f, 0, SEEK_END);
    long fsz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (fsz <= 0) {
        fclose(f);
        return NULL;
    }

    uint8_t *data = (uint8_t *)CPA_malloc((size_t)fsz);
    if (!data) {
        fclose(f);
        return NULL;
    }

    size_t read_bytes = fread(data, 1, (size_t)fsz, f);
    fclose(f);

    if (read_bytes != (size_t)fsz) {
        CPA_free(data);
        return NULL;
    }

    if (pOutSize) *pOutSize = (size_t)fsz;
    return data;
}

/* ----------------------------------------------------------------------------
 * 8. Sound Bank (.OSB) Loader
 * ---------------------------------------------------------------------------- */

static int SND_ParseOSBData(const uint8_t *data, size_t size, SND_Vita_Bank *pBank, const char *name) {
    if (!data || size < 16 || !pBank) return -1;

    /* Verify SOSB header */
    uint32_t magic = *(const uint32_t *)(data + 0);
    if (magic != SND_MAGIC_SOSB) {
        OS_Vita_LogError("[SND] Invalid OSB magic 0x%08X (expected SOSB)", magic);
        return -2;
    }

    uint32_t sound_count = *(const uint32_t *)(data + 12);

    if (sound_count == 0 || sound_count > 2048) {
        OS_Vita_LogWarn("[SND] Unusual sound bank count: %u", sound_count);
    }

    size_t min_header = 16 + sound_count * sizeof(uint32_t);
    if (size < min_header) {
        OS_Vita_LogError("[SND] OSB file truncated before offset table");
        return -3;
    }

    const uint32_t *offsets = (const uint32_t *)(data + 16);

    pBank->sounds = (SND_Vita_Sample *)CPA_calloc(sound_count, sizeof(SND_Vita_Sample));
    if (!pBank->sounds) {
        OS_Vita_LogError("[SND] Failed to allocate sound descriptors for %u sounds", sound_count);
        return -4;
    }
    pBank->num_sounds = sound_count;
    strncpy(pBank->name, name ? name : "bank", sizeof(pBank->name) - 1);

    uint32_t loaded_count = 0;
    for (uint32_t i = 0; i < sound_count; i++) {
        uint32_t desc_off = offsets[i];
        if (desc_off + 56 > size) {
            continue;
        }

        const uint8_t *desc = data + desc_off;
        uint32_t sosp_magic = *(const uint32_t *)(desc + 0);
        uint32_t endp_magic = *(const uint32_t *)(desc + 52);

        if (sosp_magic != SND_MAGIC_SOSP || endp_magic != SND_MAGIC_ENDP) {
            continue;
        }

        /* Dreamcast AICA SA high address byte is stored in desc[4] */
        uint32_t sample_offset = ((uint32_t)desc[4] << 16) | (uint32_t)(*(const uint16_t *)(desc + 6));
        uint32_t sample_count  = *(const uint32_t *)(desc + 48);
        uint16_t pitch_reg     = *(const uint16_t *)(desc + 16);
        uint8_t  flag_byte     = desc[5];
        int      bLoop         = (flag_byte & 0x02) ? 1 : 0;

        if (sample_count == 0 || sample_offset >= size) {
            continue;
        }

        size_t adpcm_byte_len = (sample_count + 1) / 2;
        if (sample_offset + adpcm_byte_len > size) {
            /* Clamp to available file bytes */
            adpcm_byte_len = size - sample_offset;
            sample_count = (uint32_t)(adpcm_byte_len * 2);
        }

        /* Base sample rate calculation from Yamaha AICA OCT / FNS registers */
        uint32_t srate = 22050;
        if (pitch_reg != 0) {
            int oct = (int)((pitch_reg >> 11) & 0x0F);
            if (oct > 7) oct -= 16;
            uint32_t fns = pitch_reg & 0x3FF;
            float freq = 44100.0f * (1.0f + (float)fns / 1024.0f) * powf(2.0f, (float)oct);
            uint32_t calc_rate = (uint32_t)roundf(freq);
            if (calc_rate >= 4000 && calc_rate <= 96000) {
                srate = calc_rate;
            }
        }

        /* Allocate 16-bit PCM buffer and decode sample immediately for instant playback */
        int16_t *pcm = (int16_t *)CPA_malloc(sample_count * sizeof(int16_t));
        if (!pcm) continue;

        SND_Vita_DecodeAICA(data + sample_offset, pcm, sample_count);

        pBank->sounds[i].sound_id    = i;
        pBank->sounds[i].sample_rate = srate;
        pBank->sounds[i].num_samples = sample_count;
        pBank->sounds[i].pcm_data    = pcm;
        pBank->sounds[i].loop        = bLoop;
        pBank->sounds[i].loop_start  = 0;
        pBank->sounds[i].loop_end    = sample_count;
        pBank->sounds[i].pitch_reg   = pitch_reg;
        loaded_count++;
    }

    pBank->loaded = 1;
    OS_Vita_LogInfo("[SND] Bank '%s' loaded successfully: %u / %u sounds decoded",
                    pBank->name, loaded_count, sound_count);
    return 0;
}

static void SND_FreeBank(SND_Vita_Bank *pBank) {
    if (!pBank || !pBank->loaded) return;

    if (pBank->sounds) {
        for (uint32_t i = 0; i < pBank->num_sounds; i++) {
            if (pBank->sounds[i].pcm_data) {
                CPA_free(pBank->sounds[i].pcm_data);
                pBank->sounds[i].pcm_data = NULL;
            }
        }
        CPA_free(pBank->sounds);
        pBank->sounds = NULL;
    }
    pBank->num_sounds = 0;
    pBank->loaded = 0;
    pBank->name[0] = '\0';
}

int SND_Vita_LoadFixBank(void) {
    SND_Vita_Lock();
    if (g_fix_bank.loaded) {
        SND_Vita_Unlock();
        return 0;
    }

    size_t sz = 0;
    uint8_t *data = SND_LoadFileBuffer("DCDATA/SOUND/BANKS/FIX.OSB", &sz);
#if !defined(__vita__)
    if (!data) {
        data = SND_LoadFileBuffer("assets/dc/DCDATA/SOUND/BANKS/FIX.OSB", &sz);
    }
#endif
    if (!data) {
        data = SND_LoadFileBuffer("FIX.OSB", &sz);
    }

    if (!data) {
        OS_Vita_LogWarn("[SND] FIX.OSB not found on storage");
        SND_Vita_Unlock();
        return -1;
    }

    int res = SND_ParseOSBData(data, sz, &g_fix_bank, "FIX.OSB");
    CPA_free(data);
    SND_Vita_Unlock();
    return res;
}

int SND_Vita_LoadBank(const char *szBankPath) {
    if (!szBankPath) return -1;

    SND_Vita_Lock();
    SND_Vita_UnloadBank();

    size_t sz = 0;
    uint8_t *data = SND_LoadFileBuffer(szBankPath, &sz);
    if (!data) {
        char fallback[256];
        snprintf(fallback, sizeof(fallback), "DCDATA/SOUND/BANKS/%s", szBankPath);
        data = SND_LoadFileBuffer(fallback, &sz);
    }
#if !defined(__vita__)
    if (!data) {
        char fallback2[256];
        snprintf(fallback2, sizeof(fallback2), "assets/dc/DCDATA/SOUND/BANKS/%s", szBankPath);
        data = SND_LoadFileBuffer(fallback2, &sz);
    }
#endif

    if (!data) {
        OS_Vita_LogWarn("[SND] Bank '%s' not found on storage", szBankPath);
        SND_Vita_Unlock();
        return -1;
    }

    int res = SND_ParseOSBData(data, sz, &g_level_bank, szBankPath);
    CPA_free(data);
    SND_Vita_Unlock();
    return res;
}

void SND_Vita_UnloadBank(void) {
    SND_FreeBank(&g_level_bank);
}

void SND_Vita_UnloadFixBank(void) {
    SND_FreeBank(&g_fix_bank);
}

uint32_t SND_Vita_GetBankSoundCount(const SND_Vita_Bank *pBank) {
    return pBank ? pBank->num_sounds : 0;
}

const SND_Vita_Sample *SND_Vita_GetBankSound(const SND_Vita_Bank *pBank, uint32_t sound_id) {
    if (!pBank || !pBank->loaded || sound_id >= pBank->num_sounds) return NULL;
    return &pBank->sounds[sound_id];
}

/* ----------------------------------------------------------------------------
 * 9. Background Music (.DCZ / .WAV) Loader
 * ---------------------------------------------------------------------------- */

/* Parses standard RIFF/WAVE stream from raw buffer */
static int SND_ParseWAVStream(const uint8_t *raw, size_t size, SND_Vita_BGM *pBgm, const char *name) {
    if (!raw || size < 44 || !pBgm) return -1;

    uint32_t riff = *(const uint32_t *)(raw + 0);
    uint32_t wave = *(const uint32_t *)(raw + 8);
    if (riff != SND_MAGIC_RIFF || wave != SND_MAGIC_WAVE) {
        return -2;
    }

    size_t offset = 12;
    uint16_t audio_fmt = 0;
    uint16_t num_channels = 0;
    uint32_t sample_rate = 0;
    uint16_t bits_per_sample = 0;
    const uint8_t *pcm_src = NULL;
    size_t data_bytes = 0;

    while (offset + 8 <= size) {
        uint32_t chunk_id = *(const uint32_t *)(raw + offset);
        uint32_t chunk_sz = *(const uint32_t *)(raw + offset + 4);
        offset += 8;

        if (offset + chunk_sz > size) {
            chunk_sz = (uint32_t)(size - offset);
        }

        if (chunk_id == SND_MAGIC_FMT && chunk_sz >= 16) {
            audio_fmt       = *(const uint16_t *)(raw + offset + 0);
            num_channels    = *(const uint16_t *)(raw + offset + 2);
            sample_rate     = *(const uint32_t *)(raw + offset + 4);
            bits_per_sample = *(const uint16_t *)(raw + offset + 14);

            size_t next_dword = (offset + chunk_sz + 3) & ~3;
            if (next_dword + 8 <= size && *(const uint32_t *)(raw + next_dword) == SND_MAGIC_DATA) {
                offset = next_dword;
                continue;
            }
        } else if (chunk_id == SND_MAGIC_DATA) {
            pcm_src = raw + offset;
            data_bytes = chunk_sz;
            break;
        }

        offset += (chunk_sz + 1) & ~1; /* Word align */
    }

    /* Fallback search for 'data' chunk in first 2048 bytes if skipped */
    if (!pcm_src && audio_fmt != 0 && sample_rate != 0) {
        size_t scan_limit = (size < 2048) ? size : 2048;
        for (size_t s = 12; s + 8 <= scan_limit; s += 2) {
            if (*(const uint32_t *)(raw + s) == SND_MAGIC_DATA) {
                data_bytes = *(const uint32_t *)(raw + s + 4);
                pcm_src = raw + s + 8;
                break;
            }
        }
    }

    if (!pcm_src || data_bytes == 0 || sample_rate == 0 || num_channels == 0) {
        OS_Vita_LogError("[SND] Incomplete WAV file chunks in '%s'", name ? name : "unknown");
        return -3;
    }

    /* Format 1: Standard uncompressed PCM */
    if (audio_fmt == 1 && bits_per_sample == 16) {
        uint32_t total_samples = (uint32_t)(data_bytes / sizeof(int16_t));
        uint32_t num_frames = (num_channels == 2) ? (total_samples / 2) : total_samples;

        int16_t *buf = (int16_t *)CPA_malloc(num_frames * 2 * sizeof(int16_t));
        if (!buf) return -4;

        if (num_channels == 2) {
            memcpy(buf, pcm_src, num_frames * 2 * sizeof(int16_t));
        } else {
            const int16_t *mono_src = (const int16_t *)pcm_src;
            for (uint32_t i = 0; i < num_frames; i++) {
                buf[i * 2 + 0] = mono_src[i];
                buf[i * 2 + 1] = mono_src[i];
            }
        }

        pBgm->pcm_data      = buf;
        pBgm->num_frames    = num_frames;
        pBgm->channels      = 2;
        pBgm->sample_rate   = sample_rate;
        pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / g_nOutputSampleRate);
        return 0;
    }

    /* Format 0 or 17: Yamaha AICA 4-bit ADPCM */
    if (audio_fmt == 0 || audio_fmt == 17) {
        if (num_channels == 2) {
            uint32_t num_frames = (uint32_t)data_bytes;
            int16_t *buf = (int16_t *)CPA_malloc(num_frames * 2 * sizeof(int16_t));
            if (!buf) return -5;

            SND_Vita_DecodeAICA_Stereo(pcm_src, buf, num_frames);

            pBgm->pcm_data      = buf;
            pBgm->num_frames    = num_frames;
            pBgm->channels      = 2;
            pBgm->sample_rate   = sample_rate;
            pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / g_nOutputSampleRate);
            return 0;
        } else {
            uint32_t num_samples = (uint32_t)(data_bytes * 2);
            int16_t *mono = (int16_t *)CPA_malloc(num_samples * sizeof(int16_t));
            int16_t *stereo = (int16_t *)CPA_malloc(num_samples * 2 * sizeof(int16_t));
            if (!mono || !stereo) {
                if (mono) CPA_free(mono);
                if (stereo) CPA_free(stereo);
                return -6;
            }

            SND_Vita_DecodeAICA(pcm_src, mono, num_samples);
            for (uint32_t i = 0; i < num_samples; i++) {
                stereo[i * 2 + 0] = mono[i];
                stereo[i * 2 + 1] = mono[i];
            }
            CPA_free(mono);

            pBgm->pcm_data      = stereo;
            pBgm->num_frames    = num_samples;
            pBgm->channels      = 2;
            pBgm->sample_rate   = sample_rate;
            pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / g_nOutputSampleRate);
            return 0;
        }
    }

    OS_Vita_LogWarn("[SND] Unsupported WAV format %u (bps: %u) in '%s'",
                    audio_fmt, bits_per_sample, name ? name : "unknown");
    return -7;
}

static void SND_StopMusic_Locked(void) {
    g_bgm.active = 0;
    g_bgm.paused = 0;
    g_bgm.current_frame = 0;
    g_bgm.frame_frac = 0;
    if (g_bgm.pcm_data) {
        CPA_free(g_bgm.pcm_data);
        g_bgm.pcm_data = NULL;
    }
    g_bgm.num_frames = 0;
    g_bgm.track_name[0] = '\0';
}

static void SND_StopAllVoices_Locked(void) {
    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        g_voices[i].active = 0;
    }
}

int SND_Vita_PlayMusicSubtrack(const char *szMusicContainer, uint32_t subtrack_index, int bLoop) {
    if (!szMusicContainer || szMusicContainer[0] == '\0') {
        SND_Vita_StopMusic();
        return 0;
    }

    SND_Vita_Lock();
    SND_StopMusic_Locked();

    size_t sz = 0;
    uint8_t *raw = SND_LoadFileBuffer(szMusicContainer, &sz);
    if (!raw) {
        char fallback[256];
        snprintf(fallback, sizeof(fallback), "DCDATA/SOUND/MUSIC/%s", szMusicContainer);
        raw = SND_LoadFileBuffer(fallback, &sz);
    }
#if !defined(__vita__)
    if (!raw) {
        char fallback2[256];
        snprintf(fallback2, sizeof(fallback2), "assets/dc/DCDATA/SOUND/MUSIC/%s", szMusicContainer);
        raw = SND_LoadFileBuffer(fallback2, &sz);
    }
#endif

    if (!raw) {
        OS_Vita_LogWarn("[SND] BGM file '%s' not found", szMusicContainer);
        SND_Vita_Unlock();
        return -1;
    }

    int parse_res = -1;

    /* Check if raw is a direct RIFF/WAVE file */
    if (sz >= 12 && *(const uint32_t *)(raw + 0) == SND_MAGIC_RIFF) {
        parse_res = SND_ParseWAVStream(raw, sz, &g_bgm, szMusicContainer);
    }
    /* Check if raw is a DCZ container */
    else if (sz >= 16) {
        uint32_t num_files = *(const uint32_t *)(raw + 8);
        if (num_files > 0 && num_files < 512) {
            uint32_t chosen_idx = (subtrack_index < num_files) ? subtrack_index : 0;
            size_t entry_off = 16 + chosen_idx * 44;
            if (entry_off + 44 <= sz) {
                uint32_t sector = *(const uint32_t *)(raw + entry_off + 0);
                uint32_t file_sz = *(const uint32_t *)(raw + entry_off + 4);
                size_t byte_start = (size_t)sector * 2048;

                if (byte_start + file_sz <= sz && *(const uint32_t *)(raw + byte_start) == SND_MAGIC_RIFF) {
                    parse_res = SND_ParseWAVStream(raw + byte_start, file_sz, &g_bgm, szMusicContainer);
                }
            }

            /* Fallback to standard sector 1 or sector 3 if header entry didn't match */
            if (parse_res != 0) {
                size_t entry_start = 0x800;
                if (sz >= 0x1800 && *(const uint32_t *)(raw + 0x1800) == SND_MAGIC_RIFF) {
                    entry_start = 0x1800;
                }
                if (entry_start < sz && *(const uint32_t *)(raw + entry_start) == SND_MAGIC_RIFF) {
                    parse_res = SND_ParseWAVStream(raw + entry_start, sz - entry_start, &g_bgm, szMusicContainer);
                }
            }
        }
    }

    CPA_free(raw);

    if (parse_res == 0) {
        g_bgm.active        = 1;
        g_bgm.paused        = 0;
        g_bgm.loop          = bLoop;
        g_bgm.volume        = 1.0f;
        g_bgm.fade_target   = 1.0f;
        g_bgm.fade_speed    = 0.0f;
        g_bgm.fading        = 0;
        g_bgm.pan           = 0.0f;
        g_bgm.current_frame = 0;
        g_bgm.frame_frac    = 0;
        strncpy(g_bgm.track_name, szMusicContainer, sizeof(g_bgm.track_name) - 1);
        OS_Vita_LogInfo("[SND] Started BGM playback: '%s' (%u frames, loop=%d)",
                        szMusicContainer, g_bgm.num_frames, bLoop);
        SND_Vita_Unlock();
        return 0;
    }

    OS_Vita_LogError("[SND] Failed to parse BGM track '%s' (err: %d)", szMusicContainer, parse_res);
    SND_Vita_Unlock();
    return -2;
}

int SND_Vita_PlayMusic(const char *szMusicTrack, int bLoop) {
    return SND_Vita_PlayMusicSubtrack(szMusicTrack, 0, bLoop);
}

void SND_Vita_StopMusic(void) {
    SND_Vita_Lock();
    SND_StopMusic_Locked();
    SND_Vita_Unlock();
}

void SND_Vita_PauseMusic(void) {
    SND_Vita_Lock();
    g_bgm.paused = 1;
    SND_Vita_Unlock();
}

void SND_Vita_ResumeMusic(void) {
    SND_Vita_Lock();
    g_bgm.paused = 0;
    SND_Vita_Unlock();
}

void SND_Vita_FadeBGM(float fTargetVolume, float fFadeDuration) {
    SND_Vita_Lock();
    float target = (fTargetVolume < 0.0f) ? 0.0f : ((fTargetVolume > 1.0f) ? 1.0f : fTargetVolume);
    if (fFadeDuration <= 0.001f) {
        g_bgm.volume = target;
        g_bgm.fade_target = target;
        g_bgm.fade_speed = 0.0f;
        g_bgm.fading = 0;
    } else {
        g_bgm.fade_target = target;
        g_bgm.fade_speed = (target - g_bgm.volume) / fFadeDuration;
        g_bgm.fading = 1;
    }
    SND_Vita_Unlock();
}

void SND_Vita_TickBGM(float fDeltaTime) {
    if (fDeltaTime <= 0.0f) return;
    SND_Vita_Lock();
    if (g_bgm.active && g_bgm.fading) {
        g_bgm.volume += g_bgm.fade_speed * fDeltaTime;
        if (g_bgm.fade_speed < 0.0f) {
            if (g_bgm.volume <= g_bgm.fade_target) {
                g_bgm.volume = g_bgm.fade_target;
                g_bgm.fading = 0;
            }
        } else {
            if (g_bgm.volume >= g_bgm.fade_target) {
                g_bgm.volume = g_bgm.fade_target;
                g_bgm.fading = 0;
            }
        }
    }
    SND_Vita_Unlock();
}

int SND_Vita_GetBGMStatus(void) {
    SND_Vita_Lock();
    int status = 0;
    if (g_bgm.active) {
        status = g_bgm.paused ? -1 : 1;
    }
    SND_Vita_Unlock();
    return status;
}

/* ----------------------------------------------------------------------------
 * 10. Sound Effect (SFX) Playback Control
 * ---------------------------------------------------------------------------- */

const SND_Vita_Sample *SND_Vita_GetSoundDescriptor(uint32_t ulSoundId) {
    SND_Vita_Lock();
    const SND_Vita_Sample *pSample = NULL;
    if (g_level_bank.loaded && ulSoundId < g_level_bank.num_sounds &&
        g_level_bank.sounds[ulSoundId].pcm_data) {
        pSample = &g_level_bank.sounds[ulSoundId];
    } else if (g_fix_bank.loaded && ulSoundId < g_fix_bank.num_sounds &&
               g_fix_bank.sounds[ulSoundId].pcm_data) {
        pSample = &g_fix_bank.sounds[ulSoundId];
    }
    SND_Vita_Unlock();
    return pSample;
}

const SND_Vita_Sample *SND_Vita_GetBankSoundDescriptor(int bLevelBank, uint32_t ulSoundId) {
    SND_Vita_Lock();
    const SND_Vita_Sample *pSample = NULL;
    const SND_Vita_Bank *bank = bLevelBank ? &g_level_bank : &g_fix_bank;
    if (bank->loaded && ulSoundId < bank->num_sounds && bank->sounds[ulSoundId].pcm_data) {
        pSample = &bank->sounds[ulSoundId];
    }
    SND_Vita_Unlock();
    return pSample;
}

int SND_Vita_PlaySoundEx(uint32_t ulSoundId, float fVolume, float fPan, float fPitch, int bLoop) {
    SND_Vita_Lock();

    /* 1. Locate sample descriptor in loaded banks */
    const SND_Vita_Sample *pSample = NULL;
    if (g_level_bank.loaded && ulSoundId < g_level_bank.num_sounds &&
        g_level_bank.sounds[ulSoundId].pcm_data) {
        pSample = &g_level_bank.sounds[ulSoundId];
    } else if (g_fix_bank.loaded && ulSoundId < g_fix_bank.num_sounds &&
               g_fix_bank.sounds[ulSoundId].pcm_data) {
        pSample = &g_fix_bank.sounds[ulSoundId];
    }

    if (!pSample || !pSample->pcm_data || pSample->num_samples == 0) {
        SND_Vita_Unlock();
        return -1;
    }

    /* 2. Find an available voice slot (or steal the lowest volume voice) */
    int chosen_slot = -1;
    float lowest_vol = 999.0f;
    int lowest_slot = 0;

    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        if (!g_voices[i].active) {
            chosen_slot = i;
            break;
        }
        if (g_voices[i].volume < lowest_vol) {
            lowest_vol = g_voices[i].volume;
            lowest_slot = i;
        }
    }

    if (chosen_slot < 0) {
        chosen_slot = lowest_slot; /* Voice stealing */
    }

    /* 3. Assign voice parameters */
    SND_Vita_Voice *v = &g_voices[chosen_slot];
    v->active           = 0;
    v->sound_id         = ulSoundId;
    v->pcm_data         = pSample->pcm_data;
    v->num_samples      = pSample->num_samples;
    v->sample_rate      = pSample->sample_rate ? pSample->sample_rate : 22050;
    v->sample_pos       = 0;
    v->sample_pos_frac  = 0;
    float pitch         = (fPitch <= 0.05f) ? 1.0f : fPitch;
    v->pitch            = pitch;
    v->rate_step        = (uint32_t)(((uint64_t)(v->sample_rate * pitch) << 16) / g_nOutputSampleRate);
    v->volume           = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
    v->pan              = (fPan < -1.0f) ? -1.0f : ((fPan > 1.0f) ? 1.0f : fPan);
    v->loop             = bLoop ? 1 : pSample->loop;
    v->loop_start       = pSample->loop_start;
    v->loop_end         = (pSample->loop_end > 0) ? pSample->loop_end : pSample->num_samples;
    v->active           = 1;

    SND_Vita_Unlock();
    return chosen_slot;
}

int SND_Vita_PlaySound(uint32_t ulSoundId, float fVolume, float fPan) {
    return SND_Vita_PlaySoundEx(ulSoundId, fVolume, fPan, 1.0f, 0);
}

void SND_Vita_SetVoicePan(int voice_index, float fPan) {
    if (voice_index >= 0 && voice_index < SND_VITA_NUM_VOICES) {
        SND_Vita_Lock();
        if (g_voices[voice_index].active) {
            g_voices[voice_index].pan = (fPan < -1.0f) ? -1.0f : ((fPan > 1.0f) ? 1.0f : fPan);
        }
        SND_Vita_Unlock();
    }
}

void SND_Vita_SetVoiceVolume(int voice_index, float fVolume) {
    if (voice_index >= 0 && voice_index < SND_VITA_NUM_VOICES) {
        SND_Vita_Lock();
        if (g_voices[voice_index].active) {
            g_voices[voice_index].volume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
        }
        SND_Vita_Unlock();
    }
}

void SND_Vita_SetVoicePitch(int voice_index, float fPitch) {
    if (voice_index >= 0 && voice_index < SND_VITA_NUM_VOICES) {
        SND_Vita_Lock();
        if (g_voices[voice_index].active) {
            float pitch = (fPitch <= 0.05f) ? 0.05f : fPitch;
            g_voices[voice_index].pitch = pitch;
            uint32_t srate = g_voices[voice_index].sample_rate ? g_voices[voice_index].sample_rate : 22050;
            g_voices[voice_index].rate_step = (uint32_t)(((uint64_t)(srate * pitch) << 16) / g_nOutputSampleRate);
        }
        SND_Vita_Unlock();
    }
}

int SND_Vita_SendCommand(uint8_t uCmd, uint8_t uHandle, int32_t lParam1, int32_t lParam2) {
    switch (uCmd) {
        case 0x11: /* Key-On / Trigger */
            return SND_Vita_PlaySoundEx((uint32_t)lParam1, 1.0f, 0.0f, 1.0f, lParam2 ? 1 : 0);
        case 0x12: /* Key-Off / Stop */
            SND_Vita_StopVoice((int)uHandle);
            return 0;
        case 0x15: { /* Pan update */
            float fPan = 0.0f;
            if (lParam1 >= -128 && lParam1 <= 127) {
                fPan = (float)lParam1 / 127.0f;
            } else {
                union { int32_t i; float f; } u;
                u.i = lParam1;
                fPan = u.f;
            }
            SND_Vita_SetVoicePan((int)uHandle, fPan);
            return 0;
        }
        case 0x16: { /* Volume update */
            float fVol = 1.0f;
            if (lParam1 >= 0 && lParam1 <= 127) {
                fVol = (float)lParam1 / 127.0f;
            } else if (lParam1 >= 0 && lParam1 <= 255) {
                fVol = (float)lParam1 / 255.0f;
            } else {
                union { int32_t i; float f; } u;
                u.i = lParam1;
                fVol = u.f;
            }
            SND_Vita_SetVoiceVolume((int)uHandle, fVol);
            return 0;
        }
        case 0x18: { /* Pitch update */
            float fPitch = 1.0f;
            if (lParam1 == 0) {
                fPitch = 1.0f;
            } else if (lParam1 >= -1200 && lParam1 <= 1200) {
                fPitch = powf(2.0f, (float)lParam1 / 1200.0f);
            } else {
                union { int32_t i; float f; } u;
                u.i = lParam1;
                if (u.f > 0.05f && u.f < 10.0f) fPitch = u.f;
            }
            SND_Vita_SetVoicePitch((int)uHandle, fPitch);
            return 0;
        }
        default:
            return -2;
    }
}

int SND_Vita_IsVoicePlaying(int voice_index) {
    if (voice_index < 0 || voice_index >= SND_VITA_NUM_VOICES) return 0;
    SND_Vita_Lock();
    int active = g_voices[voice_index].active;
    SND_Vita_Unlock();
    return active;
}

int SND_Vita_GetActiveVoiceCount(void) {
    SND_Vita_Lock();
    int count = 0;
    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        if (g_voices[i].active) count++;
    }
    SND_Vita_Unlock();
    return count;
}

void SND_Vita_StopVoice(int voice_index) {
    if (voice_index >= 0 && voice_index < SND_VITA_NUM_VOICES) {
        SND_Vita_Lock();
        g_voices[voice_index].active = 0;
        SND_Vita_Unlock();
    }
}

void SND_Vita_StopAllVoices(void) {
    SND_Vita_Lock();
    SND_StopAllVoices_Locked();
    SND_Vita_Unlock();
}

void SND_Vita_GetVoiceStatus(int voice_index, int *pActive, uint32_t *pPos, uint32_t *pTotal) {
    if (voice_index < 0 || voice_index >= SND_VITA_NUM_VOICES) {
        if (pActive) *pActive = 0;
        if (pPos) *pPos = 0;
        if (pTotal) *pTotal = 0;
        return;
    }

    SND_Vita_Lock();
    if (pActive) *pActive = g_voices[voice_index].active;
    if (pPos)    *pPos    = g_voices[voice_index].sample_pos;
    if (pTotal)  *pTotal  = g_voices[voice_index].num_samples;
    SND_Vita_Unlock();
}

/* ----------------------------------------------------------------------------
 * 11. Volume Controls
 * ---------------------------------------------------------------------------- */

void SND_Vita_SetMasterVolume(float fVolume) {
    SND_Vita_Lock();
    g_fMasterVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
    SND_Vita_Unlock();
}

void SND_Vita_SetBGMVolume(float fVolume) {
    SND_Vita_Lock();
    g_fBGMVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
    SND_Vita_Unlock();
}

void SND_Vita_SetSFXVolume(float fVolume) {
    SND_Vita_Lock();
    g_fSFXVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
    SND_Vita_Unlock();
}

float SND_Vita_GetMasterVolume(void) {
    return g_fMasterVolume;
}

float SND_Vita_GetBGMVolume(void) {
    return g_fBGMVolume;
}

float SND_Vita_GetBGMChannelVolume(void) {
    SND_Vita_Lock();
    float vol = g_bgm.volume;
    SND_Vita_Unlock();
    return vol;
}

float SND_Vita_GetSFXVolume(void) {
    return g_fSFXVolume;
}

/* ----------------------------------------------------------------------------
 * 12. Multi-Channel Mixer Core (with NEON SIMD)
 * ---------------------------------------------------------------------------- */

void SND_Vita_MixStereoBuffer(int16_t *out_samples, uint32_t num_frames) {
    if (!out_samples || num_frames == 0) return;

    /* 32-bit accumulation buffers */
    int32_t mix_l[1024];
    int32_t mix_r[1024];

    uint32_t frames_to_process = (num_frames > 1024) ? 1024 : num_frames;

#if defined(__ARM_NEON) || defined(__ARM_NEON__)
    /* Fast SIMD zeroing of accumulation buffers */
    int32x4_t vzero = vdupq_n_s32(0);
    for (uint32_t i = 0; i < frames_to_process; i += 4) {
        vst1q_s32(&mix_l[i], vzero);
        vst1q_s32(&mix_r[i], vzero);
    }
#else
    memset(mix_l, 0, frames_to_process * sizeof(int32_t));
    memset(mix_r, 0, frames_to_process * sizeof(int32_t));
#endif

    SND_Vita_Lock();

    float master_vol = g_fMasterVolume;

    /* 1. Mix Streaming BGM Channel */
    if (g_bgm.active && !g_bgm.paused && g_bgm.pcm_data && g_bgm.num_frames > 0) {
        float effective_bgm_vol = g_bgm.volume * g_fBGMVolume * master_vol;
        float gain_l = 0.0f, gain_r = 0.0f;
        SND_CalculatePanGains(g_bgm.pan, effective_bgm_vol, &gain_l, &gain_r);

        /* Fixed-point 1.15 multipliers for zero-latency integer mixing */
        int32_t igain_l = (int32_t)(gain_l * 32768.0f);
        int32_t igain_r = (int32_t)(gain_r * 32768.0f);

        const int16_t *bgm_pcm = g_bgm.pcm_data;
        uint32_t total_frames = g_bgm.num_frames;
        uint32_t curr_frame = g_bgm.current_frame;
        uint32_t frac = g_bgm.frame_frac;
        uint32_t step = g_bgm.rate_step;

        for (uint32_t i = 0; i < frames_to_process; i++) {
            if (curr_frame >= total_frames) {
                if (g_bgm.loop) {
                    curr_frame %= total_frames;
                } else {
                    g_bgm.active = 0;
                    break;
                }
            }

            uint32_t next_frame = curr_frame + 1;
            if (next_frame >= total_frames) {
                next_frame = g_bgm.loop ? 0 : curr_frame;
            }

            /* Linear interpolation between frame samples */
            int32_t sl0 = bgm_pcm[curr_frame * 2 + 0];
            int32_t sr0 = bgm_pcm[curr_frame * 2 + 1];
            int32_t sl1 = bgm_pcm[next_frame * 2 + 0];
            int32_t sr1 = bgm_pcm[next_frame * 2 + 1];

            int32_t interp_l = sl0 + (((sl1 - sl0) * (int32_t)(frac >> 8)) >> 8);
            int32_t interp_r = sr0 + (((sr1 - sr0) * (int32_t)(frac >> 8)) >> 8);

            mix_l[i] += (interp_l * igain_l) >> 15;
            mix_r[i] += (interp_r * igain_r) >> 15;

            frac += step;
            curr_frame += (frac >> 16);
            frac &= 0xFFFF;
        }

        g_bgm.current_frame = curr_frame;
        g_bgm.frame_frac    = frac;
    }

    /* 2. Mix 16 Active SFX Voices */
    float sfx_bus_vol = g_fSFXVolume * master_vol;

    for (int v = 0; v < SND_VITA_NUM_VOICES; v++) {
        SND_Vita_Voice *voice = &g_voices[v];
        if (!voice->active || !voice->pcm_data || voice->num_samples == 0) {
            continue;
        }

        float effective_vol = voice->volume * sfx_bus_vol;
        float gain_l = 0.0f, gain_r = 0.0f;
        SND_CalculatePanGains(voice->pan, effective_vol, &gain_l, &gain_r);

        int32_t igain_l = (int32_t)(gain_l * 32768.0f);
        int32_t igain_r = (int32_t)(gain_r * 32768.0f);

        const int16_t *pcm = voice->pcm_data;
        uint32_t num_s = voice->num_samples;
        uint32_t loop_end = (voice->loop_end > 0 && voice->loop_end <= num_s) ? voice->loop_end : num_s;
        uint32_t loop_start = voice->loop_start;
        uint32_t pos = voice->sample_pos;
        uint32_t frac = voice->sample_pos_frac;
        uint32_t step = voice->rate_step;

        /* Panning Fast Paths */
        if (igain_l == igain_r) {
            /* Balanced center pan */
            for (uint32_t i = 0; i < frames_to_process; i++) {
                if (pos >= loop_end) {
                    if (voice->loop) {
                        pos = loop_start + ((pos - loop_end) % (loop_end - loop_start));
                    } else {
                        voice->active = 0;
                        break;
                    }
                }

                uint32_t next_pos = pos + 1;
                if (next_pos >= loop_end) {
                    next_pos = voice->loop ? loop_start : pos;
                }

                int32_t s0 = pcm[pos];
                int32_t s1 = pcm[next_pos];
                int32_t interp = s0 + (((s1 - s0) * (int32_t)(frac >> 8)) >> 8);
                int32_t out = (interp * igain_l) >> 15;

                mix_l[i] += out;
                mix_r[i] += out;

                frac += step;
                pos += (frac >> 16);
                frac &= 0xFFFF;
            }
        } else if (igain_r == 0) {
            /* Full Left pan */
            for (uint32_t i = 0; i < frames_to_process; i++) {
                if (pos >= loop_end) {
                    if (voice->loop) {
                        pos = loop_start + ((pos - loop_end) % (loop_end - loop_start));
                    } else {
                        voice->active = 0;
                        break;
                    }
                }

                uint32_t next_pos = pos + 1;
                if (next_pos >= loop_end) {
                    next_pos = voice->loop ? loop_start : pos;
                }

                int32_t s0 = pcm[pos];
                int32_t s1 = pcm[next_pos];
                int32_t interp = s0 + (((s1 - s0) * (int32_t)(frac >> 8)) >> 8);

                mix_l[i] += (interp * igain_l) >> 15;

                frac += step;
                pos += (frac >> 16);
                frac &= 0xFFFF;
            }
        } else if (igain_l == 0) {
            /* Full Right pan */
            for (uint32_t i = 0; i < frames_to_process; i++) {
                if (pos >= loop_end) {
                    if (voice->loop) {
                        pos = loop_start + ((pos - loop_end) % (loop_end - loop_start));
                    } else {
                        voice->active = 0;
                        break;
                    }
                }

                uint32_t next_pos = pos + 1;
                if (next_pos >= loop_end) {
                    next_pos = voice->loop ? loop_start : pos;
                }

                int32_t s0 = pcm[pos];
                int32_t s1 = pcm[next_pos];
                int32_t interp = s0 + (((s1 - s0) * (int32_t)(frac >> 8)) >> 8);

                mix_r[i] += (interp * igain_r) >> 15;

                frac += step;
                pos += (frac >> 16);
                frac &= 0xFFFF;
            }
        } else {
            /* Intermediate stereo panning */
            for (uint32_t i = 0; i < frames_to_process; i++) {
                if (pos >= loop_end) {
                    if (voice->loop) {
                        pos = loop_start + ((pos - loop_end) % (loop_end - loop_start));
                    } else {
                        voice->active = 0;
                        break;
                    }
                }

                uint32_t next_pos = pos + 1;
                if (next_pos >= loop_end) {
                    next_pos = voice->loop ? loop_start : pos;
                }

                int32_t s0 = pcm[pos];
                int32_t s1 = pcm[next_pos];
                int32_t interp = s0 + (((s1 - s0) * (int32_t)(frac >> 8)) >> 8);

                mix_l[i] += (interp * igain_l) >> 15;
                mix_r[i] += (interp * igain_r) >> 15;

                frac += step;
                pos += (frac >> 16);
                frac &= 0xFFFF;
            }
        }

        voice->sample_pos       = pos;
        voice->sample_pos_frac  = frac;
    }

    SND_Vita_Unlock();

    /* 3. Saturate & Interleave accumulated 32-bit samples into 16-bit stereo buffer */
#if defined(__ARM_NEON) || defined(__ARM_NEON__)
    uint32_t i = 0;
    for (; i + 4 <= frames_to_process; i += 4) {
        int32x4_t vl = vld1q_s32(&mix_l[i]);
        int32x4_t vr = vld1q_s32(&mix_r[i]);

        /* Saturating narrow from 32-bit signed to 16-bit signed [-32768, 32767] */
        int16x4_t ql = vqmovn_s32(vl);
        int16x4_t qr = vqmovn_s32(vr);

        /* Interleave Left and Right channels: [L0, R0, L1, R1, ...] */
        int16x4x2_t interleaved = vzip_s16(ql, qr);
        vst1_s16(&out_samples[i * 2 + 0], interleaved.val[0]);
        vst1_s16(&out_samples[i * 2 + 4], interleaved.val[1]);
    }
    for (; i < frames_to_process; i++) {
        int32_t l = mix_l[i];
        int32_t r = mix_r[i];

        if (l > 32767) l = 32767;
        else if (l < -32768) l = -32768;

        if (r > 32767) r = 32767;
        else if (r < -32768) r = -32768;

        out_samples[i * 2 + 0] = (int16_t)l;
        out_samples[i * 2 + 1] = (int16_t)r;
    }
#else
    for (uint32_t i = 0; i < frames_to_process; i++) {
        int32_t l = mix_l[i];
        int32_t r = mix_r[i];

        if (l > 32767) l = 32767;
        else if (l < -32768) l = -32768;

        if (r > 32767) r = 32767;
        else if (r < -32768) r = -32768;

        out_samples[i * 2 + 0] = (int16_t)l;
        out_samples[i * 2 + 1] = (int16_t)r;
    }
#endif
}

/* ----------------------------------------------------------------------------
 * 13. Dedicated PS Vita Audio Thread & Subsystem Lifecycle
 * ---------------------------------------------------------------------------- */

#if defined(__vita__)
int SND_Vita_AudioThreadFunc(unsigned int args, void *argp) {
    (void)args;
    (void)argp;

    /* Initialize hardware stereo audio output port:
     * Primary: SCE_AUDIO_OUT_PORT_TYPE_MAIN @ 48.0 kHz
     * Fallback: SCE_AUDIO_OUT_PORT_TYPE_BGM  @ 44.1 kHz */
    int nAudioPort = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN, 1024, SND_VITA_RATE_48000, SCE_AUDIO_OUT_MODE_STEREO);
    if (nAudioPort >= 0) {
        SND_Vita_SetOutputSampleRate(SND_VITA_RATE_48000);
        OS_Vita_LogInfo("[SND] Opened MAIN audio port %d (1024 frames @ 48.0 kHz stereo)", nAudioPort);
    } else {
        nAudioPort = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_BGM, 1024, SND_VITA_RATE_44100, SCE_AUDIO_OUT_MODE_STEREO);
        if (nAudioPort >= 0) {
            SND_Vita_SetOutputSampleRate(SND_VITA_RATE_44100);
            OS_Vita_LogInfo("[SND] Opened fallback BGM audio port %d (1024 frames @ 44.1 kHz stereo)", nAudioPort);
        }
    }

    if (nAudioPort < 0) {
        OS_Vita_LogError("[SND] Failed to open any Vita audio output port: 0x%08X", nAudioPort);
        while (!g_bAudioShutdown) {
            sceKernelDelayThread(10000);
        }
        sceKernelExitThread(0);
        return 0;
    }

    int16_t out_samples[SND_VITA_BUFFER_SAMPLES];

    while (!g_bAudioShutdown) {
        /* Mix active voices and BGM into stereo frame buffer */
        SND_Vita_MixStereoBuffer(out_samples, SND_VITA_FRAME_SAMPLES);

        /* sceAudioOutOutput blocks synchronously until buffer DMA starts */
        int res = sceAudioOutOutput(nAudioPort, out_samples);
        if (res < 0) {
            /* If device is suspended or busy, yield briefly */
            sceKernelDelayThread(10000); /* 10 ms */
        }
    }

    sceAudioOutReleasePort(nAudioPort);
    OS_Vita_LogInfo("[SND] Audio thread exited cleanly");
    sceKernelExitThread(0);
    return 0;
}
#else
int SND_Vita_AudioThreadFunc(uint32_t args, void *argp) {
    (void)args;
    (void)argp;
    return 0;
}
#endif

int SND_Vita_Init(void) {
    if (g_bAudioInitialized) {
        return 0;
    }

    OS_Vita_LogInfo("[SND] Initializing Yamaha AICA audio streamer subsystem...");

#if defined(__vita__)
    g_hAudioMutex = sceKernelCreateMutex("Rayman2_AudioMutex", 0, 0, NULL);
    if (g_hAudioMutex < 0) {
        OS_Vita_LogError("[SND] Failed to create audio mutex: 0x%08X", g_hAudioMutex);
        return -1;
    }
#endif

    SND_Vita_Lock();

    /* Reset voices and channels */
    memset(g_voices, 0, sizeof(g_voices));
    memset(&g_bgm, 0, sizeof(g_bgm));
    memset(&g_fix_bank, 0, sizeof(g_fix_bank));
    memset(&g_level_bank, 0, sizeof(g_level_bank));

    g_nOutputSampleRate = SND_VITA_OUTPUT_RATE;
    g_fMasterVolume = 1.0f;
    g_fBGMVolume    = 1.0f;
    g_fSFXVolume    = 1.0f;
    g_bAudioShutdown = 0;

    SND_Vita_Unlock();

#if defined(__vita__)
    g_hAudioThread = sceKernelCreateThread("Rayman2_AudioThread",
                                           SND_Vita_AudioThreadFunc,
                                           SND_VITA_THREAD_PRIORITY,
                                           SND_VITA_THREAD_STACK_SIZE,
                                           0, 0, NULL);
    if (g_hAudioThread >= 0) {
        sceKernelStartThread(g_hAudioThread, 0, NULL);
        OS_Vita_LogInfo("[SND] Spawned audio thread 'Rayman2_AudioThread' (UID: 0x%08X, prio: 0x%X)",
                        g_hAudioThread, SND_VITA_THREAD_PRIORITY);
    } else {
        OS_Vita_LogError("[SND] Failed to spawn audio thread: 0x%08X", g_hAudioThread);
        return -1;
    }
#endif

    g_bAudioInitialized = 1;
    OS_Vita_LogInfo("[SND] Audio subsystem successfully initialized");
    return 0;
}

void SND_Vita_Shutdown(void) {
    if (!g_bAudioInitialized) return;

    OS_Vita_LogInfo("[SND] Shutting down audio subsystem...");
    g_bAudioShutdown = 1;

#if defined(__vita__)
    if (g_hAudioThread >= 0) {
        sceKernelWaitThreadEnd(g_hAudioThread, NULL, NULL);
        sceKernelDeleteThread(g_hAudioThread);
        g_hAudioThread = -1;
    }
#endif

    SND_Vita_Lock();

    /* Stop music and voices */
    SND_StopMusic_Locked();
    SND_StopAllVoices_Locked();

    /* Unload banks */
    SND_Vita_UnloadBank();
    SND_Vita_UnloadFixBank();

    SND_Vita_Unlock();

#if defined(__vita__)
    if (g_hAudioMutex >= 0) {
        sceKernelDeleteMutex(g_hAudioMutex);
        g_hAudioMutex = -1;
    }
#endif

    g_bAudioInitialized = 0;
    OS_Vita_LogInfo("[SND] Audio subsystem shut down completed");
}

int SND_Vita_IsInitialized(void) {
    return g_bAudioInitialized;
}
