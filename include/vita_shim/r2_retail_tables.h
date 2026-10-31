/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: r2_retail_tables.h
 *
 * Comprehensive Snapshot Loading, Relocation & Level Table Definitions.
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef R2_RETAIL_TABLES_H
#define R2_RETAIL_TABLES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * Section 1: Dreamcast Snapshot Encryption & Memory Constants
 * ---------------------------------------------------------------------------- */
/* Dreamcast vs. PC Snapshot Encryption Architecture:
 * - Dreamcast Baseline (DCLoad.c / FileMng.c):
 *     FIX.DAT, FIX.TMP, %s.DAT, %s.TMP files are UNENCRYPTED raw memory blocks.
 *     The engine directly loads the snapshot image into 32-byte aligned RAM buffers.
 * - PC Retail Guidance (0x0044DF5E):
 *     XOR cipher using a 32-bit linear congruential generator (seed 0x075BD924,
 *     multiplier 0x834E0B5F, byte key mod 255).
 */
#define R2_DC_SNA_IS_ENCRYPTED            0       /* 0 = Raw unencrypted snapshot */
#define R2_PC_SNA_XOR_SEED                0x075BD924
#define R2_PC_SNA_LCG_MULTIPLIER          0x834E0B5F

/* Dreamcast Memory Space Constants */
#define R2_DC_RAM_BASE                    0x8C000000U
#define R2_DC_RAM_SIZE                    (16 * 1024 * 1024) /* 16 MB */
#define R2_DC_EXEC_BASE                   0x8C010000U
#define R2_DC_ALIGNMENT_BYTES             32U

/* Ground Truth Function VAs in 1ST_READ.BIN */
#define R2_DC_VA_DCLOAD_LOAD_FIX          0x8C03AF20U /* DCLoad_fn_vLoadFix */
#define R2_DC_VA_DCLOAD_LOAD_LEVEL_TMP    0x8C03B4C0U /* DCLoad_fn_vLoadLevelTmp */
#define R2_DC_VA_DCLOAD_LOAD_LEVEL_DAT    0x8C03B5A0U /* DCLoad_fn_vLoadLevelDat */
#define R2_DC_VA_DCLOAD_RELOCATE_LEVEL    0x8C03BA74U /* DCLoad_fn_vRelocateLevel */
#define R2_DC_VA_FILEMNG_READ_FILE        0x8C0128BEU /* FileMng_fn_vReadFile */
#define R2_DC_VA_FILEMNG_READ_ASYNC       0x8C012B02U /* FileMng_fn_vReadAsync */
#define R2_DC_VA_RELOCATE_POINTER         0x8C061B70U /* Resolves (block_id << 16)|index */
#define R2_DC_VA_FIND_BLOCK_NODE          0x8C06152EU /* Searches block list for block_id */

/* Ground Truth Global Pointer & State Variables */
#define R2_DC_VA_GLOBAL_POINTER_TABLE     0x8C0C7C90U /* GPT array (block base pointers) */
#define R2_DC_VA_BLOCK_LIST_HEAD          0x8C2D494CU /* Head of loaded BlockNode list */
#define R2_DC_VA_FIX_DAT_BUFFER           0x8C0C55ECU /* Loaded FIX.DAT buffer pointer */
#define R2_DC_VA_LEVEL_DAT_BUFFER         0x8C0C55F0U /* Loaded Level.DAT buffer pointer */
#define R2_DC_VA_LEVEL_TMP_BUFFER         0x8C0C55E4U /* Loaded Level.TMP buffer pointer */
#define R2_DC_VA_WORLD_SUPEROBJECT        0x8C1247D8U /* Root SuperObject of loaded world */

/* ----------------------------------------------------------------------------
 * Section 2: Complete Dreamcast Level Index Enum (79 Levels)
 * ---------------------------------------------------------------------------- */
typedef enum R2_tenu_LevelId {
    R2_LVL_ASTRO_00          =  0, /* 0x8C0B9904: ASTRO_00     - Echoing Caves (Cutscene) */
    R2_LVL_ASTRO_10          =  1, /* 0x8C0B9910: ASTRO_10     - Echoing Caves (Intro) */
    R2_LVL_B_DISC            =  2, /* 0x8C0B991C: B_DISC       - Globox Disc (Dreamcast Exclusive Minigame) */
    R2_LVL_B_INVADE          =  3, /* 0x8C0B9924: B_INVADE     - Space Invaders Minigame */
    R2_LVL_B_LIFT            =  4, /* 0x8C0B9930: B_LIFT       - Pyramid Lift Challenge */
    R2_LVL_B_PYRAM           =  5, /* 0x8C0B9938: B_PYRAM      - Pyramid Challenge */
    R2_LVL_B_TOILE           =  6, /* 0x8C0B9940: B_TOILE      - Bonus Challenge Web */
    R2_LVL_BALL              =  7, /* 0x8C0B9948: BALL         - Bonus Ball Minigame */
    R2_LVL_BAST_09           =  8, /* 0x8C0B9950: BAST_09      - The Marshes of Awakening (Intro) */
    R2_LVL_BAST_10           =  9, /* 0x8C0B9958: BAST_10      - The Marshes of Awakening (Part 1 - Ssssam) */
    R2_LVL_BAST_20           = 10, /* 0x8C0B9960: BAST_20      - The Marshes of Awakening (Part 2) */
    R2_LVL_BAST_22           = 11, /* 0x8C0B9968: BAST_22      - The Marshes of Awakening (Part 3) */
    R2_LVL_BATAM_10          = 12, /* 0x8C0B9970: BATAM_10     - Beneath the Sanctuary of Rock and Lava (Part 1) */
    R2_LVL_BATAM_20          = 13, /* 0x8C0B997C: BATAM_20     - Beneath the Sanctuary of Rock and Lava (Part 2) */
    R2_LVL_BOAT01            = 14, /* 0x8C0B9988: BOAT01       - The Tomb of the Ancients (Part 1) */
    R2_LVL_BOAT02            = 15, /* 0x8C0B9990: BOAT02       - The Tomb of the Ancients (Part 2) */
    R2_LVL_BONUX             = 16, /* 0x8C0B9998: BONUX        - Bonus Level (Baby Globox) */
    R2_LVL_CASK_10           = 17, /* 0x8C0B99A0: CASK_10      - The Menhir Hills (Part 1) */
    R2_LVL_CASK_30           = 18, /* 0x8C0B99A8: CASK_30      - The Menhir Hills (Part 2 - Walking Shell) */
    R2_LVL_CHASE_10          = 19, /* 0x8C0B99B0: CHASE_10     - The Canopy (Part 1) */
    R2_LVL_CHASE_22          = 20, /* 0x8C0B99BC: CHASE_22     - The Canopy (Part 2) */
    R2_LVL_DEMOS             = 21, /* 0x8C0B99C8: DEMOS        - Demo Level Directory */
    R2_LVL_EARTH_10          = 22, /* 0x8C0B99D0: EARTH_10     - The Sanctuary of Stone and Fire (Part 1) */
    R2_LVL_EARTH_20          = 23, /* 0x8C0B99DC: EARTH_20     - The Sanctuary of Stone and Fire (Part 2) */
    R2_LVL_EARTH_30          = 24, /* 0x8C0B99E8: EARTH_30     - The Sanctuary of Stone and Fire (Part 3 - Umber) */
    R2_LVL_END_10            = 25, /* 0x8C0B99F4: END_10       - The Crow's Nest (Final Boss - Grolgoth) */
    R2_LVL_GLOB_10           = 26, /* 0x8C0B99FC: GLOB_10      - The Iron Mountains (Part 1 - Reformatory) */
    R2_LVL_GLOB_20           = 27, /* 0x8C0B9A04: GLOB_20      - The Iron Mountains (Part 2) */
    R2_LVL_GLOB_30           = 28, /* 0x8C0B9A0C: GLOB_30      - The Iron Mountains (Part 3) */
    R2_LVL_GLOBVILL          = 29, /* 0x8C0B9A14: GLOBVILL     - Globox's Village (Minigame Hub) */
    R2_LVL_GLODISC_CINE      = 30, /* 0x8C0B9A20: GLODISC_CINE - Globox Disc Cinematic Intro */
    R2_LVL_HELIC_10          = 31, /* 0x8C0B9A30: HELIC_10     - The Precipice (Part 1) */
    R2_LVL_HELIC_20          = 32, /* 0x8C0B9A3C: HELIC_20     - The Precipice (Part 2) */
    R2_LVL_HELIC_30          = 33, /* 0x8C0B9A48: HELIC_30     - The Precipice (Part 3) */
    R2_LVL_ILE_10            = 34, /* 0x8C0B9A54: ILE_10       - Whale Bay (Entrance) */
    R2_LVL_JAIL_10           = 35, /* 0x8C0B9A5C: JAIL_10      - The Prison Ship (Intro - Escape) */
    R2_LVL_JAIL_20           = 36, /* 0x8C0B9A64: JAIL_20      - The Prison Ship (Brig) */
    R2_LVL_LEARN_10          = 37, /* 0x8C0B9A6C: LEARN_10     - The Woods of Light */
    R2_LVL_LEARN_30          = 38, /* 0x8C0B9A78: LEARN_30     - The Fairy Glade (Part 1 - Forest) */
    R2_LVL_LEARN_31          = 39, /* 0x8C0B9A84: LEARN_31     - The Fairy Glade (Part 2 - Stronghold) */
    R2_LVL_LEARN_40          = 40, /* 0x8C0B9A90: LEARN_40     - The Fairy Glade (Part 3 - Pipe Network) */
    R2_LVL_LEARN_60          = 41, /* 0x8C0B9A9C: LEARN_60     - The Fairy Glade (Part 4 - Ly's Prison) */
    R2_LVL_LIBER_10          = 42, /* 0x8C0B9AA8: LIBER_10     - The Echoing Caves (Freeing the Pirate) */
    R2_LVL_LY_10             = 43, /* 0x8C0B9AB4: LY_10        - The Walk of Life */
    R2_LVL_LY_20             = 44, /* 0x8C0B9ABC: LY_20        - The Walk of Power */
    R2_LVL_MAPMONDE2         = 45, /* 0x8C0B9AC4: MAPMONDE2    - 3D Isle of Doors (Interactive Hub World) */
    R2_LVL_MENU              = 46, /* 0x8C0B9AD0: MENU         - Main Menu / Title Screen */
    R2_LVL_MINE_10           = 47, /* 0x8C0B9AD8: MINE_10      - The Sanctuary of Rock and Lava */
    R2_LVL_MORB_00           = 48, /* 0x8C0B9AE0: MORB_00      - The Cave of Bad Dreams (Intro) */
    R2_LVL_MORB_10           = 49, /* 0x8C0B9AE8: MORB_10      - The Cave of Bad Dreams (Part 1) */
    R2_LVL_MORB_20           = 50, /* 0x8C0B9AF0: MORB_20      - The Cave of Bad Dreams (Part 2 - Jano) */
    R2_LVL_NAVE_10           = 51, /* 0x8C0B9AF8: NAVE_10      - The Prison Ship (Exterior) */
    R2_LVL_NAVE_15           = 52, /* 0x8C0B9B00: NAVE_15      - The Prison Ship (Engine Room) */
    R2_LVL_NAVE_20           = 53, /* 0x8C0B9B08: NAVE_20      - The Prison Ship (Deck) */
    R2_LVL_NEGO_10           = 54, /* 0x8C0B9B10: NEGO_10      - The Bayou (Negos) */
    R2_LVL_PLUM_00           = 55, /* 0x8C0B9B18: PLUM_00      - Sanctuary of Rock and Lava (Plum Ride 1) */
    R2_LVL_PLUM_10           = 56, /* 0x8C0B9B20: PLUM_10      - Sanctuary of Rock and Lava (Plum Ride 2) */
    R2_LVL_PLUM_20           = 57, /* 0x8C0B9B28: PLUM_20      - Sanctuary of Rock and Lava (Plum Ride 3) */
    R2_LVL_POLOC_10          = 58, /* 0x8C0B9B30: POLOC_10     - The Echoing Caves (Part 1) */
    R2_LVL_POLOC_20          = 59, /* 0x8C0B9B3C: POLOC_20     - The Echoing Caves (Part 2) */
    R2_LVL_POLOC_30          = 60, /* 0x8C0B9B48: POLOC_30     - The Echoing Caves (Part 3) */
    R2_LVL_POLOC_40          = 61, /* 0x8C0B9B54: POLOC_40     - The Echoing Caves (Part 4) */
    R2_LVL_RAYCAP            = 62, /* 0x8C0B9B60: RAYCAP       - Rayman Character Capture / Vignette */
    R2_LVL_RHOP_10           = 63, /* 0x8C0B9B68: RHOP_10      - The Bayou (Intro) */
    R2_LVL_RODEO_10          = 64, /* 0x8C0B9B70: RODEO_10     - The Top of the World (Part 1) */
    R2_LVL_RODEO_40          = 65, /* 0x8C0B9B7C: RODEO_40     - The Top of the World (Part 2 - Barrel Ride) */
    R2_LVL_RODEO_60          = 66, /* 0x8C0B9B88: RODEO_60     - The Top of the World (Part 3) */
    R2_LVL_SEAT_10           = 67, /* 0x8C0B9B94: SEAT_10      - The Sanctuary of Water and Ice (Entrance) */
    R2_LVL_SEAT_11           = 68, /* 0x8C0B9B9C: SEAT_11      - The Sanctuary of Water and Ice (Slide) */
    R2_LVL_SKI_10            = 69, /* 0x8C0B9BA4: SKI_10       - The Iron Mountains (Water Skiing) */
    R2_LVL_SKI_60            = 70, /* 0x8C0B9BAC: SKI_60       - The Iron Mountains (Airship Escape) */
    R2_LVL_STAFF_10          = 71, /* 0x8C0B9BB4: STAFF_10     - The Prison Ship (Credits / Staff) */
    R2_LVL_VULCA_10          = 72, /* 0x8C0B9BC0: VULCA_10     - The Lava Sanctuary (Part 1) */
    R2_LVL_VULCA_20          = 73, /* 0x8C0B9BCC: VULCA_20     - The Lava Sanctuary (Part 2) */
    R2_LVL_WATER_10          = 74, /* 0x8C0B9BD8: WATER_10     - The Sanctuary of Water and Ice (Part 1) */
    R2_LVL_WATER_20          = 75, /* 0x8C0B9BE4: WATER_20     - The Sanctuary of Water and Ice (Part 2 - Axel) */
    R2_LVL_WHALE_00          = 76, /* 0x8C0B9BF0: WHALE_00     - Whale Bay (Part 1 - Carmen) */
    R2_LVL_WHALE_05          = 77, /* 0x8C0B9BFC: WHALE_05     - Whale Bay (Part 2 - Underwater) */
    R2_LVL_WHALE_10          = 78, /* 0x8C0B9C08: WHALE_10     - Whale Bay (Part 3 - Pirate Outpost) */
    R2_LVL_COUNT             = 79,

    /* Semantic & Milestone Aliases */
    R2_LVL_FIRST_PLAYABLE    = R2_LVL_LEARN_10,      /* The Woods of Light */
    R2_LVL_HUB_ISLE_OF_DOORS = R2_LVL_MAPMONDE2,     /* 3D Interactive Hub (DC Exclusive) */
    R2_LVL_MAIN_MENU         = R2_LVL_MENU,          /* Main Menu / Title */
    R2_LVL_GLOBOX_DISC       = R2_LVL_B_DISC,        /* Globox Disc 2-Player Minigame */
    R2_LVL_FINAL_BOSS        = R2_LVL_END_10,        /* The Crow's Nest (Grolgoth) */
    R2_LVL_INVALID           = -1
} R2_tenu_LevelId;

/* ----------------------------------------------------------------------------
 * Section 3: Snapshot, Relocation & Block Header Structures
 * ---------------------------------------------------------------------------- */

/* .TMP File Header (16 bytes, Little-Endian):
 * Present in all Dreamcast level .TMP files.
 */
#pragma pack(push, 1)
typedef struct R2_tdst_TmpHeader {
    uint32_t ulTable1Offset; /* Byte offset from start of file to GPT Object Pointer Table */
    uint32_t ulTable1Count;  /* Number of GPT object pointers (Table 1 entries) */
    uint32_t ulTable2Offset; /* Byte offset from start of file to RTB Relocation Table */
    uint32_t ulTable2Count;  /* Number of RTB relocation entries (Table 2 entries) */
} R2_tdst_TmpHeader;

/* RTB (Relocation Table Block) Entry (8 bytes):
 * Defines an individual pointer to be relocated at runtime.
 */
typedef struct R2_tdst_RtbEntry {
#if defined(__LP64__) || defined(_LP64)
    uint32_t  pTargetPointer; /* 32-bit VA on disk (ensures 8 bytes on 64-bit host) */
#else
    uint32_t *pTargetPointer; /* Virtual address in memory where resolved pointer is written */
#endif
    uint32_t  ulRelocValue;   /* Encoded token: (block_id << 16) | element_index (0xFFFFFFFF = NULL) */
} R2_tdst_RtbEntry;

/* Block Node Descriptor in Linked List (Head @ 0x8C2D494C):
 * Reconstructed from 0x8C06152E (FindBlockNode) and 0x8C061B70.
 */
typedef struct R2_tdst_BlockSubInfo {
    uint32_t  ulUnknown00;
    uint8_t  *pArray;        /* Base pointer to allocated memory array for this block */
    uint32_t  ulMaxCount;     /* Capacity / maximum element count for bounds check */
    uint32_t  ulElementStride;/* Stride in bytes per element */
} R2_tdst_BlockSubInfo;

typedef struct R2_tdst_BlockNode {
    uint32_t                  ulBlockId;     /* Block identifier (matches high 16 bits of reloc token) */
    uint32_t                  ulFlags;       /* Block state / load flags */
    uint32_t                  ulReserved[6];
    struct R2_tdst_BlockSubInfo *pSubInfo;   /* Offset 0x20 (32 bytes): Sub-information & array pointer */
    uint32_t                  ulState;       /* Offset 0x24 */
    struct R2_tdst_BlockNode *pNext;         /* Offset 0x28 (40 bytes): Next block node in linked list */
} R2_tdst_BlockNode;

/* Level Snapshot Header (First 16 dwords of %s.DAT):
 * Uncompressed raw snapshot image dumped from Dreamcast memory.
 */
typedef struct R2_tdst_DatHeader {
    uint32_t aInitialPointers[10]; /* Initial module pointers dumped at snapshot save */
    uint32_t ulFixReference;      /* Offset 0x28: Reference to Fix block address */
    uint32_t ulSubBlockCount;     /* Offset 0x2C: Number of sub-structures / sectors */
    uint32_t aSubBlockPointers[4]; /* Offset 0x30 - 0x3C */
} R2_tdst_DatHeader;

/* Global Pointer Table (GPT) Object Structure (pointed to by Table 1):
 * Offset 11 contains the block_id to look up in g_aGlobalPointerTable;
 * Offset 4 receives the resolved block base pointer.
 */
typedef struct R2_tdst_GptObject {
    uint32_t  ulHeader;
#if defined(__LP64__) || defined(_LP64)
    uint32_t  pResolvedBlockBase; /* Offset 0x04: 32-bit pointer */
#else
    uint32_t *pResolvedBlockBase; /* Offset 0x04: Written by DCLoad_fn_vRelocateLevel */
#endif
    uint8_t   bPadding[3];
    uint8_t   bBlockId;            /* Offset 0x0B (11): GPT table index */
} R2_tdst_GptObject;
#pragma pack(pop)

/* ----------------------------------------------------------------------------
 * Section 4: Level Directory Descriptor Table
 * ---------------------------------------------------------------------------- */
typedef struct R2_tdst_LevelDescriptor {
    R2_tenu_LevelId eLevelId;         /* Integer ID [0 .. 78] */
    const char     *szLevelCode;      /* Directory & filename stem (e.g. "MAPMONDE2") */
    const char     *szDisplayName;    /* Human-readable English level lore name */
    const char     *szRelativeDir;    /* Subdirectory inside DCDATA/ (e.g. "DCDATA/MAPMONDE2") */
    const char     *szDatFile;        /* Snapshot filename (e.g. "MAPMONDE2.DAT") */
    const char     *szTexFile;        /* Texture container filename (e.g. "MAPMONDE2.TEX") */
    const char     *szTmpFile;        /* Relocation table filename (e.g. "MAPMONDE2.TMP") */
    uint8_t         bIsHub;           /* 1 if this is the 3D Isle of Doors interactive hub */
    uint8_t         bIsMinigame;      /* 1 if this is a bonus level or minigame */
    uint32_t        ulDcStringVa;     /* String VA in 1ST_READ.BIN (0x8C0B9xxx) */
    uint32_t        ulDcPrimaryDirVa; /* Level pointer VA in 1ST_READ.BIN directory table */
} R2_tdst_LevelDescriptor;

/* Complete Static Level Descriptor Table (79 Levels) */
static const R2_tdst_LevelDescriptor g_aR2LevelDescriptors[R2_LVL_COUNT] = {
    /* [ 0] */ {
        R2_LVL_ASTRO_00,
        "ASTRO_00",
        "Echoing Caves (Cutscene)",
        "DCDATA/ASTRO_00",
        "ASTRO_00.DAT",
        "ASTRO_00.TEX",
        "ASTRO_00.TMP",
        0, 0,
        0x8C0B9904U, 0x8C03D6D4U
    },
    /* [ 1] */ {
        R2_LVL_ASTRO_10,
        "ASTRO_10",
        "Echoing Caves (Intro)",
        "DCDATA/ASTRO_10",
        "ASTRO_10.DAT",
        "ASTRO_10.TEX",
        "ASTRO_10.TMP",
        0, 0,
        0x8C0B9910U, 0x8C03D6D8U
    },
    /* [ 2] */ {
        R2_LVL_B_DISC,
        "B_DISC",
        "Globox Disc (Dreamcast Exclusive Minigame)",
        "DCDATA/B_DISC",
        "B_DISC.DAT",
        "B_DISC.TEX",
        "B_DISC.TMP",
        0, 1,
        0x8C0B991CU, 0x8C03D6DCU
    },
    /* [ 3] */ {
        R2_LVL_B_INVADE,
        "B_INVADE",
        "Space Invaders Minigame",
        "DCDATA/B_INVADE",
        "B_INVADE.DAT",
        "B_INVADE.TEX",
        "B_INVADE.TMP",
        0, 1,
        0x8C0B9924U, 0x8C03D6E0U
    },
    /* [ 4] */ {
        R2_LVL_B_LIFT,
        "B_LIFT",
        "Pyramid Lift Challenge",
        "DCDATA/B_LIFT",
        "B_LIFT.DAT",
        "B_LIFT.TEX",
        "B_LIFT.TMP",
        0, 1,
        0x8C0B9930U, 0x8C03DAA8U
    },
    /* [ 5] */ {
        R2_LVL_B_PYRAM,
        "B_PYRAM",
        "Pyramid Challenge",
        "DCDATA/B_PYRAM",
        "B_PYRAM.DAT",
        "B_PYRAM.TEX",
        "B_PYRAM.TMP",
        0, 1,
        0x8C0B9938U, 0x8C03DAACU
    },
    /* [ 6] */ {
        R2_LVL_B_TOILE,
        "B_TOILE",
        "Bonus Challenge Web",
        "DCDATA/B_TOILE",
        "B_TOILE.DAT",
        "B_TOILE.TEX",
        "B_TOILE.TMP",
        0, 1,
        0x8C0B9940U, 0x8C03DAB0U
    },
    /* [ 7] */ {
        R2_LVL_BALL,
        "BALL",
        "Bonus Ball Minigame",
        "DCDATA/BALL",
        "BALL.DAT",
        "BALL.TEX",
        "BALL.TMP",
        0, 1,
        0x8C0B9948U, 0x8C03DAB4U
    },
    /* [ 8] */ {
        R2_LVL_BAST_09,
        "BAST_09",
        "The Marshes of Awakening (Intro)",
        "DCDATA/BAST_09",
        "BAST_09.DAT",
        "BAST_09.TEX",
        "BAST_09.TMP",
        0, 0,
        0x8C0B9950U, 0x8C03DAB8U
    },
    /* [ 9] */ {
        R2_LVL_BAST_10,
        "BAST_10",
        "The Marshes of Awakening (Part 1 - Ssssam)",
        "DCDATA/BAST_10",
        "BAST_10.DAT",
        "BAST_10.TEX",
        "BAST_10.TMP",
        0, 0,
        0x8C0B9958U, 0x8C03DABCU
    },
    /* [10] */ {
        R2_LVL_BAST_20,
        "BAST_20",
        "The Marshes of Awakening (Part 2)",
        "DCDATA/BAST_20",
        "BAST_20.DAT",
        "BAST_20.TEX",
        "BAST_20.TMP",
        0, 0,
        0x8C0B9960U, 0x8C03DAC0U
    },
    /* [11] */ {
        R2_LVL_BAST_22,
        "BAST_22",
        "The Marshes of Awakening (Part 3)",
        "DCDATA/BAST_22",
        "BAST_22.DAT",
        "BAST_22.TEX",
        "BAST_22.TMP",
        0, 0,
        0x8C0B9968U, 0x8C03DAC4U
    },
    /* [12] */ {
        R2_LVL_BATAM_10,
        "BATAM_10",
        "Beneath the Sanctuary of Rock and Lava (Part 1)",
        "DCDATA/BATAM_10",
        "BATAM_10.DAT",
        "BATAM_10.TEX",
        "BATAM_10.TMP",
        0, 0,
        0x8C0B9970U, 0x8C03DAC8U
    },
    /* [13] */ {
        R2_LVL_BATAM_20,
        "BATAM_20",
        "Beneath the Sanctuary of Rock and Lava (Part 2)",
        "DCDATA/BATAM_20",
        "BATAM_20.DAT",
        "BATAM_20.TEX",
        "BATAM_20.TMP",
        0, 0,
        0x8C0B997CU, 0x8C03DE04U
    },
    /* [14] */ {
        R2_LVL_BOAT01,
        "BOAT01",
        "The Tomb of the Ancients (Part 1)",
        "DCDATA/BOAT01",
        "BOAT01.DAT",
        "BOAT01.TEX",
        "BOAT01.TMP",
        0, 0,
        0x8C0B9988U, 0x8C03DE0CU
    },
    /* [15] */ {
        R2_LVL_BOAT02,
        "BOAT02",
        "The Tomb of the Ancients (Part 2)",
        "DCDATA/BOAT02",
        "BOAT02.DAT",
        "BOAT02.TEX",
        "BOAT02.TMP",
        0, 0,
        0x8C0B9990U, 0x8C03DE10U
    },
    /* [16] */ {
        R2_LVL_BONUX,
        "BONUX",
        "Bonus Level (Baby Globox)",
        "DCDATA/BONUX",
        "BONUX.DAT",
        "BONUX.TEX",
        "BONUX.TMP",
        0, 1,
        0x8C0B9998U, 0x8C03DE14U
    },
    /* [17] */ {
        R2_LVL_CASK_10,
        "CASK_10",
        "The Menhir Hills (Part 1)",
        "DCDATA/CASK_10",
        "CASK_10.DAT",
        "CASK_10.TEX",
        "CASK_10.TMP",
        0, 0,
        0x8C0B99A0U, 0x8C03DE18U
    },
    /* [18] */ {
        R2_LVL_CASK_30,
        "CASK_30",
        "The Menhir Hills (Part 2 - Walking Shell)",
        "DCDATA/CASK_30",
        "CASK_30.DAT",
        "CASK_30.TEX",
        "CASK_30.TMP",
        0, 0,
        0x8C0B99A8U, 0x8C03DE1CU
    },
    /* [19] */ {
        R2_LVL_CHASE_10,
        "CHASE_10",
        "The Canopy (Part 1)",
        "DCDATA/CHASE_10",
        "CHASE_10.DAT",
        "CHASE_10.TEX",
        "CHASE_10.TMP",
        0, 0,
        0x8C0B99B0U, 0x8C03DE20U
    },
    /* [20] */ {
        R2_LVL_CHASE_22,
        "CHASE_22",
        "The Canopy (Part 2)",
        "DCDATA/CHASE_22",
        "CHASE_22.DAT",
        "CHASE_22.TEX",
        "CHASE_22.TMP",
        0, 0,
        0x8C0B99BCU, 0x8C03DE24U
    },
    /* [21] */ {
        R2_LVL_DEMOS,
        "DEMOS",
        "Demo Level Directory",
        "DCDATA/DEMOS",
        "DEMOS.DAT",
        "DEMOS.TEX",
        "DEMOS.TMP",
        0, 0,
        0x8C0B99C8U, 0x8C03E008U
    },
    /* [22] */ {
        R2_LVL_EARTH_10,
        "EARTH_10",
        "The Sanctuary of Stone and Fire (Part 1)",
        "DCDATA/EARTH_10",
        "EARTH_10.DAT",
        "EARTH_10.TEX",
        "EARTH_10.TMP",
        0, 0,
        0x8C0B99D0U, 0x8C03E878U
    },
    /* [23] */ {
        R2_LVL_EARTH_20,
        "EARTH_20",
        "The Sanctuary of Stone and Fire (Part 2)",
        "DCDATA/EARTH_20",
        "EARTH_20.DAT",
        "EARTH_20.TEX",
        "EARTH_20.TMP",
        0, 0,
        0x8C0B99DCU, 0x8C03E87CU
    },
    /* [24] */ {
        R2_LVL_EARTH_30,
        "EARTH_30",
        "The Sanctuary of Stone and Fire (Part 3 - Umber)",
        "DCDATA/EARTH_30",
        "EARTH_30.DAT",
        "EARTH_30.TEX",
        "EARTH_30.TMP",
        0, 0,
        0x8C0B99E8U, 0x8C03E880U
    },
    /* [25] */ {
        R2_LVL_END_10,
        "END_10",
        "The Crow's Nest (Final Boss - Grolgoth)",
        "DCDATA/END_10",
        "END_10.DAT",
        "END_10.TEX",
        "END_10.TMP",
        0, 0,
        0x8C0B99F4U, 0x8C03EA74U
    },
    /* [26] */ {
        R2_LVL_GLOB_10,
        "GLOB_10",
        "The Iron Mountains (Part 1 - Reformatory)",
        "DCDATA/GLOB_10",
        "GLOB_10.DAT",
        "GLOB_10.TEX",
        "GLOB_10.TMP",
        0, 0,
        0x8C0B99FCU, 0x8C03EA7CU
    },
    /* [27] */ {
        R2_LVL_GLOB_20,
        "GLOB_20",
        "The Iron Mountains (Part 2)",
        "DCDATA/GLOB_20",
        "GLOB_20.DAT",
        "GLOB_20.TEX",
        "GLOB_20.TMP",
        0, 0,
        0x8C0B9A04U, 0x8C03EA80U
    },
    /* [28] */ {
        R2_LVL_GLOB_30,
        "GLOB_30",
        "The Iron Mountains (Part 3)",
        "DCDATA/GLOB_30",
        "GLOB_30.DAT",
        "GLOB_30.TEX",
        "GLOB_30.TMP",
        0, 0,
        0x8C0B9A0CU, 0x8C03EA84U
    },
    /* [29] */ {
        R2_LVL_GLOBVILL,
        "GLOBVILL",
        "Globox's Village (Minigame Hub)",
        "DCDATA/GLOBVILL",
        "GLOBVILL.DAT",
        "GLOBVILL.TEX",
        "GLOBVILL.TMP",
        0, 1,
        0x8C0B9A14U, 0x8C03EA88U
    },
    /* [30] */ {
        R2_LVL_GLODISC_CINE,
        "GLODISC_CINE",
        "Globox Disc Cinematic Intro",
        "DCDATA/GLODISC_CINE",
        "GLODISC_CINE.DAT",
        "GLODISC_CINE.TEX",
        "GLODISC_CINE.TMP",
        0, 1,
        0x8C0B9A20U, 0x8C03EC7CU
    },
    /* [31] */ {
        R2_LVL_HELIC_10,
        "HELIC_10",
        "The Precipice (Part 1)",
        "DCDATA/HELIC_10",
        "HELIC_10.DAT",
        "HELIC_10.TEX",
        "HELIC_10.TMP",
        0, 0,
        0x8C0B9A30U, 0x8C03EC80U
    },
    /* [32] */ {
        R2_LVL_HELIC_20,
        "HELIC_20",
        "The Precipice (Part 2)",
        "DCDATA/HELIC_20",
        "HELIC_20.DAT",
        "HELIC_20.TEX",
        "HELIC_20.TMP",
        0, 0,
        0x8C0B9A3CU, 0x8C03EC84U
    },
    /* [33] */ {
        R2_LVL_HELIC_30,
        "HELIC_30",
        "The Precipice (Part 3)",
        "DCDATA/HELIC_30",
        "HELIC_30.DAT",
        "HELIC_30.TEX",
        "HELIC_30.TMP",
        0, 0,
        0x8C0B9A48U, 0x8C03EE78U
    },
    /* [34] */ {
        R2_LVL_ILE_10,
        "ILE_10",
        "Whale Bay (Entrance)",
        "DCDATA/ILE_10",
        "ILE_10.DAT",
        "ILE_10.TEX",
        "ILE_10.TMP",
        0, 0,
        0x8C0B9A54U, 0x8C03EE80U
    },
    /* [35] */ {
        R2_LVL_JAIL_10,
        "JAIL_10",
        "The Prison Ship (Intro - Escape)",
        "DCDATA/JAIL_10",
        "JAIL_10.DAT",
        "JAIL_10.TEX",
        "JAIL_10.TMP",
        0, 0,
        0x8C0B9A5CU, 0x8C03EE84U
    },
    /* [36] */ {
        R2_LVL_JAIL_20,
        "JAIL_20",
        "The Prison Ship (Brig)",
        "DCDATA/JAIL_20",
        "JAIL_20.DAT",
        "JAIL_20.TEX",
        "JAIL_20.TMP",
        0, 0,
        0x8C0B9A64U, 0x8C03EE88U
    },
    /* [37] */ {
        R2_LVL_LEARN_10,
        "LEARN_10",
        "The Woods of Light",
        "DCDATA/LEARN_10",
        "LEARN_10.DAT",
        "LEARN_10.TEX",
        "LEARN_10.TMP",
        0, 0,
        0x8C0B9A6CU, 0x8C03EE8CU
    },
    /* [38] */ {
        R2_LVL_LEARN_30,
        "LEARN_30",
        "The Fairy Glade (Part 1 - Forest)",
        "DCDATA/LEARN_30",
        "LEARN_30.DAT",
        "LEARN_30.TEX",
        "LEARN_30.TMP",
        0, 0,
        0x8C0B9A78U, 0x8C03F07CU
    },
    /* [39] */ {
        R2_LVL_LEARN_31,
        "LEARN_31",
        "The Fairy Glade (Part 2 - Stronghold)",
        "DCDATA/LEARN_31",
        "LEARN_31.DAT",
        "LEARN_31.TEX",
        "LEARN_31.TMP",
        0, 0,
        0x8C0B9A84U, 0x8C03F080U
    },
    /* [40] */ {
        R2_LVL_LEARN_40,
        "LEARN_40",
        "The Fairy Glade (Part 3 - Pipe Network)",
        "DCDATA/LEARN_40",
        "LEARN_40.DAT",
        "LEARN_40.TEX",
        "LEARN_40.TMP",
        0, 0,
        0x8C0B9A90U, 0x8C03F084U
    },
    /* [41] */ {
        R2_LVL_LEARN_60,
        "LEARN_60",
        "The Fairy Glade (Part 4 - Ly's Prison)",
        "DCDATA/LEARN_60",
        "LEARN_60.DAT",
        "LEARN_60.TEX",
        "LEARN_60.TMP",
        0, 0,
        0x8C0B9A9CU, 0x8C03F274U
    },
    /* [42] */ {
        R2_LVL_LIBER_10,
        "LIBER_10",
        "The Echoing Caves (Freeing the Pirate)",
        "DCDATA/LIBER_10",
        "LIBER_10.DAT",
        "LIBER_10.TEX",
        "LIBER_10.TMP",
        0, 0,
        0x8C0B9AA8U, 0x8C03F280U
    },
    /* [43] */ {
        R2_LVL_LY_10,
        "LY_10",
        "The Walk of Life",
        "DCDATA/LY_10",
        "LY_10.DAT",
        "LY_10.TEX",
        "LY_10.TMP",
        0, 1,
        0x8C0B9AB4U, 0x8C03F284U
    },
    /* [44] */ {
        R2_LVL_LY_20,
        "LY_20",
        "The Walk of Power",
        "DCDATA/LY_20",
        "LY_20.DAT",
        "LY_20.TEX",
        "LY_20.TMP",
        0, 1,
        0x8C0B9ABCU, 0x8C03F288U
    },
    /* [45] */ {
        R2_LVL_MAPMONDE2,
        "MAPMONDE2",
        "3D Isle of Doors (Interactive Hub World)",
        "DCDATA/MAPMONDE2",
        "MAPMONDE2.DAT",
        "MAPMONDE2.TEX",
        "MAPMONDE2.TMP",
        1, 0,
        0x8C0B9AC4U, 0x8C03F28CU
    },
    /* [46] */ {
        R2_LVL_MENU,
        "MENU",
        "Main Menu / Title Screen",
        "DCDATA/MENU",
        "MENU.DAT",
        "MENU.TEX",
        "MENU.TMP",
        0, 0,
        0x8C0B9AD0U, 0x8C03F47CU
    },
    /* [47] */ {
        R2_LVL_MINE_10,
        "MINE_10",
        "The Sanctuary of Rock and Lava",
        "DCDATA/MINE_10",
        "MINE_10.DAT",
        "MINE_10.TEX",
        "MINE_10.TMP",
        0, 0,
        0x8C0B9AD8U, 0x8C03F480U
    },
    /* [48] */ {
        R2_LVL_MORB_00,
        "MORB_00",
        "The Cave of Bad Dreams (Intro)",
        "DCDATA/MORB_00",
        "MORB_00.DAT",
        "MORB_00.TEX",
        "MORB_00.TMP",
        0, 0,
        0x8C0B9AE0U, 0x8C03F484U
    },
    /* [49] */ {
        R2_LVL_MORB_10,
        "MORB_10",
        "The Cave of Bad Dreams (Part 1)",
        "DCDATA/MORB_10",
        "MORB_10.DAT",
        "MORB_10.TEX",
        "MORB_10.TMP",
        0, 0,
        0x8C0B9AE8U, 0x8C03F488U
    },
    /* [50] */ {
        R2_LVL_MORB_20,
        "MORB_20",
        "The Cave of Bad Dreams (Part 2 - Jano)",
        "DCDATA/MORB_20",
        "MORB_20.DAT",
        "MORB_20.TEX",
        "MORB_20.TMP",
        0, 0,
        0x8C0B9AF0U, 0x8C03F67CU
    },
    /* [51] */ {
        R2_LVL_NAVE_10,
        "NAVE_10",
        "The Prison Ship (Exterior)",
        "DCDATA/NAVE_10",
        "NAVE_10.DAT",
        "NAVE_10.TEX",
        "NAVE_10.TMP",
        0, 0,
        0x8C0B9AF8U, 0x8C03F680U
    },
    /* [52] */ {
        R2_LVL_NAVE_15,
        "NAVE_15",
        "The Prison Ship (Engine Room)",
        "DCDATA/NAVE_15",
        "NAVE_15.DAT",
        "NAVE_15.TEX",
        "NAVE_15.TMP",
        0, 0,
        0x8C0B9B00U, 0x8C03F684U
    },
    /* [53] */ {
        R2_LVL_NAVE_20,
        "NAVE_20",
        "The Prison Ship (Deck)",
        "DCDATA/NAVE_20",
        "NAVE_20.DAT",
        "NAVE_20.TEX",
        "NAVE_20.TMP",
        0, 0,
        0x8C0B9B08U, 0x8C03F688U
    },
    /* [54] */ {
        R2_LVL_NEGO_10,
        "NEGO_10",
        "The Bayou (Negos)",
        "DCDATA/NEGO_10",
        "NEGO_10.DAT",
        "NEGO_10.TEX",
        "NEGO_10.TMP",
        0, 0,
        0x8C0B9B10U, 0x8C03F87CU
    },
    /* [55] */ {
        R2_LVL_PLUM_00,
        "PLUM_00",
        "Sanctuary of Rock and Lava (Plum Ride 1)",
        "DCDATA/PLUM_00",
        "PLUM_00.DAT",
        "PLUM_00.TEX",
        "PLUM_00.TMP",
        0, 0,
        0x8C0B9B18U, 0x8C03F880U
    },
    /* [56] */ {
        R2_LVL_PLUM_10,
        "PLUM_10",
        "Sanctuary of Rock and Lava (Plum Ride 2)",
        "DCDATA/PLUM_10",
        "PLUM_10.DAT",
        "PLUM_10.TEX",
        "PLUM_10.TMP",
        0, 0,
        0x8C0B9B20U, 0x8C03F884U
    },
    /* [57] */ {
        R2_LVL_PLUM_20,
        "PLUM_20",
        "Sanctuary of Rock and Lava (Plum Ride 3)",
        "DCDATA/PLUM_20",
        "PLUM_20.DAT",
        "PLUM_20.TEX",
        "PLUM_20.TMP",
        0, 0,
        0x8C0B9B28U, 0x8C03F888U
    },
    /* [58] */ {
        R2_LVL_POLOC_10,
        "POLOC_10",
        "The Echoing Caves (Part 1)",
        "DCDATA/POLOC_10",
        "POLOC_10.DAT",
        "POLOC_10.TEX",
        "POLOC_10.TMP",
        0, 0,
        0x8C0B9B30U, 0x8C03FA74U
    },
    /* [59] */ {
        R2_LVL_POLOC_20,
        "POLOC_20",
        "The Echoing Caves (Part 2)",
        "DCDATA/POLOC_20",
        "POLOC_20.DAT",
        "POLOC_20.TEX",
        "POLOC_20.TMP",
        0, 0,
        0x8C0B9B3CU, 0x8C03FA80U
    },
    /* [60] */ {
        R2_LVL_POLOC_30,
        "POLOC_30",
        "The Echoing Caves (Part 3)",
        "DCDATA/POLOC_30",
        "POLOC_30.DAT",
        "POLOC_30.TEX",
        "POLOC_30.TMP",
        0, 0,
        0x8C0B9B48U, 0x8C03FA84U
    },
    /* [61] */ {
        R2_LVL_POLOC_40,
        "POLOC_40",
        "The Echoing Caves (Part 4)",
        "DCDATA/POLOC_40",
        "POLOC_40.DAT",
        "POLOC_40.TEX",
        "POLOC_40.TMP",
        0, 0,
        0x8C0B9B54U, 0x8C03FA88U
    },
    /* [62] */ {
        R2_LVL_RAYCAP,
        "RAYCAP",
        "Rayman Character Capture / Vignette",
        "DCDATA/RAYCAP",
        "RAYCAP.DAT",
        "RAYCAP.TEX",
        "RAYCAP.TMP",
        0, 0,
        0x8C0B9B60U, 0x8C03FC78U
    },
    /* [63] */ {
        R2_LVL_RHOP_10,
        "RHOP_10",
        "The Bayou (Intro)",
        "DCDATA/RHOP_10",
        "RHOP_10.DAT",
        "RHOP_10.TEX",
        "RHOP_10.TMP",
        0, 0,
        0x8C0B9B68U, 0x8C03FC80U
    },
    /* [64] */ {
        R2_LVL_RODEO_10,
        "RODEO_10",
        "The Top of the World (Part 1)",
        "DCDATA/RODEO_10",
        "RODEO_10.DAT",
        "RODEO_10.TEX",
        "RODEO_10.TMP",
        0, 0,
        0x8C0B9B70U, 0x8C03FC84U
    },
    /* [65] */ {
        R2_LVL_RODEO_40,
        "RODEO_40",
        "The Top of the World (Part 2 - Barrel Ride)",
        "DCDATA/RODEO_40",
        "RODEO_40.DAT",
        "RODEO_40.TEX",
        "RODEO_40.TMP",
        0, 0,
        0x8C0B9B7CU, 0x8C03FC88U
    },
    /* [66] */ {
        R2_LVL_RODEO_60,
        "RODEO_60",
        "The Top of the World (Part 3)",
        "DCDATA/RODEO_60",
        "RODEO_60.DAT",
        "RODEO_60.TEX",
        "RODEO_60.TMP",
        0, 0,
        0x8C0B9B88U, 0x8C03FE74U
    },
    /* [67] */ {
        R2_LVL_SEAT_10,
        "SEAT_10",
        "The Sanctuary of Water and Ice (Entrance)",
        "DCDATA/SEAT_10",
        "SEAT_10.DAT",
        "SEAT_10.TEX",
        "SEAT_10.TMP",
        0, 0,
        0x8C0B9B94U, 0x8C03FE80U
    },
    /* [68] */ {
        R2_LVL_SEAT_11,
        "SEAT_11",
        "The Sanctuary of Water and Ice (Slide)",
        "DCDATA/SEAT_11",
        "SEAT_11.DAT",
        "SEAT_11.TEX",
        "SEAT_11.TMP",
        0, 0,
        0x8C0B9B9CU, 0x8C03FE84U
    },
    /* [69] */ {
        R2_LVL_SKI_10,
        "SKI_10",
        "The Iron Mountains (Water Skiing)",
        "DCDATA/SKI_10",
        "SKI_10.DAT",
        "SKI_10.TEX",
        "SKI_10.TMP",
        0, 0,
        0x8C0B9BA4U, 0x8C03FE88U
    },
    /* [70] */ {
        R2_LVL_SKI_60,
        "SKI_60",
        "The Iron Mountains (Airship Escape)",
        "DCDATA/SKI_60",
        "SKI_60.DAT",
        "SKI_60.TEX",
        "SKI_60.TMP",
        0, 0,
        0x8C0B9BACU, 0x8C03FE8CU
    },
    /* [71] */ {
        R2_LVL_STAFF_10,
        "STAFF_10",
        "The Prison Ship (Credits / Staff)",
        "DCDATA/STAFF_10",
        "STAFF_10.DAT",
        "STAFF_10.TEX",
        "STAFF_10.TMP",
        0, 0,
        0x8C0B9BB4U, 0x8C04007CU
    },
    /* [72] */ {
        R2_LVL_VULCA_10,
        "VULCA_10",
        "The Lava Sanctuary (Part 1)",
        "DCDATA/VULCA_10",
        "VULCA_10.DAT",
        "VULCA_10.TEX",
        "VULCA_10.TMP",
        0, 0,
        0x8C0B9BC0U, 0x8C040080U
    },
    /* [73] */ {
        R2_LVL_VULCA_20,
        "VULCA_20",
        "The Lava Sanctuary (Part 2)",
        "DCDATA/VULCA_20",
        "VULCA_20.DAT",
        "VULCA_20.TEX",
        "VULCA_20.TMP",
        0, 0,
        0x8C0B9BCCU, 0x8C040084U
    },
    /* [74] */ {
        R2_LVL_WATER_10,
        "WATER_10",
        "The Sanctuary of Water and Ice (Part 1)",
        "DCDATA/WATER_10",
        "WATER_10.DAT",
        "WATER_10.TEX",
        "WATER_10.TMP",
        0, 0,
        0x8C0B9BD8U, 0x8C040088U
    },
    /* [75] */ {
        R2_LVL_WATER_20,
        "WATER_20",
        "The Sanctuary of Water and Ice (Part 2 - Axel)",
        "DCDATA/WATER_20",
        "WATER_20.DAT",
        "WATER_20.TEX",
        "WATER_20.TMP",
        0, 0,
        0x8C0B9BE4U, 0x8C04027CU
    },
    /* [76] */ {
        R2_LVL_WHALE_00,
        "WHALE_00",
        "Whale Bay (Part 1 - Carmen)",
        "DCDATA/WHALE_00",
        "WHALE_00.DAT",
        "WHALE_00.TEX",
        "WHALE_00.TMP",
        0, 0,
        0x8C0B9BF0U, 0x8C040280U
    },
    /* [77] */ {
        R2_LVL_WHALE_05,
        "WHALE_05",
        "Whale Bay (Part 2 - Underwater)",
        "DCDATA/WHALE_05",
        "WHALE_05.DAT",
        "WHALE_05.TEX",
        "WHALE_05.TMP",
        0, 0,
        0x8C0B9BFCU, 0x8C040284U
    },
    /* [78] */ {
        R2_LVL_WHALE_10,
        "WHALE_10",
        "Whale Bay (Part 3 - Pirate Outpost)",
        "DCDATA/WHALE_10",
        "WHALE_10.DAT",
        "WHALE_10.TEX",
        "WHALE_10.TMP",
        0, 0,
        0x8C0B9C08U, 0x8C040288U
    },
};

/* ----------------------------------------------------------------------------
 * Section 5: Inline Relocation & Pointer Decoding Helper Functions
 * ---------------------------------------------------------------------------- */

/* Extract Block ID from an encoded relocation token (high 16 bits) */
static inline uint16_t R2_fn_u16GetRelocBlockId(uint32_t ulRelocToken) {
    return (uint16_t)(ulRelocToken >> 16);
}

/* Extract Element Index from an encoded relocation token (low 16 bits) */
static inline uint16_t R2_fn_u16GetRelocElementIndex(uint32_t ulRelocToken) {
    return (uint16_t)(ulRelocToken & 0xFFFFU);
}

/* Check if a relocation token is a NULL sentinel (0xFFFFFFFF) */
static inline bool R2_fn_bIsRelocNull(uint32_t ulRelocToken) {
    return (ulRelocToken == 0xFFFFFFFFU);
}

/* Resolve a single RTB relocation token using a provided BlockNode linked list */
static inline void* R2_fn_pResolveRelocPointer(const R2_tdst_BlockNode *pBlockListHead, uint32_t ulRelocToken) {
    if (R2_fn_bIsRelocNull(ulRelocToken)) {
        return NULL;
    }
    uint16_t u16BlockId = R2_fn_u16GetRelocBlockId(ulRelocToken);
    uint16_t u16ElemIdx = R2_fn_u16GetRelocElementIndex(ulRelocToken);
    const R2_tdst_BlockNode *pCurr = pBlockListHead;
    while (pCurr != NULL) {
        if (pCurr->ulBlockId == (uint32_t)u16BlockId) {
            if (pCurr->pSubInfo != NULL) {
                if ((uint32_t)u16ElemIdx < pCurr->pSubInfo->ulMaxCount) {
                    uint32_t stride = pCurr->pSubInfo->ulElementStride ? pCurr->pSubInfo->ulElementStride : 32U;
                    return (void*)(pCurr->pSubInfo->pArray + (uint32_t)u16ElemIdx * stride);
                }
            }
            return NULL;
        }
        pCurr = pCurr->pNext;
    }
    return NULL;
}

/* Apply Table 1 (GPT) and Table 2 (RTB) relocations from loaded .TMP buffer */
static inline void R2_fn_vApplyTmpRelocations(const uint8_t *pTmpBuffer,
                                              uint32_t const *pGlobalPointerTable,
                                              const R2_tdst_BlockNode *pBlockListHead) {
    if (!pTmpBuffer) return;
    const R2_tdst_TmpHeader *pHdr = (const R2_tdst_TmpHeader*)pTmpBuffer;

    /* 1. Global Pointer Table (GPT) Resolution: Table 1 */
    if (pHdr->ulTable1Count > 0 && pGlobalPointerTable != NULL) {
        uint32_t const *pTable1 = (uint32_t const *)(pTmpBuffer + pHdr->ulTable1Offset);
        for (uint32_t i = 0; i < pHdr->ulTable1Count; i++) {
            uint8_t *pObj = (uint8_t*)(uintptr_t)pTable1[i];
            if (pObj) {
                uint8_t bBlockId = pObj[11];
                uint32_t ulBase = pGlobalPointerTable[bBlockId];
                *(uint32_t*)(pObj + 4) = ulBase;
            }
        }
    }

    /* 2. Relocation Table Block (RTB) Resolution: Table 2 */
    if (pHdr->ulTable2Count > 0 && pBlockListHead != NULL) {
        const R2_tdst_RtbEntry *pTable2 = (const R2_tdst_RtbEntry*)(pTmpBuffer + pHdr->ulTable2Offset);
        for (uint32_t i = 0; i < pHdr->ulTable2Count; i++) {
            uint32_t *pTarget = (uint32_t*)(uintptr_t)pTable2[i].pTargetPointer;
            if (pTarget) {
                *pTarget = (uint32_t)(uintptr_t)R2_fn_pResolveRelocPointer(pBlockListHead, pTable2[i].ulRelocValue);
            }
        }
    }
}

#ifdef __cplusplus
}
#endif

#endif /* R2_RETAIL_TABLES_H */
