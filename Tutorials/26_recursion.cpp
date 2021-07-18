#include <iostream>
using namespace std;

// Recursion is always very slow than iteration
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int a;

    cout << "Enter a = ";
    cin >> a;

    if (a >= 0)
    {
        cout << a << "! = " << factorial(a) << endl;
    }
    else
    {
        cout << "Enter correct number!!!" << endl;
    }

    return 0;
}