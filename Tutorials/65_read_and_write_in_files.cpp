#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Connecting file with ofstream
    ofstream hout("T64_sample.txt");

    // Creating a name string & taking input for this
    cout << "Enter your name" << endl;
    string name;
    cin >> name; // cin only takes first word as input

    // Writing string to file
    hout << "My name is " + name;

    // Closing File
    hout.close();

    ifstream hin("T64_sample.txt");
    string content;
    getline(hin, content);
    cout << "The content in file is :" << endl;
    cout << content << endl;
    hin.close();

    return 0;
}