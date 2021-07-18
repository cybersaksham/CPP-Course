/*
Syntax :
template <class A, class B, ...... (Comma Seperated)>
*/

#include <iostream>
using namespace std;

template <class A, class B>
class myClass
{
public:
    A data1;
    B data2;
    myClass(A a, B b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> o1(1, 'c');
    o1.display();

    myClass<char, float> o2('s', 3.14);
    o2.display();

    return 0;
}