#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    // Here default value of b is 5
    Simple(int a, int b = 5)
    {
        data1 = a;
        data2 = b;
    }
    void printData(void)
    {
        cout << "The value of data is " << data1 << " and " << data2 << endl;
    }
};

int main()
{
    Simple s1(1, 4), s2(2);

    s1.printData();
    s2.printData();

    return 0;
}