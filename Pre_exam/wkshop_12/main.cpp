#include "animal.h"
#include <random>

/*
take a random animal in the array, compare it to the one to the left
if greater we test if array is ascending, if not we do the same thing again
*/
animal **sorted_animals(animal **given_herd, int len){
    bool sorted = false;
    while(sorted == false){
        int rand_index = 1 + rand() % len;

        if(given_herd[rand_index]->get_animalID() < given_herd[rand_index-1]->get_animalID()){ // if less than
            swap(given_herd[rand_index], given_herd[rand_index-1]);
        }

        // checking if the array is sorted and if not doing the same thing again
        animal *last_animal = given_herd[0];
        for(int i = 1; i < len; i++){
            if(given_herd[i]->get_animalID() > last_animal->get_animalID() && i != len - 1){
                last_animal = given_herd[i];
            }
            else if (given_herd[i]->get_animalID() > last_animal->get_animalID() && i == len - 1){
                sorted = true;
            }
            else {
                break;
            }
        }
    }
    return given_herd;
}

int animal::ID = 0;

int main(){
    // testing the animal ID's
    animal *lionness = new animal("Larry", -5);
    animal *hippopopo = new animal("Harry", -10);
    animal *lieu = new animal("lip", -100);
    animal *hipple = new animal("hip", -1000);
    hippopopo->set_animalID(-1);
    hipple->set_animalID(-10);
    // raw list should be (0, -1, 2, -10)
    // sorted list should be (-10, -1, 0, 2)

    animal **herd = new animal*[4];
    herd[0] = lionness; herd[1] = hippopopo; herd[2] = lieu; herd[3] = hipple;
    for(int i = 0; i < 4; i++){
        cout << herd[i]->get_animalID() << " ";
    }
    cout << "\n";

    herd = sorted_animals(herd, 4);

    for(int i = 0; i < 4; i++){
        cout << herd[i]->get_animalID() << " ";
    }
    

}