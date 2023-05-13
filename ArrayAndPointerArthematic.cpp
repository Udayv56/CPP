#include<iostream>
using namespace std;

int main()
{
int marks[4] = {23,45,56,89}; //basic declaration of an array

cout<<"Array 1\n";
cout<<marks[0]<<endl; //basic method to print an array element, indexing starts with 0
cout<<marks[1]<<endl;
marks[2] = 58; //We can change the value of an array (previous value 56)
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

cout<<"\nArray 2\n";
int marks2[] = {12,36,58,98,75,25}; // Size is guessed by c++

for(int i =0; i<sizeof(marks2)/sizeof(marks2[0]) ; i++){ //another way to print an array
cout<<"The value at index "<<i<<" is "<<marks2[i]<<endl; //sizeof is used to get size of an variable
}
//Pointer arthematic and arrays
int* p = marks;
cout<<"\nThe value of marks[0] is "<<*p<<endl;

for(int i =0; i<sizeof(marks)/sizeof(marks[0]) ; i++){  
  cout<<"\nThe value at index "<<i<<" is "<<*(p+i)<<endl; 
}

for(int i =0; i<sizeof(marks)/sizeof(marks[0]) ; i++){
cout<<"\nThe address at index "<<i<<" is "<<(p+i)<<endl;
}

cout<<*(p++)<<endl;
cout<<p<<endl;
cout<<(++p)<<endl;
cout<<*p<<endl;
return 0;
}
