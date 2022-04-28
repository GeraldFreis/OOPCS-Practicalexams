#include <iostream>
using std::cout; using std::string;
#ifndef CAR_H
#define CAR_H

class Car{
    protected:
        string brand;
        int code;
    public:
        Car();   // default constructor - makes new car with code number 0 and
                // and empty string "" for brand

        Car(std::string brand, int code); // constructor taking string representing brand
                                            // and integer representing code for that brand

        std::string get_brand(); // returns the brand of the car
        int get_code();  // returns the brand code number of car
        ~Car(); // destructor
};

#endif CAR_H