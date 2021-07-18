// When two functions have same name then C++ automatically matches arguments & run accordingly.

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "using function of 2 arguments is ";
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using function of 3 arguments is ";
    return a + b + c;
}

int main()
{
    cout << "The sum of 3 & 5 " << sum(3, 5) << endl;
    cout << "The sum of 3, 5 & 8 " << sum(3, 5, 8) << endl;

    return 0;
}