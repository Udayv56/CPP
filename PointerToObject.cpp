#include <iostream>

using namespace std;
class Complex{
    int real , img;
    public:
        void getData(){
            cout<<"Real "<<real<<" Imaginary "<<img<<endl;
        }
        void setData(int a, int b){
            real = a;
            img = b;
        }

};

int main()
{
   Complex c;
   Complex *ptr = &c; //Complex *ptr = new Complex;
   cout<<sizeof(c)<<endl;
   //c.setData(5,6);  is exactly same as
   ptr->setData(5,6); // no need to use dereferance operator *
   c.getData();

    //Array of obj
    Complex *ptr1 = new Complex[4];
    cout<<sizeof(Complex)<<endl;
    ptr1->setData(1,58); 
    ptr1->getData();
    return 0;
}
