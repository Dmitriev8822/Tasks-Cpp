#include <iostream>
#include "io.h"

int main()
{
    int num1 = readNumber(); // Считываем первое число от пользователя
    int num2 = readNumber(); // Считываем второе число от пользователя
    writeAnswer(num1 + num2); // Вычисляем сумму двух чисел и выводим результат

    return 0; // Возвращаем 0, чтобы указать успешное завершение программы
}
