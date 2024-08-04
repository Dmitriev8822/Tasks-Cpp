#include <iostream>

// создаЄм пространство имЄн
namespace Animals
{
    // создаЄм перечисление
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main()
{
    int animals_legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0}; // объ€вл€ем массив, который хранит количества ног животных
    std::cout << animals_legs[Animals::elephant]; // выводим количество ног слона
    return 0;
}
