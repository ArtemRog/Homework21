#pragma once
#include<iostream>
#include<string>
#include"PublicationException.h"

using std::string;
using std::endl;
using std::cout;
class Publication
{
protected:
	string name;
	string author;
	int years;
public:
	Publication();
	Publication(string n, string a, int years);
	void setName(string n);
	void setAuthor(string a);
	void setYears(int years);
	string getName()const;
	string getAuthor()const;
	int getYears()const;
	virtual void show()const = 0;
};

