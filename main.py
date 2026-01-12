#!/usr/bin/env python3
"""
GitHub MCP 测试项目 - 主程序
这是一个简单的示例程序，用于测试 GitHub MCP 功能
"""

def greet(name: str = "World") -> str:
    """
    问候函数
    
    Args:
        name: 要问候的名字
        
    Returns:
        问候语字符串
    """
    return f"Hello, {name}! 这是一个 GitHub MCP 测试项目。"


def calculate_sum(numbers: list) -> int:
    """
    计算数字列表的总和
    
    Args:
        numbers: 数字列表
        
    Returns:
        总和
    """
    return sum(numbers)


def main():
    """主函数"""
    print(greet("GitHub MCP"))
    
    # 测试计算功能
    test_numbers = [1, 2, 3, 4, 5]
    result = calculate_sum(test_numbers)
    print(f"\n计算 {test_numbers} 的总和: {result}")


if __name__ == "__main__":
    main()