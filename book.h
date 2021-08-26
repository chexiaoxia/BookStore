#ifndef _BOOK_H
#define _BOOK_H
// The correct values are F, M, S, and C - for fiction, mystery, sci-fi, and computer, respectively.
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
    // Change numbers to enum types.
    const char* numToEnum(int n) const;		    
private:
    //  Input as strings (c-style strings), of maximum lengths 31.
    char title[31];
    //  Input as strings (c-style strings), of maximum lengths 21.
    char author[21];
    Genre type;
    //  The price should be a positive double. 
    double price;
};

#endif
