/*

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example :
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> rotate(vector<int> num, int k)
{
    vector<int> temp(num.size());
    for (int i = 0; i < num.size(); i++)
    {
        temp[(i + k) % num.size()] = num[i];
    }
    num = temp;
    return temp;
}

void print(vector<int> v)
{
    cout<<"\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> v;

    v.push_back(9);
    v.push_back(0);
    v.push_back(19);
    v.push_back(29);
    v.push_back(3);
    v.push_back(7);
    v.push_back(20);
    v.push_back(13);

    cout<<"before rotate :";
    print(v);
    vector<int> ans = rotate(v, 1);
    cout<<"after rotate :";
    print(ans);

    return 0;
}