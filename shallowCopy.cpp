#include<bits/stdc++.h>
using namespace std;

class Shallow{
    public:
    int* ptr;

    Shallow(int value){
        ptr = new int(value);
    }
    
    ~Shallow(){
        delete ptr;
    }
};

int main(){
    Shallow sh1(10);
    Shallow sh2 = sh1;

    cout << *sh1.ptr << " " << *sh2.ptr << " ";
    *sh2.ptr = 20;
    cout << *sh1.ptr << " " << *sh2.ptr << " ";
}