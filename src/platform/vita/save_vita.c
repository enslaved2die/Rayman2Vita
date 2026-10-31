/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: save_vita.c
 *
 * PlayStation Vita Save Subsystem Implementation
 * - Save directory: ux0:data/rayman2/Save/ (configurable for host testing)
 * - Three independent save slots (slot1.sav, slot2.sav, slot3.sav)
 * - Atomic write protocol using temporary files (.tmp) followed by rename
 * - Comprehensive data integrity checks (Magic, Version, File Size, CRC32)
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include "save_vita.h"
#include "vita_shim/vfs_vita.h"
#include "vita_shim/os_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#if defined(__vita__)
#include <psp2/types.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/stat.h>
#include <psp2/io/dirent.h>
#else
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#endif

/* ----------------------------------------------------------------------------
 * 1. IEEE 802.3 CRC32 Lookup Table (Polynomial 0xEDB88320)
 * ---------------------------------------------------------------------------- */
static const uint32_t s_aCRC32Table[256] = {
    0x00000000U, 0x77073096U, 0xEE0E612CU, 0x990951BAU,
    0x076DC419U, 0x706AF48FU, 0xE963A535U, 0x9E6495A3U,
    0x0EDB8832U, 0x79DCB8A4U, 0xE0D5E91EU, 0x97D2D988U,
    0x09B64C2BU, 0x7EB17CBDU, 0xE7B82D07U, 0x90BF1D91U,
    0x1DB71064U, 0x6AB020F2U, 0xF3B97148U, 0x84BE41DEU,
    0x1ADAD47DU, 0x6DDDE4EBU, 0xF4D4B551U, 0x83D385C7U,
    0x136C9856U, 0x646BA8C0U, 0xFD62F97AU, 0x8A65C9ECU,
    0x14015C4FU, 0x63066CD9U, 0xFA0F3D63U, 0x8D080DF5U,
    0x3B6E20C8U, 0x4C69105EU, 0xD56041E4U, 0xA2677172U,
    0x3C03E4D1U, 0x4B04D447U, 0xD20D85FDU, 0xA50AB56BU,
    0x35B5A8FAU, 0x42B2986CU, 0xDBBBC9D6U, 0xACBCF940U,
    0x32D86CE3U, 0x45DF5C75U, 0xDCD60DCFU, 0xABD13D59U,
    0x26D930ACU, 0x51DE003AU, 0xC8D75180U, 0xBFD06116U,
    0x21B4F4B5U, 0x56B3C423U, 0xCFBA9599U, 0xB8BDA50FU,
    0x2802B89EU, 0x5F058808U, 0xC60CD9B2U, 0xB10BE924U,
    0x2F6F7C87U, 0x58684C11U, 0xC1611DABU, 0xB6662D3DU,
    0x76DC4190U, 0x01DB7106U, 0x98D220BCU, 0xEFD5102AU,
    0x71B18589U, 0x06B6B51FU, 0x9FBFE4A5U, 0xE8B8D433U,
    0x7807C9A2U, 0x0F00F934U, 0x9609A88EU, 0xE10E9818U,
    0x7F6A0DBBU, 0x086D3D2DU, 0x91646C97U, 0xE6635C01U,
    0x6B6B51F4U, 0x1C6C6162U, 0x856530D8U, 0xF262004EU,
    0x6C0695EDU, 0x1B01A57BU, 0x8208F4C1U, 0xF50FC457U,
    0x65B0D9C6U, 0x12B7E950U, 0x8BBEB8EAU, 0xFCB9887CU,
    0x62DD1DDFU, 0x15DA2D49U, 0x8CD37CF3U, 0xFBD44C65U,
    0x4DB26158U, 0x3AB551CEU, 0xA3BC0074U, 0xD4BB30E2U,
    0x4ADFA541U, 0x3DD895D7U, 0xA4D1C46DU, 0xD3D6F4FBU,
    0x4369E96AU, 0x346ED9FCU, 0xAD678846U, 0xDA60B8D0U,
    0x44042D73U, 0x33031DE5U, 0xAA0A4C5FU, 0xDD0D7CC9U,
    0x5005713CU, 0x270241AAU, 0xBE0B1010U, 0xC90C2086U,
    0x5768B525U, 0x206F85B3U, 0xB966D409U, 0xCE61E49FU,
    0x5EDEF90EU, 0x29D9C998U, 0xB0D09822U, 0xC7D7A8B4U,
    0x59B33D17U, 0x2EB40D81U, 0xB7BD5C3BU, 0xC0BA6CADU,
    0xEDB88320U, 0x9ABFB3B6U, 0x03B6E20CU, 0x74B1D29AU,
    0xEAD54739U, 0x9DD277AFU, 0x04DB2615U, 0x73DC1683U,
    0xE3630B12U, 0x94643B84U, 0x0D6D6A3EU, 0x7A6A5AA8U,
    0xE40ECF0BU, 0x9309FF9DU, 0x0A00AE27U, 0x7D079EB1U,
    0xF00F9344U, 0x8708A3D2U, 0x1E01F268U, 0x6906C2FEU,
    0xF762575DU, 0x806567CBU, 0x196C3671U, 0x6E6B06E7U,
    0xFED41B76U, 0x89D32BE0U, 0x10DA7A5AU, 0x67DD4ACCU,
    0xF9B9DF6FU, 0x8EBEEFF9U, 0x17B7BE43U, 0x60B08ED5U,
    0xD6D6A3E8U, 0xA1D1937EU, 0x38D8C2C4U, 0x4FDFF252U,
    0xD1BB67F1U, 0xA6BC5767U, 0x3FB506DDU, 0x48B2364BU,
    0xD80D2BDAU, 0xAF0A1B4CU, 0x36034AF6U, 0x41047A60U,
    0xDF60EFC3U, 0xA867DF55U, 0x316E8EEFU, 0x4669BE79U,
    0xCB61B38CU, 0xBC66831AU, 0x256FD2A0U, 0x5268E236U,
    0xCC0C7795U, 0xBB0B4703U, 0x220216B9U, 0x5505262FU,
    0xC5BA3BBEU, 0xB2BD0B28U, 0x2BB45A92U, 0x5CB36A04U,
    0xC2D7FFA7U, 0xB5D0CF31U, 0x2CD99E8BU, 0x5BDEAE1DU,
    0x9B64C2B0U, 0xEC63F226U, 0x756AA39CU, 0x026D930AU,
    0x9C0906A9U, 0xEB0E363FU, 0x72076785U, 0x05005713U,
    0x95BF4A82U, 0xE2B87A14U, 0x7BB12BAEU, 0x0CB61B38U,
    0x92D28E9BU, 0xE5D5BE0DU, 0x7CDCEFB7U, 0x0BDBDF21U,
    0x86D3D2D4U, 0xF1D4E242U, 0x68DDB3F8U, 0x1FDA836EU,
    0x81BE16CDU, 0xF6B9265BU, 0x6FB077E1U, 0x18B74777U,
    0x88085AE6U, 0xFF0F6A70U, 0x66063BCAU, 0x11010B5CU,
    0x8F659EFFU, 0xF862AE69U, 0x616BFFD3U, 0x166CCF45U,
    0xA00AE278U, 0xD70DD2EEU, 0x4E048354U, 0x3903B3C2U,
    0xA7672661U, 0xD06016F7U, 0x4969474DU, 0x3E6E77DBU,
    0xAED16A4AU, 0xD9D65ADCU, 0x40DF0B66U, 0x37D83BF0U,
    0xA9BCAE53U, 0xDEBB9EC5U, 0x47B2CF7FU, 0x30B5FFE9U,
    0xBDBDF21CU, 0xCABAC28AU, 0x53B39330U, 0x24B4A3A6U,
    0xBAD03605U, 0xCDD70693U, 0x54DE5729U, 0x23D967BFU,
    0xB3667A2EU, 0xC4614AB8U, 0x5D681B02U, 0x2A6F2B94U,
    0xB40BBE37U, 0xC30C8EA1U, 0x5A05DF1BU, 0x2D02EF8DU
};

/* ----------------------------------------------------------------------------
 * 2. Internal State & Configuration
 * ---------------------------------------------------------------------------- */
#define R2_MAX_SAVE_DIR_PATH        256
#define R2_MAX_SAVE_FILE_PATH       512

static char s_szSaveDir[R2_MAX_SAVE_DIR_PATH] = R2_DEFAULT_SAVE_DIR;

/* ----------------------------------------------------------------------------
 * 3. Internal File & Directory Helpers
 * ---------------------------------------------------------------------------- */

/* Safe string copy guaranteeing NUL-termination */
static void save_strlcpy(char *dst, const char *src, size_t dst_size) {
    if (!dst || dst_size == 0) return;
    if (!src) {
        dst[0] = '\0';
        return;
    }
    size_t i = 0;
    while (src[i] && (i + 1) < dst_size) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

/* Construct slot file path: <dir>/slot%d<suffix> */
static void save_format_slot_path(char *dst, size_t dst_size, int nSlot, const char *suffix) {
    if (!dst || dst_size == 0) return;
    size_t dir_len = strlen(s_szSaveDir);
    if (dir_len > 0 && s_szSaveDir[dir_len - 1] != '/' && s_szSaveDir[dir_len - 1] != '\\') {
        snprintf(dst, dst_size, "%s/slot%d%s", s_szSaveDir, nSlot, suffix);
    } else {
        snprintf(dst, dst_size, "%sslot%d%s", s_szSaveDir, nSlot, suffix);
    }
}

/* Check if file exists on disk */
static bool save_file_exists(const char *path) {
    if (!path || !path[0]) return false;
#if defined(__vita__)
    SceIoStat stat_buf;
    if (sceIoGetstat(path, &stat_buf) >= 0) {
        return true;
    }
#endif
    FILE *fp = fopen(path, "rb");
    if (fp) {
        fclose(fp);
        return true;
    }
    return false;
}

/* Remove a single file */
static bool save_remove_file(const char *path) {
    if (!path || !path[0]) return false;
#if defined(__vita__)
    if (sceIoRemove(path) >= 0) {
        return true;
    }
#endif
    return (remove(path) == 0);
}

/* Atomically rename a temporary file to destination path */
static bool save_atomic_rename(const char *szTmpPath, const char *szFinalPath) {
    if (!szTmpPath || !szFinalPath) return false;

    /* On PS Vita and FAT filesystems, rename fails if the destination already exists.
     * Always delete the target first to ensure atomic replacement succeeds. */
    if (save_file_exists(szFinalPath)) {
        save_remove_file(szFinalPath);
    }

#if defined(__vita__)
    if (sceIoRename(szTmpPath, szFinalPath) >= 0) {
        return true;
    }
#endif
    return (rename(szTmpPath, szFinalPath) == 0);
}

/* Ensure directory hierarchy exists */
static bool save_ensure_directory(void) {
    if (CPA_DirectoryExists(s_szSaveDir)) {
        return true;
    }

    /* Pass dummy leaf path so CPA_CreateDirectoryRecursive correctly creates s_szSaveDir */
    char szDummyPath[R2_MAX_SAVE_FILE_PATH];
    size_t dir_len = strlen(s_szSaveDir);
    if (dir_len > 0 && s_szSaveDir[dir_len - 1] != '/' && s_szSaveDir[dir_len - 1] != '\\') {
        snprintf(szDummyPath, sizeof(szDummyPath), "%s/dummy.tmp", s_szSaveDir);
    } else {
        snprintf(szDummyPath, sizeof(szDummyPath), "%sdummy.tmp", s_szSaveDir);
    }

    CPA_CreateDirectoryRecursive(szDummyPath);
    CPA_CreateDirectory(s_szSaveDir);

    return CPA_DirectoryExists(s_szSaveDir);
}

/* ----------------------------------------------------------------------------
 * 4. Checksum Calculation
 * ---------------------------------------------------------------------------- */

uint32_t SAVE_uCalculateCRC32(const void *pData, size_t nBytes) {
    if (!pData || nBytes == 0) {
        return 0;
    }

    const uint8_t *p = (const uint8_t *)pData;
    uint32_t crc = 0xFFFFFFFFU;

    for (size_t i = 0; i < nBytes; i++) {
        crc = s_aCRC32Table[(crc ^ p[i]) & 0xFFU] ^ (crc >> 8);
    }

    return crc ^ 0xFFFFFFFFU;
}

/* ----------------------------------------------------------------------------
 * 5. Save System Lifecycle & Path Configuration
 * ---------------------------------------------------------------------------- */

void SAVE_vSetSaveDirectory(const char *dir) {
    if (!dir || dir[0] == '\0') {
        save_strlcpy(s_szSaveDir, R2_DEFAULT_SAVE_DIR, sizeof(s_szSaveDir));
    } else {
        save_strlcpy(s_szSaveDir, dir, sizeof(s_szSaveDir));
        size_t len = strlen(s_szSaveDir);
        /* Ensure trailing slash for consistent path concatenation */
        if (len > 0 && s_szSaveDir[len - 1] != '/' && s_szSaveDir[len - 1] != '\\') {
            if (len + 1 < sizeof(s_szSaveDir)) {
                s_szSaveDir[len] = '/';
                s_szSaveDir[len + 1] = '\0';
            }
        }
    }
}

const char *SAVE_szGetSaveDirectory(void) {
    return s_szSaveDir;
}

bool SAVE_Vita_Init(void) {
    OS_Vita_LogInfo("[SAVE] Initializing Vita save subsystem (Directory: '%s')", s_szSaveDir);

    if (!save_ensure_directory()) {
        OS_Vita_LogError("[SAVE] Failed to create or access save directory: '%s'", s_szSaveDir);
        return false;
    }

    OS_Vita_LogInfo("[SAVE] Save subsystem initialized successfully");
    return true;
}

/* ----------------------------------------------------------------------------
 * 6. Slot Initialization
 * ---------------------------------------------------------------------------- */

void SAVE_vInitDefaultSlot(int nSlot, R2_tdst_SaveSlot *pSave) {
    if (!pSave) return;

    memset(pSave, 0, sizeof(R2_tdst_SaveSlot));

    pSave->uMagic = R2_SAVE_MAGIC;
    pSave->uVersion = R2_SAVE_VERSION;
    pSave->nSlot = (nSlot >= R2_SAVE_MIN_SLOT && nSlot <= R2_SAVE_MAX_SLOT) ? nSlot : 1;

    /* Dreamcast baseline prologue: Woods of Light (LEARN_10) */
    save_strlcpy(pSave->szLevelName, "LEARN_10", sizeof(pSave->szLevelName));
    pSave->nLumsCollected = 0;
    pSave->nCagesBroken = 0;
    pSave->nLivesCount = 3;
    pSave->nMaxHealth = 100;
    pSave->nCurrentHealth = 100;

    /* Starting abilities: Magic Fist + Helicopter gliding */
    pSave->uUnlockedPowers = R2_POWER_MAGIC_FIST | R2_POWER_HELICOPTER;
    pSave->nFistPowerLevel = 1;
    pSave->uPlayTimeSeconds = 0;
    pSave->uTimestamp = (uint64_t)time(NULL);

    /* Compute initial valid CRC32 payload checksum */
    pSave->uChecksum = SAVE_uCalculateCRC32(
        (const uint8_t *)pSave + R2_SAVE_PAYLOAD_OFFSET,
        R2_SAVE_PAYLOAD_SIZE
    );
}

/* ----------------------------------------------------------------------------
 * 7. Slot Existence & Deletion
 * ---------------------------------------------------------------------------- */

bool SAVE_bSlotExists(int nSlot) {
    if (nSlot < R2_SAVE_MIN_SLOT || nSlot > R2_SAVE_MAX_SLOT) {
        return false;
    }

    char szPath[512];
    save_format_slot_path(szPath, sizeof(szPath), nSlot, ".sav");
    return save_file_exists(szPath);
}

bool SAVE_bDeleteSlot(int nSlot) {
    if (nSlot < R2_SAVE_MIN_SLOT || nSlot > R2_SAVE_MAX_SLOT) {
        OS_Vita_LogError("[SAVE] Cannot delete invalid slot index %d (valid 1..3)", nSlot);
        return false;
    }

    char szPath[512];
    char szTmpPath[512];
    save_format_slot_path(szPath, sizeof(szPath), nSlot, ".sav");
    save_format_slot_path(szTmpPath, sizeof(szTmpPath), nSlot, ".sav.tmp");

    /* Remove any leftover temporary file */
    save_remove_file(szTmpPath);

    if (!save_file_exists(szPath)) {
        OS_Vita_LogInfo("[SAVE] Slot %d already empty, nothing to delete", nSlot);
        return true;
    }

    if (save_remove_file(szPath)) {
        OS_Vita_LogInfo("[SAVE] Successfully deleted slot %d ('%s')", nSlot, szPath);
        return true;
    } else {
        OS_Vita_LogError("[SAVE] Failed to delete slot %d ('%s')", nSlot, szPath);
        return false;
    }
}

/* ----------------------------------------------------------------------------
 * 8. Save Slot (Atomic Write Protocol)
 * ---------------------------------------------------------------------------- */

bool SAVE_bSaveSlot(int nSlot, const R2_tdst_SaveSlot *pSave) {
    if (!pSave) {
        OS_Vita_LogError("[SAVE] SAVE_bSaveSlot called with NULL save pointer");
        return false;
    }

    if (nSlot < R2_SAVE_MIN_SLOT || nSlot > R2_SAVE_MAX_SLOT) {
        OS_Vita_LogError("[SAVE] Invalid slot index %d (must be between %d and %d)",
                         nSlot, R2_SAVE_MIN_SLOT, R2_SAVE_MAX_SLOT);
        return false;
    }

    /* Ensure directory is created before writing */
    if (!save_ensure_directory()) {
        OS_Vita_LogError("[SAVE] Cannot write save slot %d: destination directory unavailable", nSlot);
        return false;
    }

    /* Prepare a validated copy of the slot structure */
    R2_tdst_SaveSlot slot_data = *pSave;
    slot_data.uMagic = R2_SAVE_MAGIC;
    slot_data.uVersion = R2_SAVE_VERSION;
    slot_data.nSlot = nSlot;

    /* Guarantee NUL-terminated level string */
    slot_data.szLevelName[sizeof(slot_data.szLevelName) - 1] = '\0';

    /* If no timestamp provided, record current system time */
    if (slot_data.uTimestamp == 0) {
        slot_data.uTimestamp = (uint64_t)time(NULL);
    }

    /* Calculate CRC32 checksum strictly over the payload */
    slot_data.uChecksum = SAVE_uCalculateCRC32(
        (const uint8_t *)&slot_data + R2_SAVE_PAYLOAD_OFFSET,
        R2_SAVE_PAYLOAD_SIZE
    );

    /* Form temporary and final target file paths */
    char szTmpPath[512];
    char szFinalPath[512];
    save_format_slot_path(szTmpPath, sizeof(szTmpPath), nSlot, ".sav.tmp");
    save_format_slot_path(szFinalPath, sizeof(szFinalPath), nSlot, ".sav");

    /* Remove any existing stale temporary file */
    save_remove_file(szTmpPath);

    /* Write to temporary file */
    FILE *fp = fopen(szTmpPath, "wb");
    if (!fp) {
        OS_Vita_LogError("[SAVE] Failed to open temporary save file '%s' for writing", szTmpPath);
        return false;
    }

    size_t written = fwrite(&slot_data, 1, sizeof(R2_tdst_SaveSlot), fp);
    if (written != sizeof(R2_tdst_SaveSlot)) {
        OS_Vita_LogError("[SAVE] Incomplete write to '%s' (%zu/%zu bytes written)",
                         szTmpPath, written, sizeof(R2_tdst_SaveSlot));
        fclose(fp);
        save_remove_file(szTmpPath);
        return false;
    }

    if (fflush(fp) != 0) {
        OS_Vita_LogError("[SAVE] Failed to flush temporary save file '%s'", szTmpPath);
        fclose(fp);
        save_remove_file(szTmpPath);
        return false;
    }

    fclose(fp);

    /* Atomically rename temporary file to destination */
    if (!save_atomic_rename(szTmpPath, szFinalPath)) {
        OS_Vita_LogError("[SAVE] Atomic rename failed ('%s' -> '%s')", szTmpPath, szFinalPath);
        save_remove_file(szTmpPath);
        return false;
    }

    OS_Vita_LogInfo("[SAVE] Successfully saved slot %d to '%s' (Level: '%s', Lums: %d/1000, Cages: %d/80, CRC32: 0x%08X)",
                    nSlot, szFinalPath, slot_data.szLevelName, slot_data.nLumsCollected, slot_data.nCagesBroken, slot_data.uChecksum);
    return true;
}

/* ----------------------------------------------------------------------------
 * 9. Load Slot (Comprehensive Validation Protocol)
 * ---------------------------------------------------------------------------- */

bool SAVE_bLoadSlot(int nSlot, R2_tdst_SaveSlot *pSave) {
    if (!pSave) {
        OS_Vita_LogError("[SAVE] SAVE_bLoadSlot called with NULL destination pointer");
        return false;
    }

    if (nSlot < R2_SAVE_MIN_SLOT || nSlot > R2_SAVE_MAX_SLOT) {
        OS_Vita_LogError("[SAVE] Invalid slot index %d (must be between %d and %d)",
                         nSlot, R2_SAVE_MIN_SLOT, R2_SAVE_MAX_SLOT);
        return false;
    }

    char szPath[512];
    save_format_slot_path(szPath, sizeof(szPath), nSlot, ".sav");

    FILE *fp = fopen(szPath, "rb");
    if (!fp) {
        OS_Vita_LogDebug("[SAVE] Save slot %d file '%s' does not exist", nSlot, szPath);
        return false;
    }

    /* 1. File size check */
    if (fseek(fp, 0, SEEK_END) != 0) {
        OS_Vita_LogError("[SAVE] Failed to seek to end of '%s'", szPath);
        fclose(fp);
        return false;
    }

    long file_size = ftell(fp);
    if (fseek(fp, 0, SEEK_SET) != 0) {
        OS_Vita_LogError("[SAVE] Failed to rewind '%s'", szPath);
        fclose(fp);
        return false;
    }

    if (file_size != (long)sizeof(R2_tdst_SaveSlot)) {
        OS_Vita_LogError("[SAVE] Slot %d file size mismatch: %ld bytes (expected %zu) — save corrupted",
                         nSlot, file_size, sizeof(R2_tdst_SaveSlot));
        fclose(fp);
        return false;
    }

    /* 2. Read full save structure */
    R2_tdst_SaveSlot loaded;
    size_t read_bytes = fread(&loaded, 1, sizeof(R2_tdst_SaveSlot), fp);
    fclose(fp);

    if (read_bytes != sizeof(R2_tdst_SaveSlot)) {
        OS_Vita_LogError("[SAVE] Slot %d short read: %zu/%zu bytes",
                         nSlot, read_bytes, sizeof(R2_tdst_SaveSlot));
        return false;
    }

    /* 3. Magic identifier check */
    if (loaded.uMagic != R2_SAVE_MAGIC) {
        OS_Vita_LogError("[SAVE] Slot %d corrupted: invalid magic 0x%08X (expected 0x%08X)",
                         nSlot, loaded.uMagic, R2_SAVE_MAGIC);
        return false;
    }

    /* 4. Format version check */
    if (loaded.uVersion != R2_SAVE_VERSION) {
        OS_Vita_LogError("[SAVE] Slot %d unsupported format version %u (supported version %u)",
                         nSlot, loaded.uVersion, R2_SAVE_VERSION);
        return false;
    }

    /* 5. Slot index integrity check */
    if (loaded.nSlot != nSlot) {
        OS_Vita_LogError("[SAVE] Slot %d metadata mismatch: internal header claims slot %d",
                         nSlot, loaded.nSlot);
        return false;
    }

    /* 6. CRC32 payload checksum validation */
    uint32_t calc_crc = SAVE_uCalculateCRC32(
        (const uint8_t *)&loaded + R2_SAVE_PAYLOAD_OFFSET,
        R2_SAVE_PAYLOAD_SIZE
    );

    if (calc_crc != loaded.uChecksum) {
        OS_Vita_LogError("[SAVE] Slot %d CRC32 checksum mismatch (stored: 0x%08X, calculated: 0x%08X) — SAVE CORRUPTED",
                         nSlot, loaded.uChecksum, calc_crc);
        return false;
    }

    /* All validations passed; copy to caller */
    *pSave = loaded;
    OS_Vita_LogInfo("[SAVE] Successfully loaded slot %d ('%s', Lums: %d/1000, Cages: %d/80, Lives: %d, Health: %d/%d, Powers: 0x%04X, CRC32: 0x%08X)",
                    nSlot, pSave->szLevelName, pSave->nLumsCollected, pSave->nCagesBroken,
                    pSave->nLivesCount, pSave->nCurrentHealth, pSave->nMaxHealth,
                    pSave->uUnlockedPowers, pSave->uChecksum);
    return true;
}
