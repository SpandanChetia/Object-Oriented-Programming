#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual ~Base(){
        cout << "Destructor called" << endl;
    }
    virtual void show(){
        cout << "I am a Base Class" << endl;
    }

    void display(){
        cout << "Iam a display func" << endl;
    }
};

class Derived : public Base{
public:
    ~Derived(){
        cout << "Derived class called" << endl;
    }
    void show() override{
        cout << "Iam a display func Derived class";
    }
};

int main(){                     
    Base* p = new Derived;                     // DYNAMIC ALLOCATION SO MANUALLY HAVE TO DELETE IT  
    p->show();
    delete p;

    Base* p;                                   // STACK ALLOCATION SO ONCE OUT OF SCOPE IT IS DELETED AUTOMATICALLY
    Derived d;
    p = &d;
    p->show();  
}