// First and last postion of an element in sorted array using binary search
// and Total no of occurrence of an element in sorted array

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int key = 3;
    int firstpos = firstOcc(arr, 5, key);
    int lastpos = lastOcc(arr, 5, key);
    cout << "First Occurrence-> " << firstOcc << endl;
    cout << "Last Occurrence-> " << lastOcc << endl;

    int totalNoOcc = (lastpos - firstpos) + 1;
    cout << "Total no of occurrence -> " << totalNoOcc << endl;
    return 0;
}