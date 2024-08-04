#include <iostream>

int main() {
    // Перебираем буквы от 'a' до 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
        // Выводим букву и её код ASCII
        std::cout << c << ": " << static_cast<int>(c) << std::endl;
    }

    return 0;
}
