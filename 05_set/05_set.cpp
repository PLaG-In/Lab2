// 05_set.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

void TestAnimals()
{
	set<string> animals;
	static const string animalsArray[] = 
	{
		"cat", "dog", "racoon", "mouse"
	};
	const size_t ANIMALS_COUNT = sizeof(animalsArray) / sizeof(*animalsArray);

	animals.insert(&animalsArray[0], &animalsArray[ANIMALS_COUNT]);

	cout << "Animals are:\n";
	copy(animals.begin(), animals.end(), ostream_iterator<string>(cout, ", "));
	cout << "\n";

	if (animals.find("apple") != animals.end())
	{
		cout << "The animals set contains an apple\n";
	}
	else
	{
		cout << "The animals set does not contain an apple\n";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	TestAnimals();
	return 0;
}

