#include <iostream> // нам нужен iostream, поскольку мы используем его в этом файле

int getInteger()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}
