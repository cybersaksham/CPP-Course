/*
                        Public Derivation | Private Derivation | Protected Derivation
1. Private members        Not Inherited   |   Not inherited    |   Not inherited
2. Protected members      Protected       |   Private          |   Protected
3. Public members         Public          |   Private          |   Protected
*/

#include <iostream>
using namespace std;

class Base
{
    int a;

protected:
    int b;
};

// Protected variables are same as private but can be inherited.

class Derived : protected Base
{
    /*
    Private   -> ----
    Protected -> b
    Public    -> ----
    */
};

int main()
{
    Derived d1;
    // cout << d1.b << endl; // Cannot do that

    return 0;
}