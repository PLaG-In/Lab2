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

void ProcessVector(vector<float> & numbers)
{
	if (!numbers.empty())
	{
		float min_elem = *min_element(numbers.begin(), numbers.end());
		transform(numbers.begin(), numbers.end(), numbers.begin(),
			bind2nd(multiplies<float>(), min_elem));
		sort(numbers.begin(), numbers.end());
		for (auto number : numbers)
		{
			cout << number << " ";
		}
	}
	else
	{
		cout << "The vector is empty" << endl;
	}
}
