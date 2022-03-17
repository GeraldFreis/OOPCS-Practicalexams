#include <iostream>
using namespace std;
extern int sum_if_a_palindrome(int [], int);

int main(int integers[], int length){
    cout << sum_if_a_palindrome(integers, length) << endl;
    return 0;
}