#include <iostream>

int main() {
    // ���������� ����������
    double num1, num2;
    char operation;

    // ���� ������
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    // ��������� ��������� (+, -, *, /) � ����� ������
    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                std::cout << "Error: division by zero";
            }
            break;
        default:
            // ���� ������ �������� ������, �� ������ �� �������
            break;
    }

    return 0;
}
