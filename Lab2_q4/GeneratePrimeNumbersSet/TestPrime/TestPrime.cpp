// TestPrime.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../GeneratePrimeNumbersSet/GeneratePrimeNumbersSet.h"

using namespace std;

bool SetsAreEqual(set<int> const& x, set<int> const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(ResultWithZeroBound)
{
	set<int> emptySet;
	int upBound = 0;
	emptySet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(emptySet.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithNegativeBound)
{
	set<int> emptySet;
	int upBound = -10;
	emptySet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(emptySet.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithNormalBound)
{
	set<int> testSet;
	int upBound = 15;
	testSet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(SetsAreEqual(testSet, { 2, 3, 5, 7, 11, 13 }));
}
