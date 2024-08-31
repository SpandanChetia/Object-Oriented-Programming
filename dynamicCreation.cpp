#include<bits/stdc++.h>
using namespace std;

class IntHolder{
public:
    int* value;
    IntHolder(int v){
        value = new int(v);
    }
    ~IntHolder(){
        delete value;
    }
};  

class Array{
public:
    int* array;
    int size;

    Array(int size) : size(size){
        array = new int[size];
        for(int i=0; i<size; i++){
            array[i] = i;
        }
    }
    ~Array(){
        delete[] array; 
    }

};

class Array2D{
public:
    int**array;
    int rows;
    int cols;

    Array2D(int r, int c) : rows(r), cols(c){
        array = new int*[rows];
        for(int i=0; i<rows; i++){
            array[i] = new int[cols];
        }
    }
    ~Array2D(){
        for(int i=0; i<rows; i++){
            delete[] array[i];
        }
        delete[] array;
    }
};

int main(){
    // CAN ALSO CREATE AN ARRAY FROM IntHolder Class
    const int SIZE =3;
    IntHolder* objArray = new IntHolder[SIZE] {1, 2, 3};

    for(int i=0; i<SIZE; i++){
        cout << *objArray[i].value << " ";
    }
    delete[] objArray;
}