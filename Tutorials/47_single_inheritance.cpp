/*
Single Inheritance :
Base class A --> Derived class B
*/

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData(void);
    int getData1() { return data1; };
    int getData2() { return data2; };
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void dispaly();
};

void Derived::process()
{
    data3 = data2 * getData1();
}

void Derived::dispaly()
{
    cout << "Value of Data 1 is " << getData1() << endl;
    cout << "Value of Data 2 is " << data2 << endl;
    cout << "Value of Data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.dispaly();

    return 0;
}