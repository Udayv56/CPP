#include<iostream>
using namespace std;

class Number{
  int a;
  public: 
    Number (){
        a=0;
    };
    Number(int num){
        a= num;
    }
    Number(Number &obj){ //copy constructor
        cout<<"Copy constructor called"<<endl;
        a= obj.a;
    }
    
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resemble z or x or y
    Number z1(x);
    z1.display();
    
    z2 = z; //copy constructor not invoked because only assignment
    Number z3 = z; //copy constructor is invoked
    z3.display();
    // when no copy constructor is found compiler supplies its own copy constructor
    return 0;
}
