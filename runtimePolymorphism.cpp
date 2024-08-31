#include<bits/stdc++.h>
using namespace std;

// THIS IS ABSTRACT CLASS
class Car{
public:
    string engine;
    int model;

    Car(string e, int m) : engine(e), model(m) {}

    virtual void display() const = 0;

    virtual ~Car(){}
};

class Lambo : public Car{
public:

    Lambo(string e, int m) : Car(e, m) {}

    void display() const override{
        cout << "Lambo Car details - " << "Engine " << this->engine << " Model " << this->model;
    }
};

int main(){
    Car *c;
    Lambo l("v8", 123);
    c = &l;
    c->display();
}