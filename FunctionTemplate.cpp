#include <iostream>
using namespace std;

// Function template
template <class T1, class T2>
float avg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T&b){
    T temp = a;
    a = b;
    b = temp;
}


/*float avg2(int a, float b){
    float avg = (a+b)/2.0; no need for this
    return avg;
}*/


int main()
{
    float a;
    a = avg(1,2);
    cout<<a<<endl;
    float b;
    b = avg(1,3.6);
    cout<<b<<endl;
    int x=2,y=3;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
