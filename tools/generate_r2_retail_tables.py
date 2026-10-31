#!/usr/bin/env python3
"""
Generate include/vita_shim/r2_retail_tables.h for Rayman 2 PS Vita Port.
Reconciled from Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000) and PC Rayman2.exe (x86 @ 0x00400000).
"""

import os
import sys

OUTPUT_FILE = "include/vita_shim/r2_retail_tables.h"

levels = [
    ( 0, "ASTRO_00",     0x8C0B9904, 0x8C03D6D4, "Echoing Caves (Cutscene)",                 0, 0),
    ( 1, "ASTRO_10",     0x8C0B9910, 0x8C03D6D8, "Echoing Caves (Intro)",                    0, 0),
    ( 2, "B_DISC",       0x8C0B991C, 0x8C03D6DC, "Globox Disc (Dreamcast Exclusive Minigame)",0, 1),
    ( 3, "B_INVADE",     0x8C0B9924, 0x8C03D6E0, "Space Invaders Minigame",                  0, 1),
    ( 4, "B_LIFT",       0x8C0B9930, 0x8C03DAA8, "Pyramid Lift Challenge",                  0, 1),
    ( 5, "B_PYRAM",      0x8C0B9938, 0x8C03DAAC, "Pyramid Challenge",                       0, 1),
    ( 6, "B_TOILE",      0x8C0B9940, 0x8C03DAB0, "Bonus Challenge Web",                     0, 1),
    ( 7, "BALL",         0x8C0B9948, 0x8C03DAB4, "Bonus Ball Minigame",                     0, 1),
    ( 8, "BAST_09",      0x8C0B9950, 0x8C03DAB8, "The Marshes of Awakening (Intro)",         0, 0),
    ( 9, "BAST_10",      0x8C0B9958, 0x8C03DABC, "The Marshes of Awakening (Part 1 - Ssssam)",0, 0),
    (10, "BAST_20",      0x8C0B9960, 0x8C03DAC0, "The Marshes of Awakening (Part 2)",         0, 0),
    (11, "BAST_22",      0x8C0B9968, 0x8C03DAC4, "The Marshes of Awakening (Part 3)",         0, 0),
    (12, "BATAM_10",     0x8C0B9970, 0x8C03DAC8, "Beneath the Sanctuary of Rock and Lava (Part 1)",0, 0),
    (13, "BATAM_20",     0x8C0B997C, 0x8C03DE04, "Beneath the Sanctuary of Rock and Lava (Part 2)",0, 0),
    (14, "BOAT01",       0x8C0B9988, 0x8C03DE0C, "The Tomb of the Ancients (Part 1)",        0, 0),
    (15, "BOAT02",       0x8C0B9990, 0x8C03DE10, "The Tomb of the Ancients (Part 2)",        0, 0),
    (16, "BONUX",        0x8C0B9998, 0x8C03DE14, "Bonus Level (Baby Globox)",               0, 1),
    (17, "CASK_10",      0x8C0B99A0, 0x8C03DE18, "The Menhir Hills (Part 1)",               0, 0),
    (18, "CASK_30",      0x8C0B99A8, 0x8C03DE1C, "The Menhir Hills (Part 2 - Walking Shell)",0, 0),
    (19, "CHASE_10",     0x8C0B99B0, 0x8C03DE20, "The Canopy (Part 1)",                     0, 0),
    (20, "CHASE_22",     0x8C0B99BC, 0x8C03DE24, "The Canopy (Part 2)",                     0, 0),
    (21, "DEMOS",        0x8C0B99C8, 0x8C03E008, "Demo Level Directory",                    0, 0),
    (22, "EARTH_10",     0x8C0B99D0, 0x8C03E878, "The Sanctuary of Stone and Fire (Part 1)", 0, 0),
    (23, "EARTH_20",     0x8C0B99DC, 0x8C03E87C, "The Sanctuary of Stone and Fire (Part 2)", 0, 0),
    (24, "EARTH_30",     0x8C0B99E8, 0x8C03E880, "The Sanctuary of Stone and Fire (Part 3 - Umber)",0, 0),
    (25, "END_10",       0x8C0B99F4, 0x8C03EA74, "The Crow's Nest (Final Boss - Grolgoth)", 0, 0),
    (26, "GLOB_10",      0x8C0B99FC, 0x8C03EA7C, "The Iron Mountains (Part 1 - Reformatory)",0, 0),
    (27, "GLOB_20",      0x8C0B9A04, 0x8C03EA80, "The Iron Mountains (Part 2)",             0, 0),
    (28, "GLOB_30",      0x8C0B9A0C, 0x8C03EA84, "The Iron Mountains (Part 3)",             0, 0),
    (29, "GLOBVILL",     0x8C0B9A14, 0x8C03EA88, "Globox's Village (Minigame Hub)",       0, 1),
    (30, "GLODISC_CINE", 0x8C0B9A20, 0x8C03EC7C, "Globox Disc Cinematic Intro",             0, 1),
    (31, "HELIC_10",     0x8C0B9A30, 0x8C03EC80, "The Precipice (Part 1)",                  0, 0),
    (32, "HELIC_20",     0x8C0B9A3C, 0x8C03EC84, "The Precipice (Part 2)",                  0, 0),
    (33, "HELIC_30",     0x8C0B9A48, 0x8C03EE78, "The Precipice (Part 3)",                  0, 0),
    (34, "ILE_10",       0x8C0B9A54, 0x8C03EE80, "Whale Bay (Entrance)",                    0, 0),
    (35, "JAIL_10",      0x8C0B9A5C, 0x8C03EE84, "The Prison Ship (Intro - Escape)",        0, 0),
    (36, "JAIL_20",      0x8C0B9A64, 0x8C03EE88, "The Prison Ship (Brig)",                  0, 0),
    (37, "LEARN_10",     0x8C0B9A6C, 0x8C03EE8C, "The Woods of Light",                      0, 0),
    (38, "LEARN_30",     0x8C0B9A78, 0x8C03F07C, "The Fairy Glade (Part 1 - Forest)",       0, 0),
    (39, "LEARN_31",     0x8C0B9A84, 0x8C03F080, "The Fairy Glade (Part 2 - Stronghold)",   0, 0),
    (40, "LEARN_40",     0x8C0B9A90, 0x8C03F084, "The Fairy Glade (Part 3 - Pipe Network)", 0, 0),
    (41, "LEARN_60",     0x8C0B9A9C, 0x8C03F274, "The Fairy Glade (Part 4 - Ly's Prison)",0, 0),
    (42, "LIBER_10",     0x8C0B9AA8, 0x8C03F280, "The Echoing Caves (Freeing the Pirate)",  0, 0),
    (43, "LY_10",        0x8C0B9AB4, 0x8C03F284, "The Walk of Life",                       0, 1),
    (44, "LY_20",        0x8C0B9ABC, 0x8C03F288, "The Walk of Power",                      0, 1),
    (45, "MAPMONDE2",    0x8C0B9AC4, 0x8C03F28C, "3D Isle of Doors (Interactive Hub World)",1, 0),
    (46, "MENU",         0x8C0B9AD0, 0x8C03F47C, "Main Menu / Title Screen",                 0, 0),
    (47, "MINE_10",      0x8C0B9AD8, 0x8C03F480, "The Sanctuary of Rock and Lava",          0, 0),
    (48, "MORB_00",      0x8C0B9AE0, 0x8C03F484, "The Cave of Bad Dreams (Intro)",          0, 0),
    (49, "MORB_10",      0x8C0B9AE8, 0x8C03F488, "The Cave of Bad Dreams (Part 1)",          0, 0),
    (50, "MORB_20",      0x8C0B9AF0, 0x8C03F67C, "The Cave of Bad Dreams (Part 2 - Jano)",  0, 0),
    (51, "NAVE_10",      0x8C0B9AF8, 0x8C03F680, "The Prison Ship (Exterior)",              0, 0),
    (52, "NAVE_15",      0x8C0B9B00, 0x8C03F684, "The Prison Ship (Engine Room)",            0, 0),
    (53, "NAVE_20",      0x8C0B9B08, 0x8C03F688, "The Prison Ship (Deck)",                  0, 0),
    (54, "NEGO_10",      0x8C0B9B10, 0x8C03F87C, "The Bayou (Negos)",                       0, 0),
    (55, "PLUM_00",      0x8C0B9B18, 0x8C03F880, "Sanctuary of Rock and Lava (Plum Ride 1)",0, 0),
    (56, "PLUM_10",      0x8C0B9B20, 0x8C03F884, "Sanctuary of Rock and Lava (Plum Ride 2)",0, 0),
    (57, "PLUM_20",      0x8C0B9B28, 0x8C03F888, "Sanctuary of Rock and Lava (Plum Ride 3)",0, 0),
    (58, "POLOC_10",     0x8C0B9B30, 0x8C03FA74, "The Echoing Caves (Part 1)",              0, 0),
    (59, "POLOC_20",     0x8C0B9B3C, 0x8C03FA80, "The Echoing Caves (Part 2)",              0, 0),
    (60, "POLOC_30",     0x8C0B9B48, 0x8C03FA84, "The Echoing Caves (Part 3)",              0, 0),
    (61, "POLOC_40",     0x8C0B9B54, 0x8C03FA88, "The Echoing Caves (Part 4)",              0, 0),
    (62, "RAYCAP",       0x8C0B9B60, 0x8C03FC78, "Rayman Character Capture / Vignette",     0, 0),
    (63, "RHOP_10",      0x8C0B9B68, 0x8C03FC80, "The Bayou (Intro)",                       0, 0),
    (64, "RODEO_10",     0x8C0B9B70, 0x8C03FC84, "The Top of the World (Part 1)",           0, 0),
    (65, "RODEO_40",     0x8C0B9B7C, 0x8C03FC88, "The Top of the World (Part 2 - Barrel Ride)",0, 0),
    (66, "RODEO_60",     0x8C0B9B88, 0x8C03FE74, "The Top of the World (Part 3)",           0, 0),
    (67, "SEAT_10",      0x8C0B9B94, 0x8C03FE80, "The Sanctuary of Water and Ice (Entrance)",0, 0),
    (68, "SEAT_11",      0x8C0B9B9C, 0x8C03FE84, "The Sanctuary of Water and Ice (Slide)",  0, 0),
    (69, "SKI_10",       0x8C0B9BA4, 0x8C03FE88, "The Iron Mountains (Water Skiing)",       0, 0),
    (70, "SKI_60",       0x8C0B9BAC, 0x8C03FE8C, "The Iron Mountains (Airship Escape)",     0, 0),
    (71, "STAFF_10",     0x8C0B9BB4, 0x8C04007C, "The Prison Ship (Credits / Staff)",       0, 0),
    (72, "VULCA_10",     0x8C0B9BC0, 0x8C040080, "The Lava Sanctuary (Part 1)",             0, 0),
    (73, "VULCA_20",     0x8C0B9BCC, 0x8C040084, "The Lava Sanctuary (Part 2)",             0, 0),
    (74, "WATER_10",     0x8C0B9BD8, 0x8C040088, "The Sanctuary of Water and Ice (Part 1)", 0, 0),
    (75, "WATER_20",     0x8C0B9BE4, 0x8C04027C, "The Sanctuary of Water and Ice (Part 2 - Axel)",0, 0),
    (76, "WHALE_00",     0x8C0B9BF0, 0x8C040280, "Whale Bay (Part 1 - Carmen)",             0, 0),
    (77, "WHALE_05",     0x8C0B9BFC, 0x8C040284, "Whale Bay (Part 2 - Underwater)",         0, 0),
    (78, "WHALE_10",     0x8C0B9C08, 0x8C040288, "Whale Bay (Part 3 - Pirate Outpost)",     0, 0)
]

def generate_header():
    lines = []
    lines.append("/* ============================================================================")
    lines.append(" * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)")
    lines.append(" * File: r2_retail_tables.h")
    lines.append(" *")
    lines.append(" * Comprehensive Snapshot Loading, Relocation & Level Table Definitions.")
    lines.append(" * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)")
    lines.append(" * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)")
    lines.append(" * ============================================================================ */")
    lines.append("")
    lines.append("#ifndef R2_RETAIL_TABLES_H")
    lines.append("#define R2_RETAIL_TABLES_H")
    lines.append("")
    lines.append("#include <stdint.h>")
    lines.append("#include <stddef.h>")
    lines.append("#include <stdbool.h>")
    lines.append("")
    lines.append("#ifdef __cplusplus")
    lines.append("extern \"C\" {")
    lines.append("#endif")
    lines.append("")
    lines.append("/* ----------------------------------------------------------------------------")
    lines.append(" * Section 1: Dreamcast Snapshot Encryption & Memory Constants")
    lines.append(" * ---------------------------------------------------------------------------- */")
    lines.append("/* Dreamcast vs. PC Snapshot Encryption Architecture:")
    lines.append(" * - Dreamcast Baseline (DCLoad.c / FileMng.c):")
    lines.append(" *     FIX.DAT, FIX.TMP, %s.DAT, %s.TMP files are UNENCRYPTED raw memory blocks.")
    lines.append(" *     The engine directly loads the snapshot image into 32-byte aligned RAM buffers.")
    lines.append(" * - PC Retail Guidance (0x0044DF5E):")
    lines.append(" *     XOR cipher using a 32-bit linear congruential generator (seed 0x075BD924,")
    lines.append(" *     multiplier 0x834E0B5F, byte key mod 255).")
    lines.append(" */")
    lines.append("#define R2_DC_SNA_IS_ENCRYPTED            0       /* 0 = Raw unencrypted snapshot */")
    lines.append("#define R2_PC_SNA_XOR_SEED                0x075BD924")
    lines.append("#define R2_PC_SNA_LCG_MULTIPLIER          0x834E0B5F")
    lines.append("")
    lines.append("/* Dreamcast Memory Space Constants */")
    lines.append("#define R2_DC_RAM_BASE                    0x8C000000U")
    lines.append("#define R2_DC_RAM_SIZE                    (16 * 1024 * 1024) /* 16 MB */")
    lines.append("#define R2_DC_EXEC_BASE                   0x8C010000U")
    lines.append("#define R2_DC_ALIGNMENT_BYTES             32U")
    lines.append("")
    lines.append("/* Ground Truth Function VAs in 1ST_READ.BIN */")
    lines.append("#define R2_DC_VA_DCLOAD_LOAD_FIX          0x8C03AF20U /* DCLoad_fn_vLoadFix */")
    lines.append("#define R2_DC_VA_DCLOAD_LOAD_LEVEL_TMP    0x8C03B4C0U /* DCLoad_fn_vLoadLevelTmp */")
    lines.append("#define R2_DC_VA_DCLOAD_LOAD_LEVEL_DAT    0x8C03B5A0U /* DCLoad_fn_vLoadLevelDat */")
    lines.append("#define R2_DC_VA_DCLOAD_RELOCATE_LEVEL    0x8C03BA74U /* DCLoad_fn_vRelocateLevel */")
    lines.append("#define R2_DC_VA_FILEMNG_READ_FILE        0x8C0128BEU /* FileMng_fn_vReadFile */")
    lines.append("#define R2_DC_VA_FILEMNG_READ_ASYNC       0x8C012B02U /* FileMng_fn_vReadAsync */")
    lines.append("#define R2_DC_VA_RELOCATE_POINTER         0x8C061B70U /* Resolves (block_id << 16)|index */")
    lines.append("#define R2_DC_VA_FIND_BLOCK_NODE          0x8C06152EU /* Searches block list for block_id */")
    lines.append("")
    lines.append("/* Ground Truth Global Pointer & State Variables */")
    lines.append("#define R2_DC_VA_GLOBAL_POINTER_TABLE     0x8C0C7C90U /* GPT array (block base pointers) */")
    lines.append("#define R2_DC_VA_BLOCK_LIST_HEAD          0x8C2D494CU /* Head of loaded BlockNode list */")
    lines.append("#define R2_DC_VA_FIX_DAT_BUFFER           0x8C0C55ECU /* Loaded FIX.DAT buffer pointer */")
    lines.append("#define R2_DC_VA_LEVEL_DAT_BUFFER         0x8C0C55F0U /* Loaded Level.DAT buffer pointer */")
    lines.append("#define R2_DC_VA_LEVEL_TMP_BUFFER         0x8C0C55E4U /* Loaded Level.TMP buffer pointer */")
    lines.append("#define R2_DC_VA_WORLD_SUPEROBJECT        0x8C1247D8U /* Root SuperObject of loaded world */")
    lines.append("")
    lines.append("/* ----------------------------------------------------------------------------")
    lines.append(" * Section 2: Complete Dreamcast Level Index Enum (79 Levels)")
    lines.append(" * ---------------------------------------------------------------------------- */")
    lines.append("typedef enum R2_tenu_LevelId {")
    for idx, code, va, dir_va, lore, is_hub, is_mini in levels:
        enum_name = f"R2_LVL_{code.upper()}"
        lines.append(f"    {enum_name:<24s} = {idx:2d}, /* 0x{va:08X}: {code:12s} - {lore} */")
    lines.append("    R2_LVL_COUNT             = 79,")
    lines.append("")
    lines.append("    /* Semantic & Milestone Aliases */")
    lines.append("    R2_LVL_FIRST_PLAYABLE    = R2_LVL_LEARN_10,      /* The Woods of Light */")
    lines.append("    R2_LVL_HUB_ISLE_OF_DOORS = R2_LVL_MAPMONDE2,     /* 3D Interactive Hub (DC Exclusive) */")
    lines.append("    R2_LVL_MAIN_MENU         = R2_LVL_MENU,          /* Main Menu / Title */")
    lines.append("    R2_LVL_GLOBOX_DISC       = R2_LVL_B_DISC,        /* Globox Disc 2-Player Minigame */")
    lines.append("    R2_LVL_FINAL_BOSS        = R2_LVL_END_10,        /* The Crow's Nest (Grolgoth) */")
    lines.append("    R2_LVL_INVALID           = -1")
    lines.append("} R2_tenu_LevelId;")
    lines.append("")
    lines.append("/* ----------------------------------------------------------------------------")
    lines.append(" * Section 3: Snapshot, Relocation & Block Header Structures")
    lines.append(" * ---------------------------------------------------------------------------- */")
    lines.append("")
    lines.append("/* .TMP File Header (16 bytes, Little-Endian):")
    lines.append(" * Present in all Dreamcast level .TMP files.")
    lines.append(" */")
    lines.append("#pragma pack(push, 1)")
    lines.append("typedef struct R2_tdst_TmpHeader {")
    lines.append("    uint32_t ulTable1Offset; /* Byte offset from start of file to GPT Object Pointer Table */")
    lines.append("    uint32_t ulTable1Count;  /* Number of GPT object pointers (Table 1 entries) */")
    lines.append("    uint32_t ulTable2Offset; /* Byte offset from start of file to RTB Relocation Table */")
    lines.append("    uint32_t ulTable2Count;  /* Number of RTB relocation entries (Table 2 entries) */")
    lines.append("} R2_tdst_TmpHeader;")
    lines.append("")
    lines.append("/* RTB (Relocation Table Block) Entry (8 bytes):")
    lines.append(" * Defines an individual pointer to be relocated at runtime.")
    lines.append(" */")
    lines.append("typedef struct R2_tdst_RtbEntry {")
    lines.append("    uint32_t *pTargetPointer; /* Virtual address in memory where resolved pointer is written */")
    lines.append("    uint32_t  ulRelocValue;   /* Encoded token: (block_id << 16) | element_index (0xFFFFFFFF = NULL) */")
    lines.append("} R2_tdst_RtbEntry;")
    lines.append("")
    lines.append("/* Block Node Descriptor in Linked List (Head @ 0x8C2D494C):")
    lines.append(" * Reconstructed from 0x8C06152E (FindBlockNode) and 0x8C061B70.")
    lines.append(" */")
    lines.append("typedef struct R2_tdst_BlockSubInfo {")
    lines.append("    uint32_t  ulUnknown00;")
    lines.append("    uint8_t  *pArray;        /* Base pointer to allocated memory array for this block */")
    lines.append("    uint32_t  ulMaxCount;     /* Capacity / maximum element count for bounds check */")
    lines.append("    uint32_t  ulElementStride;/* Stride in bytes per element */")
    lines.append("} R2_tdst_BlockSubInfo;")
    lines.append("")
    lines.append("typedef struct R2_tdst_BlockNode {")
    lines.append("    uint32_t                  ulBlockId;     /* Block identifier (matches high 16 bits of reloc token) */")
    lines.append("    uint32_t                  ulFlags;       /* Block state / load flags */")
    lines.append("    uint32_t                  ulReserved[6];")
    lines.append("    struct R2_tdst_BlockSubInfo *pSubInfo;   /* Offset 0x20 (32 bytes): Sub-information & array pointer */")
    lines.append("    uint32_t                  ulState;       /* Offset 0x24 */")
    lines.append("    struct R2_tdst_BlockNode *pNext;         /* Offset 0x28 (40 bytes): Next block node in linked list */")
    lines.append("} R2_tdst_BlockNode;")
    lines.append("")
    lines.append("/* Level Snapshot Header (First 16 dwords of %s.DAT):")
    lines.append(" * Uncompressed raw snapshot image dumped from Dreamcast memory.")
    lines.append(" */")
    lines.append("typedef struct R2_tdst_DatHeader {")
    lines.append("    uint32_t aInitialPointers[10]; /* Initial module pointers dumped at snapshot save */")
    lines.append("    uint32_t ulFixReference;      /* Offset 0x28: Reference to Fix block address */")
    lines.append("    uint32_t ulSubBlockCount;     /* Offset 0x2C: Number of sub-structures / sectors */")
    lines.append("    uint32_t aSubBlockPointers[4]; /* Offset 0x30 - 0x3C */")
    lines.append("} R2_tdst_DatHeader;")
    lines.append("")
    lines.append("/* Global Pointer Table (GPT) Object Structure (pointed to by Table 1):")
    lines.append(" * Offset 11 contains the block_id to look up in g_aGlobalPointerTable;")
    lines.append(" * Offset 4 receives the resolved block base pointer.")
    lines.append(" */")
    lines.append("typedef struct R2_tdst_GptObject {")
    lines.append("    uint32_t ulHeader;")
    lines.append("    uint32_t *pResolvedBlockBase; /* Offset 0x04: Written by DCLoad_fn_vRelocateLevel */")
    lines.append("    uint8_t  bPadding[3];")
    lines.append("    uint8_t  bBlockId;            /* Offset 0x0B (11): GPT table index */")
    lines.append("} R2_tdst_GptObject;")
    lines.append("#pragma pack(pop)")
    lines.append("")
    lines.append("/* ----------------------------------------------------------------------------")
    lines.append(" * Section 4: Level Directory Descriptor Table")
    lines.append(" * ---------------------------------------------------------------------------- */")
    lines.append("typedef struct R2_tdst_LevelDescriptor {")
    lines.append("    R2_tenu_LevelId eLevelId;         /* Integer ID [0 .. 78] */")
    lines.append("    const char     *szLevelCode;      /* Directory & filename stem (e.g. \"MAPMONDE2\") */")
    lines.append("    const char     *szDisplayName;    /* Human-readable English level lore name */")
    lines.append("    const char     *szRelativeDir;    /* Subdirectory inside DCDATA/ (e.g. \"DCDATA/MAPMONDE2\") */")
    lines.append("    const char     *szDatFile;        /* Snapshot filename (e.g. \"MAPMONDE2.DAT\") */")
    lines.append("    const char     *szTexFile;        /* Texture container filename (e.g. \"MAPMONDE2.TEX\") */")
    lines.append("    const char     *szTmpFile;        /* Relocation table filename (e.g. \"MAPMONDE2.TMP\") */")
    lines.append("    uint8_t         bIsHub;           /* 1 if this is the 3D Isle of Doors interactive hub */")
    lines.append("    uint8_t         bIsMinigame;      /* 1 if this is a bonus level or minigame */")
    lines.append("    uint32_t        ulDcStringVa;     /* String VA in 1ST_READ.BIN (0x8C0B9xxx) */")
    lines.append("    uint32_t        ulDcPrimaryDirVa; /* Level pointer VA in 1ST_READ.BIN directory table */")
    lines.append("} R2_tdst_LevelDescriptor;")
    lines.append("")
    lines.append("/* Complete Static Level Descriptor Table (79 Levels) */")
    lines.append("static const R2_tdst_LevelDescriptor g_aR2LevelDescriptors[R2_LVL_COUNT] = {")
    for idx, code, va, dir_va, lore, is_hub, is_mini in levels:
        lines.append(f"    /* [{idx:2d}] */ {{")
        lines.append(f"        R2_LVL_{code.upper()},")
        lines.append(f"        \"{code}\",")
        lines.append(f"        \"{lore}\",")
        lines.append(f"        \"DCDATA/{code}\",")
        lines.append(f"        \"{code}.DAT\",")
        lines.append(f"        \"{code}.TEX\",")
        lines.append(f"        \"{code}.TMP\",")
        lines.append(f"        {is_hub}, {is_mini},")
        lines.append(f"        0x{va:08X}U, 0x{dir_va:08X}U")
        lines.append("    },")
    lines.append("};")
    lines.append("")
    lines.append("/* ----------------------------------------------------------------------------")
    lines.append(" * Section 5: Inline Relocation & Pointer Decoding Helper Functions")
    lines.append(" * ---------------------------------------------------------------------------- */")
    lines.append("")
    lines.append("/* Extract Block ID from an encoded relocation token (high 16 bits) */")
    lines.append("static inline uint16_t R2_fn_u16GetRelocBlockId(uint32_t ulRelocToken) {")
    lines.append("    return (uint16_t)(ulRelocToken >> 16);")
    lines.append("}")
    lines.append("")
    lines.append("/* Extract Element Index from an encoded relocation token (low 16 bits) */")
    lines.append("static inline uint16_t R2_fn_u16GetRelocElementIndex(uint32_t ulRelocToken) {")
    lines.append("    return (uint16_t)(ulRelocToken & 0xFFFFU);")
    lines.append("}")
    lines.append("")
    lines.append("/* Check if a relocation token is a NULL sentinel (0xFFFFFFFF) */")
    lines.append("static inline bool R2_fn_bIsRelocNull(uint32_t ulRelocToken) {")
    lines.append("    return (ulRelocToken == 0xFFFFFFFFU);")
    lines.append("}")
    lines.append("")
    lines.append("/* Resolve a single RTB relocation token using a provided BlockNode linked list */")
    lines.append("static inline void* R2_fn_pResolveRelocPointer(const R2_tdst_BlockNode *pBlockListHead, uint32_t ulRelocToken) {")
    lines.append("    if (R2_fn_bIsRelocNull(ulRelocToken)) {")
    lines.append("        return NULL;")
    lines.append("    }")
    lines.append("    uint16_t u16BlockId = R2_fn_u16GetRelocBlockId(ulRelocToken);")
    lines.append("    uint16_t u16ElemIdx = R2_fn_u16GetRelocElementIndex(ulRelocToken);")
    lines.append("    const R2_tdst_BlockNode *pCurr = pBlockListHead;")
    lines.append("    while (pCurr != NULL) {")
    lines.append("        if (pCurr->ulBlockId == (uint32_t)u16BlockId) {")
    lines.append("            if (pCurr->pSubInfo != NULL) {")
    lines.append("                if ((uint32_t)u16ElemIdx < pCurr->pSubInfo->ulMaxCount) {")
    lines.append("                    uint32_t stride = pCurr->pSubInfo->ulElementStride ? pCurr->pSubInfo->ulElementStride : 32U;")
    lines.append("                    return (void*)(pCurr->pSubInfo->pArray + (uint32_t)u16ElemIdx * stride);")
    lines.append("                }")
    lines.append("            }")
    lines.append("            return NULL;")
    lines.append("        }")
    lines.append("        pCurr = pCurr->pNext;")
    lines.append("    }")
    lines.append("    return NULL;")
    lines.append("}")
    lines.append("")
    lines.append("/* Apply Table 1 (GPT) and Table 2 (RTB) relocations from loaded .TMP buffer */")
    lines.append("static inline void R2_fn_vApplyTmpRelocations(const uint8_t *pTmpBuffer,")
    lines.append("                                              uint32_t const *pGlobalPointerTable,")
    lines.append("                                              const R2_tdst_BlockNode *pBlockListHead) {")
    lines.append("    if (!pTmpBuffer) return;")
    lines.append("    const R2_tdst_TmpHeader *pHdr = (const R2_tdst_TmpHeader*)pTmpBuffer;")
    lines.append("")
    lines.append("    /* 1. Global Pointer Table (GPT) Resolution: Table 1 */")
    lines.append("    if (pHdr->ulTable1Count > 0 && pGlobalPointerTable != NULL) {")
    lines.append("        uint32_t const *pTable1 = (uint32_t const *)(pTmpBuffer + pHdr->ulTable1Offset);")
    lines.append("        for (uint32_t i = 0; i < pHdr->ulTable1Count; i++) {")
    lines.append("            uint8_t *pObj = (uint8_t*)(uintptr_t)pTable1[i];")
    lines.append("            if (pObj) {")
    lines.append("                uint8_t bBlockId = pObj[11];")
    lines.append("                uint32_t ulBase = pGlobalPointerTable[bBlockId];")
    lines.append("                *(uint32_t*)(pObj + 4) = ulBase;")
    lines.append("            }")
    lines.append("        }")
    lines.append("    }")
    lines.append("")
    lines.append("    /* 2. Relocation Table Block (RTB) Resolution: Table 2 */")
    lines.append("    if (pHdr->ulTable2Count > 0 && pBlockListHead != NULL) {")
    lines.append("        const R2_tdst_RtbEntry *pTable2 = (const R2_tdst_RtbEntry*)(pTmpBuffer + pHdr->ulTable2Offset);")
    lines.append("        for (uint32_t i = 0; i < pHdr->ulTable2Count; i++) {")
    lines.append("            uint32_t *pTarget = pTable2[i].pTargetPointer;")
    lines.append("            if (pTarget) {")
    lines.append("                *pTarget = (uint32_t)(uintptr_t)R2_fn_pResolveRelocPointer(pBlockListHead, pTable2[i].ulRelocValue);")
    lines.append("            }")
    lines.append("        }")
    lines.append("    }")
    lines.append("}")
    lines.append("")
    lines.append("#ifdef __cplusplus")
    lines.append("}")
    lines.append("#endif")
    lines.append("")
    lines.append("#endif /* R2_RETAIL_TABLES_H */")
    
    os.makedirs(os.path.dirname(OUTPUT_FILE), exist_ok=True)
    with open(OUTPUT_FILE, "w") as f:
        f.write("\n".join(lines) + "\n")
    print(f"Generated {OUTPUT_FILE} ({os.path.getsize(OUTPUT_FILE)} bytes).")

if __name__ == "__main__":
    generate_header()
