#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    // Here greet is ambiguous function
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "How are you?" << endl;
    }
};

class D : public B
{
public:
    // say() is already defined so it is over-writed here
    void say()
    {
        cout << "Kaise ho?" << endl;
    }
};

int main()
{
    // Ambiguity 1
    Derived d1;
    d1.greet();

    // Ambiguity 2
    D d;
    d.say();

    return 0;
}