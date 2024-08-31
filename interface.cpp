#include<bits/stdc++.h>
using namespace std;

class Animal{                   // This is interface... No concrete functions just virtual Members all along
public:
    virtual void bark() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal{
private:
    string name;
public:
    Dog(string n) : name(n) {}

    void bark() const override{
        cout << "Sound is bhow bhow ;-D" << endl;
    }
};

int main(){
    Dog d("Jimmy");
    d.bark();
}
