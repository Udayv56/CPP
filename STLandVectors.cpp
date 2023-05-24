#include <iostream>
#include<vector>
using namespace std;
//STL - standard template library
//Saves alot of time
// Components of stl -> containers, algorithms , Iterators
// containers stores data (vector)
//algorithms -> sort , search etc.
// Iterators -> object that points to an element in a containers
//              just like pointers


/*
Contains are of 3 types -> Sequence containers , Associative containers
                           ,Derived containers
Sequence containers - stores in Linear fashion eg - vector , list , dequeue
Associative containers(Tree data structure) - Faster access to element eg - map , multimap , dictionary, set , multiset
Derived containers - Real world modeling eg - Stack , queue , priority queue 


When to use what?
Sequence containers - a) vector(array) ->1. Random access - fast
                                         2. Insertion / Deletion(middle) - slow (Insertion at the end is fast)
                      
                      b) list(linked list) -> 1. Random access - slow
                                              2. Insertion / Deletion in middle/end  - fast   
                                
Associative containers(Trees) - All operations fast except random access

Derived containers - Depends on data structure

*/
template <class T>
void display(vector<T> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" "<<endl; element  at i index
        
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1; // automactially manages size
    int element;
    int size;
    cin>>size;
    cout<<"Enter the element"<<endl;
    for(int i; i<size;i++)
    {
        cin>>element;
        vec1.push_back(element);
        
    }
    vec1.pop_back(); // pop like stack
    display(vec1);
    vector<int> :: iterator it = vec1.begin();
    vec1.insert(it , 52);
    //vec1.insert(it+2 ,7, 98); // at 3rd postion insert 98 7 times
    cout<<endl;
    display(vec1);
    
    vector<char> vec2(4); // 4 element character vector
    vector<char> vec3(vec2); //4 element vector from vec2
    vector<int> vec4(6,3); // 6 element vector of 3s
    
    vec2.push_back('v');
    display(vec2);
    display(vec3);
    display(vec4);
    cout<<vec4.size();
    return 0;
}
