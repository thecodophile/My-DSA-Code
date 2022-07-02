// Insertion Sort

#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{

    vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(7, arr);
    cout << "The array after Insertion sort is-> ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
#include <iostream>
#define MAX 100
using namespace std;
int main()
{
    int arr[MAX], i, j, k, n;
    cout << "Enter the number of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i << "->";
        cin >> arr[i];
    }

    //  Insertion sort
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        for (j = i - 1; j >= 0 && k < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = k;
    }

    cout << "sorted list is -> " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/