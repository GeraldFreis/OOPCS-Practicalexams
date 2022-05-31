#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <stack>

using std::cout; using std::string;

class Animal {
    private:
        string animal_name;
        int animal_id;
        static int NextID;
    public:
        // default constructors and destructors
        Animal();
        Animal(string _name, int id){animal_name = _name; animal_id = id;};
        ~Animal();

        void set_name(string _name);
        string get_name();
        int get_id();
        void set_id(int _id);  
};

#endif