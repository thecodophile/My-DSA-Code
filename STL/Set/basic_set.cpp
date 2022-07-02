// Set stored all unique elements
/*
if i push one element many times ,in set the element will push only one time because set
stored only unique elements.

if i push one element then later i can not modify the element . i only can do push an element
and delete that

element will return in sorted order

Difference between  unorder set and set
set is slow than unorder set.
in onorder set when we fetch element that will not in sorted order
*/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(0);
    s.insert(0);
    s.insert(2);

    // The complexity of insert operation is O(logn)

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "How many times  4 is present-> " << s.count(4) << endl;

    set<int>::iterator itr = s.find(3);
    for (it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}