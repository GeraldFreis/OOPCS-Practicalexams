#include "Player.h"

player::player(){
   past_moves = "";
   move_number = 0;
}

// gets the most recent move
char player::getMove(){
    return past_moves[move_number];
}

// checks who won
int player::win(player * opponent){
    if(opponent->getMove() == 's' && past_moves[move_number-1] == 's'){
        // cout << "draw! go again" << "\n";
        return 2;
    }
    else if (opponent->getMove() == 'r' && past_moves[move_number-1] == 's'){
        return false;
    }

    else if (opponent->getMove() == 's' && past_moves[move_number-1] == 'r'){
        return true;
    }

    else if (opponent->getMove() == 'p' && past_moves[move_number-1] == 's'){
        return true;
    }

    else if (opponent->getMove() == 's' && past_moves[move_number-1] == 'p'){
        return false;
    }

    else if (opponent->getMove() == 'p' && past_moves[move_number-1] == 'r'){
        return false;
    }
    else if (opponent->getMove() == 'r' && past_moves[move_number-1] == 'r'){
        // cout << "draw! go again" << "\n";
        return 2;
    }

    else if (opponent->getMove() == 'p' && past_moves[move_number-1] == 'p'){
        // cout << "draw! go again" << "\n";
        return 2;
    }
    else {
        return true;
    }
}

