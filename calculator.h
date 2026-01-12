#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>
#include <string>

/**
 * 计算器类 - 提供基本的数学运算功能
 */
class Calculator {
public:
    Calculator();
    
    // 基本运算
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // 历史记录功能
    void printHistory() const;
    void clearHistory();
    size_t getHistorySize() const;
    
private:
    std::vector<std::string> history;
    void addToHistory(const std::string& operation);
};

#endif // CALCULATOR_H