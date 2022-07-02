// Sort 0 and 1

#include <iostream>
using namespace std;
void sortOne(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[e] == 1)
        {
            e--;
        }
        else if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortOne(arr, 8);
    printArray(arr, 8);
    return 0;
}