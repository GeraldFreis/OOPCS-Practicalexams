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
    int counter = 0;
    for(int i = 0; i < capacity; i++){
        if(cararray[i].get_brand()!="" && cararray[i].get_code()!=0){
            counter += 1;
        }
    }
    return counter;
}

int Car_yard::get_stock_quantity(int code){ // count of the number of cars with brand code equal to "code"
    int counter = 0;
    for(int i = 0; i < capacity-1; i++){
        if(cararray[i].get_code() == code){
            counter += 1;
        }
    }
    return counter;
}
Car *Car_yard::get_current_stock_list(){ // gets an array containing all the cars in the yard
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