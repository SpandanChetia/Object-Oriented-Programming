#include<bits/stdc++.h>
using namespace std;

class Maths{
public:                                       // Function Overloading
    int add(int a, int b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }

    double add(int a, int b, int c, int d){
        return static_cast<double>(a + b + c + d)/4;
    }
};

class Complex{                               // Operator Overloading
public: 
    int real;
    int imag;

    Complex(int r=0, int i=0) : real(r), imag(i) {}

    Complex operator+(const Complex& obj) const{
        Complex temp;
        temp.real = this->real + obj.real;
        temp.imag = this->imag + obj.imag;
        return temp;
    }

    Complex operator-(const Complex& obj) const{
        Complex temp;
        temp.real = this->real - obj.real;
        temp.imag = this->imag - obj.imag;
        return temp;
    }

    Complex operator-() const {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    Complex operator=(const Complex& obj){
        if(this!=&obj){
            this->real = obj.real;
            this->imag = obj.imag;
            return *this;
        }
    }

    void display(){
        cout << this->real << " + " << this->imag << "i" << endl;
    }
};
int main(){
    Complex c1(1,2), c2(3,4); 
    Complex c3 = c1 + c2;
    c3.display();
}