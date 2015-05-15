// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GeneratePrimeNumbersSet.h"

using namespace std;

int main()
{
	set<int> primeSet;
	cout << "Input upper bound: ";
	int upperBound;
	cin >> upperBound;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cerr << "Incorrect input!\n";
	}
	primeSet = GeneratePrimeNumSet(upperBound);
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		std::cout << *i << " ";
	}
	system("pause");
}
