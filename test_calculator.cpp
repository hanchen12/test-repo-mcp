#include "calculator.h"
#include <cassert>
#include <iostream>
#include <cmath>

// 简单的断言宏（用于测试）
#define ASSERT_EQUAL(a, b) \
    do { \
        if (std::abs((a) - (b)) > 1e-9) { \
            std::cerr << "测试失败: " << #a << " != " << #b << " (" << (a) << " != " << (b) << ")" << std::endl; \
            return false; \
        } \
    } while(0)

#define ASSERT_TRUE(condition) \
    do { \
        if (!(condition)) { \
            std::cerr << "测试失败: " << #condition << " 为假" << std::endl; \
            return false; \
        } \
    } while(0)

bool testAdd() {
    Calculator calc;
    ASSERT_EQUAL(calc.add(5, 3), 8);
    ASSERT_EQUAL(calc.add(-1, 1), 0);
    ASSERT_EQUAL(calc.add(0, 0), 0);
    std::cout << "✓ 加法测试通过" << std::endl;
    return true;
}

bool testSubtract() {
    Calculator calc;
    ASSERT_EQUAL(calc.subtract(10, 3), 7);
    ASSERT_EQUAL(calc.subtract(5, 5), 0);
    ASSERT_EQUAL(calc.subtract(0, 5), -5);
    std::cout << "✓ 减法测试通过" << std::endl;
    return true;
}

bool testMultiply() {
    Calculator calc;
    ASSERT_EQUAL(calc.multiply(5, 3), 15);
    ASSERT_EQUAL(calc.multiply(0, 100), 0);
    ASSERT_EQUAL(calc.multiply(-2, 3), -6);
    std::cout << "✓ 乘法测试通过" << std::endl;
    return true;
}

bool testDivide() {
    Calculator calc;
    ASSERT_EQUAL(calc.divide(10, 2), 5);
    ASSERT_EQUAL(calc.divide(9, 3), 3);
    ASSERT_EQUAL(calc.divide(1, 3), 0.333333333, 1e-6);
    std::cout << "✓ 除法测试通过" << std::endl;
    return true;
}

bool testDivideByZero() {
    Calculator calc;
    try {
        calc.divide(10, 0);
        std::cerr << "测试失败: 应该抛出除以零异常" << std::endl;
        return false;
    } catch (const std::runtime_error& e) {
        // 预期的异常
    }
    std::cout << "✓ 除以零测试通过" << std::endl;
    return true;
}

bool testHistory() {
    Calculator calc;
    calc.add(1, 2);
    calc.multiply(3, 4);
    ASSERT_EQUAL(calc.getHistorySize(), 2);
    std::cout << "✓ 历史记录测试通过" << std::endl;
    return true;
}

bool testClearHistory() {
    Calculator calc;
    calc.add(1, 1);
    calc.clearHistory();
    ASSERT_EQUAL(calc.getHistorySize(), 0);
    std::cout << "✓ 清空历史测试通过" << std::endl;
    return true;
}

int main() {
    std::cout << "=== 计算器单元测试 ===" << std::endl << std::endl;
    
    int passed = 0;
    int total = 7;
    
    if (testAdd()) passed++;
    if (testSubtract()) passed++;
    if (testMultiply()) passed++;
    if (testDivide()) passed++;
    if (testDivideByZero()) passed++;
    if (testHistory()) passed++;
    if (testClearHistory()) passed++;
    
    std::cout << std::endl << "测试结果: " << passed << "/" << total << " 通过" << std::endl;
    
    return (passed == total) ? 0 : 1;
}