#include <iostream>
#include "Player.h"
using std::cout; using std::string; using std::cin;
#ifndef PERSON_H
#define PERSON_H

class person: public player {
    public:
        person();
        void move();                       //allow user to type in a single character to
                                                //represent their move. If a move is impossible,
                                                //“Move unavailable” is outputted and the user is
                                                //asked to input a character again.
                                                //Otherwise, their input is stored

        string getMoves();           //returns all moves stored in a string
};

#endif