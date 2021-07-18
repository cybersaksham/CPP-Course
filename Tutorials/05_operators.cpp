#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;

    // Arithmetic Operators --> +, -, *, /, %, ++, --
    cout << "The value of a + b is " << a + b;   //Add
    cout << "\nThe value of a - b is " << a - b; //Subtract
    cout << "\nThe value of a * b is " << a * b; //Multiply
    cout << "\nThe value of a / b is " << a / b; //Divide
    cout << "\nThe value of a % b is " << a % b; //Modulo --> Remainder
    cout << "\nThe value of a++ is " << a++;     //Post Increment --> First print then increase
    cout << "\nThe value of a-- is " << a--;     //Post Decrement --> First print then decrease
    cout << "\nThe value of ++b is " << ++b;     //Post Increment --> First increase then print
    cout << "\nThe value of --b is " << --b;     //Post Decrement --> First decrease then print
    cout << "\n";

    // Assignment Operators --> =
    int c = 5;
    c = 9;
    cout << "\nThe value of c is " << c;
    cout << "\n";

    // Comparison Operators --> ==, !=, <, >, <=, >=
    cout << "\nThe value of a == b is " << (a == b);
    cout << "\nThe value of a != b is " << (a != b);
    cout << "\nThe value of a < b is " << (a < b);
    cout << "\nThe value of a > b is " << (a > b);
    cout << "\nThe value of a <= b is " << (a <= b);
    cout << "\nThe value of a >= b is " << (a >= b);
    cout << "\n";

    // Logical Operators --> &&, ||, !
    cout << "\nThe value of ((a == b) && (a != b)) is " << ((a == b) && (a != b));
    cout << "\nThe value of ((a == b) || (a != b)) is " << ((a == b) || (a != b));
    cout << "\nThe value of (!(a == b))is " << (!(a == b));

    return 0;
}