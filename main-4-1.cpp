#include<string>
#include <iostream>
#include "function-4-1.h"

using namespace std;

int main(){
  ModCounter *r = new ModCounter(3,2); // allocate a mod counter

  // increment repeatedly
  cout << "going up" << endl;
  for(int i=0;i<4;i++){
    cout << "current_val: " << r->get_val() << endl;
    r->inc();
  }

  // now decrement repeatedly
  cout << "going down" << endl;
  for(int i=0;i<5;i++){
    cout << "current_val: " << r->get_val() << endl;
    r->dec();
  } 
}