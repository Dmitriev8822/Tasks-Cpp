#include <iostream>

int main()
{
    int num1{ 0 }; // объ€вл€ем num1
    int num2{ 0 }; // объ€вл€ем num2

	std::cout << "Enter an integer: ";
	std::cin >> num1; // вводим целочисленное значение в num1

	std::cout << "Enter another integer: ";
	std::cin >> num2; // вводим целочисленное значение в num2

	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n'; // выводим num1 + num2
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n'; // выводим num1 - num2

	return 0;
}
