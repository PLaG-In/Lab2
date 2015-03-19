// 02_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

// Демонстрация операции конкатенации строк
void Concatenation()
{
	string firstName, lastName;
	cout << "Enter your first name: ";
	cin >> firstName;
	
	cout << "Enter your last name: ";
	cin >> lastName;

	string tmp;
	getline(cin, tmp);

	// Используем операцию + для конкатенации строк
	string fullName = firstName + " " + lastName;
	cout << "Hello, " << fullName << std::endl;
}

// Демонстрация операции извлечения подстроки из строки
void FetchSubString()
{
	string helloWorld = "Hello, world!";
	string world = helloWorld.substr(7, 5);

	cout << "substr(8, 5) of \"" << helloWorld << "\" is " << world << "\n";
}

// Демонстрация возможностей поиска подстроки в строке
void FindSubstring()
{
	// Просим ввести текст для поиска
	cout << "Enter a text to search: ";
	string search;
	do
	{
		getline(cin, search);
		if (search.empty())
		{
			cout << "Text to search should not be empty. Please try again: ";
		}

	// Мучаем пользователя до тех пор, пока он не введет пустую строку
	}while(search.empty());

	// Просим ввести текст, в котором нужно искать искомый текст
	cout << "Enter a text to search in: ";
	string subject;
	getline(cin, subject);

	size_t matchCount = 0;
	size_t startPos = 0;
	// Ищем, пока не выйдем за пределы искомой строки
	while (startPos < subject.length())
	{
		// Ищем строку search в строке subject начиная с позиции startPos
		size_t const matchPos = subject.find(search, startPos);

		// Если не нашли вхождения подстроки в строку, то выходим из цикла
		if (matchPos == string::npos)
		{
			break;
		}

		// Увеличиваем количество найденных вхождений
		++matchCount;
		// увеличиваем позицию начала поиска следующего вхождения 
		// на длину искомой строки, перепрыгнув тем самым через найденную строку
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

// Демонстрация алгоритма transform для замены пробелов
// на символы подчеркивания
void TransformString()
{
	cout << "Enter a few words: ";
	string text;
	getline(cin, text);
	transform(text.begin(), text.end(), text.begin(), &ReplaceSpaceWithUnderline);
	cout << "The entered text with spaced replaced with underline is:\n" << text << "\n";
}

// Демонстрация удаления диапазона символов из строки
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

// Иллюстрация операции вставки символов внутрь строки
void InsertCharactersIntoString()
{
	string s = "Madam, Adam.";
	cout << "String before insertion: " << s << "\n";
	s.insert(7, "I'm ");
	cout << "String after insertion: " << s << "\n";

}

// Иллюстрация замены диапазона символов в строке на другую строку
void ReplaceCharactersWithinString()
{
	string helloWorld = "Hello, world!";
	cout << "String before replace: " << helloWorld << "\n";
	helloWorld.replace(helloWorld.begin() + 7, helloWorld.begin() + 12, "Everybody");
	cout << "String after replacing 'world' to 'everybody': " << helloWorld << "\n";
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	// Демонстрация операции конкатенации строк
	Concatenation();

	// Демонстрация операции извлечения подстроки из строки
	FetchSubString();

	// Демонстрация возможностей поиска подстроки в строке
	FindSubstring();

	// Демонстрация алгоритма transform для замены пробелов
	// на символы подчеркивания
	TransformString();

	// Демонстрация удаления диапазона символов из строки
	EraseCharactersFromString();
	
	// Иллюстрация операции вставки символов внутрь строки
	InsertCharactersIntoString();

	// Иллюстрация замены диапазона символов в строке на другую строку
	ReplaceCharactersWithinString();

	return 0;
}

