#include <iostream>
using namespace std;

template <class T>
class Uday{
    public:
        T data;
    Uday(T a){
        data =a;
    }
    void display();
};

template <class T>
void Uday<T> :: display(){
        cout<<data<<endl;
    }
    

void func(int a){
    cout<<"I am non template "<<a<<endl;
}    
    
template <class T>
void func(T a){
    cout<<"I am template "<<a<<endl;
}


int main()
{
    //Uday<int> u(5);
    //Uday<char> u('v');
    //u.display();
    
    func(4); // exact match highest priority
    func(5.2);
    func('c');
    return 0;
}
