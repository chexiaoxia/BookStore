enum Genre {FICTION, MYSTERY, SCIFI, COMPUTER};

class Book
{
public:
    Book();
    void set(const char* t, const char* a, Genre g, double p);
    const char* getTitle() const;
    const char* getAuthor() const;
    double getPrice() const;
    Genre getGenre() const;
    void display() const;
		    
private:
    char title[31];
    char author[21];
    Genre type;
    double price;
}
