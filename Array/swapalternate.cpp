// Swap alternate

#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    int arr1[6] = {66, 77, 88, 99, 11, 22};
    swapAlternate(arr, 5);
    swapAlternate(arr1, 6);

    cout << "Array after swapAlternate->" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}