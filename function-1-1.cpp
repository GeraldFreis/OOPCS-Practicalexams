#include <iostream>
using namespace std;

void printer(int array[10][10]){
    for(int row = 0; row < 10; row++){
        for(int column = 0; column < 10; column++){
                cout << array[row][column];
                if(column != 10){
                    cout << " ";
                }
        }
        cout << endl;
    }
}