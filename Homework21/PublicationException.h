#pragma once
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string n);

	virtual string Message()const = 0;
};


class BookException :public PublicationException
{
public:
	BookException();
	BookException(string n);

	string Message()const override;
};

class EditionYearException:public PublicationException
{
public:
	EditionYearException();
	EditionYearException(string n);


	string Message()const override;
};



