// TestRemover.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../RemoveExtraSpaces/RemoveExtraSpaces.h"

using namespace std;

bool StringsAreEqual(string const& x, string const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(RemoveSpacesFromEmptyString)
{
	string emptyString;
	emptyString = RemoveSpaces(emptyString);
	BOOST_CHECK(emptyString.empty());
}

BOOST_AUTO_TEST_CASE(StringWithSpacesAtTheBeginning)
{
	string str = "            <-space-";
	BOOST_CHECK(StringsAreEqual(RemoveSpaces(str), "<-space-"));
}

BOOST_AUTO_TEST_CASE(StringWithoutExtraSpaces)
{
	string str = "I am your FATHER!";
	BOOST_CHECK(StringsAreEqual(RemoveSpaces(str), "I am your FATHER!"));
}

BOOST_AUTO_TEST_CASE(StringWithSpacesAtTheEnd)
{
	string str = "-space->           ";
	BOOST_CHECK(StringsAreEqual(RemoveSpaces(str), "-space->"));
}

BOOST_AUTO_TEST_CASE(StringWithExtraSpaces)
{
	string str = "             <-space->    <-space2->         ";
	BOOST_CHECK(StringsAreEqual(RemoveSpaces(str), "<-space-> <-space2->"));
}