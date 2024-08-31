#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual void show(){
        cout << "Base class show function" << endl;
    }

    virtual void display(){
        cout << "Base class display function" << endl;
    }
};  

class Derived : public Base{
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void display() override{
        cout << "Derived class " << endl;
    }
};

int main(){
    Base* b;
    Derived d;
    b = &d;

    b->show();
}