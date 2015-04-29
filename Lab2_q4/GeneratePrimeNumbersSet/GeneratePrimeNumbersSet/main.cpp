// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GeneratePrimeNumbersSet.h"

using namespace std;

int main(int argc, char* argv[])
{
	set<int> primeSet;
	if (argc != 2) {
		cout << "Usage: lab2 [int] \n";
		return 0;
	}
	int upperBound;
	upperBound = atoi(argv[1]);
	primeSet = GeneratePrimeNumSet(upperBound);
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		std::cout << *i << " ";
	}
	system("pause");
}
