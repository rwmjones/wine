/* AFUNIX.H
 *
 * Copyright (C) the Wine project
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_AFUNIX_H
#define __WINE_AFUNIX_H

#define __WINE_UNIX_PATH_MAX 108

#ifdef USE_WS_PREFIX

struct WS_sockaddr_un
{
  ADDRESS_FAMILY sun_family;
  char sun_path[__WINE_UNIX_PATH_MAX];
};

#else

struct sockaddr_un
{
  ADDRESS_FAMILY sun_family;
  char sun_path[__WINE_UNIX_PATH_MAX];
};

#endif

#endif /* __WINE_AFUNIX_H */
