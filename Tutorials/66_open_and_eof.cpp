#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream hout;
    hout.open("T64_sample.txt");
    hout << "This is saksham.\n";
    hout << "I am programmer.\n";
    hout.close();

    ifstream hin;
    hin.open("T64_sample.txt");
    string st;
    while (hin.eof() == 0)
    {
        getline(hin, st);
        cout << st << endl;
    }
    hin.close();

    return 0;
}