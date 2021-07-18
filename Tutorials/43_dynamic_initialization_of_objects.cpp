#include <iostream>
using namespace std;

class Bank
{
    int principal, years;
    float interesetRate, returnValue;

public:
    Bank() {}
    Bank(int p, int y, float r); // r can be like 0.04
    Bank(int p, int y, int r);   // r can be like 42
    void show(void);
};

Bank::Bank(int p, int y, float r)
{
    principal = p;
    years = y;
    interesetRate = r;
    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interesetRate);
    }
}

Bank::Bank(int p, int y, int r)
{
    principal = p;
    years = y;
    interesetRate = (float)r / 100;
    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interesetRate);
    }
}

void Bank::show(void)
{
    cout << "Principal amount was " << principal << endl;
    cout << "Return Value after " << years;
    if (years == 1)
    {
        cout << " yr is ";
    }
    else
    {
        cout << " yrs is ";
    }
    cout << returnValue << endl;
}

int main()
{
    Bank b1, b2, b3;
    int p, y, R;
    float r;

    cout << "Enter value of p, y & r" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.show();

    cout << "Enter value of p, y & R" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.show();

    return 0;
}