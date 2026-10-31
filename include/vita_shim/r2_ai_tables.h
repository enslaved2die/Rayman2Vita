/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: r2_ai_tables.h
 *
 * Comprehensive AI Opcode, Callback, and 60 FPS Timing Reconciliation.
 * Primary Ground Truth: Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000, AI V5.0.0)
 * Secondary Guidance:  PC Retail Rayman2.exe (x86 @ 0x00400000, AI V5.0.0)
 * Engine Architecture: CPA (OpenSpace) Engine AI Module (Dec 5 1997)
 * ============================================================================ */

#ifndef R2_AI_TABLES_H
#define R2_AI_TABLES_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * Section 1: 60 FPS Timing, Delta-Time & Physics Engine Parameters
 * ---------------------------------------------------------------------------- */
/* Ground Truth Dreamcast SH-4 constants:
 *   0x8C010B44 -> 0x42700000 (60.0f NTSC target)
 *   0x8C010B50 -> 0x42480000 (50.0f PAL target)
 *   0x8C0BDE94 -> g_fTargetFPS (float global: 60.0f on NTSC / VGA)
 *   0x8C0BDBF4 -> g_dwVideoMode (DWORD global: 0=NTSC, 1=VGA, 2=PAL)
 *   0x8C025384 -> 15.0f (min clamp: max delta time 66.67ms)
 *   0x8C025390 -> 60.0f (max clamp: min delta time 16.67ms)
 */
#define R2_AI_NTSC_TARGET_FPS            60.0f
#define R2_AI_PAL_TARGET_FPS             50.0f
#define R2_AI_VITA_TARGET_FPS            60.0f

#define R2_AI_NTSC_DELTA_TIME            (1.0f / 60.0f)   /* 0.016666667f sec */
#define R2_AI_PAL_DELTA_TIME             (1.0f / 50.0f)   /* 0.020000000f sec */
#define R2_AI_VITA_DELTA_TIME            R2_AI_NTSC_DELTA_TIME

#define R2_AI_FPS_MIN_CLAMP              15.0f            /* Lowest clamped framerate */
#define R2_AI_FPS_MAX_CLAMP              60.0f            /* Highest clamped framerate */
#define R2_AI_DT_MAX_CLAMP               (1.0f / 15.0f)   /* 0.066666667f sec */
#define R2_AI_DT_MIN_CLAMP               (1.0f / 60.0f)   /* 0.016666667f sec */

/* 60 FPS Physics tick multiplier (at native 60 Hz, multiplier = 1.0f) */
#define R2_PHYSICS_TICK_FACTOR_60HZ      1.0f
#define R2_PHYSICS_GRAVITY_DEFAULT       -28.0f           /* CPA vertical acceleration */
#define R2_PHYSICS_TERMINAL_VELOCITY     -60.0f

/* Dreamcast Baseline Module Information */
#define R2_DC_AI_MODULE_VERSION_STR      "AI V5.0.0 (Dec  5 1997)"
#define R2_DC_VA_AI_MODULE_STR           0x8C0C7A08
#define R2_DC_VA_AI_INIT                 0x8C032E60
#define R2_DC_VA_KEYWORD_INTERP          0x8C0ACB60
#define R2_DC_VA_EVAL_COND_TREE          0x8C0ACD88
#define R2_DC_VA_TARGET_FPS              0x8C0BDE94
#define R2_DC_VA_VIDEO_MODE              0x8C0BDBF4

/* Dreamcast Jump Table Ground Truth VAs */
#define R2_DC_VA_TABLE_FUNCTION_EVAL     0x8C0C7C90  /* 41 entries */
#define R2_DC_VA_TABLE_PROCEDURE         0x8C0C9618  /* 20 entries */
#define R2_DC_VA_TABLE_CONDITION         0x8C0C96A8  /* 160 entries */
#define R2_DC_VA_TABLE_FUNCTION          0x8C0CB838  /* 28 entries */

/* PC Guidance Table Reference VAs */
#define R2_PC_VA_TABLE_FUNCTION_EVAL     0x004A4180  /* 41 entries */
#define R2_PC_VA_TABLE_PROCEDURE         0x004A5E80  /* 20 entries */
#define R2_PC_VA_TABLE_CONDITION         0x004A5EE0  /* 149 entries (+11 DC) */
#define R2_PC_VA_TABLE_FUNCTION          0x004A6398  /* 28 entries */

/* Dreamcast-Specific Level & Minigame Identifiers */
#define R2_LEVEL_MAPMONDE2               "MAPMONDE2"   /* 3D Isle of Doors Interactive Hub */
#define R2_LEVEL_B_DISC                  "B_DISC"      /* Globox Disc Minigame */
#define R2_LEVEL_B_PYRAM                 "B_PYRAM"     /* Pyramids Minigame */
#define R2_LEVEL_B_INVADE                "B_INVADE"    /* Space Invaders Minigame */
#define R2_LEVEL_B_LIFT                  "B_LIFT"      /* Lift Minigame */
#define R2_LEVEL_B_TOILE                 "B_TOILE"     /* Toilet Minigame */
#define R2_LEVEL_GLOBVILL                "GLOBVILL"    /* Globox Village */
#define R2_LEVEL_GLODISC_CINE            "GLODISC_CINE"/* Globox Disc Intro Cinematic */

/* ----------------------------------------------------------------------------
 * Section 2: CPA Engine Data Types & Function Pointer Typedefs
 * ---------------------------------------------------------------------------- */
#include "cpa_mth.h"

#ifndef _MTH3D_TDSTVECTOR_DEFINED_
#define _MTH3D_TDSTVECTOR_DEFINED_
typedef struct MTH3D_tdstVector_ {
    float x;
    float y;
    float z;
} MTH3D_tdstVector;
#endif

/* Variable / Parameter Value Type */
typedef enum AI_e_ValueType_ {
    E_vt_None                = 0,
    E_vt_Boolean             = 1,
    E_vt_Integer             = 2,
    E_vt_Float               = 3,
    E_vt_Vector              = 4,
    E_vt_String              = 5,
    E_vt_SuperObject         = 6,
    E_vt_Brain               = 7,
    E_vt_Comport             = 8,
    E_vt_Action              = 9,
    E_vt_GameMaterial        = 10,
    E_vt_WayPoint            = 11,
    E_vt_Graph               = 12,
    E_vt_Text                = 13,
    E_vt_SoundEvent          = 14,
    E_vt_Light               = 15,
    E_vt_Sector              = 16,
    E_vt_VisualMaterial      = 17,
    E_vt_Font                = 18,
    E_vt_Color               = 19,
    E_vt_Family              = 20
} AI_e_ValueType;

/* CPA 8-byte AST Node Structure (tdstNodeInterpret) */
typedef struct AI_tdstNode_ {
    union {
        int32_t     lValue;
        float       fValue;
        void       *pValue;
        int16_t     wIndex;
    } u;
    int16_t         wRefIndex;      /* Reference / DsgVar / Table index */
    uint8_t         bParamType;     /* Parameter type code */
    uint8_t         bNodeType;      /* Master Node Opcode (0..40) */
} AI_tdstNode;

/* Evaluation Stack Parameter Container */
typedef struct AI_tdstParam_ {
    AI_e_ValueType   eType;
    union {
        int32_t             lVal;
        float               fVal;
        void               *pVal;
        MTH3D_tdstVector    stVector;
    } u;
} AI_tdstParam;

/* Opaque Engine Structure Forward Declarations */
struct AI_tdstMind_;
struct AI_tdstAIModel_;
struct AI_tdstComport_;

/* CPA Calling Convention Typedefs */
typedef AI_tdstNode* (*AI_pfn_p_stFunctionEval)(AI_tdstNode *p_stNode, struct AI_tdstMind_ *p_stMind);
typedef void         (*AI_pfn_vProcedure)(struct AI_tdstMind_ *p_stMind, uint32_t ulParam);
typedef int32_t      (*AI_pfn_bCondition)(struct AI_tdstMind_ *p_stMind, uint32_t ulParam);
typedef AI_tdstParam*(*AI_pfn_p_stFunction)(struct AI_tdstMind_ *p_stMind, AI_tdstParam *p_stResult);
typedef void         (*AI_pfn_vOperator)(AI_tdstParam *p_stLeft, AI_tdstParam *p_stRight, AI_tdstParam *p_stOut);

/* ----------------------------------------------------------------------------
 * Section 3: Master AI Node Types Enum (0 .. 40)
 * Dispatched via AI_a_pfn_p_stFunctionEval (DC 0x8C0C7C90 / PC 0x004A4180)
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_NodeType_ {
    AI_NODE_PROCEDURE              =  0,  /* Executes an AI procedure (DsaCom) */
    AI_NODE_CONDITION              =  1,  /* Evaluates a condition and returns boolean */
    AI_NODE_FUNCTION               =  2,  /* Evaluates an expression and returns a typed value */
    AI_NODE_ACTION                 =  3,  /* Action comport / state transition */
    AI_NODE_OPERATOR               =  4,  /* Mathematical or logical binary/unary operator */
    AI_NODE_KEYWORD                =  5,  /* Control flow keyword (If, Then, Else, While, etc.) */
    AI_NODE_DSGVAR_REF             =  6,  /* Direct reference to Perso DsgVar buffer */
    AI_NODE_DSGVAR_REF_CURRENT     =  7,  /* Reference to current Perso DsgVar */
    AI_NODE_DSGVAR_REF_OTHER       =  8,  /* Reference to another Perso's DsgVar */
    AI_NODE_MACRO_CALL             =  9,  /* Inline macro expansion or call */
    AI_NODE_FIELD                  = 10,  /* Perso property/field getter (Position, Sight, etc.) */
    AI_NODE_FIELD_SET              = 11,  /* Perso property/field setter */
    AI_NODE_CONST_INT              = 12,  /* 32-bit signed integer literal */
    AI_NODE_CONST_REAL             = 13,  /* 32-bit IEEE 754 float literal */
    AI_NODE_WAYPOINT_REF           = 14,  /* Reference to Waypoint structure */
    AI_NODE_VECTOR                 = 15,  /* 3D vector literal (X, Y, Z coordinates) */
    AI_NODE_STRING_REF             = 16,  /* Indexed text/string reference */
    AI_NODE_TEXT_REF               = 17,  /* Localized text bank entry reference */
    AI_NODE_COMPORT_REF            = 18,  /* Intelligence comport state reference */
    AI_NODE_ACTION_REF             = 19,  /* Reflex/animation action reference */
    AI_NODE_VECTOR_REF             = 20,  /* Pointer to 3D vector variable */
    AI_NODE_SOUND_EVENT_REF        = 21,  /* Sound event trigger ID */
    AI_NODE_OBJECT_REF             = 22,  /* SuperObject / Perso actor pointer */
    AI_NODE_GAME_MATERIAL_REF      = 23,  /* GameMaterial collision/physics definition */
    AI_NODE_COLOR_REF              = 24,  /* RGBA 32-bit color constant */
    AI_NODE_BRAIN_REF              = 25,  /* Reference to Brain component */
    AI_NODE_SECTOR_REF             = 26,  /* Spatial partition sector reference */
    AI_NODE_LIGHT_REF              = 27,  /* Dynamic light object reference */
    AI_NODE_VISUAL_MATERIAL_REF    = 28,  /* Visual rendering material reference */
    AI_NODE_COMPORT_REF_2          = 29,  /* Secondary comport state reference */
    AI_NODE_FONT_REF               = 30,  /* 2D bitmap font reference */
    AI_NODE_RAW_STRING_REF         = 31,  /* Direct string literal pointer */
    AI_NODE_LIPS_REF               = 32,  /* Facial lip-sync deformation track */
    AI_NODE_GRAPH_REF              = 33,  /* Waypoint navigation graph reference */
    AI_NODE_MICRO_REF              = 34,  /* Microphone / positional sound listener reference */
    AI_NODE_FAMILY_REF             = 35,  /* Character family archetype reference */
    AI_NODE_CUSTOM_BIT_REF         = 36,  /* Custom state bit flag test */
    AI_NODE_CUSTOM_BIT_SET         = 37,  /* Custom state bit flag set */
    AI_NODE_CUSTOM_BIT_CLEAR       = 38,  /* Custom state bit flag clear */
    AI_NODE_TREE_LINK              = 39,  /* Subtree jump / Macro reference */
    AI_NODE_END_NODE               = 40,  /* AST node termination marker (advance 8 bytes) */
    AI_NODE_COUNT                  = 41
} AI_e_NodeType;

/* ----------------------------------------------------------------------------
 * Section 4: AI Control Flow & Evaluation Keywords (15 Entries)
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_Keyword_ {
    KeyWord_If               =  0,  /* If         - Standard conditional branch */
    KeyWord_IfNot            =  1,  /* IfNot      - Inverted conditional branch */
    KeyWord_IfNotU64         =  2,  /* IfNotU64   - Platform conditional branch (skip on N64/PC) */
    KeyWord_Then             =  3,  /* Then       - Consequent block statement */
    KeyWord_Else             =  4,  /* Else       - Alternative block statement */
    KeyWord_If2              =  5,  /* If2        - Throttle: Evaluate every 2 ticks (30 Hz at 60 FPS) */
    KeyWord_If4              =  6,  /* If4        - Throttle: Evaluate every 4 ticks (15 Hz at 60 FPS) */
    KeyWord_If8              =  7,  /* If8        - Throttle: Evaluate every 8 ticks (7.5 Hz at 60 FPS) */
    KeyWord_If16             =  8,  /* If16       - Throttle: Evaluate every 16 ticks (3.75 Hz at 60 FPS) */
    KeyWord_IfDebug          =  9,  /* IfDebug    - Debug build conditional execution */
    KeyWord_MainActor        = 10,  /* MainActor  - Self reference keyword */
    KeyWord_Me               = 11,  /* Me         - Local Perso self reference */
    KeyWord_Nobody           = 12,  /* Nobody     - Null Perso pointer keyword */
    KeyWord_NoAction         = 13,  /* NoAction   - Null action reference keyword */
    KeyWord_Nowhere          = 14,  /* Nowhere    - Null waypoint / location keyword */
    AI_KEYWORD_COUNT           = 15
} AI_e_Keyword;

/* ----------------------------------------------------------------------------
 * Section 5: AI Operators Enum (22 Entries)
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_Operator_ {
    Operator_Affect              =  0,  /* =      - Assignment operator */
    Operator_Dot                 =  1,  /* .      - Member access operator */
    Operator_Plus                =  2,  /* +      - Arithmetic addition */
    Operator_Minus               =  3,  /* -      - Arithmetic subtraction */
    Operator_Mul                 =  4,  /* *      - Arithmetic multiplication */
    Operator_Div                 =  5,  /* /      - Arithmetic division */
    Operator_UnaryMinus          =  6,  /* neg    - Unary arithmetic negation */
    Operator_PlusAffect          =  7,  /* +=     - Addition assignment */
    Operator_MinusAffect         =  8,  /* -=     - Subtraction assignment */
    Operator_MulAffect           =  9,  /* *=     - Multiplication assignment */
    Operator_DivAffect           = 10,  /* /=     - Division assignment */
    Operator_PlusPlusAffect      = 11,  /* ++     - Pre/post increment */
    Operator_MinusMinusAffect    = 12,  /* --     - Pre/post decrement */
    Operator_Array               = 13,  /* []     - Array index access */
    Operator_AffectArray         = 14,  /* []=    - Array element assignment */
    Operator_VectorPlusVector    = 15,  /* v+v    - 3D Vector addition */
    Operator_VectorMinusVector   = 16,  /* v-v    - 3D Vector subtraction */
    Operator_VectorMulScalar     = 17,  /* v*s    - 3D Vector scalar multiplication */
    Operator_VectorDivScalar     = 18,  /* v/s    - 3D Vector scalar division */
    Operator_VectorUnaryMinus    = 19,  /* -v     - 3D Vector negation */
    Operator_ModelCast           = 20,  /* cast   - Typecast to AI model archetype */
    Operator_Ultra               = 21,  /* ultra  - Ultra optimization operator */
    AI_OPERATOR_COUNT          = 22
} AI_e_Operator;

/* ----------------------------------------------------------------------------
 * Section 6: AI Conditions Enum (160 Entries, 0 .. 159)
 * Dispatched via AI_a_pfn_vConditionTable (DC 0x8C0C96A8 / PC 0x004A5EE0)
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_Condition_ {
    Cond_And                                   =   0,
    Cond_Or                                    =   1,
    Cond_Not                                   =   2,
    Cond_XOr                                   =   3,
    Cond_Equal                                 =   4,
    Cond_Different                             =   5,
    Cond_Lesser                                =   6,
    Cond_Greater                               =   7,
    Cond_LesserOrEqual                         =   8,
    Cond_GreaterOrEqual                        =   9,
    Cond_CollidePersoZDDWithPerso              =  10,
    Cond_CollideModuleZDDWithPerso             =  11,
    Cond_CollidePersoAllZDDWithPersoAllZDD     =  12,
    Cond_CollidePersoZDDWithAnyPErso           =  13,
    Cond_CollideModuleZDDWithAnyPerso          =  14,
    Cond_CollidePersoZDEWithPersoZDE           =  15,
    Cond_CollideModuleZDEWithPersoZDE          =  16,
    Cond_CollidePersoZDEWithModuleZDE          =  17,
    Cond_CollideModuleZDEWithModuleZDE         =  18,
    Cond_CollidePersoZDEWithPersoTypeZDE       =  19,
    Cond_CollideModuleZDEWithPersoTypeZDE      =  20,
    Cond_CollidePersoTypeZDEWithPersoTypeZDE   =  21,
    Cond_CollidePersoAllZDEWithPersoAllZDE     =  22,
    Cond_CollidePersoTypeZDEWithPersoAllZDE    =  23,
    Cond_CollidePersoAllZDEWithPersoTypeZDE    =  24,
    Cond_CollidePersoZDENoWithTypeZDE          =  25,
    Cond_CollideModuleZDENoWithTypeZDE         =  26,
    Cond_CollideWithGround                     =  27,
    Cond_CollideWithWall                       =  28,
    Cond_CollideWithNothing                    =  29,
    Cond_CollideWithCeiling                    =  30,
    Cond_CollideWithPerso                      =  31,
    Cond_CollideWithWater                      =  32,
    Cond_CollideWithThisPerso                  =  33,
    Cond_ZDMCollideWithGround                  =  34,
    Cond_ZDMCollideWithWall                    =  35,
    Cond_ZDMCollideWithNothing                 =  36,
    Cond_ZDMCollideWithCeiling                 =  37,
    Cond_IsPersoInList                         =  38,
    Cond_IsModelInList                         =  39,
    Cond_IsFamilyInList                        =  40,
    Cond_ListEmptyTest                         =  41,
    Cond_UserEvent_IsSet                       =  42,
    Cond_UserEvent_IsSet2                      =  43,
    Cond_PressedBut                            =  44,
    Cond_JustPressedBut                        =  45,
    Cond_ReleasedBut                           =  46,
    Cond_JustReleasedBut                       =  47,
    Cond_IsTimeElapsed                         =  48,
    Cond_IsValidObject                         =  49,
    Cond_IsValidWayPoint                       =  50,
    Cond_IsValidGMT                            =  51,
    Cond_IsValidAction                         =  52,
    Cond_IsValidText                           =  53,
    Cond_SeePerso                              =  54,
    Cond_IsActivable                           =  55,
    Cond_IsAlreadyHandled                      =  56,
    Cond_Alw_IsMain                            =  57,
    Cond_IsPersoLightOn                        =  58,
    Cond_IsPersoLightPulseOn                   =  59,
    Cond_IsPersoLightGyroPhareOn               =  60,
    Cond_DS_StyletJustPressed                  =  61,
    Cond_DS_StyletPressed                      =  62,
    Cond_DS_StyletJustReleased                 =  63,
    Cond_DS_StyletSlice                        =  64,
    Cond_DS_CheckStyletRotation                =  65,
    Cond_DS_CheckStyletGratter                 =  66,
    Cond_ZDMCollideWithObstacle                =  67,
    Cond_IsZDMCollideWithWall                  =  68,
    Cond_IsZDMCollideWithGround                =  69,
    Cond_IsZDMCollideWithCeiling               =  70,
    Cond_CmtIdentifierContainsMask             =  71,
    Cond_HitByCollider                         =  72,
    Cond_IsTypeOfGMTCollide                    =  73,
    Cond_IsInComport                           =  74,
    Cond_IsInReflexComport                     =  75,
    Cond_IsInAction                            =  76,
    Cond_ChangeActionEnable                    =  77,
    Cond_EngineReinitRequested                 =  78,
    Cond_IsThereMechEvent                      =  79,
    Cond_CollisionWP                           =  80,
    Cond_IsCustomBitSet                        =  81,
    Cond_IsPersoActive                         =  82,
    Cond_CheckActionEnd                        =  83,
    Cond_IsCurrentStateCustomBitSet            =  84,
    Cond_GiBlock                               =  85,
    Cond_MechanicBlock                         =  86,
    Cond_IsMechanicAnimatino                   =  87,
    Cond_IsMechanicCollide                     =  88,
    Cond_IsMechanicGravity                     =  89,
    Cond_IsMechanicTilt                        =  90,
    Cond_IsMechanicGi                          =  91,
    Cond_IsMechanicClimb                       =  92,
    Cond_IsMechanicOnGround                    =  93,
    Cond_IsMechanicSpider                      =  94,
    Cond_IsMechanicShoot                       =  95,
    Cond_IsMechanicSwim                        =  96,
    Cond_IsMechanicNeverFall                   =  97,
    Cond_IsMechanicCollisionControl            =  98,
    Cond_IsMechanicKeepSpeedZ                  =  99,
    Cond_IsMechanicSpeedLimit                  = 100,
    Cond_IsMechanicInertia                     = 101,
    Cond_IsMechanicStream                      = 102,
    Cond_IsMechanicStickOnPlatform             = 103,
    Cond_MechanicPatformCrash                  = 104,
    Cond_IsMechanicScale                       = 105,
    Cond_IsMechanicExec                        = 106,
    Cond_CanFall                               = 107,
    Cond_MainActorCrashed                      = 108,
    Cond_NullVector                            = 109,
    Cond_HierIsSonOfActor                      = 110,
    Cond_IsMorphing                            = 111,
    Cond_CheckAnimEnd                          = 112,
    Cond_HasTheCapability                      = 113,
    Cond_HasOneOfTheCapabilities               = 114,
    Cond_HasTheCapabilityNumber                = 115,
    Cond_PersoHasTheCapability                 = 116,
    Cond_PersoHasOneOfTheCapabilities          = 117,
    Cond_PersoHasTheCapabilityNumber           = 118,
    Cond_IsMagnetActivated                     = 119,
    Cond_IsNotInCollWithMap                    = 120,
    Cond_IsNotInCollWithProj                   = 121,
    Cond_IsNotInColWithSecondCharact           = 122,
    Cond_IsNotInColWithMainCharact             = 123,
    Cond_IsNotInColWithOtherSectors            = 124,
    Cond_IsOfFamily                            = 125,
    Cond_IsOfModel                             = 126,
    Cond_AJoypadIsConnected                    = 127,
    Cond_AKeyJustPressed                       = 128,
    Cond_AButtonPadJustPressed                 = 129,
    Cond_IsInDemoMode                          = 130,
    Cond_IsInStereoMode                        = 131,
    Cond_IsMusicPlaying                        = 132,
    Cond_IsShapnessMax                         = 133,
    Cond_Reserved_134                          = 134,
    Cond_Reserved_135                          = 135,
    Cond_Reserved_136                          = 136,
    Cond_Cam_IsActive                          = 137,
    Cond_Cam_IsViewportOwner                   = 138,
    Cond_Cam_IsFlagNoDynamicTarget             = 139,
    Cond_Cam_IsFlagNoAverageMoveTgtPerso       = 140,
    Cond_Cam_IsFlagNoParseCutAngle             = 141,
    Cond_Cam_IsFlagNoVisibility                = 142,
    Cond_Cam_IsFlagNoVisibilityWithDynHie      = 143,
    Cond_Cam_IsFlagNoDynChangeTheta            = 144,
    Cond_Cam_IsFlagNoShiftUntilPosReached      = 145,
    Cond_Cam_IsFlagNoDynSpeed                  = 146,
    Cond_Cam_IsFlagNoLinearParsing             = 147,
    Cond_Cam_IsFlagNoLinearInertia             = 148,
    Cond_Cam_IsFlagNoAngularParsing            = 149,
    Cond_Cam_IsFlagNoAngularInertia            = 150,
    Cond_Cam_IsFlagNoTargetParsing             = 151,
    Cond_Cam_IsFlagNoTargetInertia             = 152,
    Cond_Cam_IsFlagNoObstacle                  = 153,
    Cond_Cam_IsFlagFixedOrientation            = 154,
    Cond_Cam_IsFlagForcedPosition              = 155,
    Cond_Cam_IsFlagForcedTarget                = 156,
    Cond_Cam_IsFlagForcedAxis                  = 157,
    Cond_Cam_IsFlag_158                        = 158,
    Cond_Cam_IsFlag_159                        = 159,
    AI_CONDITION_COUNT                         = 160
} AI_e_Condition;

/* ----------------------------------------------------------------------------
 * Section 7: AI Procedures Enum (522 Entries, 0 .. 521)
 * Dispatched via DsaCom / AI Procedure Dispatcher
 * Note: Procedures 506 (Proc_SetAGO) & 507 (Proc_ActivateMenuMap) manage 3D Hub
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_Procedure_ {
    Proc_SetHitPoints                          =   0,
    Proc_SetHitPointsInit                      =   1,
    Proc_SetHitPointsToInit                    =   2,
    Proc_SetHitPointsToMax                     =   3,
    Proc_AddHitPoints                          =   4,
    Proc_SubHitPoints                          =   5,
    Proc_SetHitPointsMax                       =   6,
    Proc_SetHitPointsMaxToInit                 =   7,
    Proc_SetHitPointsMaxToMax                  =   8,
    Proc_AddHitPointsMax                       =   9,
    Proc_SubHitPointsMax                       =  10,
    Proc_TransparentDisplay                    =  11,
    Proc_SetTransparency                       =  12,
    Proc_ACT_SetDrawFlag                       =  13,
    Proc_ModuleTransparentDisplay              =  14,
    Proc_ModuleTransparentDisplay2             =  15,
    Proc_SetModuleTransparency                 =  16,
    Proc_SetModuleTransparency2                =  17,
    Proc_ListAffectWithPersoZDD                =  18,
    Proc_ListAffectWithModuleZDD               =  19,
    Proc_ListAffectWithPersoZDE                =  20,
    Proc_ListAffectWithModuleZDE               =  21,
    Proc_ListAffectWithPersoTypeZDE            =  22,
    Proc_ListAffectWithModuleTypeZDE           =  23,
    Proc_ListAffectTypeZDEWithTypeZDE          =  24,
    Proc_AddPersoInList                        =  25,
    Proc_AddPersoInListAt                      =  26,
    Proc_DeletePersoAtInList                   =  27,
    Proc_FindPersoAndDeleteInList              =  28,
    Proc_Select                                =  29,
    Proc_UnSelect                              =  30,
    Proc_ListSort                              =  31,
    Proc_ListSortByFamily                      =  32,
    Proc_ListSortByModele                      =  33,
    Proc_FillListWithAllPersoOfAFamily         =  34,
    Proc_FillListWithAllPersoOfAModel          =  35,
    Proc_DeleteFamilyInList                    =  36,
    Proc_DeleteModelInList                     =  37,
    Proc_ListUnion                             =  38,
    Proc_ListInter                             =  39,
    Proc_ListDiff                              =  40,
    Proc_ListAdd                               =  41,
    Proc_Reserved_42                           =  42,
    Proc_Reserved_43                           =  43,
    Proc_Reserved_44                           =  44,
    Proc_Reserved_45                           =  45,
    Proc_Reserved_46                           =  46,
    Proc_Reserved_47                           =  47,
    Proc_Reserved_48                           =  48,
    Proc_Reserved_49                           =  49,
    Proc_Reserved_50                           =  50,
    Proc_Reserved_51                           =  51,
    Proc_Reserved_52                           =  52,
    Proc_Reserved_53                           =  53,
    Proc_FootPath_AddFootPrint                 =  54,
    Proc_FootPath_Clear                        =  55,
    Proc_SinusEffect_SetFreq                   =  56,
    Proc_SinusEffect_SetAmplitude              =  57,
    Proc_SinusEffect_SetState                  =  58,
    Proc_SinusEffect_SetFreq3D                 =  59,
    Proc_SinusEffect_SetRLIAmplitude           =  60,
    Proc_SinusEffect_SetRLIBase                =  61,
    Proc_SPO_SetDrawFlag                       =  62,
    Proc_SPO_SetEngineDisplayModeFlag          =  63,
    Proc_DeactivateBut                         =  64,
    Proc_ActivateBut                           =  65,
    Proc_None                                  =  66,
    Proc_ChangeComport                         =  67,
    Proc_ChangeComportReflex                   =  68,
    Proc_ChangeMyComport                       =  69,
    Proc_ChangeMyComportReflex                 =  70,
    Proc_ChangeMyComportAndMyReflex            =  71,
    Proc_ChangeAction                          =  72,
    Proc_ChangeActionForce                     =  73,
    Proc_ChangeActionRandom                    =  74,
    Proc_ChangeActionWithEvents                =  75,
    Proc_Loop                                  =  76,
    Proc_EndLoop                               =  77,
    Proc_Break                                 =  78,
    Proc_PlayerIsDead                          =  79,
    Proc_RestoreCardParameters                 =  80,
    Proc_BreakAI                               =  81,
    Proc_IgnoreTraceFlagForNextPicking         =  82,
    Proc_SetMainActor                          =  83,
    Proc_ActivateObject                        =  84,
    Proc_DesactivateObject                     =  85,
    Proc_ChangeMap                             =  86,
    Proc_ChangeMapNoAutosave                   =  87,
    Proc_SetActionReturn                       =  88,
    Proc_FactorAnimationFrameRate              =  89,
    Proc_SetCharacterPriority                  =  90,
    Proc_ForcePersoHandling                    =  91,
    Proc_PlayerIsDeadWithPlacement             =  92,
    Proc_SwapLinkTableObjects                  =  93,
    Proc_ChangeCurrentObjectTable              =  94,
    Proc_BuildObjectTableFromTableAndString    =  95,
    Proc_BuildObjectTableFromFormattedString   =  96,
    Proc_TakeModuleControl                     =  97,
    Proc_TakeManyModulesControl                =  98,
    Proc_ReleaseModuleControl                  =  99,
    Proc_CopyGame                              = 100,
    Proc_QuitGame                              = 101,
    Proc_ActivateChannel                       = 102,
    Proc_DeactivateChannel                     = 103,
    Proc_PersoLightOn                          = 104,
    Proc_PersoLightOff                         = 105,
    Proc_SetPersoLightColor                    = 106,
    Proc_SetPersoLightNearFar                  = 107,
    Proc_SetPersoLightLittleBigAlpha           = 108,
    Proc_SetPersoLightGyrophare                = 109,
    Proc_SetPersoLightPulse                    = 110,
    Proc_SetPersoLightParalleleType            = 111,
    Proc_SetPersoLightSphericalType            = 112,
    Proc_SetPersoLightHotSpotType              = 113,
    Proc_SetPersoLightAmbientType              = 114,
    Proc_SendSoundRequest                      = 115,
    Proc_SendVoiceRequest                      = 116,
    Proc_SendMusicRequest                      = 117,
    Proc_SendAmbianceRequest                   = 118,
    Proc_SendMenuSndRequest                    = 119,
    Proc_DefautDisplay                         = 120,
    Proc_DisplayVignette                       = 121,
    Proc_DeleteVignette                        = 122,
    Proc_SetParticleGeneratorOn                = 123,
    Proc_SetParticleGeneratorOff               = 124,
    Proc_SetParticleGenerator                  = 125,
    Proc_SetGenerationModeNone                 = 126,
    Proc_SetGenerationModeContinuous           = 127,
    Proc_SetGenerationModeCrenel               = 128,
    Proc_SetGenerationModeProbability          = 129,
    Proc_SetGenerationNbConstant               = 130,
    Proc_SetGenerationNbProbabilist            = 131,
    Proc_SetInfiniteLifeTime                   = 132,
    Proc_SetConstantLifeTime                   = 133,
    Proc_SetProbabilistLifeTime                = 134,
    Proc_Turn                                  = 135,
    Proc_Turn2                                 = 136,
    Proc_DeltaTurnPerso                        = 137,
    Proc_TurnPerso                             = 138,
    Proc_KillPerso                             = 139,
    Proc_KillPersoAndClearVariable             = 140,
    Proc_SetVisualGMTColor                     = 141,
    Proc_SetVisualGMTSpecularExponant          = 142,
    Proc_SetVisualGMTSpecularCoef              = 143,
    Proc_SetVisualGMTDiffuseCoef               = 144,
    Proc_SetVisualGMTAmbientCoef               = 145,
    Proc_SetVisualGMTAsChromed                 = 146,
    Proc_SetVisualGMTTextureScrollingCoef      = 147,
    Proc_LockVisualGMT                         = 148,
    Proc_UnlockVisualGMT                       = 149,
    Proc_SetVisualGMTFrame                     = 150,
    Proc_Reserved_151                          = 151,
    Proc_OptionChangeDetailsValue              = 152,
    Proc_OptionChangeMusicVolume               = 153,
    Proc_OptionChangeSfxVolume                 = 154,
    Proc_OptionChangeVoiceVolume               = 155,
    Proc_OptionChangeActionKey                 = 156,
    Proc_ConfigureKey                          = 157,
    Proc_SetPersoAbsolutePosition              = 158,
    Proc_SetPersoAtModulePosition              = 159,
    Proc_ForcePersoAveragePosition             = 160,
    Proc_RelativeMovePerso                     = 161,
    Proc_ChangePersoAnySighting                = 162,
    Proc_ChangePersoSightingWithOffset         = 163,
    Proc_RotatePersoAroundX                    = 164,
    Proc_RotatePersoAroundY                    = 165,
    Proc_RotatePersoAroundZ                    = 166,
    Proc_RotatePersoAroundVector               = 167,
    Proc_RotatePersoAroundVectorWithOffset     = 168,
    Proc_RotatePersoAroundXwithOffset          = 169,
    Proc_RotatePersoAroundYwithOffset          = 170,
    Proc_RotatePersoAroundZwithOffset          = 171,
    Proc_SetFullPersoOrientation               = 172,
    Proc_SetFullPersoOrientationWithOffset     = 173,
    Proc_ZoomPerso                             = 174,
    Proc_ChangeOneCustomBit                    = 175,
    Proc_ChangeManyCustomBits                  = 176,
    Proc_ImposeSpeed                           = 177,
    Proc_ImposeSpeedX                          = 178,
    Proc_ImposeSpeedY                          = 179,
    Proc_ImposeSpeedZ                          = 180,
    Proc_ImposeSpeedXY                         = 181,
    Proc_ImposeSpeedXYZ                        = 182,
    Proc_ImposeAbsoluteSpeed                   = 183,
    Proc_ImposeAbsoluteSpeedX                  = 184,
    Proc_ImposeAbsoluteSpeedY                  = 185,
    Proc_ImposeAbsoluteSpeedZ                  = 186,
    Proc_ImposeAbsoluteSpeedXY                 = 187,
    Proc_ImposeAbsoluteSpeedXYZ                = 188,
    Proc_ProposeSpeed                          = 189,
    Proc_ProposeSpeedX                         = 190,
    Proc_ProposeSpeedY                         = 191,
    Proc_ProposeSpeedZ                         = 192,
    Proc_ProposeSpeedXY                        = 193,
    Proc_ProposeSpeedXYZ                       = 194,
    Proc_ProposeAbsoluteSpeed                  = 195,
    Proc_ProposeAbsoluteSpeedX                 = 196,
    Proc_ProposeAbsoluteSpeedY                 = 197,
    Proc_ProposeAbsoluteSpeedZ                 = 198,
    Proc_ProposeAbsoluteSpeedXY                = 199,
    Proc_ProposeAbsoluteSpeedXYZ               = 200,
    Proc_FixePositionPerso                     = 201,
    Proc_AddSpeed                              = 202,
    Proc_AddSpeedX                             = 203,
    Proc_AddSpeedY                             = 204,
    Proc_AddSpeedZ                             = 205,
    Proc_AddSpeedXY                            = 206,
    Proc_AddSpeedXYZ                           = 207,
    Proc_AddAbsoluteSpeed                      = 208,
    Proc_AddAbsoluteSpeedX                     = 209,
    Proc_AddAbsoluteSpeedY                     = 210,
    Proc_AddAbsoluteSpeedZ                     = 211,
    Proc_AddAbsoluteSpeedXY                    = 212,
    Proc_AddAbsoluteSpeedXYZ                   = 213,
    Proc_PrepareMorph                          = 214,
    Proc_StopMorph                             = 215,
    Proc_Morphing                              = 216,
    Proc_ReleaseAllModulesControl              = 217,
    Proc_ChangeModuleSighting                  = 218,
    Proc_SetModuleAbsolutePosition             = 219,
    Proc_RelativeMoveModule                    = 220,
    Proc_ChangeModuleSightingWithOffset        = 221,
    Proc_RotateModuleAroundX                   = 222,
    Proc_RotateModuleAroundY                   = 223,
    Proc_RotateModuleAroundZ                   = 224,
    Proc_GetMechanicGravityFactor              = 225,
    Proc_GetMechanicSlide                      = 226,
    Proc_GetMechanicRebound                    = 227,
    Proc_GetMechanicSlopeLimit                 = 228,
    Proc_GetMechanicInertiaX                   = 229,
    Proc_GetMechanicInertiaY                   = 230,
    Proc_GetMechanicInertiaZ                   = 231,
    Proc_GetMechanicTiltIntensity              = 232,
    Proc_GetMechanicTiltInertia                = 233,
    Proc_GetMechanicTiltOrigin                 = 234,
    Proc_GetMechanicMaxSpeed                   = 235,
    Proc_GetMechanicStreamPriority             = 236,
    Proc_GetMechanicStreamSpeed                = 237,
    Proc_GetMechanicStreamFactor               = 238,
    Proc_GetSlideFactorX                       = 239,
    Proc_GetSlideFactorY                       = 240,
    Proc_GetSlideFactorZ                       = 241,
    Proc_JumpImpulsion                         = 242,
    Proc_GetSpeedAnim                          = 243,
    Proc_IntToText                             = 244,
    Proc_SetMechanicAnimation                  = 245,
    Proc_SetMechanicCollide                    = 246,
    Proc_SetMechanicGravity                    = 247,
    Proc_SetMechanicTilt                       = 248,
    Proc_SetMechanicGI                         = 249,
    Proc_SetMechanicClimb                      = 250,
    Proc_SetMechanicOnGround                   = 251,
    Proc_SetMechanicSpider                     = 252,
    Proc_SetMechanicShoot                      = 253,
    Proc_SetMechanicSwim                       = 254,
    Proc_SetMechanicNeverFall                  = 255,
    Proc_ResetMechanicNewMechanic              = 256,
    Proc_SetMechanicCollisionControl           = 257,
    Proc_SetMechanicKeepSpeedZ                 = 258,
    Proc_SetMechanicSpeedLimit                 = 259,
    Proc_SetMechanicInertia                    = 260,
    Proc_SetMechanicStream                     = 261,
    Proc_SetMechanicStickOnPlatform            = 262,
    Proc_SetMechanicScale                      = 263,
    Proc_SetMechanicGravityFactor              = 264,
    Proc_SetMechanicSlide                      = 265,
    Proc_SetMechanicMaxRebound                 = 266,
    Proc_SetMechanicSlopeLimit                 = 267,
    Proc_SetMechanicInertiaX                   = 268,
    Proc_SetMechanicInertiaY                   = 269,
    Proc_SetMechanicInertiaZ                   = 270,
    Proc_SetMechanicInertiaXYZ                 = 271,
    Proc_SetMechanicTiltIntensity              = 272,
    Proc_SetMechanicTiltInertia                = 273,
    Proc_SetMechanicTiltOrigin                 = 274,
    Proc_SetMechanicSpeedMax                   = 275,
    Proc_SetMechanicStreamPriority             = 276,
    Proc_SetMechanicStreamSpeed                = 277,
    Proc_SetMechanicStreamFactor               = 278,
    Proc_AddMechanicStreamSpeed                = 279,
    Proc_AddMechanicStreamSpeedList            = 280,
    Proc_MoveLimit                             = 281,
    Proc_MoveLimitX                            = 282,
    Proc_MoveLimitY                            = 283,
    Proc_MoveLimitZ                            = 284,
    Proc_MoveLimitXYZ                          = 285,
    Proc_StopMoveLimitX                        = 286,
    Proc_StopMoveLimitY                        = 287,
    Proc_StopMoveLimitZ                        = 288,
    Proc_Cam_GetShiftTarget                    = 289,
    Proc_Cam_GetShiftPos                       = 290,
    Proc_FreePlatformLink                      = 291,
    Proc_SetScale                              = 292,
    Proc_SetSlideFactorXYZ                     = 293,
    Proc_SetSlideFactorX                       = 294,
    Proc_SetSlideFactorY                       = 295,
    Proc_SetSlideFactorZ                       = 296,
    Proc_SetClimbSpeedLimit                    = 297,
    Proc_SetHangingLimit                       = 298,
    Proc_SetHangingOff                         = 299,
    Proc_SetBaseCoeff                          = 300,
    Proc_SetWalkCoeff                          = 301,
    Proc_HierSetFather                         = 302,
    Proc_HierFreeFather                        = 303,
    Proc_HierListOfSon                         = 304,
    Proc_HierSetPlatformType                   = 305,
    Proc_HierLinkControl                       = 306,
    Proc_HierFreezeEngine                      = 307,
    Proc_FixePositionZDM                       = 308,
    Proc_FixePositionZDD                       = 309,
    Proc_FixePositionZDE                       = 310,
    Proc_ChangeLightIntensity                  = 311,
    Proc_SPO_ChangeFlag                        = 312,
    Proc_Reserved_313                          = 313,
    Proc_EcranChangeTaille                     = 314,
    Proc_EcranChangeClip                       = 315,
    Proc_EcranChangePos                        = 316,
    Proc_EcranChangePosPercent                 = 317,
    Proc_EcranChangeRatio                      = 318,
    Proc_OMBREAffichage                        = 319,
    Proc_OMBREChangeHauteur                    = 320,
    Proc_OMBREChangeVecteurProjection          = 321,
    Proc_ForceActivationZDD                    = 322,
    Proc_ForceActivationZDM                    = 323,
    Proc_ForceActivationZDE                    = 324,
    Proc_ForceActivationZDR                    = 325,
    Proc_ForceDesactivationZDD                 = 326,
    Proc_ForceDesactivationZDM                 = 327,
    Proc_ForceDesactivationZDE                 = 328,
    Proc_ForceDesactivationZDR                 = 329,
    Proc_LibereActivationZDD                   = 330,
    Proc_LibereActivationZDM                   = 331,
    Proc_LibereActivationZDE                   = 332,
    Proc_LibereActivationZDR                   = 333,
    Proc_ActiveZDR                             = 334,
    Proc_SetNoColWithMap                       = 335,
    Proc_SetNoColWithProjectile                = 336,
    Proc_SetNoColWithSeconfCharact             = 337,
    Proc_SetNoColWithMainCharact               = 338,
    Proc_SetNoColWithOtherSectors              = 339,
    Proc_SetNoColZdeWithProjectile             = 340,
    Proc_SetCollComputeFreq                    = 341,
    Proc_SetBrainComputeFreq                   = 342,
    Proc_SetLightComputeFreq                   = 343,
    Proc_SetUsedExitIdentifier                 = 344,
    Proc_GetUsedExitIdentifier                 = 345,
    Proc_Reserved_346                          = 346,
    Proc_Reserved_347                          = 347,
    Proc_Reserved_348                          = 348,
    Proc_SetPadReadingDsgvars                  = 349,
    Proc_CancelKeyboardInertia                 = 350,
    Proc_GetPadCalibration                     = 351,
    Proc_SetPadCalibration                     = 352,
    Proc_Reserved_353                          = 353,
    Proc_Reserved_354                          = 354,
    Proc_Reserved_355                          = 355,
    Proc_SelectShapnessMax                     = 356,
    Proc_CenterScreen                          = 357,
    Proc_Reserved_358                          = 358,
    Proc_Reserved_359                          = 359,
    Proc_Reserved_360                          = 360,
    Proc_Reserved_361                          = 361,
    Proc_Reserved_362                          = 362,
    Proc_Reserved_363                          = 363,
    Proc_Reserved_364                          = 364,
    Proc_SetSaturationBackGroundDistance       = 365,
    Proc_SaveCurrentRequest                    = 366,
    Proc_RestoreRequest                        = 367,
    Proc_DrawSegment                           = 368,
    Proc_UpdateChecksum                        = 369,
    Proc_ShellExecute                          = 370,
    Proc_ForceVerticalUsingX                   = 371,
    Proc_ForceVerticalUsingY                   = 372,
    Proc_FixePointsDeMagie                     = 373,
    Proc_FixePointsDeMagieMax                  = 374,
    Proc_InitPointsDeMagie                     = 375,
    Proc_InitPointsDeMagieMax                  = 376,
    Proc_AddMagicPoints                        = 377,
    Proc_AddMagicPointsMax                     = 378,
    Proc_SubMagicPoints                        = 379,
    Proc_SubMagicPointsMax                     = 380,
    Proc_FixePointsDair                        = 381,
    Proc_FixePointsDairMax                     = 382,
    Proc_InitPointsDair                        = 383,
    Proc_InitPointsDairMax                     = 384,
    Proc_AddAirPoints                          = 385,
    Proc_AddAirPointsMax                       = 386,
    Proc_SubAirPoints                          = 387,
    Proc_SubAirPointsMax                       = 388,
    Proc_FixePositionFade                      = 389,
    Proc_SetLocalPersoLight                    = 390,
    Proc_SetStaticLightOnOff                   = 391,
    Proc_SetStaticLightNearFar                 = 392,
    Proc_SetStaticLightColor                   = 393,
    Proc_ComputeLightEffect                    = 394,
    Proc_RLIPasDeRLI                           = 395,
    Proc_RLIFixe                               = 396,
    Proc_RLIBlend                              = 397,
    Proc_ChangeTypeOfWP                        = 398,
    Proc_CAPSSetCapabilities                   = 399,
    Proc_CAPSAddCapabilities                   = 400,
    Proc_CAPSSubCapabilities                   = 401,
    Proc_CAPSChangeCapabilities                = 402,
    Proc_ReinitGraph                           = 403,
    Proc_SetScrollSpeed                        = 404,
    Proc_SetScrollOnOff                        = 405,
    Proc_SetTextureOffset                      = 406,
    Proc_SetScrollPause                        = 407,
    Proc_ChangeCurrFrame                       = 408,
    Proc_ChangeRandomFrame                     = 409,
    Proc_FreezeAnim                            = 410,
    Proc_UnFreezeAnim                          = 411,
    Proc_SetSuperimposed                       = 412,
    Proc_SetSuperimposed2                      = 413,
    Proc_ReleaseSuperimposed                   = 414,
    Proc_SetCoordinates                        = 415,
    Proc_SwitchSuperimposedTab                 = 416,
    Proc_ACTsetTractionFactor                  = 417,
    Proc_TurnToPositionAngle                   = 418,
    Proc_TurnToPositionSpeed                   = 419,
    Proc_TABSortArray                          = 420,
    Proc_ActiveJoystickAnal                    = 421,
    Proc_UnActiveJoystickAnal                  = 422,
    Proc_SetZDMSizeSphere                      = 423,
    Proc_SetZDDSizeCone                        = 424,
    Proc_SetVolumeAnim                         = 425,
    Proc_SetVolumeMusic                        = 426,
    Proc_SetVolumeAmbiance                     = 427,
    Proc_SetDopplerEffect                      = 428,
    Proc_PauseSound                            = 429,
    Proc_ResumeSound                           = 430,
    Proc_StopMenuSound                         = 431,
    Proc_ChangeCaractere                       = 432,
    Proc_FormateTexte                          = 433,
    Proc_ValideNomDuSlot                       = 434,
    Proc_RestoreNomDuSlot                      = 435,
    Proc_ChangePersoSighting                   = 436,
    Proc_PlayDemo                              = 437,
    Proc_Reserved_438                          = 438,
    Proc_Reserved_439                          = 439,
    Proc_Reserved_440                          = 440,
    Proc_ChangeTooFarLimit                     = 441,
    Proc_ChangeTransparencyZone                = 442,
    Proc_SetBaseFrequenceForMenu               = 443,
    Proc_SaveSinusContext                      = 444,
    Proc_RestoreSinusContext                   = 445,
    Proc_Reserved_446                          = 446,
    Proc_Cam_UpdatePosition                    = 447,
    Proc_Cam_ChangeShiftTarget                 = 448,
    Proc_Cam_ChangeShiftPos                    = 449,
    Proc_Cam_ChangeDistMin                     = 450,
    Proc_Cam_ChangeDistMax                     = 451,
    Proc_Cam_ChangeBoundDistMin                = 452,
    Proc_Cam_ChangeBoundDistMax                = 453,
    Proc_Cam_ChangeAngleAlpha                  = 454,
    Proc_Cam_ChangeAngleShiftAlpha             = 455,
    Proc_Cam_ChangeAngleTheta                  = 456,
    Proc_Cam_ChangeAngleShiftTheta             = 457,
    Proc_Cam_ChangeLinearSpeed                 = 458,
    Proc_Cam_ChangeLinearIncreaseSpeed         = 459,
    Proc_Cam_ChangeLinearDecreaseSpeed         = 460,
    Proc_Cam_ChangeAngularSpeed                = 461,
    Proc_Cam_ChangeAngularIncreaseSpeed        = 462,
    Proc_Cam_ChangeAngularDecreaseSpeed        = 463,
    Proc_Cam_ChangeTargetSpeed                 = 464,
    Proc_Cam_ChangeTargetIncreaseSpeed         = 465,
    Proc_Cam_ChangeTargetDecreaseSpeed         = 466,
    Proc_Cam_ChangeFocal                       = 467,
    Proc_Cam_ChangeZMin                        = 468,
    Proc_Cam_ChangeZMax                        = 469,
    Proc_Cam_ChangeTgtPerso                    = 470,
    Proc_Cam_ChangeSecondTgtPerso              = 471,
    Proc_Cam_ChangeChannel                     = 472,
    Proc_Cam_Activate                          = 473,
    Proc_Cam_AssociateViewport                 = 474,
    Proc_Cam_ResetIAFlags                      = 475,
    Proc_Cam_SetFlagNoDynamicTarget            = 476,
    Proc_Cam_SetFlagNoAverageMoveTgtPerso      = 477,
    Proc_Cam_SetFlagNoParseCutAngle            = 478,
    Proc_Cam_SetFlagNoVisibility               = 479,
    Proc_Cam_SetFlagNoVisibilityWithDynHie     = 480,
    Proc_Cam_SetFlagNoDynChangeTheta           = 481,
    Proc_Cam_SetFlagNoShiftUntilPosReached     = 482,
    Proc_Cam_SetFlagNoDynSpeed                 = 483,
    Proc_Cam_ResetDNMFlags                     = 484,
    Proc_Cam_SetFlagNoLinearParsing            = 485,
    Proc_Cam_SetFlagNoLinearInertia            = 486,
    Proc_Cam_SetFlagNoAngularParsing           = 487,
    Proc_Cam_SetFlagNoAngularInertia           = 488,
    Proc_Cam_SetFlagNoTargetParsing            = 489,
    Proc_Cam_SetFlagNoTargetInertia            = 490,
    Proc_Cam_SetFlagFixedOrientation           = 491,
    Proc_Cam_SetFlagNoObstacle                 = 492,
    Proc_Cam_SetFlagNoCollisionWhenNotMoving   = 493,
    Proc_Cam_ChangeConstants                   = 494,
    Proc_Cam_SaveConstants                     = 495,
    Proc_Cam_RestoreConstants                  = 496,
    Proc_Cam_ShowInfo                          = 497,
    Proc_Cam_ForceTarget                       = 498,
    Proc_Cam_ForcePosition                     = 499,
    Proc_Cam_ForceRefAxis                      = 500,
    Proc_Cam_Reset                             = 501,
    Proc_Cam_ForceBestPos                      = 502,
    Proc_Cam_ForceNormalState                  = 503,
    Proc_Cam_ForceMovingOnRail                 = 504,
    Proc_Cam_SetCameraModeForEngine            = 505,
    Proc_SetAGO                                = 506,
    Proc_ActivateMenuMap                       = 507,
    Proc_JffTxt_Affiche                        = 508,
    Proc_JffTxt_Extend                         = 509,
    Proc_JffTxt_Modify                         = 510,
    Proc_FadeIn                                = 511,
    Proc_FadeOut                               = 512,
    Proc_HUD_SetLumsCount                      = 513,
    Proc_HUD_SetCagesCount                     = 514,
    Proc_HUD_SetSwimGauge                      = 515,
    Proc_HUD_SetHealthGauge                    = 516,
    Proc_HUD_SetEnemyHealthGauge               = 517,
    Proc_DoCheatMenu                           = 518,
    Proc_SetBacklight                          = 519,
    Proc_BeginAnalogCalibration                = 520,
    Proc_EndAnalogCalibration                  = 521,
    AI_PROCEDURE_COUNT                         = 522
} AI_e_Procedure;

/* ----------------------------------------------------------------------------
 * Section 8: AI Functions Enum (267 Entries, 0 .. 266)
 * Dispatched via AI Function Evaluation Table (DC 0x8C0CB838 / PC 0x004A6398)
 * ---------------------------------------------------------------------------- */
typedef enum AI_e_Function_ {
    Func_GetPersoAbsolutePosition              =   0,
    Func_GetMyAbsolutePosition                 =   1,
    Func_GetAngleAroundZToPerso                =   2,
    Func_DistanceToPerso                       =   3,
    Func_DistanceXToPerso                      =   4,
    Func_DistanceYToPerso                      =   5,
    Func_DistanceZToPerso                      =   6,
    Func_DistanceXYToPerso                     =   7,
    Func_DistanceXZToPerso                     =   8,
    Func_DistanceYZToPerso                     =   9,
    Func_DistanceToPersoCenter                 =  10,
    Func_DistanceXToPersoCenter                =  11,
    Func_DistanceYToPersoCenter                =  12,
    Func_DistanceZToPersoCenter                =  13,
    Func_DistanceXYToPersoCenter               =  14,
    Func_DistanceXZToPersoCenter               =  15,
    Func_DistanceYZToPersoCenter               =  16,
    Func_DistanceToWP                          =  17,
    Func_GetWPAbsolutePosition                 =  18,
    Func_Int                                   =  19,
    Func_RandomInt                             =  20,
    Func_Real                                  =  21,
    Func_Sinus                                 =  22,
    Func_Cosinus                               =  23,
    Func_Square                                =  24,
    Func_SquareRoot                            =  25,
    Func_RandomReal                            =  26,
    Func_MinimumReal                           =  27,
    Func_MaximumReal                           =  28,
    Func_DegreeToRadian                        =  29,
    Func_RadianToDegree                        =  30,
    Func_AbsoluteValue                         =  31,
    Func_LimitRealInRange                      =  32,
    Func_Sign                                  =  33,
    Func_Cube                                  =  34,
    Func_Modulo                                =  35,
    Func_TernInf                               =  36,
    Func_TernSup                               =  37,
    Func_TernEq                                =  38,
    Func_TernInfEq                             =  39,
    Func_TernSupEq                             =  40,
    Func_TernOp                                =  41,
    Func_TemporalRealCombination               =  42,
    Func_GetHitPoints                          =  43,
    Func_AddAndGetHitPoints                    =  44,
    Func_SubAndGetHitPoints                    =  45,
    Func_GetHitPointsMax                       =  46,
    Func_AddAndGetHitPointsMax                 =  47,
    Func_SubAndGetHitPointsMax                 =  48,
    Func_ListSize                              =  49,
    Func_GivePersoInList                       =  50,
    Func_AbsoluteVector                        =  51,
    Func_RelativeVector                        =  52,
    Func_VectorLocalToGlobal                   =  53,
    Func_VectorGlobalToLocal                   =  54,
    Func_GetScreenCoordinates                  =  55,
    Func_GetScreenDSActif                      =  56,
    Func_GetStyletCordinates                   =  57,
    Func_MAGNETGetStrength                     =  58,
    Func_MAGNETGetFar                          =  59,
    Func_MAGNETGetNear                         =  60,
    Func_MAGNETGetDuration                     =  61,
    Func_SPO_GetDrawFlag                       =  62,
    Func_GetTime                               =  63,
    Func_ElapsedTime                           =  64,
    Func_GetDT                                 =  65,
    Func_GetFrameLength                        =  66,
    Func_GetInputAnalogicValue                 =  67,
    Func_VitessePadAnalogique                  =  68,
    Func_GenerateObject                        =  69,
    Func_CountGeneratedObjects                 =  70,
    Func_GetGlobalCounter                      =  71,
    Func_GetSubMapId                           =  72,
    Func_AddColor                              =  73,
    Func_AddRed                                =  74,
    Func_AddGreen                              =  75,
    Func_AddBlue                               =  76,
    Func_AddAlpha                              =  77,
    Func_ColorRGBA                             =  78,
    Func_ColorRGB                              =  79,
    Func_ColorRed                              =  80,
    Func_ColorGreen                            =  81,
    Func_ColorBlue                             =  82,
    Func_ColorAlpha                            =  83,
    Func_GetVisualGMTColor                     =  84,
    Func_GetVisualGMTSpecularCoef              =  85,
    Func_GetVisualGMTSpecularExponant          =  86,
    Func_GetVisualGMTDiffuseCoef               =  87,
    Func_GetVisualGMTAmbientCoef               =  88,
    Func_GetVisualGMTTextureScrollingCoefU     =  89,
    Func_GetVisualGMTTextureScrollingCoefV     =  90,
    Func_GetVisualGMTFrame                     =  91,
    Func_GetVisualGMTNumberOfFrames            =  92,
    Func_SaveGame                              =  93,
    Func_LoadGame                              =  94,
    Func_EraseGame                             =  95,
    Func_GetCurrentSlotNumber                  =  96,
    Func_IsAValidSlotName                      =  97,
    Func_RepairCorruption                      =  98,
    Func_MICRO_GetSoufleValue                  =  99,
    Func_LitPointsDeMagie                      = 100,
    Func_LitPointsDeMagieMax                   = 101,
    Func_AjouteEtLitPointsDeMagie              = 102,
    Func_AjouteEtLitPointsDeMagieMax           = 103,
    Func_EnleveEtLitPointsDeMagie              = 104,
    Func_EnleveEtLitPointsDeMagieMax           = 105,
    Func_LitPointsDair                         = 106,
    Func_LitPointsDairMax                      = 107,
    Func_AjouteEtLitPointsDair                 = 108,
    Func_AjouteEtLitPointsDairMax              = 109,
    Func_EnleveEtLitPointsDair                 = 110,
    Func_EnleveEtLitPointsDairMax              = 111,
    Func_PersoLePlusProche                     = 112,
    Func_NearestActorInCurrentSector           = 113,
    Func_NearerActorInFieldOfVision            = 114,
    Func_GetNbActivePerso                      = 115,
    Func_CibleLaPlusProche                     = 116,
    Func_CibleLaPlusProcheavecAngles           = 117,
    Func_ReseauWPnLePlusProche                 = 118,
    Func_NetworkCloserWPOfType                 = 119,
    Func_ReseauWPnLePlusDansLAxe               = 120,
    Func_ReseauWPnLePlusDansLAxe2              = 121,
    Func_Reserved_122                          = 122,
    Func_NetworkAffectTypeOfConnectedWP        = 123,
    Func_NetworkAffectTypeOfConnectedWP2       = 124,
    Func_ReseauCheminLePlusCourt               = 125,
    Func_NetworkBuildOrderedPath               = 126,
    Func_NetworkBuildOrderedPathCircular       = 127,
    Func_NetworkAllocateGraphToMSWay           = 128,
    Func_NetworkAllocateGraphToMSWayCircular   = 129,
    Func_ReseauLitIndexCourant                 = 130,
    Func_ReseauForceIndexCourant               = 131,
    Func_ReseauLitPremierIndex                 = 132,
    Func_ReseauLitDernierIndex                 = 133,
    Func_ReseauIncrementIndex                  = 134,
    Func_ReseauDecrementIndex                  = 135,
    Func_ReseauLitWPAIndex                     = 136,
    Func_ReseauLitCapaciteLiaisonAIndex        = 137,
    Func_ReseauChangeCapaciteLiaisonAIndex     = 138,
    Func_ReseauLitPoidsLiaisonAIndex           = 139,
    Func_ReseauChangePoidsLiaisonAIndex        = 140,
    Func_NetworkGetIndexOfWPInMSWay            = 141,
    Func_NetworkForceWPToCurrent               = 142,
    Func_ReseauTestExtremite                   = 143,
    Func_ReseauLitCapaciteLiaisonDansGraph     = 144,
    Func_ReseauChangeCapaciteLiaisonDansGraph  = 145,
    Func_ReseauLitPoidsLiaisonDansGraph        = 146,
    Func_ReseauChangePoidsLiaisonDansGraph     = 147,
    Func_NetworkGetTypeOfWP                    = 148,
    Func_CapsGetCapabilities                   = 149,
    Func_CapabilityAtBitNumber                 = 150,
    Func_GetScrollSpeed                        = 151,
    Func_GetNbFrame                            = 152,
    Func_DotProduct                            = 153,
    Func_CrossProduct                          = 154,
    Func_Normalize                             = 155,
    Func_GetSPOCoordinates                     = 156,
    Func_ACTGetTractionFactor                  = 157,
    Func_GetCenterZDEType                      = 158,
    Func_GetCenterZDMType                      = 159,
    Func_GetCenterZDRType                      = 160,
    Func_GetCenterZDDType                      = 161,
    Func_TextAffiche                           = 162,
    Func_GetCPUCounter                         = 163,
    Func_VitesseHorizontaleDuPerso             = 164,
    Func_VitesseVerticaleDuPerso               = 165,
    Func_GetPersoZoomFactor                    = 166,
    Func_GetPersoSighting                      = 167,
    Func_GetPersoHorizon                       = 168,
    Func_GetPersoBanking                       = 169,
    Func_LitPositionZDM                        = 170,
    Func_LitPositionZDE                        = 171,
    Func_LitPositionZDD                        = 172,
    Func_LitCentreZDM                          = 173,
    Func_LitCentreZDE                          = 174,
    Func_LitCentreZDD                          = 175,
    Func_LitAxeZDM                             = 176,
    Func_LitAxeZDE                             = 177,
    Func_LitAxeZDD                             = 178,
    Func_LitDimensionZDM                       = 179,
    Func_LitDimensionZDE                       = 180,
    Func_LitDimensionZDD                       = 181,
    Func_VecteurPointAxe                       = 182,
    Func_VecteurPointSegment                   = 183,
    Func_VectorContribution                    = 184,
    Func_VectorCombination                     = 185,
    Func_TemporalVectorCombination             = 186,
    Func_ScaledVector                          = 187,
    Func_GetVectorNorm                         = 188,
    Func_RotateVector                          = 189,
    Func_VecteurAngle                          = 190,
    Func_VecteurCos                            = 191,
    Func_VecteurSin                            = 192,
    Func_GetNormalCollideVector                = 193,
    Func_GetNormalCollideVector2               = 194,
    Func_GetCollidePoint                       = 195,
    Func_GetCollidePoint2                      = 196,
    Func_GetHandsCollidePoint                  = 197,
    Func_Reserved_198                          = 198,
    Func_GetCollideRate2                       = 199,
    Func_GetCollideMaterialType                = 200,
    Func_Reserved_201                          = 201,
    Func_CollisionPoint                        = 202,
    Func_CollisionNormalVector                 = 203,
    Func_PersoCollisionne                      = 204,
    Func_CollisionPointMaterial                = 205,
    Func_GetLastTraversedMaterialType          = 206,
    Func_GetLastTraversedMaterial              = 207,
    Func_GetCurrentCollidedGMT                 = 208,
    Func_GetColliderType                       = 209,
    Func_GetColliderVector                     = 210,
    Func_GetColliderReal                       = 211,
    Func_LitDernierPersoCollisione             = 212,
    Func_CalculVecteurRebond                   = 213,
    Func_GetModuleAbsolutePosition             = 214,
    Func_GetModuleRelativePosition             = 215,
    Func_GetModuleZoomFactor                   = 216,
    Func_GetModuleSighting                     = 217,
    Func_CastIntegerToChannel                  = 218,
    Func_GetSlotDate                           = 219,
    Func_GetSlotName                           = 220,
    Func_GetSlotScore                          = 221,
    Func_GetStringCharAt                       = 222,
    Func_GetFormattedTextInfo                  = 223,
    Func_GetInputEntryName                     = 224,
    Func_Reserved_225                          = 225,
    Func_Reserved_226                          = 226,
    Func_Reserved_227                          = 227,
    Func_Reserved_228                          = 228,
    Func_Reserved_229                          = 229,
    Func_Reserved_230                          = 230,
    Func_Reserved_231                          = 231,
    Func_Reserved_232                          = 232,
    Func_Reserved_233                          = 233,
    Func_Reserved_234                          = 234,
    Func_Reserved_235                          = 235,
    Func_Reserved_236                          = 236,
    Func_Reserved_237                          = 237,
    Func_Reserved_238                          = 238,
    Func_Reserved_239                          = 239,
    Func_Reserved_240                          = 240,
    Func_Reserved_241                          = 241,
    Func_Reserved_242                          = 242,
    Func_Reserved_243                          = 243,
    Func_Reserved_244                          = 244,
    Func_LitActivationZDD                      = 245,
    Func_LitActivationZDM                      = 246,
    Func_LitActivationZDE                      = 247,
    Func_LitActivationZDR                      = 248,
    Func_GetCollComputationFrequency           = 249,
    Func_GetBrainComputationFrequency          = 250,
    Func_GetLightComputationFrequency          = 251,
    Func_GetBooleanInArray                     = 252,
    Func_GetNumberOfBooleanInArray             = 253,
    Func_GetButtonName                         = 254,
    Func_GetDriversAvailable                   = 255,
    Func_GetCurrentLanguageId                  = 256,
    Func_GetNbLanguages                        = 257,
    Func_GetLanguageText                       = 258,
    Func_TextToInt                             = 259,
    Func_GetMusicVolume                        = 260,
    Func_GetSfxVolume                          = 261,
    Func_SlotIsValid                           = 262,
    Func_NbAvailableResolution                 = 263,
    Func_CurrentResolution                     = 264,
    Func_GetBrightness                         = 265,
    Func_NameResolution                        = 266,
    AI_FUNCTION_COUNT                          = 267
} AI_e_Function;

/* ----------------------------------------------------------------------------
 * Section 9: Opcode Metadata Structures & Mapping Tables
 * ---------------------------------------------------------------------------- */
typedef struct AI_tdstOpcodeInfo_ {
    uint32_t        ulOpcodeId;
    const char     *szName;
    const char     *szParamTypes;
    const char     *szDescription;
} AI_tdstOpcodeInfo;

extern const AI_tdstOpcodeInfo g_a_stAINodeInfo[AI_NODE_COUNT];
extern const AI_tdstOpcodeInfo g_a_stAIKeywordInfo[AI_KEYWORD_COUNT];
extern const AI_tdstOpcodeInfo g_a_stAIOperatorInfo[AI_OPERATOR_COUNT];
extern const AI_tdstOpcodeInfo g_a_stAIConditionInfo[AI_CONDITION_COUNT];
extern const AI_tdstOpcodeInfo g_a_stAIProcedureInfo[AI_PROCEDURE_COUNT];
extern const AI_tdstOpcodeInfo g_a_stAIFunctionInfo[AI_FUNCTION_COUNT];

/* Utility Resolution Functions */
const char* AI_fn_szGetNodeName(AI_e_NodeType eType);
const char* AI_fn_szGetConditionName(AI_e_Condition eCondition);
const char* AI_fn_szGetProcedureName(AI_e_Procedure eProcedure);
const char* AI_fn_szGetFunctionName(AI_e_Function eFunction);
float       AI_fn_fGetDeltaTime60FPS(void);
float       AI_fn_fClampDeltaTime(float fDeltaTime);

#ifdef __cplusplus
}
#endif

#endif /* R2_AI_TABLES_H */
