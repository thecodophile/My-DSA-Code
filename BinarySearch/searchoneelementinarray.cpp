// Binary Search
// search an element in array using binary search 
#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        { // key<arr[mid]
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {5, 11, 13, 17, 19, 27};
    int key = 19;
    cout << "The element is in index-> " << binarySearch(arr, 6, key) << endl;

    int arr2[5] = {4, 8, 16, 22, 34};
    int key2 = 4;
    cout << "The element is in index-> " << binarySearch(arr2, 5, key2) << endl;
    return 0;
}