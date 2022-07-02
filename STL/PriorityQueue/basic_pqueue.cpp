#include <iostream>
// Include queue header file
#include <queue>

using namespace std;
int main()
{
    //   Max heap
    priority_queue<int> maxi;

    //   Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int size = maxi.size();
    cout << "Size-> " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(3);
    mini.push(4);
    mini.push(0);
    mini.push(1);

    int size1 = mini.size();
    cout << "Size-> " << size1 << endl;

    for (int i = 0; i < size1; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty or not: " << mini.empty() << endl;

    return 0;
}