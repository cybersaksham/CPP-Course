/*
In below example,
we have a class Vector & we want to make it for any data-type.
Then we will have to make more than one class.
So we make a template which is T data-type & when we made object, we specified data-type as int or float .....
*/

#include <iostream>
using namespace std;

// Making Template
template <class T>
class Vector
{
public:
    int size;
    T *arr;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector<float> v2(3);
    v2.arr[0] = 11.1;
    v2.arr[1] = 21.1;
    v2.arr[2] = 31.1;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}