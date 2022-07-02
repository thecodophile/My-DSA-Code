#include <iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    for (i = 0, j = 0; i < n, j < m; i++)
    {
        if (arr1[i] == 0)
        {
            arr1[i] = arr2[j];
            j++;
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr1[6] = {1, 2, 3};
    int arr2[3] = {2, 5, 6};
    merge(arr1, arr2, 6, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    insertionSort(arr1, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}