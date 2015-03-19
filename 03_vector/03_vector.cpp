// 03_vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

// Иллюстрация нескольких способов, при помощи которых можно вывести
// элементы вектора в поток
void PrintVector()
{
	// Массив (вектор), элементами которого являются строки
	vector<string> strings;
	string arrayOfStrings[] = 
	{
		"Ivan",
		"Peter",
		"John",
		"Smith",
	};
	// Так можно вычислить длину массива элементов произвольного типа
	size_t const arrayLength = sizeof(arrayOfStrings) / sizeof(*arrayOfStrings);

	// Вставляем элементы из массива в вектор
	strings.insert(strings.begin(), &arrayOfStrings[0], &arrayOfStrings[arrayLength]);
	
	// Вставляем элемент в конец массива
	strings.push_back("Jack");

	{
		// Вот так можно за одну строчку скопировать через запятую все элементы массива
		// в стандартный поток вывода
		copy(strings.begin(), strings.end(), ostream_iterator<string>(cout, ", "));

		cout << "\n";
	}

	{
		// Другой способ способ сделать то же самое вручную при помощи
		// итераторов
		for (
			vector<string>::const_iterator it = strings.begin();
			it != strings.end();
			++it
			)
		{
			cout << *it << ", ";
		}
		cout << "\n";
	}

	{
		// А вот это решение "в лоб"
		for (size_t i = 0; i != strings.size(); ++i)
		{
			cout << strings[i] << ", ";
		}
		cout << "\n";

	}
}

// Иллюстрация работы с вектором целых чисел
void VectorOfNumbers()
{
	cout << "==============\n";
	cout << "Vector of numbers\n";

	// Массив, содержащий 10 элементов
	std::vector<int> numbers(10);
	
	// Изначально массив заполнен нулями
	copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, ", "));
	cout << "\n";

	for (int i = 0; i != numbers.size(); ++i)
	{
		numbers[i] = i * i;
	}
	copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, ", "));
	cout << "\n";
}

// Иллюстрация поиска элемента в векторе
void SearchInVector()
{
	vector<string> animals;
	animals.push_back("Cat");
	animals.push_back("Dog");
	animals.push_back("Elephant");
	animals.push_back("Monkey");

	cout << "Animals are: \n";
	copy(animals.begin(), animals.end(), ostream_iterator<string>(cout, ", "));
	cout << "\n";

	// Получаем итератор, ссылающийся на элемент, равный "Elephant"
	vector<string>::const_iterator pos = find(animals.begin(), animals.end(), "Elephant");

	if (pos != animals.end())
	{
		cout << "An Elephant was found at position: " << pos - animals.begin() << "\n";
	}
	else
	{
		cout << "An Elephant was not found\n";
	}


	// Получаем итератор, ссылающийся на элемент, равный "Mouse"
	pos = find(animals.begin(), animals.end(), "Mouse");

	if (pos != animals.end())
	{
		cout << "A Mouse was found at position: " << pos - animals.begin() << "\n";
	}
	else
	{
		cout << "A Mouse was not found\n";
	}

}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	// Иллюстрация нескольких способов, при помощи которых можно вывести
	// элементы вектора в поток
	PrintVector();

	// Иллюстрация работы с вектором целых чисел
	VectorOfNumbers();

	// Иллюстрация поиска элемента в векторе
	SearchInVector();

	return 0;
}

