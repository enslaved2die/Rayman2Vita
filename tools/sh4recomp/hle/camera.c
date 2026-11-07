/*
 * camera.c - Full 360-degree right-stick camera control with auto default
 *            behind Rayman for Rayman 2 (Dreamcast recompilation).
 */
#include "camera.h"
#include "pad.h"
#include "swflag.h"
#include <math.h>
#include <string.h>
#include <strings.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* Persistent camera orbit state */
static float s_cam_yaw = 0.0f;
static float s_cam_pitch = 0.35f;
static float s_cam_dist = 8.0f;
static int s_was_orbiting = 0;

/* Helper to check if current level disables free camera orbit */
static int is_camera_locked_level(void) {
    if (!hle_is_ram(0x8C123B09u)) return 0;
    const char *lvl = (const char *)hle_ptr(0x8C123B09u);
    if (!lvl || !lvl[0]) return 0;

    /* Menu / Title Screen */
    if (strncasecmp(lvl, "Menu", 4) == 0) return 1;
    /* Isle of Doors (3D hub with fixed camera tracks) */
    if (strncasecmp(lvl, "Mapmonde2", 9) == 0) return 1;
    /* Staff / Credits */
    if (strncasecmp(lvl, "Staff_10", 8) == 0) return 1;
    /* Intro cinematics */
    if (strncasecmp(lvl, "Raycap", 6) == 0) return 1;
    if (strncasecmp(lvl, "B_Invade", 8) == 0) return 1;
    if (strncasecmp(lvl, "B_Lift", 6) == 0) return 1;

    return 0;
}

void hle_cam_follow_step(SH4Ctx *c) {
    if (!hle_is_ram(c->r[4]) || !hle_is_ram(c->r[5]) || !hle_is_ram(c->r[6])) {
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t camData   = c->r[4];
    uint32_t camSO     = c->r[5];
    uint32_t curC_ptr  = c->r[6];

    /* Level-based check: title screen, Isle of Doors, cutscene levels */
    if (is_camera_locked_level()) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t raymanSO = *(uint32_t *)hle_ptr(0x8C123CF0u);
    if (!hle_is_ram(raymanSO)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t camActor = *(uint32_t *)hle_ptr(camSO + 4);
    if (!hle_is_ram(camActor)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t camCfg = *(uint32_t *)hle_ptr(camActor + 0x10);
    if (!hle_is_ram(camCfg)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t cfg2 = *(uint32_t *)hle_ptr(camCfg + 0x0c);
    if (!hle_is_ram(cfg2)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    uint32_t trackedSO = *(uint32_t *)hle_ptr(cfg2 + 0x68);
    uint32_t mode      = *(uint32_t *)hle_ptr(camCfg + 0x60);

    /* Target check & mode filtering: standard follow mode only (mode 0, tracking Rayman) */
    if (trackedSO != raymanSO || mode != 0) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Engine gate checks: verify if original camera rotation controls are enabled.
     * Original engine functions (f_8c09f560, f_8c0a0dbc, f_8c0a0ca0, f_8c0a1100)
     * disable manual camera rotation whenever any of the following are set:
     *  - camCfg + 0x74 bit 0x02: manual rotation inhibited
     *  - camCfg + 0x75 bit 0x08: camera rotation adjust inhibited
     *  - cfg2 + 0x72 bits 0x2000 (tracking locked), 0x1000 (angular adjust locked), 0x0008 (movement locked)
     *  - camData + 12 bit 0x2000: camera control locked
     *  - camData + 8 bit 0x2000: camera locked
     *  - camData + 0x282 bit 0x0004: follow step bypassed
     */
    uint8_t flags74   = *(uint8_t *)hle_ptr(camCfg + 0x74);
    uint8_t flags75   = *(uint8_t *)hle_ptr(camCfg + 0x75);
    uint16_t flags72  = *(uint16_t *)hle_ptr(cfg2 + 0x72);
    uint32_t flags12  = *(uint32_t *)hle_ptr(camData + 12);
    uint32_t flags8   = *(uint32_t *)hle_ptr(camData + 8);
    uint16_t flags282 = *(uint16_t *)hle_ptr(camData + 0x282);

    if ((flags74 & 0x02u) != 0 ||
        (flags75 & 0x08u) != 0 ||
        (flags72 & (0x2000u | 0x1000u | 0x0008u)) != 0 ||
        (flags12 & 0x2000u) != 0 ||
        (flags8 & 0x2000u) != 0 ||
        (flags282 & 0x0004u) != 0) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Read pad state */
    uint32_t btns = 0;
    PadAnalog pad;
    memset(&pad, 0, sizeof(pad));
    pad_get_state(&btns, &pad);

    /* First-person look mode entry (X+Y) or World Info overlay (D-pad Up) */
    if (((btns & (PAD_X | PAD_Y)) == (PAD_X | PAD_Y)) || (btns & PAD_UP)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Left Trigger (recenter / strafe):
     * Native engine has built-in smooth L-trigger recentering and strafe lock-on.
     * When L is held, yield to native code so recentering is smooth and not snapped,
     * and diving underwater aligns the camera in full 3D natively. */
    int lt_pressed = (pad.lt >= 128) || ((btns & (1u << 17)) != 0);
    if (lt_pressed) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Right stick deflection (128 = center, 0..255) */
    float rx = (float)((int)pad.joy2x - 128) / 127.0f;
    float ry = -(float)((int)pad.joy2y - 128) / 127.0f; /* joy2y: 0 is up, 255 is down -> positive is up */

    float mag = sqrtf(rx * rx + ry * ry);
    const float deadzone = 0.15f;
    int stick_deflected = 0;
    float out_x = 0.0f, out_y = 0.0f;

    if (mag > deadzone) {
        stick_deflected = 1;
        if (mag > 1.0f) {
            rx /= mag;
            ry /= mag;
            mag = 1.0f;
        }
        float norm = (mag - deadzone) / (1.0f - deadzone);
        float resp = norm * norm; /* quadratic sensitivity curve */
        out_x = (rx / mag) * resp;
        out_y = (ry / mag) * resp;
    }

    /* If right stick is idle, run native follow (native auto-tracking, recentering, first-person) */
    if (!stick_deflected) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Read tracked target T from camData + 0x230 */
    float T[3];
    memcpy(T, hle_ptr(camData + 0x230), 12);

    /* Read Rayman's matrix for orientation and position */
    uint32_t pmat = *(uint32_t *)hle_ptr(raymanSO + 0x24);
    if (!hle_is_ram(pmat)) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    float ray_pos[3];
    memcpy(ray_pos, hle_ptr(pmat + 0x58), 12);

    if (T[0] == 0.0f && T[1] == 0.0f && T[2] == 0.0f) {
        T[0] = ray_pos[0];
        T[1] = ray_pos[1];
        T[2] = ray_pos[2] + 1.4f;
    }

    /* Check distance from current camera position curC to target T.
     * In normal 3rd-person follow mode, distance is typically 8.0f (minimum ~5.4f against walls).
     * In First-Person Look Mode, the camera zooms into Rayman's head/eyes (distance < 2.0f).
     * If distance < 4.5f, First Person Look Mode is active: yield to native engine so
     * the player can look around freely in First Person Mode without being pulled out into 3rd person! */
    float curC[3];
    memcpy(curC, hle_ptr(curC_ptr), 12);
    float dx = curC[0] - T[0];
    float dy = curC[1] - T[1];
    float dz = curC[2] - T[2];
    float hdist = sqrtf(dx * dx + dy * dy);
    float total_dist = sqrtf(hdist * hdist + dz * dz);

    if (total_dist < 4.5f) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Underwater diving / 3D orientation check:
     * Row 2 of Rayman's matrix represents his local Up vector.
     * On ground/land, rM22 is ~1.0f (vertical Z-up).
     * When swimming/diving underwater, Rayman pitches in 3D (rM22 < 0.80f).
     * When diving, yield to native code so the native 3D swimming camera is not overridden! */
    float rM22 = *(float *)hle_ptr(pmat + 0x28);
    if (rM22 < 0.80f) {
        s_was_orbiting = 0;
        hle_orig(c, 0x8C08CD74);
        return;
    }

    /* Extract delta time dt from fr4 */
    float dt = 0.0166667f;
    memcpy(&dt, &c->fr[4], sizeof(float));
    if (dt <= 0.0f || dt > 0.1f) dt = 0.0166667f;

    /* Matrix row 1 in CPA engine is the backward vector: (rM10, rM11) points behind Rayman */
    float rM10 = *(float *)hle_ptr(pmat + 0x10);
    float rM11 = *(float *)hle_ptr(pmat + 0x14);
    float theta_behind = atan2f(rM11, rM10);

    /* Initialize orbit angles seamlessly from current camera position on first frame of deflection */
    if (!s_was_orbiting) {
        if (hdist > 1e-3f && total_dist >= 4.5f && total_dist <= 25.0f) {
            s_cam_yaw = atan2f(dy, dx);
            s_cam_pitch = atan2f(dz, hdist);
            s_cam_dist = total_dist;
        } else {
            s_cam_yaw = theta_behind;
            s_cam_pitch = 0.35f;
            s_cam_dist = 8.0f;
        }
        if (s_cam_pitch < -0.20f) s_cam_pitch = -0.20f;
        if (s_cam_pitch > 1.10f)  s_cam_pitch = 1.10f;
        s_was_orbiting = 1;
    }

    /* Manual orbit control */
    const float yaw_rate   = 2.8f; /* rad/sec */
    const float pitch_rate = 1.8f; /* rad/sec */

    /* Stick right (out_x > 0) -> view turns right -> orbit clockwise -> decrease yaw */
    s_cam_yaw -= out_x * yaw_rate * dt;
    /* Stick up (out_y > 0) -> camera raises / pitches up -> increase pitch */
    s_cam_pitch += out_y * pitch_rate * dt;

    /* Clamp pitch between -0.20 rad (~-11°) and +1.10 rad (~+63°) */
    if (s_cam_pitch < -0.20f) s_cam_pitch = -0.20f;
    if (s_cam_pitch > 1.10f)  s_cam_pitch = 1.10f;

    /* Wrap yaw to [-pi, pi) */
    while (s_cam_yaw > (float)M_PI) s_cam_yaw -= 2.0f * (float)M_PI;
    while (s_cam_yaw < -(float)M_PI) s_cam_yaw += 2.0f * (float)M_PI;

    /* Calculate new camera position C */
    float cp = cosf(s_cam_pitch);
    float sp = sinf(s_cam_pitch);
    float C[3];
    C[0] = T[0] + s_cam_dist * cp * cosf(s_cam_yaw);
    C[1] = T[1] + s_cam_dist * cp * sinf(s_cam_yaw);
    C[2] = T[2] + s_cam_dist * sp;

    /* Look-at point L = T */
    float L[3];
    L[0] = T[0];
    L[1] = T[1];
    L[2] = T[2];

    /* Update curC (at r[6]) */
    memcpy(hle_ptr(curC_ptr), C, 12);

    /* Update camData + 0x4EC (C) and + 0x4FC (L) */
    memcpy(hle_ptr(camData + 0x4EC), C, 12);
    memcpy(hle_ptr(camData + 0x4FC), L, 12);

    /* Update camCfg + 0x40/0x44 horizontal bearing */
    float bearingX = C[0] - T[0];
    float bearingY = C[1] - T[1];
    *(float *)hle_ptr(camCfg + 0x40) = bearingX;
    *(float *)hle_ptr(camCfg + 0x44) = bearingY;

    /* Zero out camData + 0x23C displacement vector */
    memset(hle_ptr(camData + 0x23C), 0, 12);

    c->r[0] = camData;
}

void hle_camera_init(void) {
    if (!hle_switch("ENABLE_360_CAM")) return; // Disabled by default
    hle_hook(0x8C08CD74, hle_cam_follow_step);
}
