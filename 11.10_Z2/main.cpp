#include <iostream>

// Рекурсивная функция для вычисления суммы цифр числа
int sumDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sumDigits(num / 10);
}

int main() {
    int number = 93427;
    std::cout << "Sum of digits of " << number << " is " << sumDigits(number) << '\n';
    return 0;
}
