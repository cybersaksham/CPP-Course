#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() { a = 0; }
    Number(int num) { a = num; }

    // When no copy constructor is found then compiler runs its own copy constructor.
    Number(Number &obj)
    {
        cout << "Copy constructor is called!!!" << endl;
        a = obj.a;
    }

    void display(void)
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(5);

    x.display();
    y.display();
    z.display();

    // Methods to invoke user made copy constructor

    // Method 1
    Number z1(z); // Copy constructor is called

    // Mehthod 2
    Number z2; // Default copy constructor is called
    z2 = z;    // User copy constructor is not called coz object is already made

    // Mehthod 3
    Number z3 = z; // Copy constructor called

    return 0;
}