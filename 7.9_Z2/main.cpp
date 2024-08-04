#include <iostream>

// Функция sumTo принимает целочисленный параметр value
int sumTo(int value) {
    int sum = 0; // Переменная для накопления суммы

    // Цикл от 1 до value
    for (int i = 1; i <= value; ++i) {
        sum += i; // Добавляем текущее значение i к сумме
    }

    return sum; // Возвращаем накопленную сумму
}

int main() {
    int value;
    std::cout << "Enter number: ";
    std::cin >> value;

    // Вызов функции sumTo и вывод результата
    std::cout << "Sum of " << value << " is " << sumTo(value) << std::endl;

    return 0;
}
