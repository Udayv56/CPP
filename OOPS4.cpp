#include <iostream>

using namespace std;

//static data member
class Emp{
    int id;
    int salary; 
    public:
        void setData(void){
            cout<<"Enter the id ";
            cin>>id;
            
        }
        void getData(void){
            cout<<"The id of employee is "<<id<<endl;
        }
        
       
};

class complex{
  int a,b;
  public:
    void setData(int v1, int v2){
         a=v1;
        b=v2;
      
    }
  
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
  
    void printNum(){
        cout<<"Your complex no. is "<<a<<" +"<<b<<"i"<<endl;
    }
};
int main()
{
    //Emp uday,hemant,sangeeta;
    //uday.setData();
    //uday.getData();
    
    Emp fb[2]; //array of objects
    for(int i =0;i<2;i++){
        fb[i].setData();
        fb[i].getData();
     }
    
    complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.setDataBySum(c1,c2); //passing objects as arguments in function
    c3.printNum();
    
    
    
    return 0;
}
