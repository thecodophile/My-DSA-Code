// Find unique element in array
// array length is odd and every element is appear twice except one
// find that one element

#include <iostream>A
using namespace std;
int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[7] = {3, 7, 2, 2, 7, 3, 4};
    cout << "The unique element is->" << findUnique(arr, 7) << endl;
    return 0;
}