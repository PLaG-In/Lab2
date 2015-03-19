// 03_vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

// ����������� ���������� ��������, ��� ������ ������� ����� �������
// �������� ������� � �����
void PrintVector()
{
	// ������ (������), ���������� �������� �������� ������
	vector<string> strings;
	string arrayOfStrings[] = 
	{
		"Ivan",
		"Peter",
		"John",
		"Smith",
	};
	// ��� ����� ��������� ����� ������� ��������� ������������� ����
	size_t const arrayLength = sizeof(arrayOfStrings) / sizeof(*arrayOfStrings);

	// ��������� �������� �� ������� � ������
	strings.insert(strings.begin(), &arrayOfStrings[0], &arrayOfStrings[arrayLength]);
	
	// ��������� ������� � ����� �������
	strings.push_back("Jack");

	{
		// ��� ��� ����� �� ���� ������� ����������� ����� ������� ��� �������� �������
		// � ����������� ����� ������
		copy(strings.begin(), strings.end(), ostream_iterator<string>(cout, ", "));

		cout << "\n";
	}

	{
		// ������ ������ ������ ������� �� �� ����� ������� ��� ������
		// ����������
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
		// � ��� ��� ������� "� ���"
		for (size_t i = 0; i != strings.size(); ++i)
		{
			cout << strings[i] << ", ";
		}
		cout << "\n";

	}
}

// ����������� ������ � �������� ����� �����
void VectorOfNumbers()
{
	cout << "==============\n";
	cout << "Vector of numbers\n";

	// ������, ���������� 10 ���������
	std::vector<int> numbers(10);
	
	// ���������� ������ �������� ������
	copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, ", "));
	cout << "\n";

	for (int i = 0; i != numbers.size(); ++i)
	{
		numbers[i] = i * i;
	}
	copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, ", "));
	cout << "\n";
}

// ����������� ������ �������� � �������
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

	// �������� ��������, ����������� �� �������, ������ "Elephant"
	vector<string>::const_iterator pos = find(animals.begin(), animals.end(), "Elephant");

	if (pos != animals.end())
	{
		cout << "An Elephant was found at position: " << pos - animals.begin() << "\n";
	}
	else
	{
		cout << "An Elephant was not found\n";
	}


	// �������� ��������, ����������� �� �������, ������ "Mouse"
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
	// ����������� ���������� ��������, ��� ������ ������� ����� �������
	// �������� ������� � �����
	PrintVector();

	// ����������� ������ � �������� ����� �����
	VectorOfNumbers();

	// ����������� ������ �������� � �������
	SearchInVector();

	return 0;
}

