// 02_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

// ������������ �������� ������������ �����
void Concatenation()
{
	string firstName, lastName;
	cout << "Enter your first name: ";
	cin >> firstName;
	
	cout << "Enter your last name: ";
	cin >> lastName;

	string tmp;
	getline(cin, tmp);

	// ���������� �������� + ��� ������������ �����
	string fullName = firstName + " " + lastName;
	cout << "Hello, " << fullName << std::endl;
}

// ������������ �������� ���������� ��������� �� ������
void FetchSubString()
{
	string helloWorld = "Hello, world!";
	string world = helloWorld.substr(7, 5);

	cout << "substr(8, 5) of \"" << helloWorld << "\" is " << world << "\n";
}

// ������������ ������������ ������ ��������� � ������
void FindSubstring()
{
	// ������ ������ ����� ��� ������
	cout << "Enter a text to search: ";
	string search;
	do
	{
		getline(cin, search);
		if (search.empty())
		{
			cout << "Text to search should not be empty. Please try again: ";
		}

	// ������ ������������ �� ��� ���, ���� �� �� ������ ������ ������
	}while(search.empty());

	// ������ ������ �����, � ������� ����� ������ ������� �����
	cout << "Enter a text to search in: ";
	string subject;
	getline(cin, subject);

	size_t matchCount = 0;
	size_t startPos = 0;
	// ����, ���� �� ������ �� ������� ������� ������
	while (startPos < subject.length())
	{
		// ���� ������ search � ������ subject ������� � ������� startPos
		size_t const matchPos = subject.find(search, startPos);

		// ���� �� ����� ��������� ��������� � ������, �� ������� �� �����
		if (matchPos == string::npos)
		{
			break;
		}

		// ����������� ���������� ��������� ���������
		++matchCount;
		// ����������� ������� ������ ������ ���������� ��������� 
		// �� ����� ������� ������, ����������� ��� ����� ����� ��������� ������
		startPos = matchPos + search.length();
	}

	cout << "Number of found matches is: " << matchCount << "\n";

}

char ReplaceSpaceWithUnderline(char ch)
{
	locale loc;
	if (isspace(ch, loc))
	{
		return '_';
	}
	else
	{
		return ch;
	}
}

// ������������ ��������� transform ��� ������ ��������
// �� ������� �������������
void TransformString()
{
	cout << "Enter a few words: ";
	string text;
	getline(cin, text);
	transform(text.begin(), text.end(), text.begin(), &ReplaceSpaceWithUnderline);
	cout << "The entered text with spaced replaced with underline is:\n" << text << "\n";
}

// ������������ �������� ��������� �������� �� ������
void EraseCharactersFromString()
{
	string helloWorld = "Hello, world!";
	size_t worldOffset = helloWorld.find("world");
	cout << "String befofe erasing: " << helloWorld << "\n";
	if (worldOffset != string::npos)
	{
		helloWorld.erase(worldOffset, strlen("world"));
	}

	cout << "String after erasing: " << helloWorld << "\n";
}

// ����������� �������� ������� �������� ������ ������
void InsertCharactersIntoString()
{
	string s = "Madam, Adam.";
	cout << "String before insertion: " << s << "\n";
	s.insert(7, "I'm ");
	cout << "String after insertion: " << s << "\n";

}

// ����������� ������ ��������� �������� � ������ �� ������ ������
void ReplaceCharactersWithinString()
{
	string helloWorld = "Hello, world!";
	cout << "String before replace: " << helloWorld << "\n";
	helloWorld.replace(helloWorld.begin() + 7, helloWorld.begin() + 12, "Everybody");
	cout << "String after replacing 'world' to 'everybody': " << helloWorld << "\n";
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	// ������������ �������� ������������ �����
	Concatenation();

	// ������������ �������� ���������� ��������� �� ������
	FetchSubString();

	// ������������ ������������ ������ ��������� � ������
	FindSubstring();

	// ������������ ��������� transform ��� ������ ��������
	// �� ������� �������������
	TransformString();

	// ������������ �������� ��������� �������� �� ������
	EraseCharactersFromString();
	
	// ����������� �������� ������� �������� ������ ������
	InsertCharactersIntoString();

	// ����������� ������ ��������� �������� � ������ �� ������ ������
	ReplaceCharactersWithinString();

	return 0;
}

