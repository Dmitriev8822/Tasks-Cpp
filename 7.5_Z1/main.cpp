#include <iostream>
using namespace std;

int calculate(int a, int b, char op) {
    int result;

    switch (op) {
        case '+': // ��������
            result = a + b;
            break;
        case '-': // ���������
            result = a - b;
            break;
        case '*': // ���������
            result = a * b;
            break;
        case '/': // �������
            if (b == 0) // ��������� ������: ������� �� ����
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result = a / b;
            break;
        case '%':
            if (b == 0) // ��������� ������: ������� �� ����
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result = a % b;
            break;
        default: // ��������� ����������, ���� �������� �� ��� ������
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
