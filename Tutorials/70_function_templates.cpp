#include <iostream>
using namespace std;

template <class A, class B>
float avg(A a, B b)
{
    float x = (a + b) / 2.0;
    return x;
}

template <class T>
void swap1(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float a = avg(3, 4.5);
    cout << "The average of 3 & 4.5 is " << a << endl;

    float b = 8.5, c = 3.4;
    swap1(&b, &c);
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}