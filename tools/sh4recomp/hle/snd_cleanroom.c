/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: snd_cleanroom.c
 *
 * HLE Bridge: SH-4 Recompiled Sound Subsystem -> Cleanroom Audio Engine
 *
 * Maps all guest Sega Dreamcast sound library (sd) and streaming entry points
 * directly to the native cleanroom PS Vita audio subsystem (SND_Vita_*):
 * - Subsystem Lifecycle: sdLibInit (0x8C0F0A48), sdDrvInit (0x8C0F0948),
 *   game sound init (0x8C098776), handle slot create (0x8C0F066C)
 * - Sound Bank (.OSB) Management: sdBankLoad (0x8C0EFCB0), upload helper (0x8C0EFC44)
 * - Voice Commands: voice start (0x8C0F06BC / cmd 0x11), stop (0x8C0F08E4 / cmd 0x12),
 *   stereo pan (0x8C0F0750 / cmd 0x16), volume (0x8C0F0878 / cmd 0x15),
 *   pitch / detune (0x8C0F07D0 / cmd 0x18)
 * - Voice Status Polling: sdGetStatus (0x8C0F0478), sdGetFullStatus (0x8C0F04FC),
 *   sdGetPos (0x8C0F05F4)
 * - Audio Streaming: stream open (0x8C06262C), stop (0x8C0628A8),
 *   pause (0x8C062960), resume (0x8C0629B0), volume (0x8C062870),
 *   dispatcher tick (0x8C0625B8), feed chunk counter (0x8C062F60)
 *
 * Replaces ARM7 interpretation and 64-channel AICA MMIO emulation with
 * direct native mixing via Vita hardware audio threads.
 * ============================================================================ */

#include "hle.h"
#include "hle_priv.h"
#include "io.h"
#include "snd.h"
#include "../../include/snd_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#if defined(__vita__)
#include <psp2/kernel/clib.h>
#include <psp2/kernel/processmgr.h>
#define LOG_INFO(fmt, ...)  sceClibPrintf("[snd_cleanroom] " fmt "\n", ##__VA_ARGS__)
#define LOG_WARN(fmt, ...)  sceClibPrintf("[snd_cleanroom] WARN: " fmt "\n", ##__VA_ARGS__)
#define LOG_ERR(fmt, ...)   sceClibPrintf("[snd_cleanroom] ERROR: " fmt "\n", ##__VA_ARGS__)
#else
#define LOG_INFO(fmt, ...)  fprintf(stderr, "[snd_cleanroom] " fmt "\n", ##__VA_ARGS__)
#define LOG_WARN(fmt, ...)  fprintf(stderr, "[snd_cleanroom] WARN: " fmt "\n", ##__VA_ARGS__)
#define LOG_ERR(fmt, ...)   fprintf(stderr, "[snd_cleanroom] ERROR: " fmt "\n", ##__VA_ARGS__)
#endif

/* ----------------------------------------------------------------------------
 * 1. Internal Handle Slot State
 * ----------------------------------------------------------------------------
 * Rayman 2 allocates 8 hardware voice slots (0x8C2E2CD8 + slot * 0x100).
 * We maintain 1:1 state between guest slots 0..7 and cleanroom voices 0..7.
 */
#define SND_HLE_MAX_SLOTS   8

typedef struct SndSlotState {
    int         active;         /* 1 = voice playing, 0 = stopped/idle */
    uint32_t    sound_id;       /* Bank-relative sound ID */
    uint32_t    bank_id;        /* 0 = FIX bank, >=1 = level bank */
    uint32_t    sample_pos;     /* Current decoded sample offset */
    float       volume;         /* Normalized linear volume [0.0f, 1.0f] */
    float       pan;            /* Stereo panning [-1.0f (left), +1.0f (right)] */
    int16_t     pitch;          /* Raw pitch/detune delta */
    float       pitch_ratio;    /* Pitch scale ratio */
    int         voice_index;    /* Cleanroom voice index assigned (0..7) */
    int8_t      raw_vol;        /* Cached raw volume byte */
    int8_t      raw_pan;        /* Cached raw pan byte */
    uint8_t     has_vol;        /* 1 if raw_vol is valid */
    uint8_t     has_pan;        /* 1 if raw_pan is valid */
    uint8_t     has_pitch;      /* 1 if pitch is valid */
} SndSlotState;

static SndSlotState s_slots[SND_HLE_MAX_SLOTS];
static uint32_t     s_handle_to_slot[SND_HLE_MAX_SLOTS];
static uint32_t     s_slot_counter = 0;
static int          s_cleanroom_inited = 0;
static float        s_cleanroom_master_vol = 1.0f;

/* Statistics tracking */
static uint64_t     s_stat_starts = 0;
static uint64_t     s_stat_stops = 0;
static uint64_t     s_stat_vol_updates = 0;
static uint64_t     s_stat_pan_updates = 0;
static uint64_t     s_stat_status_polls = 0;
static uint64_t     s_stat_stream_ticks = 0;
static uint64_t     s_stat_stream_feeds = 0;
static uint32_t     s_dbg_open = 0, s_dbg_chunk = 0, s_dbg_chunk_fed = 0, s_dbg_room = 0, s_dbg_getpos = 0, s_dbg_create = 0, s_dbg_close = 0;
static uint32_t     s_dbg_last_len = 0, s_dbg_last_src = 0, s_dbg_last_fmt = 0;
static uint32_t     s_dbg_close_pr = 0;
static uint32_t     s_dbg_getpos_last = 0;
static uint32_t     s_dbg_stream_id = 0;
static uint32_t     s_dbg_stream_bytes = 0;
static uint32_t     s_dbg_stream_chunk_idx = 0;

/* Weak fallbacks for cleanroom API if compiled in standalone mode */
#if !defined(__vita__)
__attribute__((weak)) int SND_Vita_InitEx(int spawn_thread) { (void)spawn_thread; return 0; }
__attribute__((weak)) int SND_Vita_Init(void) { return 0; }
__attribute__((weak)) void SND_Vita_Shutdown(void) {}
__attribute__((weak)) int SND_Vita_IsInitialized(void) { return 1; }
__attribute__((weak)) int SND_Vita_LoadFixBank(void) { return 0; }
__attribute__((weak)) int SND_Vita_LoadBank(const char *path) { (void)path; return 0; }
__attribute__((weak)) int SND_Vita_LoadBankData(uint32_t bank_id, const uint8_t *data, size_t size, const char *name) { (void)bank_id; (void)data; (void)size; (void)name; return 0; }
__attribute__((weak)) void SND_Vita_UnloadBank(void) {}
__attribute__((weak)) void SND_Vita_UnloadFixBank(void) {}
__attribute__((weak)) int SND_Vita_PlaySound(uint32_t id, float v, float p) { (void)id; (void)v; (void)p; return 0; }
__attribute__((weak)) int SND_Vita_PlaySoundEx(int slot, uint32_t bank, uint32_t id, float v, float p, float pitch) { (void)slot; (void)bank; (void)id; (void)v; (void)p; (void)pitch; return 0; }
__attribute__((weak)) int SND_Vita_IsVoicePlaying(int voice_idx) { (void)voice_idx; return 0; }
__attribute__((weak)) void SND_Vita_GetVoiceStatus(int voice_index, int *pActive, uint32_t *pPos, uint32_t *pTotal) { (void)voice_index; if (pActive) *pActive = 0; if (pPos) *pPos = 0; if (pTotal) *pTotal = 0; }
__attribute__((weak)) void SND_Vita_StopVoice(int idx) { (void)idx; }
__attribute__((weak)) void SND_Vita_StopAllVoices(void) {}
__attribute__((weak)) void SND_Vita_SetVoicePan(int idx, float p) { (void)idx; (void)p; }
__attribute__((weak)) void SND_Vita_SetVoiceVolume(int idx, float v) { (void)idx; (void)v; }
__attribute__((weak)) void SND_Vita_SetVoicePitch(int idx, float pitch) { (void)idx; (void)pitch; }
__attribute__((weak)) int SND_Vita_PlayMusic(const char *path, int loop) { (void)path; (void)loop; return 0; }
__attribute__((weak)) void SND_Vita_StopMusic(void) {}
__attribute__((weak)) void SND_Vita_PauseMusic(void) {}
__attribute__((weak)) void SND_Vita_ResumeMusic(void) {}
__attribute__((weak)) void SND_Vita_FeedStreamChunk(int ch, const uint8_t *data, uint32_t bytes, int fmt, uint32_t sample_rate) { (void)ch; (void)data; (void)bytes; (void)fmt; (void)sample_rate; }
__attribute__((weak)) uint32_t SND_Vita_GetStreamQueuedFrames(void) { return 0; }
__attribute__((weak)) uint32_t SND_Vita_GetStreamFreeFrames(void) { return 65536; }
__attribute__((weak)) uint32_t SND_Vita_GetStreamConsumedFrames(void) { return 0; }
__attribute__((weak)) void SND_Vita_ClearStream(void) {}
__attribute__((weak)) void SND_Vita_SetMasterVolume(float v) { (void)v; }
__attribute__((weak)) void SND_Vita_SetBGMVolume(float v) { (void)v; }
__attribute__((weak)) void SND_Vita_SetSFXVolume(float v) { (void)v; }
__attribute__((weak)) float SND_Vita_GetMasterVolume(void) { return 1.0f; }
__attribute__((weak)) float SND_Vita_GetBGMVolume(void) { return 1.0f; }
__attribute__((weak)) float SND_Vita_GetSFXVolume(void) { return 1.0f; }
__attribute__((weak)) void SND_Vita_MixStereoBuffer(int16_t *buf, uint32_t frames) { (void)buf; (void)frames; }
#endif

/* Helper to resolve slot_id (0..7) accurately across all calls */
static inline uint8_t get_slot_id(uint32_t handle) {
    if (handle >= 0x8C2E2CD8u && handle < 0x8C2E34D8u) {
        return (uint8_t)((handle - 0x8C2E2CD8u) >> 8);
    }
    for (int i = 0; i < SND_HLE_MAX_SLOTS; i++) {
        if (s_handle_to_slot[i] != 0 && s_handle_to_slot[i] == handle) {
            return (uint8_t)i;
        }
    }
    if (handle) {
        return (uint8_t)(LD8(handle + 1) & 7);
    }
    return 0;
}

/* ----------------------------------------------------------------------------
 * 2. Subsystem Lifecycle & Initialization Hooks
 * ---------------------------------------------------------------------------- */

/* sdLibInit (0x8C0F0A48): Sega sound library initialization */
static void hle_sdLibInit(SH4Ctx *c) {
    hle_orig(c, 0x8C0F0A48);
    if (!s_cleanroom_inited) {
        LOG_INFO("sdLibInit (0x8C0F0A48): initializing cleanroom audio engine");
        SND_Vita_Init();
        memset(s_slots, 0, sizeof(s_slots));
        memset(s_handle_to_slot, 0, sizeof(s_handle_to_slot));
        for (int i = 0; i < SND_HLE_MAX_SLOTS; i++) {
            s_slots[i].voice_index = i;
            s_slots[i].volume = 1.0f;
            s_slots[i].pan = 0.0f;
            s_slots[i].pitch_ratio = 1.0f;
        }
        s_cleanroom_inited = 1;
    }
}

/* sdDrvInit (0x8C0F0948): Sega sound driver upload and release */
static void hle_sdDrvInit(SH4Ctx *c) {
    LOG_INFO("sdDrvInit (0x8C0F0948): initializing driver tables and loading FIX.OSB");
    hle_orig(c, 0x8C0F0948);
    SND_Vita_LoadFixBank();
}

/* Game sound init (0x8C098776): Rayman 2 sound manager initialization */
static void hle_game_sound_init(SH4Ctx *c) {
    LOG_INFO("game_sound_init (0x8C098776): executing native table setup with cleanroom sd");
    /* Execute the original setup to initialize virtual voice tables, slot tables, and callbacks */
    hle_orig(c, 0x8C098776);
}

/* sdHandleSlotCreate (0x8C0F066C): creates a 0x100-byte voice handle slot */
static void hle_sdHandleSlotCreate(SH4Ctx *c) {
    uint32_t out_handle_ptr = c->r[4];
    uint8_t slot_id = (out_handle_ptr >= 0x8C2E2CD8u && out_handle_ptr < 0x8C2E34D8u)
                          ? (uint8_t)((out_handle_ptr - 0x8C2E2CD8u) >> 8)
                          : (uint8_t)(s_slot_counter++ & 7);
    hle_orig(c, 0x8C0F066C);
    if (out_handle_ptr) {
        uint32_t real_handle = LD32(out_handle_ptr);
        if (real_handle) {
            s_handle_to_slot[slot_id] = real_handle;
            ST8(real_handle + 1, slot_id);
        }
    }
}

/* ----------------------------------------------------------------------------
 * 3. Sound Bank (.OSB) Management Hooks
 * ---------------------------------------------------------------------------- */

/* sdBankLoad (0x8C0EFCB0): loads SOSB sound bank data */
static void hle_sdBankLoad(SH4Ctx *c) {
    uint32_t bank_desc = c->r[4];
    hle_orig(c, 0x8C0EFCB0);
    if (bank_desc) {
        uint32_t sosb_ptr = LD32(bank_desc + 8);
        if (SH4_FAST(sosb_ptr)) {
            uint32_t magic = LD32(sosb_ptr);
            if (magic == SND_MAGIC_SOSB) {
                uint32_t bank_size = LD32(sosb_ptr + 8);
                uint32_t sound_count = LD32(sosb_ptr + 12);
                uint32_t bank_id = LD32(bank_desc);
                LOG_INFO("sdBankLoad (0x8C0EFCB0): SOSB container at 0x%08X (%u sounds, size %u)",
                         sosb_ptr, sound_count, bank_size);
                const uint8_t *sosb_data = hle_ptr(sosb_ptr);
                if (bank_size < 16 || bank_size > 16 * 1024 * 1024) {
                    bank_size = 2 * 1024 * 1024;
                }
                SND_Vita_LoadBankData(bank_id, sosb_data, bank_size, "level_bank");
            }
        }
    }
}

/* sdBankUploadHelper (0x8C0EFC44): helper called during bank upload */
static void hle_sdBankUploadHelper(SH4Ctx *c) {
    uint32_t desc_ptr = c->r[4];
    uint32_t magic    = c->r[5];
    uint32_t bank_idx = c->r[6];
    (void)magic;

    if (desc_ptr) {
        uint32_t sosb_ptr = LD32(desc_ptr + 8);
        uint32_t sosb_sz  = LD32(desc_ptr + 12);
        if (sosb_ptr && sosb_sz > 0) {
            SND_Vita_LoadBankData(bank_idx, (const uint8_t *)hle_ptr(sosb_ptr), sosb_sz,
                                  bank_idx == 0 ? "FIX.OSB" : "LEVEL.OSB");
        }
    }
    hle_orig(c, 0x8C0EFC44);
}

/* ----------------------------------------------------------------------------
 * 4. Sound Effect (SFX) Voice Command Hooks
 * ---------------------------------------------------------------------------- */

/* sdVoiceStart / cmd 0x11 (0x8C0F06BC): triggers sound playback in a slot */
static void hle_sdVoiceStart(SH4Ctx *c) {
    uint32_t handle   = c->r[4];
    uint8_t  slot_id  = get_slot_id(handle);
    uint8_t  bank_id  = (uint8_t)(c->r[5] & 0xFF);
    uint8_t  sound_id = (uint8_t)(c->r[6] & 0xFF);
    int8_t   flags    = (int8_t)(c->r[7] & 0xFF);
    (void)flags;

    s_stat_starts++;
    SndSlotState *slot = &s_slots[slot_id];
    slot->active     = 1;
    slot->sound_id   = sound_id;
    slot->bank_id    = bank_id;
    slot->sample_pos = 0;

    /* Trigger voice playback via cleanroom mixer */
    float pitch = slot->pitch_ratio > 0.0f ? slot->pitch_ratio : 1.0f;
    SND_Vita_PlaySoundEx(slot_id, bank_id, sound_id, slot->volume, slot->pan, pitch);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoiceStop / cmd 0x12 (0x8C0F08E4): stops sound playback in a slot */
static void hle_sdVoiceStop(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = get_slot_id(handle);

    s_stat_stops++;
    s_slots[slot_id].active     = 0;
    s_slots[slot_id].sample_pos = 0;

    SND_Vita_StopVoice(slot_id);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoicePan / cmd 0x16 (0x8C0F0750): stereo panning update */
static void hle_sdVoicePan(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = get_slot_id(handle);
    int8_t   pan_val = (int8_t)(c->r[5] & 0xFF);

    s_stat_pan_updates++;
    if (s_slots[slot_id].has_pan && s_slots[slot_id].raw_pan == pan_val) {
        c->r[0] = 0;
        return;
    }
    s_slots[slot_id].has_pan = 1;
    s_slots[slot_id].raw_pan = pan_val;

    /* Convert Dreamcast panning: -128 (full left) to +127 (full right) */
    float fPan = (float)pan_val / 127.0f;
    if (fPan < -1.0f) fPan = -1.0f;
    else if (fPan > 1.0f) fPan = 1.0f;

    s_slots[slot_id].pan = fPan;
    SND_Vita_SetVoicePan(slot_id, fPan);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoiceVol / cmd 0x15 (0x8C0F0878): voice volume / attenuation update */
static void hle_sdVoiceVol(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = get_slot_id(handle);
    int8_t   vol_val = (int8_t)(c->r[5] & 0xFF);

    s_stat_vol_updates++;
    if (s_slots[slot_id].has_vol && s_slots[slot_id].raw_vol == vol_val) {
        c->r[0] = 0;
        return;
    }
    s_slots[slot_id].has_vol = 1;
    s_slots[slot_id].raw_vol = vol_val;

    /* Convert Dreamcast attenuation: 0 dB = max volume, negative = attenuation in dB */
    float fVol;
    if (vol_val == 0) {
        fVol = 1.0f;
    } else if (vol_val > 0) {
        fVol = (float)vol_val / 127.0f;
    } else if (vol_val <= -120) {
        fVol = 0.0f;
    } else {
        /* dB curve conversion: vol_val is attenuation */
        fVol = powf(10.0f, (float)vol_val / 40.0f);
    }
    if (fVol < 0.0f) fVol = 0.0f;
    else if (fVol > 1.0f) fVol = 1.0f;

    s_slots[slot_id].volume = fVol;
    SND_Vita_SetVoiceVolume(slot_id, fVol);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoicePitch / cmd 0x18 (0x8C0F07D0): pitch / detune update */
static void hle_sdVoicePitch(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = get_slot_id(handle);
    int16_t  pitch   = (int16_t)(c->r[5] & 0xFFFF);

    if (s_slots[slot_id].has_pitch && s_slots[slot_id].pitch == pitch) {
        c->r[0] = 0;
        return;
    }
    s_slots[slot_id].has_pitch = 1;
    s_slots[slot_id].pitch = pitch;
    float ratio = (pitch == 0) ? 1.0f : powf(2.0f, (float)pitch / 3072.0f);
    s_slots[slot_id].pitch_ratio = ratio;
    SND_Vita_SetVoicePitch(slot_id, ratio);

    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 5. Voice Status Query Hooks
 * ---------------------------------------------------------------------------- */

/* sdGetStatus (0x8C0F0478): returns 32-bit voice status word */
static void hle_sdGetStatus(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint32_t out_ptr = c->r[5];
    uint8_t  slot_id = get_slot_id(handle);

    s_stat_status_polls++;
    int active = 0;
    uint32_t sample_pos = 0;
    SND_Vita_GetVoiceStatus(slot_id, &active, &sample_pos, NULL);
    s_slots[slot_id].active = active;
    s_slots[slot_id].sample_pos = sample_pos;
    if (out_ptr) {
        uint32_t status = s_slots[slot_id].active ? 1u : 0u; /* bit 0 = playing */
        ST32(out_ptr, status);
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* sdGetFullStatus (0x8C0F04FC): fills complete 0x20-byte driver status block */
static void hle_sdGetFullStatus(SH4Ctx *c) {
    uint32_t handle    = c->r[4];
    uint32_t block_ptr = c->r[5];
    uint8_t  slot_id   = get_slot_id(handle);

    s_stat_status_polls++;
    int active = 0;
    uint32_t sample_pos = 0;
    SND_Vita_GetVoiceStatus(slot_id, &active, &sample_pos, NULL);
    s_slots[slot_id].active = active;
    s_slots[slot_id].sample_pos = sample_pos;
    if (block_ptr) {
        /* Clear block words */
        for (uint32_t o = 0; o < 0x20; o += 4) {
            ST32(block_ptr + o, 0);
        }
        /* Offset 0x14: 32-bit sample playback position */
        ST32(block_ptr + 0x14, s_slots[slot_id].sample_pos);
        /* Offset 0x18: bit 0 = playing bit (crucial for Rayman 2 voice slot state machine) */
        ST32(block_ptr + 0x18, s_slots[slot_id].active ? 1u : 0u);
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* sdGetPos (0x8C0F05F4): returns current sample position */
static void hle_sdGetPos(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint32_t out_ptr = c->r[5];
    uint8_t  slot_id = get_slot_id(handle);

    int active = 0;
    uint32_t sample_pos = 0;
    SND_Vita_GetVoiceStatus(slot_id, &active, &sample_pos, NULL);
    s_slots[slot_id].active = active;
    s_slots[slot_id].sample_pos = sample_pos;
    if (out_ptr) {
        ST32(out_ptr, s_slots[slot_id].sample_pos);
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 6. Audio Streaming (BGM & Voice-Over) Hooks
 * ---------------------------------------------------------------------------- */
#define STREAM_CTX_ADDR 0x8C2D4968u

/* Extra Prison investigation trace; disabled unless explicitly enabled. */
static int hle_prison_trace_enabled(void) {
    static int s_cached = -1;
    if (s_cached < 0) {
        const char *value = getenv("R2_PRISON_TRACE");
        s_cached = (value && value[0] && value[0] != '0') ? 1 : 0;
    }
    return s_cached;
}

static void hle_prison_dump_resource(uint32_t resource) {
    /* Validate the whole descriptor before reading any words; descriptor is
     * guest supplied and calls to the dispatcher are frequent. */
    if (!resource || !hle_is_ram(resource) ||
        (uint64_t)(resource & 0x00FFFFFFu) + 0x50u > SH4_RAM_SIZE) {
        LOG_INFO("prison_resource ptr=%08x invalid_span=0x50", resource);
        return;
    }
    LOG_INFO("prison_resource ptr=%08x words_00_4c=%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x",
             resource,
             LD32(resource + 0x00), LD32(resource + 0x04), LD32(resource + 0x08), LD32(resource + 0x0C),
             LD32(resource + 0x10), LD32(resource + 0x14), LD32(resource + 0x18), LD32(resource + 0x1C),
             LD32(resource + 0x20), LD32(resource + 0x24), LD32(resource + 0x28), LD32(resource + 0x2C),
             LD32(resource + 0x30), LD32(resource + 0x34), LD32(resource + 0x38), LD32(resource + 0x3C),
             LD32(resource + 0x40), LD32(resource + 0x44), LD32(resource + 0x48), LD32(resource + 0x4C));
}

static void hle_prison_dispatch(SH4Ctx *c) {
    if (hle_prison_trace_enabled()) {
        LOG_INFO("prison_dispatch f_8c060704 r4=%08x r5=%08x r6=%08x r7=%08x pr=%08x",
                 c->r[4], c->r[5], c->r[6], c->r[7], c->pr);
        hle_prison_dump_resource(c->r[4]);
    }
    hle_orig(c, 0x8C060704);
}

/* Game-level stream request (0x8C060D44). Log the sound definition and event
 * before the original dispatcher chooses/opens a stream. */
static void hle_game_stream_request(SH4Ctx *c) {
    if (hle_prison_trace_enabled()) {
        LOG_INFO("game_stream_request r4=%08x r5=%08x r6=%08x r7=%08x pr=%08x",
                 c->r[4], c->r[5], c->r[6], c->r[7], c->pr);
    }
    hle_orig(c, 0x8C060D44);
}

static uint32_t hle_stream_word(uint32_t base, uint32_t off) {
    uint32_t addr = base + off;
    return hle_is_ram(addr) ? LD32(addr) : 0xFFFFFFFFu;
}

/* Stream Open (0x8C06262C): initializes stream state and opens audio container */
static void hle_stream_open(SH4Ctx *c) {
    uint32_t caller_pr = c->pr;
    uint32_t resource = c->r[4];
    s_dbg_open++;
    s_dbg_stream_id++;
    s_dbg_stream_bytes = 0;
    s_dbg_stream_chunk_idx = 0;
    if (LD32(STREAM_CTX_ADDR) != 0) {
        LOG_WARN("stream_open (0x8C06262C): stream busy (state=%u), resetting", LD32(STREAM_CTX_ADDR));
        SND_Vita_ClearStream();
        SND_Vita_StopMusic();
        ST32(STREAM_CTX_ADDR, 0);
    }
    SND_Vita_ClearStream();
    if (hle_prison_trace_enabled()) {
        /* Guest f_8c096eea tests resource+0x28 before calling this opener;
         * guest f_8c06262c stores incoming r6/r7 as stream end_cb/end_arg. */
        LOG_INFO("prison_stream_open caller=%08x r4=%08x r5=%08x r6=%08x r7=%08x resource_gate_28=%08x",
                 caller_pr, c->r[4], c->r[5], c->r[6], c->r[7], hle_stream_word(resource, 0x28));
    }
    hle_orig(c, 0x8C06262C);
    uint8_t vol_byte = LD8(STREAM_CTX_ADDR + 0x54);
    float vol = (vol_byte <= 100) ? ((float)vol_byte / 100.0f) : 1.0f;
    SND_Vita_SetBGMVolume(vol);
    if (hle_prison_trace_enabled()) {
        LOG_INFO("prison_stream_state end_cb=%08x end_arg=%08x remaining=%u eof_pos=%u fmt=%u channels=%u",
                 LD32(STREAM_CTX_ADDR + 0x6C), LD32(STREAM_CTX_ADDR + 0x70),
                 LD32(STREAM_CTX_ADDR + 0x0C), LD32(STREAM_CTX_ADDR + 0x14),
                 LD32(STREAM_CTX_ADDR + 0x1C), LD32(STREAM_CTX_ADDR + 0x18));
        hle_io_debug_slot_trace(LD32(STREAM_CTX_ADDR + 0x28));
    } else {
        LOG_INFO("stream_open (0x8C06262C): volume=%.2f remaining=%u eof_pos=%u fmt=%u channels=%u",
                 vol, LD32(STREAM_CTX_ADDR + 0x0C), LD32(STREAM_CTX_ADDR + 0x14),
                 LD32(STREAM_CTX_ADDR + 0x1C), LD32(STREAM_CTX_ADDR + 0x18));
        hle_io_debug_slot(LD32(STREAM_CTX_ADDR + 0x28));
    }
}

/* Stream Stop (0x8C0628A8): stops streaming BGM and invokes end callback */
static void hle_stream_stop(SH4Ctx *c) {
    SND_Vita_ClearStream();
    SND_Vita_StopMusic();
    hle_orig(c, 0x8C0628A8);
}

/* Stream Pause (0x8C062960): pauses stream playback */
static void hle_stream_pause(SH4Ctx *c) {
    SND_Vita_PauseMusic();
    hle_orig(c, 0x8C062960);
}

/* Stream Resume (0x8C0629B0): resumes stream playback */
static void hle_stream_resume(SH4Ctx *c) {
    SND_Vita_ResumeMusic();
    hle_orig(c, 0x8C0629B0);
}

/* Stream Volume (0x8C062870): sets BGM streaming volume */
static void hle_stream_volume(SH4Ctx *c) {
    uint32_t arg = c->r[5];
    if (arg) {
        uint8_t vol_byte = LD8(arg + 4);
        float vol = (float)vol_byte / 100.0f;
        if (vol > 1.0f) vol = 1.0f;
        SND_Vita_SetBGMVolume(vol);
    }
    hle_orig(c, 0x8C062870);
}

/* Stream Chunk Feed (0x8C062F60): chunk feed counter */
static void hle_stream_feed(SH4Ctx *c) {
    s_stat_stream_feeds++;
    hle_orig(c, 0x8C062F60);
}

/* Resolves stream sample rate from Dreamcast AICA pitch register at STREAM_CTX_ADDR + 0x20
 * (written by f_8c0630a0 and f_8c0982f2 from the WAV format chunk), with sound_def fallback. */
static uint32_t hle_stream_resolve_sample_rate(void) {
    uint16_t pitch_reg = (uint16_t)(LD32(STREAM_CTX_ADDR + 0x20) & 0xFFFF);
    switch (pitch_reg) {
        case 0x0000: return 44100;
        case 0x7800: return 22050;
        case 0x7000: return 11025;
        case 0x79cd: return 32000;
        case 0x785a: return 24000;
        case 0x72db: return 18900;
        case 0x71cd: return 16000;
        default: {
            int oct = (int)((pitch_reg >> 11) & 0x0F);
            if (oct > 7) oct -= 16;
            uint32_t fns = pitch_reg & 0x3FF;
            float freq = 44100.0f * (1.0f + (float)fns / 1024.0f) * powf(2.0f, (float)oct);
            uint32_t calc_rate = (uint32_t)roundf(freq);
            if (calc_rate >= 8000 && calc_rate <= 48000) {
                return calc_rate;
            }
            break;
        }
    }

    uint32_t sound_def = LD32(STREAM_CTX_ADDR + 0x24);
    if (sound_def && hle_is_ram(sound_def)) {
        uint32_t srate = LD32(sound_def + 0x4C);
        if (srate >= 8000 && srate <= 48000) {
            return srate;
        }
    }

    return 22050;
}

/* sdStreamTransferChunk (0x8C0E3404): transfers a stream chunk to channel buffer */
static void hle_sdStreamTransferChunk(SH4Ctx *c) {
    uint32_t handle   = c->r[4];
    uint32_t ch       = c->r[5];
    uint32_t desc_ptr = c->r[6];

    uint32_t src_addr = desc_ptr ? LD32(desc_ptr + 8) : 0;
    uint32_t byte_len = desc_ptr ? LD32(desc_ptr + 12) : 0;

    uint32_t fmt = LD32(STREAM_CTX_ADDR + 0x1C);
    uint32_t sample_rate = hle_stream_resolve_sample_rate();

    s_dbg_chunk++; s_dbg_last_len = byte_len; s_dbg_last_src = src_addr; s_dbg_last_fmt = fmt;
    s_dbg_stream_chunk_idx++;
    s_dbg_stream_bytes += byte_len;
    if (hle_prison_trace_enabled() && (s_dbg_stream_chunk_idx <= 16 || (s_dbg_stream_chunk_idx % 32) == 0)) {
        LOG_INFO("stream_chunk id=%u n=%u fmt=%u ch=%u bytes=%u total=%u src=%08x state=%u remaining=%u eof=%u rate=%u",
                 s_dbg_stream_id, s_dbg_stream_chunk_idx, fmt, ch, byte_len,
                 s_dbg_stream_bytes, src_addr, LD32(STREAM_CTX_ADDR),
                 LD32(STREAM_CTX_ADDR + 0x0C), LD32(STREAM_CTX_ADDR + 0x14),
                 sample_rate);
    }
    if (src_addr && byte_len > 0 && byte_len <= 8192) {
        s_dbg_chunk_fed++;
        SND_Vita_FeedStreamChunk((int)ch, (const uint8_t *)hle_ptr(src_addr), byte_len, (int)fmt, sample_rate);
        uint32_t channels = LD32(STREAM_CTX_ADDR + 0x18);
        if (channels == 1 && ch == 0) {
            SND_Vita_FeedStreamChunk(1, (const uint8_t *)hle_ptr(src_addr), byte_len, (int)fmt, sample_rate);
        }
    }

    if (handle) {
        uint32_t wp = LD32(handle + 0x14 + (ch & 1) * 4);
        wp = (wp + 0x800) % 0x4000;
        ST32(handle + 0x14 + (ch & 1) * 4, wp);
    }

    c->r[0] = 0;
}

/* sdStreamCommand (0x8C0E2FEC): cleanroom has no AICA command transport; accept the
 * guest's per-channel stream command so it can proceed to the chunk transfer hook. */
static void hle_sdStreamCommand(SH4Ctx *c) {
    c->r[0] = 0;
}

/* sdStreamCreate (0x8C0E2E84): allocates and initializes a stream handle */
static void hle_sdStreamCreate(SH4Ctx *c) {
    s_dbg_create++;
    uint32_t out_handle_ptr = c->r[4];
    hle_orig(c, 0x8C0E2E84);
    if (out_handle_ptr) {
        uint32_t handle = LD32(out_handle_ptr);
        if (!handle) {
            handle = 0x8C2FA9A8u;
            ST32(out_handle_ptr, handle);
        }
        ST32(handle + 0x14, 0);
        ST32(handle + 0x18, 0);
        ST32(handle + 0x24, 0);
        ST32(handle + 0x28, 0);
    }
    c->r[0] = 0;
}

/* sdStreamClose (0x8C0E2C70): closes stream and frees handle */
static void hle_sdStreamClose(SH4Ctx *c) {
    s_dbg_close++;
    s_dbg_close_pr = c->pr;
    LOG_INFO("sdStreamClose: id=%u bytes=%u caller=%08x state=%u threshold=%u remaining=%u consumed=%u queued=%u handle=%08x",
             s_dbg_stream_id, s_dbg_stream_bytes, c->pr, LD32(STREAM_CTX_ADDR), LD32(STREAM_CTX_ADDR + 0x14),
             LD32(STREAM_CTX_ADDR + 0x0C), SND_Vita_GetStreamConsumedFrames(),
             SND_Vita_GetStreamQueuedFrames(), c->r[4]);
    uint32_t handle = c->r[4];
    if (handle) {
        ST32(handle + 4, 0);
        ST32(handle + 0x14, 0);
        ST32(handle + 0x18, 0);
    }
    /* Closing the guest stream handle must not discard audio already queued for playback. */
    c->r[0] = 0;
}

/* sdStreamCheckRoom (0x8C0E2D50): checks available space in stream ring buffer */
static void hle_sdStreamCheckRoom(SH4Ctx *c) {
    s_dbg_room++;
    uint32_t out_room_ptr = c->r[7];

    if (out_room_ptr) {
        uint32_t queued = SND_Vita_GetStreamQueuedFrames();
        uint32_t free_frames = SND_Vita_GetStreamFreeFrames();
        if (queued < 8192 && free_frames >= 4096) {
            ST32(out_room_ptr, 1);
        } else {
            ST32(out_room_ptr, 0);
        }
    }
    c->r[0] = 0;
}

/* sdStreamGetPos (0x8C0E2CC0): returns playback position for stream EOF detection */
static void hle_sdStreamGetPos(SH4Ctx *c) {
    s_dbg_getpos++;
    uint32_t out_pos_ptr = c->r[6];

    if (out_pos_ptr) {
        uint32_t threshold = LD32(STREAM_CTX_ADDR + 0x14);
        uint32_t consumed = SND_Vita_GetStreamConsumedFrames();
        uint32_t queued = SND_Vita_GetStreamQueuedFrames();

        /* ctx[5] is zero for the normal looping music streams. Do not expose the
         * Vita frame counter as an EOF position when the guest has no end threshold. */
        uint32_t pos = 0;
        if (threshold > 0) {
            pos = consumed;
            if (consumed >= threshold || (queued == 0 && LD32(STREAM_CTX_ADDR) == 5)) {
                pos = threshold + 1;
            }
        }
        if (hle_prison_trace_enabled() && (s_dbg_getpos <= 12 || (s_dbg_getpos % 64) == 0 || pos > threshold)) {
            LOG_INFO("sdStreamGetPos #%u: state=%u pos=%u threshold=%u consumed=%u queued=%u remaining=%u out=%08x",
                     s_dbg_getpos, LD32(STREAM_CTX_ADDR), pos, threshold, consumed,
                     queued, LD32(STREAM_CTX_ADDR + 0x0C), out_pos_ptr);
        }
        ST32(out_pos_ptr, pos);
    }
    c->r[0] = 0;
}

/* Stream Tick Dispatcher (0x8C0625B8): steady-state stream catch-up loop */
static void hle_stream_tick(SH4Ctx *c) {
    s_stat_stream_ticks++;
    uint32_t pr = c->pr;
    uint32_t saved_fade = 0;

    for (int i = 0; i < 2; i++) {
        uint32_t st = LD32(STREAM_CTX_ADDR);
        if (st == 0 && i > 0) {
            break;   /* idle: run the game's own tick once (it drives state 0 -> open), but never catch up */
        }
        uint32_t prev_q = SND_Vita_GetStreamQueuedFrames();
        if (st == 3 && prev_q >= 4096) {
            break;
        }
        uint64_t prev_feeds = s_stat_stream_feeds;
        c->pr = pr;
        if (i > 0) {
            /* Disable fade step during catch-up iterations to avoid accelerating fades */
            saved_fade = LD32(STREAM_CTX_ADDR + 0x58);
            ST32(STREAM_CTX_ADDR + 0x58, 0);
        }
        hle_orig(c, 0x8C0625B8);
        if (i > 0) {
            ST32(STREAM_CTX_ADDR + 0x58, saved_fade);
        }
        uint32_t next_st = LD32(STREAM_CTX_ADDR);
        /* Stop if in steady-state (3 -> 3) and no new chunk/frames were fed */
        if (st == 3 && next_st == 3 &&
            (SND_Vita_GetStreamQueuedFrames() == prev_q || s_stat_stream_feeds == prev_feeds)) {
            break;
        }
    }
    c->pr = pr;
}

/* ----------------------------------------------------------------------------
 * 7. Hook Registration Constructor
 * ----------------------------------------------------------------------------
 * The literal hex addresses below are parsed by mkstubs.py to generate
 * hook_stubs.c and rename.sed.
 */
__attribute__((constructor)) static void snd_cleanroom_register_hooks(void) {
    /* 1. Subsystem Lifecycle & Init */
    hle_hook(0x8C0F0A48, hle_sdLibInit);
    hle_hook(0x8C0F0948, hle_sdDrvInit);
    hle_hook(0x8C098776, hle_game_sound_init);
    hle_hook(0x8C0F066C, hle_sdHandleSlotCreate);

    /* 2. Bank Loading */
    hle_hook(0x8C0EFCB0, hle_sdBankLoad);
    hle_hook(0x8C0EFC44, hle_sdBankUploadHelper);

    /* 3. Voice Commands */
    hle_hook(0x8C0F06BC, hle_sdVoiceStart);
    hle_hook(0x8C0F08E4, hle_sdVoiceStop);
    hle_hook(0x8C0F0750, hle_sdVoicePan);
    hle_hook(0x8C0F0878, hle_sdVoiceVol);
    hle_hook(0x8C0F07D0, hle_sdVoicePitch);

    /* 4. Status Getters */
    hle_hook(0x8C0F0478, hle_sdGetStatus);
    hle_hook(0x8C0F04FC, hle_sdGetFullStatus);
    hle_hook(0x8C0F05F4, hle_sdGetPos);

    /* 5. Audio Streaming Hooks */
    hle_hook(0x8C060D44, hle_game_stream_request);
    if (hle_prison_trace_enabled()) hle_hook(0x8C060704, hle_prison_dispatch);
    hle_hook(0x8C06262C, hle_stream_open);
    hle_hook(0x8C0628A8, hle_stream_stop);
    hle_hook(0x8C062960, hle_stream_pause);
    hle_hook(0x8C0629B0, hle_stream_resume);
    hle_hook(0x8C062870, hle_stream_volume);
    hle_hook(0x8C0625B8, hle_stream_tick);
    hle_hook(0x8C062F60, hle_stream_feed);
    hle_hook(0x8C0E3404, hle_sdStreamTransferChunk);
    hle_hook(0x8C0E2FEC, hle_sdStreamCommand);
    hle_hook(0x8C0E2D50, hle_sdStreamCheckRoom);
    hle_hook(0x8C0E2CC0, hle_sdStreamGetPos);
    hle_hook(0x8C0E2E84, hle_sdStreamCreate);
    hle_hook(0x8C0E2C70, hle_sdStreamClose);
}

/* ----------------------------------------------------------------------------
 * 8. Public snd.h API Implementation (Drop-in Replacement for snd.c)
 * ---------------------------------------------------------------------------- */

int snd_init(int out_rate) {
    (void)out_rate;
    if (!s_cleanroom_inited) {
        SND_Vita_Init();
        memset(s_slots, 0, sizeof(s_slots));
        memset(s_handle_to_slot, 0, sizeof(s_handle_to_slot));
        for (int i = 0; i < SND_HLE_MAX_SLOTS; i++) {
            s_slots[i].voice_index = i;
            s_slots[i].volume = 1.0f;
            s_slots[i].pan = 0.0f;
            s_slots[i].pitch_ratio = 1.0f;
        }
        s_cleanroom_inited = 1;
    }
    return 0;
}

void snd_shutdown(void) {
    if (s_cleanroom_inited) {
        SND_Vita_Shutdown();
        s_cleanroom_inited = 0;
    }
}

void snd_mix(int16_t *out, int frames) {
    if (!s_cleanroom_inited) {
        snd_init(SND_VITA_OUTPUT_RATE);
    }
    SND_Vita_MixStereoBuffer(out, (uint32_t)frames);
}

void snd_set_master_volume(float v) {
    s_cleanroom_master_vol = v;
    SND_Vita_SetMasterVolume(v);
}

void snd_get_stats(SndStats *s) {
    if (!s) return;
    memset(s, 0, sizeof(*s));
    s->arm_running = 1;
    s->keyon       = s_stat_starts;
    s->ringcmds    = s_stat_vol_updates + s_stat_pan_updates;
    s->active_channels = 0;
    for (int i = 0; i < SND_HLE_MAX_SLOTS; i++) {
        if (s_slots[i].active) s->active_channels++;
    }
    s->stream_open   = 0;
    s->stream_stop   = 0;
    s->stream_pause  = 0;
    s->stream_resume = 0;
    static uint32_t s_note_seq = 0;
    s->stream_note_seq = ++s_note_seq;   /* new note every call so the 5 s audio log always prints it */
    snprintf(s->stream_note, sizeof(s->stream_note),
             "cleanroom: starts=%llu stops=%llu polls=%llu ticks=%llu stream_feeds=%llu queued=%u consumed=%u free=%u ctx_state=%u open=%u create=%u close=%u close_pr=%08x room=%u getpos=%u chunk=%u fed=%u last_len=%u last_src=%08x last_fmt=%u ctx_fmt=%u ctx_rate_def=%08x",
             (unsigned long long)s_stat_starts,
             (unsigned long long)s_stat_stops,
             (unsigned long long)s_stat_status_polls,
             (unsigned long long)s_stat_stream_ticks,
             (unsigned long long)s_stat_stream_feeds,
             (unsigned)SND_Vita_GetStreamQueuedFrames(),
             (unsigned)SND_Vita_GetStreamConsumedFrames(),
             (unsigned)SND_Vita_GetStreamFreeFrames(),
             (unsigned)LD32(STREAM_CTX_ADDR),
             s_dbg_open, s_dbg_create, s_dbg_close, s_dbg_close_pr, s_dbg_room, s_dbg_getpos, s_dbg_chunk, s_dbg_chunk_fed,
             s_dbg_last_len, s_dbg_last_src, s_dbg_last_fmt, (unsigned)LD32(STREAM_CTX_ADDR + 0x1C), (unsigned)LD32(STREAM_CTX_ADDR + 0x24));
}

int snd_wav_open(const char *path) { (void)path; return 0; }
void snd_wav_close(void) {}
uint8_t *snd_test_aram(void) { return NULL; }
uint32_t *snd_test_regs(void) { return NULL; }
void snd_test_advance(int frames, int16_t *out) { (void)frames; (void)out; }
void snd_test_regwrite(uint32_t byte_off, uint32_t v) { (void)byte_off; (void)v; }
void snd_test_set_nostrm(int v) { (void)v; }
void snd_test_strm_stats(uint64_t *m, uint64_t *s, uint64_t *r, uint64_t *sil) {
    if (m) *m = 0;
    if (s) *s = 0;
    if (r) *r = 0;
    if (sil) *sil = 0;
}
void snd_test_sh4_aram_wr(uint32_t a, int sz, uint32_t v) { (void)a; (void)sz; (void)v; }
void snd_test_sh4_reg_wr(uint32_t a, int sz, uint32_t v) { (void)a; (void)sz; (void)v; }
void snd_test_dma_to_aram(uint32_t a, const void *p, uint32_t len) { (void)a; (void)p; (void)len; }
uint64_t snd_test_samples(void) { return 0; }
void snd_test_set_pull(int on) { (void)on; }
void snd_test_arm_reset(int run) { (void)run; }

#if !defined(__vita__)
/* Host test: R2_SND_PULL=<wav> starts a real-time thread that pulls snd_mix(1024) at 48 kHz (as the Vita sceAudioOut thread does)
 * and writes what a player would hear to <wav>.  Without it the host harness has no consumer and the stream ring never drains. */
#include <pthread.h>
#include <time.h>
static FILE *s_pull_wav;
static void *cleanroom_pull_thread(void *arg) {
    (void)arg;
    static int16_t buf[1024 * 2];
    unsigned long long blocks = 0, wr = 0;
    struct timespec t0; clock_gettime(CLOCK_MONOTONIC, &t0);
    for (;;) {
        snd_mix(buf, 1024);
        fwrite(buf, 4, 1024, s_pull_wav); wr += 1024; blocks++;
        if ((blocks & 63) == 0) {
            fflush(s_pull_wav); rewind(s_pull_wav);
            uint32_t sz = (uint32_t)(wr * 4), rs = sz + 36;
            uint8_t h[44] = {'R','I','F','F',0,0,0,0,'W','A','V','E','f','m','t',' ',16,0,0,0,1,0,2,0,0x80,0xBB,0,0,0x00,0xEE,2,0,4,0,16,0,'d','a','t','a'};
            memcpy(h + 4, &rs, 4); memcpy(h + 40, &sz, 4);
            fwrite(h, 1, 44, s_pull_wav); fseek(s_pull_wav, 0, SEEK_END);
        }
        struct timespec n2; clock_gettime(CLOCK_MONOTONIC, &n2);
        int64_t el  = (int64_t)(n2.tv_sec - t0.tv_sec) * 1000000000ll + (n2.tv_nsec - t0.tv_nsec);
        int64_t due = (int64_t)(blocks * 1024ull * 1000000000ull / 48000ull);
        if (due > el) { struct timespec ts = {(time_t)((due - el) / 1000000000ll), (long)((due - el) % 1000000000ll)}; nanosleep(&ts, 0); }
    }
    return 0;
}
__attribute__((constructor)) static void cleanroom_start_pull_test(void) {
    const char *pw = getenv("R2_SND_PULL");
    if (!pw || !*pw || !strcmp(pw, "0")) return;
    s_pull_wav = fopen(pw, "wb"); if (!s_pull_wav) return;
    uint8_t h[44] = {0}; fwrite(h, 1, 44, s_pull_wav);
    pthread_t th; pthread_create(&th, 0, cleanroom_pull_thread, 0); pthread_detach(th);
}
#endif

/* snd_trace_close: called by vita_main.c at exit. snd.c (AICA emulator) owns a trace file; this cleanroom module has none, so this is a no-op that keeps the link working with USE_CLEANROOM_AUDIO=1. */
void snd_trace_close(void) {}
