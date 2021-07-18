#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1, b = 11, c = 111, d = 1111;

    cout << "The value of a without setw is " << a;
    cout << "\nThe value of b without setw is " << b;
    cout << "\nThe value of c without setw is " << c;
    cout << "\nThe value of d without setw is " << d;

    // setw is manipulator which set width of a variable
    // It can be used to align numbers in right
    cout << "\n\nThe value of a with setw is " << setw(4) << a;
    cout << "\nThe value of b with setw is " << setw(4) << b;
    cout << "\nThe value of c with setw is " << setw(4) << c;
    cout << "\nThe value of d with setw is " << setw(4) << d;

    return 0;
}