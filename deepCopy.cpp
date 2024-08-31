#include<bits/stdc++.h>
using namespace std;

class Deep{
    public:
        int *ptr;

        Deep(int value){
            ptr = new int(value);
        }
        Deep(const Deep& d){
            ptr = new int(*d.ptr);
        }

        Deep& operator=(const Deep& d){
            if(this != &d){
                delete ptr;
                ptr = new int(*d.ptr);
            }
            return *this;                 // return *this to make chaining - obj1 = obj2 = obj3;
        }

        ~Deep(){
            delete ptr;
        }
};

int main(){
    Deep d1(10);
    Deep d2 = d1;
    *d2.ptr = 20;
    cout << *d1.ptr << " " << *d2.ptr << " ";
}