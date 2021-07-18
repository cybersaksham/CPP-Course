#include <iostream>
using namespace std;

// Forward declaration
class Y;

// Class X
class X
{
    int data;
    friend void add(X, Y);

public:
    void setValue(int value) { data = value; }
};

// Class Y
class Y
{
    int data;
    friend void add(X, Y);

public:
    void setValue(int value) { data = value; }
};

// Friend Function
void add(X o1, Y o2)
{
    cout << "Sum of data of X & Y objects is " << (o1.data + o2.data) << endl;
}

// Main Function
int main()
{
    X a;
    a.setValue(3);

    Y b;
    b.setValue(5);

    add(a, b);

    return 0;
}