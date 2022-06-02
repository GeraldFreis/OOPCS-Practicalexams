#include "BarnesNoble.h"

BarnesNoble::BarnesNoble();          // inherit from base class default constructor    
BarnesNoble::BarnesNoble(string n);  // set name n  
                    // should call the corresponding constructor from the parent class
                    // with the online parameter being false

void BarnesNoble::soldBook();   // increments numSoldBooks
int BarnesNoble::get_numSoldBooks(); // returns the books sold