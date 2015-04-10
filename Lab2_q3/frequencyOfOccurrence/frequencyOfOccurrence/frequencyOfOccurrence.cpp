// frequencyOfOccurrence.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <boost/algorithm/string.hpp>
map<string, int> dictOfWords;
void DetermineTheFrequency(vector <string> &vec)
{
	int i;
	for (i = 0; i < vec.size(); i++)
	{
		auto pos = dictOfWords.find(vec[i]);
		if (pos != dictOfWords.end())
			dictOfWords[vec[i]]++;
		else
			dictOfWords[vec[i]] = 1;
	}
	for (std::map<string, int>::const_iterator it = dictOfWords.begin();
		it != dictOfWords.end();
		++it)
	{
		cout << it->first << ": " << it->second << "\n";
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
	DetermineTheFrequency(vecOfstr);
	system("pause");
	return 0;
}

