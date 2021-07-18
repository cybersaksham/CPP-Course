// Calculate volume of cylinder, cube & cuboid using function overloading.

#include <iostream>
using namespace std;

// Calculate volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate volume of cube
int volume(int a)
{
    return (a * a * a);
}

// Calculate volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The volume of cylinder of redius 3 height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    cout << "The volume of cuboid of sides 3, 4, 5 is " << volume(3, 4, 5) << endl;

    return 0;
}