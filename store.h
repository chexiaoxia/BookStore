#ifndef _STORE_H
#define _STORE_H


#include "book.h"
class Store
{
public:
    Store();
    ~Store();
    double getCashRegister() const;
    int getCurrentSize() const;
    // After add book the number of books in the booklist will grow.
    void grow();
    void addBook(char* t, char* a, Genre type,double p);
    void saleBook(char* t);
    void display();
    int findTitle(char* t);
    bool findAuthor(char* a);
    void findGenre(const Genre type) const;
private:
    double cashRegister;
    int currentSize;
    // The number of allocated spaces may be at most 5 larger than the number of slots that are actually filled with real data.
    int maxSize;
    Book* bookList;
};

#endif
