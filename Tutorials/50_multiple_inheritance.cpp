/*
Multiple Inheritance :
Class A ---|\
           | \
Class B ---|--> Class D
           | /
Class C ---|/

Syntax :
// class Derived : visibility-mode Base1, visibility-mode Base2 { class-body };
*/

#include <iostream>
using namespace std;

// Base1 class
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a) { base1int = a; }
};

// Base2 class
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a) { base2int = a; }
};

// Derived class inheroted from Base1 & Base2 both
class Derived : public Base1, public Base2
{
    /*
    Private   -> ----
    Protected -> base1int, base2int
    Public    -> set_base1int(), set_base2int()
    */
public:
    void show()
    {
        cout << "The value of base1int is " << base1int << endl;
        cout << "The value of base2int is " << base2int << endl;
    }
};

int main()
{
    Derived d1;
    d1.set_base1int(1);
    d1.set_base2int(2);
    d1.show();

    return 0;
}