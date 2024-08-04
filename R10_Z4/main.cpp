#include <iostream>

// ������� ��� ������ C-������
void printCWord(const char* word)
{
    // �������� �� ������� ������� ������, ���� �� ��������� null-������� ('\0')
    for (const char* ptr{word}; *ptr != '\0'; ++ptr)
        std::cout << *ptr; // ������� ������� ������
}

int main()
{
    char word[]{"Hello, world!"}; // �������������� C-������
    printCWord(word); // �������� ������� ��� ������ ������
    return 0;
}
