#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(sizeof(array) / sizeof(array[0])) };

	// ѕройдемс€ по каждому элементу массива (кроме последнего,
    // который уже будет отсортирован к тому моменту, когда мы туда доберемс€)
	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex - это индекс наименьшего элемента, с которым мы столкнулись в этой итерации
        // Ќачнем с предположени€, что наименьший элемент €вл€етс€ первым элементом этой итерации
		int smallestIndex{ startIndex };

		// «атем ищем меньший элемент в остальной части массива
		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			// ≈сли мы нашли элемент, который меньше нашего ранее найденного наименьшего
			if (array[currentIndex] > array[smallestIndex])
				// тогда отслеживаем его
				smallestIndex = currentIndex;
		}

		// smallestIndex теперь самый маленький элемент в оставшемс€ массиве
        // мен€ем местами наш начальный элемент самым маленьким элементом
        // (это сортирует его в нужное место)
		std::swap(array[startIndex], array[smallestIndex]);
	}

	// “еперь, когда весь массив отсортирован, распечатываем наш отсортированный
    // массив в качестве доказательства, что всЄ работает
	for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';

	return 0;
}
