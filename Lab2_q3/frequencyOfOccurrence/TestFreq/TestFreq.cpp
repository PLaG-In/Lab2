// TestFreq.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../frequencyOfOccurrence/frequencyOfOccurrence.h"

using namespace std;


BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<string> emptyVector;
	DetermineTheFrequency(emptyVector);
	BOOST_CHECK(emptyVector.empty());
}
