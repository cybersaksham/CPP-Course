/*
Create 2 classes :
1. SimpleCalculator --> Take input for 2 numbers & perform 4 simple mathematical operations.
2. ScientificCalculator --> Take input for 2 numbers & perform 4 any scientific operations.

Create another Hybridcalculator inherited from both above.
Then display all operations for objects of third class.
*/

#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

// Simple Calculator
class SimpleCalculator
{
protected:
    float num1, num2, sum, multiply, subtract, divide;

public:
    void calc1()
    {
        sum = num1 + num2;
        multiply = num1 * num2;
        subtract = num1 - num2;
        divide = num1 / num2;
    }
    void display1()
    {
        cout << endl
             << "Simple Operations :" << endl;
        cout << num1 << " + " << num2 << " = " << sum << endl;
        cout << num1 << " * " << num2 << " = " << multiply << endl;
        cout << num1 << " - " << num2 << " = " << subtract << endl;
        cout << num1 << " / " << num2 << " = " << divide << endl;
    }
};

// Scientific Calculator
class ScientificCalculator
{
protected:
    float num3, num4, num5, num6, sin1, cos1, tan1, power;

public:
    void calc2()
    {
        sin1 = sin(num5 + num6);
        cos1 = cos(num5 + num6);
        tan1 = tan(num5 + num6);
        power = pow(num3, num4);
    }
    void display2()
    {
        cout << endl
             << "Scientific Operations :" << endl;
        cout << "sin(" << num3 << " + " << num4 << ") = " << sin1 << endl;
        cout << "cos(" << num3 << " + " << num4 << ") = " << cos1 << endl;
        cout << "tan(" << num3 << " + " << num4 << ") = " << tan1 << endl;
        cout << num3 << " power " << num4 << " is = " << power << endl;
    }
};

// Hybrid Calculator
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    /*
    Private   -> ----
    Protected -> num1, num2, sum, multiply, subtract, divide, num3, num4, num5, num6, sin1, cos1, tan1, power
    Public    -> calc1(), display1(), clac2(), display2()
    */
public:
    HybridCalculator(float a, float b)
    {
        num1 = a;
        num2 = b;
        num3 = a;
        num4 = b;
        num5 = a * (pi / 180);
        num6 = b * (pi / 180);
    }
    void result()
    {
        calc1();
        calc2();
        display1();
        display2();
    }
};

int main()
{
    float a, b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    HybridCalculator h1(a, b), h2(b, a);
    h1.result();
    h2.result();

    return 0;
}