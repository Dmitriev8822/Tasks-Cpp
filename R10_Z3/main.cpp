#include <iostream>

void swap(int& a, int& b)
{
    int temp = a; // ������ ���������� ��� ���������� �������� �������� a
    a = b; // �������� b ������� � a
    b = temp; // �������� temp, ������� ������ �������� a, ������� � b
}

int main()
{
    int a{1}, b{9};
    std::cout << "Before swap:\n" << "a = " << a << "\nb = " << b << '\n';
    swap(a, b);
    std::cout << "After swap:\n" << "a = " << a << "\nb = " << b << '\n';
    return 0;
}
