#include <iostream>
#include <array>
#include <string>
#include <algorithm>

// ��������� Student ��� �������� ����� � ������
struct Student {
    std::string name;
    int score;
};

int main() {
    // ������ ���������
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

    // ���������� std::max_element ��� ���������� �������� � ���������� ����������� ������
    auto bestStudent = std::max_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.score < b.score;
        });

    // �������� ��� ������� ��������
    if (bestStudent != students.end()) {
        std::cout << bestStudent->name << " is the best student\n";
    }

    return 0;
}
