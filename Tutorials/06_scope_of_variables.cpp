#include <iostream>
using namespace std;

int c = 45; //This is global variable

int main()
{
    int a, b, c;

    cout << "Enter value of a = ";
    cin >> a;
    cout << "Enter value of b = ";
    cin >> b;

    c = a + b; //This is local variable
    cout << "The value of " << a << " + " << b << " is " << c;
    cout << "\nThe local variable c is " << c;
    cout << "\nThe global variable c is " << ::c; //:: is scope resolution which is used for printing global variable

    return 0;
}