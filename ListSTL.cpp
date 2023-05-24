#include <iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
}
int main()
{   
    list<int> mylist;
    list<int> mylist2(3);
    mylist.push_back(9);
    mylist.push_back(5);
    mylist.push_back(3);
    mylist.push_back(8);
    mylist.push_back(6);
    mylist.push_back(9);
    display(mylist);
    
    list<int> :: iterator it2;
    it2 = mylist2.begin();
    *it2 = 45;
    it2++;
    *it2 = 4;
    it2++;
    *it2 = 5;
    it2++;
    
    cout<<endl;
    
    display(mylist2);
    cout<<endl;
    //Removing elements from the list
//
    mylist.pop_front();
    display(mylist);
    cout<<endl;
    mylist.pop_back();
    display(mylist);
    cout<<endl;
    mylist.remove (3);
    display(mylist);
    cout<<endl;
// Sorting the list
    mylist.sort();
    display(mylist);
    cout<<endl;
    //Reversing the list
    mylist.reverse();
    display(mylist);

    
    
    return 0;
}
