// Sum of the array list

#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {1, 3, 4, 5, 6};
    cout << "The arry is-> " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of the arry is-> " << sum(arr, 5) << endl;

    return 0;
}