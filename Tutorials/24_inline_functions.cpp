/*
Inline functions reduces time.
But we should not use inline functions in following cases :-
1. When code inside function is big.
2. In recursion functions
3. While using static variables
4. In loop & switch statements

Finally, we should use inline functions only in simple functions like below.
*/

#include <iostream>
using namespace std;

inline int product(int x, int y)
{
    return x * y;
}

int main()
{
    int a, b;

    cout << "Enter value of a & b" << endl;
    cin >> a >> b;

    cout << "Product of a & b is " << product(a, b) << endl;

    return 0;
}