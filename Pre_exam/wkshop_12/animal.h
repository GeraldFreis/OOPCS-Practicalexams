#include <iostream>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal {
    public:
        animal(string n, int v) ;  // creates an animal with name n and body volume v.
                            // animals are allocated a unique ID on creation
        string get_name();
        int get_volume();
        int get_animalID();

        void set_name(string _name);
        void set_volume(int _volume);
        void set_animalID(int _given_id);
        
    private:
        static int ID;
        string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body
};

#endif