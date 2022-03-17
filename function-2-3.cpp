#include <iostream>
using namespace std;

int sum_elements(int integers[], int length){

    if (length < 0){
        return false;
    }

    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += integers[i];
    }
    return sum;
}

bool is_a_palindrome(int integers[], int length){
    if (length < 0){
        return false;
    }

    int sub_array_size = 0;
    if(length % 2 == 0){
        sub_array_size += length / 2;
    }
    else if(length % 2 != 0){
        sub_array_size += (length+1)/2;
    }

    for(int i = 0; i < sub_array_size; i++){
        if(integers[i]!=integers[length-1-i]){
            return false;
        }
        else{
            continue;
        }
    }
    return true;
}

int sum_if_a_palindrome(int integers[], int length){
    int sum_if_true = 0;
    
    if (length < 0){
        return false;
    }

    if(is_a_palindrome(integers, length) == true){
        sum_if_true = sum_elements(integers, length);
    }
    else if(is_a_palindrome(integers, length) == false){
        return -2;
    }
    return sum_if_true;
}