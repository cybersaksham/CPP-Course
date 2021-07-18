// Enums allocate value starting from 0 automatically.

#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    cout << "The m1 is " << m1 << endl;
    cout << "The m2 is " << m2 << endl;
    cout << "The m3 is " << m3 << endl;

    return 0;
}