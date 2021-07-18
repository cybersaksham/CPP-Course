#include <iostream>
using namespace std;

class Employee
{
    int id, salary;

public:
    void setId(void)
    {
        salary = 100;
        cout << "Enter id of employee = ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of employee is " << id << endl;
    }
};

int main()
{
    Employee arr[4];

    for (int i = 0; i < 4; i++)
    {
        arr[i].setId();
        arr[i].getId();
    }

    return 0;
}