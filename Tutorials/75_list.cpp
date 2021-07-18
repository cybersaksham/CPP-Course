/*
Ways to create a list :
same as vector
*/

/*
Some important methods :
Most methods are same as vectors but some important different methods are described below :

-----ELEMENT ACCESS-----
1. at(a) --- this function present in vector but not in list

-----MODIFIERS-----
1. push_front(a) --- inserting a at starting
2. pop_front() --- removing element at starting

-----OPERATIONS-----
1. list1.splice(iter, list2) --- insert whole list2 in list 1 at iter, list2 becomes empty & iter reaches to next of all elements of list2 inserted
2. list1.splice(iter1, list2, iter2) --- move element present at iter2 of list2 to iter1 of list1, iter2 becomes invalid
3. list1.splice(iter1, list2, iter2, iter3) --- move elements of list2 present from iter2 to iter3 to iter1 of list1
4. remove(a) --- deletes all occurences of element a
5. remove_if(bool) --- deletes all values which retutn true in bool
6. unique() --- remove duplicates
7. unique(bool) --- only save first element in all those duplicates which follow bool, remove all others
8. list1.sort(list2) --- if both are sorted then merge them in list1 & sort it
                         if not sorted then merge simply in list1
                         in both cases list2 becomes empty
9. reverse() --- reverses list
*/

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int a, size;
    list<int> l1;

    cout << "Enter size = ";
    cin >> size;
    cout << "Enter element to add to this list" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        l1.push_back(a);
        l2.push_back(a * 10);
    }
    display(l1);

    return 0;
}