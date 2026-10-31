/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: ino_vita.h
 *
 * PlayStation Vita Controller & Dual-Analog Camera Subsystem (Task 6.1)
 *
 * - PS Vita controller sampling mode initialization (SCE_CTRL_MODE_ANALOG / WIDE)
 * - Positive-logic pad polling via sceCtrlPeekBufferPositive
 * - Dreamcast analog response curve (radial deadzone, gamma ~1.15)
 * - Dual-analog camera controls with configurable temporal smoothing
 * - Rayman 2 Dreamcast button mapping (Cross, Square, Circle, Triangle, L/R)
 * - Host test harness support via INO_vInjectPadState
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef INO_VITA_H
#define INO_VITA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. VitaSDK Hardware Headers & Host Fallback Definitions
 * ---------------------------------------------------------------------------- */
#if defined(__vita__) || defined(__psp2__) || defined(CPA_PLATFORM_VITA_HW)
#include <psp2/ctrl.h>
#include <psp2/types.h>
#else
/* Fallback enum definitions for host compilation and mock test harnesses */
typedef enum SceCtrlButtons {
    SCE_CTRL_SELECT      = 0x00000001,  //!< Select button
    SCE_CTRL_L3          = 0x00000002,  //!< L3 button
    SCE_CTRL_R3          = 0x00000004,  //!< R3 button
    SCE_CTRL_START       = 0x00000008,  //!< Start button
    SCE_CTRL_UP          = 0x00000010,  //!< Up D-Pad button
    SCE_CTRL_RIGHT       = 0x00000020,  //!< Right D-Pad button
    SCE_CTRL_DOWN        = 0x00000040,  //!< Down D-Pad button
    SCE_CTRL_LEFT        = 0x00000080,  //!< Left D-Pad button
    SCE_CTRL_LTRIGGER    = 0x00000100,  //!< Left trigger (L1 / L)
    SCE_CTRL_L2          = SCE_CTRL_LTRIGGER,
    SCE_CTRL_RTRIGGER    = 0x00000200,  //!< Right trigger (R1 / R)
    SCE_CTRL_R2          = SCE_CTRL_RTRIGGER,
    SCE_CTRL_L1          = 0x00000400,
    SCE_CTRL_R1          = 0x00000800,
    SCE_CTRL_TRIANGLE    = 0x00001000,  //!< Triangle button
    SCE_CTRL_CIRCLE      = 0x00002000,  //!< Circle button
    SCE_CTRL_CROSS       = 0x00004000,  //!< Cross button
    SCE_CTRL_SQUARE      = 0x00008000,  //!< Square button
    SCE_CTRL_INTERCEPTED = 0x00010000,
    SCE_CTRL_PSBUTTON    = SCE_CTRL_INTERCEPTED,
    SCE_CTRL_HEADPHONE   = 0x00080000,
    SCE_CTRL_VOLUP       = 0x00100000,
    SCE_CTRL_VOLDOWN     = 0x00200000,
    SCE_CTRL_POWER       = 0x40000000
} SceCtrlButtons;

typedef enum SceCtrlPadInputMode {
    SCE_CTRL_MODE_DIGITAL     = 0,
    SCE_CTRL_MODE_ANALOG      = 1,
    SCE_CTRL_MODE_ANALOG_WIDE = 2
} SceCtrlPadInputMode;

typedef struct SceCtrlData {
    uint64_t      timeStamp;
    unsigned int  buttons;
    unsigned char lx;
    unsigned char ly;
    unsigned char rx;
    unsigned char ry;
    uint8_t       up;
    uint8_t       right;
    uint8_t       down;
    uint8_t       left;
    uint8_t       lt;
    uint8_t       rt;
    uint8_t       reserved[16];
} SceCtrlData;
#endif

/* ----------------------------------------------------------------------------
 * 2. Dreamcast Baseline Sensitivity & Deadzone Constants
 * ---------------------------------------------------------------------------- */
#define INO_STICK_CENTER                128U
#define INO_DC_INNER_DEADZONE_DEFAULT   0.15f  /* ~15% radial inner deadzone */
#define INO_DC_OUTER_DEADZONE_DEFAULT   0.95f  /* ~95% radial saturation edge */
#define INO_DC_GAMMA_DEFAULT            1.15f  /* Dreamcast progressive response curve */
#define INO_CAMERA_SMOOTHING_DEFAULT    0.25f  /* Temporal low-pass filter alpha [0..1] */

/* ----------------------------------------------------------------------------
 * 3. Rayman 2 Button Mapping Aliases
 * ---------------------------------------------------------------------------- */
#define R2_BTN_JUMP                     SCE_CTRL_CROSS      /* Jump / Helicopter */
#define R2_BTN_SHOOT                    SCE_CTRL_SQUARE     /* Shoot Magic Fist */
#define R2_BTN_ACTION                   SCE_CTRL_CIRCLE     /* Action / Roll */
#define R2_BTN_LOOK                     SCE_CTRL_TRIANGLE   /* Look / First-person mode */
#define R2_BTN_STRAFE                   SCE_CTRL_LTRIGGER   /* Strafe / Z-Target lock-on */
#define R2_BTN_CAMERA_RESET             SCE_CTRL_RTRIGGER   /* Camera recenter behind Rayman */
#define R2_BTN_PAUSE                    SCE_CTRL_START      /* Pause menu / Options */
#define R2_BTN_WORLD_MAP                SCE_CTRL_SELECT     /* 3D Isle of Doors / Hub map */

/* ----------------------------------------------------------------------------
 * 4. Engine Input State Structure
 * ---------------------------------------------------------------------------- */
typedef struct INO_tdstInputState {
    /* Digital button bitmasks (SceCtrlButtons combinations) */
    uint32_t ulButtonsHeld;       /* Active buttons down this frame */
    uint32_t ulButtonsPressed;    /* Buttons transitioned 0 -> 1 this frame */
    uint32_t ulButtonsReleased;   /* Buttons transitioned 1 -> 0 this frame */

    /* Raw hardware / injected stick values (0..255, center = 128) */
    uint8_t  ucRawLX;
    uint8_t  ucRawLY;
    uint8_t  ucRawRX;
    uint8_t  ucRawRY;

    /* Processed Left Stick: [-1.0f, +1.0f] 360-degree analog movement vectors */
    /* Note: Stick pushed forward (up, rawY < 128) results in fMoveY > 0 */
    float    fMoveX;
    float    fMoveY;

    /* Processed Right Stick: [-1.0f, +1.0f] dual-analog camera control */
    /* fCameraYaw: > 0 rotates right, < 0 rotates left */
    /* fCameraPitch: > 0 tilts up, < 0 tilts down */
    float    fCameraYaw;
    float    fCameraPitch;

    /* Raw unfiltered right stick response for instant delta queries */
    float    fRawCameraYaw;
    float    fRawCameraPitch;

    /* Semantic Rayman 2 Action Flags */
    bool     bJump;          /* Cross */
    bool     bShoot;         /* Square */
    bool     bAction;        /* Circle */
    bool     bLook;          /* Triangle */
    bool     bStrafe;        /* L Trigger */
    bool     bCameraReset;   /* R Trigger */
    bool     bPause;         /* Start */
    bool     bWorldMap;      /* Select */
} INO_tdstInputState;

/* ----------------------------------------------------------------------------
 * 5. Primary Input Subsystem API
 * ---------------------------------------------------------------------------- */

/**
 * Initialize PS Vita controller sampling mode and reset internal state.
 * Attempts SCE_CTRL_MODE_ANALOG_WIDE first, falling back to SCE_CTRL_MODE_ANALOG.
 */
void INO_Vita_Init(void);

/**
 * Reset input state and clear button latching / temporal filter history.
 */
void INO_Vita_Reset(void);

/**
 * Poll hardware controller or process injected mock state for the current frame.
 * Updates edge detection (pressed/released), applies Dreamcast analog response,
 * and filters right-stick camera axes.
 */
void INO_Vita_Update(void);

/**
 * Check if a button (or button mask) is currently held down.
 */
bool INO_bIsButtonDown(uint32_t btn);

/**
 * Check if a button (or button mask) was newly pressed this frame (edge transition).
 */
bool INO_bIsButtonPressed(uint32_t btn);

/**
 * Check if a button (or button mask) was released this frame (edge transition).
 */
bool INO_bIsButtonReleased(uint32_t btn);

/**
 * Retrieve normalized left stick movement vectors [-1.0f, +1.0f].
 * Forward (stick up) yields positive pfY (> 0).
 */
void INO_vGetLeftStick(float *pfX, float *pfY);

/**
 * Retrieve filtered right stick camera rotation vectors [-1.0f, +1.0f].
 * Right turn yields positive pfYaw (> 0); tilt up yields positive pfPitch (> 0).
 */
void INO_vGetRightStick(float *pfYaw, float *pfPitch);

/**
 * Retrieve raw left stick bytes [0..255].
 */
void INO_vGetRawLeftStick(uint8_t *pRawX, uint8_t *pRawY);

/**
 * Retrieve raw right stick bytes [0..255].
 */
void INO_vGetRawRightStick(uint8_t *pRawX, uint8_t *pRawY);

/**
 * Configure inner and outer radial deadzones for analog stick processing.
 * Defaults: fInner = 0.15f, fOuter = 0.95f.
 */
void INO_vSetDeadzone(float fInner, float fOuter);

/**
 * Configure response curve gamma exponent. Default: 1.15f.
 */
void INO_vSetGamma(float fGamma);

/**
 * Configure right stick camera temporal smoothing filter alpha in [0.0f, 1.0f].
 * 1.0f disables filtering (instant response); default is 0.25f.
 */
void INO_vSetCameraSmoothing(float fSmoothing);

/**
 * Invert right stick camera axes (pitch or yaw).
 */
void INO_vSetCameraInvert(bool bInvertYaw, bool bInvertPitch);

/**
 * Get pointer to read-only snapshot of current frame input state.
 */
const INO_tdstInputState *INO_pGetState(void);

/* ----------------------------------------------------------------------------
 * 6. Test Harness & Host Injection Helpers
 * ---------------------------------------------------------------------------- */

/**
 * Standalone radial deadzone and Dreamcast response curve calculation.
 *
 * @param rawX      Raw stick X [0..255]
 * @param rawY      Raw stick Y [0..255]
 * @param fInner    Inner deadzone threshold [0.0f..1.0f]
 * @param fOuter    Outer saturation threshold [0.0f..1.0f]
 * @param fGamma    Response curve power exponent (> 0.0f)
 * @param pfOutX    Output normalized X [-1.0f..+1.0f]
 * @param pfOutY    Output normalized Y [-1.0f..+1.0f] (Y inverted: rawY < 128 -> +Y)
 */
void INO_vProcessStick(uint8_t rawX, uint8_t rawY,
                       float fInner, float fOuter, float fGamma,
                       float *pfOutX, float *pfOutY);

/**
 * Inject mock controller pad state for host unit tests.
 * Enables mock mode so subsequent INO_Vita_Update() calls consume injected data.
 */
void INO_vInjectPadState(uint32_t buttons, uint8_t lx, uint8_t ly, uint8_t rx, uint8_t ry);

/**
 * Enable or disable mock injection mode.
 */
void INO_vSetInjectMode(bool bEnable);

#ifdef __cplusplus
}
#endif

#endif /* INO_VITA_H */
