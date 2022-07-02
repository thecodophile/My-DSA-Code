// Search in a rotated sorted array |CodeStudio

#include <iostream>
#include <vector>
using namespace std;
int findPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(vector<int> &arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key<arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        //         binarySearch on second line
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        //         binarySearch on first line
        binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    vector<int> arr = {7, 9, 1, 2, 3};
    int size = 5;
    int key = 2;
    int ans = findPosition(arr, size, key);
    cout << "The searching element is present at index-> " << ans << endl;
    return 0;
}