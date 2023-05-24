#include<iostream>
using namespace std;
 //Polymorphism
   // one name and multiple forms
   // Compile time - function overloading, operator overloading
   // Run time -virtual function
class BaseClass
{
  public:
    int var1;
    void display(){
        cout<<var1<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var2;
    void display(){
        cout<<var1<<" "<<var2<<endl;
        
    }
};


int main(){
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //if you will call display then it will be of base class
    base_class_pointer->var1 = 34;
    base_class_pointer->display();// pointer base class but object is of derived
    // base_class_pointer->var2 = 45; // error 
    DerivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var2 = 45; 
    derived_class_pointer->display();
    derived_class_pointer->var1 = 405; 
    derived_class_pointer->display();
    
    return 0;
}
