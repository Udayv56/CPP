#include<iostream>
using namespace std;

int main(){
   int a =4;
   int* ptr = &a;
   
   cout<<ptr<<endl;
   cout<<"The value of a is "<<*(ptr)<<endl;
   
   //new keyword
   int* p = new int(40);
   cout<<p<<endl;
   cout<<"The value of a is "<<*(p);
   
   // int *arr = new int[n]; dynamic allocation of an array
   //delete[] arr;
   
   int n=5;
   int *arr = new int[n];
   //delete[] arr; if here then values will be different if values are hardcoded
   for(int i=0;i<5;i++){
       cin>>arr[i];
   }
   
   delete[] arr;
   
   return 0;
} 

