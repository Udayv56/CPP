#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
    
}

void swap(int a, int b){ // copy is passed so copies will be swapped not actual vales
    int temp = a;  //4  4  5
    a =b;           // 4 5 5
    b = temp;       // 4 5 4 
} // a and b gets destroyed after function completion 

void swapPointer(int *a, int *b){ 
    int temp = *a;  //4  4  5
    *a =*b;           // 4 5 5
    *b =temp;       // 4 5 4 
}

int & swapReferenceVar(int &a, int &b){ 
    int temp =a;  //4  4  5
    a =b;           // 4 5 5
    b =temp;       // 4 5 4 
    return a; //Returning refrence
}
    
int main()
{
    int x=6,y=9;
    cout<<"The sum of 6 and 9 is "<<sum(x,y)<<endl;
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    swap(x,y); //Actual arguments
    cout<<"Swap called --- The value of x is "<<x<<" The value of y is "<<y<<endl; //values not swapped call by value
    swapPointer(&x,&y);
    cout<<"SwapPointer called --- The value of x is "<<x<<" The value of y is "<<y<<endl; //values  swapped call by reference
    swapReferenceVar(x,y);
    cout<<"swapReferenceVar called --- The value of x is "<<x<<" The value of y is "<<y<<endl; //values  swapped reference variables
    swapReferenceVar(x,y) = 56;
    cout<<"swapReferenceVar called --- The value of x is "<<x<<" The value of y is "<<y<<endl; 
    
    return 0;
}

