#include<iostream>

using namespace std;

int main()
{

int a=3;
int* b = &a; //declaration of a pointer to a 
// & is Address of operator
// * is dereference operator
// Variables are given address in RAM where they get stored

cout<<"The address of a is - "<<b<<endl;
cout<<"The value of a is - "<<*b<<endl;
cout<<"The address of a is - "<<&a<<endl;
cout<<"The value of a is - "<<a<<endl;

//pointer to pointer
int** c = &b;
cout<<"The address of b is - "<<c<<endl;
cout<<"The value at address stored in c is - "<<*c<<endl;
cout<<"The value at address of address of c is - "<<**c<<endl;

return 0;
}
