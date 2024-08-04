#include <iostream>
#include <cstdint>

int main()
{
    int a{0};
    auto l = [](int a)
        {
            if(a)
                return 2;
            else
                return -2;
        };

    int b = l(a);

    std::cout << b << '\n';

    return 0;
}
