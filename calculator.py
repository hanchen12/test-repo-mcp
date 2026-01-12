#!/usr/bin/env python3
"""
计算器模块 - 新功能分支示例
提供基本的数学运算功能
"""


class Calculator:
    """简单的计算器类"""
    
    def __init__(self):
        """初始化计算器"""
        self.history = []
    
    def add(self, a: float, b: float) -> float:
        """加法运算"""
        result = a + b
        self.history.append(f"{a} + {b} = {result}")
        return result
    
    def subtract(self, a: float, b: float) -> float:
        """减法运算"""
        result = a - b
        self.history.append(f"{a} - {b} = {result}")
        return result
    
    def multiply(self, a: float, b: float) -> float:
        """乘法运算"""
        result = a * b
        self.history.append(f"{a} × {b} = {result}")
        return result
    
    def divide(self, a: float, b: float) -> float:
        """除法运算"""
        if b == 0:
            raise ValueError("除数不能为零！")
        result = a / b
        self.history.append(f"{a} ÷ {b} = {result}")
        return result
    
    def get_history(self) -> list:
        """获取计算历史"""
        return self.history.copy()
    
    def clear_history(self):
        """清空计算历史"""
        self.history.clear()


def main():
    """测试计算器功能"""
    calc = Calculator()
    
    print("=== 计算器功能测试 ===\n")
    
    # 测试各种运算
    print(f"加法: {calc.add(10, 5)}")
    print(f"减法: {calc.subtract(10, 5)}")
    print(f"乘法: {calc.multiply(10, 5)}")
    print(f"除法: {calc.divide(10, 5)}")
    
    print("\n=== 计算历史 ===")
    for record in calc.get_history():
        print(f"  {record}")


if __name__ == "__main__":
    main()