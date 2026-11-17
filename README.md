# Rayman 2: The Great Escape — PS Vita Port

An in-progress native port of *Rayman 2: The Great Escape* to the PlayStation Vita.
The Dreamcast release is the primary baseline and the PC release is secondary reference.

> **Two rendering paths, two levels of maturity:**
>
> - **Default build (`Rayman2_Recomp.vpk`): the full game.** It runs the original Dreamcast
>   executable through the SH-4 recompiler and a high-level emulation layer (`tools/sh4recomp/`).
>   It is playable on the Vita.
> - **Native CPA engine (`src/cpa/`): experimental, opt-in.** It is a clean-room rewrite that is
>   switched on by an empty `ux0:data/rayman2/NATIVE_GFX` file. It is not complete. It renders
>   decoded level geometry and the player model, but gameplay, physics, AI, collision, and menus
>   are not implemented. [Plan.md](Plan.md) tracks this path.

> Rayman 2 and all of its assets belong to Ubisoft. **This repository contains no game data.**
> You need your own legally obtained copy of the Dreamcast disc (GD-ROM image).

---

## Contents

1. [Requirements](#1-requirements)
2. [Get the Dreamcast game data](#2-get-the-dreamcast-game-data)
3. [Build the VPK](#3-build-the-vpk)
4. [Install on the Vita](#4-install-on-the-vita)
5. [Copy game data to the Vita](#5-copy-game-data-to-the-vita)
6. [Make HD textures](#6-make-hd-textures)
7. [Repository layout](#7-repository-layout)
8. [License](#8-license)

---

## 1. Requirements

| Tool | Used for | Notes |
| --- | --- | --- |
| VitaSDK (`arm-vita-eabi-gcc`, `vita-pack-vpk`, ...) | building the VPK | Install to `.vitasdk/` in the repo root, or set `VITASDK`. |
| GNU make | building | |
| clang | host tools (texture dumper, HD tools) | macOS Xcode command line tools are enough. |
| zlib | host texture dumper | Usually preinstalled on macOS and Linux. |
| Python 3 | extraction, upscaling, HD tables | Standard library only. Pillow is optional. |
| Real-ESRGAN (`realesrgan-ncnn-vulkan`) | optional GPU upscaling | A built copy is in `tools/realesrgan-ncnn-vulkan/`. The built-in upscaler works without it. |

Set up the toolchain environment for each shell session:

```bash
source env.sh     # sets VITASDK and adds .vitasdk/bin to PATH
```

---

## 2. Get the Dreamcast game data

The port reads the Dreamcast GD-ROM image. Put your disc image in `ISOs/Rayman2_Dreamcast/`
(this folder is git-ignored). The extractor expects this layout:

```
ISOs/Rayman2_Dreamcast/
    Rayman 2 - The Great Escape (Europe).gdi
    track01.bin  track02.raw  track03.bin
```

Extract the data track into `assets/dc/` (git-ignored):

```bash
python3 tools/extract_dc_iso.py
```

Defaults: `--gdi`, `--track`, and `--output` point at the locations above. Run
`python3 tools/extract_dc_iso.py --help` to change them.

Optional sanity check against the reference manifest:

```bash
python3 tools/verify_assets.py --root .
```

---

## 3. Build the VPK

```bash
source env.sh
make -f Makefile.vita BUILD_DIR=build_vita_pkg -j
```

The output is `build_vita_pkg/Rayman2_Recomp.vpk`.
The VPK holds only the executable, LiveArea art, and `1ST_READ.BIN`. The game data
is **not** inside it. You copy that separately (section 5).

To build a single variant for performance experiments, see `tools/vita_variants.sh`.

> The top-level `Makefile` is an older build that produces `Rayman2.vpk`. Use `Makefile.vita`
> for the current build.

---

## 4. Install on the Vita

You need a Vita with homebrew enabled and a file manager such as **VitaShell**.

1. Copy `build_vita_pkg/Rayman2_Recomp.vpk` to the Vita, to any folder on `ux0:`
   (USB mass storage, FTP from VitaShell, or a memory card reader).
2. In VitaShell, open the `.vpk` and choose to install it.
3. Start **Rayman 2: The Great Escape (DC Recomp)** from the LiveArea.

The game will not run correctly until the data in section 5 is in place.

---

## 5. Copy game data to the Vita

The game reads its data from `ux0:data/rayman2/`. Stage it on your computer, then copy it to the Vita:

```bash
# stage to a folder you can copy from (does not build the VPK)
tools/vita/stage_data.sh --dest ./staged/rayman2 --no-vpk
```

Then copy the contents of `./staged/rayman2` to `ux0:data/rayman2/` on the Vita.
Use USB mass storage, a memory card reader, or FTP. Without a `--dest`, the script
stages into a Vita3K folder instead.

The Vita should end up with:

```
ux0:data/rayman2/
    DCDATA/            the disc's DCDATA tree (~900 MB)
    ALIASES.TXT
    1ST_READ.BIN       optional override
    Save/              created automatically
```

Names match case-insensitively. The card must be FAT32 or exFAT with long file names.
See [tools/vita/README.md](tools/vita/README.md) for details.

---

## 6. Make HD textures

HD textures are optional. The engine uses an HD override when one exists and falls back to the
original texture when it does not.

The pipeline has four steps: **dump → upscale → bake (optional) → index**.

### Step 1. Dump the original textures

```bash
clang -O2 -w tools/dump_dc_textures.c src/cpa/cpa_tex.c -lz -o tools/dump_dc_textures
tools/dump_dc_textures --dcdata assets/dc/DCDATA --assets-dc assets/dc --out extracted_textures
```

This writes one PNG per texture to `extracted_textures/<BANK>/`, plus `extracted_textures/manifest.csv`.
The manifest records each texture's bank, name, and address. The later steps depend on it.

### Step 2. Upscale

Upscale a whole bank. Keep the bank folder names the same:

```bash
python3 tools/upscale_alpha_helper.py upscale extracted_textures/FIX -o upscaled_textures/FIX -s 4
```

The helper splits each image into a bled RGB layer and an alpha mask, upscales each, and merges them
back. This avoids dark halos and keeps cutout edges sharp. Use `--tool builtin` to run without
Real-ESRGAN (tested). Use `--tool realesrgan` to use the GPU upscaler. Repeat for each bank you want.

Output is `upscaled_textures/<BANK>/<name>.png`.

Check any single image first:

```bash
python3 tools/upscale_alpha_helper.py info extracted_textures/FIX/<name>.png
```

### Step 3. Bake to DDS (optional)

The baker turns PNGs into DXT1/DXT5 DDS files. DDS uploads are smaller and skip the CPU-heavy
PNG decode on the Vita:

```bash
python3 tools/bake_compressed_textures.py upscaled_textures upscaled_textures
```

It compiles `tools/bake_compressed_textures.c` on first run, then writes a `.dds` next to each `.png`.
The engine prefers the DDS when both exist. Skip this step and the game still works with PNG overrides.

### Step 4. Index the bank tables

Create the per-bank lookup tables that the engine uses to find overrides without probing the filesystem:

```bash
python3 tools/generate_hd_manifest.py --tables --root upscaled_textures
python3 tools/pack_hd_archive.py --root upscaled_textures
python3 tools/pack_hd_archive.py --root upscaled_textures --verify
```

- `generate_hd_manifest.py` writes `upscaled_textures/<BANK>.hdtab`. It also regenerates
  `src/cpa/cpa_hd_manifest.c` and `.h`. Those files are tracked. Review and commit them if they change.
- `pack_hd_archive.py` writes `HD.hdpool` (de-duplicated payloads) and `<BANK>.hdpak` (indexes).
  The engine uses the pak when it is valid and falls back to loose files otherwise.

### Step 5. Copy HD textures to the Vita

`stage_data.sh` does **not** copy HD textures. Copy the folder yourself to:

```
ux0:data/rayman2/upscaled_textures/
```

The engine also searches `ux0:data/rayman2/textures/`.

**Status:** HD texture loading is not yet measured on hardware.

### Optional: PlayStation button prompts

[extras/ps_buttons/FIX/](extras/ps_buttons/FIX/) holds replacement button icons for the
in-game prompts (`s_padx_aaa.png`, `s_pady_aaa.png`, `s_padb_aaa.png`, `s_pada_aaa.png`).
They are optional. To use them, copy the four PNGs into `upscaled_textures/FIX/` before
step 4 (index) and before copying the folder to the Vita. Skip them to keep the original icons.
`upscale_alpha_helper.py` leaves button prompts alone, so upscaling will not overwrite them.

---

## 7. Repository layout

| Path | Contents |
| --- | --- |
| `src/` | Engine and platform code (`engine/`, `cpa/`, `platform/vita/`) |
| `include/` | Headers, including Vita shims |
| `tools/` | Extraction, texture, HD, and verification tools |
| `tools/vita/` | Data staging for the Vita (`stage_data.sh`) |
| `tools/sh4recomp/` | SH-4 to ARM recompilation pipeline and HLE tests |
| `tools/VitaDebugger/` | Debugger tooling for the Vita |
| `extras/` | Optional add-ons (PlayStation button prompts) |
| `sce_sys/` | Vita LiveArea and package metadata |
| `Plan.md` | Status and plan for the native engine |

Git-ignored, created locally: `ISOs/`, `assets/`, `extracted_textures/`, `upscaled_textures/`,
`build_vita_*/`, `build/`.

---

## 8. License

The code in this repository is released under the [MIT License](LICENSE).
This license does not cover Rayman 2 or any other Ubisoft asset.
