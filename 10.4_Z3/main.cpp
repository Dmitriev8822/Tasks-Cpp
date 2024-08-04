#include <iostream>

void bubbleSort(int array[], int size) {
    // Внешний цикл, который отслеживает количество итераций
    for (int i = 0; i < size - 1; ++i) {
        // Внутренний цикл для прохода по массиву
        for (int j = 0; j < size - i - 1; ++j) {
            // Сравниваем текущий элемент с следующим
            if (array[j] > array[j + 1]) {
                // Если текущий элемент больше, меняем их местами
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    // Исходный массив
    int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    // Размер массива
    int size = sizeof(array) / sizeof(array[0]);

    // Вызов функции сортировки
    bubbleSort(array, size);

    // Вывод отсортированного массива
    std::cout << "Result: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
