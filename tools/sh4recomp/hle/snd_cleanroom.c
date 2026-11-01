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
    int         voice_index;    /* Cleanroom voice index assigned (0..7) */
} SndSlotState;

static SndSlotState s_slots[SND_HLE_MAX_SLOTS];
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

/* Weak fallbacks for cleanroom API if compiled in standalone mode */
#if !defined(__vita__)
__attribute__((weak)) int SND_Vita_InitEx(int spawn_thread) { (void)spawn_thread; return 0; }
__attribute__((weak)) int SND_Vita_Init(void) { return 0; }
__attribute__((weak)) void SND_Vita_Shutdown(void) {}
__attribute__((weak)) int SND_Vita_IsInitialized(void) { return 1; }
__attribute__((weak)) int SND_Vita_LoadFixBank(void) { return 0; }
__attribute__((weak)) int SND_Vita_LoadBank(const char *path) { (void)path; return 0; }
__attribute__((weak)) void SND_Vita_UnloadBank(void) {}
__attribute__((weak)) void SND_Vita_UnloadFixBank(void) {}
__attribute__((weak)) int SND_Vita_PlaySound(uint32_t id, float v, float p) { (void)id; (void)v; (void)p; return 0; }
__attribute__((weak)) void SND_Vita_StopVoice(int idx) { (void)idx; }
__attribute__((weak)) void SND_Vita_StopAllVoices(void) {}
__attribute__((weak)) int SND_Vita_PlayMusic(const char *path, int loop) { (void)path; (void)loop; return 0; }
__attribute__((weak)) void SND_Vita_StopMusic(void) {}
__attribute__((weak)) void SND_Vita_PauseMusic(void) {}
__attribute__((weak)) void SND_Vita_ResumeMusic(void) {}
__attribute__((weak)) void SND_Vita_SetMasterVolume(float v) { (void)v; }
__attribute__((weak)) void SND_Vita_SetBGMVolume(float v) { (void)v; }
__attribute__((weak)) void SND_Vita_SetSFXVolume(float v) { (void)v; }
__attribute__((weak)) float SND_Vita_GetMasterVolume(void) { return 1.0f; }
__attribute__((weak)) float SND_Vita_GetBGMVolume(void) { return 1.0f; }
__attribute__((weak)) float SND_Vita_GetSFXVolume(void) { return 1.0f; }
__attribute__((weak)) void SND_Vita_MixStereoBuffer(int16_t *buf, uint32_t frames) { (void)buf; (void)frames; }
#endif

/* ----------------------------------------------------------------------------
 * 2. Subsystem Lifecycle & Initialization Hooks
 * ---------------------------------------------------------------------------- */

/* sdLibInit (0x8C0F0A48): Sega sound library initialization */
static void hle_sdLibInit(SH4Ctx *c) {
    if (!s_cleanroom_inited) {
        LOG_INFO("sdLibInit (0x8C0F0A48): initializing cleanroom audio engine");
        SND_Vita_Init();
        memset(s_slots, 0, sizeof(s_slots));
        for (int i = 0; i < SND_HLE_MAX_SLOTS; i++) {
            s_slots[i].voice_index = i;
            s_slots[i].volume = 1.0f;
            s_slots[i].pan = 0.0f;
        }
        s_cleanroom_inited = 1;
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* sdDrvInit (0x8C0F0948): Sega sound driver upload and release */
static void hle_sdDrvInit(SH4Ctx *c) {
    LOG_INFO("sdDrvInit (0x8C0F0948): loading FIX.OSB sound bank");
    SND_Vita_LoadFixBank();
    c->r[0] = 0; /* Return 0: Success */
}

/* Game sound init (0x8C098776): Rayman 2 sound manager initialization */
static void hle_game_sound_init(SH4Ctx *c) {
    LOG_INFO("game_sound_init (0x8C098776): executing native table setup with cleanroom sd");
    /* Execute the original setup to initialize virtual voice tables, slot tables, and callbacks */
    hle_orig(c, 0x8C098776);
}

/* sdHandleSlotCreate (0x8C0F066C): creates a 0x100-byte voice handle slot */
static void hle_sdHandleSlotCreate(SH4Ctx *c) {
    uint32_t handle = c->r[4];
    uint8_t slot_id = (uint8_t)(s_slot_counter++ & (SND_HLE_MAX_SLOTS - 1));
    if (handle) {
        ST8(handle + 1, slot_id);
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 3. Sound Bank (.OSB) Management Hooks
 * ---------------------------------------------------------------------------- */

/* sdBankLoad (0x8C0EFCB0): loads SOSB sound bank data */
static void hle_sdBankLoad(SH4Ctx *c) {
    uint32_t bank_desc = c->r[4];
    if (bank_desc) {
        uint32_t sosb_ptr = LD32(bank_desc + 8);
        if (SH4_FAST(sosb_ptr)) {
            uint32_t magic = LD32(sosb_ptr);
            if (magic == SND_MAGIC_SOSB) {
                uint32_t sound_count = LD32(sosb_ptr + 12);
                LOG_INFO("sdBankLoad (0x8C0EFCB0): SOSB container at 0x%08X (%u sounds)",
                         sosb_ptr, sound_count);
            }
        }
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* sdBankUploadHelper (0x8C0EFC44): helper called during bank upload */
static void hle_sdBankUploadHelper(SH4Ctx *c) {
    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 4. Sound Effect (SFX) Voice Command Hooks
 * ---------------------------------------------------------------------------- */

/* sdVoiceStart / cmd 0x11 (0x8C0F06BC): triggers sound playback in a slot */
static void hle_sdVoiceStart(SH4Ctx *c) {
    uint32_t handle   = c->r[4];
    uint8_t  slot_id  = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;
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
    SND_Vita_PlaySound(sound_id, slot->volume, slot->pan);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoiceStop / cmd 0x12 (0x8C0F08E4): stops sound playback in a slot */
static void hle_sdVoiceStop(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;

    s_stat_stops++;
    s_slots[slot_id].active     = 0;
    s_slots[slot_id].sample_pos = 0;

    SND_Vita_StopVoice(slot_id);

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoicePan / cmd 0x16 (0x8C0F0750): stereo panning update */
static void hle_sdVoicePan(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;
    int8_t   pan_val = (int8_t)(c->r[5] & 0xFF);

    s_stat_pan_updates++;
    /* Convert Dreamcast panning: -128 (full left) to +127 (full right) */
    float fPan = (float)pan_val / 127.0f;
    if (fPan < -1.0f) fPan = -1.0f;
    else if (fPan > 1.0f) fPan = 1.0f;

    s_slots[slot_id].pan = fPan;

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoiceVol / cmd 0x15 (0x8C0F0878): voice volume / attenuation update */
static void hle_sdVoiceVol(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;
    int8_t   vol_val = (int8_t)(c->r[5] & 0xFF);

    s_stat_vol_updates++;
    /* Convert Dreamcast attenuation: 0 = max volume, negative = attenuation in dB */
    float fVol;
    if (vol_val >= 0) {
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

    c->r[0] = 0; /* Return 0: Success */
}

/* sdVoicePitch / cmd 0x18 (0x8C0F07D0): pitch / detune update */
static void hle_sdVoicePitch(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;
    int16_t  pitch   = (int16_t)(c->r[5] & 0xFFFF);

    s_slots[slot_id].pitch = pitch;

    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 5. Voice Status Query Hooks
 * ---------------------------------------------------------------------------- */

/* sdGetStatus (0x8C0F0478): returns 32-bit voice status word */
static void hle_sdGetStatus(SH4Ctx *c) {
    uint32_t handle  = c->r[4];
    uint32_t out_ptr = c->r[5];
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;

    s_stat_status_polls++;
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
    uint8_t  slot_id   = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;

    s_stat_status_polls++;
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
    uint8_t  slot_id = handle ? (LD8(handle + 1) & (SND_HLE_MAX_SLOTS - 1)) : 0;

    if (out_ptr) {
        ST32(out_ptr, s_slots[slot_id].sample_pos);
    }
    c->r[0] = 0; /* Return 0: Success */
}

/* ----------------------------------------------------------------------------
 * 6. Audio Streaming (BGM & Voice-Over) Hooks
 * ---------------------------------------------------------------------------- */
#define STREAM_CTX_ADDR 0x8C2D4968u

/* Stream Open (0x8C06262C): initializes stream state and opens audio container */
static void hle_stream_open(SH4Ctx *c) {
    hle_orig(c, 0x8C06262C);
    uint32_t state = LD32(STREAM_CTX_ADDR);
    if (state == 1) {
        /* Extract volume from stream context (+0x15 byte) */
        uint8_t vol_byte = LD8(STREAM_CTX_ADDR + 0x15);
        float vol = (float)vol_byte / 100.0f;
        SND_Vita_SetBGMVolume(vol);
        LOG_INFO("stream_open (0x8C06262C): stream active, initial BGM volume: %.2f", vol);
    }
}

/* Stream Stop (0x8C0628A8): stops streaming BGM and invokes end callback */
static void hle_stream_stop(SH4Ctx *c) {
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
    uint32_t arg = c->r[4];
    if (arg) {
        uint8_t vol_byte = LD8(arg + 4);
        float vol = (float)vol_byte / 100.0f;
        SND_Vita_SetBGMVolume(vol);
    }
    hle_orig(c, 0x8C062870);
}

/* Stream Chunk Feed (0x8C062F60): chunk feed counter */
static void hle_stream_feed(SH4Ctx *c) {
    s_stat_stream_feeds++;
    hle_orig(c, 0x8C062F60);
}

/* Stream Tick Dispatcher (0x8C0625B8): steady-state stream catch-up loop */
static void hle_stream_tick(SH4Ctx *c) {
    s_stat_stream_ticks++;
    uint32_t pr = c->pr;
    int max_catchup = (LD32(STREAM_CTX_ADDR) == 3) ? 8 : 1;
    uint32_t saved_fade = 0;

    for (int i = 0; i < max_catchup; i++) {
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
        /* Stop if no new chunk was fed or state changed */
        if (s_stat_stream_feeds == prev_feeds || LD32(STREAM_CTX_ADDR) != 3) {
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
    hle_hook(0x8C06262C, hle_stream_open);
    hle_hook(0x8C0628A8, hle_stream_stop);
    hle_hook(0x8C062960, hle_stream_pause);
    hle_hook(0x8C0629B0, hle_stream_resume);
    hle_hook(0x8C062870, hle_stream_volume);
    hle_hook(0x8C0625B8, hle_stream_tick);
    hle_hook(0x8C062F60, hle_stream_feed);
}

/* ----------------------------------------------------------------------------
 * 8. Public snd.h API Implementation (Drop-in Replacement for snd.c)
 * ---------------------------------------------------------------------------- */

int snd_init(int out_rate) {
    (void)out_rate;
    if (!s_cleanroom_inited) {
        SND_Vita_Init();
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
    snprintf(s->stream_note, sizeof(s->stream_note),
             "cleanroom: starts=%llu stops=%llu polls=%llu ticks=%llu",
             (unsigned long long)s_stat_starts,
             (unsigned long long)s_stat_stops,
             (unsigned long long)s_stat_status_polls,
             (unsigned long long)s_stat_stream_ticks);
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
