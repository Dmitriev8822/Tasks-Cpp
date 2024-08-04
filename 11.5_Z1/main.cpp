#include <iostream>

int sumTo(int value);

void printEmployeeName(const Employee& employee);

std::pair<int, int> minmax(int x, int y);

std::size_t getIndexOfLargestValue(const std::vector<int>& array);

const std::string& getElement(const std::vector<std::string>& array, std::size_t index);

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
