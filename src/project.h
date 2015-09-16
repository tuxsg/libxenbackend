/*
 * Copyright (c) 2011 Citrix Systems, Inc.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __PROJECT_H__
# define __PROJECT_H__

# include "config.h"

# ifdef HAVE_DLFCN_H
#  include <dlfcn.h>
# endif

# ifdef HAVE_ERRNO_H
#  include <errno.h>
# endif

# ifdef HAVE_FCNTL_H
#  include <fcntl.h>
# endif

# ifdef HAVE_INTTYPES_H
#  include <inttypes.h>
# endif

# ifdef HAVE_MEMORY_H
#  include <memory.h>
# endif

# ifdef HAVE_STDINT_H
#  include <stdint.h>
# endif

# ifdef HAVE_STDIO_H
#  include <stdio.h>
# endif

# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif

# ifdef HAVE_STRINGS_H
#  include <strings.h>
# endif

# ifdef HAVE_STRING_H
#  include <string.h>
# endif

# ifdef HAVE_STROPTS_H
#  include <stropts.h>
# endif

# ifdef HAVE_SYSLOG_H
#  include <syslog.h>
# endif

# ifdef HAVE_SYS_MMAN_H
#  include <sys/mman.h>
# endif

# ifdef HAVE_SYS_STAT_H
#  include <sys/stat.h>
# endif

# ifdef HAVE_SYS_TYPES_H
#  include <sys/types.h>
# endif

# ifdef HAVE_UNISTD_H
#  include <unistd.h>
# endif

# ifdef INT_PROTOS
#  define INTERNAL
#  define EXTERNAL
# else
#  ifdef EXT_PROTOS
#   define INTERNAL static
#   define EXTERNAL
#  else
#   define INTERNAL
#   define EXTERNAL
#  endif
# endif

# include <limits.h>
# include <sys/ioctl.h>

# if HAVE_XENCTRL_H
#  include <xenctrl.h>
# endif

#include <xen/io/xenbus.h>
#include <xenstore.h>

# include "xenbackend.h"

# include "prototypes.h"

#endif /* __PROJECT_H__ */
