#include <iostream>

// Функция для печати C-строки
void printCWord(const char* word)
{
    // Проходим по каждому символу строки, пока не достигнем null-символа ('\0')
    for (const char* ptr{word}; *ptr != '\0'; ++ptr)
        std::cout << *ptr; // Выводим текущий символ
}

int main()
{
    char word[]{"Hello, world!"}; // Инициализируем C-строку
    printCWord(word); // Вызываем функцию для печати строки
    return 0;
}
