#include <iostream>

// ������� ��� ����� ���������� ���� ��������� Advertising
struct Advertising
{
    int adsShown{};
    double clickThroughRatePercentage{};
    double averageEarningsPerClick{};
};

Advertising getAdvertising()
{
    Advertising temp{};
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarningsPerClick;
    return temp;
}

void printAdvertising(Advertising ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '%' << '\n';
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';

    // ��� ����� ��������� ad.clickThroughRatePercentage �� 100,
    // ������ ��� ��� ������� �� 100, � �� ���������
    std::cout << "Total Earnings: $" <<
        (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}

int main()
{
    // ���������� ���������� ��������� Advertising
    Advertising ad{ getAdvertising() };
    printAdvertising(ad);

    return 0;
}
