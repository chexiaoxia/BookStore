#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include "store.h"
using namespace std;

Store::Store()
{
    cashRegister = 0;
    currentSize = 0;
    maxSize = 5;
    bookList = new Book[5];
}

Store::~Store()
{
    delete [] bookList;
}
double Store::getCashRegister() const
{
    return cashRegister;
}

int Store::getCurrentSize() const
{
    return currentSize;
}

void Store::addBook(char* t, char* a, Genre g,double p)
{
    Book b(t,a,g,p);
    if(currentSize == maxSize)
    {
        grow();
    }
    bookList[currentSize] = b;
    currentSize++;
    cashRegister += p;
}

void Store::grow()
{
    maxSize = currentSize + 5;
    Book* newList = new Book[maxSize];
    for(int i = 0; i < currentSize; i++)
    {
        newList[i] = bookList[i];
    }
    delete [] bookList;
    cout << "Array being resized to " << maxSize << "allocated slots.";
    bookList = newList;
}

void Store::saleBook(char* t)
{
    int p = findTitle(t);

    for(int i = p ;i < currentSize; i++) 
    {
        bookList[i] = bookList[i+1];
    }     
    
    currentSize--;
    cashRegister += getCashRegister();
    cout << "Book sold" << endl;	
}

void Store::display()
{
     cout << "TITLE\t\t\t\t\t" << "AUTHOR\t\t\t\t\t" << "GENRE\t\t\t\t\t" << "PRICE\t\t\t\t\t" << endl;
     for(int i = 0; i < currentSize;i++)
     {
         bookList[i].display();
     }
        
     cout << "The total of books is: " << currentSize << endl;
     cout << "The total amount of cash is: " << cashRegister << endl;
}

int Store::findTitle(char* t)
{
    int i;
    for( i = 0; i < currentSize; i++)
    {
        if(strcmp(bookList[i].getTitle(), t) == 0)
        {
	    cout << bookList[i].getTitle() << ", ";
            cout << bookList[i].getAuthor() << ", ";
	    cout << bookList[i].getGenre() << ", ";
	    cout << bookList[i].getPrice() << endl;
	}
    }

    return i;
}

bool Store::findAuthor(char* a)
{
    for(int i = 0; i < currentSize; i++)
    {
        if(strcmp(bookList[i].getAuthor(), a) == 0)
        {
	    cout << bookList[i].getTitle() << ", ";
            cout << bookList[i].getAuthor() << ", ";
	    cout << bookList[i].getGenre() << ", ";
	    cout << bookList[i].getPrice() << endl;
	}
    }

    return true;
}
