#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_num(int a){
            roll_no = a;
        }
        void print_num(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        
        void print_marks(void){
            cout<<"Your marks is "<< maths <<" and "<<physics<<endl;
        }
};

class Sport : virtual public Student{
  
    protected:
        float score;
    public:
        void set_score(int s){
            score = s;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        } 

    
};

class Result : public Test ,public Sport{
    private:
        float total;
    public:
        void set_total(void){
            total = maths + physics + score;
        }
        
        void print_total(void){
            print_num();
            print_marks();
            print_score();
            cout<<"Your total is "<<total<<endl;
            
        }
        
};

    

int main(){
    Result r;
    
    r.set_num(2019245);
    r.set_marks(85.0,63.0);
    r.set_score(9);
    r.set_total();
    r.print_total();
    return 0;
}

