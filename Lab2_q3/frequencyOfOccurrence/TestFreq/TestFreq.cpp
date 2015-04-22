// TestFreq.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../frequencyOfOccurrence/frequencyOfOccurrence.h"
#include <map>
#include <string>

using namespace std;


BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<string> emptyVector;
	map<string, int> dictOfWords = DetermineTheFrequency(emptyVector);
	BOOST_CHECK(dictOfWords.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<string> emptyVector;
	map<string, int> dictOfWords = DetermineTheFrequency(emptyVector);
	BOOST_CHECK(dictOfWords.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<string> emptyVector;
	map<string, int> dictOfWords = DetermineTheFrequency(emptyVector);
	BOOST_CHECK(dictOfWords.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<string> emptyVector;
	map<string, int> dictOfWords = DetermineTheFrequency(emptyVector);
	BOOST_CHECK(dictOfWords.empty());
}
