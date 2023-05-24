#include <iostream>
using namespace std;
// templates (parameterized classes)
// to do generic programming
/* SYNTAX
template <class T> T can be int , float , char, etc.... ]
    class vector{                                       | 
        t* arr;                                         |---------> Represent many classes
        public:                                         |
            vector(t*arr){//code}                       |
    }                                                   ]

*/
template <class T>
class vector{
    
    public:
        T *arr;
        int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        
        int dotProduct(vector &v){
            T d=0;
            for(int i=0;i<size;i++){
                d += this->arr[i]*v.arr[i];
               
            }
             return d;
        }
};


int main()
{
//vector<int> myvec(ptr);
//vector<float> myvec(ptr); to invoke
// very useful for competetive programming (templates and stl) star
   /* vector v1(3);
    v1.arr[0] = 1; // wont work for float if we dont use template
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 5;
    v2.arr[2] = 9;
    
    int a = v1.dotProduct(v2);
    cout<<a<<endl;*/
    
    vector <float>v3(3);
    v3.arr[0] = 1.6; // wont work for float if we dont use template
    v3.arr[1] = 0.2;
    v3.arr[2] = 3.3;
    vector <float>v4(3);
    v4.arr[0] = 1.3;
    v4.arr[1] = 5.2;
    v4.arr[2] = 0.9;
    
    float b = v3.dotProduct(v4);
    cout<<b<<endl;
    
    
    
    
    return 0;
}
