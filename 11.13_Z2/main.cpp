#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

// Структура Season для хранения имени сезона и средней температуры
struct Season {
    std::string_view name;
    double averageTemperature;
};

int main() {
    // Массив сезонов
    std::array<Season, 4> seasons{
        { { "Spring", 285.0 },
          { "Summer", 296.0 },
          { "Fall", 288.0 },
          { "Winter", 263.0 } }
    };

    // Сортируем сезоны по возрастанию средней температуры
    std::sort(seasons.begin(), seasons.end(),
        [](const Season& a, const Season& b) {
            return a.averageTemperature < b.averageTemperature;
        });

    // Печатаем имена сезонов после сортировки
    for (const auto& season : seasons) {
        std::cout << season.name << '\n';
    }

    return 0;
}
