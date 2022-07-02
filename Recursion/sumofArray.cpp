// Sum of array elements using recursion

#include <iostream>
using namespace std;
int getSum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[0] + getSum(arr + 1, n - 1);
}
int main()
{
    int arr[5] = {1, 24, 3, 84, 55};
    int size = 5;
    int sum = getSum(arr, size);
    cout << "Sum is-> " << sum << endl;
    return 0;
}