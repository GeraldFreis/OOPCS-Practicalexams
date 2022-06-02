#include <iostream>
using namespace std;

#ifndef BOOKSTORE_H
#define BOOKSTORE_H

class BookStore {
    protected:
        string name;                // the book store name
        string address;             // the book store address
        int numBook;                // the inventory in the store; takes only non-negative values

    public:
        BookStore();
        BookStore(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
        int get_numBook();
        string get_name();
        string get_address();

        void set_name(string name);
        void set_address(string _address);
        void set_numBook(int _numBook);

        virtual float get_onlineTax() = 0;
};

#endif