#include<iostream>
#include<string>
#include"Magazine.h"
#include"Library.h"
using std::cin;
int main()
{
	setlocale(LC_ALL, "ru");
    Library aa;
    try
    {
        aa.addLib(new Book("", "wwww", 1015, "1324dfg3"));
    }
    catch (const PublicationException* obj)
    {
        cout << obj->Message() << endl;
    }

    cout << endl;

    try
    {
        aa.addLib(new Book("tyte", "aaa", -1, "12ewf13sfs"));
    }
    catch (const PublicationException* obj)
    {
        cout << obj->Message() << endl;
    }

    cout << endl;

    aa.showList();


	return 0;
}