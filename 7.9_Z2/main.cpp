#include <iostream>

// ������� sumTo ��������� ������������� �������� value
int sumTo(int value) {
    int sum = 0; // ���������� ��� ���������� �����

    // ���� �� 1 �� value
    for (int i = 1; i <= value; ++i) {
        sum += i; // ��������� ������� �������� i � �����
    }

    return sum; // ���������� ����������� �����
}

int main() {
    int value;
    std::cout << "Enter number: ";
    std::cin >> value;

    // ����� ������� sumTo � ����� ����������
    std::cout << "Sum of " << value << " is " << sumTo(value) << std::endl;

    return 0;
}
