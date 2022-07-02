#include <iostream>
using namespace std;
int getSum(int arr[], int n)
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
    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // char *ptr = new char;
    //  //to delete heap memory
    // delete ptr;

    // int *arr = new int[5];
    // // for free array type heap memory
    // delete []arr;

    int n;
    cin >> n;
    // variable size array
    int *arr2 = new int[n];
    // taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int ans = getSum(arr2, n);
    cout << ans << endl;

    delete[] arr2;

    // ************************************ < DANGER > ***************************************
    // while (true)
    // {
    //     int *ptr = new int;
    // }
    // in the above code their is continuously allocate memory dynamically ; and program wil crashed due to out of sortage of memory
    // because the stack memory autometically free. but heap memory dont free autometically
    // we need to free heap memory by manually by use delete keyword
    return 0;
}