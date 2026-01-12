# test-repo-mcp

这是一个通过 GitHub MCP 创建的测试仓库，用于验证 GitHub MCP 的各种功能。

## 项目描述

这个项目包含：
- C++ 示例代码
- 计算器模块实现
- 单元测试
- Makefile 构建配置
- Git 分支管理示例

## 功能特性

- ✅ C++ 计算器类（支持加减乘除）
- ✅ 计算历史记录功能
- ✅ 完整的单元测试
- ✅ Makefile 构建系统
- ✅ Git 工作流测试

## 编译要求

- C++11 或更高版本
- GCC/G++ 编译器

## 使用方法

```bash
# 编译项目
make

# 运行主程序
make run
# 或
./main

# 运行单元测试
make test
# 或
./test_calculator

# 清理编译文件
make clean
```

## 项目结构

```
test-repo-mcp/
├── main.cpp              # 主程序
├── calculator.h          # 计算器头文件
├── calculator.cpp        # 计算器实现
├── test_calculator.cpp   # 单元测试
├── Makefile             # 构建配置
├── config.json          # 配置文件
├── .gitignore           # Git 忽略文件
└── README.md            # 项目说明
```

## 分支说明

- `main`: 主分支，包含基础功能
- `feature/add-calculator`: 功能分支，添加计算器模块

## 创建信息

- 创建时间：2026-01-12
- 创建方式：GitHub MCP
- 作者：hanchen12
