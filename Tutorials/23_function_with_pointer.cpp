#include <iostream>
using namespace std;

// Call by value --> does not change actual parametres
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference --> changes actual parametres
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference --> using reference variable
void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Returning reference variable
int &swap4(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return a;
}

// Function Protoytpe
int multi(int a, int b);

int main()
{
    int n1, n2;

    cout << "Enter n1 = ";
    cin >> n1;
    cout << "Enter n2 = ";
    cin >> n2;

    int n3 = n1, n4 = n2;

    cout << endl;
    cout << "Before swapping!!!" << endl;
    cout << "\tn1 = " << n1 << endl;
    cout << "\tn2 = " << n2 << endl;

    cout << endl;
    cout << "After swapping by call by value!!!" << endl;
    swap1(n1, n2);
    cout << "\tn1 = " << n1 << endl;
    cout << "\tn2 = " << n2 << endl;

    cout << endl;
    cout << "After swapping by call by reference!!!" << endl;
    swap2(&n1, &n2);
    cout << "\tn1 = " << n1 << endl;
    cout << "\tn2 = " << n2 << endl;

    cout << endl;
    cout << "After swapping by reference variables!!!" << endl;
    swap3(n3, n4);
    cout << "\tn1 = " << n3 << endl;
    cout << "\tn2 = " << n4 << endl;

    cout << endl;
    // We can return reference variable like this
    swap4(n3, n4) = 50;
    cout << "\tn1 = " << n3 << endl;

    return 0;
}