#include "BarnesNoble.h"


BarnesNoble::BarnesNoble(string n){  // set name n  
                    // should call the corresponding constructor from the parent class
                    // with the online parameter being false
    name = n;
    isOnline = false;
}

void BarnesNoble::soldBook(){   // increments numSoldBooks
    numSoldBooks++;
}
int BarnesNoble::get_numSoldBooks(){ // returns the books sold
    return numSoldBooks;
}