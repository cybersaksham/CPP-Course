//Loops are loop control structure

#include <iostream>
using namespace std;

int main()
{
    /*
    There are 3 types of loops in C++:
        1. For Loop
        2. While Loop
        3. Do-while Loop
    */

    // 1. For Loop
    /*
    Syntax :-
    for (initialization; condition; updation)
    {
        Write your code
    }
    */
    cout << "1. For Loop" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "   " << i + 1 << endl;
    }

    // Example of infinite for loop
    /*
    for (int i = 0; 1 > 0; i++)
    {
        cout << "   " << i + 1 << endl;
        i += 1;
    }
    */

    // 2. While Loop
    /*
    Syntax :-
    while (condition)
    {
        Write your code
    }
    */
    cout << "2. While Loop" << endl;
    int j = 0;
    while (j < 10)
    {
        cout << "   " << j + 1 << endl;
        j += 1;
    }

    // Example of infinite while loop
    /*
    while (true)
    {
        cout << "   " << j + 1 << endl;
        j += 1;
    }
    */

    // 3. Do-While Loop
    /*
    Syntax :-
    do
    {
        Write your code
    }
    while (condition)
    */
    cout << "3. Do-While Loop" << endl;
    int k = 0;
    do
    {
        cout << "   " << k + 1 << endl;
        k += 1;
    } while (k < 10);
    // Do-While loop runs code atleast once does not matter condition is true or false.

    return 0;
}