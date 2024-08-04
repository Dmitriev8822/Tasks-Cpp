#include <iostream>

int main()
{
    int num{ 0 }; // объ€вл€ем num

	std::cout << "Enter an integer: ";
	std::cin >> num; // вводим целочисленное значение в num

	std::cout << "Double " << num << " is: " << num * 2 << '\n'; // выводим num * 2
	std::cout << "Triple " << num << " is: " << num * 3 << '\n'; // выводим num * 3

	return 0;
}
