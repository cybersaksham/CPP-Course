#include <iostream>
using namespace std;

// Here factor has value 1.04 by default which can be overwrite.
// Default arguments must be written in extreme right.

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// We use constant variables when we want to remain them constant.
int sum(const int a)
{
    return a + 2;
}

int main()
{
    int money = 100000;

    cout << "For normal person :" << endl;
    cout << "If you have " << money << " Rs the you will receive " << moneyReceived(money) << " Rs" << endl;

    cout << "For VIP :" << endl;
    cout << "If you have " << money << " Rs the you will receive " << moneyReceived(money, 1.08) << " Rs" << endl;

    return 0;
}