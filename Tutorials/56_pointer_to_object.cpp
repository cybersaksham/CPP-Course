#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void getData()
    {
        cout << "The real part is " << a << endl;
        cout << "The imaginary part is " << b << endl;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(4, 6);
    // (*ptr).getData();
    ptr->setData(4, 6); // Arrow Operator
    ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(2, 5);
    ptr1->getData();

    return 0;
}