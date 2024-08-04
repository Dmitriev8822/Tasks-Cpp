#include <iostream>
#include <functional>

// Определение псевдонима типа для арифметической функции
using ArithmeticFunction = std::function<int(int, int)>;

// Арифметические функции (add, subtract, multiply, division)
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        std::cerr << "Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

// Функция для получения арифметической функции
ArithmeticFunction getArithmeticFunction(char op) {
    switch (op) {
        case '+': return add;
        case '-': return subtract;
        case '*': return multiply;
        case '/': return division;
        default: return nullptr;
    }
}

int main() {
    int num1, num2;
    char operation;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Enter a mathematical operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        std::cerr << "Invalid operation!" << std::endl;
        return 1;
    }

    // Получаем функцию для выбранной операции
    ArithmeticFunction func = getArithmeticFunction(operation);
    if (func) {
        int result = func(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cerr << "Invalid function!" << std::endl;
    }

    return 0;
}
