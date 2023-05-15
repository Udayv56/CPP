#include <iostream>

using namespace std;

//static data member
class Emp{
    int id;
    static int count; //by default value is 0
    public:
        void setData(void){
            cout<<"Enter the id ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of employee is "<<id<<" and this is employee no. "<<count<<endl;
        }
        // static function can access only static data member
        static void getCount(void){
            //cout<<id ; not allowed
            cout<<"The value of count is "<<count<<endl;
        }
};

int Emp :: count; //here value can be omitted count = 100000 if wanted
int main()
{
    Emp uday,hemant,sangeeta;
    uday.setData();
    uday.getData();
    Emp::getCount();
    hemant.setData();
    hemant.getData();
    Emp::getCount();
    sangeeta.setData();
    sangeeta.getData();
    Emp::getCount();
    return 0;
}
