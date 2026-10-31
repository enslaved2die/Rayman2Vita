# Rayman 2 Vita: data layout and staging

The VPK contains only the eboot, LiveArea art and `1ST_READ.BIN` (the DC executable, 0.9 MB). All game data lives outside it:

```
ux0:data/rayman2/
    DCDATA/            the disc's DCDATA tree (about 900 MB; levels *.DAT/*.TEX/*.TMP, Sound/Banks, Sound/Music *.DCZ, ...)
    ALIASES.TXT        "link<TAB>target" lines (paths relative to this directory) for the disc's symlinks, e.g. DCDATA/FIX.SNA -> DCDATA/FIX.DAT
    1ST_READ.BIN       optional override; the copy inside the VPK (app0:) is used first
    Save/              created for save data
    rayman2.log        runtime log (overwritten each launch)
```

Names are matched case-insensitively and with `\` or `/`, via an in-memory index built once at start-up (so the many probes for files that
do not exist on the disc cost nothing). Needs FAT32/exFAT with long file names; the largest file is about 5 MB.

Stage for Vita3K and build the VPK: `tools/vita/stage_data.sh` (options `--dest DIR`, `--no-vpk`, `--clean`). For a real Vita run it with
`--dest /Volumes/<card>/data/rayman2` (or any folder, then copy it to `ux0:data/rayman2` over FTP/USB), install `build_vita_pkg/Rayman2_Recomp.vpk`.
Build only: `source env.sh && make -f Makefile.vita BUILD_DIR=build_vita_pkg -j`.
