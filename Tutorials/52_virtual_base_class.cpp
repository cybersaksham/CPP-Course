/*
Virtual Base Class :

           Class A
              |
             / \
Class B <----   ----> Class C
             \ /
              |
           Class D

In above diagram, suppose a variable {{a}} is present in class A.
Then it will be inherited to class B & class C both.
Now we are making a class D inherited from class B & class C both.
Then variable {{a}} will occur 2 times in class D & will make an ambiguity.
So in order to resolve this situation we use concept of virtual base class.

Syntax :
// class B : virtual {{visibility-mode}} A { class-body };
                     --or--
// class C : {{visibility-mode}} virtual A { class-body };

In below example, we are using following inheritance path :

           Student
              |
             / \
   Test <----   ----> Sports
             \ /
              |
           Result
*/

#include <iostream>
using namespace std;

// Student Class
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int a) { roll_no = a; }
    void print_no()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

// Test Class
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Your result is here :" << endl;
        cout << "Maths = " << maths << endl;
        cout << "Physics = " << physics << endl;
    }
};

// Sports Class
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

// Result Class
class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_no();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result o1;
    o1.set_roll_no(101);
    o1.set_marks(94.3, 91.2);
    o1.set_score(8.7);
    o1.display();

    return 0;
}