#include <iostream>
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
    cout << title << "\t\t\t" << author << "\t\t\t" << type << "\t\t\t" << "$" << price << "\t\t\t" << endl;
}
