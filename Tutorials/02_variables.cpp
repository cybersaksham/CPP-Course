#include <iostream>
using namespace std;

int global = 6; //Global Variable

int main()
{
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'u';
    int glo = 20;        //Local Variable --> Take Precedence
    bool check = true;   //Value = 1
    bool check2 = false; //Value = 0

    cout << "The value of a is " << a << ".\nThe value of b is " << b << ".";
    cout << "\nThe value of PI is " << pi;
    cout << "\nThe value of c is " << c;
    cout << "\nThe value of glo is " << glo;
    cout << "\nThe value of check is " << check;
    cout << "\nThe value of check2 is " << check2;
    cout << endl << "The value of check2 is " << check2; // endl also give newline

    return 0;
}