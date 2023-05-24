#include <iostream>
using namespace std;

template <class T1= int , class T2 = float, class T3 = char>
class Uday{
   public:
        T1 a;
        T2 b;
        T3 c;
        Uday(T1 x, T2 y, T3 z){
            a =x;
            b=y;
            c =z;
        }
        
        void display(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
        }
        
};
int main()
{
    Uday<> u(5,6.3,'n');
    u.display();
    cout<<endl;
    Uday<int,int,float> u1(5,6,5.6);
    u1.display();
    
    return 0;
}
