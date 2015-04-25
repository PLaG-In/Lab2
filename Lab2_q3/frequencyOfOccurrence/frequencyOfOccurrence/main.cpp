// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "frequencyOfOccurrence.h"
#include <boost/algorithm/string.hpp>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "Usage: lab2 [string] \n";
		return 0;
	}
	string str = argv[1];
	DetermineTheFrequency(str);
	system("pause");
	return 0;
}
