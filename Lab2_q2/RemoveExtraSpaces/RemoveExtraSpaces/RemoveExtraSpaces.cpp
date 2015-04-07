// RemoveExtraSpaces.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


string RemoveSpaces(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
	 if (str[0] == ' ' || (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
		{
			str.erase(i, 1);
			i--;
		}
	}
	cout << str << endl;
	return str;
}

int main(int argc, char* argv[])
{
	string str;
	if (argc != 2) {
		cout <<"Usage: lab1 [string] \n";
		return 0;
	}
	str = argv[1];
	RemoveSpaces(str);
	return 0;
}

