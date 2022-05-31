#include <iostream>
#include "animal.h"

/*
Recursively sorting the animals array
How:
    we take the left and right most values and check if they are greater than those to their left and or right
    i.e 
    {1, 5, 7, 9, 2}
    -> lmv (0) > lmv+1 [1] {then we change them whichever way we need to}
        --> 1, 5 (no change)
    -> rmv [4] < rmv-1 [3] {then we change as we need}
        --> 2, 9 (changed)
        Then we change the left val to current_left + 1, change right to current_right - 1
        then we iterate again:
    {1, 5, 7, 2, 9}
    --> lmv [1] > lmv+1 [2] (5 > 7) {then we change but here we do not need to}
    --> rmv [3] < rmv-1 [2] (2 < 7) {then we change
        --> 7, 2 (changed)
        Then we change left val to current_left + 1, change right to current_right - 1
    {1, 5, 2, 7, 9}
    - lmv[2] > lmv+1 [3] (2 > 7) {false so we dont do anything}
    --> rmv [2] < rmv-1 [1] (2 < 5) {true so we switch}
        --> 2, 5 changed
        Then we change left and right
    {1, 2, 5, 7, 9}
    - lmv [3] < lmv + 1 [4] (7 < 9) {false so we dont do anything}
    - rmv [1] < rmv[0] {false so we dont do anything}
    As both are false it is sorted
*/
Animal **sorted_animals(Animal **array, int len, int left, int right){

}