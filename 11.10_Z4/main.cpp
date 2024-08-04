#include <iostream>

// Рекурсивная функция для вывода двоичного представления числа
void printBinary(unsigned int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    std::cout << (num % 2);
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    unsigned int uNumber = static_cast<unsigned int>(number);

    std::cout << "Binary representation of " << number << " is ";
    printBinary(uNumber);
    std::cout << '\n';

    return 0;
}
