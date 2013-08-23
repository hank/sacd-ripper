/**
 * SACD Ripper - http://code.google.com/p/sacd-ripper/
 *
 * Copyright (c) 2010-2011 by respective authors.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __RSXUTIL_H__
#define __RSXUTIL_H__

#include <rsx/rsx.h>
#include <sysutil/video.h>

#define CB_SIZE      0x100000
#define HOST_SIZE    (32 * 1024 * 1024)

#ifdef __cplusplus
extern "C" {
#endif

extern gcmContextData *context;
extern u32            display_width;
extern u32            display_height;
extern u32            curr_fb;

void set_render_target(u32 index);
void init_screen(void *host_addr, u32 size);
void waitflip();
void flip();

#ifdef __cplusplus
}
#endif

#endif
