#pragma once
#include"Publication.h"
#include"Magazine.h"
#include"Book.h"
class Library
{
protected:
	string company;
	vector<Publication*> arr;
public:
	Library();
	Library(string c, Publication* obj);
	void setCompany(string c);
	string getCompany()const;
	void showList()const;
	void addLib(Publication* obj);
	void dell(int index);
	void findName(string n)const;
	void findAuthor(string a)const;
	void findYears(int y)const;

};

