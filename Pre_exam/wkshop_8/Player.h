#include <iostream>
using std::cout; using std::string;

#ifndef PLAYER_H
#define PLAYER_H

/*
Abstract class player:
    has methods:
        void move(); {pure virtual}
        string getMoves(); {pure virtual}
        char getMove(); //returns the most recent move made
        bool win(Player * opponent); //compares players’ moves to see who wins
*/
class player {
    protected:
       string past_moves;
       int move_number;
    public:
        player();
        virtual void move() = 0;
        virtual string getMoves() = 0;
        char getMove();
        bool win(player * opponent);
};

#endif