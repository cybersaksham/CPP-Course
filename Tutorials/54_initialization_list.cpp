/*
Syntax :
constructor (argument-list) : initialization-section
{
    assignments + other code ....
}
*/

#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    // Test(int x, int y) : a(x), b(y)
    // Test(int x, int y) : a(x), b(x + y)
    // Test(int x, int y) : a(x), b(a + y)
    // Test(int x, int y) : b(y), a(b + x) --> will give garbage value in a coz a should be initialized first since it is declared first
    Test(int x, int y) : b(a + y), a(x)
    {
        cout << "Test constructor called!!!" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Test t(4, 5);

    return 0;
}