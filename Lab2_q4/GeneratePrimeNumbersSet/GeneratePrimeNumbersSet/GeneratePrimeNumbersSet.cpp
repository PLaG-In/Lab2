// GeneratePrimeNumbersSet.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <set>

using namespace std;

std::set<int> GeneratePrimeNumSet(int upBound)
{
	std::set<int> primeSet;
	bool flag;
	for (int num = 2; num < upBound; num++)
	{
		flag = true;
		for (int secNum = 2; secNum < num; secNum++)
		{
			if (num % secNum == 0) 
			{ 
				flag = false; 
				break; 
			}
		}
		if (flag)
		{
			primeSet.insert(num);
		}
	}
	for (auto i = primeSet.begin(); i != primeSet.end(); ++i)
	{
		std::cout << *i << " ";
	}
	return primeSet;
}

