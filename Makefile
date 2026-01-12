# Makefile for GitHub MCP Test Project

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g
TARGET_MAIN = main
TARGET_TEST = test_calculator
OBJ_DIR = build

# 源文件
MAIN_SRC = main.cpp calculator.cpp
TEST_SRC = test_calculator.cpp calculator.cpp
OBJS = calculator.o

# 目标文件
MAIN_OBJS = $(MAIN_SRC:.cpp=.o)
TEST_OBJS = $(TEST_SRC:.cpp=.o)

.PHONY: all clean run test

all: $(TARGET_MAIN) $(TARGET_TEST)

$(TARGET_MAIN): main.o calculator.o
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TARGET_TEST): test_calculator.o calculator.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp calculator.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET_MAIN)
	./$(TARGET_MAIN)

test: $(TARGET_TEST)
	./$(TARGET_TEST)

clean:
	rm -f $(TARGET_MAIN) $(TARGET_TEST) *.o
	rm -rf $(OBJ_DIR)

install-deps:
	@echo "确保已安装 g++ 编译器"
	@which g++ || (echo "请安装 g++: sudo apt-get install g++" && exit 1)