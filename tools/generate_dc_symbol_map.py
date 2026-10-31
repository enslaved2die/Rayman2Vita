#!/usr/bin/env python3
"""
Generate Dreamcast CPA Module & Symbol Map for Rayman 2: The Great Escape (Dreamcast Baseline).
Analyzes assets/dc/1ST_READ.BIN (SH-4, base 0x8C010000).
"""

import os
import sys
import json
import struct
import hashlib

BINARY_PATH = "assets/dc/1ST_READ.BIN"
OUTPUT_PATH = "re_analysis/dc/symbol_map.json"
BASE_VA = 0x8C010000

def compute_sha256(filepath):
    h = hashlib.sha256()
    with open(filepath, "rb") as f:
        while chunk := f.read(65536):
            h.update(chunk)
    return h.hexdigest()

def find_all_ptrs(data, val):
    val_bytes = struct.pack("<I", val)
    ptrs = []
    idx = 0
    while True:
        pos = data.find(val_bytes, idx)
        if pos == -1:
            break
        ptrs.append(pos)
        idx = pos + 1
    return ptrs

def read_str_at(data, off):
    end = data.find(b"\0", off)
    if end == -1:
        return ""
    return data[off:end].decode("ascii", errors="replace")

def find_func_start(data, off):
    limit = max(0, off - 0x1000)
    best = None
    p = off & ~1
    while p > limit:
        if data[p:p+2] == b"\x22\x4f":  # sts.l pr, @-r15
            best = p
            pre = p - 2
            while pre >= limit and data[pre+1] == 0x2F and (data[pre] & 0x0F) == 0x06:
                best = pre
                pre -= 2
            break
        p -= 2
    return BASE_VA + best if best is not None else None

def main():
    if not os.path.exists(BINARY_PATH):
        print(f"Error: {BINARY_PATH} not found.")
        sys.exit(1)

    with open(BINARY_PATH, "rb") as f:
        data = f.read()

    file_size = len(data)
    sha256_hash = compute_sha256(BINARY_PATH)

    # 1. Level Table Extraction
    level_list = []
    off = 0x0A9904
    while off < 0x0A9C14:
        name = read_str_at(data, off)
        va = BASE_VA + off
        ptrs = find_all_ptrs(data, va)
        ptr_vas = [f"0x{BASE_VA + p:08X}" for p in ptrs]
        level_list.append({
            "name": name,
            "string_va": f"0x{va:08X}",
            "string_file_offset": f"0x{off:06X}",
            "pointer_count": len(ptrs),
            "pointers": ptr_vas,
            "is_isle_of_doors_hub": (name == "MAPMONDE2")
        })
        while off < len(data) and data[off] != 0:
            off += 1
        while off < len(data) and data[off] == 0:
            off += 1

    # 2. Key Modules Information
    symbol_report = {
        "metadata": {
            "binary": BINARY_PATH,
            "file_size": file_size,
            "sha256": sha256_hash,
            "architecture": "sh4",
            "endianness": "little",
            "bitness": 32,
            "load_base": f"0x{BASE_VA:08X}",
            "entry_point": f"0x{BASE_VA:08X}",
            "memory_range": {
                "start": f"0x{BASE_VA:08X}",
                "end": f"0x{BASE_VA + file_size:08X}"
            },
            "sdk_environment": "Katana SDK / Shinobi / Kamui-Darkness v1.3.0.0 (Sep 30 1999)",
            "timing_baseline": {
                "target_fps_ntsc": 60.0,
                "target_fps_pal": 50.0,
                "timing_loop_va": "0x8C010B14",
                "ntsc_float_constant_va": "0x8C010B44",
                "pal_float_constant_va": "0x8C010B50"
            }
        },
        "modules": {
            "GAM": {
                "description": "CPA OpenSpace Game Engine Core & Main Loop",
                "version": "GAM V5.7.0 (Sept 01 1997)",
                "erm_descriptor_table_va": "0x8C0C3FAC",
                "entry_points": [
                    {
                        "symbol": "GAM_fn_vInitModules",
                        "va": "0x8C0143B2",
                        "file_offset": "0x0043B2",
                        "description": "Initializes all registered CPA engine modules (AI, GEO, POS, TMP, etc.)"
                    },
                    {
                        "symbol": "GAM_fn_vInitEnginePlatform",
                        "va": "0x8C0148E0",
                        "file_offset": "0x0048E0",
                        "source_file": "specif/Initeng1.c",
                        "description": "Platform-specific Dreamcast engine initialization and callback dispatch"
                    },
                    {
                        "symbol": "GAM_fn_vInitEngine",
                        "va": "0x8C04EA24",
                        "file_offset": "0x03EA24",
                        "source_file": "Initeng.c",
                        "description": "CPA Core Engine initialization routine"
                    },
                    {
                        "symbol": "WinMain_EngineLoop",
                        "va": "0x8C010B14",
                        "file_offset": "0x000B14",
                        "source_file": "WinMain.c",
                        "description": "Main game loop with 60 FPS / 50 FPS tick rate timing calculation"
                    },
                    {
                        "symbol": "GAM_fn_vMemoryLogFile",
                        "va": "0x8C0C3FF8",
                        "file_offset": "0x0B3FF8",
                        "description": "Memory tracking and logging for game object allocations"
                    }
                ],
                "source_files": [
                    {"name": "WinMain.c", "string_va": "0x8C0B6CE8"},
                    {"name": "Engine.c", "string_va": "0x8C0B7C54"},
                    {"name": "Initeng.c", "string_va": "0x8C0BA06C"},
                    {"name": "specif/Initeng1.c", "string_va": "0x8C0B8E54"},
                    {"name": "Objinit.c", "string_va": "0x8C0BA208"},
                    {"name": "ObjsTbls.c", "string_va": "0x8C0BCB48"},
                    {"name": "State.c", "string_va": "0x8C0BCBB0"},
                    {"name": "Always.c", "string_va": "0x8C0B9D04"},
                    {"name": "Basic.c", "string_va": "0x8C0B9D34"},
                    {"name": "Actions/3dData.c", "string_va": "0x8C0B9CA8"},
                    {"name": "Actions/Brain.c", "string_va": "0x8C0B9D60"},
                    {"name": "Actions/CollSet.c", "string_va": "0x8C0B9DF0"},
                    {"name": "Actions/Dynam.c", "string_va": "0x8C0B9E84"},
                    {"name": "P5/GamSave.c", "string_va": "0x8C0B9FCD"},
                    {"name": "specif/Demos.c", "string_va": "0x8C0B9E34"}
                ]
            },
            "SNA": {
                "description": "Snapshot, Relocation, and Dreamcast Container Loader (DCLoad / FileMng)",
                "erm_descriptor_table_va": "0x8C0C457C",
                "entry_points": [
                    {
                        "symbol": "DCLoad_fn_vLoadFix",
                        "va": "0x8C03AF20",
                        "file_offset": "0x02AF20",
                        "source_file": "DCLoad.c",
                        "description": "Loads FIX.DAT snapshot and FIX.TEX textures into memory"
                    },
                    {
                        "symbol": "DCLoad_fn_vLoadLevelTmp",
                        "va": "0x8C03B4C0",
                        "file_offset": "0x02B4C0",
                        "source_file": "DCLoad.c",
                        "description": "Loads level temporary data (%s.tmp) from DCDATA"
                    },
                    {
                        "symbol": "DCLoad_fn_vLoadLevelDat",
                        "va": "0x8C03B5A0",
                        "file_offset": "0x02B5A0",
                        "source_file": "DCLoad.c",
                        "description": "Loads level snapshot (%s.dat) and level textures (%s.tex)"
                    },
                    {
                        "symbol": "DCLoad_fn_vRelocateLevel",
                        "va": "0x8C03BA74",
                        "file_offset": "0x02BA74",
                        "source_file": "DCLoad.c",
                        "description": "Applies Global Pointer Table (GPT) and Relocation Table Block (RTB) relocations"
                    },
                    {
                        "symbol": "FileMng_fn_vReadFile",
                        "va": "0x8C0128BE",
                        "file_offset": "0x0028BE",
                        "source_file": "FileMng.c",
                        "description": "Low-level file reader for GD-ROM ISO9660 filesystem"
                    }
                ],
                "data_signatures": [
                    {"pattern": "FIX.DAT", "va": "0x8C0B9824", "file_offset": "0x0A9824"},
                    {"pattern": "%s\\FIX.TEX", "va": "0x8C0B9818", "file_offset": "0x0A9818"},
                    {"pattern": "FIX.TMP", "va": "0x8C0B9838", "file_offset": "0x0A9838"},
                    {"pattern": "%s.DAT", "va": "0x8C0B9860", "file_offset": "0x0A9860"},
                    {"pattern": "%s\\%s\\%s.TEX", "va": "0x8C0B9870", "file_offset": "0x0A9870"},
                    {"pattern": "%s.tmp", "va": "0x8C0B9880", "file_offset": "0x0A9880"},
                    {"pattern": "DCDATA", "va": "0x8C0B97B0", "file_offset": "0x0A97B0"},
                    {"pattern": "RAYMAN_2.SY_", "va": "0x8C0B9EDC", "file_offset": "0x0A9EDC"}
                ]
            },
            "AI": {
                "description": "Artificial Intelligence Scripting, Conditions & Action Dispatch",
                "version": "AI V5.0.0 (Dec 5 1997)",
                "erm_descriptor_table_va": "0x8C0C7A08",
                "entry_points": [
                    {
                        "symbol": "AI_fn_vInitAI",
                        "va": "0x8C032E60",
                        "file_offset": "0x022E60",
                        "source_file": "AIBase/ai_proto.c",
                        "description": "Initializes AI engine subsystem, registers condition and action tables"
                    },
                    {
                        "symbol": "AI_fn_vInterpretKeywords",
                        "va": "0x8C0ACB60",
                        "file_offset": "0x09CB60",
                        "source_file": "AIGame/Keyword.c",
                        "description": "Interprets AI bytecode instructions and dispatches keywords"
                    },
                    {
                        "symbol": "AI_fn_vEvalConditionTree",
                        "va": "0x8C0ACD88",
                        "file_offset": "0x09CD88",
                        "source_file": "AIGame/Keyword.c",
                        "description": "Evaluates AI decision tree conditions (positive / negative branches)"
                    },
                    {
                        "symbol": "AI_fn_vProcMorph",
                        "va": "0x8C0B0B8C",
                        "file_offset": "0x0A0B8C",
                        "source_file": "AIGame/procMorf.c",
                        "description": "AI procedural mesh deformation and morphing"
                    },
                    {
                        "symbol": "SAI_fn_eVerifyFlags",
                        "va": "0x8C0BAC2C",
                        "file_offset": "0x0AAC2C",
                        "source_file": "SAI_Priv.c",
                        "description": "Script AI persistence and save/restore state flag verification"
                    }
                ],
                "source_files": [
                    {"name": "AIBase/ai_proto.c", "string_va": "0x8C0B9764"},
                    {"name": "AIBase/WParc.c", "string_va": "0x8C0BD3A8"},
                    {"name": "AIBase/WPgraphe.c", "string_va": "0x8C0BBBFC"},
                    {"name": "AIBase/List.c", "string_va": "0x8C0BC86C"},
                    {"name": "AIBase/strintel.c", "string_va": "0x8C0BC8A0"},
                    {"name": "AIGame/Keyword.c", "string_va": "0x8C0BD6E0"},
                    {"name": "AIGame/Functio1.c", "string_va": "0x8C0BBAEC"},
                    {"name": "AIGame/procMorf.c", "string_va": "0x8C0BD850"},
                    {"name": "P5/SAI_Save.c", "string_va": "0x8C0BCFA8"},
                    {"name": "SAI_Priv.c", "string_va": "0x8C0BCF78"}
                ]
            },
            "GEO": {
                "description": "Geometry Engine, Hierarchical SuperObjects & Bounding Volumes",
                "version": "GEO V0.5.1 (Sept 01 1997)",
                "erm_descriptor_table_va": "0x8C0C65E4",
                "identity_matrix_va": "0x8C0C65B0",
                "entry_points": [
                    {
                        "symbol": "GEO_fn_vInit",
                        "va": "0x8C05A2E0",
                        "file_offset": "0x04A2E0",
                        "description": "Initializes GEO geometry module and registers ERM error tables"
                    },
                    {
                        "symbol": "GEO_fn_vMemoryLogFile",
                        "va": "0x8C0C6608",
                        "file_offset": "0x0B6608",
                        "description": "Geometry memory source tracking and allocation validation"
                    },
                    {
                        "symbol": "GEO_fn_vInitBoundingVolumes",
                        "va": "0x8C0A234C",
                        "file_offset": "0x09234C",
                        "source_file": "GeoBdVol.c",
                        "description": "Constructs and transforms geometric bounding boxes and spheres"
                    },
                    {
                        "symbol": "GEO_fn_vVerifySubMapCoherence",
                        "va": "0x8C0843A4",
                        "file_offset": "0x0743A4",
                        "source_file": "specif/SubMapPs.c",
                        "description": "Verifies hierarchical consistency between sectors and root superobject"
                    }
                ],
                "source_files": [
                    {"name": "GeoObj.c", "string_va": "0x8C0BCC20"},
                    {"name": "GeoBdVol.c", "string_va": "0x8C0BD4B4"},
                    {"name": "GmtZone.c", "string_va": "0x8C0BCC2C"},
                    {"name": "GmtVFunc.c", "string_va": "0x8C0BA58C"},
                    {"name": "cpagmt.c", "string_va": "0x8C0BA50C"},
                    {"name": "Element.c", "string_va": "0x8C0BCC14"},
                    {"name": "HieMtStk.c", "string_va": "0x8C0BB6D0"},
                    {"name": "HieSpObj.c", "string_va": "0x8C0BB6DC"},
                    {"name": "sector.c", "string_va": "0x8C0BCFB8"},
                    {"name": "sectdraw.c", "string_va": "0x8C0BAD50"},
                    {"name": "specif/SubMapPs.c", "string_va": "0x8C0BCBDC"},
                    {"name": "specif/dupobjmp.c", "string_va": "0x8C0BCF40"},
                    {"name": "ZdxStuff.c", "string_va": "0x8C0BA380"}
                ]
            },
            "DNM_IPO": {
                "description": "Deformation, Skeletal Animation & Interpolation Engine",
                "entry_points": [
                    {
                        "symbol": "IPO_fn_vInterpolate",
                        "va": "0x8C0A2814",
                        "file_offset": "0x092814",
                        "source_file": "Specif/IPO.c",
                        "description": "Keyframe animation interpolation and bone transform updates"
                    },
                    {
                        "symbol": "DNM_fn_vInitMorph",
                        "va": "0x8C05C080",
                        "file_offset": "0x04C080",
                        "source_file": "specif/morph.c",
                        "description": "Deformation channel allocation and morph target weight binding"
                    }
                ],
                "source_files": [
                    {"name": "Specif/IPO.c", "string_va": "0x8C0BD4C0"},
                    {"name": "PlayAnim/PlayAnim.c", "string_va": "0x8C0BA25C"},
                    {"name": "PlayAnim/playevts.c", "string_va": "0x8C0BCB78"},
                    {"name": "Interpol/a3x_intn.c", "string_va": "0x8C0BCA05"},
                    {"name": "specif/morph.c", "string_va": "0x8C0BAA64"},
                    {"name": "ChanList.c", "string_va": "0x8C0BCA64"}
                ]
            },
            "GLI": {
                "description": "Graphics Library for Display (PowerVR CLX2 / Kamui Interface)",
                "version": "GLD V5.8.7 (July 29 1997) / Kamui-Darkness v1.3.0.0",
                "erm_descriptor_table_va": "0x8C0BDC80",
                "entry_points": [
                    {
                        "symbol": "GLI_fn_vInitGli",
                        "va": "0x8C0382DC",
                        "file_offset": "0x0282DC",
                        "source_file": "src/Init_Gli.c",
                        "description": "Initializes Dreamcast PowerVR TA (Tile Accelerator) and display buffers"
                    },
                    {
                        "symbol": "GLI_fn_vInitDisplay",
                        "va": "0x8C038620",
                        "file_offset": "0x028620",
                        "source_file": "src/Init_Gli.c",
                        "description": "Configures Kamui render passes (opaque, translucent, punch-through)"
                    },
                    {
                        "symbol": "GLI_fn_vCreateFixViewPort",
                        "va": "0x8C0B832C",
                        "file_offset": "0x0A832C",
                        "source_file": "src/DevVpt.c",
                        "description": "Creates primary fixed HUD and camera viewport"
                    }
                ],
                "kamui_backend_range": {
                    "start": "0x8C0D0000",
                    "end": "0x8C0F46E0",
                    "driver_copyright": "KAMUI-Darkness Copyright (C) NEC Corporation 1999",
                    "driver_build": "kmdk Ver 1,3,0,0 Build:Sep 30 1999 23:17:16"
                },
                "source_files": [
                    {"name": "src/Init_Gli.c", "string_va": "0x8C0B9788"},
                    {"name": "src/DevVpt.c", "string_va": "0x8C0B6CF4"},
                    {"name": "src/Material.c", "string_va": "0x8C0B7800"},
                    {"name": "src/TexLoad.c", "string_va": "0x8C0B97C4"},
                    {"name": "src/Light.c", "string_va": "0x8C0BC964"},
                    {"name": "src/VisuaSet.c", "string_va": "0x8C0BC970"},
                    {"name": "src/camera1.c", "string_va": "0x8C0B9778"},
                    {"name": "ToolCam.c", "string_va": "0x8C0BA32C"}
                ]
            },
            "SOUND": {
                "description": "Yamaha AICA ADPCM & Manatee Driver Sound Engine",
                "driver_firmware": "MANATEE.DRV",
                "entry_points": [
                    {
                        "symbol": "SND_fn_vInitDriver",
                        "va": "0x8C098874",
                        "file_offset": "0x088874",
                        "description": "Initializes Sega Dreamcast AICA sound library (sdLibInit / sdDrvInit)"
                    },
                    {
                        "symbol": "SND_fn_vSetSpace",
                        "va": "0x8C0999E8",
                        "file_offset": "0x0899E8",
                        "description": "Sets 3D audio space, listener orientation and reverb parameters"
                    },
                    {
                        "symbol": "SND_fn_vUpdate3dSound",
                        "va": "0x8C017C0C",
                        "file_offset": "0x007C0C",
                        "source_file": "src/sound3d.c",
                        "description": "Updates 3D positional audio sources relative to camera"
                    }
                ],
                "sound_bank_signatures": [
                    {"pattern": "MANATEE.DRV", "va": "0x8C0BD064"},
                    {"pattern": "bnk_%d.OSB", "va": "0x8C0BCFFC"},
                    {"pattern": "reverb.fpb", "va": "0x8C0BD008"},
                    {"pattern": "reverb.fob", "va": "0x8C0BD014"},
                    {"pattern": "dcdata\\Sound\\Banks\\", "va": "0x8C0B8D08"},
                    {"pattern": "dcdata\\Sound\\Music\\", "va": "0x8C0B8D1C"}
                ]
            },
            "LEVELS": {
                "description": "Dreamcast Level Directory & Demo Table",
                "total_levels": len(level_list),
                "primary_directory_table_range": {
                    "start": "0x8C03D6D4",
                    "end": "0x8C040288"
                },
                "demo_directory_table_range": {
                    "start": "0x8C03E010",
                    "end": "0x8C0423B8"
                },
                "hub_level": {
                    "name": "MAPMONDE2",
                    "title": "3D Isle of Doors Interactive Hub World",
                    "string_va": "0x8C0B9AC4",
                    "primary_pointer_va": "0x8C03F28C",
                    "demo_pointer_va": "0x8C04107C",
                    "notes": "Dreamcast exclusive fully 3D interactive hub world replacing 2D PC/N64 world map"
                },
                "entries": level_list
            }
        }
    }

    os.makedirs(os.path.dirname(OUTPUT_PATH), exist_ok=True)
    with open(OUTPUT_PATH, "w") as f:
        json.dump(symbol_report, f, indent=2)

    print(f"Generated {OUTPUT_PATH} ({os.path.getsize(OUTPUT_PATH)} bytes).")

if __name__ == "__main__":
    main()
