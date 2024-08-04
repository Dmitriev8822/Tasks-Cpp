#include <iostream>
#include <array>
#include <string>
#include <algorithm>

// Структура Student для хранения имени и баллов
struct Student {
    std::string name;
    int score;
};

int main() {
    // Массив студентов
    std::array<Student, 8> students{
        { { "Albert", 3 },
          { "Ben", 5 },
          { "Christine", 2 },
          { "Dan", 8 },
          { "Enchilada", 4 },
          { "Francis", 1 },
          { "Greg", 3 },
          { "Hagrid", 5 } }
    };

    // Используем std::max_element для нахождения студента с наибольшим количеством баллов
    auto bestStudent = std::max_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.score < b.score;
        });

    // Печатаем имя лучшего студента
    if (bestStudent != students.end()) {
        std::cout << bestStudent->name << " is the best student\n";
    }

    return 0;
}
