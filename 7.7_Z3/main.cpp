#include <iostream>

int main() {
    int start = 5; // здесь можно указать количество строк для вывода

    int i{start};
    while (i >= 1) // основной цикл, создаёт строки
    {
        int j = i;
        while (j >= 1) // вложенный цикл, создаёт столбцы
        {
            std::cout << j << " ";
            --j;
        }
        std::cout << std::endl;
        --i;
    }

    return 0;
}
