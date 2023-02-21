#include "Publication.h"

Publication::Publication()
{
    name = "no name";
    author = "no author";
    years = 0;
}

Publication::Publication(string n, string a, int years)
{
        name = n;
        author = a;
        this->years = years;
    
}

void Publication::setName(string n)
{
    name = n;
}

void Publication::setAuthor(string a)
{
    author = a;
}

void Publication::setYears(int years)
{
    
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
