// Bubble sort using Recursion

#include <iostream>
using namespace std;
void sortArray(int *arr, int size)
{
    // Base case- already sorted
    if (size == 0 || size == 1)
    {
        return;
    }
    // 1 case solve - placed largest element to the end
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // call recursion
    sortArray(arr, size - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}