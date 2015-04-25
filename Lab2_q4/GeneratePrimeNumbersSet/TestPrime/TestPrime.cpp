// TestPrime.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../GeneratePrimeNumbersSet/GeneratePrimeNumbersSet.h"

using namespace std;

bool SetsAreEqual(set<__int64> const& x, set<__int64> const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(ResultWithZeroBound)
{
	set<__int64> emptySet;
	__int64 upBound = 0;
	emptySet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(emptySet.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithNegativeBound)
{
	set<__int64> emptySet;
	__int64 upBound = -10;
	emptySet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(emptySet.empty());
}

BOOST_AUTO_TEST_CASE(ResultWithNormalBound)
{
	set<__int64> testSet;
	__int64 upBound = 15;
	testSet = GeneratePrimeNumSet(upBound);
	BOOST_CHECK(SetsAreEqual(testSet, { 2, 3, 5, 7, 11, 13 }));
}
