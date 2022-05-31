#include <iostream>
#include "Player.h"
#include "Person.h"
#include "Computer.h"
using std::string; using std::cout;


int main(){
    player *user = new person();
    player *computer_1 = new computer("r");

    user->move();
    if(user->win(computer_1) == false){
        cout << "Computer won" << "\n";
    }
    else if (user->win(computer_1) == true){
        cout << "Player won" << "\n";
    }
    else {
        cout << "Drawwwwwww" << "\n";
    }
    
    return 0;
}