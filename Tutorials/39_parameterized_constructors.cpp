#include <iostream>
using namespace std;

// Class Complex
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printData(void)
    {
        cout << "The complex no is " << a << " + i(" << b << ")" << endl;
    }
};

// Parameterized Constructor --> Takes some parameters
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex c1(4, 6);
    c1.printData();

    // Explicit Call
    Complex c2 = Complex(5, 7);
    c2.printData();

    return 0;
}