#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename M>
M mult(M a, int b)
{
    return a * b;
}

template <typename X, typename Y>
auto sub(X a, Y b)
{
    return a - b;
}

int main()
{
    // тестируем функцию add
    std::cout << "Test add\n";
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    // тестируем функцию mult
    std::cout << "Test mult\n";
    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	// тестируем функцию sub
    std::cout << "Test sub\n";
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
	return 0;
}
