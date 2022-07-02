#include <iostream>
using namespace std;
bool linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[4] = {2, 1, 3, 5};
    cout << linear(arr, 4, 7);
    return 0;
}