#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    // Overloading --> same as function overloading decides by checking arguments
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNum(void)
    {
        cout << "The number is " << a << " + i(" << b << ")" << endl;
    }
};

int main()
{
    Complex c1(4, 6), c2(5), c3;

    c1.printNum();
    c2.printNum();
    c3.printNum();

    return 0;
}