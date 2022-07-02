// Merge two sorted arrays | LeetCode

#include <iostream>
using namespace std;
void mergeArray(int arr1[], int arr2[], int size_arr1, int size_arr2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < size_arr1 && j < size_arr2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            // k++;
            // i++;
        }
        else
        {
            arr3[k++] = arr2[j++];
            // k++;
            // j++;
        }
    }
    // If there is remaining element in arr1 then copy it
    while (i < size_arr1)
    {
        arr3[k++] = arr1[i++];
        // k++;
        // i++;
    }
    // If there is remaining element in arr2 then copy it

    while (j < size_arr2)
    {
        arr3[k++] = arr2[j++];
        // k++;
        // j++;
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    int size_arr1 = 5;
    int size_arr2 = 3;
    mergeArray(arr1, arr2, size_arr1, size_arr2, arr3);
    print(arr3, 8);
    return 0;
}