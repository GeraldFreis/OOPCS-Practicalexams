#include "Dymocks.h"

int Dymocks::nextNumStores = 0;

Dymocks::Dymocks(){            // Uses the default constructor of parent
    storeID = nextNumStores;
    nextNumStores++;
    isOnline = false;
}
Dymocks::Dymocks(bool o): BookStore("Dymocks", "", 100){      // sets isOnline attribute with o
                            // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                            // and address equal to the empty string
    isOnline = o;
    storeID = nextNumStores;
    nextNumStores++;
}

float Dymocks::get_onlineTax(){
    if(isOnline == true){
        return 500.00;
    }
    else {
        return 0.0;
    }
}