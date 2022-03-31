#include <iostream>
using namespace std;

extern string get_phase(int);

int main(){
    int temp =10;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    temp =273;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    temp =293;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    temp =4700;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    temp =5000;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    return 0;
}