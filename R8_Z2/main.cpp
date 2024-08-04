#include <iostream>

// ќбъ€вл€ем псевдонимы типов
typedef double Degrees;
using Radians = double;

namespace Constants
{
    inline constexpr double pi { 3.14159 };
}

Radians convertToRadians(Degrees degrees)
{
    return degrees * Constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
