#include <iostream>

// ����������� ������� ��� ���������� ����������
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // �������� ������ 7 �����������
    for (int i = 0; i <= 6; ++i) {
        std::cout << "Factorial of " << i << " is " << factorial(i) << '\n';
    }
    return 0;
}
