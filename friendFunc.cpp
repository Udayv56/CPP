#include <iostream>

using namespace std;
//friend funcrtions

class Complex{
    int a,b;
    public:
        void setNum(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1 , Complex o2); // Now this function can access private members
        void printNumber(){
            cout<<"Your number is "<<a<<" +"<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){ // it is not member function it is an outer function which is given access of class private data members
    Complex o3;
    o3.setNum((o1.a +o2.a), (o1.b + o2.b)); //it is accesssing private data of class Complex
    return o3;
}

int main()
{
   Complex c1,c2,sum;
   c1.setNum(1,4);
   c2.setNum(5,8);
   
   c1.printNumber();
   c2.printNumber();
   sum = sumComplex(c1,c2);
   sum.printNumber();
    
    return 0;
}

/* Properties of friend function
1.Not in the scope of class
2. since it is ot in the scope of class, it cannot be called by an object e.g. c1.sumComplex() is wrong
3. It can be invoked without any object
4. Usually contains arguments as objects
5. Can be declared public or private section of the class
6. it cannot access the members directly by obj.member_name
