# SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>
#
# SPDX-License-Identifier: GPL-2.0-only

# TODO: Update project name and email
AC_INIT([template], [0.1.0], [me@black-desk.cn])

AC_ARG_ENABLE([kunit-tests],
  [AS_HELP_STRING([--enable-kunit-tests], [Enable KUnit tests])],
  [enable_kunit_tests=$enableval],
  [enable_kunit_tests=no])

if test "x$enable_kunit_tests" = "xyes"; then
  ENABLE_KUNIT_TEST=1
else
  ENABLE_KUNIT_TEST=0
fi

AC_SUBST([ENABLE_KUNIT_TEST])

AC_CONFIG_FILES([
  Kbuild
])

AC_OUTPUT
