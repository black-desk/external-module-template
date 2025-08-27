# SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>
#
# SPDX-License-Identifier: GPL-2.0-only

KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD)

%:
	$(MAKE) -C $(KDIR) M=$(PWD) $@
