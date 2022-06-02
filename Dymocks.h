#include <iostream>
#include "Bookstore.h"
using namespace std;

#ifndef DYMOCKS_H
#define DYMOCKS_H

class Dymocks: public BookStore{ 
    public:
        Dymocks();            // Uses the default constructor of parent
        Dymocks(bool o);      // sets isOnline attribute with o
                            // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                            // and address equal to the empty string
        float get_onlineTax();
        
        static int get_nextNumStores(){return nextNumStores;}
        bool get_isOnline(){return isOnline;}
        int get_storeID(){return storeID;}

        void set_storeID(int s){storeID = s;}
        void set_isOnline(bool o){isOnline = o;}
        void set_nextNumStores(int val){nextNumStores = val;}
                    
    private:
        int storeID;          // unique store ID 
        bool isOnline;       // class attribute  
        static int nextNumStores;            

};
#endif