#include "Car_yard.h"

Car_yard::Car_yard(){  // default constructor for yard with zero capacity
    capacity = 0;
    cararray = new Car[10]; // initialising ten cars
}
Car_yard::Car_yard(int _capacity){ // constructor for yard that can hold "capacity" cars
    capacity = _capacity;
    cararray = new Car[capacity];
}
int Car_yard::get_total_stock_count(){ // count of the current number of cars in yard
    // precondition:
        // there are elements in the car array that have already been initialised
    // postcondition:
        // returns the total number of elements in the array
    
    int counter = 0;
    for(int i = 0; i < capacity; i++){
        if(cararray[i].get_brand()!="" && cararray[i].get_code()!=0){
            counter += 1;
        }
    }
    return counter;
}

int Car_yard::get_stock_quantity(int code){ // count of the number of cars with brand code equal to "code"
    // precondition:
        // recieves input code, for which we can check if any of the current vehicle codes are equal to this code
    // postcondition:
        // outputs the number of cars for which this parameter is recognised

    int counter = 0;
    for(int i = 0; i < capacity-1; i++){
        if(cararray[i].get_code() == code){
            counter += 1;
        }
    }
    return counter;
}
Car *Car_yard::get_current_stock_list(){ // gets an array containing all the cars in the yard
    // Don't screw this raw pointer up
    return cararray;
}


bool Car_yard::add_stock(Car c){ // tries to add car to yard if there is enough spare capacity to fit it
                         // then will return true. 
    if(cararray[capacity-1].get_brand() == "" && cararray[capacity-1].get_code()==0){
        for(int i =0; i < capacity; i++){
            if(cararray[i].get_brand()=="" && cararray[i].get_code()==0){
                cararray[i] = c;
                return true;
            }
        }
    }
    return false;
}
Car_yard::~Car_yard(){ // destructor
    delete [] cararray;
}