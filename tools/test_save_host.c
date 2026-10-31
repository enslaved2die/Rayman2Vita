/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: test_save_host.c
 *
 * Host Validation Suite for Task 6.3 (Save Subsystem)
 * - Verifies IEEE 802.3 CRC32 calculation against official test vectors
 * - Verifies default slot initialization and progression boundaries
 * - Verifies atomic file writes (.tmp -> .sav rename) and directory creation
 * - Verifies multi-slot persistence (slots 1, 2, 3)
 * - Verifies load integrity validation (size, magic, version, slot ID, CRC32)
 * - Verifies failure modes and corrupted save rejection
 * - Verifies slot deletion and cleanup
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <sys/stat.h>

#include "vita_shim/os_vita.h"
#include "vita_shim/vfs_vita.h"
#include "vita_shim/save_vita.h"

#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RED     "\033[31m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_BOLD    "\033[1m"

#define TEST_PASS(msg) printf("%s[PASS]%s %s\n", COLOR_GREEN, COLOR_RESET, msg)
#define TEST_FAIL(msg) do { printf("%s[FAIL]%s %s\n", COLOR_RED, COLOR_RESET, msg); exit(1); } while(0)

#define TEST_SAVE_DIR "test_saves_temp/"

static void cleanup_test_dir(void) {
    char path[512];
    for (int i = 1; i <= 3; i++) {
        snprintf(path, sizeof(path), "%sslot%d.sav", TEST_SAVE_DIR, i);
        remove(path);
        snprintf(path, sizeof(path), "%sslot%d.sav.tmp", TEST_SAVE_DIR, i);
        remove(path);
    }
    rmdir(TEST_SAVE_DIR);
}

int main(void) {
    printf("%s%s=== Running Host Validation for Task 6.3: Save System ===%s\n\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    OS_Vita_TimerInit();

    /* ------------------------------------------------------------------------
     * Test 1: CRC32 Calculation against Official Vectors
     * ------------------------------------------------------------------------ */
    printf("%s--- Test 1: IEEE 802.3 CRC32 Calculation ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        /* Standard IEEE 802.3 CRC-32 test vector: ASCII "123456789" -> 0xCBF43926 */
        const char *test_vector = "123456789";
        uint32_t crc = SAVE_uCalculateCRC32(test_vector, 9);
        if (crc != 0xCBF43926U) {
            printf("Expected 0xCBF43926, got 0x%08X\n", crc);
            TEST_FAIL("CRC32 calculation failed for standard vector '123456789'");
        }

        /* Empty buffer check */
        assert(SAVE_uCalculateCRC32(NULL, 0) == 0);
        assert(SAVE_uCalculateCRC32("abc", 0) == 0);

        TEST_PASS("IEEE 802.3 CRC32 correctly computes 0xCBF43926 for '123456789'");
    }

    /* ------------------------------------------------------------------------
     * Test 2: Default Slot Initialization
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 2: Default Slot Initialization ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        R2_tdst_SaveSlot defSlot;
        SAVE_vInitDefaultSlot(1, &defSlot);

        assert(defSlot.uMagic == R2_SAVE_MAGIC);
        assert(defSlot.uVersion == R2_SAVE_VERSION);
        assert(defSlot.nSlot == 1);
        assert(strcmp(defSlot.szLevelName, "LEARN_10") == 0);
        assert(defSlot.nLumsCollected == 0);
        assert(defSlot.nCagesBroken == 0);
        assert(defSlot.nLivesCount == 3);
        assert(defSlot.nMaxHealth == 100);
        assert(defSlot.nCurrentHealth == 100);
        assert((defSlot.uUnlockedPowers & R2_POWER_MAGIC_FIST) != 0);
        assert((defSlot.uUnlockedPowers & R2_POWER_HELICOPTER) != 0);
        assert(defSlot.nFistPowerLevel == 1);
        assert(defSlot.uPlayTimeSeconds == 0);

        /* Validate precalculated checksum */
        uint32_t calc = SAVE_uCalculateCRC32(
            (const uint8_t *)&defSlot + R2_SAVE_PAYLOAD_OFFSET,
            R2_SAVE_PAYLOAD_SIZE
        );
        assert(defSlot.uChecksum == calc);

        TEST_PASS("Default slot initialized with valid Woods of Light (LEARN_10) baseline & valid CRC32");
    }

    /* ------------------------------------------------------------------------
     * Test 3: Save Directory Configuration & Lifecycle
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 3: Save Directory Setup & Initialization ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        /* Check default directory */
        assert(strcmp(SAVE_szGetSaveDirectory(), R2_DEFAULT_SAVE_DIR) == 0);

        /* Set local test directory */
        SAVE_vSetSaveDirectory(TEST_SAVE_DIR);
        assert(strcmp(SAVE_szGetSaveDirectory(), TEST_SAVE_DIR) == 0);

        /* Ensure clean starting state */
        cleanup_test_dir();

        /* Initialize save system (creates directory) */
        bool ok = SAVE_Vita_Init();
        if (!ok) {
            TEST_FAIL("SAVE_Vita_Init failed to create test directory");
        }
        assert(CPA_DirectoryExists(TEST_SAVE_DIR));

        TEST_PASS("Save directory overridden to test path and initialized via recursive creation");
    }

    /* ------------------------------------------------------------------------
     * Test 4: Save & Load Slot 1 (Atomic Protocol Verification)
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 4: Slot 1 Save & Load (Atomic Write Protocol) ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        R2_tdst_SaveSlot slot1;
        SAVE_vInitDefaultSlot(1, &slot1);
        strcpy(slot1.szLevelName, "MAPMONDE2"); /* Isle of Doors 3D Hub */
        slot1.nLumsCollected = 350;
        slot1.nCagesBroken = 25;
        slot1.nLivesCount = 5;
        slot1.nMaxHealth = 120;
        slot1.nCurrentHealth = 110;
        slot1.uUnlockedPowers |= (R2_POWER_SUPER_HELICOPTER | R2_POWER_SWIM | R2_POWER_PURPLE_LUM);
        slot1.nFistPowerLevel = 2;
        slot1.uPlayTimeSeconds = 3600;

        bool saved = SAVE_bSaveSlot(1, &slot1);
        if (!saved) {
            TEST_FAIL("SAVE_bSaveSlot(1) failed");
        }

        /* Check that .tmp file was renamed and removed */
        assert(access(TEST_SAVE_DIR "slot1.sav.tmp", F_OK) != 0);
        assert(access(TEST_SAVE_DIR "slot1.sav", F_OK) == 0);
        assert(SAVE_bSlotExists(1) == true);
        assert(SAVE_bSlotExists(2) == false);
        assert(SAVE_bSlotExists(3) == false);

        /* Load slot 1 */
        R2_tdst_SaveSlot loaded1;
        bool loaded = SAVE_bLoadSlot(1, &loaded1);
        if (!loaded) {
            TEST_FAIL("SAVE_bLoadSlot(1) failed");
        }

        assert(loaded1.uMagic == R2_SAVE_MAGIC);
        assert(loaded1.uVersion == R2_SAVE_VERSION);
        assert(loaded1.nSlot == 1);
        assert(strcmp(loaded1.szLevelName, "MAPMONDE2") == 0);
        assert(loaded1.nLumsCollected == 350);
        assert(loaded1.nCagesBroken == 25);
        assert(loaded1.nLivesCount == 5);
        assert(loaded1.nMaxHealth == 120);
        assert(loaded1.nCurrentHealth == 110);
        assert(loaded1.uUnlockedPowers == slot1.uUnlockedPowers);
        assert(loaded1.nFistPowerLevel == 2);
        assert(loaded1.uPlayTimeSeconds == 3600);
        uint32_t expected_crc = SAVE_uCalculateCRC32(
            (const uint8_t *)&slot1 + R2_SAVE_PAYLOAD_OFFSET,
            R2_SAVE_PAYLOAD_SIZE
        );
        assert(loaded1.uChecksum == expected_crc);

        TEST_PASS("Slot 1 saved atomically, temporary file cleaned up, and loaded with identical state");
    }

    /* ------------------------------------------------------------------------
     * Test 5: Overwriting Slot 1 with Updated Progression
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 5: Overwrite Slot 1 with Updated Progression ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        R2_tdst_SaveSlot updated;
        SAVE_bLoadSlot(1, &updated);
        strcpy(updated.szLevelName, "PRISON_10");
        updated.nLumsCollected = 999;
        updated.nCagesBroken = 80;
        updated.uUnlockedPowers |= R2_POWER_GOLDEN_FIST;
        updated.nFistPowerLevel = 3;

        bool saved = SAVE_bSaveSlot(1, &updated);
        assert(saved);

        R2_tdst_SaveSlot verified;
        bool loaded = SAVE_bLoadSlot(1, &verified);
        assert(loaded);
        assert(strcmp(verified.szLevelName, "PRISON_10") == 0);
        assert(verified.nLumsCollected == 999);
        assert(verified.nCagesBroken == 80);
        assert(verified.nFistPowerLevel == 3);
        assert(verified.uChecksum != 0);

        TEST_PASS("Slot 1 successfully overwritten and verified with updated progression");
    }

    /* ------------------------------------------------------------------------
     * Test 6: Multi-Slot Support (Slots 1, 2, 3)
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 6: Multi-Slot Support (Slots 1, 2, 3) ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        R2_tdst_SaveSlot slot2, slot3;
        SAVE_vInitDefaultSlot(2, &slot2);
        strcpy(slot2.szLevelName, "WATER_10");
        slot2.nLumsCollected = 120;

        SAVE_vInitDefaultSlot(3, &slot3);
        strcpy(slot3.szLevelName, "CHASE_10");
        slot3.nLumsCollected = 550;

        assert(SAVE_bSaveSlot(2, &slot2));
        assert(SAVE_bSaveSlot(3, &slot3));

        assert(SAVE_bSlotExists(1));
        assert(SAVE_bSlotExists(2));
        assert(SAVE_bSlotExists(3));

        R2_tdst_SaveSlot l2, l3;
        assert(SAVE_bLoadSlot(2, &l2));
        assert(SAVE_bLoadSlot(3, &l3));

        assert(l2.nSlot == 2);
        assert(strcmp(l2.szLevelName, "WATER_10") == 0);
        assert(l2.nLumsCollected == 120);

        assert(l3.nSlot == 3);
        assert(strcmp(l3.szLevelName, "CHASE_10") == 0);
        assert(l3.nLumsCollected == 550);

        TEST_PASS("All 3 independent save slots persisted and verified concurrently");
    }

    /* ------------------------------------------------------------------------
     * Test 7: Parameter Boundaries & NULL Safety
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 7: Parameter Boundaries & Safety ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        R2_tdst_SaveSlot dummy;
        SAVE_vInitDefaultSlot(1, &dummy);

        /* Invalid slot bounds */
        assert(!SAVE_bSaveSlot(0, &dummy));
        assert(!SAVE_bSaveSlot(4, &dummy));
        assert(!SAVE_bSaveSlot(-1, &dummy));

        assert(!SAVE_bLoadSlot(0, &dummy));
        assert(!SAVE_bLoadSlot(4, &dummy));
        assert(!SAVE_bLoadSlot(-5, &dummy));

        assert(!SAVE_bSlotExists(0));
        assert(!SAVE_bSlotExists(4));

        assert(!SAVE_bDeleteSlot(0));
        assert(!SAVE_bDeleteSlot(4));

        /* NULL pointers */
        assert(!SAVE_bSaveSlot(1, NULL));
        assert(!SAVE_bLoadSlot(1, NULL));

        TEST_PASS("Slot bounds (1..3) and NULL pointers safely guarded");
    }

    /* ------------------------------------------------------------------------
     * Test 8: Integrity & Corruption Detection
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 8: Save File Corruption Rejection ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        /* Corrupt slot 2 payload byte */
        const char *s2_path = TEST_SAVE_DIR "slot2.sav";
        FILE *fp = fopen(s2_path, "r+b");
        assert(fp != NULL);
        /* Corrupt a byte in the payload area (offset 20) */
        fseek(fp, 20, SEEK_SET);
        fputc('Z', fp);
        fclose(fp);

        R2_tdst_SaveSlot corruptTest;
        bool loadResult = SAVE_bLoadSlot(2, &corruptTest);
        if (loadResult) {
            TEST_FAIL("SAVE_bLoadSlot succeeded on corrupted slot data (CRC32 check bypassed!)");
        }
        TEST_PASS("Payload byte corruption detected and rejected via CRC32 validation");

        /* Corrupt Magic Header in slot 3 */
        const char *s3_path = TEST_SAVE_DIR "slot3.sav";
        fp = fopen(s3_path, "r+b");
        assert(fp != NULL);
        fseek(fp, 0, SEEK_SET);
        uint32_t bad_magic = 0xDEADBEEFU;
        fwrite(&bad_magic, sizeof(bad_magic), 1, fp);
        fclose(fp);

        loadResult = SAVE_bLoadSlot(3, &corruptTest);
        if (loadResult) {
            TEST_FAIL("SAVE_bLoadSlot succeeded with invalid magic header!");
        }
        TEST_PASS("Invalid magic header detected and rejected");

        /* Truncate file size */
        fp = fopen(s3_path, "wb");
        assert(fp != NULL);
        char partial[20] = {0};
        fwrite(partial, 1, 20, fp);
        fclose(fp);

        loadResult = SAVE_bLoadSlot(3, &corruptTest);
        if (loadResult) {
            TEST_FAIL("SAVE_bLoadSlot succeeded with truncated file size!");
        }
        TEST_PASS("Truncated file size detected and rejected");
    }

    /* ------------------------------------------------------------------------
     * Test 9: Slot Deletion
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 9: Slot Deletion ---%s\n", COLOR_BOLD, COLOR_RESET);
    {
        assert(SAVE_bSlotExists(1) == true);
        bool deleted = SAVE_bDeleteSlot(1);
        assert(deleted == true);
        assert(SAVE_bSlotExists(1) == false);

        R2_tdst_SaveSlot testLoad;
        assert(SAVE_bLoadSlot(1, &testLoad) == false);

        /* Deleting already deleted slot should succeed gracefully */
        assert(SAVE_bDeleteSlot(1) == true);

        TEST_PASS("Slot deletion cleanly removed file and updated slot existence status");
    }

    /* Cleanup */
    cleanup_test_dir();
    printf("\n%s%s=== ALL SAVE SYSTEM TESTS PASSED SUCCESSFULLY! ===%s\n\n",
           COLOR_BOLD, COLOR_GREEN, COLOR_RESET);

    return 0;
}
