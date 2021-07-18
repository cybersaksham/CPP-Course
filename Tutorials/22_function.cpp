#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Function Protoytpe
int multi(int a, int b);
void greet();

int main()
{
    int n1, n2;

    cout << "Enter n1 = ";
    cin >> n1;
    cout << "Enter n2 = ";
    cin >> n2;

    // n1 & n2 are actual parametres
    greet();
    cout << "The sum of " << n1 << " & " << n2 << " is " << sum(n1, n2) << endl;
    cout << "The multiplication of " << n1 << " & " << n2 << " is " << multi(n1, n2) << endl;

    return 0;
}

// a & b are formal parametres
int multi(int a, int b)
{
    int c = a * b;
    return c;
}

void greet()
{
    cout << "Hello, Good Morning!!!" << endl;
}