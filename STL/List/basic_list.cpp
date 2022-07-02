#include <iostream>
// Include List header file
#include <list>

using namespace std;
int main()
{

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout << "Print: " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // l.erase(l.begin());
    // cout << "Print : " << endl;
    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Size of list : " << l.size() << endl;

    // Test previous learned fuctions in this case 
    // most of the function work here also.

    return 0;
}