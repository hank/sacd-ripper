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

#ifndef __RIPPING_H__
#define __RIPPING_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum
{
    RIP_2CH         = 1 << 0,
    RIP_2CH_DST     = 1 << 1,
    RIP_MCH         = 1 << 2,
    RIP_MCH_DST     = 1 << 3,

    RIP_DSDIFF      = 1 << 4,
    RIP_DSF         = 1 << 5,
    RIP_ISO         = 1 << 6
};

int start_ripping_gui(int);

#ifdef __cplusplus
}
#endif

#endif
