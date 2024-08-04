#include <iostream>
using namespace std;

int calculate(int a, int b, char op) {
    int result;

    switch (op) {
        case '+': // сложение
            result = a + b;
            break;
        case '-': // вычитание
            result = a - b;
            break;
        case '*': // умножение
            result = a * b;
            break;
        case '/': // деление
            if (b == 0) // обработка ошибки: деление на ноль
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result = a / b;
            break;
        case '%':
            if (b == 0) // обработка ошибки: деление на ноль
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result = a % b;
            break;
        default: // обработка исключения, если оператор не был найден
            cout << "Error: Invalid operator!" << endl;
            return 0;
    }

    return result;
}

int main() {
    int a, b;
    char op;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    int result = calculate(a, b, op);
    cout << "Result: " << result << endl;

    return 0;
}
