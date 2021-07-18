// WAP to calculate distance b/w two cartesian points using OOPS

#include <iostream>
#include <cmath>
using namespace std;

// Point Class
class Point
{
    float x, y;
    friend float getDist(Point, Point);

public:
    Point(float a, float b)
    {
        x = a;
        y = b;
    }
};

// Calculating Distance
float getDist(Point p, Point q)
{
    float part1 = pow((p.x - q.x), 2);
    float part2 = pow((p.y - q.y), 2);

    return sqrt(part1 + part2);
}

// Main Function
int main()
{
    float x1, y1, x2, y2;

    // Taking input for coordinates
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    // Making objects
    Point p(x1, y1);
    Point q(x2, y2);

    // Printing result
    cout << "The distance b/w (" << x1 << ", " << y1 << ") & (" << x2 << ", " << y2 << ") is " << getDist(p, q) << endl;

    return 0;
}