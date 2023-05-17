#include <iostream>
#include<cmath>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(){
            a=0;
            b=0;
        }
        Complex (int x, int y){
            a=x;
            b=y;
        }
        
        Complex (int x){  //Constructor overloading
            a=x;
            b=0;
        }
        
        void printNumber(){
            cout<<"Your number is "<< a<< " + "<<b<<"i "<<endl;
        }
};
int main()
{
    Complex c(5,6);
    c.printNumber();
    Complex c1(3);
    c1.printNumber();
    Complex c2;
    c2.printNumber();
    return 0;
}

