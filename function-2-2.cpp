#include <iostream>
#include <cmath>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){
    int reversed_array[number_of_digits];

    for(int i = number_of_digits-1; i >= 0; i--){
        reversed_array[number_of_digits-i] = binary_digits[i];
    }

    int decimal_number = 0;
    for(int i = 0; i < number_of_digits; i++){
        decimal_number += reversed_array[i] * pow(2, i);
    }

    return decimal_number;
}