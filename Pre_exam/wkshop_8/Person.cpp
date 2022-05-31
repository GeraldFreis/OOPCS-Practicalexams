#include "Person.h"

person::person(){
    this->player::past_moves = "";
    this->player::move_number = 0;
}

//allow user to type in a single character to
//represent their move. If a move is impossible,
//“Move unavailable” is outputted and the user is
//asked to input a character again.
//Otherwise, their input is stored
void person::move(){        
    bool var = true;               
    while(var == true){
        char input;
        cout << "Please enter rock (r) scissors (s) or paper (p):\n";
        cin >> input;

        if(input == 'r' || input == 's' || input == 'p' ){
            this->player::past_moves += input;
            this->player::move_number += 1;
            var = false;
            break;
        }
    }
}

string person::getMoves(){           //returns all moves stored in a string
    return this->player::past_moves;
}
