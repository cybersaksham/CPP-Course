// Switch-Case is selection control structure

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell your age = ";
    cin >> age;

    //Switch Case Statements
    switch (age)
    {
    case 18:
        cout << "\nYou are of 18";
        break;
    case 2:
        cout << "\nYou are of 2";
    case 22:
        cout << "\nYou are of 22";
        break;
    case 45:
        cout << "\nYou are of 45";
        break;

    default:
        cout << "\nNo cases defined";
        break;
    }
    // If break is not written then it wil print all values after correct condition until break not found

    return 0;
}