#include <iostream>
#include <iterator>

// Определение функции find
int* find(int* begin, int* end, int value) {
    // Проходим по всем элементам массива от begin до end
    for (int* ptr = begin; ptr != end; ++ptr) {
        if (*ptr == value) {
            return ptr; // Возвращаем указатель на первый элемент, равный value
        }
    }
    return end; // Если значение не найдено, возвращаем указатель на конец массива
}

int main() {
    int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

    // Ищем первый элемент со значением 20
    int* found{ find(std::begin(arr), std::end(arr), 20) };

    // Если найден элемент со значением 20, распечатываем его
    if (found != std::end(arr)) {
        std::cout << *found << '\n';
    }

    return 0;
}
