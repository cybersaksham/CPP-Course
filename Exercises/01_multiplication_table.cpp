/*
Take input for a number.
Then print multiplication table of that number using loop.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "Enter no for calculating multiplication table = ";
    cin >> num;

    cout << "The multiplication table for " << num << " is :-" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << num << " * " << setw(2) << i + 1 << " = " << num * (i + 1) << endl;
    }

    return 0;
}