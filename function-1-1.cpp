 #include <iostream>
 using namespace std;

 int *pad_array(int *vals, int len){
     int *new_vals = new int[len+2];
     for(int i = 0; i < len; i++){
        if(i==0 || i == 1){
            new_vals[i] = vals[0];
        }
        else if(i == len-1){
            new_vals[i] = vals[len-2];
            new_vals[i+1] = vals[len-1];
            new_vals[i+2] = vals[len-1];
        }
        else{
            new_vals[i] = vals[i-1];
        }
     }
     return new_vals;
 }