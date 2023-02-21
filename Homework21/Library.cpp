#include "Library.h"

Library::Library()
{
}

Library::Library(string c, Publication* obj)
{
    company = c;
    arr.push_back(obj);
}

void Library::setCompany(string c)
{
    company = c;

}

string Library::getCompany() const
{
    return company;
}

void Library::showList() const
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << i + 1 << " #" << endl;
        arr[i]->show()  ;
        cout << "\n\n";

    }
}

void Library::addLib(Publication* obj)
{
    arr.push_back(obj);
}

void Library::dell(int index)
{
    if (index <= arr.size())
    {
        index--;
        arr.erase(arr.begin() + index);
    }
}

void Library::findName(string n) const
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (n == arr[i]->getName())
        {
            arr[i]->show();
            cout << "\n\n";
        }
    }
}

void Library::findAuthor(string a) const
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (a == arr[i]->getAuthor())
        {
            arr[i]->show();
            cout << "\n\n";
        }
    }
}

void Library::findYears(int y) const
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (y == arr[i]->getYears())
        {
            arr[i]->show();
            cout << "\n\n";
        }
    }
}
