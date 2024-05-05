/*

problem:

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example :
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

*/

#include<iostream>
#include<vector>
using namespace std;

void solve(string digit,string output,int index,vector<string>& ans,string mapping[])
{

    //base case
    if(index>=digit.length())
    {
        ans.push_back(output);
        return ;
    }

    //proccensing
    int num=digit[index]-'0';
    string value=mapping[num];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }

}

vector<string> Phone_key(string digit)
{
    vector<string> ans;
    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,index,ans,mapping);
   return ans;
}

int main()
{
    string digit;
    cout<<"Enter the digit"<<endl;
    cin>>digit;
    
    vector<string> result=Phone_key(digit);

    for(const auto& sub:result)
    {
        cout<<" { ";
        for(char str:sub){
            cout<<str;
        }
        cout<<" } ";
    }

    return 0;
}