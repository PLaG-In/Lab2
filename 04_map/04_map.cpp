// 04_map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

void ShowAnimalTypes()
{
	// ќбъ€вл€ем новый тип AnimalTypeMapping, выполн€ющий отображение
	// строки в строку
	typedef map<string, string> AnimalTypeMapping;

	// —оздаем контейнер типов животных и заполн€ем его
	AnimalTypeMapping animalTypes;
	animalTypes["Cat"]			= "Mammal";
	animalTypes["Shark"]		= "Fish";
	animalTypes["Dog"]			= "Mammal";
	animalTypes["Sparrow"]		= "Bird";
	animalTypes["Crocodile"]	= "Reptile";
	animalTypes["Raven"]		= "Bird";

	// ¬ыводим элементы вектора в output
	for (AnimalTypeMapping::const_iterator it = animalTypes.begin();
		it != animalTypes.end();
		++it
		)
	{
		cout << it->first << " => " << it->second << "\n";
	}

	// »спользу€ оператор [] получаем доступ к элементу Cat
	cout << "Type of a Cat is " << animalTypes["Cat"] << "\n";

	// »щем слона
	AnimalTypeMapping::const_iterator pos = 
		animalTypes.find("Elephant");

	if (pos != animalTypes.end())
	{
		cout << "Type of an Elephant is " << pos->second << "\n";
	}
	else
	{
		cout << "Type of an Elephant is unknown\n";
	}
}

// »ллюстраци€ отображени€ строк на числа
void ShowMonthsDuration()
{
	std::map<string, int> monthDurations;
	monthDurations["jan"] = 31;
	monthDurations["feb"] = 28;
	monthDurations["mar"] = 31;
	monthDurations["apr"] = 30;
	monthDurations["may"] = 31;
	monthDurations["jun"] = 30;
	monthDurations["jul"] = 31;
	monthDurations["aug"] = 31;
	monthDurations["sep"] = 30;
	monthDurations["oct"] = 31;
	monthDurations["nov"] = 30;
	monthDurations["dec"] = 31;

	
	// “.к. в контейнере map элементы хран€тс€ отсортированными по ключу
	// (используетс€ древовидна€ структура), мес€цы будут выведены
	// а алфавитном, а не в хронологическом пор€дке
	for (std::map<string, int>::const_iterator it = monthDurations.begin();
		it != monthDurations.end();
		++it)
	{
		cout << it->first << ": " << it->second << "\n";
	}
}

int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
{

	ShowAnimalTypes();

	ShowMonthsDuration();
	return 0;
}

