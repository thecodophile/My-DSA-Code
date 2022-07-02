// Reverse an array

#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v, int m)
{
    int s = m + 1, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    int m = 1;
    cout << "Print the array-> " << endl;
    print(v);
    cout << "Print the array after reverse-> " << endl;
    vector<int> ans = reverse(v, m);
    print(ans);
    return 0;
}