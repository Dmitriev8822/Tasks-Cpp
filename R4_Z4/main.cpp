#include <iostream>
#include "constants.h"

using namespace std;

int main()
{
    double height{};

    cout << "Enter height: ";
    cin >> height;

    for(int i = 0; i <= height; i++) // ���� ��� ������� ������� ���� � ������ ������ �������
    {
        double covered_distance = (constants::earth_gravity * (i * i)) / 2; // ��������� ������� ������ �������� ��� �� i ������
        double ground_distance = height - covered_distance; // ��������� ���������� �� �����
        if(ground_distance <= 0)
        {
            cout << "At " << i << " seconds, the ball is on the ground." << endl; // ������� ��������� � ���, ��� ��� �� �����
            break; // ������� �� �����
        }
        cout << "At " << i << " seconds, the ball is at height: " << ground_distance << " meters." << endl; // ������� ������� ������ ����
    }
    return 0;
}
