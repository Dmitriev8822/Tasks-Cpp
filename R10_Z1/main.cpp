#include <iostream>
#include <array>
#include <numeric>

// создаём именованное пространство для названия предметов в инвентаре
namespace Items
{
    // перечисляем элементы в инвенатре
    enum Items
    {
        health_potion,
        torch,
        arrow,
        max_items
    };
}


// функция находит сумму всех элементов массива
int countTotalItems(const std::array<int, Items::max_items>& arr) // принимаем ссылку на массив
{
    return std::accumulate(arr.begin(), arr.end(), 0); // используем функцию accumulate для нахождения суммы элементов
}

int main()
{
    std::array<int, Items::max_items> number_items{2, 5, 10}; // создаём массив number_items для перечисления количества элементов в инвентаре
    const std::array<int, Items::max_items>& arr{ number_items }; // создаём ссылку на массив number_items

    std::cout << "The sum of the items is " << countTotalItems(arr) << '\n'; // выводим суммарное количество элементов в инвентаре
    std::cout << "Number of torches is " << arr[Items::torch]; // выводим количество факелов в инвентаре

    return 0;
}
