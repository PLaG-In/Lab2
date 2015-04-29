// GeneratePrimeNumbersSet.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int> GeneratePrimeNumSet(int upBound)
{
	set<int> primeSet;
	if (upBound > 0)
	{
		vector <bool> a(upBound + 1);
		for (size_t i = 2; i < upBound; i++)
		{
			if (a[i] == false)
			{
				primeSet.insert(i);
				if (i <= upBound / i)
				{
					for (size_t j = i * i; j <= upBound; j += i)
					{
						a[j] = true;
					}
				}
			}
		}
	}
	return primeSet;
}

