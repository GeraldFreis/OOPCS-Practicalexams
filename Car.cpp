#include "Car.h"

Car::Car(){   // default constructor - makes new car with code number 0 and
         // and empty string "" for brand
    code = 0;
    brand = "";
}

Car::Car(std::string _brand, int _code){ // constructor taking string representing brand
                                    // and integer representing code for that brand
    brand = _brand;
    code = _code;
}   

std::string Car::get_brand(){ // returns the brand of the car
    return brand;
}

int Car::get_code(){  // returns the brand code number of car
    return code;
}
Car::~Car(){}; // destructor