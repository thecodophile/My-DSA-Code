// 2D Array
// creating
// printing
// taking input and printing output row wise
// taking input and printing output col wise
// linear search
// print sum row wise
// print sum col wise
// Largest row sum

#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return -1;
}

// To print row wise sum
void printSum(int arr[][4], int row, int col)
{
    cout << "Printing sum row wise-> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// To print col wise sum
void printSumcol(int arr[][4], int row, int col)
{
    cout << "Printing sum col wise-> " << endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum sum is-> " << maxi << endl;
    return rowIndex;
}
int main()
{
    //   create 2D array
    int arr[3][4];

    // // taking input ->row wise input
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // taking input ->coloumn wise input
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }

    // Printing output ->
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    cout << "Enter the element to search-> " << endl;
    int target;
    cin >> target;

    // Linear search in 2d array

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    printSum(arr, 3, 4);
    printSumcol(arr, 3, 4);
    int ansIndex = largestRowSum(arr, 3, 4);
    cout << "max row is at index-> " << ansIndex << endl;
    return 0;
}