#include <iostream>

using namespace std;

int main()
{
    int smaller{}, larger{}; // ���������� ���������� smaller � larger

    // ���� ������
    cout << "Enter number 1: ";
    cin >> smaller;

    cout << "Enter number 2: ";
    cin >> larger;

    if(smaller > larger)
    {
        int temp; // �������� ��������� ���������� � ����� if

        // ����� ������ ����� ����� ����������� �� �������� �������
        temp = larger;
        larger = smaller;
        smaller = temp;
    } // ����� ���������� temp ����������� �� ������

    // ������� ������
    if (smaller == larger) // ���������, ��� ������������ �� ��� ���������� �����
        cout << "Variables are equal" << endl;
    else
    {
        cout << "The smaller value is " << smaller << '\n';
        cout << "The larger value is " << larger << '\n';
    }

    return 0;
}
