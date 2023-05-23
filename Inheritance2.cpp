#include<iostream>
using namespace std;

class Base{
    int data1; // not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
    
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{ // if inheritance will be done privately then setData() couldnt be alled directly
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = getData1() + data2; // data1 is private to Base class
}

void Derived :: display(){
    cout<<data3<<endl;
}
    

int main(){
    
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}

