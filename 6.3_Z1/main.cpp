#include <iostream>

using namespace std;

int main()
{
    int smaller{}, larger{}; // объ€вление переменных smaller и larger

    // ввод данных
    cout << "Enter number 1: ";
    cin >> smaller;

    cout << "Enter number 2: ";
    cin >> larger;

    if(smaller > larger)
    {
        int temp; // создание временной переменной в блоке if

        // обмен данных между двум€ переменными по средстав третьей
        temp = larger;
        larger = smaller;
        smaller = temp;
    } // здесь переменна€ temp выгружаетс€ из пам€ти

    // выводим данные
    if (smaller == larger) // провер€ем, что пользователь не ввЄл одинаковые числа
        cout << "Variables are equal" << endl;
    else
    {
        cout << "The smaller value is " << smaller << '\n';
        cout << "The larger value is " << larger << '\n';
    }

    return 0;
}
