// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "frequencyOfOccurrence.h"
#include <boost/algorithm/string.hpp>

using namespace std;

int main(int argc, char* argv[])
{
	vector <string> vecOfstr;
	if (argc != 2) {
		cout << "Usage: lab2 [string] \n";
		return 0;
	}
	boost::split(vecOfstr, argv[1], boost::is_any_of("\t "));
	DetermineTheFrequency(vecOfstr);
	system("pause");
	return 0;
}
