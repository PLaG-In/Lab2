#include "stdafx.h"
#include "WorkWithVec.h"
#include <algorithm>
#include <numeric>

using namespace std;

float min_elem;

void MultArrOnMinElem(float & n)
{
	n *= min_elem;
}

void ProcessVector(std::vector<float> & numbers)
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

void FillInVector(vector<float> & vectOfNum)
{
	float elem = 0;
	size_t i = 0;
	cout << "Enter array of numbers(enter any letter in the end): ";
	while (scanf("%f", &elem) == 1)
	{
		vectOfNum.push_back(elem);
		i++;
	}
}

int main()
{
	vector<float> vectOfNum;
	FillInVector(vectOfNum);
	ProcessVector(vectOfNum);
	system("pause");
	return 0;
}