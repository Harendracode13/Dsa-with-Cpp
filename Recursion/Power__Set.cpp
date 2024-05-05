/*

problem: 
Given an integer array nums of unique elements, return all possible 
subsets(the power set).

Example:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

*/

#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums,vector<int> output, int index, vector<vector<int>>& ans){

    //base case
    if(index>=nums.size())
    {
        ans.push_back(output);
        return ;

    } 
    //exclude
    solve(nums,output,index+1,ans);

    //include
    int element=nums[index];
    
    output.push_back(element);

    solve(nums,output,index+1,ans);


}

vector< vector<int> > subsets(vector<int>& nums){

    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;

}


int main()
{
     vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    // Print the subsets
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}