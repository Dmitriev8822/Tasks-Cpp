#include <iostream>
#include <string>
#include <string_view>

constexpr std::string_view names[] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Greg", "Holly"}; // создаём массив имён

// функция проверки наличия имя, которое является атрибутом функции, в глобальном массиве names
bool checkName(std::string_view name_check)
{
    for(std::string_view name : names) // перебираем все имена в names
    {
        if(name_check == name) // проверяем на совпадение с нашим именем
            return true; // возвращаем true, если имя найдено
    }
    return false; // возвращаем false, если имя НЕ найдено
}

int main()
{
    std::string name_check{}; // создаём переменную для записи имени

    std::cout << "Enter a name: ";
    std::cin >> name_check; // ввод имени

    if(checkName(name_check)) // проверка наличия имени в массиве names
        std::cout << name_check << " was found.\n";
    else
        std::cout << name_check << " was not found.\n";
    return 0;
}
