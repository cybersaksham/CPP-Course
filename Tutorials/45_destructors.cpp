// Process of destructors

#include <iostream>
using namespace std;

// Destructor neither takes an argument nor return a value.

class Num
{
    static int count;

public:
    Num()
    {
        count++;
        cout << "This is time when constructor is called for object no " << count << endl;
    }

    // Destructor
    ~Num()
    {
        cout << "This is time when destructor is called for object no " << count << endl;
        count--;
    }
};

int Num::count;

int main()
{
    cout << "We are in main function" << endl;

    cout << "Creating first object n1" << endl;
    Num n1;

    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects n2, n3" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main function" << endl;

    return 0;
}