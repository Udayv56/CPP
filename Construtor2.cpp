#include <iostream>
#include<cmath>
using namespace std;

class Simple{
    int data1,data2;
    public:
        Simple(int a,int b=9){
            data1 = a;
            data2 = b;
        }
        void printData ();
        
};

void Simple :: printData(){
    cout<<data1<<" "<<data2<<endl;
}
int main()
{
   Simple s(2);
   s.printData();
   Simple s1(6,8); // Constructor with default arguments
   s1.printData();
    return 0;
}

