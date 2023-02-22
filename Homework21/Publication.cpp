#include "Publication.h"

Publication::Publication()
{
    name = "no name";
    author = "no author";
    years = 0;
}

Publication::Publication(string n, string a, int years)
{
    if (a == "")
        throw BookException(a);
    else if (n == "")
        throw BookException(n);
    else if (years <= 0)
    {
        string s=std::to_string(years);
        throw EditionYearException(s);
    }
    else
    {
        name = n;
        author = a;
        this->years = years;
    }
    
}

void Publication::setName(string n)
{
    if (n == "")
        throw BookException(n);
    else
        name = n;
}

void Publication::setAuthor(string a)
{
    if (a == "")
        throw BookException(a);
    else 
        author = a;
}

void Publication::setYears(int years)
{
    if (years <= 0)
    {
    string s = std::to_string(years);
    throw EditionYearException(s);
    }
   else
    this->years = years;
}

string Publication::getName() const
{
    return name;
}

string Publication::getAuthor() const
{
    return author;
}

int Publication::getYears() const
{
    return years;
}
