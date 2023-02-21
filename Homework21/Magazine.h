#pragma once
#include"Publication.h"
#include<vector>
#include<algorithm>
using std::vector;
class Magazine :public Publication
{
protected:
	vector <string> statia;
public:
	Magazine();
	Magazine(string n, string a, int years, string s);
	string getStatia(int i)const;
	void addStatia(string s);

	void show()const override;
};
