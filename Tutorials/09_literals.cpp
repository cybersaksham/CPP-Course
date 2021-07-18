#include <iostream>
using namespace std;

int main()
{
    float a = 3.14;
    long double b = 3.15;

    cout << "The value of a which is float is " << a;
    cout << "\nThe value of b which is long double is " << b;

    // 3.14 is double by-default in c++
    cout << "\n\nThe size of 3.14 is " << sizeof(3.14); //double
    cout << "\nThe size of 3.14f is " << sizeof(3.14f); //float
    cout << "\nThe size of 3.14F is " << sizeof(3.14F); //float
    cout << "\nThe size of 3.14l is " << sizeof(3.14l); //long double
    cout << "\nThe size of 3.14L is " << sizeof(3.14L); //long double

    return 0;
}