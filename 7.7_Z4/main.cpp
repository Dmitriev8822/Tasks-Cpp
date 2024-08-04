#include <iostream>
#include <iomanip>

int main() {
    int start = 5;  // начальное значение, которое можно изменить

    int i = 1;
    while (i <= start) {
        // Вычисляем количество пробелов для выравнивания
        int spaces = start - i;

        // Внутренний цикл для вывода пробелов
        while (spaces > 0) {
            std::cout << "  "; // два пробела для выравнивания
            --spaces;
        }

        // Внутренний цикл для вывода чисел
        int j = i;
        while (j >= 1) {
            std::cout << j << " ";
            --j;
        }

        std::cout << std::endl; // отступ
        ++i; // переход на новую строку
    }

    return 0;
}
