// Linear search with recursion

#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}
// process 02 -> with index

int searchElement(int arr[], int size, int key)
{
    size--;
    if (size < 0)
    {
        return -1;
    }
    if (arr[size] == key)
    {
        return size;
    }
    return searchElement(arr, size, key);
}
int main()
{
    int arr[10] = {3, 5, 1, 2, 6, 7, 2, 8, 9, 21};
    int size = 10;
    int key = 6;
    int ans = linearSearch(arr, size, key);
    if (ans != 0)
    {
        cout << "Element " << key << " is present in the array" << endl;
    }
    else
    {
        cout << "Element " << key << " is not present in the arry" << endl;
    }

    int ansIndex = searchElement(arr, size, key);
    if (ansIndex != -1)
    {
        cout << "Element " << key << " is present at index " << ansIndex << endl;
    }
    else
    {
        cout << "Element " << key << " is not present " << endl;
    }
    return 0;
}