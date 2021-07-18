/*
Syntax :
template <class A = {{default data-type}}, class B, ...... (Comma Seperated)>
*/

#include <iostream>
using namespace std;

template <class A = int, class B = char>
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
    myClass<> o1(1, 'c'); // This will take default int, char
    o1.display();

    myClass<char, float> o3('s', 3.14);
    o3.display();

    return 0;
}