#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([hello], [0.01], [robbin@kulicki.ca])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE
AM_MAINTAINER_MODE([enable])
AC_CONFIG_SRCDIR([helloworld.cc])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

dnl ************************************************************************
dnl Check for Required Modules
dnl ************************************************************************
PKG_CHECK_MODULES([DEPS], [gtkmm-3.0])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

dnl ************************************************************************
dnl Enable extra debugging options
dnl ************************************************************************
AC_ARG_ENABLE(debug,
	      AC_HELP_STRING([--enable-debug],
	      [enable verbose debugging. [default=no]]),
	      [enable_debug="yes"],[enable_debug="no"])

if test "x$enable_debug" = "xyes"; then [
   test "$cflags_set" = set || CFLAGS="$CFLAGS -g -O0"
   HELLO_DEBUG_CFLAGS="-DHELLO_ENABLE_DEBUG"
   ]
else
   HELLO_DEBUG_CFLAGS="-DG_DISABLE_ASSERT -DG_DISABLE_CHECKS -DG_DISABLE_CAST_CHECKS"
fi
AC_SUBST(HELLO_DEBUG_CFLAGS)

AC_CONFIG_FILES([
Makefile
icons/Makefile
icons/16/Makefile
icons/22/Makefile
icons/32/Makefile
icons/48/Makefile
icons/256/Makefile
icons/scalable/Makefile
])
AC_OUTPUT

echo "
Build Configuration:
  Debug........................$enable_debug

Installation:
  Prefix.......................$prefix
"

