#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    cout << "Finding 4 using binary search-> " << binary_search(v.begin(), v.end(), 4) << endl;
    cout << "Lower bound-> " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << abcd;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate->" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "After short->" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}