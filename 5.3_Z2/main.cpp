#include <iostream>

bool isEven(int number) {
    return (number % 2 == 0); // ���������� true, ���� ����� ������, � false � ��������� ������
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (isEven(number)) {
        std::cout << number << " - is even." << std::endl;
    } else {
        std::cout << number << " - is odd." << std::endl;
    }

    return 0;
}
