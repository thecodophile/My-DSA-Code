// Fibonacci Number using Recursion

#include <iostream>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        //         base case
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};
int main()
{
    Solution obj;
    int index;
    cout << "Enter the index-> ";
    cin >> index;
    cout << "The Fibonacci number at this index is-> " << obj.fib(index) << endl;
    return 0;
}