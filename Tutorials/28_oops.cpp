// Classes are extension of structures
/*
Structures had these extension
    --> members are public
    --> no methods
*/

#include <iostream>
using namespace std;

// Making Class
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// Making function of class
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee saksham;
    saksham.setData(1, 2, 3);
    // saksham.a = 15 --> We cannot do that coz a is private
    saksham.d = 10;
    saksham.e = 20;
    saksham.getData();

    return 0;
}