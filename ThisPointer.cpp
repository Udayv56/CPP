#include<iostream>
using namespace std;

class A
{
    int a;
    float price;
    public:
        A& setData(int a){
           this->a= a;
           return *this;
        }
        void getData(void){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which points to the object which invokes
    //the member function
    A a;
    a.setData(4).getData();
    a.getData();
    return 0;
}
