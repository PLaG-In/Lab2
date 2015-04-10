// WorkWithVec.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task1/WorkWithVec.h"

using namespace std;

bool VectorsAreEqual(vector<float> const& x, vector<float> const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(ResultWithEmptyVector)
{
	vector<float> emptyVector;
	ProcessVector(emptyVector);
	BOOST_CHECK(emptyVector.empty());
}

BOOST_AUTO_TEST_CASE(VectorWithMinElemEqZero)
{
	vector<float> numbers = { 4, 0, 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 0, 0, 0 }));
}

BOOST_AUTO_TEST_CASE(VectorWithoutPositivesDoesntChangeContent)
{
	vector<float> numbers = { -4, -1, -3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 4, 12, 16 }));
}

BOOST_AUTO_TEST_CASE(VectorWithOnePositiveElement)
{
	vector<float> numbers = { -1, 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { -3, 1 }));
}

BOOST_AUTO_TEST_CASE(VectorWithSeveralPositiveElements)
{
	vector<float> numbers = { -1, 1, 2, 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { -3, -2, -1, 1 }));
}