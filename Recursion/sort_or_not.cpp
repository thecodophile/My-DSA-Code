// Check an array is Sorted or not using Recursion
//  like binary search

#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return 1;
    }

    else if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 3, 6, 8, 9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Arrays is not sorted " << endl;
    }

    return 0;
}