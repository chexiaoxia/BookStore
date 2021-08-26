#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include "book.h"

using namespace std;
Book::Book()
{
    strcpy(title,"");
    strcpy(author, "");
    price = 0;    
}

Book::Book(char* t, char* a, Genre g, double p)
{
    strcpy(title, t);
    strcpy(author, a);
    type = g;
    price = p;
}

const char*Book::getTitle() const
{
    return title;
}

const char* Book::getAuthor() const 
{
    return author;
}

double Book::getPrice() const
{
    return price;
}

Genre Book::getGenre() const
{
    return type;
}

void Book::display() const
{
    cout << title << "\t\t\t\t\t" << author << "\t\t\t\t\t" << numToEnum(type) << "\t\t\t\t\t" << "$"  << setprecision(2) << fixed << price << endl;
}

// Change numbers to enum types.
const char* Book::numToEnum(int n) const

{
    if(n == 0)
    {
        return "FICTION";
    }
    else if(n == 1)
    {
        return "MYSTERY";
    }
    else if(n == 2)
    {
        return "SCIFI";
    }
    else if(n == 3)
    {
        return "COMPUTER";
    }
}
