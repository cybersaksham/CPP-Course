#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Giving access of private mambers to friend function
    friend Complex sumComplex(Complex o1, Complex o2);
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your no is " << a << " + i(" << b << ")" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
Properties of friend function :
1. Not in the scope of class
2. Cannot be called from object of the class
    --> c1.sumComplex() == INVALID
3. Can be invoked without help of objects
4. Usually contains the objects as arguments
5. Can be declared in either public or private section of class.
6. It cannot access members directly by name but can access by objects names.
    --> cout << a;     == INVALID
    --> cout << o1.a   == VALID
*/