#include <iostream>
#include <stack>
#include <deque>
using namespace std;

class Nickle {
    private:
        static std::stack<int> nick_id;
        Nickle(string name, int id);
        string name;
        int id;
    public:
        Nickle *nickle_maker(string _name){
            string this_name = _name;
            if(nick_id.empty() == false){
                int this_id = nick_id.top(); 
                nick_id.pop();
                Nickle *this_bob = new Nickle(this_name, this_id);
                return this_bob;
            }
            else {
                return nullptr;
            }
        }
};

std::stack<int> Nickle::nick_id({3,2,1});
int main(){
    Nickle *nicks[4];
    nicks[0] = Nickle::nickle_maker("hi");
}