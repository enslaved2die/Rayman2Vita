/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: snd_vita.h
 *
 * PlayStation Vita Audio Subsystem & Yamaha AICA ADPCM Decoder
 * - Yamaha AICA 4-bit ADPCM Decoder (standard step adaptation & difference tables)
 * - Multi-Channel Audio Mixer: 1 Streaming BGM Channel + 16 SFX Voices
 * - Dedicated Real-Time Audio Worker Thread (sceAudioOut @ 44.1 kHz 16-bit Stereo)
 * - Sound Bank (.OSB) Loader for FIX.OSB & Level Sound Banks
 * - Streaming Background Music Loader (.DCZ and .WAV RIFF containers)
 * - Per-channel & Master Volume and Stereo Panning Control
 *
 * Primary Port Baseline: Sega Dreamcast Yamaha AICA Sound Architecture
 * Secondary Guidance:    PC DirectSound retail implementation
 * ============================================================================ */

#ifndef SND_VITA_H
#define SND_VITA_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Audio Subsystem Constants & Configuration
 * ---------------------------------------------------------------------------- */
#define SND_VITA_NUM_VOICES         16      /* 16 simultaneous SFX voices */
#define SND_VITA_OUTPUT_RATE        48000   /* 48.0 kHz hardware sample rate (SCE_AUDIO_OUT_PORT_TYPE_MAIN) */
#define SND_VITA_FRAME_SAMPLES      1024    /* 1024 stereo frames per output buffer */
#define SND_VITA_BUFFER_SAMPLES     (SND_VITA_FRAME_SAMPLES * 2) /* 2048 int16 samples */

/* PS Vita Thread Attributes */
#define SND_VITA_THREAD_PRIORITY    (0x10000100 - 10) /* Real-time high priority */
#define SND_VITA_THREAD_STACK_SIZE  (128 * 1024)       /* 128 KB stack */

/* Magic markers for containers */
#define SND_MAGIC_SOSB              0x42534F53UL /* "SOSB" (Sound Bank Header) */
#define SND_MAGIC_SOSP              0x50534F53UL /* "SOSP" (Sound Parameter) */
#define SND_MAGIC_SOSD              0x44534F53UL /* "SOSD" (Sound Data Marker) */
#define SND_MAGIC_ENDP              0x50444E45UL /* "ENDP" (Parameter End) */
#define SND_MAGIC_RIFF              0x46464952UL /* "RIFF" (WAV Header) */
#define SND_MAGIC_WAVE              0x45564157UL /* "WAVE" (WAV Format) */
#define SND_MAGIC_FMT               0x20746D66UL /* "fmt " (WAV Chunk) */
#define SND_MAGIC_DATA              0x61746164UL /* "data" (WAV Chunk) */

/* ----------------------------------------------------------------------------
 * 2. Sound Bank Data Structures
 * ---------------------------------------------------------------------------- */

/* Single sound sample entry loaded from .OSB sound bank */
typedef struct SND_Vita_Sample {
    uint32_t    sound_id;       /* Bank-relative sound ID */
    uint32_t    sample_rate;    /* Native sample rate (typically 22050 or 44100 Hz) */
    uint32_t    num_samples;    /* Number of decoded 16-bit mono PCM samples */
    int16_t    *pcm_data;       /* Decompressed 16-bit signed PCM buffer */
    int         loop;           /* Loop flag */
} SND_Vita_Sample;

/* Sound Bank Container (e.g. FIX.OSB, BNK_xx.OSB) */
typedef struct SND_Vita_Bank {
    char                name[64];
    uint32_t            num_sounds;
    SND_Vita_Sample    *sounds;
    int                 loaded;
} SND_Vita_Bank;

/* ----------------------------------------------------------------------------
 * 3. Voice & BGM Channel Structures
 * ---------------------------------------------------------------------------- */

/* Single SFX Voice */
typedef struct SND_Vita_Voice {
    int                 active;
    uint32_t            sound_id;
    const int16_t      *pcm_data;
    uint32_t            num_samples;
    uint32_t            sample_pos;      /* Current integer sample index */
    uint32_t            sample_pos_frac; /* 16.16 fixed-point fractional accumulator */
    uint32_t            rate_step;       /* Resampling step: (sample_rate << 16) / 44100 */
    float               volume;          /* 0.0f (silent) to 1.0f (full) */
    float               pan;             /* -1.0f (full left) to +1.0f (full right) */
    int                 loop;
} SND_Vita_Voice;

/* Streaming Background Music (BGM) Channel */
typedef struct SND_Vita_BGM {
    int                 active;
    int                 paused;
    int                 loop;
    float               volume;          /* 0.0f to 1.0f */
    float               pan;             /* -1.0f to +1.0f */

    int16_t            *pcm_data;        /* Decoded PCM16 stereo/mono buffer */
    uint32_t            num_frames;      /* Total frames in buffer */
    uint32_t            sample_rate;     /* Input sample rate (e.g. 22050 or 44100) */
    uint32_t            current_frame;   /* Current integer playback frame */
    uint32_t            frame_frac;      /* 16.16 fractional accumulator */
    uint32_t            rate_step;       /* Resampling step: (sample_rate << 16) / 44100 */
    int                 channels;        /* 1 = mono, 2 = stereo */
    char                track_name[128]; /* Currently playing track name */
} SND_Vita_BGM;

/* ----------------------------------------------------------------------------
 * 4. Yamaha AICA ADPCM Decoder API
 * ---------------------------------------------------------------------------- */

/**
 * @brief Decodes a single 4-bit Yamaha AICA ADPCM nibble.
 *
 * @param nibble     4-bit ADPCM delta (0..15).
 * @param pPredictor Pointer to running 16-bit predictor value (updated in-place, clamped to [-32768, 32767]).
 * @param pStepIndex Pointer to running step index (updated in-place, clamped to [0, 88]).
 * @return Decoded 16-bit signed PCM sample.
 */
int16_t SND_Vita_DecodeNibble(uint8_t nibble, int32_t *pPredictor, int32_t *pStepIndex);

/**
 * @brief Decompresses a block of 4-bit Yamaha AICA ADPCM mono data into 16-bit PCM.
 *
 * Decompresses with low-nibble-first, high-nibble-second unpacking order
 * as specified by Yamaha AICA sound hardware.
 *
 * @param src         Pointer to packed 4-bit ADPCM input bytes.
 * @param dst         Output buffer for decoded 16-bit signed PCM samples.
 * @param num_samples Total number of PCM samples to decode.
 */
void    SND_Vita_DecodeAICA(const uint8_t *src, int16_t *dst, uint32_t num_samples);

/**
 * @brief Decompresses interleaved 2-channel stereo Yamaha AICA ADPCM into 16-bit stereo PCM.
 *
 * Block-aligned with 2 bytes per block: byte 0 contains 2 Left samples,
 * byte 1 contains 2 Right samples.
 *
 * @param src        Pointer to packed ADPCM data.
 * @param dst        Output buffer receiving interleaved 16-bit stereo PCM (L, R, L, R...).
 * @param num_frames Number of stereo frames to decode.
 */
void    SND_Vita_DecodeAICA_Stereo(const uint8_t *src, int16_t *dst, uint32_t num_frames);

/* ----------------------------------------------------------------------------
 * 5. Audio Subsystem Lifecycle
 * ---------------------------------------------------------------------------- */

/**
 * @brief Initializes the PS Vita audio subsystem, allocates voice pools,
 *        and spawns the dedicated high-priority audio worker thread.
 * @return 0 on success, negative error code on failure.
 */
int     SND_Vita_Init(void);

/**
 * @brief Shuts down the audio worker thread, releases hardware audio ports,
 *        and frees all loaded sound banks and BGM buffers.
 */
void    SND_Vita_Shutdown(void);

/**
 * @brief Checks whether the audio subsystem is currently initialized and active.
 * @return 1 if initialized, 0 otherwise.
 */
int     SND_Vita_IsInitialized(void);

/* Audio thread function */
#if defined(__vita__)
int     SND_Vita_AudioThreadFunc(unsigned int args, void *argp);
#else
int     SND_Vita_AudioThreadFunc(uint32_t args, void *argp);
#endif

/* ----------------------------------------------------------------------------
 * 6. Sound Bank (.OSB) Management
 * ---------------------------------------------------------------------------- */

/**
 * @brief Loads the default Dreamcast common sound bank (FIX.OSB).
 *        Pre-decodes all ADPCM samples into PCM16 buffers for zero-latency playback.
 * @return 0 on success, negative on error.
 */
int     SND_Vita_LoadFixBank(void);

/**
 * @brief Loads a level-specific sound bank container (e.g. BNK_xx.OSB).
 * @param szBankPath Path to .OSB bank container (resolved via VFS).
 * @return 0 on success, negative on error.
 */
int     SND_Vita_LoadBank(const char *szBankPath);

/**
 * @brief Unloads the current level sound bank and frees associated sample buffers.
 */
void    SND_Vita_UnloadBank(void);

/**
 * @brief Unloads the Fix sound bank and frees associated sample buffers.
 */
void    SND_Vita_UnloadFixBank(void);

/* ----------------------------------------------------------------------------
 * 7. Sound Effects & Music Playback Control
 * ---------------------------------------------------------------------------- */

/**
 * @brief Triggers a sound effect voice using a bank-relative Sound ID.
 *        Searches first in the current level bank, then falls back to FIX.OSB.
 *
 * @param ulSoundId Sound index in the bank.
 * @param fVolume   Voice volume (0.0f silent to 1.0f full).
 * @param fPan      Stereo panning (-1.0f left, 0.0f center, +1.0f right).
 * @return Allocated voice index (0..15), or -1 if no voice could be assigned.
 */
int     SND_Vita_PlaySound(uint32_t ulSoundId, float fVolume, float fPan);

/**
 * @brief Stops a specific SFX voice immediately.
 * @param voice_index Voice index (0..15).
 */
void    SND_Vita_StopVoice(int voice_index);

/**
 * @brief Stops all active SFX voices immediately.
 */
void    SND_Vita_StopAllVoices(void);

/**
 * @brief Starts streaming playback of a background music track (.DCZ or .WAV).
 *
 * @param szMusicTrack Track filename or relative path (e.g. "NA.DCZ", "SILENST.WAV").
 * @param bLoop        1 to loop seamlessly upon reaching track end, 0 to play once.
 * @return 0 on success, negative on failure.
 */
int     SND_Vita_PlayMusic(const char *szMusicTrack, int bLoop);

/**
 * @brief Stops BGM playback and unloads current music buffer.
 */
void    SND_Vita_StopMusic(void);

/**
 * @brief Pauses current BGM playback.
 */
void    SND_Vita_PauseMusic(void);

/**
 * @brief Resumes paused BGM playback.
 */
void    SND_Vita_ResumeMusic(void);

/* ----------------------------------------------------------------------------
 * 8. Volume & Panning Control
 * ---------------------------------------------------------------------------- */
void    SND_Vita_SetMasterVolume(float fVolume);
void    SND_Vita_SetBGMVolume(float fVolume);
void    SND_Vita_SetSFXVolume(float fVolume);

float   SND_Vita_GetMasterVolume(void);
float   SND_Vita_GetBGMVolume(void);
float   SND_Vita_GetSFXVolume(void);

/* ----------------------------------------------------------------------------
 * 9. Multi-Channel Mixer Core
 * ---------------------------------------------------------------------------- */

/**
 * @brief Mixes the BGM channel and 16 active SFX voices into a 1024-frame stereo buffer.
 *        Performs linear interpolation resampling to 44.1 kHz, volume scaling,
 *        stereo panning, and 16-bit signed clipping [-32768, 32767].
 *
 * @param out_samples Interleaved 16-bit stereo PCM buffer (size >= num_frames * 2).
 * @param num_frames  Number of stereo frames to mix (standard: 1024).
 */
void    SND_Vita_MixStereoBuffer(int16_t *out_samples, uint32_t num_frames);

#ifdef __cplusplus
}
#endif

#endif /* SND_VITA_H */
