/*
A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length N has N! permutations. 

Examples:

Input: S = “ABC”
Output: “ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”

solution is done using recursion concept

*/
#include<iostream>
#include<vector>
using namespace std;

void solve(string str,int index,vector<string>& ans)
{
    //base case
    if(index>=str.length())
    {
        ans.push_back(str); 
        return ;
    }

    for(int j=index;j<str.length();j++)
    {
        swap(str[index],str[j]);
        solve(str,index+1,ans);

        // backtrack string
        swap(str[index],str[j]);
    }
}

vector<string> permute(string str)
{
    vector<string> ans;
     int index=0;
     solve(str,index,ans);
     return ans;
}


int main()
{
string str="abc";
vector<string> ans= permute(str);

  for (auto s : ans)
    {
        cout << s << " ";
    }
    cout << endl;
       

 return 0;
}