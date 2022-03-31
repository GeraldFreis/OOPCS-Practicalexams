#include <iostream>
using namespace std;

extern int *pad_array(int *, int);

int main(){
    int vals[]={1,2,3,4,5};
    int *pv=pad_array(vals,5);

    for(int i= 0; i < 7; i++){
        cout << pv[i] << endl;
    }
    delete []pv;
    return 0;
}