#include <iostream>
#include <random>
using namespace std;

/*
Steps:
1. Pick a random point within a dynamic range
2. arrange the pair of values to the left of that (x & x-1) value if not zero ascendingly
3. arrange the pair of values to the right of that (x & x + 1) ascendingly if not length
4. continue until a for loop can verify that the loop is sorted 
*/
int *my_quicksort(int *array, int length){
    while(true){
        int rand_val = rand() % length;

        // sorting the pair beneath and above the random value
        if(rand_val != 0 && rand_val != 1 && rand_val == length - 1 && rand_val == length - 2){
            if(array[rand_val] < array[rand_val - 1]){
                std::swap(array[rand_val], array[rand_val-1]);
                cout << array[rand_val] << " " << array[rand_val - 1] << "\n";

            }
            if(array[rand_val] > array[rand_val + 1]){
                std::swap(array[rand_val], array[rand_val+1]);
                cout << array[rand_val] << " " << array[rand_val + 1] << "\n";

            }

        }
        // checking if the array is in ascending order
        int lastnum = array[0];
        for(int i = 1; i < length; i++){
            if(array[i] < lastnum){
                break;
            }
            else if(array[i] > lastnum && i == length - 1){
                return array;
            }
            else if(array[i] > lastnum && i != length - 1){
                lastnum = array[i];
            }

        }
    }
}

int main(){
    int array[6] = {1, 5, 7, 9, 2, 4};
    int *sorted_array = my_quicksort(array, 6);

    for(int i = 0; i < 6; i++){
        cout << sorted_array[i] << "\n";
    }
}