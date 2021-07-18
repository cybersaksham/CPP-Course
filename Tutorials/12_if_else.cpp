// If-Else is selection control structure

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell your age = ";
    cin >> age;

    // If-Else ladder
    if (age < 1 || age > 120)
    {
        cout << "Enter correct age";
    }
    else if (age < 18)
    {
        cout << "You can not enter the party.";
    }
    else if (age == 18)
    {
        cout << "You have to bring kid pass with you to enter the party.";
    }
    else
    {
        cout << "You can enter the party.";
    }

    return 0;
}