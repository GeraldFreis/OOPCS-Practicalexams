#include <iostream>
using namespace std;

extern int more_positive(int [], int);

int main(){
    int vals[]={-1,1,-2,2,-3,3,0,0,-5};
    int vals_length=9;
    bool res=more_positive(vals,vals_length);
    if(res == false){
        cout << "vals is not more positive" << endl;
    }
    else{
        cout << "vals is more positive" << endl;
    }
    
    int values[]={-1,-1, 1};
    int values_length=3;
    bool result=more_positive(values,values_length);
    if(result == false){
        cout << "vals is not more positive" << endl;
    }
    else{
        cout << "vals is more positive" << endl;
    }
    return 0;
}