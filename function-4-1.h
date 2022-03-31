#ifndef FUNCTION_4_1_H
#define FUNCTION_4_1_H

class ModCounter{
public:
  int current_val; // current value of the counter must always be between 0 and boundary (inclusive)
  int boundary; // upper bound of the counter

  ModCounter(int bound,int init); // sets the boundary to bound and makes current_val equal to init
                                  // but only if init is in the range 0 to boundary inclusive
                                  // if init is not in that range then current_val should be set to zero
  void inc(); // increments current_val but if current_val is already equal to boundary then
              // current_val becomes zero.
  void dec(); // decrements current_val but if current-val is already zero then current_val gets set
              // to the value of boundary
  int get_val(); // returns the current value of this counter.
};

#endif