#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // ��������� ����������
    string name{};
    float age{};

    // ������ ���
    cout << "Enter your name: ";
    getline(cin >> ws, name);

    // ������ �������
    cout << "Enter your age: ";
    cin >> age;

    // ������������ � ������� ����������
    cout << std::setprecision(3) << name << ", you've lived " << age / name.length() << " years for each letter in your name";
    return 0;
}
