#include <iostream>

// ������ ������������ ���
namespace Animals
{
    // ������ ������������
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
    int animals_legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0}; // ��������� ������, ������� ������ ���������� ��� ��������
    std::cout << animals_legs[Animals::elephant]; // ������� ���������� ��� �����
    return 0;
}
