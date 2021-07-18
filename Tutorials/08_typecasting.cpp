#include <iostream>
using namespace std;

int main()
{
    // Type-casting is used to change data-type of a variable if conversion is valid.

    float a = 3.14;
    int c = (int)a;

    cout << "The value of a is " << a;
    cout << "\nThe value of (int)a is " << (int)a;
    cout << "\nThe value of inta(a) is " << int(a);
    cout << "\nThe value of c is " << c;

    return 0;
}