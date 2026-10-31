/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: test_ino_host.c
 *
 * Task 6.1 Host-Side Validation Suite: Dual-Analog Input & Camera Controls
 *
 * Verifies:
 * 1. Center / Idle stick processing (clean zero output)
 * 2. Radial deadzone rejection (inner threshold ~0.15f)
 * 3. Outer deadzone saturation (~0.95f) and unit vector normalization
 * 4. Dreamcast response curve (gamma ~1.15f) smooth scaling
 * 5. Left stick 360-degree forward/backward axis conventions (rawY < 128 -> +Y)
 * 6. Right stick dual-analog camera yaw & pitch
 * 7. Right stick temporal low-pass filter (camera smoothing)
 * 8. Digital button transitions (down, pressed edge, released edge)
 * 9. Rayman 2 action semantic mappings (Jump, Shoot, Action, Look, Strafe, etc.)
 * 10. Standalone INO_vProcessStick verification
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>

#include "ino_vita.h"

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
    } else { \
        s_testsFailed++; \
        printf("%s[FAIL]%s line %d: %s\n", COLOR_RED, COLOR_RESET, __LINE__, msg); \
    } \
} while(0)

#define TEST_ASSERT_NEAR(val1, val2, eps, msg) do { \
    float diff = fabsf((float)(val1) - (float)(val2)); \
    if (diff <= (eps)) { \
        s_testsPassed++; \
    } else { \
        s_testsFailed++; \
        printf("%s[FAIL]%s line %d: %s (expected %f, got %f, diff %f > %f)\n", \
               COLOR_RED, COLOR_RESET, __LINE__, msg, (double)(val2), (double)(val1), (double)diff, (double)(eps)); \
    } \
} while(0)

/* ----------------------------------------------------------------------------
 * Test 1: Centered / Idle Stick Behavior
 * ---------------------------------------------------------------------------- */
static void Test_CenteredSticks(void)
{
    printf("%s[1/8] Testing Centered / Idle Stick Processing...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();
    INO_vInjectPadState(0, 128, 128, 128, 128);
    INO_Vita_Update();

    float lx = 99.0f, ly = 99.0f;
    float rx = 99.0f, ry = 99.0f;
    INO_vGetLeftStick(&lx, &ly);
    INO_vGetRightStick(&rx, &ry);

    TEST_ASSERT_NEAR(lx, 0.0f, 1e-6f, "Centered Left Stick X must be 0.0");
    TEST_ASSERT_NEAR(ly, 0.0f, 1e-6f, "Centered Left Stick Y must be 0.0");
    TEST_ASSERT_NEAR(rx, 0.0f, 1e-6f, "Centered Right Stick Yaw must be 0.0");
    TEST_ASSERT_NEAR(ry, 0.0f, 1e-6f, "Centered Right Stick Pitch must be 0.0");

    uint8_t rawLX = 0, rawLY = 0, rawRX = 0, rawRY = 0;
    INO_vGetRawLeftStick(&rawLX, &rawLY);
    INO_vGetRawRightStick(&rawRX, &rawRY);
    TEST_ASSERT(rawLX == 128 && rawLY == 128, "Raw left stick must report 128, 128");
    TEST_ASSERT(rawRX == 128 && rawRY == 128, "Raw right stick must report 128, 128");
}

/* ----------------------------------------------------------------------------
 * Test 2: Radial Deadzone Rejection (Small Noise / Jitter)
 * ---------------------------------------------------------------------------- */
static void Test_RadialDeadzoneRejection(void)
{
    printf("%s[2/8] Testing Radial Deadzone Noise Rejection (< 0.15f)...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();

    /* 128 +/- 8 raw counts is ~8/128 = 0.0625f deflection, inside 0.15 deadzone */
    uint8_t testPoints[][2] = {
        {130, 128}, {126, 128}, {128, 130}, {128, 126},
        {135, 128}, {121, 128}, {128, 135}, {128, 121},
        {134, 134}, {122, 122}, {134, 122}, {122, 134}
    };
    int count = sizeof(testPoints) / sizeof(testPoints[0]);

    for (int i = 0; i < count; ++i) {
        INO_vInjectPadState(0, testPoints[i][0], testPoints[i][1], 128, 128);
        INO_Vita_Update();

        float lx, ly;
        INO_vGetLeftStick(&lx, &ly);
        TEST_ASSERT_NEAR(lx, 0.0f, 1e-6f, "Small jitter must be suppressed by deadzone on X");
        TEST_ASSERT_NEAR(ly, 0.0f, 1e-6f, "Small jitter must be suppressed by deadzone on Y");
    }
}

/* ----------------------------------------------------------------------------
 * Test 3: Outer Deadzone Saturation & Normalization
 * ---------------------------------------------------------------------------- */
static void Test_OuterDeadzoneSaturation(void)
{
    printf("%s[3/8] Testing Outer Deadzone Saturation (>= 0.95f)...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();

    /* Extreme inputs (corners and pure cardinals) */
    /* Full Forward (rawY = 0) */
    INO_vInjectPadState(0, 128, 0, 128, 128);
    INO_Vita_Update();
    float lx, ly;
    INO_vGetLeftStick(&lx, &ly);
    TEST_ASSERT_NEAR(lx, 0.0f, 1e-4f, "Full forward X should be 0.0");
    TEST_ASSERT_NEAR(ly, 1.0f, 1e-4f, "Full forward Y should be +1.0");

    /* Full Backward (rawY = 255) */
    INO_vInjectPadState(0, 128, 255, 128, 128);
    INO_Vita_Update();
    INO_vGetLeftStick(&lx, &ly);
    TEST_ASSERT_NEAR(lx, 0.0f, 1e-4f, "Full backward X should be 0.0");
    TEST_ASSERT_NEAR(ly, -1.0f, 1e-4f, "Full backward Y should be -1.0");

    /* Full Right (rawX = 255) */
    INO_vInjectPadState(0, 255, 128, 128, 128);
    INO_Vita_Update();
    INO_vGetLeftStick(&lx, &ly);
    TEST_ASSERT_NEAR(lx, 1.0f, 1e-4f, "Full right X should be +1.0");
    TEST_ASSERT_NEAR(ly, 0.0f, 1e-4f, "Full right Y should be 0.0");

    /* Full Left (rawX = 0) */
    INO_vInjectPadState(0, 0, 128, 128, 128);
    INO_Vita_Update();
    INO_vGetLeftStick(&lx, &ly);
    TEST_ASSERT_NEAR(lx, -1.0f, 1e-4f, "Full left X should be -1.0");
    TEST_ASSERT_NEAR(ly, 0.0f, 1e-4f, "Full left Y should be 0.0");

    /* Diagonal Corner (rawX = 255, rawY = 0) -> saturated vector magnitude must be 1.0 */
    INO_vInjectPadState(0, 255, 0, 128, 128);
    INO_Vita_Update();
    INO_vGetLeftStick(&lx, &ly);
    float mag = sqrtf(lx * lx + ly * ly);
    TEST_ASSERT_NEAR(mag, 1.0f, 1e-4f, "Diagonal deflection at outer edge must normalize to magnitude 1.0");
    TEST_ASSERT_NEAR(lx, sqrtf(0.5f), 1e-4f, "Diagonal 45-deg X must be ~0.7071");
    TEST_ASSERT_NEAR(ly, sqrtf(0.5f), 1e-4f, "Diagonal 45-deg Y must be ~0.7071");
}

/* ----------------------------------------------------------------------------
 * Test 4: Dreamcast Response Curve (Gamma Exponent)
 * ---------------------------------------------------------------------------- */
static void Test_DreamcastResponseCurve(void)
{
    printf("%s[4/8] Testing Dreamcast Response Curve (Gamma ~1.15f)...%s\n", COLOR_CYAN, COLOR_RESET);

    /* Test standalone INO_vProcessStick */
    float outX = 0.0f, outY = 0.0f;

    /* Linear curve (gamma = 1.0f, inner = 0.0f, outer = 1.0f) */
    INO_vProcessStick(192, 128, 0.0f, 1.0f, 1.0f, &outX, &outY);
    /* 192 - 128 = 64; 64 / 127 = 0.5039f */
    TEST_ASSERT_NEAR(outX, 64.0f / 127.0f, 1e-3f, "Linear process stick mid-point");
    TEST_ASSERT_NEAR(outY, 0.0f, 1e-6f, "Linear process stick Y zero");

    /* With Dreamcast deadzone (inner=0.15, outer=0.95, gamma=1.15) */
    /* Mid deflection: rawX = 192 (nx ~ 0.5039f) */
    /* fMag = 0.5039f. Normalized = (0.5039 - 0.15) / (0.95 - 0.15) = 0.3539 / 0.80 = 0.4424f */
    /* Expected magnitude after gamma 1.15: pow(0.4424, 1.15) = 0.3905f */
    INO_vProcessStick(192, 128, 0.15f, 0.95f, 1.15f, &outX, &outY);
    float expectedMag = powf(( (64.0f / 127.0f) - 0.15f ) / (0.95f - 0.15f), 1.15f);
    TEST_ASSERT_NEAR(outX, expectedMag, 1e-3f, "Dreamcast response curve progressive scaling");
    TEST_ASSERT_NEAR(outY, 0.0f, 1e-6f, "Y must remain 0 during horizontal stick test");
}

/* ----------------------------------------------------------------------------
 * Test 5: Right Stick Dual-Analog Camera & Temporal Smoothing
 * ---------------------------------------------------------------------------- */
static void Test_RightStickCameraAndSmoothing(void)
{
    printf("%s[5/8] Testing Right Stick Camera Controls & Temporal Smoothing...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();
    INO_vSetCameraSmoothing(0.25f); /* 25% lerp factor per tick */

    /* Step input: right stick pushed full right (rawRX = 255, rawRY = 128) */
    INO_vInjectPadState(0, 128, 128, 255, 128);

    /* Frame 1: Target yaw = 1.0. With 0.25 smoothing, yaw should reach 0.25 */
    INO_Vita_Update();
    float yaw, pitch;
    INO_vGetRightStick(&yaw, &pitch);
    TEST_ASSERT_NEAR(yaw, 0.25f, 1e-4f, "Frame 1 smoothed camera yaw should be 0.25");
    TEST_ASSERT_NEAR(pitch, 0.0f, 1e-4f, "Camera pitch should be 0.0");

    /* Frame 2: Previous = 0.25, Target = 1.0. 0.25 + (1.0 - 0.25) * 0.25 = 0.4375 */
    INO_Vita_Update();
    INO_vGetRightStick(&yaw, &pitch);
    TEST_ASSERT_NEAR(yaw, 0.4375f, 1e-4f, "Frame 2 smoothed camera yaw should be 0.4375");

    /* Advance 20 frames to allow full convergence */
    for (int i = 0; i < 20; ++i) {
        INO_Vita_Update();
    }
    INO_vGetRightStick(&yaw, &pitch);
    TEST_ASSERT_NEAR(yaw, 1.0f, 0.01f, "Camera yaw should converge near 1.0 after 20 frames");

    /* Instant smoothing test (smoothing = 1.0f) */
    INO_vSetCameraSmoothing(1.0f);
    INO_vInjectPadState(0, 128, 128, 128, 0); /* stick full up -> tilt up (pitch > 0) */
    INO_Vita_Update();
    INO_vGetRightStick(&yaw, &pitch);
    TEST_ASSERT_NEAR(yaw, 0.0f, 1e-4f, "Instant filter yaw should be 0.0");
    TEST_ASSERT_NEAR(pitch, 1.0f, 1e-4f, "Instant filter pitch should immediately be +1.0");

    /* Camera axis inversion test */
    INO_vSetCameraInvert(true, true);
    INO_Vita_Update();
    INO_vGetRightStick(&yaw, &pitch);
    TEST_ASSERT_NEAR(pitch, -1.0f, 1e-4f, "Inverted camera pitch should be -1.0");
    INO_vSetCameraInvert(false, false);
}

/* ----------------------------------------------------------------------------
 * Test 6: Button Transitions (Edge Detection: Pressed, Held, Released)
 * ---------------------------------------------------------------------------- */
static void Test_ButtonEdgeTransitions(void)
{
    printf("%s[6/8] Testing Button Transitions & Edge Detection...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();

    /* Frame 0: All idle */
    INO_vInjectPadState(0, 128, 128, 128, 128);
    INO_Vita_Update();
    TEST_ASSERT(!INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross must not be down initially");
    TEST_ASSERT(!INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross must not be pressed initially");
    TEST_ASSERT(!INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross must not be released initially");

    /* Frame 1: Press Cross */
    INO_vInjectPadState(SCE_CTRL_CROSS, 128, 128, 128, 128);
    INO_Vita_Update();
    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross must be down on Frame 1");
    TEST_ASSERT(INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross must trigger Pressed edge on Frame 1");
    TEST_ASSERT(!INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross must not trigger Released on Frame 1");

    /* Frame 2: Hold Cross + press Square */
    INO_vInjectPadState(SCE_CTRL_CROSS | SCE_CTRL_SQUARE, 128, 128, 128, 128);
    INO_Vita_Update();
    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross still down on Frame 2");
    TEST_ASSERT(!INO_bIsButtonPressed(SCE_CTRL_CROSS), "Cross NOT newly pressed on Frame 2");
    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_SQUARE), "Square is down on Frame 2");
    TEST_ASSERT(INO_bIsButtonPressed(SCE_CTRL_SQUARE), "Square is newly pressed on Frame 2");

    /* Frame 3: Release Cross, keep Square */
    INO_vInjectPadState(SCE_CTRL_SQUARE, 128, 128, 128, 128);
    INO_Vita_Update();
    TEST_ASSERT(!INO_bIsButtonDown(SCE_CTRL_CROSS), "Cross is not down on Frame 3");
    TEST_ASSERT(INO_bIsButtonReleased(SCE_CTRL_CROSS), "Cross triggers Released edge on Frame 3");
    TEST_ASSERT(INO_bIsButtonDown(SCE_CTRL_SQUARE), "Square remains down on Frame 3");
    TEST_ASSERT(!INO_bIsButtonReleased(SCE_CTRL_SQUARE), "Square is not released on Frame 3");
}

static bool checkJump(const INO_tdstInputState *s)        { return s->bJump; }
static bool checkShoot(const INO_tdstInputState *s)       { return s->bShoot; }
static bool checkAction(const INO_tdstInputState *s)      { return s->bAction; }
static bool checkLook(const INO_tdstInputState *s)        { return s->bLook; }
static bool checkStrafe(const INO_tdstInputState *s)      { return s->bStrafe; }
static bool checkCamReset(const INO_tdstInputState *s)    { return s->bCameraReset; }
static bool checkPause(const INO_tdstInputState *s)       { return s->bPause; }
static bool checkWorldMap(const INO_tdstInputState *s)    { return s->bWorldMap; }

/* ----------------------------------------------------------------------------
 * Test 7: Rayman 2 Semantic Action Mapping
 * ---------------------------------------------------------------------------- */
static void Test_Rayman2ActionMapping(void)
{
    printf("%s[7/8] Testing Rayman 2 Action Mapping...%s\n", COLOR_CYAN, COLOR_RESET);

    INO_Vita_Init();

    struct ActionTestCase {
        uint32_t btn;
        const char *name;
        bool (*checkFn)(const INO_tdstInputState *st);
    };

    struct ActionTestCase tests[] = {
        { R2_BTN_JUMP,         "Jump (Cross)",          checkJump },
        { R2_BTN_SHOOT,        "Shoot (Square)",        checkShoot },
        { R2_BTN_ACTION,       "Action (Circle)",       checkAction },
        { R2_BTN_LOOK,         "Look (Triangle)",       checkLook },
        { R2_BTN_STRAFE,       "Strafe (LTrigger)",     checkStrafe },
        { R2_BTN_CAMERA_RESET, "CamReset (RTrigger)",   checkCamReset },
        { R2_BTN_PAUSE,        "Pause (Start)",         checkPause },
        { R2_BTN_WORLD_MAP,    "WorldMap (Select)",     checkWorldMap },
    };

    int numTests = sizeof(tests) / sizeof(tests[0]);
    for (int i = 0; i < numTests; ++i) {
        INO_vInjectPadState(tests[i].btn, 128, 128, 128, 128);
        INO_Vita_Update();
        const INO_tdstInputState *st = INO_pGetState();
        TEST_ASSERT(tests[i].checkFn(st), tests[i].name);
    }
}

/* ----------------------------------------------------------------------------
 * Test 8: Custom Deadzone & Robustness Limits
 * ---------------------------------------------------------------------------- */
static void Test_RobustnessAndCustomLimits(void)
{
    printf("%s[8/8] Testing Robustness & Degenerate Limits...%s\n", COLOR_CYAN, COLOR_RESET);

    float ox = 0.0f, oy = 0.0f;

    /* Null pointers should not crash */
    INO_vProcessStick(200, 200, 0.1f, 0.9f, 1.0f, NULL, &oy);
    INO_vProcessStick(200, 200, 0.1f, 0.9f, 1.0f, &ox, NULL);
    INO_vProcessStick(200, 200, 0.1f, 0.9f, 1.0f, NULL, NULL);
    TEST_ASSERT(true, "Null pointer protection in INO_vProcessStick");

    /* Degenerate deadzone thresholds (fOuter <= fInner) */
    INO_vProcessStick(255, 128, 0.5f, 0.2f, 1.0f, &ox, &oy);
    TEST_ASSERT(ox >= 0.0f, "Degenerate thresholds should not divide by zero");

    /* Getters with NULL parameters */
    INO_vGetLeftStick(NULL, NULL);
    INO_vGetRightStick(NULL, NULL);
    INO_vGetRawLeftStick(NULL, NULL);
    INO_vGetRawRightStick(NULL, NULL);
    TEST_ASSERT(true, "Getters with NULL parameters safely handled");
}

/* ----------------------------------------------------------------------------
 * Main Entry Point
 * ---------------------------------------------------------------------------- */
int main(void)
{
    printf("\n%s================================================================%s\n", COLOR_BOLD, COLOR_RESET);
    printf("%sRayman 2 PS Vita Port — Task 6.1 Input Subsystem Validation%s\n", COLOR_BOLD, COLOR_RESET);
    printf("%s================================================================%s\n\n", COLOR_BOLD, COLOR_RESET);

    Test_CenteredSticks();
    Test_RadialDeadzoneRejection();
    Test_OuterDeadzoneSaturation();
    Test_DreamcastResponseCurve();
    Test_RightStickCameraAndSmoothing();
    Test_ButtonEdgeTransitions();
    Test_Rayman2ActionMapping();
    Test_RobustnessAndCustomLimits();

    printf("\n%s================================================================%s\n", COLOR_BOLD, COLOR_RESET);
    printf("Results: %s%d Passed%s, %s%d Failed%s\n",
           COLOR_GREEN, s_testsPassed, COLOR_RESET,
           s_testsFailed ? COLOR_RED : COLOR_GREEN, s_testsFailed, COLOR_RESET);
    printf("%s================================================================%s\n\n", COLOR_BOLD, COLOR_RESET);

    return (s_testsFailed == 0) ? 0 : 1;
}
