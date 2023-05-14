#include <iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}

int prod (int a,int b){
    static int c =0; //This executes only once 
    c = c+1; //c will be set 1
    return a*b+c;

}

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

//int strlen(const char *p){  //cant change the string
    
//}

int main()
{
    int a,b;
    cout<<"Enter two numbers - ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl; // everytime this function is caled values will be passed and copies will take memory
    cout<<"The product of a and b is "<<product(a,b)<<endl; // to avoid this we use inline functions
    cout<<"The product of a and b is "<<product(a,b)<<endl; // but we should use them if there is only one operation
    // don't use when recursion
    //dont use when static
    cout<<"The product of a and b is "<<prod(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<"Rs in your bank account, you will recieve "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    //here the value of factor is taken default
    cout<<"FOR VIP , If you have "<<money<<"Rs in your bank account, you will recieve "<<moneyReceived(money,1.1)<<" Rs after 1 year";
    //here value is overidden
    
    // making a function inline is a request not order, it depends on compiler
    
    // always mention default values must be a extreme right
    
    //constant arguments
    

    
    return 0;
}
