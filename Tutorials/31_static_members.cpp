#include <iostream>
using namespace std;

class Employee
{
    int id;
    // Static variables are class variables & value of these do not change object to object.
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id = ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee no " << count << endl;
    }
    static void getCount(void)
    {
        // Static function can access only static members.
        // cout << id; --> will throw an error
        cout << "The no of employees till now is " << count << endl;
    }
};

int Employee::count; // Default value is zero

int main()
{
    Employee saksham, rohan, harry;

    saksham.setData();
    saksham.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    return 0;
}