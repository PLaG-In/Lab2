// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <boost/algorithm/string.hpp>
map<string, string> dictOfWords;
int determineTheFrequency(vector <string> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		dictOfWords[0] = vec[i];
	}
}

int main(int argc, char* argv[])
{
	vector <string> vecOfstr;
	if (argc != 2) {
		cout << "Usage: lab2 [string] \n";
		return 0;
	}
	boost::split(vecOfstr, argv[1], boost::is_any_of("\t "));
	determineTheFrequency(vecOfstr);
	return 0;
}

