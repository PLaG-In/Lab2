// ��������� ������������� ������ ���������� �����-������.
// � �������������� ����������� ���������� �������� STL

#include "stdafx.h"

// ��������� ������������� ��������������� �� ������������ ���� std,
// ����������� ����������� ����������� ���������� STL ��� �������� ������� �����
// ��� ������ ��������� �������� �� ������������ ���� ��������� ����:
// std::string ������ string,
// std::cout ������ cout
// ������������ ��������� using namespace � ������������ ������ ������ ������������,
// �.�. ��� ������������� ������� �������� �������������� �� ���������� ������������ ����
// �� ���� ������, ������������ ������ ������������ ����, ��� ����� ���� ������������,
using namespace std;

// ������������ �����-������ ����� � ��������� ������� �
// ��������� ������ �����/������
void FahrenheitToCelsius()
{
	cout << "======================\n";
	cout << "The program converts temperature from Fahrenheit to Celsius\n";
	// ������ ������ ����������� � �������� ����������
	cout << "Enter temperature in Fahrenheit: ";

	double fahrenheit;
	// ���� ������������, ���� ������������ �� ������ ���������� ����� c ��������� �������
	while (!(cin >> fahrenheit)) 
	{
		// ����������� ������������ � ���, ��� �� ���� ��������� ������
		cout << "You must enter a valid floating point number. Please try again\n";
		// ���������� ���� ��������� ������
		// (��� �����, ���������� �������� ������ �������� �� �����)
		cin.clear();

		// ��������� ������ � ��������� � ��� ���������� ������� �� 
		// ������� ����� ������
		string s;
		getline(cin, s);
	}

	// ��������� ����������� � ������� �������
	double celsius = (fahrenheit - 32) * 5 / 9;

	// ������� �� � ����������� ����� ������
	cout << "Temperature in Celsius is " << celsius << "\n";
}

// ������������ ������������� �������������, ��� ������������ �������
// ���������
void DecHex()
{
	// ������ ������������ ������ ����� � ���������� ������� ���������
	cout << "======================\n";
	cout << "The program converts integers from decimal to hexadecimal notation\n";
	cout << "Enter decimal number: ";

	// ��������� ����� ����� � ���������� number
	int number;
	while (!(cin >> number))
	{
		cout << "Incorrect decimal number. Please try again: ";
		cin.clear();
		// ���������� ������� �� ����� ������
		string s;
		getline(cin, s);
	}
	
	// ������� ��� � ����������������� ������� ��������� � �������������� 
	// ������������ hex
	cout 
		<< "The entered number in hexadecimal notation is: " 
		<< hex << number << "\n";

	// ������ ������������ ������ ����� � ���������������� ������� ���������
	cout << "Enter hexadecimal number: ";

	// ����������� ����� ����� �� ������ ����� ����� � ����������������� �������,
	// ���������� �����, � ����� ������� ������������� �� ���������� �������
	while (!(cin >> hex >> number >> dec))
	{
		cout << "Incorrect hexadecimal number. Please try again: ";
		cout.clear();
		string s;
		getline(cin, s);
	}

	// ������� ��������� ����� � ���������� �������, ��������������
	// ���������� ����� ������ �� �� �������������
	cout << "The entered number in decimal notation is " << dec << number << "\n";
}

// ������������ �������� ��������� �����/������
void FileIO()
{
	cout << "======================\n";
	cout << "Creating file file.txt\n";

	// ������� ����� ��� ������ � ���� file.txt
	ofstream outputStream("file.txt");
	// ������� � ���� ������ Hello!, � ������ ����� 10
	outputStream.put('H');
	outputStream << "ello!" << 10;

	// ������� ����� ��� ����� �� ����� file.txt
	ifstream inputStream("file.txt");

	// ���������� ������� ������� �� ������� ������
	ifstream::pos_type currentPos = inputStream.tellg();

	// ��� ����� ������ ����� �����:
	// ������������ � �����, ������ ������� (��� �������� � ������) � ������������
	// � �������� �������
	inputStream.seekg(0, ios_base::end);
	ifstream::pos_type fileLength = inputStream.tellg();
	inputStream.seekg(currentPos, ios_base::beg);

	// ������� ����� �����, ������� ���� �� ������ �������� flush
	cout
		<< "File length before flushing output stream is " 
		<< fileLength << "\n";
	// ������ ������� ����� 0, �.�. �� ������, ������� �� ������ � 
	// �������� �����, �� ��������� ��������� � �����.
	// � ���� ��� ������� ������ ����� ���������� �������� flush

	// ��������� �������� flush � �������� �������, ���������
	// ������ �� ������ � ����
	outputStream.flush();	// ���� outputStream << flush;

	// �������� flush ����������� �� ��� �������� ����� ��� ������ ��������
	// outputStream.close();

	// ������ ����� �����
	inputStream.seekg(0, ios_base::end);
	fileLength = inputStream.tellg();
	inputStream.seekg(currentPos, ios_base::beg);

	// ������ ������ ��������� ����� 8 (����� ������ Hello!10), ���������
	// ������ ���� �������� � ����
	cout
		<< "File length after flushing output stream is " 
		<< fileLength << "\n";

	cout << "File content:\n";
	// ��������� ������������ ���������� �� �������� �����
	while (!inputStream.eof())
	{
		char ch = static_cast<char>(inputStream.get());
		cout.put(ch);
	}

	cout << "\n";

	// ���� �������� �������� close() � �������� ������� ����������� 
	// ���������� C++, ��� �������, ��� �������������, ���������
	// ��� ����� ������� ������������� ��� ���������� �������� ��� ������ �� �������
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	// ������������ �����-������ ����� � ��������� ������� �
	// ��������� ������ �����/������
	FahrenheitToCelsius();

	// ������������ ������������� �������������, ��� ������������ �������
	// ���������
	DecHex();

	// ������������ �������� ��������� �����/������
	FileIO();
	return 0;
}

