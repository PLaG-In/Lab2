// WorkWithMass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
float min_elem;

void MultArrOnMinElem(float &n)
{
	n *= min_elem;
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
	min_elem = *min_element(vectOfNum.begin(), vectOfNum.end());
	for_each(vectOfNum.begin(), vectOfNum.end(), MultArrOnMinElem);
	sort(vectOfNum.begin(), vectOfNum.end());
	for (size_t j = 0; j < i; ++j)
	{
		cout << vectOfNum[j] << " ";
	}
}

int main()
{
	CreateVector();
	system("pause");
	return 0;
}

