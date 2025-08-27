# SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>
#
# SPDX-License-Identifier: GPL-2.0-only

# vim: ft=make

# Module name - TODO: Update module name
MODULE_NAME := template

# Object files for the main module
obj-m += $(MODULE_NAME).o
$(MODULE_NAME)-objs := src/template.o # TODO: Update source file name

# KUnit test module (conditional compilation)
ifdef CONFIG_KUNIT
obj-m += $(MODULE_NAME)_test.o
$(MODULE_NAME)_test-objs := src/template_test.o # TODO: Update test source file name
endif
