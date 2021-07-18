/*
Multilevel Inheritance :
Class A --> Class B --> Class C --> ......
1. A is the base class for B.
2. B is the base class for C.
3. A-->B-->C is called inheritance path.
*/

#include <iostream>
using namespace std;

// Student class
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student::set_roll_no(int r)
{
    roll_no = r;
}

void Student::get_roll_no()
{
    cout << "The roll no is " << roll_no << endl;
}

// Exam class inherited from Student class
class Exam : public Student
{
    /*
    Private   -> ----
    Protected -> roll_no
    Public    -> set_roll_no(), get_roll_no()
    */
protected:
    float math, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "The marks obtained in maths are " << math << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

// Result class inherited from Exam class
class Result : public Exam
{
    /*
    Private   -> ----
    Protected -> roll_no, math, physics
    Public    -> set_roll_no(), get_roll_no(), set_marks(), get_marks()
    */
    float percentage;

public:
    void display(void)
    {
        cout << endl;
        get_roll_no();
        get_marks();
        cout << "Your percentage is " << (math + physics) / 2 << " %" << endl;
    }
};

int main()
{
    Result s1;
    s1.set_roll_no(101);
    s1.set_marks(99.1, 95.6);
    s1.display();

    return 0;
}