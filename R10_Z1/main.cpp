#include <iostream>
#include <array>
#include <numeric>

// ������ ����������� ������������ ��� �������� ��������� � ���������
namespace Items
{
    // ����������� �������� � ���������
    enum Items
    {
        health_potion,
        torch,
        arrow,
        max_items
    };
}


// ������� ������� ����� ���� ��������� �������
int countTotalItems(const std::array<int, Items::max_items>& arr) // ��������� ������ �� ������
{
    return std::accumulate(arr.begin(), arr.end(), 0); // ���������� ������� accumulate ��� ���������� ����� ���������
}

int main()
{
    std::array<int, Items::max_items> number_items{2, 5, 10}; // ������ ������ number_items ��� ������������ ���������� ��������� � ���������
    const std::array<int, Items::max_items>& arr{ number_items }; // ������ ������ �� ������ number_items

    std::cout << "The sum of the items is " << countTotalItems(arr) << '\n'; // ������� ��������� ���������� ��������� � ���������
    std::cout << "Number of torches is " << arr[Items::torch]; // ������� ���������� ������� � ���������

    return 0;
}
