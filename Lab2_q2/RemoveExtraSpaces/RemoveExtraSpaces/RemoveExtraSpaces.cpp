// RemoveExtraSpaces.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "RemoveExtraSpaces.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string & str)
{
	bool space = true;
	string str1;
	str1.reserve(str.length());
	for (size_t i = 0; i < str.length(); i++)
	{
		if ((i + 1 <= str.length()) && (str[i] == ' ') && (str[i + 1] == ' ' || str[i + 1] == '\0' || space))
		{
			continue;
		}
		else
		{
			space = false;
			str1 += str[i];
		}
	}
	return str1;
}

