// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GeneratePrimeNumbersSet.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "Usage: lab2 [int] \n";
		return 0;
	}
	__int64 upperBound;
	upperBound = atoi(argv[1]);
	GeneratePrimeNumSet(upperBound);
	system("pause");
}
