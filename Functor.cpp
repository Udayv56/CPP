#include <iostream>
#include<algorithm>
using namespace std;

int main()
{   
    //Function objects : Function wrapped i a class so that
    //it is available like an objects
    
    int arr[] = {1,2,8,56,45,89,41};
    sort(arr,arr+7);
    sort(arr,arr+7, greater<int>());
    for(int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }

  
    return 0;
}
