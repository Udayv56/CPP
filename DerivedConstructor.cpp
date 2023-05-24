#include<iostream>
using namespace std;

/*
case1: 

class B : public A{
    first A then B // order of execution of constructor
    
};

case2:

class A : public B, public C{
   first B then C and Then A  // order of execution of constructor
};

case3:

class A : public B , virtual public C{
   first C then B then A // order of execution of constructor
    
};



*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor is called"<<endl;
                        
        }
        void print_data1(){
            cout<<"The value of data is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor is called"<<endl;
                        
        }
        void print_data2(){
            cout<<"The value of data is "<<data2<<endl;
        }
};

class Derived: public Base1 , public Base2{ // oreder will be changed if  class Derived: public Base2 , public Base1
    int derived1, derived2;
    public:
        Derived(int a ,int b , int c ,int d): Base1(a) , Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        
        void printdata(){
            print_data1();
            print_data2();
            cout<<derived1<<" "<<derived2<<endl;
        }
};

int main(){
   Derived d(4,5,6,9);
   d.printdata();
   
    return 0;
}

