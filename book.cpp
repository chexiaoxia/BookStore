#include <iostream>
#include <cstring>
#include <cctype>
#include "book.h"

Book::Book()
{
    
}

void set(const char* t, const char* a, Genre g, double p)
{
    strcpy(title, t);
    strcpy(author, a);
    type = g;
    price = p;
}

const char* getTitle() const
{
    return title;
}

const char* getAuthor() const
{
    return author;
}

double getPrice() const
{
    return price;
}

Genre getGenre() const
{
    return type;
}

void display() const
{
    cout << "Tittle" <<"                        " << "Author" << "                 "<< "Genre" <<"            "<<"price"<<"             " << endl;

}
