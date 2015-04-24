// RemoveExtraSpaces.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "RemoveExtraSpaces.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
using namespace std;

void RemoveSpaces(string & str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
	 if (str[0] == ' ' || (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
		{
			str.erase(i, 1);
			i--;
		}
	}
}

