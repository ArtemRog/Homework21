#include "Book.h"

Book::Book()
{
    rezyme = "no rezyme";
}

Book::Book(string n, string a, int years, string rezyme):Publication(n,a,years)
{
    this->rezyme = rezyme;
}

void Book::setRezyme(string r)
{
    this->rezyme = r;
}

string Book::getRezyme() const
{
    return rezyme;
}

void Book::show() const
{
    cout << "Name:" << name << endl;
    cout << "Author:" << author << endl;
    cout << "Years:" << years << endl;
    cout << "Rezyme:" << rezyme << endl;
}
