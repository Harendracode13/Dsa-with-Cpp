/*Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. The non-zero elements must be ordered in their order of appearance.

For example,
input array : [0, 1, -2, 3, 4, 0, 5, -27, 9, 0]
output array: [1, -2, 3, 4, 5, -27, 9, 0, 0, 0]

*/
#include<iostream>
#include<vector> 
using namespace std;

vector<int> moveZeros(vector<int> v)
{
    int i=0;
    //This is loop for move zeros
    for(int j=0;j<v.size();j++)
    {
        if(v[j]!=0)
        {
            swap(v[j],v[i]);
            i++;
        }
    }
    return v;
}
void print(vector<int> v)
{
    for(auto i:v)
    {
    cout<<i<<" ";
    }cout<<"\n";
}

int main()
{
    vector<int> v;

    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    v.push_back(0);
    v.push_back(7);
    v.push_back(0);
    v.push_back(3);


    print(v);
   vector<int> ans= moveZeros(v);
    print(ans);

    return 0;
}
