/*
Function Objects (Functors) :
Function wrapped in a class so that it available like an object.
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {4, 8, 1, 75, 45, 3, 9};

    sort(arr, arr + 7, greater<int>()); // greater is functor which assures that array is sorted in reverse order

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}