#include "Player.h"

player::player(){
   past_moves = " ";
   move_number = 0;
}

// gets the most recent move
char player::getMove(){
    return past_moves[move_number];
}

// checks who won
bool player::win(player * opponent){
    if(opponent->getMove() == 's' && past_moves[move_number] == 's'){
        cout << "draw! go again" << "\n";
        return false;
    }
    else if (opponent->getMove() == 'r' && past_moves[move_number] == 's'){
        return false;
    }

    else if (opponent->getMove() == 's' && past_moves[move_number] == 'r'){
        return true;
    }

    else if (opponent->getMove() == 'p' && past_moves[move_number] == 's'){
        return true;
    }

    else if (opponent->getMove() == 's' && past_moves[move_number] == 'p'){
        return false;
    }

    else if (opponent->getMove() == 'p' && past_moves[move_number] == 'r'){
        return false;
    }
    else {
        return true;
    }
}

