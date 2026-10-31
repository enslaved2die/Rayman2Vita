/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: ino_vita.c
 *
 * PlayStation Vita Controller & Dual-Analog Camera Subsystem Implementation
 * Task 6.1 — Dreamcast Analog Input & Camera Controls
 *
 * - PS Vita controller sampling mode initialization (SCE_CTRL_MODE_ANALOG / WIDE)
 * - Positive-logic pad polling via sceCtrlPeekBufferPositive(0, &pad, 1)
 * - Dreamcast analog response curve (radial deadzone, gamma ~1.15)
 * - Dual-analog camera controls with temporal low-pass filter
 * - Complete Rayman 2 action mappings and edge-detection transitions
 * - Host test harness support via INO_vInjectPadState
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include "ino_vita.h"

#include <string.h>
#include <math.h>

/* ----------------------------------------------------------------------------
 * 1. Internal Module State
 * ---------------------------------------------------------------------------- */
static INO_tdstInputState s_stInputState;
static uint32_t           s_ulPrevButtons = 0;
static SceCtrlData        s_stLastRawPad;

/* Configuration parameters */
static float              s_fInnerDeadzone   = INO_DC_INNER_DEADZONE_DEFAULT;
static float              s_fOuterDeadzone   = INO_DC_OUTER_DEADZONE_DEFAULT;
static float              s_fGamma           = INO_DC_GAMMA_DEFAULT;
static float              s_fCameraSmoothing = INO_CAMERA_SMOOTHING_DEFAULT;
static bool               s_bInvertCameraYaw   = false;
static bool               s_bInvertCameraPitch = false;
static bool               s_bInjectMode        = false;

/* ----------------------------------------------------------------------------
 * 2. Radial Deadzone & Response Curve Processing
 * ---------------------------------------------------------------------------- */

void INO_vProcessStick(uint8_t rawX, uint8_t rawY,
                       float fInner, float fOuter, float fGamma,
                       float *pfOutX, float *pfOutY)
{
    if (!pfOutX || !pfOutY) {
        return;
    }

    /* 1. Normalize raw 0..255 axes to [-1.0f, +1.0f] with center at 128 */
    float nx;
    if (rawX >= 128) {
        nx = ((float)rawX - 128.0f) / 127.0f;
    } else {
        nx = ((float)rawX - 128.0f) / 128.0f;
    }

    /*
     * For Y: stick pushed forward (upwards, rawY < 128) yields positive forward movement (+Y).
     * Pushed downwards (rawY > 128) yields negative backward movement (-Y).
     */
    float ny;
    if (rawY <= 128) {
        ny = (128.0f - (float)rawY) / 128.0f;
    } else {
        ny = (128.0f - (float)rawY) / 127.0f;
    }

    /* Clamp initial Cartesian components to unit square [-1.0f, +1.0f] */
    if (nx > 1.0f)  nx = 1.0f;
    if (nx < -1.0f) nx = -1.0f;
    if (ny > 1.0f)  ny = 1.0f;
    if (ny < -1.0f) ny = -1.0f;

    /* 2. Compute 2D Euclidean radial magnitude */
    float fMagnitude = sqrtf(nx * nx + ny * ny);

    /* Guard against degenerate or invalid deadzone thresholds */
    if (fOuter <= fInner) {
        fOuter = fInner + 0.001f;
    }

    /* 3. Evaluate Radial Deadzone */
    if (fMagnitude <= fInner || fMagnitude < 1.0e-5f) {
        /* Inside deadzone: silence all residual stick drift */
        *pfOutX = 0.0f;
        *pfOutY = 0.0f;
        return;
    }

    if (fMagnitude >= fOuter) {
        /* At or beyond outer saturation boundary: normalize to circular perimeter */
        float fInvMag = 1.0f / fMagnitude;
        *pfOutX = nx * fInvMag;
        *pfOutY = ny * fInvMag;
        return;
    }

    /*
     * 4. Scaled Radial Deadzone Progression
     * Re-map radial magnitude smoothly from [fInner, fOuter] into [0.0f, 1.0f].
     */
    float fNormalizedMag = (fMagnitude - fInner) / (fOuter - fInner);
    if (fNormalizedMag < 0.0f) fNormalizedMag = 0.0f;
    if (fNormalizedMag > 1.0f) fNormalizedMag = 1.0f;

    /* Apply Dreamcast sensitivity response curve (gamma exponent) */
    if (fGamma > 0.0f && fabsf(fGamma - 1.0f) > 1.0e-5f) {
        fNormalizedMag = powf(fNormalizedMag, fGamma);
    }

    /* Scale direction vector by the mapped response magnitude */
    float fScale = fNormalizedMag / fMagnitude;
    *pfOutX = nx * fScale;
    *pfOutY = ny * fScale;
}

/* ----------------------------------------------------------------------------
 * 3. Lifecycle & Initialization
 * ---------------------------------------------------------------------------- */

void INO_Vita_Init(void)
{
    s_fInnerDeadzone     = INO_DC_INNER_DEADZONE_DEFAULT;
    s_fOuterDeadzone     = INO_DC_OUTER_DEADZONE_DEFAULT;
    s_fGamma             = INO_DC_GAMMA_DEFAULT;
    s_fCameraSmoothing   = INO_CAMERA_SMOOTHING_DEFAULT;
    s_bInvertCameraYaw   = false;
    s_bInvertCameraPitch = false;
    s_bInjectMode        = false;

#if defined(__vita__) || defined(__psp2__) || defined(CPA_PLATFORM_VITA_HW)
    /* Attempt ANALOG_WIDE mode for high-resolution stick sampling */
    int ret = sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);
    if (ret < 0) {
        /* Fallback to standard ANALOG mode if WIDE is not supported */
        sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG);
    }
#endif

    INO_Vita_Reset();
}

void INO_Vita_Reset(void)
{
    memset(&s_stInputState, 0, sizeof(s_stInputState));
    s_stInputState.ucRawLX = INO_STICK_CENTER;
    s_stInputState.ucRawLY = INO_STICK_CENTER;
    s_stInputState.ucRawRX = INO_STICK_CENTER;
    s_stInputState.ucRawRY = INO_STICK_CENTER;

    s_ulPrevButtons = 0;

    memset(&s_stLastRawPad, 0, sizeof(s_stLastRawPad));
    s_stLastRawPad.lx = INO_STICK_CENTER;
    s_stLastRawPad.ly = INO_STICK_CENTER;
    s_stLastRawPad.rx = INO_STICK_CENTER;
    s_stLastRawPad.ry = INO_STICK_CENTER;
}

/* ----------------------------------------------------------------------------
 * 4. Polling & Frame Update
 * ---------------------------------------------------------------------------- */

void INO_Vita_Update(void)
{
#if defined(__vita__) || defined(__psp2__) || defined(CPA_PLATFORM_VITA_HW)
    if (!s_bInjectMode) {
        SceCtrlData pad;
        memset(&pad, 0, sizeof(pad));
        int count = sceCtrlPeekBufferPositive(0, &pad, 1);
        if (count > 0) {
            s_stLastRawPad = pad;
        }
    }
#endif

    uint32_t curButtons = s_stLastRawPad.buttons;

    /* Digital button edge transitions */
    s_stInputState.ulButtonsHeld     = curButtons;
    s_stInputState.ulButtonsPressed  = (curButtons ^ s_ulPrevButtons) & curButtons;
    s_stInputState.ulButtonsReleased = (curButtons ^ s_ulPrevButtons) & s_ulPrevButtons;
    s_ulPrevButtons = curButtons;

    /* Raw stick values */
    s_stInputState.ucRawLX = s_stLastRawPad.lx;
    s_stInputState.ucRawLY = s_stLastRawPad.ly;
    s_stInputState.ucRawRX = s_stLastRawPad.rx;
    s_stInputState.ucRawRY = s_stLastRawPad.ry;

    /* Left Stick: 360-degree analog movement vectors */
    INO_vProcessStick(s_stInputState.ucRawLX, s_stInputState.ucRawLY,
                      s_fInnerDeadzone, s_fOuterDeadzone, s_fGamma,
                      &s_stInputState.fMoveX, &s_stInputState.fMoveY);

    /* Right Stick: Dual-analog camera control */
    float fRawYaw = 0.0f;
    float fRawPitch = 0.0f;
    INO_vProcessStick(s_stInputState.ucRawRX, s_stInputState.ucRawRY,
                      s_fInnerDeadzone, s_fOuterDeadzone, s_fGamma,
                      &fRawYaw, &fRawPitch);

    if (s_bInvertCameraYaw)   fRawYaw   = -fRawYaw;
    if (s_bInvertCameraPitch) fRawPitch = -fRawPitch;

    s_stInputState.fRawCameraYaw   = fRawYaw;
    s_stInputState.fRawCameraPitch = fRawPitch;

    /* Temporal smoothing filter (low-pass lerp) */
    if (s_fCameraSmoothing > 0.0f && s_fCameraSmoothing < 1.0f) {
        s_stInputState.fCameraYaw   += (fRawYaw   - s_stInputState.fCameraYaw)   * s_fCameraSmoothing;
        s_stInputState.fCameraPitch += (fRawPitch - s_stInputState.fCameraPitch) * s_fCameraSmoothing;
    } else {
        s_stInputState.fCameraYaw   = fRawYaw;
        s_stInputState.fCameraPitch = fRawPitch;
    }

    /* Snap tiny floating-point values to clean zero when returning to rest */
    if (fRawYaw == 0.0f && fabsf(s_stInputState.fCameraYaw) < 0.001f) {
        s_stInputState.fCameraYaw = 0.0f;
    } else if (fabsf(s_stInputState.fCameraYaw) < 1.0e-5f) {
        s_stInputState.fCameraYaw = 0.0f;
    }

    if (fRawPitch == 0.0f && fabsf(s_stInputState.fCameraPitch) < 0.001f) {
        s_stInputState.fCameraPitch = 0.0f;
    } else if (fabsf(s_stInputState.fCameraPitch) < 1.0e-5f) {
        s_stInputState.fCameraPitch = 0.0f;
    }

    /* Semantic Rayman 2 Action Mapping */
    s_stInputState.bJump        = (curButtons & R2_BTN_JUMP) != 0;
    s_stInputState.bShoot       = (curButtons & R2_BTN_SHOOT) != 0;
    s_stInputState.bAction      = (curButtons & R2_BTN_ACTION) != 0;
    s_stInputState.bLook        = (curButtons & R2_BTN_LOOK) != 0;
    s_stInputState.bStrafe      = (curButtons & R2_BTN_STRAFE) != 0;
    s_stInputState.bCameraReset = (curButtons & R2_BTN_CAMERA_RESET) != 0;
    s_stInputState.bPause       = (curButtons & R2_BTN_PAUSE) != 0;
    s_stInputState.bWorldMap    = (curButtons & R2_BTN_WORLD_MAP) != 0;
}

/* ----------------------------------------------------------------------------
 * 5. Input Queries & Accessors
 * ---------------------------------------------------------------------------- */

bool INO_bIsButtonDown(uint32_t btn)
{
    return (s_stInputState.ulButtonsHeld & btn) != 0;
}

bool INO_bIsButtonPressed(uint32_t btn)
{
    return (s_stInputState.ulButtonsPressed & btn) != 0;
}

bool INO_bIsButtonReleased(uint32_t btn)
{
    return (s_stInputState.ulButtonsReleased & btn) != 0;
}

void INO_vGetLeftStick(float *pfX, float *pfY)
{
    if (pfX) *pfX = s_stInputState.fMoveX;
    if (pfY) *pfY = s_stInputState.fMoveY;
}

void INO_vGetRightStick(float *pfYaw, float *pfPitch)
{
    if (pfYaw)   *pfYaw   = s_stInputState.fCameraYaw;
    if (pfPitch) *pfPitch = s_stInputState.fCameraPitch;
}

void INO_vGetRawLeftStick(uint8_t *pRawX, uint8_t *pRawY)
{
    if (pRawX) *pRawX = s_stInputState.ucRawLX;
    if (pRawY) *pRawY = s_stInputState.ucRawLY;
}

void INO_vGetRawRightStick(uint8_t *pRawX, uint8_t *pRawY)
{
    if (pRawX) *pRawX = s_stInputState.ucRawRX;
    if (pRawY) *pRawY = s_stInputState.ucRawRY;
}

void INO_vSetDeadzone(float fInner, float fOuter)
{
    s_fInnerDeadzone = fInner;
    s_fOuterDeadzone = fOuter;
}

void INO_vSetGamma(float fGamma)
{
    s_fGamma = fGamma;
}

void INO_vSetCameraSmoothing(float fSmoothing)
{
    s_fCameraSmoothing = fSmoothing;
}

void INO_vSetCameraInvert(bool bInvertYaw, bool bInvertPitch)
{
    s_bInvertCameraYaw   = bInvertYaw;
    s_bInvertCameraPitch = bInvertPitch;
}

const INO_tdstInputState *INO_pGetState(void)
{
    return &s_stInputState;
}

/* ----------------------------------------------------------------------------
 * 6. Test Harness Injection
 * ---------------------------------------------------------------------------- */

void INO_vInjectPadState(uint32_t buttons, uint8_t lx, uint8_t ly, uint8_t rx, uint8_t ry)
{
    s_bInjectMode = true;
    s_stLastRawPad.buttons = buttons;
    s_stLastRawPad.lx      = lx;
    s_stLastRawPad.ly      = ly;
    s_stLastRawPad.rx      = rx;
    s_stLastRawPad.ry      = ry;
}

void INO_vSetInjectMode(bool bEnable)
{
    s_bInjectMode = bEnable;
}
