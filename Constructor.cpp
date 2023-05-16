#include <iostream>

using namespace std;
//constructor 
class Complex{
    int a,b;
  //creating a constructor 
  public:
    Complex(void); //constructor decleration 
    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};

Complex :: Complex(void){ //no need of return type, default constructor
    a=10;
    b=20;
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

//properties of constructor
/* 1. it should be declared public section in class
2. They are automatically invoked whenever object is created
3. Do not have return types , cannot return value
4. it can have default arguments
5. We cannot refer to their address */
