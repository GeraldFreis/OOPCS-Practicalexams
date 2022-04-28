#include "Car.h"
#include <iostream>
using std::cout; using std::string;

class Car_yard{
    protected:
        int capacity;
        int code;
        Car *cararray;
        
    public:
        Car_yard();  // default constructor for yard with zero capacity
        Car_yard(int capacity); // constructor for yard that can hold "capacity" cars
        int get_total_stock_count(); // count of the current number of cars in yard
        int get_stock_quantity(int code); // count of the number of cars with brand code equal to "code"
        Car *get_current_stock_list(); // gets an array containing all the cars in the yard
        bool add_stock(Car c); // tries to add car to yard if there is enough spare capacity to fit it
                                // then will return true. 
        ~Car_yard(); // destructor
};