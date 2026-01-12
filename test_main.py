#!/usr/bin/env python3
"""
主程序的单元测试
"""

import unittest
from main import greet, calculate_sum


class TestMain(unittest.TestCase):
    """主程序测试类"""
    
    def test_greet_default(self):
        """测试默认问候"""
        self.assertEqual(greet(), "Hello, World! 这是一个 GitHub MCP 测试项目。")
    
    def test_greet_custom(self):
        """测试自定义问候"""
        self.assertEqual(greet("Alice"), "Hello, Alice! 这是一个 GitHub MCP 测试项目。")
    
    def test_calculate_sum(self):
        """测试求和函数"""
        self.assertEqual(calculate_sum([1, 2, 3]), 6)
        self.assertEqual(calculate_sum([10, 20, 30]), 60)
        self.assertEqual(calculate_sum([]), 0)


if __name__ == "__main__":
    unittest.main()