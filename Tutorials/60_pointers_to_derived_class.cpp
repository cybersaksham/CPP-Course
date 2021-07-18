#include <iostream>
using namespace std;

class Base
{
public:
    int var1;
    void display()
    {
        cout << "var1 = " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var2;
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
    base_ptr = &obj_derived; // Pointing Base Class pointer to derived class

    base_ptr->var1 = 30;
    base_ptr->display(); // function of base class would we run
    // base_ptr->var2 = 15; --> will throw an error

    // Making Derived Class Pointer
    Derived *derived_ptr = &obj_derived;
    derived_ptr->var2 = 40;
    derived_ptr->display();

    // Here display() is present 2 times & it is decided in run time that which function is to run.

    return 0;
}