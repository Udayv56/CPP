#include<iostream>
using namespace std;
// Multilevel inheritance
class Student{
    protected:
        int roll_number;
    public:
        void setNum(int);
        void getNum(void);
};

void Student :: setNum(int r){
    roll_number = r;
}

void Student :: getNum(){
    cout<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};

void Exam :: setMarks(float m1 ,float m2){
    maths = m1;
    physics = m2;
}

void Exam :: getMarks(){
    
    cout<<maths<<" "<<physics<<endl;
}

class Result : public Exam{
    float pert;
    public:
        void display();
};

void Result :: display(){
    getNum();
    getMarks();
    
    cout<<(maths+physics)/2<<endl;
}

int main(){
    Result r;
    r.setNum(2019245);
    r.setMarks(96.0,86.0);
    r.getMarks();
    r.display();
    return 0;
}

