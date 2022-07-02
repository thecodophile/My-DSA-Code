// Quick Sort using recursion

#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    // place pivot at right place position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left or righ wala part samval lete hai
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] <= pivot)
        {
            i++;
        }
        else if (arr[j] > pivot)
        {
            j--;
        }
        else if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition karenge
    int p = partition(arr, s, e);

    // left part sort karenge
    quickSort(arr, s, p - 1);
    // right part sort karenge
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}