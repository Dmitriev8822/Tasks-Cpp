#include <iostream>
#include <vector>
#include <algorithm>

// ��������� ��� ����������� ������ � ��������
struct Student
{
    std::string name{};
    int score{};
};

// ������� �������� ���������
void createStudents(std::vector<Student>& students_arr, int size) // ��������� ������ �� ������ � ��� ������
{
    for(int i{0}; i < size; ++i) // �������� �� ����� �������
    {
        // ��������� ����������
        Student new_student{};
        std::string name{};
        int score{};

        std::cout << "Enter the student's name #" << i + 1 << ": ";
        std::cin >> name; // ������ ���

        std::cout << "Enter the student's score #" << i + 1 << ": ";
        std::cin >> score; // ������ ������
        if(score < 0 || score > 100) // ���������, ��� ������������ ��� ���������� ������
        {
            std::cout << "Error: invalid score value (must be between 0 and 100)\n"; // ������� ���� ������
            --i; // ��������� �������, ����� ����� ���� ��������� ����
            continue; // ����� ��������� � ��������� ��������
        }

        new_student.name = name;
        new_student.score = score;

        students_arr[i] = new_student; // �������� ��������� �������� � ������
    }
}

// �������, ������� ������� ������ � ��������� �� ������� students_arr
void outputStudents(std::vector<Student>& students_arr, int size) // ��������� ������ �� ������ � ��� ������
{
    for(int i{0}; i < size; ++i)
    {
        Student actual_student = students_arr[i];
        std::cout << actual_student.name << " got a grade of " << actual_student.score << '\n'; // ������� ���������� � ��������
    }
}

// ������� ��� ����������� ������� ����������
bool greater(Student st1, Student st2)
{
    // �������� �� �������� ������, �� ���� ������� true � ������, ���� score �������� st1 ������ score �������� st2
    return (st1.score > st2.score);
}

int main()
{
    int number_students{0}; // ���������� ��� �������� ���������� ���������

    std::cout << "Enter the number of students: ";
    std::cin >> number_students; // ���� ���������� ���������

    std::vector<Student> students_arr(number_students); // �������� ������� ��� �������� ������ � ������ ��������

    createStudents(students_arr, number_students); // ������ ��������� � ��������� ������ students_arr
    std::sort(students_arr.begin(), students_arr.end(), greater); // ��������� ��������� �� �����������, �� �������� � ��������
    outputStudents(students_arr, number_students); // ������� ���� ��������� � ��������������� ����

    return 0;
}
