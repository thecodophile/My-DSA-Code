// Simple recursion tutorial

#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "Sorce " << src << " Destination " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "Reached Home" << endl;
        return;
    }
    // processing -> increase src
    src++;
    // recursive call
    reachHome(src, dest);
}
int main()
{
    int destination = 10;
    int sorce = 1;
    reachHome(sorce, destination);
    return 0;
}