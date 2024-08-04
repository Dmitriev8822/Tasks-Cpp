#include <iostream>

// Рекурсивная функция для вывода двоичного представления числа
void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    std::cout << (num % 2);
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Please enter a positive integer.\n";
        return 1;
    }

    std::cout << "Binary representation of " << number << " is ";
    printBinary(number);
    std::cout << '\n';

    return 0;
}
