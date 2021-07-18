#include <iostream>
using namespace std;

int main()
{
    // Way 1
    int arr1[] = {10, 20, 30, 40};
    cout << "Way 1 :-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "  " << arr1[i] << endl;
    }

    // Way 2
    int arr2[4];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;
    cout << "Way 2 :-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "  " << arr2[i] << endl;
    }

    // Changing Value
    arr2[2] = 50;
    cout << "After Changing :-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "  " << arr2[i] << endl;
    }

    // Way 3
    int arr3[4];
    cout << "Way 3" << endl;
    cout << "Taking input for values :-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter arr3[" << i << "] = ";
        cin >> arr3[i];
    }
    cout << "Printing :-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "  " << arr3[i] << endl;
    }

    return 0;
}