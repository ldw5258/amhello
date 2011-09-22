#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.67])
AC_INIT([helloworld], [1.1 ], [ldw5258@126.com])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
# AM_INIT_AUTOMAKE(helloworld,1.1)

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
AM_PATH_GTK_2_0(2.2.0,,AC_MSG_ERROR(gtkhello 0.1 needs GTK+ 2.2.0))

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([
Makefile
src/Makefile
])
AC_OUTPUT
