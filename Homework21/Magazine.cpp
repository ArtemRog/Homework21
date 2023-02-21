#include "Magazine.h"

Magazine::Magazine()
{

}

Magazine::Magazine(string n, string a, int years, string s) :Publication(n, a, years)
{
    statia.push_back(s);
}

string Magazine::getStatia(int i) const
{
    return statia[i];
}


void Magazine::addStatia(string s)
{
    statia.push_back(s);
}

void Magazine::show() const
{
    cout << "Name:" << name << endl;
    cout << "Author:" << author << endl;
    cout << "Years:" << years << endl;
    cout << "Article:";
    for (int i = 0; i < statia.size(); i++)
    {
        if (i == statia.size() - 1)
            cout << statia[i] << "." << endl;

        else
            cout << statia[i] << ",";
    }
}
