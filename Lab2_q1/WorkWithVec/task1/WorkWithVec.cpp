#include "stdafx.h"
#include "WorkWithVec.h"
#include <algorithm>
#include <numeric>

using namespace std;

float min_elem;

void MultArrOnMinElem(float &n)
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
		for (auto &number : numbers)
		{
			cout << number << " ";
		}
	}
	else
	{
		cout << "The vector is empty" << endl;
	}
}

void CreateVector()
{
	float elem = 0;
	size_t i = 0;
	vector<float> vectOfNum;
	cout << "Enter array of numbers(enter any letter in the end): ";
	while (scanf("%f", &elem) == 1)
	{
		vectOfNum.push_back(elem);
		i++;
	}
	ProcessVector(vectOfNum);
}

int main()
{
	CreateVector();
	system("pause");
	return 0;
}