#include <iostream>
using namespace std;
bool linear(int arr[], int n, int key)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    return linear(arr + 1, n - 1, key);
}
int main()
{
    int arr[4] = {2, 1, 3, 5};
    cout << linear(arr, 4, 3);
    return 0;
}