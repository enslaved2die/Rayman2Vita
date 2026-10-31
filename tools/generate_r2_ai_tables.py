#!/usr/bin/env python3
"""
Generate include/vita_shim/r2_ai_tables.h and src/platform/vita/r2_ai_tables.c
Reconciles Dreamcast 1ST_READ.BIN (SH-4 baseline), PC Rayman2.exe guidance, and CPA Editor CV9 metadata.
"""

import os
import json
import re

OUTPUT_HEADER = "include/vita_shim/r2_ai_tables.h"
OUTPUT_SOURCE = "src/platform/vita/r2_ai_tables.c"

with open("re_analysis/dc/ai_opcodes.json", "r") as f:
    opcodes = json.load(f)

raw_conds = opcodes["conditions"]
raw_procs = opcodes["procedures"]
raw_funcs = opcodes["functions"]

# Master Node Types (41 entries: 0..40)
NODE_TYPES = [
    (0, "AI_NODE_PROCEDURE", "Procedure", "Executes an AI procedure (DsaCom)"),
    (1, "AI_NODE_CONDITION", "Condition", "Evaluates a condition and returns boolean"),
    (2, "AI_NODE_FUNCTION", "Function", "Evaluates an expression and returns a typed value"),
    (3, "AI_NODE_ACTION", "Action", "Action comport / state transition"),
    (4, "AI_NODE_OPERATOR", "Operator", "Mathematical or logical binary/unary operator"),
    (5, "AI_NODE_KEYWORD", "Keyword", "Control flow keyword (If, Then, Else, While, etc.)"),
    (6, "AI_NODE_DSGVAR_REF", "DsgVarRef", "Direct reference to Perso DsgVar buffer"),
    (7, "AI_NODE_DSGVAR_REF_CURRENT", "DsgVarRefCurrent", "Reference to current Perso DsgVar"),
    (8, "AI_NODE_DSGVAR_REF_OTHER", "DsgVarRefOther", "Reference to another Perso's DsgVar"),
    (9, "AI_NODE_MACRO_CALL", "MacroCall", "Inline macro expansion or call"),
    (10, "AI_NODE_FIELD", "Field", "Perso property/field getter (Position, Sight, etc.)"),
    (11, "AI_NODE_FIELD_SET", "FieldSet", "Perso property/field setter"),
    (12, "AI_NODE_CONST_INT", "ConstantInt", "32-bit signed integer literal"),
    (13, "AI_NODE_CONST_REAL", "ConstantReal", "32-bit IEEE 754 float literal"),
    (14, "AI_NODE_WAYPOINT_REF", "WayPointRef", "Reference to Waypoint structure"),
    (15, "AI_NODE_VECTOR", "Vector", "3D vector literal (X, Y, Z coordinates)"),
    (16, "AI_NODE_STRING_REF", "StringRef", "Indexed text/string reference"),
    (17, "AI_NODE_TEXT_REF", "TextRef", "Localized text bank entry reference"),
    (18, "AI_NODE_COMPORT_REF", "ComportRef", "Intelligence comport state reference"),
    (19, "AI_NODE_ACTION_REF", "ActionRef", "Reflex/animation action reference"),
    (20, "AI_NODE_VECTOR_REF", "VectorRef", "Pointer to 3D vector variable"),
    (21, "AI_NODE_SOUND_EVENT_REF", "SoundEventRef", "Sound event trigger ID"),
    (22, "AI_NODE_OBJECT_REF", "ObjectRef", "SuperObject / Perso actor pointer"),
    (23, "AI_NODE_GAME_MATERIAL_REF", "GameMaterialRef", "GameMaterial collision/physics definition"),
    (24, "AI_NODE_COLOR_REF", "ColorRef", "RGBA 32-bit color constant"),
    (25, "AI_NODE_BRAIN_REF", "BrainRef", "Reference to Brain component"),
    (26, "AI_NODE_SECTOR_REF", "SectorRef", "Spatial partition sector reference"),
    (27, "AI_NODE_LIGHT_REF", "LightRef", "Dynamic light object reference"),
    (28, "AI_NODE_VISUAL_MATERIAL_REF", "VisualMaterialRef", "Visual rendering material reference"),
    (29, "AI_NODE_COMPORT_REF_2", "ComportRef2", "Secondary comport state reference"),
    (30, "AI_NODE_FONT_REF", "FontRef", "2D bitmap font reference"),
    (31, "AI_NODE_RAW_STRING_REF", "RawStringRef", "Direct string literal pointer"),
    (32, "AI_NODE_LIPS_REF", "LipsRef", "Facial lip-sync deformation track"),
    (33, "AI_NODE_GRAPH_REF", "GraphRef", "Waypoint navigation graph reference"),
    (34, "AI_NODE_MICRO_REF", "MicroRef", "Microphone / positional sound listener reference"),
    (35, "AI_NODE_FAMILY_REF", "FamilyRef", "Character family archetype reference"),
    (36, "AI_NODE_CUSTOM_BIT_REF", "CustomBitRef", "Custom state bit flag test"),
    (37, "AI_NODE_CUSTOM_BIT_SET", "CustomBitSet", "Custom state bit flag set"),
    (38, "AI_NODE_CUSTOM_BIT_CLEAR", "CustomBitClear", "Custom state bit flag clear"),
    (39, "AI_NODE_TREE_LINK", "TreeLink", "Subtree jump / Macro reference"),
    (40, "AI_NODE_END_NODE", "EndNode", "AST node termination marker (advance 8 bytes)")
]

KEYWORDS = [
    ("KeyWord_If", "If", "Standard conditional branch"),
    ("KeyWord_IfNot", "IfNot", "Inverted conditional branch"),
    ("KeyWord_IfNotU64", "IfNotU64", "Platform conditional branch (skip on N64/PC)"),
    ("KeyWord_Then", "Then", "Consequent block statement"),
    ("KeyWord_Else", "Else", "Alternative block statement"),
    ("KeyWord_If2", "If2", "Throttle: Evaluate every 2 ticks (30 Hz at 60 FPS)"),
    ("KeyWord_If4", "If4", "Throttle: Evaluate every 4 ticks (15 Hz at 60 FPS)"),
    ("KeyWord_If8", "If8", "Throttle: Evaluate every 8 ticks (7.5 Hz at 60 FPS)"),
    ("KeyWord_If16", "If16", "Throttle: Evaluate every 16 ticks (3.75 Hz at 60 FPS)"),
    ("KeyWord_IfDebug", "IfDebug", "Debug build conditional execution"),
    ("KeyWord_MainActor", "MainActor", "Self reference keyword"),
    ("KeyWord_Me", "Me", "Local Perso self reference"),
    ("KeyWord_Nobody", "Nobody", "Null Perso pointer keyword"),
    ("KeyWord_NoAction", "NoAction", "Null action reference keyword"),
    ("KeyWord_Nowhere", "Nowhere", "Null waypoint / location keyword")
]

OPERATORS = [
    ("Operator_Affect", "=", "Assignment operator"),
    ("Operator_Dot", ".", "Member access operator"),
    ("Operator_Plus", "+", "Arithmetic addition"),
    ("Operator_Minus", "-", "Arithmetic subtraction"),
    ("Operator_Mul", "*", "Arithmetic multiplication"),
    ("Operator_Div", "/", "Arithmetic division"),
    ("Operator_UnaryMinus", "neg", "Unary arithmetic negation"),
    ("Operator_PlusAffect", "+=", "Addition assignment"),
    ("Operator_MinusAffect", "-=", "Subtraction assignment"),
    ("Operator_MulAffect", "*=", "Multiplication assignment"),
    ("Operator_DivAffect", "/=", "Division assignment"),
    ("Operator_PlusPlusAffect", "++", "Pre/post increment"),
    ("Operator_MinusMinusAffect", "--", "Pre/post decrement"),
    ("Operator_Array", "[]", "Array index access"),
    ("Operator_AffectArray", "[]=", "Array element assignment"),
    ("Operator_VectorPlusVector", "v+v", "3D Vector addition"),
    ("Operator_VectorMinusVector", "v-v", "3D Vector subtraction"),
    ("Operator_VectorMulScalar", "v*s", "3D Vector scalar multiplication"),
    ("Operator_VectorDivScalar", "v/s", "3D Vector scalar division"),
    ("Operator_VectorUnaryMinus", "-v", "3D Vector negation"),
    ("Operator_ModelCast", "cast", "Typecast to AI model archetype"),
    ("Operator_Ultra", "ultra", "Ultra optimization operator")
]

# Generate Conditions list (0..159, 160 entries matching Dreamcast 0x8C0C96A8)
CONDITIONS = []
for i in range(160):
    k = str(i)
    if k in raw_conds:
        name, params, a1, a2 = raw_conds[k]
        desc = f"Condition {name} (params: {params})"
    else:
        if i == 158:
            name = "Cond_Cam_IsFlag_158"
            params = "L"
            desc = "Dreamcast Camera Flag 158 (0x8C0B1B20)"
        elif i == 159:
            name = "Cond_Cam_IsFlag_159"
            params = "L"
            desc = "Dreamcast Camera Flag 159 (0x8C0B1B20)"
        else:
            name = f"Cond_Reserved_{i}"
            params = ""
            desc = f"Reserved condition slot {i}"
    CONDITIONS.append((i, name, params, desc))

# Generate Procedures list (0..521, 522 entries)
PROCEDURES = []
for i in range(522):
    k = str(i)
    if k in raw_procs:
        name, params, a1, a2 = raw_procs[k]
        desc = f"Procedure {name} (params: {params})"
    else:
        name = f"Proc_Reserved_{i}"
        params = ""
        desc = f"Reserved procedure slot {i}"
    PROCEDURES.append((i, name, params, desc))

# Generate Functions list (0..266, 267 entries)
FUNCTIONS = []
for i in range(267):
    k = str(i)
    if k in raw_funcs:
        name, params, a1, a2 = raw_funcs[k]
        desc = f"Function {name} (params: {params})"
    else:
        name = f"Func_Reserved_{i}"
        params = ""
        desc = f"Reserved function slot {i}"
    FUNCTIONS.append((i, name, params, desc))

print(f"Building header: {len(NODE_TYPES)} NodeTypes, {len(KEYWORDS)} Keywords, {len(OPERATORS)} Operators, "
      f"{len(CONDITIONS)} Conditions, {len(PROCEDURES)} Procedures, {len(FUNCTIONS)} Functions.")

# Build C Header
h_lines = []
h_lines.append("/* ============================================================================")
h_lines.append(" * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)")
h_lines.append(" * File: r2_ai_tables.h")
h_lines.append(" *")
h_lines.append(" * Comprehensive AI Opcode, Callback, and 60 FPS Timing Reconciliation.")
h_lines.append(" * Primary Ground Truth: Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000, AI V5.0.0)")
h_lines.append(" * Secondary Guidance:  PC Retail Rayman2.exe (x86 @ 0x00400000, AI V5.0.0)")
h_lines.append(" * Engine Architecture: CPA (OpenSpace) Engine AI Module (Dec 5 1997)")
h_lines.append(" * ============================================================================ */")
h_lines.append("")
h_lines.append("#ifndef R2_AI_TABLES_H")
h_lines.append("#define R2_AI_TABLES_H")
h_lines.append("")
h_lines.append("#include <stdint.h>")
h_lines.append("#include <stddef.h>")
h_lines.append("")
h_lines.append("#ifdef __cplusplus")
h_lines.append('extern "C" {')
h_lines.append("#endif")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 1: 60 FPS Timing, Delta-Time & Physics Engine Parameters")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("/* Ground Truth Dreamcast SH-4 constants:")
h_lines.append(" *   0x8C010B44 -> 0x42700000 (60.0f NTSC target)")
h_lines.append(" *   0x8C010B50 -> 0x42480000 (50.0f PAL target)")
h_lines.append(" *   0x8C0BDE94 -> g_fTargetFPS (float global: 60.0f on NTSC / VGA)")
h_lines.append(" *   0x8C0BDBF4 -> g_dwVideoMode (DWORD global: 0=NTSC, 1=VGA, 2=PAL)")
h_lines.append(" *   0x8C025384 -> 15.0f (min clamp: max delta time 66.67ms)")
h_lines.append(" *   0x8C025390 -> 60.0f (max clamp: min delta time 16.67ms)")
h_lines.append(" */")
h_lines.append("#define R2_AI_NTSC_TARGET_FPS            60.0f")
h_lines.append("#define R2_AI_PAL_TARGET_FPS             50.0f")
h_lines.append("#define R2_AI_VITA_TARGET_FPS            60.0f")
h_lines.append("")
h_lines.append("#define R2_AI_NTSC_DELTA_TIME            (1.0f / 60.0f)   /* 0.016666667f sec */")
h_lines.append("#define R2_AI_PAL_DELTA_TIME             (1.0f / 50.0f)   /* 0.020000000f sec */")
h_lines.append("#define R2_AI_VITA_DELTA_TIME            R2_AI_NTSC_DELTA_TIME")
h_lines.append("")
h_lines.append("#define R2_AI_FPS_MIN_CLAMP              15.0f            /* Lowest clamped framerate */")
h_lines.append("#define R2_AI_FPS_MAX_CLAMP              60.0f            /* Highest clamped framerate */")
h_lines.append("#define R2_AI_DT_MAX_CLAMP               (1.0f / 15.0f)   /* 0.066666667f sec */")
h_lines.append("#define R2_AI_DT_MIN_CLAMP               (1.0f / 60.0f)   /* 0.016666667f sec */")
h_lines.append("")
h_lines.append("/* 60 FPS Physics tick multiplier (at native 60 Hz, multiplier = 1.0f) */")
h_lines.append("#define R2_PHYSICS_TICK_FACTOR_60HZ      1.0f")
h_lines.append("#define R2_PHYSICS_GRAVITY_DEFAULT       -28.0f           /* CPA vertical acceleration */")
h_lines.append("#define R2_PHYSICS_TERMINAL_VELOCITY     -60.0f")
h_lines.append("")
h_lines.append("/* Dreamcast Baseline Module Information */")
h_lines.append('#define R2_DC_AI_MODULE_VERSION_STR      "AI V5.0.0 (Dec  5 1997)"')
h_lines.append("#define R2_DC_VA_AI_MODULE_STR           0x8C0C7A08")
h_lines.append("#define R2_DC_VA_AI_INIT                 0x8C032E60")
h_lines.append("#define R2_DC_VA_KEYWORD_INTERP          0x8C0ACB60")
h_lines.append("#define R2_DC_VA_EVAL_COND_TREE          0x8C0ACD88")
h_lines.append("#define R2_DC_VA_TARGET_FPS              0x8C0BDE94")
h_lines.append("#define R2_DC_VA_VIDEO_MODE              0x8C0BDBF4")
h_lines.append("")
h_lines.append("/* Dreamcast Jump Table Ground Truth VAs */")
h_lines.append("#define R2_DC_VA_TABLE_FUNCTION_EVAL     0x8C0C7C90  /* 41 entries */")
h_lines.append("#define R2_DC_VA_TABLE_PROCEDURE         0x8C0C9618  /* 20 entries */")
h_lines.append("#define R2_DC_VA_TABLE_CONDITION         0x8C0C96A8  /* 160 entries */")
h_lines.append("#define R2_DC_VA_TABLE_FUNCTION          0x8C0CB838  /* 28 entries */")
h_lines.append("")
h_lines.append("/* PC Guidance Table Reference VAs */")
h_lines.append("#define R2_PC_VA_TABLE_FUNCTION_EVAL     0x004A4180  /* 41 entries */")
h_lines.append("#define R2_PC_VA_TABLE_PROCEDURE         0x004A5E80  /* 20 entries */")
h_lines.append("#define R2_PC_VA_TABLE_CONDITION         0x004A5EE0  /* 149 entries (+11 DC) */")
h_lines.append("#define R2_PC_VA_TABLE_FUNCTION          0x004A6398  /* 28 entries */")
h_lines.append("")
h_lines.append("/* Dreamcast-Specific Level & Minigame Identifiers */")
h_lines.append('#define R2_LEVEL_MAPMONDE2               "MAPMONDE2"   /* 3D Isle of Doors Interactive Hub */')
h_lines.append('#define R2_LEVEL_B_DISC                  "B_DISC"      /* Globox Disc Minigame */')
h_lines.append('#define R2_LEVEL_B_PYRAM                 "B_PYRAM"     /* Pyramids Minigame */')
h_lines.append('#define R2_LEVEL_B_INVADE                "B_INVADE"    /* Space Invaders Minigame */')
h_lines.append('#define R2_LEVEL_B_LIFT                  "B_LIFT"      /* Lift Minigame */')
h_lines.append('#define R2_LEVEL_B_TOILE                 "B_TOILE"     /* Toilet Minigame */')
h_lines.append('#define R2_LEVEL_GLOBVILL                "GLOBVILL"    /* Globox Village */')
h_lines.append('#define R2_LEVEL_GLODISC_CINE            "GLODISC_CINE"/* Globox Disc Intro Cinematic */')
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 2: CPA Engine Data Types & Function Pointer Typedefs")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef struct MTH3D_tdstVector_ {")
h_lines.append("    float x;")
h_lines.append("    float y;")
h_lines.append("    float z;")
h_lines.append("} MTH3D_tdstVector;")
h_lines.append("")
h_lines.append("/* Variable / Parameter Value Type */")
h_lines.append("typedef enum AI_e_ValueType_ {")
h_lines.append("    E_vt_None                = 0,")
h_lines.append("    E_vt_Boolean             = 1,")
h_lines.append("    E_vt_Integer             = 2,")
h_lines.append("    E_vt_Float               = 3,")
h_lines.append("    E_vt_Vector              = 4,")
h_lines.append("    E_vt_String              = 5,")
h_lines.append("    E_vt_SuperObject         = 6,")
h_lines.append("    E_vt_Brain               = 7,")
h_lines.append("    E_vt_Comport             = 8,")
h_lines.append("    E_vt_Action              = 9,")
h_lines.append("    E_vt_GameMaterial        = 10,")
h_lines.append("    E_vt_WayPoint            = 11,")
h_lines.append("    E_vt_Graph               = 12,")
h_lines.append("    E_vt_Text                = 13,")
h_lines.append("    E_vt_SoundEvent          = 14,")
h_lines.append("    E_vt_Light               = 15,")
h_lines.append("    E_vt_Sector              = 16,")
h_lines.append("    E_vt_VisualMaterial      = 17,")
h_lines.append("    E_vt_Font                = 18,")
h_lines.append("    E_vt_Color               = 19,")
h_lines.append("    E_vt_Family              = 20")
h_lines.append("} AI_e_ValueType;")
h_lines.append("")
h_lines.append("/* CPA 8-byte AST Node Structure (tdstNodeInterpret) */")
h_lines.append("typedef struct AI_tdstNode_ {")
h_lines.append("    union {")
h_lines.append("        int32_t     lValue;")
h_lines.append("        float       fValue;")
h_lines.append("        void       *pValue;")
h_lines.append("        int16_t     wIndex;")
h_lines.append("    } u;")
h_lines.append("    int16_t         wRefIndex;      /* Reference / DsgVar / Table index */")
h_lines.append("    uint8_t         bParamType;     /* Parameter type code */")
h_lines.append("    uint8_t         bNodeType;      /* Master Node Opcode (0..40) */")
h_lines.append("} AI_tdstNode;")
h_lines.append("")
h_lines.append("/* Evaluation Stack Parameter Container */")
h_lines.append("typedef struct AI_tdstParam_ {")
h_lines.append("    AI_e_ValueType   eType;")
h_lines.append("    union {")
h_lines.append("        int32_t             lVal;")
h_lines.append("        float               fVal;")
h_lines.append("        void               *pVal;")
h_lines.append("        MTH3D_tdstVector    stVector;")
h_lines.append("    } u;")
h_lines.append("} AI_tdstParam;")
h_lines.append("")
h_lines.append("/* Opaque Engine Structure Forward Declarations */")
h_lines.append("struct AI_tdstMind_;")
h_lines.append("struct AI_tdstAIModel_;")
h_lines.append("struct AI_tdstComport_;")
h_lines.append("")
h_lines.append("/* CPA Calling Convention Typedefs */")
h_lines.append("typedef AI_tdstNode* (*AI_pfn_p_stFunctionEval)(AI_tdstNode *p_stNode, struct AI_tdstMind_ *p_stMind);")
h_lines.append("typedef void         (*AI_pfn_vProcedure)(struct AI_tdstMind_ *p_stMind, uint32_t ulParam);")
h_lines.append("typedef int32_t      (*AI_pfn_bCondition)(struct AI_tdstMind_ *p_stMind, uint32_t ulParam);")
h_lines.append("typedef AI_tdstParam*(*AI_pfn_p_stFunction)(struct AI_tdstMind_ *p_stMind, AI_tdstParam *p_stResult);")
h_lines.append("typedef void         (*AI_pfn_vOperator)(AI_tdstParam *p_stLeft, AI_tdstParam *p_stRight, AI_tdstParam *p_stOut);")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 3: Master AI Node Types Enum (0 .. 40)")
h_lines.append(" * Dispatched via AI_a_pfn_p_stFunctionEval (DC 0x8C0C7C90 / PC 0x004A4180)")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_NodeType_ {")
for idx, sym, name, desc in NODE_TYPES:
    h_lines.append(f"    {sym:30s} = {idx:2d},  /* {desc} */")
h_lines.append("    AI_NODE_COUNT                  = 41")
h_lines.append("} AI_e_NodeType;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 4: AI Control Flow & Evaluation Keywords (15 Entries)")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_Keyword_ {")
for i, (sym, kw, desc) in enumerate(KEYWORDS):
    h_lines.append(f"    {sym:24s} = {i:2d},  /* {kw:10s} - {desc} */")
h_lines.append("    AI_KEYWORD_COUNT           = 15")
h_lines.append("} AI_e_Keyword;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 5: AI Operators Enum (22 Entries)")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_Operator_ {")
for i, (sym, op, desc) in enumerate(OPERATORS):
    h_lines.append(f"    {sym:28s} = {i:2d},  /* {op:6s} - {desc} */")
h_lines.append("    AI_OPERATOR_COUNT          = 22")
h_lines.append("} AI_e_Operator;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 6: AI Conditions Enum (160 Entries, 0 .. 159)")
h_lines.append(" * Dispatched via AI_a_pfn_vConditionTable (DC 0x8C0C96A8 / PC 0x004A5EE0)")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_Condition_ {")
for idx, name, params, desc in CONDITIONS:
    h_lines.append(f"    {name:42s} = {idx:3d},")
h_lines.append("    AI_CONDITION_COUNT                         = 160")
h_lines.append("} AI_e_Condition;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 7: AI Procedures Enum (522 Entries, 0 .. 521)")
h_lines.append(" * Dispatched via DsaCom / AI Procedure Dispatcher")
h_lines.append(" * Note: Procedures 506 (Proc_SetAGO) & 507 (Proc_ActivateMenuMap) manage 3D Hub")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_Procedure_ {")
for idx, name, params, desc in PROCEDURES:
    h_lines.append(f"    {name:42s} = {idx:3d},")
h_lines.append("    AI_PROCEDURE_COUNT                         = 522")
h_lines.append("} AI_e_Procedure;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 8: AI Functions Enum (267 Entries, 0 .. 266)")
h_lines.append(" * Dispatched via AI Function Evaluation Table (DC 0x8C0CB838 / PC 0x004A6398)")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef enum AI_e_Function_ {")
for idx, name, params, desc in FUNCTIONS:
    h_lines.append(f"    {name:42s} = {idx:3d},")
h_lines.append("    AI_FUNCTION_COUNT                          = 267")
h_lines.append("} AI_e_Function;")
h_lines.append("")
h_lines.append("/* ----------------------------------------------------------------------------")
h_lines.append(" * Section 9: Opcode Metadata Structures & Mapping Tables")
h_lines.append(" * ---------------------------------------------------------------------------- */")
h_lines.append("typedef struct AI_tdstOpcodeInfo_ {")
h_lines.append("    uint32_t        ulOpcodeId;")
h_lines.append("    const char     *szName;")
h_lines.append("    const char     *szParamTypes;")
h_lines.append("    const char     *szDescription;")
h_lines.append("} AI_tdstOpcodeInfo;")
h_lines.append("")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAINodeInfo[AI_NODE_COUNT];")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAIKeywordInfo[AI_KEYWORD_COUNT];")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAIOperatorInfo[AI_OPERATOR_COUNT];")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAIConditionInfo[AI_CONDITION_COUNT];")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAIProcedureInfo[AI_PROCEDURE_COUNT];")
h_lines.append("extern const AI_tdstOpcodeInfo g_a_stAIFunctionInfo[AI_FUNCTION_COUNT];")
h_lines.append("")
h_lines.append("/* Utility Resolution Functions */")
h_lines.append("const char* AI_fn_szGetNodeName(AI_e_NodeType eType);")
h_lines.append("const char* AI_fn_szGetConditionName(AI_e_Condition eCondition);")
h_lines.append("const char* AI_fn_szGetProcedureName(AI_e_Procedure eProcedure);")
h_lines.append("const char* AI_fn_szGetFunctionName(AI_e_Function eFunction);")
h_lines.append("float       AI_fn_fGetDeltaTime60FPS(void);")
h_lines.append("float       AI_fn_fClampDeltaTime(float fDeltaTime);")
h_lines.append("")
h_lines.append("#ifdef __cplusplus")
h_lines.append("}")
h_lines.append("#endif")
h_lines.append("")
h_lines.append("#endif /* R2_AI_TABLES_H */")
h_lines.append("")

with open(OUTPUT_HEADER, "w") as f:
    f.write("\n".join(h_lines))
print(f"Wrote {OUTPUT_HEADER} ({len(h_lines)} lines).")

# Build C Source
c_lines = []
c_lines.append("/* ============================================================================")
c_lines.append(" * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)")
c_lines.append(" * File: r2_ai_tables.c")
c_lines.append(" * Metadata & Callback Tables Implementation")
c_lines.append(" * ============================================================================ */")
c_lines.append("")
c_lines.append('#include "vita_shim/r2_ai_tables.h"')
c_lines.append("")
c_lines.append("/* Node Types Metadata */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAINodeInfo[AI_NODE_COUNT] = {")
for idx, sym, name, desc in NODE_TYPES:
    c_lines.append(f'    {{ {idx:2d}, "{sym}", "{name}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("/* Keywords Metadata */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAIKeywordInfo[AI_KEYWORD_COUNT] = {")
for i, (sym, kw, desc) in enumerate(KEYWORDS):
    c_lines.append(f'    {{ {i:2d}, "{sym}", "{kw}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("/* Operators Metadata */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAIOperatorInfo[AI_OPERATOR_COUNT] = {")
for i, (sym, op, desc) in enumerate(OPERATORS):
    c_lines.append(f'    {{ {i:2d}, "{sym}", "{op}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("/* Conditions Metadata (160 Entries matching Dreamcast 0x8C0C96A8) */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAIConditionInfo[AI_CONDITION_COUNT] = {")
for idx, name, params, desc in CONDITIONS:
    c_lines.append(f'    {{ {idx:3d}, "{name}", "{params}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("/* Procedures Metadata (522 Entries) */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAIProcedureInfo[AI_PROCEDURE_COUNT] = {")
for idx, name, params, desc in PROCEDURES:
    c_lines.append(f'    {{ {idx:3d}, "{name}", "{params}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("/* Functions Metadata (267 Entries) */")
c_lines.append("const AI_tdstOpcodeInfo g_a_stAIFunctionInfo[AI_FUNCTION_COUNT] = {")
for idx, name, params, desc in FUNCTIONS:
    c_lines.append(f'    {{ {idx:3d}, "{name}", "{params}", "{desc}" }},')
c_lines.append("};")
c_lines.append("")
c_lines.append("const char* AI_fn_szGetNodeName(AI_e_NodeType eType) {")
c_lines.append("    if ((uint32_t)eType < AI_NODE_COUNT) return g_a_stAINodeInfo[eType].szName;")
c_lines.append('    return "UnknownNode";')
c_lines.append("}")
c_lines.append("")
c_lines.append("const char* AI_fn_szGetConditionName(AI_e_Condition eCondition) {")
c_lines.append("    if ((uint32_t)eCondition < AI_CONDITION_COUNT) return g_a_stAIConditionInfo[eCondition].szName;")
c_lines.append('    return "UnknownCondition";')
c_lines.append("}")
c_lines.append("")
c_lines.append("const char* AI_fn_szGetProcedureName(AI_e_Procedure eProcedure) {")
c_lines.append("    if ((uint32_t)eProcedure < AI_PROCEDURE_COUNT) return g_a_stAIProcedureInfo[eProcedure].szName;")
c_lines.append('    return "UnknownProcedure";')
c_lines.append("}")
c_lines.append("")
c_lines.append("const char* AI_fn_szGetFunctionName(AI_e_Function eFunction) {")
c_lines.append("    if ((uint32_t)eFunction < AI_FUNCTION_COUNT) return g_a_stAIFunctionInfo[eFunction].szName;")
c_lines.append('    return "UnknownFunction";')
c_lines.append("}")
c_lines.append("")
c_lines.append("float AI_fn_fGetDeltaTime60FPS(void) {")
c_lines.append("    return R2_AI_VITA_DELTA_TIME;")
c_lines.append("}")
c_lines.append("")
c_lines.append("float AI_fn_fClampDeltaTime(float fDeltaTime) {")
c_lines.append("    if (fDeltaTime < R2_AI_DT_MIN_CLAMP) return R2_AI_DT_MIN_CLAMP;")
c_lines.append("    if (fDeltaTime > R2_AI_DT_MAX_CLAMP) return R2_AI_DT_MAX_CLAMP;")
c_lines.append("    return fDeltaTime;")
c_lines.append("}")
c_lines.append("")

os.makedirs("src/platform/vita", exist_ok=True)
with open(OUTPUT_SOURCE, "w") as f:
    f.write("\n".join(c_lines))
print(f"Wrote {OUTPUT_SOURCE} ({len(c_lines)} lines).")
