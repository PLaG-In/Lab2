// Программа демонстрирует основы потокового ввода-вывода.
// с использованием стандартной библиотеки шаблонов STL

#include "stdafx.h"

// Разрешаем использование идентификаторов из пространства имен std,
// содержащего определения стандартной библиотеки STL без указания полного имени
// Без данной директивы пришлось бы пространство имен указывать явно:
// std::string вместо string,
// std::cout вместо cout
// Использовать директиву using namespace в заголовочных файлах крайне нежелательно,
// т.к. это автоматически сделает видимыми идентификаторы из указанного пространства имен
// во всех файлах, подключающих данный заголовочный файл, что может быть нежелательно,
using namespace std;

// Демонстрация ввода-вывода чисел с плавающей запятой и
// обработки ошибок ввода/вывода
void FahrenheitToCelsius()
{
	cout << "======================\n";
	cout << "The program converts temperature from Fahrenheit to Celsius\n";
	// Просим ввести температуру в градусах Фаренгейта
	cout << "Enter temperature in Fahrenheit: ";

	double fahrenheit;
	// Цикл продолжается, пока пользователь не введет корректное число c плавающей запятой
	while (!(cin >> fahrenheit)) 
	{
		// Информируем пользователя о том, что от него требуется ввести
		cout << "You must enter a valid floating point number. Please try again\n";
		// Сбрасываем флаг состояния ошибки
		// (без этого, дальнейшие операции чтения работать не будут)
		cin.clear();

		// Объявляем строку и считываем в нее оставшиеся символы до 
		// символа конца строки
		string s;
		getline(cin, s);
	}

	// Переводим температуру в градусы Цельсия
	double celsius = (fahrenheit - 32) * 5 / 9;

	// Выводим ее в стандартный поток вывода
	cout << "Temperature in Celsius is " << celsius << "\n";
}

// Демонстрация использования модификаторов, для переключения системы
// счисления
void DecHex()
{
	// Просим пользователя ввести число в десятичной системе счисления
	cout << "======================\n";
	cout << "The program converts integers from decimal to hexadecimal notation\n";
	cout << "Enter decimal number: ";

	// Считываем целое число в переменную number
	int number;
	while (!(cin >> number))
	{
		cout << "Incorrect decimal number. Please try again: ";
		cin.clear();
		// Пропускаем символы до конца строки
		string s;
		getline(cin, s);
	}
	
	// Выводим его в шестнадцатеричной системе счисления с использованием 
	// модификатора hex
	cout 
		<< "The entered number in hexadecimal notation is: " 
		<< hex << number << "\n";

	// Просим пользователя ввести число в шестнадцатеричой системе счисления
	cout << "Enter hexadecimal number: ";

	// Переключаем поток ввода на чтение целых числе в шестнадцатеричной системе,
	// считаываем число, а затем обратно переключаемся на десятичную систему
	while (!(cin >> hex >> number >> dec))
	{
		cout << "Incorrect hexadecimal number. Please try again: ";
		cout.clear();
		string s;
		getline(cin, s);
	}

	// Выводим введенное число в десятичной системе, предварительно
	// переключив поток вывода на ее использование
	cout << "The entered number in decimal notation is " << dec << number << "\n";
}

// Демонстрация операций файлового ввода/вывода
void FileIO()
{
	cout << "======================\n";
	cout << "Creating file file.txt\n";

	// Создаем поток для вывода в файл file.txt
	ofstream outputStream("file.txt");
	// Выводим в него Строку Hello!, а следом число 10
	outputStream.put('H');
	outputStream << "ello!" << 10;

	// Создаем поток для ввода из файла file.txt
	ifstream inputStream("file.txt");

	// Запоминаем текущую позицию во входном потоке
	ifstream::pos_type currentPos = inputStream.tellg();

	// Так можно узнать длину файла:
	// перемещаемся в конец, узнаем позицию (она совпадет с длиной) и возвращаемся
	// в исходную позицию
	inputStream.seekg(0, ios_base::end);
	ifstream::pos_type fileLength = inputStream.tellg();
	inputStream.seekg(currentPos, ios_base::beg);

	// Выводим длину файла, которая была до вызова операции flush
	cout
		<< "File length before flushing output stream is " 
		<< fileLength << "\n";
	// Должно вывести число 0, т.к. те данные, которые мы вывели в 
	// выходной поток, по умолчанию заносятся в буфер.
	// В файл они попадут только после выполнения операции flush

	// Выполняем операцию flush с выходным потоком, сбрасывая
	// данные из буфера в файл
	outputStream.flush();	// либо outputStream << flush;

	// Операция flush выполнилась бы при закрытии файла при помощи операции
	// outputStream.close();

	// Узнаем длину файла
	inputStream.seekg(0, ios_base::end);
	fileLength = inputStream.tellg();
	inputStream.seekg(currentPos, ios_base::beg);

	// Теперь должна вывестись число 8 (длина строки Hello!10), поскольку
	// данные были записаны в файл
	cout
		<< "File length after flushing output stream is " 
		<< fileLength << "\n";

	cout << "File content:\n";
	// Выполняем посимвольное считывание из входного файла
	while (!inputStream.eof())
	{
		char ch = static_cast<char>(inputStream.get());
		cout.put(ch);
	}

	cout << "\n";

	// Явно вызывать операцию close() у файловых потоков стандартной 
	// библиотеки C++, как правило, нет необходимости, поскольку
	// это будет сделано автоматически при разрушении объектов при выходе из функции
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{
	// Демонстрация ввода-вывода чисел с плавающей запятой и
	// обработки ошибок ввода/вывода
	FahrenheitToCelsius();

	// Демонстрация использования модификаторов, для переключения системы
	// счисления
	DecHex();

	// Демонстрация операций файлового ввода/вывода
	FileIO();
	return 0;
}

