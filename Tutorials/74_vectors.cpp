/*
Ways to create a vector :
1. vector<int> v1; // Zero length vector
2. vector<char> v2(4); // 4-element vector
3. vector<char> v3(v2); // 4-element vector
4. vector<int> v4(a, b); // This is a vector of size a wihch contain only b a times. (b b b .... a times)
*/

/*
Some important methods :

-----ITERATORS-----
1. begin() --- return iterator to beginning
2. end() --- return iterator to end

-----CAPACITY-----
1. size() --- returns size of vector
2. max_size() --- returns maximum size of vector
3. resize(a) --- if a is less than previous size then only first a elements left in vector
4. resize(a) --- if a is greater than previous size then size changes to a, previous elements remain same & rest elements become zero
5. resize(a, b) --- if a is greater than previous size then size changes to a, previous elements remain same & rest elements become b
6. empty() --- check whether vector is empty

-----ELEMENT ACCESS-----
1. at(a) --- return element present at position a
2. front() --- return first element
3. back() --- return last element

-----MODIFIERS-----
1. assign(a, b) --- assign b a times (b b b ...... a times)
2. assign(iter1, iter2) --- assign values at iter1 to iter2
3. assign(arr, arr + a) --- assign first a elements of arr, if a is greater than size of arr then extra elements become zero
4. push_back(a) --- inserting a at end
5. pop_back() --- removing element at end
4. insert(iter, b) --- insert b at iter
5. insert(iter, n, b) --- insert n copies of b at iter
6. insert(iter1, iter2, iter3) --- insert value from iter2 to iter3 at iter1
7. erase(iter) --- erase value at iter
8. erase(iter1, iter2) --- erase value from iter1 to iter2
9. vec1.swap(vec2) --- swap vec1 & vec2 totally
10. clear() --- clear vector totally
*/

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a, size;
    vector<int> vec1;

    cout << "Enter size = ";
    cin >> size;
    cout << "Enter element to add to this vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    display(vec1);

    // Making Iterator
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 50);
    display(vec1);

    return 0;
}