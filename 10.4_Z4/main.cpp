#include <iostream>

void bubbleSort(int array[], int size) {
    bool swapped;  // ���� ��� ������������ �������
    int iteration{0};  // ������� ��������

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        // ��������� ���������� ����������� ��������� �� i
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        iteration++;

        // ���� �� ���� �������, ������ ��� ������������
        if (!swapped) {
            std::cout << "Early termination on iteration " << iteration << std::endl;
            break;
        }
    }

    if (swapped) {
        std::cout << "Sorted on the last iteration: " << iteration << std::endl;
    }
}

int main() {
    int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    std::cout << "Result: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
