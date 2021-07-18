/*
Case 1 :
class B : public A {};
// First A() then B() --> Order of execution
*/

/*
Case 2 :
class C : public A, public B {};
// First A() then B() then C() --> Order of execution
*/

/*
Case 3 :
class C : public A, virtual public B {};
// First B() then A() then C() --> Order of execution
*/

#include <iostream>
using namespace std;

// Base1 Class
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called!!!" << endl;
    }
    void print_data1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

// Base2 Class
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called!!!" << endl;
    }
    void print_data2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

// Derived Class
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    // Syntax :
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called!!!" << endl;
    }
    void print_data3()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived d1(1, 2, 3, 4);
    d1.print_data1();
    d1.print_data2();
    d1.print_data3();

    return 0;
}