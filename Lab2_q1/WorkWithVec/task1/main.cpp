#include "stdafx.h"
#include "WorkWithVec.h"

using namespace std;

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