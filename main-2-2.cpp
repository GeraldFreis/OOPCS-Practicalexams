#include <iostream>
using namespace std;

extern int binary_to_number(int [], int);

int main(int binary_digits[], int number_of_digits){
    cout << binary_to_number(binary_digits, number_of_digits) << endl;
    return 0;
}