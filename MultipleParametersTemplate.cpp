#include <iostream>
using namespace std;
/*
template <class T1, class T2>
class nameOfClass{
    //body
};


*/
// CLASS TEMPLATE WITH MULTIPLE PARAMETERS
template <class T1, class T2> //COMMA SEPERATED
class MyClass{
    public:
        T1 data1;
        
        T2 data2;
        
        MyClass(T1 a, T2 b){
            data1 =a;
            data2 = b;
            
        }
        
        void display(){
            cout<<this->data1<<" "<<this->data2<<endl;
        }
};


int main()
{
    MyClass<int,char> obj(1,'c');
    obj.display();
    MyClass<int,int> obj1(1,2);
    obj1.display();
    MyClass<char,float> obj2('f',2.0);
    obj2.display();
    return 0;
}
