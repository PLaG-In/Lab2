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

BOOST_AUTO_TEST_CASE(VectorWithLowerCaseStrings)
{
	vector<string> vectOfWords = { "new", "bee", "bee", "bew" };
	map<string, int> dictOfWords = DetermineTheFrequency(vectOfWords);
	BOOST_CHECK(dictOfWords["bee"] == 2);
}

BOOST_AUTO_TEST_CASE(VectorWithDifferentCasesStrings)
{
	vector<string> vectOfWords = { "new", "bee", "bee", "bew", "BEE", "bEE", "Bee", "feel" };
	map<string, int> dictOfWords = DetermineTheFrequency(vectOfWords);
	BOOST_CHECK(dictOfWords["bee"] == 5);
}

BOOST_AUTO_TEST_CASE(VectorWithHigherCaseStrings)
{
	vector<string> vectOfWords = { "NEW", "BEE", "BEE", "BEW", "KAZ'MODAN" };
	map<string, int> dictOfWords = DetermineTheFrequency(vectOfWords);
	BOOST_CHECK(dictOfWords["bee"] == 2);
}
