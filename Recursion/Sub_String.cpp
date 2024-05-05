#include<iostream>
#include<vector>
using namespace std;

void solve(string str,string output,int index,vector<string>& ans)
{
// base case
if(index>=str.length())
{
    if(output.length()>0)
    {
     ans.push_back(output);
    }
     return ;
}

//excued
solve(str,output,index+1,ans);

//inlude call
char element=str[index];
output.push_back(element);
solve(str,output,index+1,ans);


}

vector<string> sub_string(string str )
{
    vector<string> ans;
    string output="";
    int index=0;
    solve(str,output,index,ans);
    return ans;

}

int main()
{
    string str="har";
    vector<string> ans=sub_string(str);
 
      for(const auto& subset: ans)
      {
        cout << "{ ";
        for (char num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

}