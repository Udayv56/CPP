#include <iostream>
using namespace std;


//function calling itself
int fact(int n){
    
    if (n<=1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
        
}
// Sometimes recursion takes quite much memory, so every time it is not good
int main()
{
    //Recursion
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"The factorial of " <<n<<" is "<<fact(n);
    
    return 0;
}
