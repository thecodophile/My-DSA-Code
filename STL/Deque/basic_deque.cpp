#include <iostream>
// Include STL Deque header file
#include <deque>

using namespace std;
int main()
{

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout << "Print : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();

    // cout << "Print : " << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // d.pop_front();

    // cout << "Print : " << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Print first index element : " << d.at(1) << endl;
    cout << "Firsts element : " << d.front() << endl;
    cout << "Last element : " << d.back() << endl;
    cout << "Empty of not : " << d.empty() << endl;

    cout << "Before clear size: " << d.size() << endl;
    // d.clear();
    // clear fuction is working here; but here i intruduced a new fuction called erase
    d.erase(d.begin(), d.begin() + 1);
    // here i want to delete first element so i do that ; erase fuction is little more complex
    cout << "After clear size: " << d.size() << endl;

    cout << "Print : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}