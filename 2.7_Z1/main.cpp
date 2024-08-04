#include <iostream> // здесь нам тоже нужен iostream, поскольку мы используем его и в этом файле
#include "input.cpp"

int getInteger(); // предварительное объ€вление функции getInteger

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}
