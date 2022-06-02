#include <iostream>
#include "Dymocks.h"
using namespace std;

#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H

class BarnesNoble: public Dymocks{
    public:
        BarnesNoble();          // inherit from base class default constructor    
        BarnesNoble(string n);  // set name n  
                            // should call the corresponding constructor from the parent class
                            // with the online parameter being false
        
        void soldBook();   // increments numSoldBooks
        int get_numSoldBooks(); // returns the books sold

    private:
        int numSoldBooks;   // attribute for numSoldBooks, initialised to 0

};

#endif