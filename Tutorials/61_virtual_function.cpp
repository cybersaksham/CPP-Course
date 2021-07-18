#include <iostream>
using namespace std;

class Base
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << "var1 = " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var2 = 2;
    void display()
    {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
    }
};

int main()
{
    Base *base_ptr;
    Base obj_base;
    Derived obj_derived;
    base_ptr = &obj_derived;

    // Since we have made display function of base class virtual so now function of derived class would be run.
    base_ptr->display();

    return 0;
}