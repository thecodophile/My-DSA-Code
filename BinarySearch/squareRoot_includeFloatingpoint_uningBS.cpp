// Squre Root using Binary Search; integer + floating part of the ans will show | LeetCode

#include <iostream>
using namespace std;
long long int squreRootInt(int n)
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

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10; // factor -> 0.1 -> 0.01 -> 0.001
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number -> ";
    cin >> n;
    int tempSol = squreRootInt(n);
    cout << "The squre root of the number is-> " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}