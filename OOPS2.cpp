#include <iostream>
#include<string>
using namespace std;
//OOPS
//Difference between structure and classes
/*


OOPs - Classes and objects

C++ --> initially called --> C with classes by stroustroup
class --> extension of structures (in C)
structures had limitations
--> members are public
--> No methods

classes --> can have methods and properties
*/

class binary{
    string s; //by default private
    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i< s.length(); i++){
        if (s.at(i) !='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones(void){
    chk_bin();  //nesting
    for(int i =0 ; i< s.length(); i++){
        if (s.at(i) =='0' ){
            s.at(i) ='1';
        }
        else {
            s.at(i) ='0';
        }
    }
}

void binary :: display(void){
    for(int i =0 ; i< s.length(); i++){
        cout<<s.at(i);
    }
}

int main()
{
   binary b;
   b.read();
   //b.chk_bin();
   b.display();
   cout<<"\n";
   b.ones();
   b.display();

    return 0;
}
