#include <iostream>
using std::string; using std::cout;

void recursive_print(int num){
    int current_num = num;
    if(current_num <= 10){
        cout << current_num << "\n";
        int new_num = current_num + 1;
        recursive_print(new_num);
    }
}

int main() {
    recursive_print(3);
}