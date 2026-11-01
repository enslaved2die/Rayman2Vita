/* hle/vmu.h - virtual always-present Visual Memory Unit (port A slot 1) at the Katana BUP boundary, backed by one host file per VMU file.
 * Design / evidence: re_analysis/dc/plan_native_save.md, behaviour + test results: re_analysis/dc/notes_vmu.md.
 *
 * Store: a directory (host default ./Save/A1, env R2_SAVE_DIR overrides; Vita ux0:data/rayman2/Save/A1) holding one file per VMU file, named exactly like
 * the game's 12-character VMS name (RAYMAN_2.SY_, RAYMAN_2.AAA ...). File content = the raw bytes the game hands to BUP write: 0x280-byte VMS header
 * + scrambled payload, blocks*512 bytes. That is exactly the content of the file inside a Flycast/KOS 128 KiB VMU image (tools/vmu_tool.py converts).
 * Writes are atomic (temp file + fsync + rename). Free blocks = 200 - sum(ceil(size/512)).
 */
#ifndef HLE_VMU_H
#define HLE_VMU_H
#include "hle.h"

#define HLE_VMU_EMPTYSTR 0x8C0098E0u      /* guest scratch byte holding "" (returned for hidden text ids) */
#define HLE_VMU_CARD_BLOCKS 200           /* user blocks of a standard VMU */

void hle_vmu_init(void);                  /* hooks + pad record; honours R2_SAVE_DIR / R2_VMU=0. Strong definition of the weak one in boot.c */
void hle_vmu_set_dir(const char *dir);    /* before hle_vmu_init (or hle_vmu_reload); copies the string */
void hle_vmu_reload(void);                /* re-read the directory (tests) */
int  hle_vmu_free_blocks(void);
int  hle_vmu_file_blocks(const char *name);   /* -1 if absent */
#endif
