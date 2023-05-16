#include <iostream>
#include<cmath>
using namespace std;
//constructor 
class Point{
    int x,y;
    friend int disPoint(Point p1, Point p2);
  public:
    Point(int ,int); 
    void printNumber(void){
        cout<<"Your point  is ("<<x<<" , "<<y<<")"<<endl;
    }
    
};
Point:: Point(int a,int b){  //paramiterized constructor
    x=a;
    y=b;
}

int disPoint(Point p1, Point p2){
    return (p2.x -p1.x)*(p2.x -p1.x) + (p2.y -p1.y)*(p2.y -p1.y);
}
int main()
{
    Point p1(2,3); //implicit call
    Point p2 = Point(6,7);
    p1.printNumber();
    p2.printNumber();
    int res = disPoint(p1, p2);
    cout<<"The distance between p1 and p2 is "<<sqrt(res)<<endl;
    return 0;
}

