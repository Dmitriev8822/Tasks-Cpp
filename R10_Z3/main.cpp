#include <iostream>

void swap(int& a, int& b)
{
    int temp = a; // создаём переменную для временного хранения значения a
    a = b; // значение b передаём в a
    b = temp; // значение temp, которая хранит значение a, передаём в b
}

int main()
{
    int a{1}, b{9};
    std::cout << "Before swap:\n" << "a = " << a << "\nb = " << b << '\n';
    swap(a, b);
    std::cout << "After swap:\n" << "a = " << a << "\nb = " << b << '\n';
    return 0;
}
