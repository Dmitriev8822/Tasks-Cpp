#include <iostream>
#include <algorithm>


// ������� �������� �������������
void createUsers(std::string* ptr, int amount_users) // � ���� ���������� ��������� string ��������� �� ������������ ������ � ���������� ���
{
    for(int i{0}; i < amount_users; ++i) // ���� ��������, ���� �� ����� ������� ��� ������
    {
        std::string name{}; // ���������� ���������� name, ��� �������� ����� ����� � ��
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> name; // ���� �����
        ptr[i] = name; // ���������� ����� � ������
    }
}

void outputUsers(std::string* ptr, int amount_users) // � ���� ���������� ��������� string ��������� �� ������������ ������ � ���������� ���
{
    std::cout << "Here is your sorted list:\n";
    for(int i{0}; i < amount_users; ++i) // ���� ��������, ���� �� ����� �������� ��� �����
       std::cout << "Name #" << i + 1 << ": " << ptr[i] << '\n'; // ����� ����� i
}


int main()
{
    // ��������� ����������
    int amount_users{};

    // ������ ������
    std::cout << "Enter amount of users: ";
    std::cin >> amount_users;

    // ������ ������������ ������ ��� ���������� ��� ������� �������������
    std::string* ptr{ new std::string[amount_users] };

    createUsers(ptr, amount_users); // �������� ������� ��� ����� ���
    std::sort(ptr, ptr + amount_users); // ���������� ������
    outputUsers(ptr, amount_users); // ������� ����� � ��������������� �������

    delete[] ptr; // �������� ���������� ������

    return 0;
}
