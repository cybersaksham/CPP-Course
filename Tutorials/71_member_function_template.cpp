#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T data;
    A(T a) { data = a; }
    // void display() { cout << data << endl; }
    void display();
};

template <class T>
void A<T>::display()
{
    cout << data << endl;
}

int main()
{
    A<int> h(5);
    h.display();

    return 0;
}