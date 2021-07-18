#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printPoint(void)
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(1, 1);
    p1.printPoint();

    Point p2(4, 6);
    p2.printPoint();

    return 0;
}