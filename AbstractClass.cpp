#include<iostream>
#include<cstring>
using namespace std;
 
class CWU  //Abstract base class  - must have atleast 1 pure virtual function
{
    protected:
        string title;
        float rating;
    public: 
        CWU(string s , float r){
            title= s;
            rating = r;
        }
        virtual void display()=0; // do nothing function --> pure virtual function 
};      // it must be defined in derived class

class CWUVideo : public CWU{
    float videoLength;
    public:
        CWUVideo(string s , float r, float vl) : CWU(s,r){
            videoLength = vl;
    
        }
        
        void display(){
            cout<<"This video is "<<title<<endl;
            cout<<"RATING(out of 5) - "<<rating<<endl;
            cout<<"Length - "<<videoLength<<" minutes"<<endl;
        }
            
};

class CWUText : public CWU{
    int words;
    public:
        CWUText(string s , float r, int wc) : CWU(s,r){
            words  = wc;
    
        }
        void display(){
            cout<<"This video is "<<title<<endl;
            cout<<"RATING(out of 5) - "<<rating<<endl;
            cout<<"Words - "<<words<<endl;
        }
};


int main(){
      string title;
      float rating, len;
      int words;
      
      title = "Python";
      len = 6.30;
      rating = 4.5;
      CWUVideo python(title , rating , len);
      python.display();
      
      title = "Python Text";
      words = 250;
      rating = 4.6;
      
      CWUText pythonText(title , rating , words);
      pythonText.display();
      
      CWU* tuts[2];
      tuts[0] = &python;
      tuts[1] = &pythonText;
      cout<<endl;
      tuts[0]->display();
      tuts[1]->display();
      
      
    return 0;
}

