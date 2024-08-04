#include <iostream>
#include <iterator>
#include <limits>

int main()
{
    // ������� ��������� ���������� ���� �� ������������
    int number{};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;

        // ���� ������������ ���� ������������ ������
        if (std::cin.fail())
            std::cin.clear(); // ���������� ��� ����� ������

        // ���������� ����� ������ ������� �� ������� ������
        // (���������� �� ����, ���� � ��� ������ ��� ���)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (number < 1 || number > 9);

    // ����� ������������� ������
    int arr[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num_index{};

    for (int i{0}; i < sizeof(arr) / sizeof(arr[0]); ++i)
    {
        int x{arr[i]};
        std::cout << x << ' ';
        if(x == number)
            num_index = i;
    }

    std::cout << "Index: " << num_index << '\n'; // ������� ������ ����� number � ������� arr

    return 0;
}
