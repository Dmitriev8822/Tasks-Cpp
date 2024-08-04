#include <iostream>
#include "constants.h"

using namespace std;

int main()
{
    double height{};

    cout << "Enter height: ";
    cin >> height;

    for(int i = 0; i <= height; i++) // Цикл для расчета позиции мяча в каждый момент времени
    {
        double covered_distance = (constants::earth_gravity * (i * i)) / 2; // вычисляем сколько метров пролетел мяч за i секунд
        double ground_distance = height - covered_distance; // Вычисляем расстояние до земли
        if(ground_distance <= 0)
        {
            cout << "At " << i << " seconds, the ball is on the ground." << endl; // Выводим сообщение о том, что мяч на земле
            break; // Выходим из цикла
        }
        cout << "At " << i << " seconds, the ball is at height: " << ground_distance << " meters." << endl; // Выводим текущую высоту мяча
    }
    return 0;
}
