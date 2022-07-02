// count ways to reach the Nth stairs | CodeStudio
// this is simplest way to solve this problem
// but this code got TLE .we should solve this problem with dp to prevent TLE

#include <iostream>
using namespace std;
int ways(long long nStairs)
{
    //    Base case
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;
    //     Recursive Call
    int ans = ways(nStairs - 1) + ways(nStairs - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of stairs where you want to go-> " << endl;
    cin >> n;
    int result = ways(n);
    cout << "No of ways to reach this stairs-> " << result << endl;
    return 0;
}