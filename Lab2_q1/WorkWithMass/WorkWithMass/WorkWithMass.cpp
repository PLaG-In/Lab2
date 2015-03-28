// WorkWithMass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "WorkWithMass.h"
float min_elem;

void MultArrOnMinElem(float &n)
{
	n *= min_elem;
}

void ProcessVector(vector<float> & vectOfNum)
{
	if (!vectOfNum.empty())
	{
		min_elem = *min_element(vectOfNum.begin(), vectOfNum.end());
		for_each(vectOfNum.begin(), vectOfNum.end(), MultArrOnMinElem);
		sort(vectOfNum.begin(), vectOfNum.end());
		for (size_t i = 0; i < vectOfNum.size(); ++i)
		{
			cout << vectOfNum[i] << " ";
		}
	}
	else
		cout << "The vector is empty" << endl;
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

