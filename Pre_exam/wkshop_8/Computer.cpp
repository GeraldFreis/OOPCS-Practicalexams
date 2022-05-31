#include "Computer.h"

//set what move the computer will
//make (rock, paper, or scissors)
//if the input is not r, R, p, P, s, S or
//a string starting with one of these letters,
//set the move to the default ‘r’
computer::computer(string letter){
    increment_amount = 0;
    current_move = letter;

    this->past_moves += letter;
    this->move_number += increment_amount;
}

string computer::getMoves(){                             //returns all moves stored in a string
    return this->player::past_moves;
}

void computer::move(){                                      //increments number of moves made
    increment_amount += 1;
    this->player::past_moves += current_move;
    this->player::move_number += 1;
}