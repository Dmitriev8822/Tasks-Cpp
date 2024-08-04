#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // ќбъ€вл€ем переменные
    string name{};
    float age{};

    // ¬водим им€
    cout << "Enter your name: ";
    getline(cin >> ws, name);

    // ¬водим возраст
    cout << "Enter your age: ";
    cin >> age;

    // ќбрабатываем и выводим результаты
    cout << std::setprecision(3) << name << ", you've lived " << age / name.length() << " years for each letter in your name";
    return 0;
}
