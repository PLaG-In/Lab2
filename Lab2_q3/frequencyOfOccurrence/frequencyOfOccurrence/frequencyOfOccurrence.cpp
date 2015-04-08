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
		char * vecWord = vec[i].c_str;
		strlwr(vecWord);
		auto pos = dictOfWords.find(vecWord);
		if (pos != dictOfWords.end())
			dictOfWords[vecWord]++;
		else
			dictOfWords[vecWord] = 1;
	}
	for (i = 0; i < dictOfWords.size(); i++)
		cout << vec[i] << " " << dictOfWords[vec[i]] << endl;
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

