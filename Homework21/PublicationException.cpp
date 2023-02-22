#include "PublicationException.h"

PublicationException::PublicationException()
{
	name = "nn";
}

PublicationException::PublicationException(string n)
{
	name = n;
}

BookException::BookException()
{
}

BookException::BookException(string n) :PublicationException(n)
{
}

string BookException::Message() const
{
	return "Book:"+name+" has wrong Book";
}

EditionYearException::EditionYearException()
{
}

EditionYearException::EditionYearException(string n):PublicationException(n)
{
}

string EditionYearException::Message() const
{
	return "Edition Year:" + name + " has wrong year";
}
