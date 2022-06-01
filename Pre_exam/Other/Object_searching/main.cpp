#include <iostream>
#include <stack>
#include "animal.h"

extern Animal **sorted_animals(Animal *, int , int , int );


int main(){
    Animal *lion = new Animal("Lieu", 3);
    Animal *hip = new Animal();
    hip->set_name("Hip");
    cout << lion->get_id() << "\n";
    cout << hip->get_id() << "\n";
    
    Animal *animals = new Animal[5];

    animals[0].set_id(2);
    animals[3].set_id(1);
    for(int i = 0; i < 5; i++){
         cout << animals[i].get_id() << "\n";
     }

     Animal **newarr = sorted_animals(animals, 5, 0, 4);

//     for(int i = 0; i < 5; i++){
//         cout << newarr[i]->get_id() << "\n";
//     }
}