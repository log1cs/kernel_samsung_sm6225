/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _CAM_OIS_THREAD_H_
#define _CAM_OIS_THREAD_H_

#include "cam_ois_dev.h"

int cam_ois_thread_add_msg(struct cam_ois_ctrl_t *o_ctrl, struct cam_ois_thread_msg_t *msg);
int cam_ois_thread_create(struct cam_ois_ctrl_t *o_ctrl);
int cam_ois_thread_destroy(struct cam_ois_ctrl_t *o_ctrl);

#endif
/* _CAM_OIS_THREAD_H_ */
