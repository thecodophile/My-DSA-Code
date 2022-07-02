// Peak Index in Mountain Array | Leetcode

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
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
    vector<int> arr = {3, 4, 5, 1};

    Solution obj;
    int ans = obj.peakIndexInMountainArray(arr);
    cout << "The index of the peak element is-> " << ans << endl;

    return 0;
}