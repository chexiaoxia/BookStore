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
    int maxSize;
    Book* bookList;
};

#endif
