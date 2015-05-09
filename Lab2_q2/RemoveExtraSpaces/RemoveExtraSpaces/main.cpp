#include "stdafx.h"
#include "RemoveExtraSpaces.h"
using namespace std;
int main(int argc, char* argv[])
{
	string str;
	if (argc != 2) {
		cout << "Usage: lab1 [string] \n";
		return 0;
	}
	str = argv[1];
	cout << RemoveSpaces(str);
	system("pause");
	return 0;
}

