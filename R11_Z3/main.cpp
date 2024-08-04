#include <iostream>
#include <iterator>

// Итеративная версия функции binarySearch
int binarySearch(const int *array, int target, int min, int max)
{
    while (min <= max)
    {
        int mid = min + (max - min) / 2; // Вычисление средней точки
        if (array[mid] == target)
        {
            return mid; // Целевое значение найдено
        }
        else if (array[mid] < target)
        {
            min = mid + 1; // Поиск в правой половине
        }
        else
        {
            max = mid - 1; // Поиск в левой половине
        }
    }
    return -1; // Целевое значение не найдено
}

int main()
{
    constexpr int array[]{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };

    // Мы собираемся протестировать набор значений
    constexpr int numTestValues{ 9 };
    // Вот тестовые значения
    constexpr int testValues[numTestValues]{ 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    // А вот ожидаемые результаты для каждого значения
    int expectedValues[numTestValues]{ -1, 0, 3, -1, -1, 8, -1, 13, -1 };

    // Перебираем все тестовые значения
    for (int count{ 0 }; count < numTestValues; ++count)
    {
        // Смотрим, есть ли наше тестовое значение в массиве
        int index{ binarySearch(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1) };
        // Если результат соответствует ожидаемому, тогда отлично!
        if (index == expectedValues[count])
             std::cout << "test value " << testValues[count] << " passed!\n";
        else // иначе наша функция binarySearch() не работает
             std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
    }

    return 0;
}
