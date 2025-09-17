<!--
SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>

SPDX-License-Identifier: GPL-2.0-only
-->

<!-- TODO: 更新项目名称 -->

# 外部内核模块模板

[![checks][badge-shields-io-checks]][actions]
[![commit activity][badge-shields-io-commit-activity]][commits]
[![contributors][badge-shields-io-contributors]][contributors]
[![release date][badge-shields-io-release-date]][releases]
![commits since release][badge-shields-io-commits-since-release]
[![codecov][badge-shields-io-codecov]][codecov]

<!-- TODO: 更新项目链接 -->

[badge-shields-io-checks]:
  https://img.shields.io/github/check-runs/black-desk/external-module-template/master

<!-- TODO: 更新项目链接 -->

[actions]: https://github.com/black-desk/external-module-template/actions

<!-- TODO: 更新项目链接 -->

[badge-shields-io-commit-activity]:
  https://img.shields.io/github/commit-activity/w/black-desk/external-module-template/master

<!-- TODO: 更新项目链接 -->

[commits]: https://github.com/black-desk/external-module-template/commits/master

<!-- TODO: 更新项目链接 -->

[badge-shields-io-contributors]:
  https://img.shields.io/github/contributors/black-desk/external-module-template

<!-- TODO: 更新项目链接 -->

[contributors]: https://github.com/black-desk/external-module-template/graphs/contributors

<!-- TODO: 更新项目链接 -->

[badge-shields-io-release-date]:
  https://img.shields.io/github/release-date/black-desk/external-module-template

<!-- TODO: 更新项目链接 -->

[releases]: https://github.com/black-desk/external-module-template/releases

<!-- TODO: 更新项目链接 -->

[badge-shields-io-commits-since-release]:
  https://img.shields.io/github/commits-since/black-desk/external-module-template/latest

<!-- TODO: 更新项目链接 -->

[badge-shields-io-codecov]:
  https://codecov.io/github/black-desk/external-module-template/graph/badge.svg?token=6TSVGQ4L9X
[codecov]: https://codecov.io/github/black-desk/external-module-template

[en](README.md) | zh_CN

<!-- TODO: 添加项目简介 -->

用于开发外部（树外）Linux内核模块的模板项目。
此模板提供了构建内核模块的完整设置，并支持可选的KUnit测试。

## 构建系统

本项目使用autotools进行配置和构建管理。

### 构建

```bash
./configure
make
```

### 配置选项

```bash
./configure --help
```

## 可用的Make目标

Makefile会透明地将所有目标传递给内核构建系统（kbuild）。常用目标包括：

- `make` - 构建模块
- `make compile_commands.json` - 为LSP server创建编译命令文件
- `make clean` - 清理构建产物
- `make modules_install` - 将模块安装到系统
- `make help` - 显示可用目标和用法

## 使用

<!-- TODO: 添加项目使用说明 -->

1. 使用gh，从模版创建仓库：

   ```bash
   gh repo create --public --template black-desk/external-module-template
   ```

2. 编辑项目文件，填充内容后移除所有的`TODO`。

3. 运行检查脚本，确定所有`TODO`均已被移除：

   ```bash
   ./scripts/ls-todo.sh
   ```

## 许可证

如无特殊说明，该项目中所有文件均以GNU通用公共许可协议第二版开源。

该项目遵守[REUSE规范]。

你可以使用[reuse-tool](https://github.com/fsfe/reuse-tool)生成这个项目的SPDX列表：

```bash
reuse spdx
```

[REUSE规范]: https://reuse.software/spec-3.3/
