#include <iostream>

int main() {
    // ���������� ����� �� 'a' �� 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
        // ������� ����� � � ��� ASCII
        std::cout << c << ": " << static_cast<int>(c) << std::endl;
    }

    return 0;
}
