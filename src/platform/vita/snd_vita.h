/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: snd_vita.h
 *
 * PlayStation Vita Audio Subsystem & Yamaha AICA ADPCM Decoder
 * - Yamaha AICA 4-bit ADPCM Decoder (standard step adaptation & difference tables)
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
#define SND_VITA_RATE_48000         48000   /* 48.0 kHz hardware sample rate (SCE_AUDIO_OUT_PORT_TYPE_MAIN) */
#define SND_VITA_RATE_44100         44100   /* 44.1 kHz hardware sample rate (SCE_AUDIO_OUT_PORT_TYPE_BGM) */
#define SND_VITA_OUTPUT_RATE        SND_VITA_RATE_48000 /* Default hardware sample rate */
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
    uint32_t    sample_rate;    /* Native sample rate (typically 11025, 22050, or 44100 Hz) */
    uint32_t    num_samples;    /* Number of decoded 16-bit mono PCM samples */
    int16_t    *pcm_data;       /* Decompressed 16-bit signed PCM buffer */
    int         loop;           /* Loop flag: 1 = looping, 0 = one-shot */
    uint32_t    loop_start;     /* Loop start sample index */
    uint32_t    loop_end;       /* Loop end sample index */
    uint16_t    pitch_reg;      /* Raw Yamaha AICA OCT/FNS register */
} SND_Vita_Sample;

/* Sound Bank Container (e.g. FIX.OSB, BNK_xx.OSB) */
typedef struct SND_Vita_Bank {
    char                name[64];
    uint32_t            bank_id;
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
    uint32_t            bank_id;
    uint32_t            sound_id;
    const int16_t      *pcm_data;
    uint32_t            num_samples;
    uint32_t            sample_rate;     /* Native sample rate (typically 22050 or 24000 Hz) */
    uint32_t            sample_pos;      /* Current integer sample index */
    uint32_t            sample_pos_frac; /* 16.16 fixed-point fractional accumulator */
    uint32_t            rate_step;       /* Resampling step: (sample_rate * pitch << 16) / output_rate */
    float               volume;          /* 0.0f (silent) to 1.0f (full) */
    float               pan;             /* -1.0f (full left) to +1.0f (full right) */
    float               pitch;           /* Pitch scale (1.0f = normal) */
    int                 loop;
    uint32_t            loop_start;
    uint32_t            loop_end;
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
    uint32_t            sample_rate;     /* Input sample rate (e.g. 22050, 44100, 48000) */
    uint32_t            current_frame;   /* Current integer playback frame */
    uint32_t            frame_frac;      /* 16.16 fractional accumulator */
    uint32_t            rate_step;       /* Resampling step: (sample_rate << 16) / output_rate */
    int                 channels;        /* 1 = mono, 2 = stereo */
    char                track_name[128]; /* Currently playing track name */
    float               fade_target;     /* Fade target volume (0.0f..1.0f) */
    float               fade_speed;      /* Volume change per second */
    int                 fading;          /* 1 if active volume fade in progress */
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
 * @brief Initializes the PS Vita audio subsystem with option to spawn worker thread.
 * @param spawn_thread If non-zero, spawns dedicated Rayman2_AudioThread. If 0,
 *                     mixing is driven externally (e.g. via snd_mix).
 * @return 0 on success, negative error code on failure.
 */
int     SND_Vita_InitEx(int spawn_thread);

/**
 * @brief Initializes the PS Vita audio subsystem, allocates voice pools,
 *        creates thread mutex, and delegates mixing to an external thread (spawn_thread = 0).
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

/**
 * @brief Locks the audio subsystem mutex for thread-safe parameter updates.
 */
void    SND_Vita_Lock(void);

/**
 * @brief Unlocks the audio subsystem mutex.
 */
void    SND_Vita_Unlock(void);

/**
 * @brief Gets current output hardware sample rate (typically 48000 or 44100).
 */
uint32_t SND_Vita_GetOutputSampleRate(void);

/**
 * @brief Configures the mixer output sample rate (48000 or 44100 Hz).
 * @param rate Target output rate.
 */
void    SND_Vita_SetOutputSampleRate(uint32_t rate);

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
 * @brief Loads sound bank data directly from an in-memory SOSB container.
 * @param bank_id Unique bank identifier (0 = fix bank, >= 1 = level bank).
 * @param data    Pointer to raw SOSB container data in memory.
 * @param size    Size of container buffer in bytes.
 * @param name    Human-readable bank descriptor name.
 * @return 0 on success, negative on error.
 */
int     SND_Vita_LoadBankData(uint32_t bank_id, const uint8_t *data, size_t size, const char *name);

/**
 * @brief Unloads the current level sound bank and frees associated sample buffers.
 */
void    SND_Vita_UnloadBank(void);

/**
 * @brief Unloads the Fix sound bank and frees associated sample buffers.
 */
void    SND_Vita_UnloadFixBank(void);

/**
 * @brief Retrieves the sound entry count for a given bank.
 */
uint32_t SND_Vita_GetBankSoundCount(const SND_Vita_Bank *pBank);

/**
 * @brief Retrieves a pointer to a specific sample entry in a bank.
 */
const SND_Vita_Sample *SND_Vita_GetBankSound(const SND_Vita_Bank *pBank, uint32_t sound_id);

/* ----------------------------------------------------------------------------
 * 7. Sound Effects & Music Playback Control
 * ---------------------------------------------------------------------------- */

/**
 * @brief Retrieves the sound descriptor for a given sound ID.
 *        Searches level bank first, then FIX bank.
 * @param ulSoundId Sound index.
 * @return Pointer to SND_Vita_Sample descriptor or NULL if not found.
 */
const SND_Vita_Sample *SND_Vita_GetSoundDescriptor(uint32_t ulSoundId);

/**
 * @brief Retrieves the sound descriptor from a specific bank.
 * @param bLevelBank 1 for level bank, 0 for FIX bank.
 * @param ulSoundId  Sound index.
 * @return Pointer to SND_Vita_Sample descriptor or NULL if not found.
 */
const SND_Vita_Sample *SND_Vita_GetBankSoundDescriptor(int bLevelBank, uint32_t ulSoundId);

/**
 * @brief Plays a sound effect with explicit slot targeting or auto-allocation.
 *
 * @param voice_idx Target voice slot (0..15), or -1 for auto-allocation / stealing.
 * @param bank_id   Sound bank ID (0 = FIX bank, >= 1 = level bank).
 * @param sound_id  Sound index in the bank.
 * @param fVolume   Voice volume (0.0f silent to 1.0f full).
 * @param fPan      Stereo panning (-1.0f left, 0.0f center, +1.0f right).
 * @param fPitch    Pitch scale ratio (1.0f = normal).
 * @return Allocated voice index (0..15), or -1 if no voice could be assigned.
 */
int     SND_Vita_PlaySoundEx(int voice_idx, uint32_t bank_id, uint32_t sound_id, float fVolume, float fPan, float fPitch);

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
 * @brief Updates voice pan (Dreamcast driver cmd 0x15).
 * @param voice_index Voice handle (0..15).
 * @param fPan        Pan (-1.0f full left, 0.0f center, +1.0f full right).
 */
void    SND_Vita_SetVoicePan(int voice_index, float fPan);

/**
 * @brief Updates voice volume (Dreamcast driver cmd 0x16).
 * @param voice_index Voice handle (0..15).
 * @param fVolume     Volume (0.0f silent, 1.0f full).
 */
void    SND_Vita_SetVoiceVolume(int voice_index, float fVolume);

/**
 * @brief Updates voice pitch / frequency scale (Dreamcast driver cmd 0x18).
 * @param voice_index Voice handle (0..15).
 * @param fPitch      Pitch multiplier (e.g. 1.0f = normal, 1.5f = +50%, 0.5f = half speed).
 */
void    SND_Vita_SetVoicePitch(int voice_index, float fPitch);

/**
 * @brief Emulates Dreamcast MANATEE driver command dispatch (cmds 0x11, 0x12, 0x15, 0x16, 0x18).
 * @param uCmd    Command opcode (0x11=KeyOn, 0x12=KeyOff/Stop, 0x15=Pan, 0x16=Volume, 0x18=Pitch).
 * @param uHandle Voice handle slot (0..15).
 * @param lParam1 First parameter (e.g. Sound ID for 0x11, Pan/Vol/Pitch for 0x15/0x16/0x18).
 * @param lParam2 Second parameter (e.g. flags/extra for 0x11).
 * @return 0 on success, negative error code on failure.
 */
int     SND_Vita_SendCommand(uint8_t uCmd, uint8_t uHandle, int32_t lParam1, int32_t lParam2);

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
 * @brief Queries voice playback progress and active state.
 */
void    SND_Vita_GetVoiceStatus(int voice_index, int *pActive, uint32_t *pPos, uint32_t *pTotal);

/**
 * @brief Checks if a voice handle is actively playing.
 * @param voice_index Voice handle (0..15).
 * @return 1 if active and playing, 0 if idle/finished.
 */
int     SND_Vita_IsVoicePlaying(int voice_index);

/**
 * @brief Returns the number of currently active SFX voice channels.
 * @return Count of active voices (0..16).
 */
int     SND_Vita_GetActiveVoiceCount(void);

/**
 * @brief Advances streaming BGM state, updates volume fades, and maintains stream buffers.
 * @param fDeltaTime Time elapsed since last tick in seconds.
 */
void    SND_Vita_TickBGM(float fDeltaTime);

/**
 * @brief Initiates a smooth BGM volume fade.
 * @param fTargetVolume Target volume level (0.0f .. 1.0f).
 * @param fFadeDuration Duration of fade in seconds (> 0).
 */
void    SND_Vita_FadeBGM(float fTargetVolume, float fFadeDuration);

/**
 * @brief Gets current streaming BGM playback status.
 * @return 1 if playing, 0 if stopped/idle, -1 if paused.
 */
int     SND_Vita_GetBGMStatus(void);

/**
 * @brief Starts streaming playback of a background music track (.DCZ archive or .WAV).
 *
 * @param szMusicTrack Track filename or path (e.g. "NA.DCZ", "SILENST.WAV").
 * @param bLoop        1 to loop seamlessly upon reaching track end, 0 to play once.
 * @return 0 on success, negative on failure.
 */
int     SND_Vita_PlayMusic(const char *szMusicTrack, int bLoop);

/**
 * @brief Starts streaming playback of a specific subtrack within a DCZ container.
 *
 * @param szMusicContainer Container filename (e.g. "NA.DCZ").
 * @param subtrack_index   0-based subtrack index within the DCZ archive.
 * @param bLoop            1 to loop seamlessly, 0 to play once.
 * @return 0 on success, negative on failure.
 */
int     SND_Vita_PlayMusicSubtrack(const char *szMusicContainer, uint32_t subtrack_index, int bLoop);

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
 * 8. Streaming Audio Ring Buffer (BGM / Speech Chunks)
 * ---------------------------------------------------------------------------- */
#define SND_STREAM_RING_FRAMES      65536

/**
 * @brief Feeds a decompressed/compressed audio stream chunk into the ring buffer.
 *
 * @param ch          Channel index (0 = Left, 1 = Right).
 * @param data        Raw chunk bytes.
 * @param bytes       Number of bytes in data.
 * @param fmt         Audio format: 1 = PCM16, 2 = Yamaha ADPCM.
 * @param sample_rate Sample rate in Hz (e.g. 22050).
 */
void    SND_Vita_FeedStreamChunk(int ch, const uint8_t *data, uint32_t bytes, int fmt, uint32_t sample_rate);

/**
 * @brief Returns total number of stereo frames currently queued in stream ring buffer.
 */
uint32_t SND_Vita_GetStreamQueuedFrames(void);

/**
 * @brief Returns total number of free stereo frames available in stream ring buffer.
 */
uint32_t SND_Vita_GetStreamFreeFrames(void);

/**
 * @brief Resets stream ring buffer and per-channel decoder state.
 */
void    SND_Vita_ClearStream(void);

/* ----------------------------------------------------------------------------
 * 8. Volume & Panning Control
 * ---------------------------------------------------------------------------- */
void    SND_Vita_SetMasterVolume(float fVolume);
void    SND_Vita_SetBGMVolume(float fVolume);
void    SND_Vita_SetSFXVolume(float fVolume);

float   SND_Vita_GetMasterVolume(void);
float   SND_Vita_GetBGMVolume(void);
float   SND_Vita_GetSFXVolume(void);
float   SND_Vita_GetBGMChannelVolume(void);

/* ----------------------------------------------------------------------------
 * 9. Multi-Channel Mixer Core
 * ---------------------------------------------------------------------------- */

/**
 * @brief Mixes the BGM channel and 16 active SFX voices into a stereo frame buffer.
 *        Performs integer linear interpolation resampling, volume scaling,
 *        Dreamcast Yamaha AICA DIPAN stereo panning, and 16-bit signed clipping [-32768, 32767].
 *        Uses ARM NEON vector instructions when available.
 *
 * @param out_samples Interleaved 16-bit stereo PCM buffer (size >= num_frames * 2).
 * @param num_frames  Number of stereo frames to mix (standard: 1024).
 */
void    SND_Vita_MixStereoBuffer(int16_t *out_samples, uint32_t num_frames);

#ifdef __cplusplus
}
#endif

#endif /* SND_VITA_H */
