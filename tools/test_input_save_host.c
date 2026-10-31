/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: test_input_save_host.c
 *
 * Host Verification Test Suite for Tasks 6.1 and 6.3:
 * - Task 6.1: Dual-Analog Input, Radial Deadzones, Dreamcast Response Curve &
 *             Camera Smoothing Controls (ino_vita.c)
 * - Task 6.3: Save System, Atomic Writes, CRC32 Integrity & Multi-Slot
 *             Serialization / Deserialization (save_vita.c)
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <unistd.h>
#include <sys/stat.h>

#include "ino_vita.h"
#include "save_vita.h"
#include "vita_shim/os_vita.h"
#include "vita_shim/vfs_vita.h"

/* ANSI Terminal Colors */
#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RED     "\033[31m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_BOLD    "\033[1m"

static int s_testsPassed = 0;
static int s_testsFailed = 0;

#define TEST_ASSERT(cond, msg) do { \
    if (cond) { \
        s_testsPassed++; \
        printf("  %s[PASS]%s %s\n", COLOR_GREEN, COLOR_RESET, msg); \
    } else { \
        s_testsFailed++; \
        printf("  %s[FAIL]%s line %d: %s\n", COLOR_RED, COLOR_RESET, __LINE__, msg); \
    } \
} while(0)

#define TEST_ASSERT_NEAR(val1, val2, eps, msg) do { \
    float diff = fabsf((float)(val1) - (float)(val2)); \
    if (diff <= (eps)) { \
        s_testsPassed++; \
        printf("  %s[PASS]%s %s (val: %.4f)\n", COLOR_GREEN, COLOR_RESET, msg, (double)(val1)); \
    } else { \
        s_testsFailed++; \
        printf("  %s[FAIL]%s line %d: %s (expected %.4f, got %.4f, diff %.4f > %.4f)\n", \
               COLOR_RED, COLOR_RESET, __LINE__, msg, (double)(val2), (double)(val1), (double)diff, (double)(eps)); \
    } \
} while(0)

#define TEST_SAVE_DIR "test_save_host_dir/"

static void cleanup_test_save_dir(void) {
    char path[512];
    for (int i = 1; i <= R2_SAVE_MAX_SLOT; i++) {
        snprintf(path, sizeof(path), "%sslot%d.sav", TEST_SAVE_DIR, i);
        remove(path);
        snprintf(path, sizeof(path), "%sslot%d.sav.tmp", TEST_SAVE_DIR, i);
        remove(path);
    }
    rmdir(TEST_SAVE_DIR);
}

/* ============================================================================
 * Section 1: Deadzone Math & Radial Stick Normalization
 * ============================================================================ */
static void test_input_deadzones_and_radial_math(void) {
    printf("\n%s%s=== Test Section 1: Deadzone Math & Radial Stick Normalization ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    float outX = -999.0f, outY = -999.0f;

    /* 1.1 Center (128, 128) must produce exact zero */
    INO_vProcessStick(128, 128, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.0001f, "Stick center (128, 128) yields 0.0f X");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.0001f, "Stick center (128, 128) yields 0.0f Y");

    /* 1.2 Small stick jitter within inner deadzone (~15%) must be rejected */
    INO_vProcessStick(135, 128, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.0001f, "Inner deadzone rejects X deflection (+7 units)");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.0001f, "Inner deadzone rejects Y deflection");

    INO_vProcessStick(128, 138, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.0001f, "Inner deadzone rejects X deflection");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.0001f, "Inner deadzone rejects Y deflection (+10 units)");

    /* Diagonal drift within radial Euclidean threshold */
    /* dx = 10/128, dy = 10/128 => magnitude = sqrt(200)/128 = 0.1105 < 0.15 */
    INO_vProcessStick(138, 138, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.0001f, "Radial Euclidean threshold rejects diagonal jitter X");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.0001f, "Radial Euclidean threshold rejects diagonal jitter Y");

    /* 1.3 Full Deflections & Outer Deadzone Saturation (~95%) */
    /* Full Right: rawX = 255, rawY = 128 -> outX = +1.0f, outY = 0.0f */
    INO_vProcessStick(255, 128, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 1.0f, 0.001f, "Full Right stick yields +1.0f X");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.001f, "Full Right stick yields 0.0f Y");

    /* Full Left: rawX = 0, rawY = 128 -> outX = -1.0f, outY = 0.0f */
    INO_vProcessStick(0, 128, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, -1.0f, 0.001f, "Full Left stick yields -1.0f X");
    TEST_ASSERT_NEAR(outY, 0.0f, 0.001f, "Full Left stick yields 0.0f Y");

    /* Full Up / Forward: rawX = 128, rawY = 0 -> outX = 0.0f, outY = +1.0f */
    INO_vProcessStick(128, 0, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.001f, "Full Forward stick yields 0.0f X");
    TEST_ASSERT_NEAR(outY, 1.0f, 0.001f, "Full Forward stick yields +1.0f Y (inverted coordinate)");

    /* Full Down / Backward: rawX = 128, rawY = 255 -> outX = 0.0f, outY = -1.0f */
    INO_vProcessStick(128, 255, 0.15f, 0.95f, 1.15f, &outX, &outY);
    TEST_ASSERT_NEAR(outX, 0.0f, 0.001f, "Full Backward stick yields 0.0f X");
    TEST_ASSERT_NEAR(outY, -1.0f, 0.001f, "Full Backward stick yields -1.0f Y");

    /* 1.4 Diagonal Saturation & Unit Magnitude Normalization */
    /* Diagonal corner (255, 0) -> magnitude clamped to 1.0f, preserved 45-degree angle */
    INO_vProcessStick(255, 0, 0.15f, 0.95f, 1.15f, &outX, &outY);
    float diagMag = sqrtf(outX * outX + outY * outY);
    TEST_ASSERT_NEAR(diagMag, 1.0f, 0.002f, "Diagonal corner saturation clamped to unit magnitude 1.0f");
    TEST_ASSERT_NEAR(outX, outY, 0.001f, "Diagonal corner preserves equal X and Y components (cos/sin 45 deg)");
}

/* ============================================================================
 * Section 2: Dreamcast Analog Response Curve Progression
 * ============================================================================ */
static void test_input_dreamcast_response_curve(void) {
    printf("\n%s%s=== Test Section 2: Dreamcast Analog Response Curve Progression ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    float prevMag = 0.0f;
    bool bMonotonic = true;

    /* Scan deflections from center (128) to maximum (255) */
    for (int raw = 148; raw <= 250; raw += 10) {
        float x, y;
        INO_vProcessStick((uint8_t)raw, 128, 0.15f, 0.95f, 1.15f, &x, &y);
        float mag = fabsf(x);

        if (mag < prevMag) {
            bMonotonic = false;
        }
        prevMag = mag;
    }
    TEST_ASSERT(bMonotonic, "Analog response curve monotonically increases without discontinuity");

    /* Verify gentle Dreamcast sensitivity curve (fGamma = 1.15f is slightly under linear at midpoint) */
    float xMidLinear, yMidLinear, xMidDC, yMidDC;
    /* Halfway in active zone: raw = 128 + (128 * (0.15 + 0.40)) ~ 198 */
    INO_vProcessStick(198, 128, 0.15f, 0.95f, 1.00f, &xMidLinear, &yMidLinear); /* Linear */
    INO_vProcessStick(198, 128, 0.15f, 0.95f, 1.15f, &xMidDC, &yMidDC);         /* DC Gamma */

    TEST_ASSERT(xMidDC < xMidLinear, "Dreamcast gamma curve (1.15) provides finer near-center control than linear");
    TEST_ASSERT(xMidDC > 0.0f, "Dreamcast response is strictly positive in active range");
}

/* ============================================================================
 * Section 3: Dual-Analog Camera Controls & Temporal Smoothing
 * ============================================================================ */
static void test_input_camera_controls_and_smoothing(void) {
    printf("\n%s%s=== Test Section 3: Dual-Analog Camera Controls & Smoothing ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();
    INO_vSetCameraSmoothing(0.30f);

    /* Frame 1: Right stick tilted full right (rx = 255, ry = 128) */
    INO_vInjectPadState(0, 128, 128, 255, 128);
    INO_Vita_Update();

    float yaw1, pitch1;
    INO_vGetRightStick(&yaw1, &pitch1);
    TEST_ASSERT(yaw1 > 0.10f && yaw1 < 0.50f, "Frame 1 camera yaw ramps up smoothly via low-pass filter (not instant 1.0)");
    TEST_ASSERT_NEAR(pitch1, 0.0f, 0.001f, "Camera pitch remains zero during horizontal turn");

    /* Frame 2: Sustained right tilt */
    INO_vInjectPadState(0, 128, 128, 255, 128);
    INO_Vita_Update();
    float yaw2, pitch2;
    INO_vGetRightStick(&yaw2, &pitch2);
    TEST_ASSERT(yaw2 > yaw1, "Frame 2 camera yaw continues smooth convergence towards target");

    /* Frame 3..15: Settle towards target 1.0f */
    for (int f = 0; f < 15; f++) {
        INO_vInjectPadState(0, 128, 128, 255, 128);
        INO_Vita_Update();
    }
    float yawSettle, pitchSettle;
    INO_vGetRightStick(&yawSettle, &pitchSettle);
    TEST_ASSERT_NEAR(yawSettle, 1.0f, 0.01f, "Camera yaw converges close to 1.0f under sustained input");

    /* Release right stick back to neutral (rx = 128, ry = 128) */
    for (int f = 0; f < 25; f++) {
        INO_vInjectPadState(0, 128, 128, 128, 128);
        INO_Vita_Update();
    }
    float yawRest, pitchRest;
    INO_vGetRightStick(&yawRest, &pitchRest);
    TEST_ASSERT_NEAR(yawRest, 0.0f, 0.0001f, "Camera yaw cleanly snaps to 0.0f when stick is released to center");
    TEST_ASSERT_NEAR(pitchRest, 0.0f, 0.0001f, "Camera pitch cleanly at 0.0f at rest");
}

/* ============================================================================
 * Section 4: Button Mapping & Edge Detection (Rayman 2 Semantics)
 * ============================================================================ */
static void test_input_button_mappings_and_transitions(void) {
    printf("\n%s%s=== Test Section 4: Button Mapping & Edge Detection ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();

    /* 4.1 Rising edge (Pressed) detection */
    INO_vInjectPadState(SCE_CTRL_CROSS, 128, 128, 128, 128);
    INO_Vita_Update();

    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross button is DOWN on initial press");
    TEST_ASSERT(INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross button is PRESSED on initial press (edge 0->1)");
    TEST_ASSERT(!INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross button is NOT RELEASED on initial press");

    const INO_tdstInputState *pState = INO_pGetState();
    TEST_ASSERT(pState->bJump, "Cross button mapped to Rayman 2 Jump / Helicopter action");

    /* 4.2 Held button detection (Pressed must be false on subsequent frames) */
    INO_vInjectPadState(SCE_CTRL_CROSS, 128, 128, 128, 128);
    INO_Vita_Update();

    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross button remains DOWN when held");
    TEST_ASSERT(!INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross button is NOT PRESSED on subsequent held frames");
    TEST_ASSERT(!INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross button is NOT RELEASED while held");

    /* 4.3 Falling edge (Released) detection */
    INO_vInjectPadState(0, 128, 128, 128, 128);
    INO_Vita_Update();

    TEST_ASSERT(!INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross button is NOT DOWN after release");
    TEST_ASSERT(!INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross button is NOT PRESSED after release");
    TEST_ASSERT(INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross button is RELEASED on edge 1->0");

    /* 4.4 Verify all Rayman 2 mapped buttons */
    uint32_t allR2Buttons = SCE_CTRL_CROSS | SCE_CTRL_SQUARE | SCE_CTRL_CIRCLE |
                            SCE_CTRL_TRIANGLE | SCE_CTRL_LTRIGGER | SCE_CTRL_RTRIGGER |
                            SCE_CTRL_START | SCE_CTRL_SELECT |
                            SCE_CTRL_UP | SCE_CTRL_DOWN | SCE_CTRL_LEFT | SCE_CTRL_RIGHT;

    INO_vInjectPadState(allR2Buttons, 128, 128, 128, 128);
    INO_Vita_Update();

    pState = INO_pGetState();
    TEST_ASSERT(pState->bJump, "Jump action active (Cross)");
    TEST_ASSERT(pState->bShoot, "Shoot Magic Fist action active (Square)");
    TEST_ASSERT(pState->bAction, "Action / Roll action active (Circle)");
    TEST_ASSERT(pState->bLook, "Look / First-person action active (Triangle)");
    TEST_ASSERT(pState->bStrafe, "Strafe / Z-Target action active (L Trigger)");
    TEST_ASSERT(pState->bCameraReset, "Camera Recenter action active (R Trigger)");
    TEST_ASSERT(pState->bPause, "Pause / Options action active (Start)");
    TEST_ASSERT(pState->bWorldMap, "3D Isle of Doors / Hub action active (Select)");
}

/* ============================================================================
 * Section 5: Save System CRC32 Integrity & Default Initialization
 * ============================================================================ */
static void test_save_crc32_and_defaults(void) {
    printf("\n%s%s=== Test Section 5: Save System CRC32 & Default Initialization ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    /* 5.1 CRC32 official standard test vector: "123456789" -> 0xCBF43926 */
    const char *testVector = "123456789";
    uint32_t crc = SAVE_uCalculateCRC32(testVector, strlen(testVector));
    TEST_ASSERT(crc == 0xCBF43926U, "IEEE 802.3 CRC32 matches standard test vector (0xCBF43926)");

    /* 5.2 Default Slot Initialization */
    R2_tdst_SaveSlot slot;
    memset(&slot, 0xCC, sizeof(slot));
    SAVE_vInitDefaultSlot(1, &slot);

    TEST_ASSERT(slot.uMagic == R2_SAVE_MAGIC, "Default slot uMagic == 0x56533252 ('R2SV')");
    TEST_ASSERT(slot.uVersion == R2_SAVE_VERSION, "Default slot uVersion == 1");
    TEST_ASSERT(slot.nSlot == 1, "Default slot nSlot == 1");
    TEST_ASSERT(strcmp(slot.szLevelName, "LEARN_10") == 0, "Default slot starts in Woods of Light ('LEARN_10')");
    TEST_ASSERT(slot.nLumsCollected == 0, "Default slot Yellow Lums == 0");
    TEST_ASSERT(slot.nCagesBroken == 0, "Default slot Cages broken == 0");
    TEST_ASSERT(slot.nMaxHealth == 100, "Default slot max health == 100");
    TEST_ASSERT(slot.nCurrentHealth == 100, "Default slot current health == 100");
    TEST_ASSERT(slot.uUnlockedPowers == (R2_POWER_MAGIC_FIST | R2_POWER_HELICOPTER),
                "Default powers include Magic Fist and Helicopter");
    TEST_ASSERT(slot.uPlayTimeSeconds == 0, "Default playtime == 0 seconds");

    /* Verify initial slot CRC32 matches payload */
    uint32_t calculatedCrc = SAVE_uCalculateCRC32((const uint8_t *)&slot + R2_SAVE_PAYLOAD_OFFSET, R2_SAVE_PAYLOAD_SIZE);
    TEST_ASSERT(slot.uChecksum == calculatedCrc, "Initial default slot checksum matches its payload");
}

/* ============================================================================
 * Section 6: Atomic Writes, Multi-Slot Persistence & Deserialization
 * ============================================================================ */
static void test_save_atomic_persistence_and_deserialization(void) {
    printf("\n%s%s=== Test Section 6: Atomic Writes & Multi-Slot Persistence ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    cleanup_test_save_dir();
    SAVE_vSetSaveDirectory(TEST_SAVE_DIR);

    /* Initialize Save Subsystem (creates directory) */
    bool bInit = SAVE_Vita_Init();
    TEST_ASSERT(bInit, "SAVE_Vita_Init successfully creates test save directory");

    /* Prepare Save Slot 1 */
    R2_tdst_SaveSlot slot1;
    SAVE_vInitDefaultSlot(1, &slot1);
    slot1.nLumsCollected = 250;
    slot1.nCagesBroken = 15;
    slot1.nCurrentHealth = 85;
    slot1.uPlayTimeSeconds = 3600;
    strncpy(slot1.szLevelName, "WATER_10", sizeof(slot1.szLevelName));
    slot1.uUnlockedPowers |= R2_POWER_SWIM | R2_POWER_PURPLE_LUM;

    /* Execute Atomic Save */
    bool bSaved1 = SAVE_bSaveSlot(1, &slot1);
    TEST_ASSERT(bSaved1, "SAVE_bSaveSlot(1) reports success");

    /* Verify file exists and temporary .tmp file is cleanly removed */
    char pathSav[512], pathTmp[512];
    snprintf(pathSav, sizeof(pathSav), "%sslot1.sav", TEST_SAVE_DIR);
    snprintf(pathTmp, sizeof(pathTmp), "%sslot1.sav.tmp", TEST_SAVE_DIR);

    TEST_ASSERT(SAVE_bSlotExists(1), "SAVE_bSlotExists(1) confirms slot1.sav exists on disk");
    TEST_ASSERT(access(pathSav, F_OK) == 0, "Final slot1.sav exists in filesystem");
    TEST_ASSERT(access(pathTmp, F_OK) != 0, "Atomic write guarantee: temporary slot1.sav.tmp is cleaned up");

    /* Load Back Slot 1 & Verify Deserialization */
    R2_tdst_SaveSlot loaded1;
    memset(&loaded1, 0, sizeof(loaded1));
    bool bLoaded1 = SAVE_bLoadSlot(1, &loaded1);

    TEST_ASSERT(bLoaded1, "SAVE_bLoadSlot(1) reports success");
    TEST_ASSERT(loaded1.uMagic == R2_SAVE_MAGIC, "Loaded slot magic verified");
    TEST_ASSERT(loaded1.uVersion == R2_SAVE_VERSION, "Loaded slot version verified");
    TEST_ASSERT(loaded1.nSlot == 1, "Loaded slot ID matches 1");
    TEST_ASSERT(strcmp(loaded1.szLevelName, "WATER_10") == 0, "Loaded level name matches 'WATER_10'");
    TEST_ASSERT(loaded1.nLumsCollected == 250, "Loaded Lums collected matches 250");
    TEST_ASSERT(loaded1.nCagesBroken == 15, "Loaded cages broken matches 15");
    TEST_ASSERT(loaded1.nCurrentHealth == 85, "Loaded current health matches 85");
    TEST_ASSERT(loaded1.uPlayTimeSeconds == 3600, "Loaded playtime matches 3600s");
    TEST_ASSERT((loaded1.uUnlockedPowers & R2_POWER_SWIM) != 0, "Loaded powers include Swim power");

    /* Multi-Slot Independence: Save Slot 2 and Slot 3 with different data */
    R2_tdst_SaveSlot slot2, slot3;
    SAVE_vInitDefaultSlot(2, &slot2);
    slot2.nLumsCollected = 600;
    strncpy(slot2.szLevelName, "LAVA_10", sizeof(slot2.szLevelName));
    SAVE_bSaveSlot(2, &slot2);

    SAVE_vInitDefaultSlot(3, &slot3);
    slot3.nLumsCollected = 999;
    slot3.nCagesBroken = 80;
    strncpy(slot3.szLevelName, "MAPMONDE2", sizeof(slot3.szLevelName));
    SAVE_bSaveSlot(3, &slot3);

    R2_tdst_SaveSlot check2, check3;
    SAVE_bLoadSlot(2, &check2);
    SAVE_bLoadSlot(3, &check3);

    TEST_ASSERT(check2.nLumsCollected == 600 && strcmp(check2.szLevelName, "LAVA_10") == 0,
                "Slot 2 preserves independent progression without interference");
    TEST_ASSERT(check3.nLumsCollected == 999 && check3.nCagesBroken == 80 && strcmp(check3.szLevelName, "MAPMONDE2") == 0,
                "Slot 3 preserves independent 3D Isle of Doors / Hub progression");
}

/* ============================================================================
 * Section 7: Corruption Detection, Tamper Rejection & Deletion
 * ============================================================================ */
static void test_save_corruption_rejection_and_deletion(void) {
    printf("\n%s%s=== Test Section 7: Corruption Rejection & Deletion ===%s\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    char pathSav[512];
    snprintf(pathSav, sizeof(pathSav), "%sslot1.sav", TEST_SAVE_DIR);

    /* 7.1 Corrupt a byte in the payload of slot1.sav */
    FILE *f = fopen(pathSav, "r+b");
    assert(f != NULL);
    fseek(f, R2_SAVE_PAYLOAD_OFFSET + 8, SEEK_SET); /* Mutate Lums field */
    uint8_t badByte = 0xEE;
    fwrite(&badByte, 1, 1, f);
    fclose(f);

    R2_tdst_SaveSlot corruptedSlot;
    bool bCorruptLoad = SAVE_bLoadSlot(1, &corruptedSlot);
    TEST_ASSERT(!bCorruptLoad, "CRC32 checksum mismatch triggers immediate rejection of tampered save file");

    /* 7.2 Out of bounds slot index rejection */
    R2_tdst_SaveSlot dummy;
    memset(&dummy, 0, sizeof(dummy));
    TEST_ASSERT(!SAVE_bSaveSlot(0, &dummy), "SAVE_bSaveSlot rejects slot 0 (< 1)");
    TEST_ASSERT(!SAVE_bSaveSlot(4, &dummy), "SAVE_bSaveSlot rejects slot 4 (> 3)");
    TEST_ASSERT(!SAVE_bLoadSlot(0, &dummy), "SAVE_bLoadSlot rejects slot 0");
    TEST_ASSERT(!SAVE_bLoadSlot(4, &dummy), "SAVE_bLoadSlot rejects slot 4");

    /* 7.3 Slot Deletion */
    bool bDeleted = SAVE_bDeleteSlot(2);
    TEST_ASSERT(bDeleted, "SAVE_bDeleteSlot(2) successfully deleted slot 2");
    TEST_ASSERT(!SAVE_bSlotExists(2), "SAVE_bSlotExists(2) confirms slot 2 no longer exists");

    cleanup_test_save_dir();
}

/* ============================================================================
 * Main Test Runner
 * ============================================================================ */
int main(void) {
    printf("%s%s============================================================================%s\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
    printf("%s%s Rayman 2 PS Vita Port — Verification Test Suite for Tasks 6.1 & 6.3%s\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
    printf("%s%s Dual-Analog Input, Camera Smoothing, Deadzones & Save Serialization%s\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
    printf("%s%s============================================================================%s\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);

    OS_Vita_TimerInit();

    test_input_deadzones_and_radial_math();
    test_input_dreamcast_response_curve();
    test_input_camera_controls_and_smoothing();
    test_input_button_mappings_and_transitions();
    test_save_crc32_and_defaults();
    test_save_atomic_persistence_and_deserialization();
    test_save_corruption_rejection_and_deletion();

    printf("\n%s%s============================================================================%s\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
    printf(" Test Results: %s%d Passed%s, %s%d Failed%s (Total: %d)\n",
           COLOR_GREEN, s_testsPassed, COLOR_RESET,
           s_testsFailed > 0 ? COLOR_RED : COLOR_GREEN, s_testsFailed, COLOR_RESET,
           s_testsPassed + s_testsFailed);
    printf("%s%s============================================================================%s\n\n",
           COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);

    return (s_testsFailed == 0) ? 0 : 1;
}
