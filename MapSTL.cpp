#include <iostream>
#include<map>
#include<string>
using namespace std;

int main()
{   
    map<string , int> marks;
    marks["Uday"] = 98;
    marks["abhinav"] = 58;
    marks["vijay"] = 84;
    marks["hirday"] = 97;
    marks.insert({{"Hemant" , 69}, {"lavi", 85}});
    map<string , int> :: iterator it;
    for(it = marks.begin() ; it != marks.end() ; it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
     cout<<"The size is: "<<marks.size()<<endl;
    cout<<"The max size is: "<<marks.max_size()<<endl;
    cout<<"The empty return value is: "<<marks.empty() <<endl;

  
    return 0;
}
