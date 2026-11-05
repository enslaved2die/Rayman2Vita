# src/cpa: portable CPA core (milestone N0/N1)

Plain C99, no GL / Vita / SDK includes (only libc + libm). Loads Dreamcast Rayman 2 level DATs into renderer-agnostic arrays.
Derived from `src/engine/r2_level_geo.c`, `tools/DC_LEVEL_FORMAT.md`, `re_analysis/dc/notes_{geometry,levels,pose}.md`.
Source comments tag every claim **VERIFIED** (decompile and/or data consistency test) or **INFERRED** (fits data only).

## API

`cpa_image.h` (read-only VA view of DAT buffers; does not own memory)
- `cpa_dat_base(buf, n, CPA_DAT_LEVEL|CPA_DAT_FIX, &base)`: header-derived base (level word 37 @0x94, FIX word 4 @0x10).
- `cpa_image_add_dat`, `cpa_image_add`: build a `CpaImage` (level must be region 0, FIX next).
- `cpa_ptr`, `cpa_rd8/16/32/f`, `cpa_u16/s16/u32/f32`, `cpa_is_ptr`: bounds-checked, alignment-checked, overflow-safe VA reads.
- `cpa_read_file`: convenience loader.

`cpa_scene.h`
- `cpa_scene_load_dats(&scene, &img, fixBuf, fixN, lvlBuf, lvlN)` (root = level header word 13) or `cpa_scene_load(&scene, &img, rootVa)`.
  Buffers must outlive the scene.
- `CpaScene.pos/uv/nVerts` + `items[]` (`CpaDrawItem`: vertex range, texture-struct VA, raw flags/wrap byte, decoded
  alpha class and tile U/V, `isActor`). Triangle lists, world space, raw engine axes, raw UVs (no flip, no clamp).
- Walk stats (`nSO*`, mismatch/cycle counters), static AABB, `nStaticTris`, `nActorTris`, `nActorGeos`.
- `CpaRig` (Rayman): per-channel local-space `parts[]` and `cpa_rig_pose(&scene, frame)` which fills `parts[i].wpos`.
- `cpa_scene_free`.

Test: `make -C tools/cpa_tests test DCDATA=/path/to/assets/dc/DCDATA` (or `CPA_DC_DATA` env, or argv[1]).

## Verified (reproduced by `tools/cpa_tests/test_scene.c` on LEARN_10)
- Image bases from header words; SuperObject layout and tree: 272 nodes (4 world, 110 actor, 25 sector, 133 IPO), 0 parent/count/cycle errors.
- IPO -> PO -> VisualSet -> GeometricObject -> type-1 indexed-triangle elements: 133 meshes, 3232 static triangles, world AABB matches the notes.
- Texture chain element -> GameMaterial -> VisualMaterial(+0x4C) -> texture struct VA.
- Actor chain to geometry: 183 unique actor GeometricObjects, 4817 triangles (exact reproduction).
- Rayman rig: 9 channels, 675 triangles, Wait frame 0 stands on z ~ 0 (-0.003..1.931 relative to placement).

## Inferred / not done
- Row-vector matrix convention (translation in row 3); only exercised by actors.
- Alpha class from texture flags and tile U/V from the wrap byte: correlated with texture names / UV extents, not read from draw code.
  Flag-unclear or wrap-unclear textures are reported (`alphaClass == CPA_ALPHA_UNKNOWN`, `wrapUnclear`) so a renderer can fall back.
- Rayman SO identified via level header words 22 == 30; spawn placement via header word 25 block; fps from State/AnimRef (30.0 here).
- Pose interpolation (slerp/lerp, scale application) is INFERRED; the real engine's ease terms are unresolved. Only animation 0 (Wait) is built.
- Non-Rayman actors are an unposed pile at the SO global matrix (placeholder, `isActor = 1`); other actors' rigs, sector data, LOD,
  collision, normals/lighting, vertex colours, TMP relocation Table 2, texture bank (.TEX) decoding: not implemented.
