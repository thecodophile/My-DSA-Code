// How to create 2D array dynamically
// Input/Output
// and free the memory of dynamically created array

#include <iostream>
using namespace std;
int main()
{
    /*
    //Creating arr[n][n] dynamically

    int n;
    cout << "Enter n-> " << endl;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // 2D array creation done

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking input done

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Printing Done

*/

    // Creating arr[n][m] dynamically
    int row, col;
    cout << "Enter row and col-> ";
    cin >> row >> col;
    int **arr2 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr2[i] = new int[col];
    }
    // 2D array creation done

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }
    // taking input done

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Printing Done

    // Releasing 2D array memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;

    return 0;
}