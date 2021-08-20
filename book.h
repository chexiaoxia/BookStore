#ifndef _BOOK_H
#define _BOOK_H

enum Genre {FICTION, MYSTERY, SCIFI, COMPUTER};

class Book
{
public:
    Book();
    Book(char* t, char* a, Genre g, double p);
    const char* getTitle() const;
    const char* getAuthor() const;
    double getPrice() const;
    Genre getGenre() const;
    void display() const;
    const char* numToEnum(int n) const;		    
private:
    char title[31];
    char author[21];
    Genre type;
    double price;
};

#endif
