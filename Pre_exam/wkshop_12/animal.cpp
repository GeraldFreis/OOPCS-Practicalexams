#include "animal.h"

animal::animal(string n, int v){  // creates an animal with name n and body volume v.
                           // animals are allocated a unique ID on creation
    name = n;
    volume = v;
    animalID = ID;
    ID++; // incrementing the id so that the next animal gets a different ID
}

string animal::get_name(){            // the animal's name
    return name;
}
int animal::get_animalID(){             // the animal's unique ID
    return animalID;
}
int animal::get_volume(){               // the volume of the animal's body
    return volume;
}

void animal::set_name(std::string _name){
    name = _name;
}

void animal::set_volume(int _volume){
    volume = _volume;
}

void animal::set_animalID(int _given_id){
    animalID = _given_id;
}
