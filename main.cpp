#include <iostream>
#include <cstring>
#include <cctype>
#include "book.h"
using namespace std;
int main()
{
    /*Book b[3] = {Book("Programming for Dummies","Marvin Dipwart","Computer", 24.95),Book("Mutant Space Weasels","Bob Myers","Sci-Fi",5.95),
	         Book("shopping","Xixoaix", "Mystery",55)}; */
    Book b[3];
    Genre t0;
    t0 = COMPUTER;
    Book b0("Programming for Dummies", "Marvin Dipwart", t0, 24.95);
    b[0] = b0;

    t0 = SCIFI;
    Book b1("Mutant Space Weasels", "Bob Myers", t0 ,5.95);
    b[1] = b1;

    t0 = MYSTERY;
    Book b2("shopping", "Xixoaix", t0, 55);
    b[2] = b2;

    Book* p;
    p = b;
    
    cout << "Tittle\t\t\t" << "Author\t\t\t"<< "Genre\t\t\t"<<"price\t\t\t" << endl;
    for(int i = 0; i < 3; i++)
    {
        p[i].display();
	cout << endl;
    }

    cout << endl;
}
