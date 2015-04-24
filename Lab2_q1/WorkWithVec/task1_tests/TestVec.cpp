// TestVec.cpp : Defines the entry point for the console application.
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

BOOST_AUTO_TEST_CASE(VectorWithMinElementZero)
{
	vector<float> numbers = { 4, 0, 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 0, 0, 0 }));
}

BOOST_AUTO_TEST_CASE(VectorWithOneElement)
{
	vector<float> numbers = { 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 9 }));
}

BOOST_AUTO_TEST_CASE(VectorWithMinNegativeElement)
{
	vector<float> numbers = { -1, 1, 2, 3 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { -3, -2, -1, 1 }));
}

BOOST_AUTO_TEST_CASE(VectorWithMinPositiveElement)
{
	vector<float> numbers = { 3, 6, 2, 4 };
	ProcessVector(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 4, 6, 8, 12 }));
}