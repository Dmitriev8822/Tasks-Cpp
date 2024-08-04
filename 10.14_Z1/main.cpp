#include <iostream>
#include <algorithm>


// фукнци€ создани€ пользователей
void createUsers(std::string* ptr, int amount_users) // в виде аргументов принимаем string указатель на динамический массив и количество имЄн
{
    for(int i{0}; i < amount_users; ++i) // цикл работает, пока не будут введены все имеена
    {
        std::string name{}; // объ€вление переменной name, дл€ будущего ввода имени в неЄ
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> name; // ввод имени
        ptr[i] = name; // добавление имени в массив
    }
}

void outputUsers(std::string* ptr, int amount_users) // в виде аргументов принимаем string указатель на динамический массив и количество имЄн
{
    std::cout << "Here is your sorted list:\n";
    for(int i{0}; i < amount_users; ++i) // цикл работает, пока не будут выведены все имена
       std::cout << "Name #" << i + 1 << ": " << ptr[i] << '\n'; // вывод имени i
}


int main()
{
    // объ€вл€ем переменные
    int amount_users{};

    // вводим данные
    std::cout << "Enter amount of users: ";
    std::cin >> amount_users;

    // создаЄм динамический массив дл€ заполнени€ его именами пользователей
    std::string* ptr{ new std::string[amount_users] };

    createUsers(ptr, amount_users); // вызываем функцию дл€ ввода имЄн
    std::sort(ptr, ptr + amount_users); // соратируем массив
    outputUsers(ptr, amount_users); // выводим имена в отсортированном массиве

    delete[] ptr; // отчищаем выделенную пам€ть

    return 0;
}
