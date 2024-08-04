#include <iostream>
#include <cassert>

bool isPrime(int x)
{
    int dividers{ 1 }; // количество делителей.
    for (int divider{ 2 }; divider <= x; ++divider) // проверяем каждый делитель от 2 до x
    {
        if (x % divider == 0) // если x делится на число, то увеличиваем число делителей
            ++dividers;
    }

    return (dividers == 2); // возвращаем true, если число простое (имеет два делителя)
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!";

    return 0;
}
