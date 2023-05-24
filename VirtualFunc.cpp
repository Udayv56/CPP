#include<iostream>
using namespace std;
 
class BaseClass
{
  public:
    int var1;
    virtual void display(){
        cout<<var1<<endl;
        cout<<"BASE CLASS"<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var2;
    void display(){
        cout<<var1<<" "<<var2<<endl;
        cout<<"DERIVED CLASS"<<endl;
        
    }
};


int main(){
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; 
    base_class_pointer->display(); // default behaviour baseclass 
    // to make it run derived one then use virtual 
    BaseClass* base_class_pointer2;
    base_class_pointer2 = &obj_base;
    base_class_pointer2->display();    
    return 0;
}
