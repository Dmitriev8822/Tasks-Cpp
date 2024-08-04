#include <iostream>

struct Fraction
{
    int numerator{};
    int denominator{};
};

Fraction getFraction()
{
    Fraction temp{};
    std::cout << "Enter a value for numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> temp.denominator;
    std::cout << '\n';
    return temp;
}

double multiply(Fraction f1, Fraction f2)
{
    return (static_cast<double>(f1.numerator * f2.numerator) / (f1.denominator * f2.denominator));
}

int main()
{
    // Создаем нашу первую дробь
    const Fraction f1{ getFraction() };
    const Fraction f2{ getFraction() };

    const double result{ multiply(f1, f2) };

    std::cout << result << '\n';

    return 0;
}
