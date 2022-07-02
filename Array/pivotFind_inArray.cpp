// Find pivot in an array 

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findPivot(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};
int main()
{
    vector<int> arr = {3, 8, 10, 17, 1};

    Solution obj;
    int ans = obj.findPivot(arr);
    cout << "The index of the pivot element is-> " << ans << endl;

    return 0;
}