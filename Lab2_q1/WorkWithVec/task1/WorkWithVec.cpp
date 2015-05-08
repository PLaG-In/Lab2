// WorkWithVec.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WorkWithVec.h"
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

vector<float> ProcessVector(vector<float> & numbers)
{
	if (!numbers.empty())
	{
		float minElem = *min_element(numbers.begin(), numbers.end());
		transform(numbers.begin(), numbers.end(), numbers.begin(),
			bind2nd(multiplies<float>(), minElem));
		sort(numbers.begin(), numbers.end());
	}
	return numbers;
}
