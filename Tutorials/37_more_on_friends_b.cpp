#include <iostream>
using namespace std;

// Forward declaration
class Y;

// Class X
class X
{
    int data1;
    friend void swap(X &, Y &);

public:
    void setValue(int value) { data1 = value; }
    void display(void) { cout << data1 << endl; }
};

// Class Y
class Y
{
    int data2;
    friend void swap(X &, Y &);

public:
    void setValue(int value) { data2 = value; }
    void display(void) { cout << data2 << endl; }
};

// Friend Function
void swap(X &o1, Y &o2)
{
    int temp = o2.data2;
    o2.data2 = o1.data1;
    o1.data1 = temp;
}

// Main Function
int main()
{
    X a;
    a.setValue(3);

    Y b;
    b.setValue(5);

    cout << "The value of X before swapping becomes: ";
    a.display();
    cout << "The value of Y before swapping becomes: ";
    b.display();

    swap(a, b);
    cout << "The value of X after swapping becomes: ";
    a.display();
    cout << "The value of Y after swapping becomes: ";
    b.display();

    return 0;
}