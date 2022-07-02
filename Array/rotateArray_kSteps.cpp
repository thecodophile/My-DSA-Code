// Rotate Array k steps | LeetCode

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        // in the question said that return nums as ans so we copy temp to nums
        nums = temp;
    }
};
int main()
{
    vector<int> arr = {1, 7, 9, 11};
    int k = 2;

    Solution obj;
    obj.rotate(arr, k);

    cout << "The rotated vector is -> ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}