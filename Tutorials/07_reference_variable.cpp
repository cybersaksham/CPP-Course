#include <iostream>
using namespace std;

int main()
{
    // Reference variables are used to make 2 variable to same address

    float x = 45;
    float &y = x; //y is reference variable of x

    cout << x;
    cout << "\n"
         << y;

    x = 34.1; //If we change value of x then y also changed
    cout << "\n"
         << x;
    cout << "\n"
         << y;

    y = 3.14; //If we change value of y then x also changed
    cout << "\n"
         << x;
    cout << "\n"
         << y;

    return 0;
}