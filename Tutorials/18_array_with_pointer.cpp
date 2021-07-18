#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int *p = arr; //&arr will give error

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of arr[" << i << "] which is at address " << p << " is " << *p << endl;
        p++;
    }

    return 0;
}