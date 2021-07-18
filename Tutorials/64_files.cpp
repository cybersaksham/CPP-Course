/*
The useful classes for working with files are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files, you will have to open it.
Primarily, there are 2 ways to open a file :
1. Using the constructor
2. Using the member function open() of the class
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string str1 = "This is sample file for T-64.";
    // // Opening file using constructor & writing it
    // ofstream out("T64_sample.txt"); // Write Operation
    // out << str1;

    string str2;
    // Opening file using constructor & reading it
    ifstream in("T64_sample.txt"); // Write Operation
    // in >> str2; --> This takes only first word
    getline(in, str2); // --> This takes a line from file.
    cout << str2 << endl;

    return 0;
}