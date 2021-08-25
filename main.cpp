#include <iostream>
#include <cstring>
#include <cctype>
#include "book.h"
#include "store.h"
using namespace std;
int main()
{
  /*  Book b[3];
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
*/
    Store s;
    cout << "Please tell me the amount of money in the store cash register: " << s.getCashRegister() << endl;
    cout << "Please tell me  how many books in the inventory list: " << s.getCurrentSize() << endl;
    cout << endl;
    cout << "Please input the starting amount of money in the store's cash register (as a double)" << endl;
    double cashRegister;
    cin >> cashRegister;
    char choice;
    do
    {
        cout << "A:   Add a book to inventory" << endl; 
        cout << "F:   Find a book from inventory" << endl; 
        cout << "S:   Sell a book" << endl; 
        cout << "D:   Display the inventory list" << endl; 
        cout << "G:   Genre summary" << endl; 
        cout << "M:   Show this Menu" << endl; 
        cout << "X:   EXit the program" << endl; 
        cout << "Please make a choice for the menu:" << endl;
	cin >> choice;
	cin.ignore();
	if(choice == 'a' || choice == 'A')
	{
	    cout << "A:   Add a book to inventory" << endl; 
            cout << "Type in the title:" << endl;
	    char title[30];
	    cin.getline(title,30);
	    cout << "Please type in the author:" << endl;
	    char author[20];
	    cin.getline(author,20);
	    cout << "Please type in the enum type and you need to make a choice, F, M, S or C:" << endl;
	    enum Genre type;
	    cout << "Enter Genre - (F)iction, (M)ystery, (S)ci-Fi, or (C)omputer:";
	    char select;
	    cin >> select;
            do{
                //  For the books matching the selected genre only.
                if (select == 'F' || select == 'f')
                    type = FICTION;
                else if (select == 'M' || select == 'm')
                    type = MYSTERY;
                else if (select == 'S' || select == 's')
		    type = SCIFI;
                else if (select == 'C' || select == 'c')
                    type = COMPUTER;
                else
                {
                    cout << "Invalid genre entry.  Please re-enter: ";
                    cin >> select;
                }
	    }while(select != 'f' && select != 'F' && select != 'm' && select != 'M' && select != 's' && select != 'S' && select != 'c' && select !=              'C');
	    cout << " Invalid genre type. Try again." << endl; 
	    cout << "Last one , please type in the price:" << endl;
	    double price;
	    cin >> price;
	    s.addBook(title,author,type,price);

	}

	if(choice == 'd' || choice == 'D')
	{
	   s.display(); 
	}
	
	if(choice == 's' || choice == 'S')
	{
	    cout << "Please enter the title: " << endl;
	    char title[30];
	    cin.getline(title,30);
	    s.saleBook(title);
	}

	if(choice == 'f' || choice == 'F')
	{
	    cout << "Which search option do you like to choose?" << endl;
	    cout << "If you choose title, please enter the title:" << endl;
	    char title[30];
	    cin.getline(title, 30);
	    s.findTitle(title);
            if(s.findTitle(title) == 0)
	    {
	        cout << "Not found book in store." << endl;
	    }
	    
	    cout << "If you choose author, please ebter the author name:" << endl;
	    char author[20];
	    cin.getline(author,20);
	    s.findAuthor(author);
	    if(s.findAuthor(author) == 0)
	    {
	         cout << "Not found book in store." << endl;
	    }
	}

	if(choice == 'g' || choice == 'G')
	{
	    cout << "Which Genre type do you want to reach?" << endl;
	    cout << "Enter Genre - (F)iction, (M)ystery, (S)ci-Fi, or (C)omputer:";
	    enum Genre type;
	    char select;
	    cin >> select;
            do{
                //  For the books matching the selected genre only.
                if (select == 'F' || select == 'f')
                    type = FICTION;
                else if (select == 'M' || select == 'm')
                    type = MYSTERY;
                else if (select == 'S' || select == 's')
		    type = SCIFI;
                else if (select == 'C' || select == 'c')
                    type = COMPUTER;
                else
                {
                    cout << "Invalid genre entry.  Please re-enter: ";
                    cin >> select;
                }

	    }while(select != 'f' && select != 'F' && select != 'm' && select != 'M' && select != 's' && select != 'S' && select != 'c' && select !=              'C');
            s.findGenre(type);
        } 

	}while(choice != 'x' || choice != 'X');

    cout << "Exit the program." << endl;
}
