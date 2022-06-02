#include "animal.h"

int animal::ID = 0;
int main(){
    // testing the animal ID's
    animal *lionness = new animal("Larry", -5);
    animal *hippopopo = new animal("Harry", -10);
    hippopopo->set_animalID(-1);
    cout << lionness->get_animalID() << " " << hippopopo->get_animalID() << "\n";

}