// TestFreq.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../frequencyOfOccurrence/frequencyOfOccurrence.h"
#include <map>
#include <string>

using namespace std;


BOOST_AUTO_TEST_CASE(ResultWithEmptyString)
{
	string emptyString;
	map<string, int> dictOfWords = DetermineTheFrequency(emptyString);
	BOOST_CHECK(dictOfWords.empty());
}

BOOST_AUTO_TEST_CASE(VectorWithLowerCaseStrings)
{
	string str = "new bee bee bew new new";
	map<string, int> dictOfWords = DetermineTheFrequency(str);
	BOOST_CHECK(dictOfWords["bee"] == 2);
	BOOST_CHECK(dictOfWords["new"] == 3);
}

BOOST_AUTO_TEST_CASE(VectorWithDifferentCasesStrings)
{
	string str = "new bee bee bew BEE nEw bEE Bee feel";
	map<string, int> dictOfWords = DetermineTheFrequency(str);
	BOOST_CHECK(dictOfWords["bee"] == 5);
	BOOST_CHECK(dictOfWords["new"] == 2);
}

BOOST_AUTO_TEST_CASE(VectorWithHigherCaseStrings)
{
	string str = "NEW BEE BEE BEW KAZ'MODAN NEW";
	map<string, int> dictOfWords = DetermineTheFrequency(str);
	BOOST_CHECK(dictOfWords["bee"] == 2);
	BOOST_CHECK(dictOfWords["new"] == 2);
}
