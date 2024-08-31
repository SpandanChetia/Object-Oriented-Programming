#include<bits/stdc++.h>
using namespace std;

class FriendClass;

class Hello{
private:
    int value;
    int pos;

public:
    Hello(int v, int p) : value(v), pos(p) {}

    friend class FriendClass;                        // This is Friend class
    friend void display(const Hello& h);  // This is Friend function
};

void display(const Hello& h){
    cout << h.value << " Only value of the object";
}

class FriendClass{
    public:

    void displayvalues(const Hello& h){
        cout << h.value << " " << h.pos << " ";
    }
};  

int main(){
    Hello h(10, 20);
    FriendClass f;
    f.displayvalues(h);
    //display(h);
}