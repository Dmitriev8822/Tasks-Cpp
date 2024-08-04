#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(sizeof(array) / sizeof(array[0])) };

	// ��������� �� ������� �������� ������� (����� ����������,
    // ������� ��� ����� ������������ � ���� �������, ����� �� ���� ���������)
	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex - ��� ������ ����������� ��������, � ������� �� ����������� � ���� ��������
        // ������ � �������������, ��� ���������� ������� �������� ������ ��������� ���� ��������
		int smallestIndex{ startIndex };

		// ����� ���� ������� ������� � ��������� ����� �������
		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			// ���� �� ����� �������, ������� ������ ������ ����� ���������� �����������
			if (array[currentIndex] > array[smallestIndex])
				// ����� ����������� ���
				smallestIndex = currentIndex;
		}

		// smallestIndex ������ ����� ��������� ������� � ���������� �������
        // ������ ������� ��� ��������� ������� ����� ��������� ���������
        // (��� ��������� ��� � ������ �����)
		std::swap(array[startIndex], array[smallestIndex]);
	}

	// ������, ����� ���� ������ ������������, ������������� ��� ���������������
    // ������ � �������� ��������������, ��� �� ��������
	for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';

	return 0;
}
