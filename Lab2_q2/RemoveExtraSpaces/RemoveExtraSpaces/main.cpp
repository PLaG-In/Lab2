#include "stdafx.h"
#include "RemoveExtraSpaces.h"
using namespace std;
int main(int argc, char* argv[])
{
	string str;
	cout << "Input string: ";
	getline(cin, str);
	cout << RemoveSpaces(str);
	system("pause");
	return 0;
}

