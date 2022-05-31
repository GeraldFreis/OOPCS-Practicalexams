#include <iostream>
#include <stack>
#include "animal.h"


int main(){
    Animal *lion = new Animal("Lieu", 3);
    Animal *hip = new Animal();
    hip->set_name("Hip");
    cout << lion->get_id() << "\n";
    cout << hip->get_id() << "\n";
    
    Animal *animals = new Animal[5];

    for(int i = 0; i < 5; i++){
        cout << animals[i].get_id() << "\n";
    }
    
}