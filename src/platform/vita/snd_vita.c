/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: snd_vita.c
 *
 * PlayStation Vita Audio Subsystem & Yamaha AICA ADPCM Decoder
 * - Yamaha AICA 4-bit ADPCM Decoder (89-entry step table, 16-entry index table)
 * - Multi-Channel Audio Mixer: 1 Streaming BGM Channel + 16 SFX Voices
 * - Dedicated Real-Time Audio Worker Thread (sceAudioOut @ 44.1 kHz 16-bit Stereo)
 * - Sound Bank (.OSB) Loader for FIX.OSB & Level Sound Banks
 * - Streaming Background Music Loader (.DCZ containers and .WAV RIFF streams)
 * - Per-channel Volume, Stereo Panning, and Clamped Master Volume Mixing
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

#if defined(__vita__)
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/clib.h>
#include <psp2/audioout.h>
#endif

/* ----------------------------------------------------------------------------
 * 1. Yamaha AICA ADPCM Adaptation & Quantization Tables
 * ----------------------------------------------------------------------------
 * Standard Yamaha AICA / IMA-ADPCM step size quantization table (89 entries)
 * and 16-entry step index adjustment table.
 */
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
 * 2. Audio Subsystem Global State
 * ---------------------------------------------------------------------------- */
static volatile int         g_bAudioInitialized = 0;
static volatile int         g_bAudioShutdown    = 0;

#if defined(__vita__)
static SceUID               g_hAudioThread      = -1;
#endif

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
 * 3. Yamaha AICA ADPCM Decoder Implementation
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
 * 4. Helper File Loader (VFS + Storage Fallback)
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

#if !defined(__vita__)
    /* 2. Direct storage load for host unit tests */
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
#else
    return NULL;
#endif
}

/* ----------------------------------------------------------------------------
 * 5. Sound Bank (.OSB) Loader
 * ---------------------------------------------------------------------------- */

static int SND_ParseOSBData(const uint8_t *data, size_t size, SND_Vita_Bank *pBank, const char *name) {
    if (!data || size < 16 || !pBank) return -1;

    /* Verify SOSB header */
    uint32_t magic = *(const uint32_t *)(data + 0);
    if (magic != SND_MAGIC_SOSB) {
        OS_Vita_LogError("[SND] Invalid OSB magic 0x%08X (expected SOSB)", magic);
        return -2;
    }

    uint32_t total_size = *(const uint32_t *)(data + 8);
    uint32_t sound_count = *(const uint32_t *)(data + 12);
    (void)total_size;

    if (sound_count == 0 || sound_count > 1024) {
        OS_Vita_LogWarn("[SND] Unusual sound bank count: %u", sound_count);
    }

    size_t min_header = 16 + sound_count * sizeof(uint32_t);
    if (size < min_header) {
        OS_Vita_LogError("[SND] OSB file truncated before offset table");
        return -3;
    }

    const uint32_t *offsets = (const uint32_t *)(data + 16);

    pBank->sounds = (SND_Vita_Sample *)calloc(sound_count, sizeof(SND_Vita_Sample));
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

        uint32_t sample_offset = *(const uint32_t *)(desc + 6);
        uint32_t sample_count  = *(const uint32_t *)(desc + 48);
        uint16_t pitch_reg     = *(const uint16_t *)(desc + 16);

        if (sample_count == 0 || sample_offset >= size) {
            continue;
        }

        size_t adpcm_byte_len = (sample_count + 1) / 2;
        if (sample_offset + adpcm_byte_len > size) {
            /* Clamp to available file bytes */
            adpcm_byte_len = size - sample_offset;
            sample_count = (uint32_t)(adpcm_byte_len * 2);
        }

        /* Base sample rate calculation from Yamaha AICA octave/frequency register */
        uint32_t srate = 22050;
        if (pitch_reg == 0x7800) {
            srate = 24000;
        } else if (pitch_reg == 0x7000) {
            srate = 22050;
        }

        /* Allocate 16-bit PCM buffer and decode sample immediately */
        int16_t *pcm = (int16_t *)malloc(sample_count * sizeof(int16_t));
        if (!pcm) continue;

        SND_Vita_DecodeAICA(data + sample_offset, pcm, sample_count);

        pBank->sounds[i].sound_id    = i;
        pBank->sounds[i].sample_rate = srate;
        pBank->sounds[i].num_samples = sample_count;
        pBank->sounds[i].pcm_data    = pcm;
        pBank->sounds[i].loop        = 0;
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
                free(pBank->sounds[i].pcm_data);
                pBank->sounds[i].pcm_data = NULL;
            }
        }
        free(pBank->sounds);
        pBank->sounds = NULL;
    }
    pBank->num_sounds = 0;
    pBank->loaded = 0;
    pBank->name[0] = '\0';
}

int SND_Vita_LoadFixBank(void) {
    if (g_fix_bank.loaded) {
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
        return -1;
    }

    int res = SND_ParseOSBData(data, sz, &g_fix_bank, "FIX.OSB");
    CPA_free(data);
    return res;
}

int SND_Vita_LoadBank(const char *szBankPath) {
    if (!szBankPath) return -1;

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
        return -1;
    }

    int res = SND_ParseOSBData(data, sz, &g_level_bank, szBankPath);
    CPA_free(data);
    return res;
}

void SND_Vita_UnloadBank(void) {
    SND_FreeBank(&g_level_bank);
}

void SND_Vita_UnloadFixBank(void) {
    SND_FreeBank(&g_fix_bank);
}

/* ----------------------------------------------------------------------------
 * 6. Background Music (.DCZ / .WAV) Loader
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

            /* Check both 4-byte and 2-byte alignment for next chunk */
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

    /* Fallback search for 'data' chunk in first 2048 bytes if missed */
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

        int16_t *buf = (int16_t *)malloc(num_frames * 2 * sizeof(int16_t));
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
        pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / SND_VITA_OUTPUT_RATE);
        return 0;
    }

    /* Format 0 or 17: Yamaha AICA 4-bit ADPCM */
    if (audio_fmt == 0 || audio_fmt == 17) {
        if (num_channels == 2) {
            uint32_t num_frames = (uint32_t)data_bytes; /* 2 samples per byte per channel -> frames = bytes */
            int16_t *buf = (int16_t *)malloc(num_frames * 2 * sizeof(int16_t));
            if (!buf) return -5;

            SND_Vita_DecodeAICA_Stereo(pcm_src, buf, num_frames);

            pBgm->pcm_data      = buf;
            pBgm->num_frames    = num_frames;
            pBgm->channels      = 2;
            pBgm->sample_rate   = sample_rate;
            pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / SND_VITA_OUTPUT_RATE);
            return 0;
        } else {
            uint32_t num_samples = (uint32_t)(data_bytes * 2);
            int16_t *mono = (int16_t *)malloc(num_samples * sizeof(int16_t));
            int16_t *stereo = (int16_t *)malloc(num_samples * 2 * sizeof(int16_t));
            if (!mono || !stereo) {
                free(mono);
                free(stereo);
                return -6;
            }

            SND_Vita_DecodeAICA(pcm_src, mono, num_samples);
            for (uint32_t i = 0; i < num_samples; i++) {
                stereo[i * 2 + 0] = mono[i];
                stereo[i * 2 + 1] = mono[i];
            }
            free(mono);

            pBgm->pcm_data      = stereo;
            pBgm->num_frames    = num_samples;
            pBgm->channels      = 2;
            pBgm->sample_rate   = sample_rate;
            pBgm->rate_step     = (uint32_t)(((uint64_t)sample_rate << 16) / SND_VITA_OUTPUT_RATE);
            return 0;
        }
    }

    OS_Vita_LogWarn("[SND] Unsupported WAV format %u (bps: %u) in '%s'",
                    audio_fmt, bits_per_sample, name ? name : "unknown");
    return -7;
}

int SND_Vita_PlayMusic(const char *szMusicTrack, int bLoop) {
    if (!szMusicTrack || szMusicTrack[0] == '\0') {
        SND_Vita_StopMusic();
        return 0;
    }

    /* Stop previous track and free memory */
    SND_Vita_StopMusic();

    size_t sz = 0;
    uint8_t *raw = SND_LoadFileBuffer(szMusicTrack, &sz);
    if (!raw) {
        char fallback[256];
        snprintf(fallback, sizeof(fallback), "DCDATA/SOUND/MUSIC/%s", szMusicTrack);
        raw = SND_LoadFileBuffer(fallback, &sz);
    }
#if !defined(__vita__)
    if (!raw) {
        char fallback2[256];
        snprintf(fallback2, sizeof(fallback2), "assets/dc/DCDATA/SOUND/MUSIC/%s", szMusicTrack);
        raw = SND_LoadFileBuffer(fallback2, &sz);
    }
#endif

    if (!raw) {
        OS_Vita_LogWarn("[SND] BGM track '%s' not found", szMusicTrack);
        return -1;
    }

    int parse_res = -1;

    /* Check if raw is a direct RIFF/WAVE file */
    if (sz >= 12 && *(const uint32_t *)(raw + 0) == SND_MAGIC_RIFF) {
        parse_res = SND_ParseWAVStream(raw, sz, &g_bgm, szMusicTrack);
    }
    /* Check if raw is a DCZ container */
    else if (sz >= 16) {
        uint32_t num_files = *(const uint32_t *)(raw + 8);
        if (num_files > 0 && num_files < 512) {
            /* DCZ container: Files are sector aligned to 0x800 starting at sector 1 (0x800 or 0x1800) */
            size_t entry_start = 0x800;
            if (sz >= 0x1800 && *(const uint32_t *)(raw + 0x1800) == SND_MAGIC_RIFF) {
                entry_start = 0x1800;
            } else if (sz >= 0x800 && *(const uint32_t *)(raw + 0x800) == SND_MAGIC_RIFF) {
                entry_start = 0x800;
            }

            if (entry_start < sz && *(const uint32_t *)(raw + entry_start) == SND_MAGIC_RIFF) {
                parse_res = SND_ParseWAVStream(raw + entry_start, sz - entry_start, &g_bgm, szMusicTrack);
            }
        }
    }

    CPA_free(raw);

    if (parse_res == 0) {
        g_bgm.active        = 1;
        g_bgm.paused        = 0;
        g_bgm.loop          = bLoop;
        g_bgm.volume        = 1.0f;
        g_bgm.pan           = 0.0f;
        g_bgm.current_frame = 0;
        g_bgm.frame_frac    = 0;
        strncpy(g_bgm.track_name, szMusicTrack, sizeof(g_bgm.track_name) - 1);
        OS_Vita_LogInfo("[SND] Started BGM playback: '%s' (%u frames, loop=%d)",
                        szMusicTrack, g_bgm.num_frames, bLoop);
        return 0;
    }

    OS_Vita_LogError("[SND] Failed to parse BGM track '%s' (err: %d)", szMusicTrack, parse_res);
    return -2;
}

void SND_Vita_StopMusic(void) {
    g_bgm.active = 0;
    g_bgm.paused = 0;
    g_bgm.current_frame = 0;
    g_bgm.frame_frac = 0;
    if (g_bgm.pcm_data) {
        free(g_bgm.pcm_data);
        g_bgm.pcm_data = NULL;
    }
    g_bgm.num_frames = 0;
    g_bgm.track_name[0] = '\0';
}

void SND_Vita_PauseMusic(void) {
    g_bgm.paused = 1;
}

void SND_Vita_ResumeMusic(void) {
    g_bgm.paused = 0;
}

/* ----------------------------------------------------------------------------
 * 7. Sound Effect (SFX) Playback Control
 * ---------------------------------------------------------------------------- */

int SND_Vita_PlaySound(uint32_t ulSoundId, float fVolume, float fPan) {
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
    v->active           = 0; /* Temporarily inactivate to avoid race condition in audio thread */
    v->sound_id         = ulSoundId;
    v->pcm_data         = pSample->pcm_data;
    v->num_samples      = pSample->num_samples;
    v->sample_pos       = 0;
    v->sample_pos_frac  = 0;
    v->rate_step        = (uint32_t)(((uint64_t)pSample->sample_rate << 16) / SND_VITA_OUTPUT_RATE);
    v->volume           = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
    v->pan              = (fPan < -1.0f) ? -1.0f : ((fPan > 1.0f) ? 1.0f : fPan);
    v->loop             = pSample->loop;
    v->active           = 1;

    return chosen_slot;
}

void SND_Vita_StopVoice(int voice_index) {
    if (voice_index >= 0 && voice_index < SND_VITA_NUM_VOICES) {
        g_voices[voice_index].active = 0;
    }
}

void SND_Vita_StopAllVoices(void) {
    for (int i = 0; i < SND_VITA_NUM_VOICES; i++) {
        g_voices[i].active = 0;
    }
}

/* ----------------------------------------------------------------------------
 * 8. Volume Controls
 * ---------------------------------------------------------------------------- */

void SND_Vita_SetMasterVolume(float fVolume) {
    g_fMasterVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
}

void SND_Vita_SetBGMVolume(float fVolume) {
    g_fBGMVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
}

void SND_Vita_SetSFXVolume(float fVolume) {
    g_fSFXVolume = (fVolume < 0.0f) ? 0.0f : ((fVolume > 1.0f) ? 1.0f : fVolume);
}

float SND_Vita_GetMasterVolume(void) {
    return g_fMasterVolume;
}

float SND_Vita_GetBGMVolume(void) {
    return g_fBGMVolume;
}

float SND_Vita_GetSFXVolume(void) {
    return g_fSFXVolume;
}

/* ----------------------------------------------------------------------------
 * 9. Multi-Channel Mixer Core
 * ---------------------------------------------------------------------------- */

void SND_Vita_MixStereoBuffer(int16_t *out_samples, uint32_t num_frames) {
    if (!out_samples || num_frames == 0) return;

    /* 32-bit accumulation buffers to prevent clipping during summing */
    int32_t mix_l[1024];
    int32_t mix_r[1024];

    uint32_t frames_to_process = (num_frames > 1024) ? 1024 : num_frames;
    memset(mix_l, 0, frames_to_process * sizeof(int32_t));
    memset(mix_r, 0, frames_to_process * sizeof(int32_t));

    float master_vol = g_fMasterVolume;

    /* 1. Mix Streaming BGM Channel */
    if (g_bgm.active && !g_bgm.paused && g_bgm.pcm_data && g_bgm.num_frames > 0) {
        float bgm_vol = g_bgm.volume * g_fBGMVolume * master_vol;
        float pan_l = (g_bgm.pan <= 0.0f) ? 1.0f : (1.0f - g_bgm.pan);
        float pan_r = (g_bgm.pan >= 0.0f) ? 1.0f : (1.0f + g_bgm.pan);
        float gain_l = bgm_vol * pan_l;
        float gain_r = bgm_vol * pan_r;

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

            mix_l[i] += (int32_t)(interp_l * gain_l);
            mix_r[i] += (int32_t)(interp_r * gain_r);

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

        float v_vol = voice->volume * sfx_bus_vol;
        float pan_l = (voice->pan <= 0.0f) ? 1.0f : (1.0f - voice->pan);
        float pan_r = (voice->pan >= 0.0f) ? 1.0f : (1.0f + voice->pan);
        float gain_l = v_vol * pan_l;
        float gain_r = v_vol * pan_r;

        const int16_t *pcm = voice->pcm_data;
        uint32_t num_s = voice->num_samples;
        uint32_t pos = voice->sample_pos;
        uint32_t frac = voice->sample_pos_frac;
        uint32_t step = voice->rate_step;

        for (uint32_t i = 0; i < frames_to_process; i++) {
            if (pos >= num_s) {
                if (voice->loop) {
                    pos %= num_s;
                } else {
                    voice->active = 0;
                    break;
                }
            }

            uint32_t next_pos = pos + 1;
            if (next_pos >= num_s) {
                next_pos = voice->loop ? 0 : pos;
            }

            int32_t s0 = pcm[pos];
            int32_t s1 = pcm[next_pos];
            int32_t interp = s0 + (((s1 - s0) * (int32_t)(frac >> 8)) >> 8);

            mix_l[i] += (int32_t)(interp * gain_l);
            mix_r[i] += (int32_t)(interp * gain_r);

            frac += step;
            pos += (frac >> 16);
            frac &= 0xFFFF;
        }

        voice->sample_pos       = pos;
        voice->sample_pos_frac  = frac;
    }

    /* 3. Clamp accumulated 32-bit mix buffer to 16-bit signed PCM [-32768, 32767] */
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
}

/* ----------------------------------------------------------------------------
 * 10. Dedicated PS Vita Audio Thread & Subsystem Lifecycle
 * ---------------------------------------------------------------------------- */

#if defined(__vita__)
int SND_Vita_AudioThreadFunc(unsigned int args, void *argp) {
    (void)args;
    (void)argp;

    /* Initialize hardware stereo audio output port (prefer 48 kHz MAIN, fallback to 44.1 kHz BGM) */
    int nAudioPort = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN, 1024, SND_VITA_OUTPUT_RATE, SCE_AUDIO_OUT_MODE_STEREO);
    if (nAudioPort < 0) {
        nAudioPort = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_BGM, 1024, 44100, SCE_AUDIO_OUT_MODE_STEREO);
    }
    if (nAudioPort < 0) {
        OS_Vita_LogError("[SND] Failed to open audio output port: 0x%08X", nAudioPort);
        while (!g_bAudioShutdown) {
            sceKernelDelayThread(10000);
        }
        sceKernelExitThread(0);
        return 0;
    }

    OS_Vita_LogInfo("[SND] Hardware audio port %d opened (1024 frames @ %d Hz stereo)", nAudioPort, SND_VITA_OUTPUT_RATE);

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

    /* Reset voices and channels */
    memset(g_voices, 0, sizeof(g_voices));
    memset(&g_bgm, 0, sizeof(g_bgm));
    memset(&g_fix_bank, 0, sizeof(g_fix_bank));
    memset(&g_level_bank, 0, sizeof(g_level_bank));

    g_fMasterVolume = 1.0f;
    g_fBGMVolume    = 1.0f;
    g_fSFXVolume    = 1.0f;
    g_bAudioShutdown = 0;

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

    /* Stop music and voices */
    SND_Vita_StopMusic();
    SND_Vita_StopAllVoices();

    /* Unload banks */
    SND_Vita_UnloadBank();
    SND_Vita_UnloadFixBank();

    g_bAudioInitialized = 0;
    OS_Vita_LogInfo("[SND] Audio subsystem shut down completed");
}

int SND_Vita_IsInitialized(void) {
    return g_bAudioInitialized;
}
