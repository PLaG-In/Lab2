// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "frequencyOfOccurrence.h"
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <vector>
#include <map>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

map <string, int> DetermineTheFrequency(const string &str0)
{
	std::istringstream ist(str0);
	map<string, int> dictOfWords;
	string str;
	while (ist >> str)
	{
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		++dictOfWords[str];
	}
	return dictOfWords;
}


