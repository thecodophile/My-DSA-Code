#include <iostream>
using namespace std;
bool sortornot(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        return sortornot(arr + 1, n - 1);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 9, 11, 13};
    int n = 6;
    int ans = sortornot(arr, n);
    cout << ans;
    return 0;
}