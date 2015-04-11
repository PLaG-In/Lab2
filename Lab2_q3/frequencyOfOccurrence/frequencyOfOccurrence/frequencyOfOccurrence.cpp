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

using namespace std;

void DetermineTheFrequency(vector<string> vec)
{
	map<string, int> dictOfWords;
	for (size_t i = 0; i < vec.size(); i++)
	{
		string str = vec[i];
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		auto pos = dictOfWords.find(str);
		if (pos != dictOfWords.end())
			dictOfWords[str]++;
		else
			dictOfWords[str] = 1;
	}
	for (std::map<string, int>::const_iterator it = dictOfWords.begin();
		it != dictOfWords.end();
		++it)
	{
		cout << it->first << ": " << it->second << "\n";
	}
}


