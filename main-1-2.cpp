#include "Car_yard.h"
#include <iostream>
using std::cout; using std::string;

int main(){
    Car_yard yard(3);
    Car car("name", 0);
    Car car2("toy", 12);
    Car car3("Minicooper", 1313);
    Car car4("micro", 129);

    yard.add_stock(car);
    yard.add_stock(car2);
    yard.add_stock(car3);

    if(yard.add_stock(car4)==false){
        cout << "There was not enough space" << "\n";
    }
    else{
        cout << "There was enough space" << "\n";
    }

    cout << "Amount of stock: " << yard.get_total_stock_count() << "\n";


}