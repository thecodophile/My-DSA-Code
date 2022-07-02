// Intersection of two sorted arrays | CodeStudio

/*
// Thid is esasyest approach; but got TLE !!
#include <iostream>
using namespace std;
void findArrayIntersection(int *arr1, int n, int *arr2, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] < arr2[j])
            {
                break;
            }
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << endl;
                arr2[j] = -112233;
                break;
            }
        }
    }
}
int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};
    findArrayIntersection(arr1, 6, arr2, 4);
    return 0;
}
*/

/*
// implement of Above solution with vector; with TLE
#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] < arr2[j])
            {
                break;
            }
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                arr2[j] = -112233;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> result = findArrayIntersection(arr1, 6, arr2, 4);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

// Optimized solution

#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        { // arr1[i]>arr2[j]
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> result = findArrayIntersection(arr1, 6, arr2, 4);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}