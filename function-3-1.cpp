#include <iostream>
using namespace std;

bool more_positive(int vals[], int length){
    int negative_counter = 0;
    int positive_counter = 0;
    for(int i = 0; i < length; i++){
        if(vals[i] > 0){
            positive_counter += 1;
        }
        else if(vals[i]==0){
            continue;
        } //makes sense
        else{
            negative_counter += 1;
        }
    }
    if(negative_counter >= positive_counter){
        return false;
    }
    else{
        return true;
    }

}