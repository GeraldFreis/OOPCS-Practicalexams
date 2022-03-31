#include "function-4-1.h"

ModCounter::ModCounter(int bound,int init){
    boundary = bound;
    if(0 < init && init <= boundary){
        current_val = init;
    }
    else{
        current_val = 0;
    }
};

void ModCounter::inc(){
    if(current_val!=boundary){
        current_val += 1;
    }
    else{
        current_val = 0;
    }
};

void ModCounter::dec(){
    if(current_val != 0){
        current_val -= 1;
    }
    else{
        current_val = boundary;
    }
}

int ModCounter::get_val(){
    return current_val;
}