// Move all zeros to right side. | LeetCode

#include <iostream>
using namespace std;
void moveZeros(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {2, 0, 1, 3, 0, 0, 0};
    moveZeros(arr, 7);
    print(arr, 7);
    return 0;
}
