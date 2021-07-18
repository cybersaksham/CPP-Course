// Union is same as structure
// But it allocates memory equal to maximum of all data types made.
// Because any 1 data type can be accessed at one time from union.

#include <iostream>
using namespace std;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice = 100;

    cout << endl;
    cout << "The details of m1 are:" << endl;
    cout << "The rice is " << m1.rice << endl;
    cout << "The car is " << m1.car << endl;
    cout << "The pounds is " << m1.pounds << endl;

    m1.car = 'a';

    cout << endl;
    cout << "The details of m1 are:" << endl;
    cout << "The rice is " << m1.rice << endl;
    cout << "The car is " << m1.car << endl;
    cout << "The pounds is " << m1.pounds << endl;

    m1.pounds = 1000;

    cout << endl;
    cout << "The details of m1 are:" << endl;
    cout << "The rice is " << m1.rice << endl;
    cout << "The car is " << m1.car << endl;
    cout << "The pounds is " << m1.pounds << endl;

    return 0;
}