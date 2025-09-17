<!--
SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>

SPDX-License-Identifier: GPL-2.0-only
-->

<!-- TODO: Update project name -->

# External Kernel Module Template

[![checks][badge-shields-io-checks]][actions]
[![commit activity][badge-shields-io-commit-activity]][commits]
[![contributors][badge-shields-io-contributors]][contributors]
[![release date][badge-shields-io-release-date]][releases]
![commits since release][badge-shields-io-commits-since-release]
[![codecov][badge-shields-io-codecov]][codecov]

<!-- TODO: Update project links -->

[badge-shields-io-checks]:
  https://img.shields.io/github/check-runs/black-desk/external-module-template/master

<!-- TODO: Update project links -->

[actions]: https://github.com/black-desk/external-module-template/actions

<!-- TODO: Update project links -->

[badge-shields-io-commit-activity]:
  https://img.shields.io/github/commit-activity/w/black-desk/external-module-template/master

<!-- TODO: Update project links -->

[commits]: https://github.com/black-desk/external-module-template/commits/master

<!-- TODO: Update project links -->

[badge-shields-io-contributors]:
  https://img.shields.io/github/contributors/black-desk/external-module-template

<!-- TODO: Update project links -->

[contributors]: https://github.com/black-desk/external-module-template/graphs/contributors

<!-- TODO: Update project links -->

[badge-shields-io-release-date]:
  https://img.shields.io/github/release-date/black-desk/external-module-template

<!-- TODO: Update project links -->

[releases]: https://github.com/black-desk/external-module-template/releases

<!-- TODO: Update project links -->

[badge-shields-io-commits-since-release]:
  https://img.shields.io/github/commits-since/black-desk/external-module-template/latest

<!-- TODO: Update project links -->

[badge-shields-io-codecov]:
  https://codecov.io/github/black-desk/external-module-template/graph/badge.svg?token=6TSVGQ4L9X
[codecov]: https://codecov.io/github/black-desk/external-module-template

en | [zh_CN](README.zh_CN.md)

> [!WARNING]
>
> This English README is translated from the Chinese version using AI and may
> contain errors.

<!-- TODO: Add project description -->

A template for developing external (out-of-tree) Linux kernel modules.
This template provides a complete setup for building kernel modules
with optional KUnit testing support.

## Build System

This project uses autotools for configuration and build management.

### Building

```bash
./configure
make
```

### Configuration Options

```bash
./configure --help
```

## Available Make Targets

The Makefile transparently passes all targets to the kernel build system (kbuild). Common targets include:

- `make` - Build the module
- `make compile_commands.json` - Create compile commands file for LSP servers
- `make clean` - Clean build artifacts
- `make modules_install` - Install the module to system
- `make help` - Show available targets and usage

## Usage

<!-- TODO: Add project usage instructions -->

1. Use gh to create a repository from the template:

   ```bash
   gh repo create --public --template black-desk/external-module-template
   ```

2. Edit project files, fill in content, and remove all `TODO` comments.

3. Run the check script to ensure all `TODO` comments have been removed:

   ```bash
   ./scripts/ls-todo.sh
   ```

## License

Unless otherwise specified, all files in this project are open source under the
GNU General Public License version 2 only.

This project complies with the [REUSE specification].

You can use [reuse-tool](https://github.com/fsfe/reuse-tool) to generate the
SPDX list for this project:

```bash
reuse spdx
```

[REUSE specification]: https://reuse.software/spec-3.3/
