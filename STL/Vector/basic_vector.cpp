#include <iostream>
// Include vector STL library
#include <vector>

using namespace std;
int main()
{
    vector<int> v;

    // Another method to initialize vector
    vector<int> a(5, 1);
    // Meaning -> create 'a' vector ,size 5 and every element initialize with 1;
    cout << "Elements of a vector: " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copy one vector to another
    vector<int> b(a);
    cout << "Elements of b vector: " << endl;
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl;
    // Capacity tells how many memory is allocated; size tells how many elements are stored

    cout << "Elements at 2nd index: " << v.at(2) << endl;
    cout << "Firsts element : " << v.front() << endl;
    cout << "Last element : " << v.back() << endl;
    cout << "Empty or not : " << v.empty() << endl;

    cout << "Before pop: " << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "Before clear size: " << v.size() << endl;
    cout << "Before clear capacity: " << v.capacity() << endl;
    v.clear();
    cout << "After clear size: " << v.size() << endl;
    cout << "After clear capacity: " << v.capacity() << endl;

    return 0;
}