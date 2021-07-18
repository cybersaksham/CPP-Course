#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am template func() " << a << endl;
}

int main()
{
    func(5); // Exact match takes higher priority
    func(3.14); // Template function called

    return 0;
}