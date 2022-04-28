#include "Car.h"
#include <iostream>
using std::cout; using std::string;

int main(){
    Car car("nic", 2);
    cout << car.get_brand() << " " << car.get_code();
    return 0;
};