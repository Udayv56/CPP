#include <iostream>
using namespace std;

//int sum(int a, int b); if prototyped
//int sum(int a, b); Not acceptable
//int sum(int ,int); acceptable
int sum(int a, int b){ //value of num1 and num2 is passed here
    int c = a+b; //a and b are formal parameters
    return c; //value is returned
}
    
int main()
{
    //Function
    //main() is also a function 
    int num1,num2; //actual parameters
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2); //funtion is called
    
    return 0; //It means that the program is successfully executed, whwnever it is returnde
}

//IF sum() is defined here then it will show error because function is not prototyped, it needs to be prototyped
// or define it before main() - syntax type function_name (arguments)
