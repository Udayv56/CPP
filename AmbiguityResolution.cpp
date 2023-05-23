#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"Namaste"<<endl;
        }
    
};

class Base2{
    public:
        void greet(){
            cout<<"Hello"<<endl;
        }
    
    
};

class Derived : public Base1, public Base2{
    public:
        int a;
        void greet(){
            Base1 :: greet();
        }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{ // in single ineritance it overides the function
    int a;
    public:
        void say(){
            cout<<"Hello"<<endl;
        }
};

int main(){
    //Ambiguity 1
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived d;
    d.greet();
    
    
    //Ambiguity 2
    
    B b;
    D d1;
    b.say();
    d1.say();

    return 0;
}

