#include <iostream>
#include <string>
#include "calculator.h"

using namespace std;

int main() {
    cout << "=== GitHub MCP 测试项目 - C++ 版本 ===" << endl;
    cout << "Hello, GitHub MCP!" << endl << endl;
    
    // 测试计算器
    Calculator calc;
    
    cout << "计算器功能测试:" << endl;
    cout << "10 + 5 = " << calc.add(10, 5) << endl;
    cout << "10 - 5 = " << calc.subtract(10, 5) << endl;
    cout << "10 * 5 = " << calc.multiply(10, 5) << endl;
    cout << "10 / 5 = " << calc.divide(10, 5) << endl;
    
    cout << endl << "计算历史:" << endl;
    calc.printHistory();
    
    return 0;
}