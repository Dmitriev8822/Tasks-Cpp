#include <iostream>

int main()
{
    int num{ 0 }; // ��������� num

	std::cout << "Enter an integer: ";
	std::cin >> num; // ������ ������������� �������� � num

	std::cout << "Double " << num << " is: " << num * 2 << '\n'; // ������� num * 2
	std::cout << "Triple " << num << " is: " << num * 3 << '\n'; // ������� num * 3

	return 0;
}
