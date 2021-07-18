// Structure is collection of elements of different data types.
// It allocates memory equal to total of all data types made.

#include <iostream>
using namespace std;

// typedef is not necessary but it is used for shortcut
/*
// We can define like this also but then we must have to use as used in saksham & shubham
struct employee
{
    int eId;
    char favChar;
    float salary;
};
*/

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} emp;

int main()
{
    struct employee saksham;
    saksham.eId = 1;
    saksham.favChar = 's';
    saksham.salary = 10000;

    cout << endl;
    cout << "The details of saksham are:" << endl;
    cout << "The Id is " << saksham.eId << endl;
    cout << "The favourite character is " << saksham.favChar << endl;
    cout << "The salary is " << saksham.salary << endl;

    struct employee shubham;
    shubham.eId = 2;
    shubham.favChar = 'a';
    shubham.salary = 5000;

    cout << endl;
    cout << "The details of shubham are:" << endl;
    cout << "The Id is " << shubham.eId << endl;
    cout << "The favourite character is " << shubham.favChar << endl;
    cout << "The salary is " << shubham.salary << endl;

    emp rohan;
    rohan.eId = 3;
    rohan.favChar = 'r';
    rohan.salary = 1000;

    cout << endl;
    cout << "The details of rohan are:" << endl;
    cout << "The Id is " << rohan.eId << endl;
    cout << "The favourite character is " << rohan.favChar << endl;
    cout << "The salary is " << rohan.salary << endl;

    return 0;
}