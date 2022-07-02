// Squre Root using Binary Search; only integer part of the ans will show | LeetCode

#include <iostream>
using namespace std;
long long int squreRootBS(int n)
{
    int s = 0;
    int e = n - 1;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // square>n
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number -> ";
    cin >> n;
    int ans = squreRootBS(n);
    cout << "The squre root of the number is-> " << ans << endl;
    return 0;
}