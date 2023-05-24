#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample.txt");
    string s;
    cout << "Enter your name: ";
    getline(cin, s); // Read entire line, including spaces
    out << "The name is " + s;
    out.close(); // Disconnect the file

    ifstream in("sample.txt");
    string content;
    getline(in, content);
    cout << "The content of the file is: " << content;
    in.close();
    
    ofstream out1;
    out1.open("sample1.txt");
    out1<<"Open function";
    out1<<"\n This is line";
    out1.close();
    
    ifstream in1;
    string st;
    in1.open("sample1.txt");
    //getline(in1 , st);
    //cout<<endl;
    //cout<<st;
    
    while(in1.eof() == 0){
        getline(in1 , st);
        cout<<st<<endl;
        
    }
    return 0;
}
