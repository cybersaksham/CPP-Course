#include <iostream>
using namespace std;

// Class Complex
class Complex
{
    int a, b;

public:
    /*
    Constructor is a special member function with same name as of the class.
    It is used to initialize the objects of its class.
    It is automatically invoked whenever an object is created.
    */
    Complex(void); // Constructor declaration
    void printData(void)
    {
        cout << "The complex no is " << a << " + i(" << b << ")" << endl;
    }
};

// Default Constructor --> Accepts no argument
Complex::Complex(void)
{
    a = 0;
    b = 0;
}

// Main Function
int main()
{
    Complex c;
    c.printData();

    return 0;
}

/*
Properties of Constructors :
1. It must be declared in public section of class.
2. They are automatically invoked whenever object is created.
3. Do not have return type & hence cannot return any value.
4. It can have default arguments.
5. We cannnot refer to their address.
*/