/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: save_vita.h
 *
 * PlayStation Vita Save Subsystem
 * - Path: ux0:data/rayman2/Save/ (configurable for host testing)
 * - Three independent save slots (slot1.sav, slot2.sav, slot3.sav)
 * - Atomic write protocol using temporary files (.tmp) followed by rename
 * - Comprehensive data integrity checks (Magic, Version, File Size, CRC32)
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef SAVE_VITA_H
#define SAVE_VITA_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Save Subsystem Constants
 * ---------------------------------------------------------------------------- */
#define R2_SAVE_MAGIC               0x56533252U /* 'R2SV' (Rayman 2 Save Vita) */
#define R2_SAVE_VERSION             1U
#define R2_SAVE_MIN_SLOT            1
#define R2_SAVE_MAX_SLOT            3
#define R2_SAVE_SLOT_COUNT          3
#define R2_SAVE_LEVEL_NAME_MAX      32
#define R2_DEFAULT_SAVE_DIR         "ux0:data/rayman2/Save/"

/* IEEE 802.3 CRC32 standard polynomial representation */
#define R2_CRC32_POLYNOMIAL         0xEDB88320U

/* ----------------------------------------------------------------------------
 * 2. Unlocked Powers Bitmask (Rayman Abilities)
 * ---------------------------------------------------------------------------- */
typedef enum R2_SavePowers {
    R2_POWER_NONE                   = 0,
    R2_POWER_MAGIC_FIST             = (1 << 0), /* Basic shooting fist */
    R2_POWER_HELICOPTER             = (1 << 1), /* Gliding helicopter */
    R2_POWER_SUPER_HELICOPTER       = (1 << 2), /* Powered flight (Silver Lum upgrade) */
    R2_POWER_PURPLE_LUM             = (1 << 3), /* Grab & swing on Purple Lums */
    R2_POWER_SWIM                   = (1 << 4), /* Underwater diving / swimming */
    R2_POWER_GOLDEN_FIST            = (1 << 5), /* Enhanced damage Golden Fist */
    R2_POWER_CHARGE_FIST            = (1 << 6), /* Charged fist power */
    R2_POWER_FLYING_BARREL          = (1 << 7)  /* Flying barrel riding mastery */
} R2_SavePowers;

/* ----------------------------------------------------------------------------
 * 3. Save Slot Structure Layout
 * ---------------------------------------------------------------------------- */
#pragma pack(push, 4)
typedef struct R2_tdst_SaveSlot {
    /* Header & Integrity Validation (12 bytes) */
    uint32_t uMagic;                        /* Magic identifier: 0x56533252 ('R2SV') */
    uint32_t uVersion;                      /* Save format version (1) */
    uint32_t uChecksum;                     /* IEEE 802.3 CRC32 checksum over payload */

    /* Slot & Level Identification */
    int32_t  nSlot;                         /* Slot index (1 to 3) */
    char     szLevelName[R2_SAVE_LEVEL_NAME_MAX]; /* Level ID / name (e.g. "LEARN_10", "MAPMONDE2") */

    /* Collectibles & Progression */
    int32_t  nLumsCollected;                /* Yellow Lums collected (0 to 1000) */
    int32_t  nCagesBroken;                  /* Cages broken (0 to 80) */
    int32_t  nLivesCount;                   /* Remaining lives (default 3) */

    /* Rayman Status & Powers */
    int32_t  nMaxHealth;                    /* Maximum hit points (default 100) */
    int32_t  nCurrentHealth;                /* Current hit points (default 100) */
    uint32_t uUnlockedPowers;               /* Bitmask of unlocked abilities (R2_SavePowers) */
    int32_t  nFistPowerLevel;               /* Fist charge / power upgrade level (0 to 3) */

    /* Timers & Epoch Timestamp */
    uint32_t uPlayTimeSeconds;              /* Total elapsed gameplay time in seconds */
    uint64_t uTimestamp;                    /* POSIX epoch timestamp of last save */

    /* Extension Reserved Storage */
    uint32_t aReserved[6];                  /* Reserved for VMU / engine extensions (zeroed) */
} R2_tdst_SaveSlot;
#pragma pack(pop)

/* Checksum calculation boundaries: covers all bytes starting from nSlot to the end */
#define R2_SAVE_PAYLOAD_OFFSET      (offsetof(R2_tdst_SaveSlot, nSlot))
#define R2_SAVE_PAYLOAD_SIZE        (sizeof(R2_tdst_SaveSlot) - R2_SAVE_PAYLOAD_OFFSET)

/* ----------------------------------------------------------------------------
 * 4. Save Subsystem API Functions
 * ---------------------------------------------------------------------------- */

/**
 * Initializes the save subsystem and ensures the save directory exists.
 * Returns true if the save directory is ready, false otherwise.
 */
bool SAVE_Vita_Init(void);

/**
 * Overrides the save directory path (useful for host testing).
 * Passing NULL or empty string resets back to R2_DEFAULT_SAVE_DIR ("ux0:data/rayman2/Save/").
 */
void SAVE_vSetSaveDirectory(const char *dir);

/**
 * Returns the currently configured save directory path.
 */
const char *SAVE_szGetSaveDirectory(void);

/**
 * Saves game state into the specified slot (1 to 3).
 * Uses an atomic write protocol (slot%d.sav.tmp -> slot%d.sav).
 * Automatically updates magic, version, slot number, and computes CRC32.
 */
bool SAVE_bSaveSlot(int nSlot, const R2_tdst_SaveSlot *pSave);

/**
 * Loads game state from the specified slot (1 to 3).
 * Validates slot bounds, file size, magic, version, and verifies CRC32 payload checksum.
 * Returns true on success, false if the slot is missing or corrupted.
 */
bool SAVE_bLoadSlot(int nSlot, R2_tdst_SaveSlot *pSave);

/**
 * Checks whether a valid save file exists for the given slot (1 to 3).
 */
bool SAVE_bSlotExists(int nSlot);

/**
 * Deletes the save file for the specified slot (1 to 3) along with any leftover .tmp files.
 */
bool SAVE_bDeleteSlot(int nSlot);

/**
 * Computes standard IEEE 802.3 CRC32 checksum over a buffer.
 */
uint32_t SAVE_uCalculateCRC32(const void *pData, size_t nBytes);

/**
 * Initializes a save slot structure with default starting values for Rayman 2.
 */
void SAVE_vInitDefaultSlot(int nSlot, R2_tdst_SaveSlot *pSave);

#ifdef __cplusplus
}
#endif

#endif /* SAVE_VITA_H */
