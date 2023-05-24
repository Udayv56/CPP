#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

// The useful classes for working with files in c++ are:
/*
1. fstreambase
2. ifstream -> derived from fstreambase
3. ofstream -> derived from fstreambase

in order to work with files, you will have to open it
1. Using the constructor 
2. Using the member function open() of the class

*/
int main(){
    string s = "Uday verma";
    //Opening files using constructor and writing
    ofstream out("Sample.txt"); // write operation
    out<<s;
    //Opening files using constructor and readiing
    string s1;
    ifstream in("Sample2.txt"); // does not consider whitespaces 
    //in>>s1;
    getline(in , s1); //better
    cout<<s1;
      
    return 0;
}

