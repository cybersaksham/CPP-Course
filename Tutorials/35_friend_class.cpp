#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

// Calculator Class
class Calculator
{
public:
    int add(int a, int b) { return a + b; }

    // We are only declaring here coz members of complex are not defined
    int sumReal(Complex o1, Complex o2);
    int sumImg(Complex o1, Complex o2);
};

// Complex Class
class Complex
{
    int a, b;
    // Individually making friend to some functions
    // friend int Calculator::sumReal(Complex o1, Complex o2);
    // Here sumImg function will not be a friend

    // Making friend to whole class
    friend class Calculator;

public:
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

// Now members of complex are defined so we can define these functions
int Calculator::sumReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumImg(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

// Main function
int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 7);

    Calculator calc;
    int res1 = calc.sumReal(c1, c2);
    int res2 = calc.sumImg(c1, c2);
    cout << "The sum of c1 & c2 is " << res1 << " + i(" << res2 << ")" << endl;

    return 0;
}