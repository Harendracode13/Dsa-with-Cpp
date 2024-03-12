/*
Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.

*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(int m, vector<int> v)
{
    int s=m+1,e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int m = -1;
     cout << "enter the index from you want reverse : ";
     cin>>m;
     cout<<"before the reverse :\n";
     print(v);
     cout<<"after the reverse :\n";
    vector<int> ans = reverse(m, v);
    print(ans);
}