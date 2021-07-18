#include <iostream>
using namespace std;

int main()
{
    // Pointer is data-type which holds adderess fo other variable
    // & --> Address of
    // * --> Dereference operator
    int a = 5;
    int *b = &a;  //Pointer
    int **c = &b; //Pointer to Pointer

    cout << "The value of a is " << a << endl;
    cout << "The address of a i.e. value of b is " << b << endl;
    cout << "The value at adress b is " << *b << endl;
    cout << "The address of b i.e. value of c is " << c << endl;
    cout << "The value at address value at adress c is " << **c << endl;

    return 0;
}