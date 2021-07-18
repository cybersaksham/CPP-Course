#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue; //This breaks for only tis iteration and continues to next iteration
        }
        cout << i << endl;
        if (i == 6)
        {
            break; //This breaks the loop and does not execute for further iterations
        }
    }

    return 0;
}