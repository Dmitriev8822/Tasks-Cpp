#include <iostream>

int main() {
    int start = 5; // ����� ����� ������� ���������� ����� ��� ������

    int i{start};
    while (i >= 1) // �������� ����, ������ ������
    {
        int j = i;
        while (j >= 1) // ��������� ����, ������ �������
        {
            std::cout << j << " ";
            --j;
        }
        std::cout << std::endl;
        --i;
    }

    return 0;
}
