// Print counting
// ex=> i/p-> 5 ; o/p-> 5 4 3 2 1

#include <iostream>
using namespace std;
void printCount(int n)
{
    if (n == 0)
    {
        return;
    }

    printCount(n - 1);
    cout << n << " ";
    // printCount(n - 1);
}
int main()
{
    int n;
    cout << "Enter the digit-> ";
    cin >> n;
    printCount(n);
    return 0;
}