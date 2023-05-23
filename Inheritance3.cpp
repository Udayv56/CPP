#include<iostream>
using namespace std;

class Base{
    
    protected: // it is a kind of private variable which can be inherite
        int a;
    private:
        int b;
    
    
};
/* Inheritance:
                 public          private        protected (derived)
1.Private       Not inherited   Not inherited   Not inherited
2.protected     Protected       Private         Protected           
3.public        public          Private         Protected

*/
class Derived : protected Base{
    
};


int main(){
    Base b;
    Derived d;
    // cout<<b.a; not allowed
    // cout<<d.a; not allowed a is still protected
    
    return 0;
}

