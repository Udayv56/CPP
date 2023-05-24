#include<iostream>
using namespace std;

// Initialization list 
/*  
Synatax for Initialization list in constructor:
constructor(argument-list) : initialization-section
{
    assignment + other code;
}

class Test{
    int a,b;
    public:
        Test(int i, int j) : a(i), b(j){constructor body}
    
};

*/


class Test{
    int a,b;
    public:
        //Test(int i, int j) : a(i), b(j){
            //Test(int i, int j) : a(i), b(i+j){
            Test(int i, int j) : a(i), b(a+j){
                //Test(int i, int j) : b(j), a(i+b){ error becuase a will be initialized first
            cout<<"constructor executed"<<endl;
            cout<<a<<" "<<b<<endl; 
        }
    
};
int main(){

   //Test t(4,6);
   Test t(5,6);
    return 0;
}

