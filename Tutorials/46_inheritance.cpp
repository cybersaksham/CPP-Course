#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
};

// Derived Class
/* Syntax --> 
class {{derived-class-name}} : {{viisbility-mode}} {{base-class-name}}
{
    class methods ......
};
*/
/* Notes -->
1. Default visibility mode is private
2. Public visibility mode --> Public member of base class becomes public members of derived class
3. Private visibility mode --> Public member of base class becomes private members of derived class
4. Private members are never inherited.
*/

// Creating a Programmer class derived from Employee class
class Programmer : public Employee
{
    int languageCode = 9;

public:
    Programmer(int inpId)
    {
        id = inpId;
    }
};

int main()
{
    Employee emp1(1), emp2(2);
    cout << emp1.salary << endl;
    cout << emp2.salary << endl;

    Programmer pro1(1), pro2(2);
    cout << pro1.id << endl;
    cout << pro2.id << endl;

    return 0;
}