#include "calculator.h"
#include <iostream>
#include <sstream>
#include <iomanip>

Calculator::Calculator() {
    // 构造函数
}

double Calculator::add(double a, double b) {
    double result = a + b;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << a << " + " << b << " = " << result;
    addToHistory(oss.str());
    return result;
}

double Calculator::subtract(double a, double b) {
    double result = a - b;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << a << " - " << b << " = " << result;
    addToHistory(oss.str());
    return result;
}

double Calculator::multiply(double a, double b) {
    double result = a * b;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << a << " × " << b << " = " << result;
    addToHistory(oss.str());
    return result;
}

double Calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("除数不能为零！");
    }
    double result = a / b;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << a << " ÷ " << b << " = " << result;
    addToHistory(oss.str());
    return result;
}

void Calculator::printHistory() const {
    if (history.empty()) {
        std::cout << "  历史记录为空" << std::endl;
        return;
    }
    for (size_t i = 0; i < history.size(); ++i) {
        std::cout << "  " << (i + 1) << ". " << history[i] << std::endl;
    }
}

void Calculator::clearHistory() {
    history.clear();
}

size_t Calculator::getHistorySize() const {
    return history.size();
}

void Calculator::addToHistory(const std::string& operation) {
    history.push_back(operation);
}