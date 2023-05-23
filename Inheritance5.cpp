#include<iostream>
using namespace std;
// Multiple inheritance

/*class Derived : visibility-mode base1, visibility-mode base2{
    class body
};*/

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int r){
            base1int = r;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int r){
            base2int = r;
        }
};

class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int r){
            base3int = r;
        }
};

class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<base1int<<" "<<base2int<<" "<<base3int<<endl;
        }
    
};

int main(){
    Derived d;
    d.set_base1int(6);
    d.set_base2int(9);
    d.set_base3int(8);
    d.show();
   
    return 0;
}

