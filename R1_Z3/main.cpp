#include <iostream>

int main()
{
    int num1{ 0 }; // ��������� num1
    int num2{ 0 }; // ��������� num2

	std::cout << "Enter an integer: ";
	std::cin >> num1; // ������ ������������� �������� � num1

	std::cout << "Enter another integer: ";
	std::cin >> num2; // ������ ������������� �������� � num2

	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n'; // ������� num1 + num2
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n'; // ������� num1 - num2

	return 0;
}
