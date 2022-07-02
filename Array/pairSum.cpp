// Pair Sum | CodeStudio

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> tmp;
                tmp.push_back(min(arr[i], arr[j]));
                tmp.push_back(max(arr[i], arr[j]));
                ans.push_back(tmp);
            }
        }
    }
    // if not matched any pair
    if (ans.empty() == 1)
    {
        cout << "Not matched any pair";
    }

    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int sumKey = 5;

    cout << "The pair is -> " << endl;
    vector<vector<int>> result = pairSum(arr, sumKey);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}