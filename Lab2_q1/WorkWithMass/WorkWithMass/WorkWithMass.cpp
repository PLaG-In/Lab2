// WorkWithMass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
float min_elem;

void MultMinElem(float n)
{
	cout << n * min_elem << " ";
}

int CreateVector()
{
	float elem = 0;
	size_t i = 0;
	vector<float> newArr;
	cout << "Enter array of numbers(enter any letter in the end): ";
	while (scanf("%f", &elem) == 1)
	{
		newArr.push_back(elem);
		cout << newArr[i++] << " ";
	}
	sort(newArr.begin(), newArr.end());
	min_elem = newArr[0];
	for_each(newArr.begin(), newArr.end(), MultMinElem);
	for (size_t j = 0; j < i; ++j)
	{
		cout << newArr[j] << " ";
	}
	return 0;
}

int main()
{
	CreateVector();
	system("pause");
	return 0;
}

