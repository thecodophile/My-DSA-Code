// Search element in array using linear search

#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            a = i;
        }
    }
    return a;
}
int main()
{
    int arr[8] = {1, 6, 8, 9, 3, 4, 0, 21};
    cout << "The index of the serch element is->" << linearSearch(arr, 8, 4) << endl;
    return 0;
}