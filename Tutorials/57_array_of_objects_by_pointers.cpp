#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << id << "\t";
        cout << price << endl;
    }
};

int main()
{
    int size = 3, p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id & price of item no " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    cout << endl;
    cout << " Item no \t"
         << "Id \t"
         << "Price " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Item no " << i + 1 << "\t";
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}