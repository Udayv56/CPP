#include <iostream>

using namespace std;

class num {
    static int count;  // Declare count as a static variable
public:
    num() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    
    ~num() {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int num::count = 0;  // Initialize the static count variable

int main() {
    cout << "Main function" << endl;
    cout << "1. object" << endl;
    num n1;
    {
        cout << "Enter new block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exit" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
