#include <iostream>

bool isEven(int number) {
    return (number % 2 == 0); // ¬озвращает true, если число четное, и false в противном случае
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (isEven(number)) {
        std::cout << number << " - is even." << std::endl;
    } else {
        std::cout << number << " - is odd." << std::endl;
    }

    return 0;
}
