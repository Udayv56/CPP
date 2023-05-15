#include <iostream>
using namespace std;
//OOPS
//Difference between structure and classes

class Employee
{
    private:
        int a,b,c; //only class can access
    public:
        int d,e;
        void setData(int a,int b,int c); //Declaration
        void getData(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b= b1;
    c= c1;
}

int main()
{
    Employee uday;
    // uday.a =5 it is wrong as it is a private member
    uday.d = 6;
    uday.setData(1,2,3);
    cout<<uday.d<<endl;
    uday.getData();

    return 0;
}
