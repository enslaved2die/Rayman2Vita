/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: cpa_mth.h
 *
 * CPA Engine Core Mathematical Subsystem (MTH & MTH3D)
 * - Grounded on standard IEEE-754 32-bit single-precision float (MTH_tdx_Real).
 * - Complete independence and neutralization of Nintendo DS fixed-point (fx32).
 * - Ground truth 60.0 FPS native delta-time & physics cadence (1.0f / 60.0f).
 * - High-performance 3D Vector (MTH3D_Vector) & 4x4 Matrix (MTH3D_Matrix).
 * - Compatible with ARM Cortex-A9 NEON and VFPv3-D32 hardware acceleration.
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef CPA_MTH_H
#define CPA_MTH_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Fundamental Scalar Type Definition & Precision Configuration
 * ---------------------------------------------------------------------------- */
#ifndef MTH_USE_FLOAT
#define MTH_USE_FLOAT 1
#endif

/* CPA Real is single-precision 32-bit IEEE-754 float */
typedef float MTH_tdx_Real;

/* Standard Mathematical Constants */
#define MTH_C_f_Zero                     0.0f
#define MTH_C_f_One                      1.0f
#define MTH_C_f_Half                     0.5f
#define MTH_C_f_Two                      2.0f
#define MTH_C_f_Pi                       3.14159265358979323846f
#define MTH_C_f_2Pi                      6.28318530717958647692f
#define MTH_C_f_HalfPi                   1.57079632679489661923f
#define MTH_C_f_QuarterPi                0.78539816339744830962f
#define MTH_C_f_InvPi                    0.31830988618379067154f
#define MTH_C_f_DegToRad                 0.01745329251994329577f  /* (Pi / 180.0f) */
#define MTH_C_f_RadToDeg                 57.2957795130823208768f   /* (180.0f / Pi) */
#define MTH_C_f_Epsilon                  1.0e-6f
#define MTH_C_f_Sqrt2                    1.41421356237309504880f

/* ----------------------------------------------------------------------------
 * 2. Dreamcast 60 FPS Native Cadence & Frame-Rate Baseline
 * ---------------------------------------------------------------------------- */
/* Ground Truth Dreamcast SH-4 constants:
 *   0x8C010B44 -> 60.0f (NTSC native)
 *   0x8C010B50 -> 50.0f (PAL target)
 *   0x8C025384 -> 15.0f (Min FPS clamp -> max delta-time: 0.066666667s)
 *   0x8C025390 -> 60.0f (Max FPS clamp -> min delta-time: 0.016666667s)
 */
#define MTH_C_TARGET_FPS                 60.0f
#define MTH_C_TARGET_DELTA_TIME          (1.0f / 60.0f)            /* 0.016666667f sec */
#define MTH_C_FPS_MIN_CLAMP              15.0f
#define MTH_C_FPS_MAX_CLAMP              60.0f
#define MTH_C_DT_MAX_CLAMP               (1.0f / 15.0f)            /* 0.066666667f sec */
#define MTH_C_DT_MIN_CLAMP               (1.0f / 60.0f)            /* 0.016666667f sec */

/* Physics step scaling factor: at native 60 Hz on Vita, factor is exactly 1.0f */
#define MTH_C_PHYSICS_TICK_SCALE_60HZ    1.0f
#define MTH_C_DEFAULT_GRAVITY            -28.0f
#define MTH_C_TERMINAL_VELOCITY          -60.0f

static inline MTH_tdx_Real MTH_fn_fDeltaTimeFromFPS(MTH_tdx_Real fFps)
{
    if (fFps <= 0.0f) return MTH_C_TARGET_DELTA_TIME;
    return 1.0f / fFps;
}

static inline MTH_tdx_Real MTH_fn_fClampDeltaTime(MTH_tdx_Real fDeltaTime)
{
    if (fDeltaTime < MTH_C_DT_MIN_CLAMP) return MTH_C_DT_MIN_CLAMP;
    if (fDeltaTime > MTH_C_DT_MAX_CLAMP) return MTH_C_DT_MAX_CLAMP;
    return fDeltaTime;
}

/* ----------------------------------------------------------------------------
 * 3. Neutralization & Float-Mapping for Nintendo DS Fixed-Point (fx32) Macros
 * ---------------------------------------------------------------------------- */
#undef FX32
#undef fx32
#undef FX_Mul
#undef FX_Div
#undef FX_Sqrt
#undef FX_Inv
#undef FX_SinFx32
#undef FX_CosFx32
#undef FX32_CONST
#undef FX32_ONE
#undef FX32_HALF
#undef FX_F32_TO_FX32
#undef FX_FX32_TO_F32

typedef MTH_tdx_Real                     fx32;
typedef MTH_tdx_Real                     FX32;

#define FX32_ONE                         1.0f
#define FX32_HALF                        0.5f
#define FX32_CONST(val)                  ((MTH_tdx_Real)(val))
#define FX_Mul(a, b)                     ((MTH_tdx_Real)(a) * (MTH_tdx_Real)(b))
#define FX_Div(a, b)                     ((MTH_tdx_Real)(a) / (MTH_tdx_Real)(b))
#define FX_Sqrt(a)                       sqrtf((MTH_tdx_Real)(a))
#define FX_Inv(a)                        (1.0f / (MTH_tdx_Real)(a))
#define FX_F32_TO_FX32(val)              ((MTH_tdx_Real)(val))
#define FX_FX32_TO_F32(val)              ((MTH_tdx_Real)(val))
#define FX_SinFx32(rad)                  sinf((MTH_tdx_Real)(rad))
#define FX_CosFx32(rad)                  cosf((MTH_tdx_Real)(rad))

/* ----------------------------------------------------------------------------
 * 4. 3D Vector Structure & Vector Operations (MTH3D_Vector / MTH3D_tdstVector)
 * ---------------------------------------------------------------------------- */
#ifndef _MTH3D_TDSTVECTOR_DEFINED_
#define _MTH3D_TDSTVECTOR_DEFINED_
typedef struct MTH3D_tdstVector_ {
    union {
        struct {
            MTH_tdx_Real x;
            MTH_tdx_Real y;
            MTH_tdx_Real z;
        };
        MTH_tdx_Real v[3];
    };
} MTH3D_tdstVector;
#endif

typedef MTH3D_tdstVector MTH3D_Vector;

/* 4D Vector / Homogeneous Coordinates */
typedef struct MTH4D_tdstVector_ {
    union {
        struct {
            MTH_tdx_Real x;
            MTH_tdx_Real y;
            MTH_tdx_Real z;
            MTH_tdx_Real w;
        };
        MTH_tdx_Real v[4];
    };
} MTH4D_tdstVector;

typedef MTH4D_tdstVector MTH4D_Vector;

/* Vector Initialization & Assignment */
static inline void MTH3D_vInitVector(MTH3D_Vector *dst, MTH_tdx_Real x, MTH_tdx_Real y, MTH_tdx_Real z)
{
    dst->x = x;
    dst->y = y;
    dst->z = z;
}

static inline void MTH3D_vSetVector(MTH3D_Vector *dst, const MTH3D_Vector *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static inline void MTH3D_vSetZeroVector(MTH3D_Vector *dst)
{
    dst->x = 0.0f;
    dst->y = 0.0f;
    dst->z = 0.0f;
}

/* Vector Addition: dst = v1 + v2 */
static inline void MTH3D_vAddVector(MTH3D_Vector *dst, const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    dst->x = v1->x + v2->x;
    dst->y = v1->y + v2->y;
    dst->z = v1->z + v2->z;
}

/* Vector Subtraction: dst = v1 - v2 */
static inline void MTH3D_vSubVector(MTH3D_Vector *dst, const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    dst->x = v1->x - v2->x;
    dst->y = v1->y - v2->y;
    dst->z = v1->z - v2->z;
}

/* Vector Dot Product: v1 . v2 */
static inline MTH_tdx_Real MTH3D_fn_fDotProduct(const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}

/* Vector Cross Product: dst = v1 x v2 */
static inline void MTH3D_vCrossProduct(MTH3D_Vector *dst, const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    MTH_tdx_Real rx = (v1->y * v2->z) - (v1->z * v2->y);
    MTH_tdx_Real ry = (v1->z * v2->x) - (v1->x * v2->z);
    MTH_tdx_Real rz = (v1->x * v2->y) - (v1->y * v2->x);
    dst->x = rx;
    dst->y = ry;
    dst->z = rz;
}

/* Squared Length: |v|^2 */
static inline MTH_tdx_Real MTH3D_fn_fSquareLength(const MTH3D_Vector *v)
{
    return (v->x * v->x) + (v->y * v->y) + (v->z * v->z);
}

/* Length (Euclidean Norm): |v| */
static inline MTH_tdx_Real MTH3D_fn_fLength(const MTH3D_Vector *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

/* Vector Normalization: dst = v / |v| */
static inline void MTH3D_vNormalize(MTH3D_Vector *dst, const MTH3D_Vector *v)
{
    MTH_tdx_Real sqLen = MTH3D_fn_fSquareLength(v);
    if (sqLen > 1.0e-12f) {
        MTH_tdx_Real invLen = 1.0f / sqrtf(sqLen);
        dst->x = v->x * invLen;
        dst->y = v->y * invLen;
        dst->z = v->z * invLen;
    } else {
        dst->x = 0.0f;
        dst->y = 0.0f;
        dst->z = 0.0f;
    }
}

/* Scalar Multiplication: dst = v * scale */
static inline void MTH3D_vScaleVector(MTH3D_Vector *dst, const MTH3D_Vector *v, MTH_tdx_Real scale)
{
    dst->x = v->x * scale;
    dst->y = v->y * scale;
    dst->z = v->z * scale;
}

/* Add Scaled Vector: dst = v1 + (v2 * scale) */
static inline void MTH3D_vAddScaledVector(MTH3D_Vector *dst, const MTH3D_Vector *v1, const MTH3D_Vector *v2, MTH_tdx_Real scale)
{
    dst->x = v1->x + (v2->x * scale);
    dst->y = v1->y + (v2->y * scale);
    dst->z = v1->z + (v2->z * scale);
}

/* Squared Distance between points: |v1 - v2|^2 */
static inline MTH_tdx_Real MTH3D_fn_fSquareDistance(const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    MTH_tdx_Real dx = v1->x - v2->x;
    MTH_tdx_Real dy = v1->y - v2->y;
    MTH_tdx_Real dz = v1->z - v2->z;
    return (dx * dx) + (dy * dy) + (dz * dz);
}

/* Distance between points: |v1 - v2| */
static inline MTH_tdx_Real MTH3D_fn_fDistance(const MTH3D_Vector *v1, const MTH3D_Vector *v2)
{
    return sqrtf(MTH3D_fn_fSquareDistance(v1, v2));
}

/* Negate Vector: dst = -v */
static inline void MTH3D_vNegateVector(MTH3D_Vector *dst, const MTH3D_Vector *v)
{
    dst->x = -v->x;
    dst->y = -v->y;
    dst->z = -v->z;
}

/* Check if vector is zero within epsilon */
static inline bool MTH3D_bIsVectorZero(const MTH3D_Vector *v, MTH_tdx_Real eps)
{
    return (fabsf(v->x) <= eps) && (fabsf(v->y) <= eps) && (fabsf(v->z) <= eps);
}

/* Linear Interpolation: dst = v1 + (v2 - v1) * t */
static inline void MTH3D_vLerpVector(MTH3D_Vector *dst, const MTH3D_Vector *v1, const MTH3D_Vector *v2, MTH_tdx_Real t)
{
    dst->x = v1->x + (v2->x - v1->x) * t;
    dst->y = v1->y + (v2->y - v1->y) * t;
    dst->z = v1->z + (v2->z - v1->z) * t;
}

/* ----------------------------------------------------------------------------
 * 5. 4x4 Matrix Structure & Operations (MTH3D_Matrix / MTH3D_tdstMatrix)
 * ---------------------------------------------------------------------------- */
/* CPA Matrix Type Flags (POS module metadata) */
#define MTH_MAT_TYPE_IDENTITY            0x0001U
#define MTH_MAT_TYPE_TRANSLATION         0x0002U
#define MTH_MAT_TYPE_ROTATION            0x0004U
#define MTH_MAT_TYPE_SCALE               0x0008U
#define MTH_MAT_TYPE_AFFINE              0x0010U
#define MTH_MAT_TYPE_PROJECTION          0x0020U

#ifndef _MTH3D_TDSTMATRIX_DEFINED_
#define _MTH3D_TDSTMATRIX_DEFINED_
typedef struct MTH3D_tdstMatrix_ {
    union {
        /* Standard 4x4 row-column layout: m[row][col] */
        struct {
            MTH_tdx_Real m00, m01, m02, m03;
            MTH_tdx_Real m10, m11, m12, m13;
            MTH_tdx_Real m20, m21, m22, m23;
            MTH_tdx_Real m30, m31, m32, m33;
        };
        MTH_tdx_Real m[4][4];
        MTH_tdx_Real a[16];
    };
    uint32_t ulType;
} MTH3D_tdstMatrix;
#endif

typedef MTH3D_tdstMatrix MTH3D_Matrix;

/* CPA Engine Complete Position Structure (POS module ground truth) */
typedef struct POS_tdstPosition_ {
    uint32_t         ulType;
    MTH3D_tdstVector stTranslation;
    MTH_tdx_Real     stRotation[3][3];
    MTH_tdx_Real     stScale[3][3];
} POS_tdstPosition;

typedef POS_tdstPosition POS_stCompletePosition;

/* Set Matrix to 4x4 Identity */
static inline void MTH3D_vSetIdentityMatrix(MTH3D_Matrix *m)
{
    m->m00 = 1.0f; m->m01 = 0.0f; m->m02 = 0.0f; m->m03 = 0.0f;
    m->m10 = 0.0f; m->m11 = 1.0f; m->m12 = 0.0f; m->m13 = 0.0f;
    m->m20 = 0.0f; m->m21 = 0.0f; m->m22 = 1.0f; m->m23 = 0.0f;
    m->m30 = 0.0f; m->m31 = 0.0f; m->m32 = 0.0f; m->m33 = 1.0f;
    m->ulType = MTH_MAT_TYPE_IDENTITY;
}

/* Check if matrix is Identity */
static inline bool MTH3D_bIsIdentityMatrix(const MTH3D_Matrix *m, MTH_tdx_Real eps)
{
    if (fabsf(m->m00 - 1.0f) > eps || fabsf(m->m11 - 1.0f) > eps ||
        fabsf(m->m22 - 1.0f) > eps || fabsf(m->m33 - 1.0f) > eps)
        return false;

    if (fabsf(m->m01) > eps || fabsf(m->m02) > eps || fabsf(m->m03) > eps ||
        fabsf(m->m10) > eps || fabsf(m->m12) > eps || fabsf(m->m13) > eps ||
        fabsf(m->m20) > eps || fabsf(m->m21) > eps || fabsf(m->m23) > eps ||
        fabsf(m->m30) > eps || fabsf(m->m31) > eps || fabsf(m->m32) > eps)
        return false;

    return true;
}

/* Set Translation Matrix */
static inline void MTH3D_vSetTranslationMatrix(MTH3D_Matrix *m, MTH_tdx_Real tx, MTH_tdx_Real ty, MTH_tdx_Real tz)
{
    MTH3D_vSetIdentityMatrix(m);
    m->m03 = tx;
    m->m13 = ty;
    m->m23 = tz;
    m->ulType = MTH_MAT_TYPE_TRANSLATION;
}

/* Set Scale Matrix */
static inline void MTH3D_vSetScaleMatrix(MTH3D_Matrix *m, MTH_tdx_Real sx, MTH_tdx_Real sy, MTH_tdx_Real sz)
{
    MTH3D_vSetIdentityMatrix(m);
    m->m00 = sx;
    m->m11 = sy;
    m->m22 = sz;
    m->ulType = MTH_MAT_TYPE_SCALE;
}

/* Rotation around X-axis (Pitch) */
static inline void MTH3D_vSetRotationXMatrix(MTH3D_Matrix *m, MTH_tdx_Real angleRad)
{
    MTH_tdx_Real c = cosf(angleRad);
    MTH_tdx_Real s = sinf(angleRad);
    MTH3D_vSetIdentityMatrix(m);
    m->m11 = c;
    m->m12 = -s;
    m->m21 = s;
    m->m22 = c;
    m->ulType = MTH_MAT_TYPE_ROTATION;
}

/* Rotation around Y-axis (Yaw) */
static inline void MTH3D_vSetRotationYMatrix(MTH3D_Matrix *m, MTH_tdx_Real angleRad)
{
    MTH_tdx_Real c = cosf(angleRad);
    MTH_tdx_Real s = sinf(angleRad);
    MTH3D_vSetIdentityMatrix(m);
    m->m00 = c;
    m->m02 = s;
    m->m20 = -s;
    m->m22 = c;
    m->ulType = MTH_MAT_TYPE_ROTATION;
}

/* Rotation around Z-axis (Roll) */
static inline void MTH3D_vSetRotationZMatrix(MTH3D_Matrix *m, MTH_tdx_Real angleRad)
{
    MTH_tdx_Real c = cosf(angleRad);
    MTH_tdx_Real s = sinf(angleRad);
    MTH3D_vSetIdentityMatrix(m);
    m->m00 = c;
    m->m01 = -s;
    m->m10 = s;
    m->m11 = c;
    m->ulType = MTH_MAT_TYPE_ROTATION;
}

/* Rotation around Arbitrary Axis (Rodrigues' rotation formula) */
static inline void MTH3D_vSetRotationAxisMatrix(MTH3D_Matrix *m, const MTH3D_Vector *axis, MTH_tdx_Real angleRad)
{
    MTH3D_Vector normAxis;
    MTH3D_vNormalize(&normAxis, axis);

    MTH_tdx_Real c = cosf(angleRad);
    MTH_tdx_Real s = sinf(angleRad);
    MTH_tdx_Real omc = 1.0f - c;

    MTH_tdx_Real x = normAxis.x;
    MTH_tdx_Real y = normAxis.y;
    MTH_tdx_Real z = normAxis.z;

    m->m00 = c + x * x * omc;
    m->m01 = x * y * omc - z * s;
    m->m02 = x * z * omc + y * s;
    m->m03 = 0.0f;

    m->m10 = y * x * omc + z * s;
    m->m11 = c + y * y * omc;
    m->m12 = y * z * omc - x * s;
    m->m13 = 0.0f;

    m->m20 = z * x * omc - y * s;
    m->m21 = z * y * omc + x * s;
    m->m22 = c + z * z * omc;
    m->m23 = 0.0f;

    m->m30 = 0.0f;
    m->m31 = 0.0f;
    m->m32 = 0.0f;
    m->m33 = 1.0f;
    m->ulType = MTH_MAT_TYPE_ROTATION;
}

/* 4x4 Matrix Multiplication: dst = m1 * m2 */
static inline void MTH3D_vMulMatrixMatrix(MTH3D_Matrix *dst, const MTH3D_Matrix *m1, const MTH3D_Matrix *m2)
{
    MTH3D_Matrix tmp;
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            tmp.m[r][c] = (m1->m[r][0] * m2->m[0][c]) +
                          (m1->m[r][1] * m2->m[1][c]) +
                          (m1->m[r][2] * m2->m[2][c]) +
                          (m1->m[r][3] * m2->m[3][c]);
        }
    }
    tmp.ulType = m1->ulType | m2->ulType;
    memcpy(dst, &tmp, sizeof(MTH3D_Matrix));
}

/* Transform 3D Point Vector: dst = m * (x, y, z, 1.0f) */
static inline void MTH3D_vMulMatrixVector(MTH3D_Vector *dst, const MTH3D_Matrix *m, const MTH3D_Vector *v)
{
    MTH_tdx_Real rx = (m->m00 * v->x) + (m->m01 * v->y) + (m->m02 * v->z) + m->m03;
    MTH_tdx_Real ry = (m->m10 * v->x) + (m->m11 * v->y) + (m->m12 * v->z) + m->m13;
    MTH_tdx_Real rz = (m->m20 * v->x) + (m->m21 * v->y) + (m->m22 * v->z) + m->m23;
    MTH_tdx_Real rw = (m->m30 * v->x) + (m->m31 * v->y) + (m->m32 * v->z) + m->m33;

    if (fabsf(rw - 1.0f) > 1.0e-7f && fabsf(rw) > 1.0e-12f) {
        MTH_tdx_Real invW = 1.0f / rw;
        dst->x = rx * invW;
        dst->y = ry * invW;
        dst->z = rz * invW;
    } else {
        dst->x = rx;
        dst->y = ry;
        dst->z = rz;
    }
}

/* Transform Direction Vector: dst = m * (x, y, z, 0.0f) [ignores translation] */
static inline void MTH3D_vMulMatrixDirection(MTH3D_Vector *dst, const MTH3D_Matrix *m, const MTH3D_Vector *v)
{
    MTH_tdx_Real rx = (m->m00 * v->x) + (m->m01 * v->y) + (m->m02 * v->z);
    MTH_tdx_Real ry = (m->m10 * v->x) + (m->m11 * v->y) + (m->m12 * v->z);
    MTH_tdx_Real rz = (m->m20 * v->x) + (m->m21 * v->y) + (m->m22 * v->z);
    dst->x = rx;
    dst->y = ry;
    dst->z = rz;
}

/* Transpose Matrix */
static inline void MTH3D_vTransposeMatrix(MTH3D_Matrix *dst, const MTH3D_Matrix *src)
{
    MTH3D_Matrix tmp;
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            tmp.m[r][c] = src->m[c][r];
        }
    }
    tmp.ulType = src->ulType;
    memcpy(dst, &tmp, sizeof(MTH3D_Matrix));
}

/* Full 4x4 Matrix Inversion using Analytic Cofactors (Cramer's rule) */
static inline bool MTH3D_bInvertMatrix(MTH3D_Matrix *dst, const MTH3D_Matrix *src)
{
    const MTH_tdx_Real *m = src->a;
    MTH_tdx_Real inv[16];

    inv[0] = m[5] * m[10] * m[15] - m[5] * m[11] * m[14] - m[9] * m[6] * m[15] +
             m[9] * m[7] * m[14] + m[13] * m[6] * m[11] - m[13] * m[7] * m[10];
    inv[4] = -m[4] * m[10] * m[15] + m[4] * m[11] * m[14] + m[8] * m[6] * m[15] -
             m[8] * m[7] * m[14] - m[12] * m[6] * m[11] + m[12] * m[7] * m[10];
    inv[8] = m[4] * m[9] * m[15] - m[4] * m[11] * m[13] - m[8] * m[5] * m[15] +
             m[8] * m[7] * m[13] + m[12] * m[5] * m[11] - m[12] * m[7] * m[9];
    inv[12] = -m[4] * m[9] * m[14] + m[4] * m[10] * m[13] + m[8] * m[5] * m[14] -
              m[8] * m[6] * m[13] - m[12] * m[5] * m[10] + m[12] * m[6] * m[9];

    inv[1] = -m[1] * m[10] * m[15] + m[1] * m[11] * m[14] + m[9] * m[2] * m[15] -
             m[9] * m[3] * m[14] - m[13] * m[2] * m[11] + m[13] * m[3] * m[10];
    inv[5] = m[0] * m[10] * m[15] - m[0] * m[11] * m[14] - m[8] * m[2] * m[15] +
             m[8] * m[3] * m[14] + m[12] * m[2] * m[11] - m[12] * m[3] * m[10];
    inv[9] = -m[0] * m[9] * m[15] + m[0] * m[11] * m[13] + m[8] * m[1] * m[15] -
             m[8] * m[3] * m[13] - m[12] * m[1] * m[11] + m[12] * m[3] * m[9];
    inv[13] = m[0] * m[9] * m[14] - m[0] * m[10] * m[13] - m[8] * m[1] * m[14] +
              m[8] * m[2] * m[13] + m[12] * m[1] * m[10] - m[12] * m[2] * m[9];

    inv[2] = m[1] * m[6] * m[15] - m[1] * m[7] * m[14] - m[5] * m[2] * m[15] +
             m[5] * m[3] * m[14] + m[13] * m[2] * m[7] - m[13] * m[3] * m[6];
    inv[6] = -m[0] * m[6] * m[15] + m[0] * m[7] * m[14] + m[4] * m[2] * m[15] -
             m[4] * m[3] * m[14] - m[12] * m[2] * m[7] + m[12] * m[3] * m[6];
    inv[10] = m[0] * m[5] * m[15] - m[0] * m[7] * m[13] - m[4] * m[1] * m[15] +
              m[4] * m[3] * m[13] + m[12] * m[1] * m[7] - m[12] * m[3] * m[5];
    inv[14] = -m[0] * m[5] * m[14] + m[0] * m[6] * m[13] + m[4] * m[1] * m[14] -
               m[4] * m[2] * m[13] - m[12] * m[1] * m[6] + m[12] * m[2] * m[5];

    inv[3] = -m[1] * m[6] * m[11] + m[1] * m[7] * m[10] + m[5] * m[2] * m[11] -
             m[5] * m[3] * m[10] - m[9] * m[2] * m[7] + m[9] * m[3] * m[6];
    inv[7] = m[0] * m[6] * m[11] - m[0] * m[7] * m[10] - m[4] * m[2] * m[11] +
             m[4] * m[3] * m[10] + m[8] * m[2] * m[7] - m[8] * m[3] * m[6];
    inv[11] = -m[0] * m[5] * m[11] + m[0] * m[7] * m[9] + m[4] * m[1] * m[11] -
              m[4] * m[3] * m[9] - m[8] * m[1] * m[7] + m[8] * m[3] * m[5];
    inv[15] = m[0] * m[5] * m[10] - m[0] * m[6] * m[9] - m[4] * m[1] * m[10] +
              m[4] * m[2] * m[9] + m[8] * m[1] * m[6] - m[8] * m[2] * m[5];

    MTH_tdx_Real det = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];
    if (fabsf(det) < 1.0e-12f) {
        return false;
    }

    MTH_tdx_Real invDet = 1.0f / det;
    for (int i = 0; i < 16; i++) {
        dst->a[i] = inv[i] * invDet;
    }
    dst->ulType = src->ulType;
    return true;
}

/* Fast Inversion for Affine Isometry Matrices (Orthogonal Rotation + Translation) */
static inline void MTH3D_vInvertAffineMatrix(MTH3D_Matrix *dst, const MTH3D_Matrix *src)
{
    /* Transpose the 3x3 rotation portion */
    dst->m00 = src->m00; dst->m01 = src->m10; dst->m02 = src->m20;
    dst->m10 = src->m01; dst->m11 = src->m11; dst->m12 = src->m21;
    dst->m20 = src->m02; dst->m21 = src->m12; dst->m22 = src->m22;

    /* Invert translation: t' = -R^T * t */
    dst->m03 = -(dst->m00 * src->m03 + dst->m01 * src->m13 + dst->m02 * src->m23);
    dst->m13 = -(dst->m10 * src->m03 + dst->m11 * src->m13 + dst->m12 * src->m23);
    dst->m23 = -(dst->m20 * src->m03 + dst->m21 * src->m13 + dst->m22 * src->m23);

    /* Bottom row */
    dst->m30 = 0.0f;
    dst->m31 = 0.0f;
    dst->m32 = 0.0f;
    dst->m33 = 1.0f;
    dst->ulType = src->ulType;
}

/* ----------------------------------------------------------------------------
 * 6. Camera Projection & View Transformations (960x544 PS Vita 16:9 Baseline)
 * ---------------------------------------------------------------------------- */
#define VITA_SCREEN_WIDTH                960.0f
#define VITA_SCREEN_HEIGHT               544.0f
#define VITA_ASPECT_RATIO_16_9           (960.0f / 544.0f)         /* 1.764705882f */

/* Perspective Projection Matrix (matches OpenGL / vitaGL clip space: [-1, 1]) */
static inline void MTH3D_vSetPerspectiveMatrix(MTH3D_Matrix *m, MTH_tdx_Real fovYRad, MTH_tdx_Real aspect, MTH_tdx_Real zNear, MTH_tdx_Real zFar)
{
    MTH_tdx_Real tanHalfFov = tanf(fovYRad * 0.5f);
    memset(m, 0, sizeof(MTH3D_Matrix));

    m->m00 = 1.0f / (aspect * tanHalfFov);
    m->m11 = 1.0f / tanHalfFov;
    m->m22 = -(zFar + zNear) / (zFar - zNear);
    m->m23 = -(2.0f * zFar * zNear) / (zFar - zNear);
    m->m32 = -1.0f;
    m->ulType = MTH_MAT_TYPE_PROJECTION;
}

/* Orthographic Projection Matrix */
static inline void MTH3D_vSetOrthoMatrix(MTH3D_Matrix *m, MTH_tdx_Real left, MTH_tdx_Real right,
                                         MTH_tdx_Real bottom, MTH_tdx_Real top,
                                         MTH_tdx_Real zNear, MTH_tdx_Real zFar)
{
    memset(m, 0, sizeof(MTH3D_Matrix));
    m->m00 = 2.0f / (right - left);
    m->m11 = 2.0f / (top - bottom);
    m->m22 = -2.0f / (zFar - zNear);
    m->m03 = -(right + left) / (right - left);
    m->m13 = -(top + bottom) / (top - bottom);
    m->m23 = -(zFar + zNear) / (zFar - zNear);
    m->m33 = 1.0f;
    m->ulType = MTH_MAT_TYPE_PROJECTION;
}

/* Look-At Camera View Matrix */
static inline void MTH3D_vSetLookAtMatrix(MTH3D_Matrix *m, const MTH3D_Vector *eye,
                                          const MTH3D_Vector *target, const MTH3D_Vector *up)
{
    MTH3D_Vector f, s, u;

    /* Forward = normalize(target - eye) */
    MTH3D_vSubVector(&f, target, eye);
    MTH3D_vNormalize(&f, &f);

    /* Side = normalize(f x up) */
    MTH3D_vCrossProduct(&s, &f, up);
    MTH3D_vNormalize(&s, &s);

    /* Recalculated Up = s x f */
    MTH3D_vCrossProduct(&u, &s, &f);

    m->m00 = s.x;  m->m01 = s.y;  m->m02 = s.z;  m->m03 = -MTH3D_fn_fDotProduct(&s, eye);
    m->m10 = u.x;  m->m11 = u.y;  m->m12 = u.z;  m->m13 = -MTH3D_fn_fDotProduct(&u, eye);
    m->m20 = -f.x; m->m21 = -f.y; m->m22 = -f.z; m->m23 = MTH3D_fn_fDotProduct(&f, eye);
    m->m30 = 0.0f; m->m31 = 0.0f; m->m32 = 0.0f; m->m33 = 1.0f;
    m->ulType = MTH_MAT_TYPE_ROTATION | MTH_MAT_TYPE_TRANSLATION;
}

/* ----------------------------------------------------------------------------
 * 7. CPA Engine POS Module Bridge & Function Compatibility Shims
 * ---------------------------------------------------------------------------- */
static inline void POS_fn_vSetIdentityMatrix(MTH3D_Matrix *m)
{
    MTH3D_vSetIdentityMatrix(m);
}

static inline void POS_fn_vMulMatrixMatrix(MTH3D_Matrix *dst, const MTH3D_Matrix *m1, const MTH3D_Matrix *m2)
{
    MTH3D_vMulMatrixMatrix(dst, m1, m2);
}

static inline void POS_fn_vMulMatrixVector(MTH3D_Vector *dst, const MTH3D_Matrix *m, const MTH3D_Vector *v)
{
    MTH3D_vMulMatrixVector(dst, m, v);
}

static inline void POS_fn_vGetTranslationVector(const POS_tdstPosition *pos, MTH3D_Vector *dst)
{
    *dst = pos->stTranslation;
}

static inline void POS_fn_vSetTranslationVector(POS_tdstPosition *pos, const MTH3D_Vector *src)
{
    pos->stTranslation = *src;
}

static inline const MTH3D_Matrix *POS_fn_hGetMatrixIdentityConst(void)
{
    static const MTH3D_Matrix s_identity = {
        .m00 = 1.0f, .m01 = 0.0f, .m02 = 0.0f, .m03 = 0.0f,
        .m10 = 0.0f, .m11 = 1.0f, .m12 = 0.0f, .m13 = 0.0f,
        .m20 = 0.0f, .m21 = 0.0f, .m22 = 1.0f, .m23 = 0.0f,
        .m30 = 0.0f, .m31 = 0.0f, .m32 = 0.0f, .m33 = 1.0f,
        .ulType = MTH_MAT_TYPE_IDENTITY
    };
    return &s_identity;
}

#ifdef __cplusplus
}
#endif

#endif /* CPA_MTH_H */
