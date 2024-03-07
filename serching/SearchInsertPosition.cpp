/*

Problem :Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index    where it would be if it were inserted in order.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = 0;

        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return s;
    }
};

int main()
{
    vector<int> nums={1,2,3,4,6,7,9,12,14};
    Solution solution;
    int key=solution.searchInsert(nums,8);
    cout<<"index :"<<key;
    return 0;
}
