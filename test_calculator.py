#!/usr/bin/env python3
"""
计算器模块的单元测试
"""

import unittest
from calculator import Calculator


class TestCalculator(unittest.TestCase):
    """计算器测试类"""
    
    def setUp(self):
        """每个测试前的设置"""
        self.calc = Calculator()
    
    def test_add(self):
        """测试加法"""
        self.assertEqual(self.calc.add(5, 3), 8)
        self.assertEqual(self.calc.add(-1, 1), 0)
        self.assertEqual(self.calc.add(0, 0), 0)
    
    def test_subtract(self):
        """测试减法"""
        self.assertEqual(self.calc.subtract(10, 3), 7)
        self.assertEqual(self.calc.subtract(5, 5), 0)
        self.assertEqual(self.calc.subtract(0, 5), -5)
    
    def test_multiply(self):
        """测试乘法"""
        self.assertEqual(self.calc.multiply(5, 3), 15)
        self.assertEqual(self.calc.multiply(0, 100), 0)
        self.assertEqual(self.calc.multiply(-2, 3), -6)
    
    def test_divide(self):
        """测试除法"""
        self.assertEqual(self.calc.divide(10, 2), 5)
        self.assertEqual(self.calc.divide(9, 3), 3)
        self.assertAlmostEqual(self.calc.divide(1, 3), 0.333333, places=5)
    
    def test_divide_by_zero(self):
        """测试除以零的错误处理"""
        with self.assertRaises(ValueError):
            self.calc.divide(10, 0)
    
    def test_history(self):
        """测试计算历史"""
        self.calc.add(1, 2)
        self.calc.multiply(3, 4)
        history = self.calc.get_history()
        
        self.assertEqual(len(history), 2)
        self.assertIn("1 + 2 = 3", history)
        self.assertIn("3 × 4 = 12", history)
    
    def test_clear_history(self):
        """测试清空历史"""
        self.calc.add(1, 1)
        self.calc.clear_history()
        self.assertEqual(len(self.calc.get_history()), 0)


if __name__ == "__main__":
    unittest.main()