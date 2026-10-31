/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: test_mth.c
 *
 * Verification suite for CPA 60 FPS IEEE-754 Math Engine (Task 3.2)
 * Tests vector operations, 4x4 matrix transforms, perspective/camera math,
 * 60 FPS delta-time clamping, and Nintendo DS fx32 macro neutralization.
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>

#include "vita_shim/cpa_mth.h"

#define TEST_EPSILON 1.0e-4f

static int s_testsPassed = 0;
static int s_testsFailed = 0;

#define MTH_ASSERT(cond, msg) do { \
    if (cond) { \
        s_testsPassed++; \
    } else { \
        s_testsFailed++; \
        printf("FAILED: %s (line %d): %s\n", __FILE__, __LINE__, msg); \
    } \
} while(0)

#define MTH_ASSERT_NEAR(val1, val2, eps, msg) do { \
    float diff = fabsf((float)(val1) - (float)(val2)); \
    if (diff <= (eps)) { \
        s_testsPassed++; \
    } else { \
        s_testsFailed++; \
        printf("FAILED: %s (line %d): %s (expected %f, got %f, diff %f > %f)\n", \
               __FILE__, __LINE__, msg, (double)(val2), (double)(val1), (double)diff, (double)(eps)); \
    } \
} while(0)

/* ----------------------------------------------------------------------------
 * 1. Test Fundamental Types & Data Layout
 * ---------------------------------------------------------------------------- */
static void Test_TypesAndLayout(void)
{
    printf("[1/6] Testing Data Types & Layout...\n");

    /* MTH_tdx_Real must be 4-byte IEEE-754 float */
    MTH_ASSERT(sizeof(MTH_tdx_Real) == 4, "MTH_tdx_Real must be 4 bytes");

    /* MTH3D_Vector must be 12 bytes: 3 floats */
    MTH_ASSERT(sizeof(MTH3D_Vector) == 12, "MTH3D_Vector must be 12 bytes");
    MTH_ASSERT(sizeof(MTH3D_tdstVector) == 12, "MTH3D_tdstVector must be 12 bytes");

    /* Test union access: x, y, z and v[3] share memory */
    MTH3D_Vector v;
    v.x = 1.0f; v.y = 2.0f; v.z = 3.0f;
    MTH_ASSERT_NEAR(v.v[0], 1.0f, TEST_EPSILON, "v[0] == x");
    MTH_ASSERT_NEAR(v.v[1], 2.0f, TEST_EPSILON, "v[1] == y");
    MTH_ASSERT_NEAR(v.v[2], 3.0f, TEST_EPSILON, "v[2] == z");

    /* MTH3D_Matrix must contain 16 floats (64 bytes) */
    MTH_ASSERT(sizeof(((MTH3D_Matrix*)0)->m) == 64, "MTH3D_Matrix 4x4 array must be 64 bytes");
    MTH_ASSERT(sizeof(((MTH3D_Matrix*)0)->a) == 64, "MTH3D_Matrix 16-element array must be 64 bytes");

    /* Complete Position struct */
    MTH_ASSERT(sizeof(POS_tdstPosition) >= 84, "POS_tdstPosition contains translation and 3x3 matrices");
}

/* ----------------------------------------------------------------------------
 * 2. Test 3D Vector Math
 * ---------------------------------------------------------------------------- */
static void Test_VectorMath(void)
{
    printf("[2/6] Testing 3D Vector Math...\n");

    MTH3D_Vector a, b, c;
    MTH3D_vInitVector(&a, 3.0f, -4.0f, 5.0f);
    MTH3D_vInitVector(&b, 1.0f, 2.0f, -1.0f);

    /* Addition */
    MTH3D_vAddVector(&c, &a, &b);
    MTH_ASSERT_NEAR(c.x, 4.0f, TEST_EPSILON, "Vector Add X");
    MTH_ASSERT_NEAR(c.y, -2.0f, TEST_EPSILON, "Vector Add Y");
    MTH_ASSERT_NEAR(c.z, 4.0f, TEST_EPSILON, "Vector Add Z");

    /* Subtraction */
    MTH3D_vSubVector(&c, &a, &b);
    MTH_ASSERT_NEAR(c.x, 2.0f, TEST_EPSILON, "Vector Sub X");
    MTH_ASSERT_NEAR(c.y, -6.0f, TEST_EPSILON, "Vector Sub Y");
    MTH_ASSERT_NEAR(c.z, 6.0f, TEST_EPSILON, "Vector Sub Z");

    /* Dot Product */
    /* a . b = (3*1) + (-4*2) + (5*-1) = 3 - 8 - 5 = -10 */
    MTH_tdx_Real dot = MTH3D_fn_fDotProduct(&a, &b);
    MTH_ASSERT_NEAR(dot, -10.0f, TEST_EPSILON, "Dot Product");

    /* Cross Product */
    /* a x b:
       rx = (-4 * -1) - (5 * 2) = 4 - 10 = -6
       ry = (5 * 1) - (3 * -1) = 5 - (-3) = 8
       rz = (3 * 2) - (-4 * 1) = 6 - (-4) = 10
    */
    MTH3D_vCrossProduct(&c, &a, &b);
    MTH_ASSERT_NEAR(c.x, -6.0f, TEST_EPSILON, "Cross Product X");
    MTH_ASSERT_NEAR(c.y, 8.0f, TEST_EPSILON, "Cross Product Y");
    MTH_ASSERT_NEAR(c.z, 10.0f, TEST_EPSILON, "Cross Product Z");

    /* Cross product is orthogonal to both inputs */
    MTH_ASSERT_NEAR(MTH3D_fn_fDotProduct(&c, &a), 0.0f, TEST_EPSILON, "Cross product orthogonal to a");
    MTH_ASSERT_NEAR(MTH3D_fn_fDotProduct(&c, &b), 0.0f, TEST_EPSILON, "Cross product orthogonal to b");

    /* Length and Squared Length */
    MTH3D_Vector u;
    MTH3D_vInitVector(&u, 3.0f, 4.0f, 0.0f);
    MTH_ASSERT_NEAR(MTH3D_fn_fSquareLength(&u), 25.0f, TEST_EPSILON, "Squared length 3-4-5");
    MTH_ASSERT_NEAR(MTH3D_fn_fLength(&u), 5.0f, TEST_EPSILON, "Length 3-4-5");

    /* Normalization */
    MTH3D_Vector norm;
    MTH3D_vNormalize(&norm, &u);
    MTH_ASSERT_NEAR(norm.x, 0.6f, TEST_EPSILON, "Normalized X");
    MTH_ASSERT_NEAR(norm.y, 0.8f, TEST_EPSILON, "Normalized Y");
    MTH_ASSERT_NEAR(norm.z, 0.0f, TEST_EPSILON, "Normalized Z");
    MTH_ASSERT_NEAR(MTH3D_fn_fLength(&norm), 1.0f, TEST_EPSILON, "Normalized length is 1");

    /* Zero vector normalization safety */
    MTH3D_Vector zero;
    MTH3D_vSetZeroVector(&zero);
    MTH3D_vNormalize(&norm, &zero);
    MTH_ASSERT(norm.x == 0.0f && norm.y == 0.0f && norm.z == 0.0f, "Safe zero vector normalization");

    /* Scale & Add Scaled */
    MTH3D_vScaleVector(&c, &u, 2.0f);
    MTH_ASSERT_NEAR(c.x, 6.0f, TEST_EPSILON, "Scaled X");
    MTH_ASSERT_NEAR(c.y, 8.0f, TEST_EPSILON, "Scaled Y");

    MTH3D_vAddScaledVector(&c, &a, &b, 2.0f);
    /* (3 + 2*1, -4 + 2*2, 5 + 2*-1) = (5, 0, 3) */
    MTH_ASSERT_NEAR(c.x, 5.0f, TEST_EPSILON, "AddScaled X");
    MTH_ASSERT_NEAR(c.y, 0.0f, TEST_EPSILON, "AddScaled Y");
    MTH_ASSERT_NEAR(c.z, 3.0f, TEST_EPSILON, "AddScaled Z");

    /* Distance */
    MTH3D_Vector p1, p2;
    MTH3D_vInitVector(&p1, 1.0f, 1.0f, 1.0f);
    MTH3D_vInitVector(&p2, 4.0f, 5.0f, 1.0f);
    MTH_ASSERT_NEAR(MTH3D_fn_fSquareDistance(&p1, &p2), 25.0f, TEST_EPSILON, "Square Distance");
    MTH_ASSERT_NEAR(MTH3D_fn_fDistance(&p1, &p2), 5.0f, TEST_EPSILON, "Distance");

    /* Lerp */
    MTH3D_Vector lerp;
    MTH3D_vLerpVector(&lerp, &p1, &p2, 0.5f);
    MTH_ASSERT_NEAR(lerp.x, 2.5f, TEST_EPSILON, "Lerp X");
    MTH_ASSERT_NEAR(lerp.y, 3.0f, TEST_EPSILON, "Lerp Y");
    MTH_ASSERT_NEAR(lerp.z, 1.0f, TEST_EPSILON, "Lerp Z");
}

/* ----------------------------------------------------------------------------
 * 3. Test 4x4 Matrix Math & Transformations
 * ---------------------------------------------------------------------------- */
static void Test_MatrixMath(void)
{
    printf("[3/6] Testing 4x4 Matrix Math & Transformations...\n");

    MTH3D_Matrix id;
    MTH3D_vSetIdentityMatrix(&id);
    MTH_ASSERT(MTH3D_bIsIdentityMatrix(&id, TEST_EPSILON), "Identity check");

    /* Point vector transformed by identity must remain unchanged */
    MTH3D_Vector pt, out;
    MTH3D_vInitVector(&pt, 12.0f, -4.5f, 7.25f);
    MTH3D_vMulMatrixVector(&out, &id, &pt);
    MTH_ASSERT_NEAR(out.x, pt.x, TEST_EPSILON, "Identity transform X");
    MTH_ASSERT_NEAR(out.y, pt.y, TEST_EPSILON, "Identity transform Y");
    MTH_ASSERT_NEAR(out.z, pt.z, TEST_EPSILON, "Identity transform Z");

    /* Translation Matrix */
    MTH3D_Matrix tMat;
    MTH3D_vSetTranslationMatrix(&tMat, 10.0f, 20.0f, -5.0f);
    MTH3D_vMulMatrixVector(&out, &tMat, &pt);
    MTH_ASSERT_NEAR(out.x, pt.x + 10.0f, TEST_EPSILON, "Translation transform X");
    MTH_ASSERT_NEAR(out.y, pt.y + 20.0f, TEST_EPSILON, "Translation transform Y");
    MTH_ASSERT_NEAR(out.z, pt.z - 5.0f, TEST_EPSILON, "Translation transform Z");

    /* Direction vector transform should IGNORE translation */
    MTH3D_Vector dir;
    MTH3D_vInitVector(&dir, 1.0f, 0.0f, 0.0f);
    MTH3D_vMulMatrixDirection(&out, &tMat, &dir);
    MTH_ASSERT_NEAR(out.x, 1.0f, TEST_EPSILON, "Direction transform ignores tx");
    MTH_ASSERT_NEAR(out.y, 0.0f, TEST_EPSILON, "Direction transform ignores ty");
    MTH_ASSERT_NEAR(out.z, 0.0f, TEST_EPSILON, "Direction transform ignores tz");

    /* Scale Matrix */
    MTH3D_Matrix sMat;
    MTH3D_vSetScaleMatrix(&sMat, 2.0f, 0.5f, -1.0f);
    MTH3D_vMulMatrixVector(&out, &sMat, &pt);
    MTH_ASSERT_NEAR(out.x, 24.0f, TEST_EPSILON, "Scale transform X");
    MTH_ASSERT_NEAR(out.y, -2.25f, TEST_EPSILON, "Scale transform Y");
    MTH_ASSERT_NEAR(out.z, -7.25f, TEST_EPSILON, "Scale transform Z");

    /* Rotation Matrix (90 deg around Z-axis) */
    MTH3D_Matrix rzMat;
    MTH3D_vSetRotationZMatrix(&rzMat, MTH_C_f_HalfPi);
    MTH3D_vInitVector(&dir, 1.0f, 0.0f, 0.0f);
    MTH3D_vMulMatrixVector(&out, &rzMat, &dir);
    /* 90 deg rotation of (1,0,0) around Z -> (0, 1, 0) */
    MTH_ASSERT_NEAR(out.x, 0.0f, TEST_EPSILON, "RotZ (1,0,0) -> X=0");
    MTH_ASSERT_NEAR(out.y, 1.0f, TEST_EPSILON, "RotZ (1,0,0) -> Y=1");
    MTH_ASSERT_NEAR(out.z, 0.0f, TEST_EPSILON, "RotZ (1,0,0) -> Z=0");

    /* Rotation around arbitrary axis (90 deg around Y-axis) */
    MTH3D_Matrix ryAxis;
    MTH3D_Vector yAxis;
    MTH3D_vInitVector(&yAxis, 0.0f, 1.0f, 0.0f);
    MTH3D_vSetRotationAxisMatrix(&ryAxis, &yAxis, MTH_C_f_HalfPi);
    MTH3D_vMulMatrixVector(&out, &ryAxis, &dir);
    /* 90 deg rotation of (1,0,0) around Y -> (0, 0, -1) */
    MTH_ASSERT_NEAR(out.x, 0.0f, TEST_EPSILON, "RotAxis (1,0,0) -> X=0");
    MTH_ASSERT_NEAR(out.y, 0.0f, TEST_EPSILON, "RotAxis (1,0,0) -> Y=0");
    MTH_ASSERT_NEAR(out.z, -1.0f, TEST_EPSILON, "RotAxis (1,0,0) -> Z=-1");

    /* Matrix Multiplication: composite = translation * rotation */
    MTH3D_Matrix comp;
    MTH3D_vMulMatrixMatrix(&comp, &tMat, &rzMat);
    MTH3D_vMulMatrixVector(&out, &comp, &dir);
    /* RZ turns (1,0,0) into (0,1,0), then T adds (10, 20, -5) -> (10, 21, -5) */
    MTH_ASSERT_NEAR(out.x, 10.0f, TEST_EPSILON, "Composite transform X");
    MTH_ASSERT_NEAR(out.y, 21.0f, TEST_EPSILON, "Composite transform Y");
    MTH_ASSERT_NEAR(out.z, -5.0f, TEST_EPSILON, "Composite transform Z");

    /* Matrix Inversion */
    MTH3D_Matrix invComp, shouldBeId;
    bool invOk = MTH3D_bInvertMatrix(&invComp, &comp);
    MTH_ASSERT(invOk, "Matrix inversion succeeds for invertible matrix");
    MTH3D_vMulMatrixMatrix(&shouldBeId, &comp, &invComp);
    MTH_ASSERT(MTH3D_bIsIdentityMatrix(&shouldBeId, 1e-3f), "Comp * Comp^-1 is Identity");

    /* Invert Affine */
    MTH3D_Matrix invAffine;
    MTH3D_vInvertAffineMatrix(&invAffine, &comp);
    MTH3D_vMulMatrixMatrix(&shouldBeId, &comp, &invAffine);
    MTH_ASSERT(MTH3D_bIsIdentityMatrix(&shouldBeId, 1e-3f), "Comp * Affine^-1 is Identity");
}

/* ----------------------------------------------------------------------------
 * 4. Test PS Vita 16:9 Camera Projection Math
 * ---------------------------------------------------------------------------- */
static void Test_ProjectionMath(void)
{
    printf("[4/6] Testing PS Vita 16:9 Camera Projection Math...\n");

    MTH3D_Matrix proj;
    MTH_tdx_Real fovY = 60.0f * MTH_C_f_DegToRad;
    MTH_tdx_Real aspect = VITA_ASPECT_RATIO_16_9; /* 960.0f / 544.0f */
    MTH_tdx_Real zNear = 0.5f;
    MTH_tdx_Real zFar = 1000.0f;

    MTH_ASSERT_NEAR(aspect, 1.764705882f, TEST_EPSILON, "Vita aspect ratio 960/544");

    MTH3D_vSetPerspectiveMatrix(&proj, fovY, aspect, zNear, zFar);
    MTH_ASSERT(proj.ulType == MTH_MAT_TYPE_PROJECTION, "Projection type flag set");

    /* Test projection of point in front of camera along -Z */
    MTH3D_Vector eyePt, clipPt;
    MTH3D_vInitVector(&eyePt, 0.0f, 0.0f, -10.0f);
    MTH3D_vMulMatrixVector(&clipPt, &proj, &eyePt);
    /* Center point should project to NDC (0, 0) */
    MTH_ASSERT_NEAR(clipPt.x, 0.0f, TEST_EPSILON, "Center NDC X == 0");
    MTH_ASSERT_NEAR(clipPt.y, 0.0f, TEST_EPSILON, "Center NDC Y == 0");
    MTH_ASSERT(clipPt.z >= -1.0f && clipPt.z <= 1.0f, "Depth within NDC [-1, 1]");

    /* LookAt view matrix */
    MTH3D_Matrix view;
    MTH3D_Vector eye, target, up;
    MTH3D_vInitVector(&eye, 0.0f, 5.0f, 10.0f);
    MTH3D_vInitVector(&target, 0.0f, 0.0f, 0.0f);
    MTH3D_vInitVector(&up, 0.0f, 1.0f, 0.0f);

    MTH3D_vSetLookAtMatrix(&view, &eye, &target, &up);
    /* In view coordinates, target should lie along the negative Z axis */
    MTH3D_Vector targetView;
    MTH3D_vMulMatrixVector(&targetView, &view, &target);
    MTH_ASSERT_NEAR(targetView.x, 0.0f, TEST_EPSILON, "Target in view X == 0");
    MTH_ASSERT(targetView.z < 0.0f, "Target is in front of camera (Z < 0)");
}

/* ----------------------------------------------------------------------------
 * 5. Test 60 FPS Native Delta-Time & Ground Truth Constants
 * ---------------------------------------------------------------------------- */
static void Test_TimingAndDeltaTime(void)
{
    printf("[5/6] Testing 60 FPS Native Delta-Time & Cadence Grounding...\n");

    /* Target frame rate is 60.0 FPS */
    MTH_ASSERT_NEAR(MTH_C_TARGET_FPS, 60.0f, TEST_EPSILON, "Target FPS is 60.0");

    /* Native delta-time is 1.0f / 60.0f = 0.016666667f */
    MTH_ASSERT_NEAR(MTH_C_TARGET_DELTA_TIME, 0.016666667f, 1e-6f, "Target Delta-Time is 1/60s");

    /* FPS clamp range [15.0, 60.0] */
    MTH_ASSERT_NEAR(MTH_C_FPS_MIN_CLAMP, 15.0f, TEST_EPSILON, "Min FPS clamp 15");
    MTH_ASSERT_NEAR(MTH_C_FPS_MAX_CLAMP, 60.0f, TEST_EPSILON, "Max FPS clamp 60");
    MTH_ASSERT_NEAR(MTH_C_DT_MIN_CLAMP, 1.0f / 60.0f, 1e-6f, "Min dt clamp 1/60");
    MTH_ASSERT_NEAR(MTH_C_DT_MAX_CLAMP, 1.0f / 15.0f, 1e-6f, "Max dt clamp 1/15");

    /* Physics tick scale at 60 Hz */
    MTH_ASSERT_NEAR(MTH_C_PHYSICS_TICK_SCALE_60HZ, 1.0f, TEST_EPSILON, "60 Hz physics scale is 1.0");

    /* Delta time from FPS helper */
    MTH_ASSERT_NEAR(MTH_fn_fDeltaTimeFromFPS(60.0f), 1.0f / 60.0f, 1e-6f, "60 FPS dt helper");
    MTH_ASSERT_NEAR(MTH_fn_fDeltaTimeFromFPS(30.0f), 1.0f / 30.0f, 1e-6f, "30 FPS dt helper");

    /* Delta time clamping tests */
    MTH_tdx_Real dtFast = 0.005f;   /* 200 FPS -> clamped to 60 FPS (0.016666667s) */
    MTH_tdx_Real dtSlow = 0.150f;   /* 6.6 FPS -> clamped to 15 FPS (0.066666667s) */
    MTH_tdx_Real dtNorm = 0.0333f;  /* 30 FPS -> preserved */

    MTH_ASSERT_NEAR(MTH_fn_fClampDeltaTime(dtFast), MTH_C_DT_MIN_CLAMP, 1e-6f, "Fast dt clamped to min");
    MTH_ASSERT_NEAR(MTH_fn_fClampDeltaTime(dtSlow), MTH_C_DT_MAX_CLAMP, 1e-6f, "Slow dt clamped to max");
    MTH_ASSERT_NEAR(MTH_fn_fClampDeltaTime(dtNorm), 0.0333f, 1e-4f, "Normal dt preserved");
}

/* ----------------------------------------------------------------------------
 * 6. Test Nintendo DS Fixed-Point (fx32) Neutralization
 * ---------------------------------------------------------------------------- */
static void Test_DSFixedPointNeutralization(void)
{
    printf("[6/6] Testing Nintendo DS Fixed-Point (fx32) Neutralization...\n");

    /* fx32 must be native 32-bit float */
    fx32 a = 3.5f;
    FX32 b = 2.0f;
    MTH_ASSERT(sizeof(fx32) == 4, "fx32 is 4 bytes");
    MTH_ASSERT(sizeof(FX32) == 4, "FX32 is 4 bytes");

    /* FX_Mul */
    fx32 mulRes = FX_Mul(a, b);
    MTH_ASSERT_NEAR(mulRes, 7.0f, TEST_EPSILON, "FX_Mul gives float multiplication");

    /* FX_Div */
    fx32 divRes = FX_Div(a, b);
    MTH_ASSERT_NEAR(divRes, 1.75f, TEST_EPSILON, "FX_Div gives float division");

    /* FX_Sqrt */
    fx32 sqrtRes = FX_Sqrt(16.0f);
    MTH_ASSERT_NEAR(sqrtRes, 4.0f, TEST_EPSILON, "FX_Sqrt gives float sqrt");

    /* FX_Inv */
    fx32 invRes = FX_Inv(4.0f);
    MTH_ASSERT_NEAR(invRes, 0.25f, TEST_EPSILON, "FX_Inv gives float reciprocal");

    /* Conversions and constants */
    MTH_ASSERT_NEAR(FX32_ONE, 1.0f, TEST_EPSILON, "FX32_ONE is 1.0f");
    MTH_ASSERT_NEAR(FX32_CONST(42.5), 42.5f, TEST_EPSILON, "FX32_CONST casts to float");
    MTH_ASSERT_NEAR(FX_F32_TO_FX32(12.34f), 12.34f, TEST_EPSILON, "FX_F32_TO_FX32 identity");
    MTH_ASSERT_NEAR(FX_FX32_TO_F32(12.34f), 12.34f, TEST_EPSILON, "FX_FX32_TO_F32 identity");

    /* Trig */
    MTH_ASSERT_NEAR(FX_SinFx32(MTH_C_f_HalfPi), 1.0f, TEST_EPSILON, "FX_SinFx32 sin(pi/2) = 1");
    MTH_ASSERT_NEAR(FX_CosFx32(MTH_C_f_HalfPi), 0.0f, TEST_EPSILON, "FX_CosFx32 cos(pi/2) = 0");
}

/* ----------------------------------------------------------------------------
 * Main Test Runner
 * ---------------------------------------------------------------------------- */
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    printf("============================================================\n");
    printf(" Rayman 2 Vita — CPA 60 FPS IEEE-754 Math Subsystem Test\n");
    printf(" Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 60 FPS)\n");
    printf(" Target:   PlayStation Vita (ARM Cortex-A9 + NEON VFPv3)\n");
    printf("============================================================\n\n");

    Test_TypesAndLayout();
    Test_VectorMath();
    Test_MatrixMath();
    Test_ProjectionMath();
    Test_TimingAndDeltaTime();
    Test_DSFixedPointNeutralization();

    printf("\n============================================================\n");
    printf(" Results: %d passed, %d failed\n", s_testsPassed, s_testsFailed);
    printf("============================================================\n");

    if (s_testsFailed > 0) {
        printf("FAILED: One or more math verification tests failed!\n");
        return 1;
    }

    printf("SUCCESS: CPA Math subsystem is fully verified at 60 FPS IEEE-754 float!\n");
    return 0;
}
