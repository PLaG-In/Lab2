#include "stdafx.h"
#include "WorkWithVec.h"
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

float min_elem;

void MultArrOnMinElem(float & n)
{
	n *= min_elem;
}

void ProcessVector(vector<float> & numbers)
{
	if (!numbers.empty())
	{
		min_elem = *min_element(numbers.begin(), numbers.end());
		for_each(numbers.begin(), numbers.end(), MultArrOnMinElem);
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
