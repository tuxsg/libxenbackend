#
# Copyright (c) 2011 Citrix Systems, Inc.
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
#

#
# Autoconf initialisation.
#
AC_INIT(libxenbackend, 0.1)
AC_PREREQ(2.13)
AC_CONFIG_HEADERS(src/config.h)
AC_CONFIG_SRCDIR(src/backend.c)
AM_INIT_AUTOMAKE([foreign -Wall -Werror])

#
# Version management.
# +1    : 0     Interface changes breaking retro-compatibility.
# 0     : +1    Internal changes not breaking retro-compatibility.
#
VERSION_MAJOR=0
VERSION_MINOR=1
AC_DEFINE_UNQUOTED([VERSION_MAJOR], [$VERSION_MAJOR], [libxenbackend major version number])
AC_DEFINE_UNQUOTED([VERSION_MINOR], [$VERSION_MINOR], [libxenbackend minor version number])

#
# Standard checks.
#
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AM_PROG_AR

#
# Libtool version system.
#
LT_CURRENT=$VERSION_MAJOR
LT_REVISION=1
LT_AGE=$VERSION_MAJOR
LT_RELEASE=$VERSION_MAJOR.$VERSION_MINOR
AC_SUBST(LT_CURRENT)
AC_SUBST(LT_REVISION)
AC_SUBST(LT_AGE)
AC_SUBST(LT_RELEASE)

LT_INIT

# Compiler capabilities.
AC_C_INLINE
AC_C_CONST

# Checks for header files.
AC_CHECK_HEADERS([xen/io/xenbus.h], [], AC_MSG_ERROR([xenbus header is missing.]))

# Required libraries.
AC_CHECK_LIB([pthread], [pthread_mutex_lock])
AC_CHECK_LIB([xenstore], [xs_open])
AC_CHECK_LIB([xenctrl], [xc_interface_open])

AC_CONFIG_FILES([libxenbackend-config], [chmod +x libxenbackend-config])
AC_OUTPUT([Makefile
           src/Makefile
           libxenbackend.pc
           ])

