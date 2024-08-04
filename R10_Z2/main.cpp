#include <iostream>
#include <vector>
#include <algorithm>

// структура для объединения данных о студенте
struct Student
{
    std::string name{};
    int score{};
};

// функция создания студентов
void createStudents(std::vector<Student>& students_arr, int size) // принимаем ссылку на вектор и его размер
{
    for(int i{0}; i < size; ++i) // проходим по всему вектору
    {
        // объявляем переменные
        Student new_student{};
        std::string name{};
        int score{};

        std::cout << "Enter the student's name #" << i + 1 << ": ";
        std::cin >> name; // вводим имя

        std::cout << "Enter the student's score #" << i + 1 << ": ";
        std::cin >> score; // вводим оценку
        if(score < 0 || score > 100) // проверяем, что пользователь ввёл корректную оценку
        {
            std::cout << "Error: invalid score value (must be between 0 and 100)\n"; // выводим суть ошибки
            --i; // уменьшаем счётчик, чтобы можно было повторить ввод
            continue; // сразу переходим к следующей итерации
        }

        new_student.name = name;
        new_student.score = score;

        students_arr[i] = new_student; // добвляем структуру студента в вектор
    }
}

// функция, которая выводит данные о студентах из вектора students_arr
void outputStudents(std::vector<Student>& students_arr, int size) // принимаем ссылку на вектор и его размер
{
    for(int i{0}; i < size; ++i)
    {
        Student actual_student = students_arr[i];
        std::cout << actual_student.name << " got a grade of " << actual_student.score << '\n'; // выводим информацию о студенте
    }
}

// функция для определения правила сортировки
bool greater(Student st1, Student st2)
{
    // сорируем по убыванию боллов, то есть вернётся true в случае, если score студента st1 больше score студента st2
    return (st1.score > st2.score);
}

int main()
{
    int number_students{0}; // переменная для хранения количества студентов

    std::cout << "Enter the number of students: ";
    std::cin >> number_students; // ввод количества студентов

    std::vector<Student> students_arr(number_students); // создания вектора для хранения данных о каждом студенте

    createStudents(students_arr, number_students); // создаём студентов и заполняем вектор students_arr
    std::sort(students_arr.begin(), students_arr.end(), greater); // сортируем студентов по результатам, от большего к меньшему
    outputStudents(students_arr, number_students); // выводим всех студентов в отсортированном виде

    return 0;
}
