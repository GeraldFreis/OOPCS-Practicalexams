#include "animal.h"

int Animal::NextID = 10;
 // default constructors and destructors
Animal::Animal(){
    animal_name = "";
    animal_id = NextID; // setting the id to the value that is not given
    NextID += 1;
}

Animal::~Animal(){
    cout << "Animal killed" << "\n";
}

// setting the name of the animal
void Animal::set_name(string _name){
    animal_name = _name;
}

// getting the name of the animal
string Animal::get_name(){
    return animal_name;
}

// getting the id of the animal
int Animal::get_id(){
    return animal_id;
}

// setting the id of the animal
void Animal::set_id(int _id){
    animal_id = _id;
}
