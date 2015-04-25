// GeneratePrimeNumbersSet.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<__int64> GeneratePrimeNumSet(__int64 upBound)
{
	set<__int64> primeSet;
	if (upBound > 0)
	{
		vector <bool> a(upBound + 1);
		for (size_t i = 2; i < upBound; i++)
		{
			if (a[i] == false)
			{
				primeSet.insert(i);
				if (i * i <= upBound)
				{
					for (size_t j = i * i; j <= upBound; j += i)
					{
						a[j] = true;
					}
				}
			}
		}
	}
	//for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	//{
	//	std::cout << *i << " ";
	//}
	return primeSet;
}

