/*
 * camera.h - Full 360-degree right-stick camera control with auto default
 *            behind Rayman for Rayman 2 (Dreamcast recompilation).
 */
#ifndef HLE_CAMERA_H
#define HLE_CAMERA_H

#include "hle.h"

void hle_camera_init(void);
void hle_cam_follow_step(SH4Ctx *c);

#endif /* HLE_CAMERA_H */
