#include <iostream>

using namespace std;

class Employee{ //Base class
    
    
    public:
    int id;
    float salary = 3400;
    Employee(int inpId){
        id = inpId;
     
    }
    Employee(){};
};

//Derived class
//class {{derived-class-name}} : {{visibility mode//default private}} {{base class name}}
//Private visibility mode : Public members of the base class becomes private members of the dderived class
//Public visibility mode : Public members of the base class becomes public members of the dderived class
// Private members are never inherited
class Programer : Employee{
    public:
        Programer(int inpId){
            id = inpId;
        }
        int languageCode = 9;  
        void getData(){
            cout<<id;
        }
};


int main()
{
    Employee Uday(1),Hemant(2);
    cout<<Uday.salary<<endl;
    Programer s(1);
    cout<<s.languageCode<<endl;
    s.getData();
    return 0;
}
