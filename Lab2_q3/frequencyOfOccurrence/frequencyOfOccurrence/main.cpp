// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "frequencyOfOccurrence.h"
#include <boost/algorithm/string.hpp>

using namespace std;

int main(int argc, char* argv[])
{
	string str;
	getline(cin, str);
	map<string, int> dictOfWords;
	dictOfWords = DetermineTheFrequency(str);
	for (auto it = dictOfWords.begin(); it != dictOfWords.end(); it++)
	{
		std::cout << it->first << ' ' << it->second << '\n';
	}
	system("pause");
	return 0;
}
