#include <iostream>
#include <iomanip>

int main() {
    int start = 5;  // ��������� ��������, ������� ����� ��������

    int i = 1;
    while (i <= start) {
        // ��������� ���������� �������� ��� ������������
        int spaces = start - i;

        // ���������� ���� ��� ������ ��������
        while (spaces > 0) {
            std::cout << "  "; // ��� ������� ��� ������������
            --spaces;
        }

        // ���������� ���� ��� ������ �����
        int j = i;
        while (j >= 1) {
            std::cout << j << " ";
            --j;
        }

        std::cout << std::endl; // ������
        ++i; // ������� �� ����� ������
    }

    return 0;
}
