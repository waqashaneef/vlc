/*****************************************************************************
 * real.c: rtsp input
 *****************************************************************************
 * Copyright (C) 2002-2004 the xine project
 * Copyright (C) 2005 VideoLAN
 * $Id: file.c 10310 2005-03-11 22:36:40Z anil $
 *
 * Authors: Gildas Bazin <gbazin@videolan.org>
 *          Adapted from xine which itself adapted it from joschkas real tools.
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/
#ifndef HAVE_REAL_H
#define HAVE_REAL_H

#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include <vlc/vlc.h>
#include "rtsp.h"
#include "real_rmff.h"
#include "real_sdpplin.h"

#ifdef REALDEBUG
#   define lprintf printf
#else
    static inline void lprintf( char *dummy, ... ){}
#endif

int real_get_rdt_chunk(rtsp_client_t *, unsigned char **buffer);
rmff_header_t *real_setup_and_get_header(rtsp_client_t *, int bandwidth);

int asmrp_match(const char *rules, int bandwidth, int *matches) ;

#endif
