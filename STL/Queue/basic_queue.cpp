#include <iostream>
// Include queue header file
#include <queue>

using namespace std;
int main()
{
    // queue use FIFO method
    queue<string> q;
    q.push("Somnath");
    q.push("Dey");
    q.push("Santu");

    cout << "Size of queue: " << q.size() << endl;
    cout << "First element: " << q.front() << endl;
    q.pop();
    cout << "First element: " << q.front() << endl;
    cout << "Size of queue after pop: " << q.size() << endl;

    return 0;
}