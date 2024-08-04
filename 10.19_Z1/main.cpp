#include <iostream>
#include <string>
#include <string_view>

constexpr std::string_view names[] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Greg", "Holly"}; // ������ ������ ���

// ������� �������� ������� ���, ������� �������� ��������� �������, � ���������� ������� names
bool checkName(std::string_view name_check)
{
    for(std::string_view name : names) // ���������� ��� ����� � names
    {
        if(name_check == name) // ��������� �� ���������� � ����� ������
            return true; // ���������� true, ���� ��� �������
    }
    return false; // ���������� false, ���� ��� �� �������
}

int main()
{
    std::string name_check{}; // ������ ���������� ��� ������ �����

    std::cout << "Enter a name: ";
    std::cin >> name_check; // ���� �����

    if(checkName(name_check)) // �������� ������� ����� � ������� names
        std::cout << name_check << " was found.\n";
    else
        std::cout << name_check << " was not found.\n";
    return 0;
}
