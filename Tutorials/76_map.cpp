/*
Ways to create a map :
same as vector
*/

/*
Some important methods :
Most methods are same as list but some important different methods are described below :

-----ELEMENT ACCESS-----
1. at(a) --- return value present at key a

-----MODIFIERS-----
1. push & pull functions are not present

-----OPERATIONS-----
1. find(a) --- return location of key a
2. count(a) --- returns no of occurences of key a
3. lower_bound(a) --- iterator goes to key a
4. upper_bound(a) --- iterator goes next to key a
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marks;
    marks["saksham"] = 90;
    marks["rohan"] = 58;
    marks["rahul"] = 65;

    map<string, int>::iterator it;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}