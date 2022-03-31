#include <iostream>
using namespace std;

string get_phase(int temp){
    if(temp <= 273){
        return "ice";
    }
    else if(273 < temp && temp <= 373){
        return "liquid";
    }
    else if(373 < temp && temp <= 4700){
        return "liquid";
    }
    else{
        return "decomposed";
    }
}
