#include "Bookstore.h"

BookStore::BookStore(string n, string a, int b){   // creates a BookStore name n, address a, and number of books in the store b
    name = n;
    address = a;
    numBook = b;
}
BookStore::BookStore(){
    name = "";
    address = "";
    numBook = 0;
}
int BookStore::get_numBook(){
    return numBook;
}
string BookStore::get_name(){
    return name;
}
string BookStore::get_address(){
    return address;
}

void BookStore::set_name(string _name){
    name = _name;
}
void BookStore::set_address(string _address){
    address = _address;
}
void BookStore::set_numBook(int _numBook){
    numBook = _numBook;
}