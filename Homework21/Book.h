#pragma once
#include"Publication.h"

class Book:public Publication
{protected:
	string rezyme;
public:
	Book();
	Book(string n, string a, int years, string rezyme);
	void setRezyme(string r);
	string getRezyme()const;
	void show()const override;

};

